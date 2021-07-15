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

// BlueprintGeneratedClass BP_Furniture_RefillableContainer.BP_Furniture_RefillableContainer_C
// 0x0020 (FullSize[0x0468] - InheritedSize[0x0448])
class ABP_Furniture_RefillableContainer_C : public ABP_MasterFurniture_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0448(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	int                                                CurrentCapacity;                                           // 0x0450(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxCapacity;                                               // 0x0454(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                         InteractItem;                                              // 0x0458(0x0010) (Edit, BlueprintVisible, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Furniture_RefillableContainer.BP_Furniture_RefillableContainer_C");
		return ptr;
	}



	void ChangeCurrentCapacity(int Value, bool* Success);
	void RemoveItems(class ABP_BaseCharacter_C* BaseCharacter);
	void GetInteractAction(struct FText* InteractActionText, struct FText* InteractSecondActionText);
	void IsInteractable(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility, bool* ShowPressUI, bool* ShowTimerUI, bool* ShowOnlyName, float* Time, float* Distance);
	void IsItemNeeded(class ABP_BaseCharacter_C* BaseCharacter, bool* CheckItems, bool* Success);
	void GetInteractItem(class ABP_BaseCharacter_C* BaseCharacter, struct FDataTableRowHandle* ItemHandler);
	void IsItemInteractable(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility);
	void GetInteractCondition(class ABP_BaseCharacter_C* BaseCharacter, const struct FHitResult& Hit, float* Condition, bool* CustomText, struct FText* Text, bool* CustomColor, struct FLinearColor* Color);
	void IsInteractCondition(class ABP_BaseCharacter_C* BaseCharacter, bool* CheckCondition);
	void LoadRefillableContainerData(const struct FST_SAVE_RefillableContainers& FurnitureData);
	void GetRefillableContainerDataToSave(struct FST_SAVE_RefillableContainers* FurnitureData);
	void UpdateCapacityAnimation(float CapacityRatio);
	void GetCapacity(int* CurrentCapacity, int* MaxCapacity);
	void UpdateCapacity(int Value);
	void ReceiveBeginPlay();
	void Interact(class ABP_BaseCharacter_C* BaseCharacter, const struct FHitResult& Hit, bool Timer);
	void InitByBuilding();
	void ExecuteUbergraph_BP_Furniture_RefillableContainer(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
