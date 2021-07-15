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

// BlueprintGeneratedClass BP_FurnitureContainer_Chest.BP_FurnitureContainer_Chest_C
// 0x001C (FullSize[0x04A0] - InheritedSize[0x0484])
class ABP_FurnitureContainer_Chest_C : public ABP_MasterFurniture_Container_C
{
public:
	unsigned char                                      UnknownData_TZX0[0x4];                                     // 0x0484(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0488(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UBoxComponent*                               ObstructionMesh;                                           // 0x0490(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      Mesh;                                                      // 0x0498(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_FurnitureContainer_Chest.BP_FurnitureContainer_Chest_C");
		return ptr;
	}



	void OnOwnershipSwap(TEnumAsByte<E_Ownership_E_Ownership> NewOwnership);
	void GetInventoryComponent(class UInventoryComponent_C** Inventory);
	void CheckObstruction(bool* CanBePlaced_);
	void EnableGhost();
	void DisableGhost();
	void UserConstructionScript();
	void OnNotifyEnd_876C1DCF45B4A4910CC227B6B520C84F(const struct FName& NotifyName);
	void OnNotifyBegin_876C1DCF45B4A4910CC227B6B520C84F(const struct FName& NotifyName);
	void OnInterrupted_876C1DCF45B4A4910CC227B6B520C84F(const struct FName& NotifyName);
	void OnBlendOut_876C1DCF45B4A4910CC227B6B520C84F(const struct FName& NotifyName);
	void OnCompleted_876C1DCF45B4A4910CC227B6B520C84F(const struct FName& NotifyName);
	void OnNotifyEnd_9B9214DD42E006008441C9B673B90767(const struct FName& NotifyName);
	void OnNotifyBegin_9B9214DD42E006008441C9B673B90767(const struct FName& NotifyName);
	void OnInterrupted_9B9214DD42E006008441C9B673B90767(const struct FName& NotifyName);
	void OnBlendOut_9B9214DD42E006008441C9B673B90767(const struct FName& NotifyName);
	void OnCompleted_9B9214DD42E006008441C9B673B90767(const struct FName& NotifyName);
	void ReceiveBeginPlay();
	void InteractCancel(class ABP_BaseCharacter_C* BaseCharacter);
	void Interact(class ABP_BaseCharacter_C* BaseCharacter, const struct FHitResult& Hit, bool Timer);
	void ExecuteUbergraph_BP_FurnitureContainer_Chest(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
