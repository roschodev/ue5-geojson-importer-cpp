#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Method_BarGraph.generated.h"

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class GEOJSON_API UMethod_BarGraph : public UActorComponent
{
    GENERATED_BODY()

public:
    // Sets default values for this component's properties
    UMethod_BarGraph();

    // Static Mesh Component for the bar
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "GeoJSON")
    UStaticMeshComponent* Bar;

    // Scale factors for the bar
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "GeoJSON")
    FVector2D BarScale;

    // Current value of the bar
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "GeoJSON")
    float Value;

  

    

    // Method to initiate the animation
    UFUNCTION(BlueprintCallable, Category = "BarGraph")


  

    void Init();
   


protected:
    // Called when the game starts
    virtual void BeginPlay() override;

public:
    // Called every frame
    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
    // Current Z scale of the bar
    float CurrentZScale;

    // Flag to determine if the animation is active
    bool bIsAnimating;
};