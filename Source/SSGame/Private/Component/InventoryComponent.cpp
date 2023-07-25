
#include "InventoryComponent.h"


UInventoryComponent::UInventoryComponent()
{
	PrimaryComponentTick.bCanEverTick = true;

}


void UInventoryComponent::BeginPlay()
{
	Super::BeginPlay();
	
	/*Pawn = Cast<APawn>(GetOwner());
	if(!Pawn) return;

	PlayerController = Cast<ASSPlayerController>(Pawn->GetController());
	if(!PlayerController) return;

	MyPlayer = Cast<ASSGameCharacter>(Pawn);
	if(!MyPlayer) return;

	MyPlayer->GetComponentByClass(UInventoryComponent, )*/

}


void UInventoryComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

}

