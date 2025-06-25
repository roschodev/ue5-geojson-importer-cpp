// Fill out your copyright notice in the Description page of Project Settings.

#include "Feature.h"
#include "Method_BarGraph.h"

// Sets default values for this component's properties
// Sets default values for this component's properties
UMethod_BarGraph::UMethod_BarGraph()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// Initialize the Bar mesh component
	Bar = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Bar"));

	// Load the cube mesh from the engine's basic shapes
	UStaticMesh* Cube = LoadObject<UStaticMesh>(nullptr, TEXT("/Game/Project/Meshes/SM_Bar.SM_Bar"));
	if (Cube)
	{
		Bar->SetStaticMesh(Cube);


	}

}

void UMethod_BarGraph::BeginPlay()
{
	Super::BeginPlay();	
}

void UMethod_BarGraph::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

}




void UMethod_BarGraph::Init()
{
	if (Bar && GetOwner())
	{
		Bar->SetupAttachment(GetOwner()->GetRootComponent());
		Bar->RegisterComponent();

		AActor* Parent = GetOwner();
		AFeature* Feature = Cast<AFeature>(Parent);
				
		UMaterialInterface* Material = LoadObject<UMaterialInterface>(nullptr, TEXT("/Game/Project/Materials/M_GraphBar.M_GraphBar"));

		if (Material) 
		{
			UMaterialInstanceDynamic* DynamicMaterial = UMaterialInstanceDynamic::Create(Material, this);
			Bar->SetMaterial(0, DynamicMaterial);
			DynamicMaterial->SetScalarParameterValue(FName("Color"), Feature->ValueFloat);
		}
		else 
		{
			UE_LOG(LogTemp, Error, TEXT("Material not loaded."))
		}
		Bar->SetWorldScale3D(FVector(BarScale.X, BarScale.Y, Feature->ValueFloat));
	}
}