// Fill out your copyright notice in the Description page of Project Settings.


#include "GeoJSON_MultiLineString.h"

// Sets default values
AGeoJSON_MultiLineString::AGeoJSON_MultiLineString()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

}

// Called when the game starts or when spawned
void AGeoJSON_MultiLineString::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGeoJSON_MultiLineString::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

