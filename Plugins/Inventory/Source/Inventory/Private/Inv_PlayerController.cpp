


#include "Inv_PlayerController.h"
#include "Inventory.h"

void AInv_PlayerController::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogInventory, Log, TEXT("Begin play for player controller"));
}
