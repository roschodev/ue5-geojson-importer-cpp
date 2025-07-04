// Fill out your copyright notice in the Description page of Project Settings.

#include "GeoJSON_Manager.h"
#include "Json.h"
#include "JsonUtilities.h"
#include "Data.h"


// Sets default values
AGeoJSON_Manager::AGeoJSON_Manager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}
void AGeoJSON_Manager::BeginPlay()
{
	Super::BeginPlay();

	
	GeoJSON_Layers = LoadGeoJSONFiles(FilePaths);

	
	TSet<FString> AllGridCodes; 

	for (FGeoJSON_Layer& Layer : GeoJSON_Layers)
	{
		TArray<FString> LayerCodes;
		if (isGeoJSONGridBased(Layer.JSONString, LayerCodes))
		{
			Layer.isGridBased = true;            
			Layer.Codes = LayerCodes;          
			AllGridCodes.Append(LayerCodes);       
		}
		else
		{
			Layer.isGridBased = false;
		}
	}


	for (const FString& Code : AllGridCodes)
	{
		UE_LOG(LogTemp, Display, TEXT("Grid Code: %s"), *Code);
	}


	FVector2D coordsMin;
	FVector2D coordsMax;
	CalculateGridBounds(AllGridCodes, );

	// Next Steps:
	// 1. Parse Easting/Northing from each code (e.g., E1234N5678 -> 1234, 5678)
	// 2. Find min/max to create bounding box
	// 3. Spawn grid cells from min to max range
	// 4. Populate each cell with relevant features from layers

	
	
}
void AGeoJSON_Manager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

//Loading Logic
TArray<FGeoJSON_Layer> AGeoJSON_Manager::LoadGeoJSONFiles(TArray<FString> filePaths)
{
	TArray<FGeoJSON_Layer> layers;

	if (filePaths.IsEmpty())
	{
		UE_LOG(LogTemp, Display, TEXT("Please Enter FilePaths on the GeoJSON Manager!"));
		return layers;
	}

	for (FString filePath : filePaths)
	{
		bool isLoaded;
		FGeoJSON_Layer Layer = LoadGeoJSONFile(filePath, isLoaded);
		if (!isLoaded)
		{
			continue;
		}
		layers.Add(Layer);
	}
	return layers;

}
FGeoJSON_Layer AGeoJSON_Manager::LoadGeoJSONFile(FString filePath, bool& isLoaded)
{
	//local variables

	isLoaded = false;
	FString json_string;
	FGeoJSON_Layer layer;

	//-------------------------

	//Checking file validity

	if (!doesFileExist(filePath)) {

		UE_LOG(LogTemp, Error, TEXT("Failed to load file: %s. It does not exist or the filepath is not correct."), *filePath);
		isLoaded = false;
		return layer;
	}

	if (!FFileHelper::LoadFileToString(json_string, *filePath))
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to load file: %s. Failed to load the found file to string."), *filePath);
		isLoaded = false;
		return layer;
	}

	if (json_string.IsEmpty())
	{
		UE_LOG(LogTemp, Error, TEXT("File is empty: %s"), *filePath);
		isLoaded = false;
		return layer;
	}

	isLoaded = true;
	//-------------------------

	//Setting the layer information

	layer.FilePath = filePath;
	layer.JSONString = json_string;

	TSharedPtr<FJsonObject> json;
	json = FStringToJSONObject(json_string);

	if (json->HasField("name"))
	{
		layer.Name = json->GetStringField("name");
	}

	layer.ID = FGuid::NewGuid();

	//-------------------------

	return layer;
}

//Helper Functions
bool AGeoJSON_Manager::doesFileExist(FString path)
{
	if (!FPlatformFileManager::Get().GetPlatformFile().FileExists(*path))
	{
		UE_LOG(LogTemp, Error, TEXT("File does not exist: %s"), *path);
		return false;
	}

	return true;
}
TSharedPtr<FJsonObject> AGeoJSON_Manager::FStringToJSONObject(const FString& JSONString)
{
	TSharedPtr<FJsonObject> OutJsonObject;
	TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(JSONString);

	if (!FJsonSerializer::Deserialize(Reader, OutJsonObject) && !OutJsonObject.IsValid())
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to deserialize JSON string."));
		return nullptr;
	}
	return OutJsonObject;
	
}
bool AGeoJSON_Manager::isGeoJSONGridBased(FString GeoJSONString, TArray<FString>& Codes)
{
	TSharedPtr<FJsonObject> json;
	json = FStringToJSONObject(GeoJSONString);

	FRegexPattern GridCodePattern(TEXT("E\\d{4}N\\d{4}"));

	if (!json->HasField("features"))
	{
		UE_LOG(LogTemp, Display, TEXT("no features field found in the GeoJSON file."));
		return false;
	}

	TArray<TSharedPtr<FJsonValue>> featureArray;
	featureArray = json->GetArrayField("features");

	bool bFoundAnyCodes = false;


	for (const TSharedPtr<FJsonValue>& featureValue : featureArray)
	{
		if (featureValue.IsValid() && featureValue->Type == EJson::Object)
		{
			TSharedPtr<FJsonObject> featureObject = featureValue->AsObject();
			if (featureObject.IsValid())
			{
				TMap<FString, FString> props = GetProperties(featureObject);

				for (const TPair<FString, FString>& Entry : props)
				{
					const FString& ValueString = Entry.Value;

					FRegexMatcher Matcher(GridCodePattern, ValueString);
					if (Matcher.FindNext())
					{
						if (!Codes.Contains(ValueString))
						{
							Codes.Add(ValueString);
							UE_LOG(LogTemp, Log, TEXT("Grid code match found: %s"), *ValueString);
						}
						bFoundAnyCodes = true;
						break; 
					}
				}
			}
		}
	}
	return bFoundAnyCodes;

}
TMap<FString, FString> AGeoJSON_Manager::GetProperties(TSharedPtr<FJsonObject> JsonObject)
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
void AGeoJSON_Manager::CalculateGridBounds(const TArray<FString>& GridCodes, FVector2D& BottomLeft, FVector2D& TopRight)
{
	int32 MinE = TNumericLimits<int32>::Max();
	int32 MaxE = TNumericLimits<int32>::Lowest();
	int32 MinN = TNumericLimits<int32>::Max();
	int32 MaxN = TNumericLimits<int32>::Lowest();

	FRegexPattern Pattern(TEXT("E(\\d{4})N(\\d{4})"));

	for (const FString& Code : GridCodes)
	{
		FRegexMatcher Matcher(Pattern, Code);
		if (Matcher.FindNext())
		{
			int32 Easting = FCString::Atoi(*Matcher.GetCaptureGroup(1));
			int32 Northing = FCString::Atoi(*Matcher.GetCaptureGroup(2));

			MinE = FMath::Min(MinE, Easting);
			MaxE = FMath::Max(MaxE, Easting);
			MinN = FMath::Min(MinN, Northing);
			MaxN = FMath::Max(MaxN, Northing);
		}
	}

	BottomLeft = FVector2D(MinE, MinN);
	TopRight = FVector2D(MaxE, MaxN);

	UE_LOG(LogTemp, Display, TEXT("Grid bounds — BottomLeft: E%04dN%04d, TopRight: E%04dN%04d"), MinE, MinN, MaxE, MaxN);
}