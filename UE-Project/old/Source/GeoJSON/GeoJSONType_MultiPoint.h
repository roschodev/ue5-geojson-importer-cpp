// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GeoJSONType_Base.h"
#include "GeoJSONType_MultiPoint.generated.h"

/**
 * 
 */
UCLASS()
class GEOJSON_API AGeoJSONType_MultiPoint : public AGeoJSONType_Base
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "GeoJSON")
	FName testvar;
	
};
