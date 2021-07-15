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

// BlueprintGeneratedClass BP_FurnitureLight_Lantern.BP_FurnitureLight_Lantern_C
// 0x002F (FullSize[0x0490] - InheritedSize[0x0461])
class ABP_FurnitureLight_Lantern_C : public ABP_MasterFurniture_Light_C
{
public:
	unsigned char                                      UnknownData_H7UC[0x7];                                     // 0x0461(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0468(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UBoxComponent*                               ObstructionMesh2;                                          // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UPointLightComponent*                        PointLight;                                                // 0x0478(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UStaticMeshComponent*                        MeshLamp;                                                  // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    MaterialReference;                                         // 0x0488(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_FurnitureLight_Lantern.BP_FurnitureLight_Lantern_C");
		return ptr;
	}



	void OnOwnershipSwap(TEnumAsByte<E_Ownership_E_Ownership> NewOwnership);
	void CheckObstruction(bool* CanBePlaced_);
	void DisableGhost();
	void EnableGhost();
	void UserConstructionScript();
	void StartFire();
	void PutOutFire();
	void ExecuteUbergraph_BP_FurnitureLight_Lantern(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
