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

// BlueprintGeneratedClass BP_MasterTrap_SkeletalMesh.BP_MasterTrap_SkeletalMesh_C
// 0x0018 (FullSize[0x0528] - InheritedSize[0x0510])
class ABP_MasterTrap_SkeletalMesh_C : public ABP_MasterTrap_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0510(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class USkeletalMeshComponent*                      SkeletalMesh;                                              // 0x0518(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UBoxComponent*                               ObstructionMesh;                                           // 0x0520(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MasterTrap_SkeletalMesh.BP_MasterTrap_SkeletalMesh_C");
		return ptr;
	}



	void OnOwnershipSwap(TEnumAsByte<E_Ownership_E_Ownership> NewOwnership);
	void CheckObstruction(bool* CanBePlaced_);
	void DisableGhost();
	void EnableGhost();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_MasterTrap_SkeletalMesh(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
