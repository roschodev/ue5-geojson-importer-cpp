// Fill out your copyright notice in the Description page of Project Settings.

#include "Feature.h"
#include "Engine/StaticMeshActor.h"
#include "Method_BarGraph.h"
#include "BPL_GeoJSON_Visualisation.h"



/*

void UBPL_GeoJSON_Visualisation::CreateGridLayer(AActor* Parent, FGeoJSON_Data Data, TSubclassOf<AActor> Class, EMethods LayerMethod, FString ValueField)
{
    // Initialization
    UWorld* World = Parent->GetWorld();
    FAttachmentTransformRules rules(EAttachmentRule::KeepRelative, true);
    FActorSpawnParameters SpawnParams;
    SpawnParams.Owner = Parent;

    FRotator SpawnRotation = FRotator::ZeroRotator;
    FVector SpawnLocation;
    TArray<AActor*> SpawnedActors;

    FString TileID;
    FVector2D ReferencePoint = FVector2D(0.0f, 0.0f); // Set a default reference point or pass it as a parameter

    int32 EMin = 999999;
    int32 NMin = 999999;

    FVector2D EMinVector = FVector2D(MAX_int32, 0.0f);
    FVector2D NMinVector = FVector2D(0.0f, MAX_int32);

       
    //Looping over the Features in the Data
    for (const FGeoJSON_Feature& Feat : Data.Features)
    {   //Try to find the TileID for this feature
        bool HasTileID;
        GetTileID(Feat.Properties, TileID, HasTileID);

        if (HasTileID)
        {
            FString EPart = TileID.Mid(1, 4);
            FString NPart = TileID.Mid(6, 4);

            int32 EValue = FCString::Atoi(*EPart);
            int32 NValue = FCString::Atoi(*NPart);

          if (EValue < EMin)
            {
                EMin = EValue;
                EMinVector = FVector2D(EValue, NValue);
            }
                      
            if (NValue < NMin)
            {
                NMin = NValue;
                NMinVector = FVector2D(EValue, NValue);
            }

            float XCoordinate = ReferencePoint.X + (EValue * 100.0f);
            float YCoordinate = ReferencePoint.Y - (NValue * 100.0f);

            SpawnLocation = FVector(XCoordinate, YCoordinate, 0.0f); // Assuming a flat grid at Z = 0
           
            //Spawn Actor per Feature
            AActor* SpawnedActor = World->SpawnActor<AActor>(Class, SpawnLocation, SpawnRotation, SpawnParams);

            if (SpawnedActor)
            {
                // Add to Array to keep track of tiles (Is this necessary?)
                SpawnedActors.Add(SpawnedActor);

                // Initializing the newly spawned tile
                AFeature* FeatureTile = Cast<AFeature>(SpawnedActor);
                FeatureTile->Init(Feat, ValueField);

                AddVisualisationMethod(FeatureTile, LayerMethod);
            }
            else
            {
                UE_LOG(LogTemp, Warning, TEXT("Failed to spawn actor at location: X = %f, Y = %f"), XCoordinate, YCoordinate);
            }
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("TileID not found in properties."));
        }
    }
    
    FVector2D GridLeftBottomCorner = FVector2D(EMinVector.X * 100, (NMinVector.Y * 100) * -1);

    SpawnLocation = FVector(GridLeftBottomCorner.X, GridLeftBottomCorner.Y, 0.0f); 
    AStaticMeshActor* SpawnedMeshActor = World->SpawnActor<AStaticMeshActor>(AStaticMeshActor::StaticClass(), SpawnLocation, SpawnRotation, SpawnParams);

    if (SpawnedMeshActor)
    {
        // Set the static mesh
        UStaticMeshComponent* MeshComponent = SpawnedMeshActor->GetStaticMeshComponent();
        UStaticMesh* OriginMesh = LoadObject<UStaticMesh>(nullptr, TEXT("/Engine/BasicShapes/Sphere.Sphere"));

        SpawnedMeshActor->SetMobility(EComponentMobility::Movable);
        if (OriginMesh)
        {
            MeshComponent->SetStaticMesh(OriginMesh);
        }
        
        SpawnedMeshActor->AttachToActor(Parent, rules);

        Parent = SpawnedMeshActor;
    }

    for (AActor* SpawnedActor : SpawnedActors) 
    {
        SpawnedActor->AttachToActor(Parent, rules);
        FVector CurrentLocation = SpawnedActor->GetActorLocation();
        FVector NewLocation = CurrentLocation - Parent->GetActorLocation();
        SpawnedActor->SetActorLocation(NewLocation);

    }

    SpawnedMeshActor->SetActorLocation(FVector(0, 0, 0));
}


//Helper Functions

bool UBPL_GeoJSON_Visualisation::IsMatchingFormat(const FString& Input)
{
    // Check if the string length is exactly 10 characters
    if (Input.Len() != 10)
    {
        return false;
    }

    // Check if the string starts with 'E' and has 'N' at the 6th position
    if (Input[0] != 'E' || Input[5] != 'N')
    {
        return false;
    }

    // Check if all other characters are digits
    for (int32 i = 1; i < 5; ++i)
    {
        if (!FChar::IsDigit(Input[i]))
        {
            return false;
        }
    }

    for (int32 i = 6; i < 10; ++i)
    {
        if (!FChar::IsDigit(Input[i]))
        {
            return false;
        }
    }

    return true;
}

void UBPL_GeoJSON_Visualisation::GetTileID(const TMap<FString, FString> PropertiesMap, FString& TileID, bool& TileIDFound)
{
    for (const TPair<FString, FString>& Pair : PropertiesMap)
    {
        const FString& Key = Pair.Key;
        const FString& Value = Pair.Value;


        if (IsMatchingFormat(Value))
        {
            TileID = Value;
            TileIDFound = true;
            return;
        }

    }
    TileID = "";
    TileIDFound = false;
    return;
}

void UBPL_GeoJSON_Visualisation::AddVisualisationMethod(AActor* TileActor, EMethods LayerMethod) 
{
    switch (LayerMethod)
    {
    case BarGraph:
    {
        UMethod_BarGraph* BarGraphComponent = NewObject<UMethod_BarGraph>(TileActor);


        if (BarGraphComponent)
        {
            // Register the component so it is active in the game
            BarGraphComponent->RegisterComponent();

            // Optionally, add this component to the actor's components array
            TileActor->AddInstanceComponent(BarGraphComponent);

            BarGraphComponent->BarScale = FVector2D(0.6f, 0.6f);
            BarGraphComponent->Init();
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("Failed to create BarGraphComponent"));
        }
    }
    break;
    case PieGraph:
        UE_LOG(LogTemp, Warning, TEXT("This method is currently not supported!"));
        break;
    case Image:
        UE_LOG(LogTemp, Warning, TEXT("This method is currently not supported!"));
        break;
    default:
        break;
    }
    return;
}

*/