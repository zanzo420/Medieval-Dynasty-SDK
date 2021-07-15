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

// BlueprintGeneratedClass BP_FurnitureContainer_Sack.BP_FurnitureContainer_Sack_C
// 0x0014 (FullSize[0x0498] - InheritedSize[0x0484])
class ABP_FurnitureContainer_Sack_C : public ABP_MasterFurniture_Container_C
{
public:
	unsigned char                                      UnknownData_8AJQ[0x4];                                     // 0x0484(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UStaticMeshComponent*                        Mesh;                                                      // 0x0488(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UBoxComponent*                               ObstructionMesh;                                           // 0x0490(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_FurnitureContainer_Sack.BP_FurnitureContainer_Sack_C");
		return ptr;
	}



	void GetInventoryComponent(class UInventoryComponent_C** Inventory);
	void OnOwnershipSwap(TEnumAsByte<E_Ownership_E_Ownership> NewOwnership);
	void DisableGhost();
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
