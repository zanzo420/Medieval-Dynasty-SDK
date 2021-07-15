#pragma once

// Name: Medieval Dynasty, Version: 0.6.0.3


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPI_Animal.BPI_Animal_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBPI_Animal_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_Animal.BPI_Animal_C");
		return ptr;
	}



	void GetAnimalRowName_BPI(struct FName* SwitchAnimals_RowName);
	void GetAnimalHeight(float* Height);
	void GetAnimalWorldLocation(struct FVector* Location);
	void SetIsInWater(bool InWater, float Intensity);
	void UpdateMountEquipment(bool Unequip, const struct FST_ItemOutfit& ItemData);
	void GetPrice_Sell(int* Price);
	void GetPrice_Buy(int* Price);
	void SetForSale(bool ForSale);
	void GetForSale(bool* ForSale);
	void SetAnimalMovementMode_BPI(TEnumAsByte<E_MovementMode_E_MovementMode> MovementMode);
	void GetInventoryComponent(class UInventoryComponent_C** InventoryComponent);
	void GetSystemManager(class ABP_SystemsManager_C** SystemManager);
	void CheckIsBuilding(const struct FVector& CheckLocation, const struct FVector& Destination, struct FVector* NewLocation);
	void CauseBleeding(float BleedDamage, float BleedDuration);
	void OnSleep();
	void Starving(float HungerDamage);
	void OnWakeUp();
	void SetEngageTargetBPI(class AActor* Causer);
	void GetFleeingTimer(struct FTimerHandle* FleeingTimer);
	void SetFear(int Fear);
	void GetFear(int* FearFactor);
	void AddItemToHouse();
	void GetAnimal(class ABP_AnimalBase_C** AnimalBase);
	void UnpauseBrain();
	void PauseBrain();
	void CheckDistance(const struct FVector& PlayerLocation);
	void Remove();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
