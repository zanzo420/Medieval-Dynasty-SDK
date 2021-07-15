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

// BlueprintGeneratedClass BP_MasterTrap_StaticMesh.BP_MasterTrap_StaticMesh_C
// 0x0010 (FullSize[0x0520] - InheritedSize[0x0510])
class ABP_MasterTrap_StaticMesh_C : public ABP_MasterTrap_C
{
public:
	class UBoxComponent*                               ObstructionMesh;                                           // 0x0510(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UStaticMeshComponent*                        StaticMesh;                                                // 0x0518(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MasterTrap_StaticMesh.BP_MasterTrap_StaticMesh_C");
		return ptr;
	}



	void OnOwnershipSwap(TEnumAsByte<E_Ownership_E_Ownership> NewOwnership);
	void CheckObstruction(bool* CanBePlaced_);
	void DisableGhost();
	void EnableGhost();
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
