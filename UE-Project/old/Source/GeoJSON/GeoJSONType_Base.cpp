// Fill out your copyright notice in the Description page of Project Settings.


#include "GeoJSONType_Base.h"
#include "BPL_GeoJSON.h"
#include "GeoJsonData.h"



// Sets default values
AGeoJSONType_Base::AGeoJSONType_Base()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGeoJSONType_Base::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AGeoJSONType_Base::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
} 

