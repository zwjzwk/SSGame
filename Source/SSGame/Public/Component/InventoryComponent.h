
#pragma once

#include "CoreMinimal.h"
#include "SSPlayerController.h"
#include "Components/ActorComponent.h"
#include "SSGame/SSGameCharacter.h"
#include "InventoryComponent.generated.h"


UCLASS( Blueprintable, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SSGAME_API UInventoryComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UInventoryComponent();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;


/*public:
	UPROPERTY(BlueprintReadWrite)
	ASSGameCharacter* MyPlayer;

	UPROPERTY(BlueprintReadWrite)
	APawn* Pawn;

	UPROPERTY(BlueprintReadWrite)
	ASSPlayerController* PlayerController;

	UPROPERTY(BlueprintReadWrite)
	UUserWidget* MainUI;

	int Colums;
	int Rows;
	float CellSize;*/
	
private:

};
