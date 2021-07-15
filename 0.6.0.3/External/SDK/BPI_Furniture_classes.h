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

// BlueprintGeneratedClass BPI_Furniture.BPI_Furniture_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBPI_Furniture_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_Furniture.BPI_Furniture_C");
		return ptr;
	}



	void SynchronizeWorkbenchAnim(float StartingPosition);
	bool IsLinkedFurnitureStarted();
	void LinkFurniture(class ABP_MasterFurniture_C* Furniture);
	void GetSlotWorldTransforms(int SlotIndex, bool* IsValidSlot, struct FTransform* InteractTransform, struct FTransform* FinalTransform);
	void ChangeCurrentCapacity(int Value, bool* Success);
	void SetVisibilityBasedAnimTickOption(Engine_EVisibilityBasedAnimTickOption AnimTickOption);
	void GetSlotOccupied(int SlotID, bool* IsOccupied, bool* IsWantToOccupy);
	void GetFinalLocation(int SlotIndex, struct FTransform* EndTransform);
	void GetSlotTransform(int SlotIndex, bool* IsValidSlot, struct FTransform* Transform);
	void StopFurnitureAnim(class ABP_BaseCharacter_C* Base_Character_Ref);
	void FurnitureNotify(const struct FName& NotifyName);
	void GetSlotType(int SlotID, bool* IsValidSlot, TEnumAsByte<E_FurnitureSlotType_E_FurnitureSlotType>* Slot_Position);
	void SetWantToOccupy(bool Occupy, int SlotID);
	void GetFurnitureType(TEnumAsByte<E_FurnitureType_E_FurnitureType>* FurnitureType);
	void GetCapacity(int* CurrentCapacity, int* MaxCapacity);
	void GetInteractSlot(bool* Success, struct FTransform* Transform, int* SlotID);
	void GetInventoryComponent(class UInventoryComponent_C** Inventory);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
