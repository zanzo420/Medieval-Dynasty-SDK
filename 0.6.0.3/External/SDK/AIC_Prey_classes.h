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

// BlueprintGeneratedClass AIC_Prey.AIC_Prey_C
// 0x0008 (FullSize[0x0330] - InheritedSize[0x0328])
class AAIC_Prey_C : public AAIController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AIC_Prey.AIC_Prey_C");
		return ptr;
	}



	void GetAnimalRowName_BPI(struct FName* SwitchAnimals_RowName);
	void GetAnimalHeight(float* Height);
	void GetAnimalWorldLocation(struct FVector* Location);
	void GetPrice_Sell(int* Price);
	void GetPrice_Buy(int* Price);
	void GetForSale(bool* ForSale);
	void GetInventoryComponent(class UInventoryComponent_C** InventoryComponent);
	void GetSystemManager(class ABP_SystemsManager_C** SystemManager);
	void CheckIsBuilding(const struct FVector& CheckLocation, const struct FVector& Destination, struct FVector* NewLocation);
	void GetFleeingTimer(struct FTimerHandle* FleeingTimer);
	void GetFear(int* FearFactor);
	void GetAnimal(class ABP_AnimalBase_C** AnimalBase);
	void Remove();
	void CheckDistance(const struct FVector& PlayerLocation);
	void AddItemToHouse();
	void SetFear(int Fear);
	void SetEngageTargetBPI(class AActor* Causer);
	void OnWakeUp();
	void Starving(float HungerDamage);
	void OnSleep();
	void CauseBleeding(float BleedDamage, float BleedDuration);
	void SetAnimalMovementMode_BPI(TEnumAsByte<E_MovementMode_E_MovementMode> MovementMode);
	void SetForSale(bool ForSale);
	void UpdateMountEquipment(bool Unequip, const struct FST_ItemOutfit& ItemData);
	void SetIsInWater(bool InWater, float Intensity);
	void ReceiveBeginPlay();
	void PauseBrain();
	void UnpauseBrain();
	void ExecuteUbergraph_AIC_Prey(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
