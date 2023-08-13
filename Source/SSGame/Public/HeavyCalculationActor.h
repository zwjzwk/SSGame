// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DynamicMeshActor.h"
#include "HeavyCalculationActor.generated.h"

/**
 * 
 */
UCLASS()
class SSGAME_API AHeavyCalculationActor : public ADynamicMeshActor
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintImplementableEvent, Category = "Heavy Calculation")
	void ExecuteHeavyCalculation();
};
