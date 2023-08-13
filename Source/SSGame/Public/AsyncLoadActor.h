// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/StreamableManager.h"
#include "AsyncLoadActor.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBlueprintClassLoaded, AActor*, SpawnedActor);

UCLASS()
class SSGAME_API AAsyncLoadActor : public AActor
{
	GENERATED_BODY()
	

public:
	AAsyncLoadActor();

	UFUNCTION(BlueprintCallable, Category = "Async Loading")
	void LoadAssetAsync(TSoftClassPtr<UObject> SoftObject, FSoftClassPath AssetPath);

	UFUNCTION(BlueprintCallable, Category = "Async Loading")
	void LoadBlueprintClassAsync(TSoftClassPtr<UObject> SoftClass, FSoftObjectPath AssetPath, const FVector& SpawnLocation, const FRotator& SpawnRotation);

	UPROPERTY(BlueprintAssignable, Category = "Async Loading")
	FOnBlueprintClassLoaded OnBlueprintClassLoaded;

private:
	FStreamableManager StreamableManager;

	UFUNCTION()
	void OnAssetLoaded();
};
