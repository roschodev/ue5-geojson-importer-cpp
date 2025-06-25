// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GeoJSONType_Base.h"
#include "GeoJSONType_MultiPolygon.generated.h"

/**
 * 
 */
UCLASS()
class GEOJSON_API AGeoJSONType_MultiPolygon : public AGeoJSONType_Base
{
	GENERATED_BODY()
	
	FType_MultiPoint GeoJSONData;
};
