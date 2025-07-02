// Fill out your copyright notice in the Description page of Project Settings.


#include "GeoJSON_Functions.h"
#include "Json.h"
#include "JsonUtilities.h" 
#include "Data.h"


FCRS UGeoJSON_Functions::GetCRS(TSharedPtr<FJsonObject> JsonObject)
{
    TSharedPtr<FJsonObject> CRSObject = JsonObject->GetObjectField("crs");
    FCRS crs;

    if (CRSObject->HasField("type"))
    {
        FName crs_type = FName(CRSObject->GetStringField("type"));

        if (crs_type == "name")
        {
            crs.Type = crs_type;
        }
        else if (crs_type == "link")
        {
            UE_LOG(LogTemp, Error, TEXT("This CRS type (link) is currently not supported!"));
            crs.Type = "Unsupported";
            return crs;
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("Unknown CRS type Found!"));
            crs.Type = "Unsupported";
            return crs;
        }
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("Type field in CRS field not found!"));
        crs.Type = "None";
        return crs;

    }

    if (CRSObject->HasField("properties"))
    {
        TSharedPtr<FJsonObject> CRSProperties = CRSObject->GetObjectField("properties");

        if (CRSProperties->HasField("name"))
        {
            FName name = FName(CRSProperties->GetStringField("name"));
            crs.Properties.Name = name;
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("Name field in CRS Properties field not found!"));
            crs.Properties.Name = "None";
            return crs;
        }
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("Properties field in CRS field not found!"));
        crs.Properties.Name = "None";
        return crs;
    }

    return crs;
}

ETypes UGeoJSON_Functions::GetType(TSharedPtr<FJsonObject> JsonObject)
{
    // Get the "type" field
    FString TypeString;
    if (JsonObject->TryGetStringField(TEXT("type"), TypeString))
    {
        if (TypeString == TEXT("Point")) return ETypes::Point;
        else if (TypeString == TEXT("LineString")) return ETypes::LineString;
        else if (TypeString == TEXT("Polygon")) return ETypes::Polygon;
        else if (TypeString == TEXT("MultiPoint")) return ETypes::MultiPoint;
        else if (TypeString == TEXT("MultiLineString")) return ETypes::MultiLineString;
        else if (TypeString == TEXT("MultiPolygon")) return ETypes::MultiPolygon;
        else if (TypeString == TEXT("Feature")) return ETypes::Feature;
        else if (TypeString == TEXT("FeatureCollection")) return ETypes::FeatureCollection;
        else return ETypes::Unsupported;

        UE_LOG(LogTemp, Log, TEXT("Determined GeoJSON type: %s"), *TypeString);
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("GeoJSON does not contain a 'type' field."));
        return ETypes::Unsupported;
    }
}

TMap<FString, FString> UGeoJSON_Functions::GetProperties(TSharedPtr<FJsonObject> JsonObject) 
{
    TMap<FString, FString> Properties;

    if (JsonObject->HasField(TEXT("properties")))
    {
        TSharedPtr<FJsonObject> PropertiesObject = JsonObject->GetObjectField(TEXT("properties"));

        for (const auto& Pair : PropertiesObject->Values)
        {
            const TSharedPtr<FJsonValue>& Value = Pair.Value;
            FString ValueAsString;

            switch (Value->Type)
            {
            case EJson::String:
                ValueAsString = Value->AsString();
                break;
            case EJson::Number:
                ValueAsString = FString::SanitizeFloat(Value->AsNumber());
                break;
            case EJson::Boolean:
                ValueAsString = Value->AsBool() ? TEXT("true") : TEXT("false");
                break;
            case EJson::Null:
                ValueAsString = TEXT("null");
                break;
            default:
                UE_LOG(LogTemp, Warning, TEXT("Property '%s' is a complex type and will be skipped."), *Pair.Key);
                continue;
            }

            Properties.Add(Pair.Key, ValueAsString);
        }
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("No 'properties' field found in GeoJSON."));
    }

    return Properties;
}

TSharedPtr<FJsonObject> UGeoJSON_Functions::FStringToJSONObject(const FString& JSONString)
{
    TSharedPtr<FJsonObject> OutJsonObject;
    TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(JSONString);

    if (FJsonSerializer::Deserialize(Reader, OutJsonObject) && OutJsonObject.IsValid())
    {
        UE_LOG(LogTemp, Log, TEXT("JSON deserialization successful."));
        return OutJsonObject;
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to deserialize JSON string."));
        return nullptr;
    }
}

FString UGeoJSON_Functions::LoadGeoJSON(FString Path)
{
    FString GeoJSONString;

    // Check if the file exists
    if (!FPlatformFileManager::Get().GetPlatformFile().FileExists(*Path))
    {
        UE_LOG(LogTemp, Error, TEXT("File does not exist: %s"), *Path);
        return TEXT("File does not exist"); // Return empty string if file does not exist
    }

    // Read the file contents into a string
    if (!FFileHelper::LoadFileToString(GeoJSONString, *Path))
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to load file: %s"), *Path);
        return TEXT("Failed to load file"); // Return empty string if file loading fails
    }
    // Check if the string is empty
    if (GeoJSONString.IsEmpty())
    {
        UE_LOG(LogTemp, Error, TEXT("File is empty: %s"), *Path);
        return TEXT("File is empty"); // Return empty string if file is empty
    }

    UE_LOG(LogTemp, Log, TEXT("Successfully loaded GeoJSON from: %s"), *Path);
    return GeoJSONString; // Return the JSON content as a string
}

bool UGeoJSON_Functions::IsValidGeoJSON(UObject* self, TSharedPtr<FJsonObject> data)
{
    FString ObjectName = self ? self->GetName() : TEXT("Unknown");

    if (!data.IsValid())
    {
        UE_LOG(LogTemp, Warning, TEXT("%s: Data is null or invalid."), *ObjectName);
        return false;
    };

	return true;
    
}


