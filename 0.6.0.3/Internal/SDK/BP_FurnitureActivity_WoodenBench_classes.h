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

// BlueprintGeneratedClass BP_FurnitureActivity_WoodenBench.BP_FurnitureActivity_WoodenBench_C
// 0x0020 (FullSize[0x0488] - InheritedSize[0x0468])
class ABP_FurnitureActivity_WoodenBench_C : public ABP_MasterFurniture_Activity_StaticMesh_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0468(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class USkeletalMeshComponent*                      Character2;                                                // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      Character1;                                                // 0x0478(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    CharacterMaterialReference;                                // 0x0480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_FurnitureActivity_WoodenBench.BP_FurnitureActivity_WoodenBench_C");
		return ptr;
	}



	void DisableGhost();
	void UserConstructionScript();
	void SetHidden(bool Hidden);
	void UpdatePlaceable(bool Placeable);
	void ExecuteUbergraph_BP_FurnitureActivity_WoodenBench(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
