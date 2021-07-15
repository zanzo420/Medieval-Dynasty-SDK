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

// BlueprintGeneratedClass BP_MasterFurniture_Activity_StaticMesh.BP_MasterFurniture_Activity_StaticMesh_C
// 0x0010 (FullSize[0x0468] - InheritedSize[0x0458])
class ABP_MasterFurniture_Activity_StaticMesh_C : public ABP_MasterFurniture_Activity_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0458(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UStaticMeshComponent*                        Mesh;                                                      // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MasterFurniture_Activity_StaticMesh.BP_MasterFurniture_Activity_StaticMesh_C");
		return ptr;
	}



	void OnOwnershipSwap(TEnumAsByte<E_Ownership_E_Ownership> NewOwnership);
	void DisableGhost();
	void EnableGhost();
	void SetMeshMobility(TEnumAsByte<Engine_EComponentMobility> Mobility);
	void ExecuteUbergraph_BP_MasterFurniture_Activity_StaticMesh(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
