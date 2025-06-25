// Fill out your copyright notice in the Description page of Project Settings.

#include "Feature.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BPL_GeoJSON.h"


/*

AFeature::AFeature()
{
 	PrimaryActorTick.bCanEverTick = true;

	Tile = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Tile"));
    RootComponent = Tile;

	UStaticMesh* PlaneMesh = LoadObject<UStaticMesh>(nullptr, TEXT("/Engine/BasicShapes/Plane.Plane"));
	Tile->SetStaticMesh(PlaneMesh);
    Tile->SetWorldScale3D(GridScale);
    Tile->RegisterComponent();
    
}

// Called when the game starts or when spawned
void AFeature::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AFeature::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AFeature::Init(FGeoJSON_Feature Data, FString ValueField)
{
    // Setting the Feature Data
    FeatureData = Data;


    if (FeatureData.Properties.Find(ValueField)) 
    {
        FString* ValueString = FeatureData.Properties.Find(ValueField);
        ValueFloat = FCString::Atof(**ValueString);
        ValueFloat = FMath::Clamp<float>(FMath::GetRangePct(1.0f, 10.0f, ValueFloat), 0.0f, 1.0f);
        UE_LOG(LogTemp, Warning, TEXT("Score value: %f"), ValueFloat);
     
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("Failed to find the specified value field in the properties!"));
        ValueFloat = 0.0f;
    }

    // Setting Material on Tile 
    UMaterialInterface* Material = LoadObject<UMaterialInterface>(nullptr, TEXT("/Game/Project/Materials/M_Edges.M_Edges")); // Make this a variable

    if (Material)
    {
        UMaterialInstanceDynamic* DynamicMaterial = UMaterialInstanceDynamic::Create(Material, this);

        Tile->SetMaterial(0, DynamicMaterial);
        DynamicMaterial->SetScalarParameterValue(FName("Color"), ValueFloat);
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("Failed to load material for grid tiles!."));
    }
}

*/



