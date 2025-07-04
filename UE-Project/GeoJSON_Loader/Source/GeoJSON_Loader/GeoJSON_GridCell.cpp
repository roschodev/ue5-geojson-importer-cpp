// Fill out your copyright notice in the Description page of Project Settings.


#include "GeoJSON_GridCell.h"

// Sets default values
AGeoJSON_GridCell::AGeoJSON_GridCell()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
	SetRootComponent(SceneRoot); // This is the correct way

}

// Called when the game starts or when spawned
void AGeoJSON_GridCell::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGeoJSON_GridCell::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

