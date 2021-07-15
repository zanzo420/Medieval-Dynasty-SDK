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

// BlueprintGeneratedClass InventoryComponent.InventoryComponent_C
// 0x02A0 (FullSize[0x0350] - InheritedSize[0x00B0])
class UInventoryComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	float                                              InitialOverloadWeight;                                     // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FinalOverloadWeight;                                       // 0x00BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CurrentTotalWeightOfInventory;                             // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_CPGN[0x4];                                     // 0x00C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ABP_BaseCharacter_C*                         OwningCharacterReference;                                  // 0x00C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                               CountIntoGlobalResources;                                  // 0x00D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	unsigned char                                      UnknownData_AQGW[0x7];                                     // 0x00D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FST_ItemInventorys>                  QuickSlots;                                                // 0x00D8(0x0010) (Edit, BlueprintVisible)
	TMap<TEnumAsByte<E_EquipmentCategories_E_EquipmentCategories>, struct FST_ItemInventorys> Armor;                                                     // 0x00E8(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnQuickSlotChange;                                         // 0x0138(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMap<TEnumAsByte<E_EquipmentCategories_E_EquipmentCategories>, struct FST_ItemInventorys> Armor_Horse;                                               // 0x0148(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               PlayerCharacter;                                           // 0x0198(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_MWTI[0x7];                                     // 0x0199(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnInventoryChange;                                         // 0x01A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               CheckWeightWhileTransfering;                               // 0x01B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	unsigned char                                      UnknownData_U5ZM[0x7];                                     // 0x01B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      DefaultAnimClass;                                          // 0x01B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      HeadRef;                                                   // 0x01C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      TorsoRef;                                                  // 0x01C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      HandsRef;                                                  // 0x01D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      LegsRef;                                                   // 0x01D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      FeetRef;                                                   // 0x01E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        HatSMRef;                                                  // 0x01E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      HatSKMRef;                                                 // 0x01F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      HoodRef;                                                   // 0x01F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      HairRef;                                                   // 0x0200(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      BackpackRef;                                               // 0x0208(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      PouchRef;                                                  // 0x0210(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsHoodOn;                                                  // 0x0218(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_C3EU[0x7];                                     // 0x0219(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FST_CharacterModules                        DefaultCharacterModules;                                   // 0x0220(0x0028) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnArmorChange;                                             // 0x0248(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                              BaseInitialOverloadWeight;                                 // 0x0258(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BaseFinalOverloadWeight;                                   // 0x025C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_InventoryOwnerType_E_InventoryOwnerType> OwnerType;                                                 // 0x0260(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TEnumAsByte<E_Ownership_E_Ownership>               LocationType;                                              // 0x0261(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	unsigned char                                      UnknownData_BUNO[0x6];                                     // 0x0262(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnWeightChange;                                            // 0x0268(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnOffHandItemChange;                                       // 0x0278(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnInventoryUpdated;                                        // 0x0288(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class AGM_MedievalDynasty_C*                       GameModeReference;                                         // 0x0298(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<struct FName, struct FST_InventoryItemsArray> Inventory_New;                                             // 0x02A0(0x0050) (Edit, BlueprintVisible)
	class ABP_VillageManager_C*                        VillageManagerReference;                                   // 0x02F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_MasterFurniture_C*                       ChestFurnitureReference;                                   // 0x02F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      ArmorParams[0x50];                                         // 0x0300(0x0050) UNKNOWN PROPERTY: SetProperty


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass InventoryComponent.InventoryComponent_C");
		return ptr;
	}



	void CalculatePriceOfMarketSoldItems(TArray<struct FST_ItemCache>* SoldItems, int* CoinsForTransaction);
	void UpdateArmorParams();
	void FindToolByActivityInInventory(TEnumAsByte<E_Tools_Activity_E_Tools_Activity> ToolType_Activity, bool GetItemWithLowestHP, bool* Found_, int* Count, struct FST_ItemDetails* ItemDetails, struct FName* ItemName, int* ArrayIndex, float* ItemHP);
	void GetCurrentlyEquippedItemDetails_Horse(TEnumAsByte<E_EquipmentCategories_E_EquipmentCategories> EquipmentSlot, struct FST_ItemDetails* ItemDetails, bool* Found);
	void ClearArmorSlot_Horse(TEnumAsByte<E_EquipmentCategories_E_EquipmentCategories> ArmorSlot);
	void AssignToArmorSlot_SplitStack_Horse(TEnumAsByte<E_EquipmentCategories_E_EquipmentCategories> ArmorSlot, const struct FName& ItemName, int ArrayID);
	void UpdateOldGearStatus_Horse(TEnumAsByte<E_EquipmentCategories_E_EquipmentCategories> EquipmentSlot);
	void CalculateClothesStats_Horse();
	void GetCurrentlyEquippedItem_Horse(TEnumAsByte<E_EquipmentCategories_E_EquipmentCategories> EquipmentSlot, struct FST_ItemInventorys* Item, bool* Found);
	void UnequipArmor_Horse(struct FST_ItemInventorys* Item, bool RemoveFromInventory);
	void EquipArmor_Horse(struct FST_ItemInventorys* Item, const struct FST_ColorTable& DyeVariantOverride);
	void UpdateWeightOnAdd(const struct FName& ItemName, int Count);
	void UpdateWeightOnRemove(const struct FName& ItemName, int Count);
	void AssignSelectedItemToSelectedQuickslot_New(const struct FName& ItemName, int ArrayIndex, int QuickslotIndex);
	void ConsumeItem(int CountToConsume, const struct FName& ItemName, int ArrayID, bool AutoTransferExhaustedItemToStorage, class ABP_VillageManager_C* VillageManagerReference);
	void RemoveItemFromInventory_ForTransfer(int Count, bool ShouldSpawn, bool DisplayNotification, bool UpdateInventory, int ArrayID, const struct FName& ItemName);
	void ClearInventory();
	void ClearArmorSlot(TEnumAsByte<E_EquipmentCategories_E_EquipmentCategories> ArmorSlot);
	void CheckItemForInteraction(class ABP_MasterHoldableItem_C* Holdable, TEnumAsByte<E_Tools_E_Tools> WantedToolType, bool* Success);
	void DecreaseItemsCapacity(int CapacityToDecrease, const struct FName& ItemName, int ArrayID);
	void IsFull(int ItemsCount, float SingleWeight, bool* Full, int* CountOfItemsThatWillFitIn);
	void CalculateItemTradePricePerUnit(const struct FST_ItemInventorys& ItemReference, bool IsPlayerOwnerOfItem_, bool IsMarketSelling_, float* Price);
	void FindAllItemsOfID_InInventory(const struct FName& ItemName, bool ReturnCapacityIfPossible, bool* Found, int* Count);
	void RemoveCraftingResourceWithLowestCondition_ByName(const struct FName& ItemName, int Count, bool DisplayNotification, bool AutoTransferExhaustedItemToStorage, class ABP_VillageManager_C* VillageManagerReference, bool* Success, int* RemainingCount, float* ReturnedHP, TArray<struct FST_ItemCache>* RemovedItemsCache);
	void AddItemsFromPreset(const struct FST_OutfitsPresets& OutfitPresetRow, TArray<int>* ItemsIndexes);
	void EmptyContainer(int CountToEmpty, const struct FName& ItemName, int ArrayID);
	void ConditionDropToZero(bool Offhand, const struct FName& ItemName, int ArrayID);
	void CalculateClothesStats();
	void UpdateEquippedItemHP(float HP, bool Offhand);
	void FreshnessDropToZero(const struct FName& ItemName, int ArrayID);
	void DecreaseFreshness();
	void GetEquippedItemIndex(struct FName* ItemName, int* ArrayIndex);
	void UpdateEquippedItemCapacity(int Capacity);
	void FindAmmoInInventory(TEnumAsByte<E_Ammo_E_Ammo> AmmoType, bool* Found_, int* Count, struct FName* ItemName, int* ArrayID);
	void FindToolInInventory(TEnumAsByte<E_Tools_E_Tools> ToolType, bool* Found_, int* Count, struct FST_ItemDetails* ItemDetails, struct FName* ItemName, int* ArrayIndex);
	void RandomizeNPCClothing(class ABP_BaseCharacter_C* NPC);
	void CompareItemSubCategory(TEnumAsByte<E_ItemSubCategories_E_ItemSubCategories> Category1, TEnumAsByte<E_ItemSubCategories_E_ItemSubCategories> Category2, bool* Equal_, bool* _1Before2_);
	void CompareItemCategory(TEnumAsByte<E_ItemCategories_E_ItemCategories> Category1, TEnumAsByte<E_ItemCategories_E_ItemCategories> Category2, bool* Equal_, bool* _1Before2_);
	void Sort_Inventory_by_Name();
	void CompareStrings(const struct FString& String1, const struct FString& String2, bool* Equal_, bool* _1Before2_);
	void GetCurrentlyEquippedItem(TEnumAsByte<E_EquipmentCategories_E_EquipmentCategories> EquipmentSlot, struct FST_ItemInventorys* Item, bool* Found);
	void UpdateEquippedItemsOnDrop(TEnumAsByte<E_EquipmentCategories_E_EquipmentCategories> EquipmentSlot, int Count, const struct FName& ItemName, int ArrayID);
	void SetIsHoodOn(bool IsHoodOn);
	void SetMeshAndUpdateEquippedItems(class USkeletalMeshComponent* SkeletalMeshSlot, class USkeletalMesh* EquippedMesh, TEnumAsByte<E_EquipmentCategories_E_EquipmentCategories> EquipmentSlot, class USkeletalMeshComponent* SkeletalMeshSlotToUpdate);
	void SetMeshDependingOnEquippedItems(class USkeletalMeshComponent* SkeletalMeshSlot, TEnumAsByte<E_EquipmentCategories_E_EquipmentCategories> EquipmentSlotToCheck, class USkeletalMesh* EquippedMesh, class USkeletalMesh* AlternativeEquippedMesh);
	void GetCurrentlyEquippedItemDetails(TEnumAsByte<E_EquipmentCategories_E_EquipmentCategories> EquipmentSlot, struct FST_ItemDetails* ItemDetails, bool* Found);
	void Init_Mesh_Ref(class USkeletalMeshComponent* Head, class USkeletalMeshComponent* Torso, class USkeletalMeshComponent* Hands, class USkeletalMeshComponent* Legs, class USkeletalMeshComponent* Feet, class USkeletalMeshComponent* Hat_SKM, class USkeletalMeshComponent* Hood, class USkeletalMeshComponent* Hair, class USkeletalMeshComponent* Backpack, class USkeletalMeshComponent* Pouch);
	void UnequipTorch();
	void EquipTorch();
	void UnequipArmor(struct FST_ItemInventorys* Item, bool RemoveFromInventory);
	void EquipArmor(struct FST_ItemInventorys* Item, const struct FST_ColorTable& DyeVariantOverride);
	void UpdateHeadWear(bool IsHoodOn);
	void UpdateOldGearStatus(TEnumAsByte<E_EquipmentCategories_E_EquipmentCategories> EquipmentSlot);
	void RecalculateQuickSlotIndexes();
	void AssignToQuickSlot_NoSplit(int QuickslotID, const struct FName& ItemName, int ArrayID);
	void ClearQuickSlot(int QuickslotID);
	void AssignToArmorSlot_SplitStack(TEnumAsByte<E_EquipmentCategories_E_EquipmentCategories> ArmorSlot, const struct FName& ItemName, int ArrayID);
	void Assign_to_Quick_Slot_Split_Stack(int QuickslotID, const struct FName& ItemName, int ArrayID);
	void RemoveItemFromInventory_ByName(const struct FName& ItemName, int Count, int* CountLeft, TArray<struct FST_ItemCache>* RemovedItems);
	void TransferItem(int Count, class UInventoryComponent_C* TransferDestination, const struct FName& ItemName, int ArrayID, bool* Success);
	void FindItemInInventory(const struct FName& ItemName, bool* Found);
	void UpdateTotalWeightOfInventory();
	void RemoveItemFromInventory(int Count, bool ShouldSpawn, bool DisplayNotification, bool UpdateInventory, int ArrayID, const struct FName& ItemName, float NotificationDelay);
	void AddItemToInventory(const struct FName& ItemId, int Count, bool PassCondition, float CurrentHP, float MaxHP, int Capacity, float Freshness, TEnumAsByte<E_Ownership_E_Ownership> Ownership, bool DisplayNotification, bool UpdateInventory, bool CountAsPickUp, float NotificationDelay, int* AddedAtIndex);
	void InitMeshes();
	void ReceiveBeginPlay();
	void ExecuteFoodDecreaseOnSeasonChange();
	void ExecuteUbergraph_InventoryComponent(int EntryPoint);
	void OnInventoryUpdated__DelegateSignature();
	void OnOffHandItemChange__DelegateSignature();
	void OnWeightChange__DelegateSignature();
	void OnArmorChange__DelegateSignature();
	void OnInventoryChange__DelegateSignature();
	void OnQuickSlotChange__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
