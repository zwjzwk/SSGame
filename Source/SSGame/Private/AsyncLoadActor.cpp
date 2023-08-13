// Fill out your copyright notice in the Description page of Project Settings.


#include "AsyncLoadActor.h"

#include "HeavyCalculationActor.h"

// Sets default values
AAsyncLoadActor::AAsyncLoadActor()
{

}

void AAsyncLoadActor::LoadAssetAsync(TSoftClassPtr<UObject> SoftObject, FSoftClassPath AssetPath)
{
	FStreamableDelegate Delegate;
	Delegate.BindUFunction(this, FName("OnAssetLoaded"));
	StreamableManager.RequestAsyncLoad(AssetPath, Delegate);
}

void AAsyncLoadActor::OnAssetLoaded()
{
	// 资源加载完成后的操作，如将加载的资源应用到场景中的物体上
	
}

/*void AAsyncLoadActor::LoadBlueprintClassAsync(TSoftClassPtr<UObject> SoftClass, FSoftObjectPath AssetPath, const FVector& SpawnLocation, const FRotator& SpawnRotation)
{
	FStreamableDelegate Delegate;
	Delegate.BindLambda([this, SoftClass, SpawnLocation, SpawnRotation]()
	{
		UClass* LoadedClass = SoftClass.Get();
		if (LoadedClass)
		{
			FActorSpawnParameters SpawnParams;
			GetWorld()->SpawnActor<AActor>(LoadedClass, SpawnLocation, SpawnRotation, SpawnParams);
		}
	});
	StreamableManager.RequestAsyncLoad(AssetPath, Delegate);
}*/

void AAsyncLoadActor::LoadBlueprintClassAsync(TSoftClassPtr<UObject> SoftClass, FSoftObjectPath AssetPath, const FVector& SpawnLocation, const FRotator& SpawnRotation)
{
	FStreamableDelegate Delegate;
	Delegate.BindLambda([this, SoftClass, SpawnLocation, SpawnRotation]()
	{
		UClass* LoadedClass = SoftClass.Get();
		if (LoadedClass)
		{
			FActorSpawnParameters SpawnParams;
			AHeavyCalculationActor* SpawnedActor = GetWorld()->SpawnActor<AHeavyCalculationActor>(LoadedClass, SpawnLocation, SpawnRotation, SpawnParams);
			if (SpawnedActor)
			{
				SpawnedActor->ExecuteHeavyCalculation();
			}
		}
	});
	StreamableManager.RequestAsyncLoad(AssetPath, Delegate);
}



