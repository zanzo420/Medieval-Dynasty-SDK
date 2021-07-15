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

// BlueprintGeneratedClass BP_FurnitureWorkbench_Cauldron.BP_FurnitureWorkbench_Cauldron_C
// 0x0068 (FullSize[0x0550] - InheritedSize[0x04E8])
class ABP_FurnitureWorkbench_Cauldron_C : public ABP_MasterFurniture_Workbench_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x04E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UPointLightComponent*                        PointLight;                                                // 0x04F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    PS_CauldronSoup;                                           // 0x04F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        StaticMesh;                                                // 0x0500(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              Boiling_TL_Alpha_86B9781C45EA7299F95AB2AFB35666B9;         // 0x0508(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Boiling_TL__Direction_86B9781C45EA7299F95AB2AFB35666B9;    // 0x050C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_3M2O[0x3];                                     // 0x050D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Boiling_TL;                                                // 0x0510(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UCurveFloat*                                 StartFireCurve;                                            // 0x0518(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                                 ExtinguishFireCurve;                                       // 0x0520(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              StartBoilingPlayRate;                                      // 0x0528(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              EndBoilingPlayRate;                                        // 0x052C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CurrentBoilingIntensity;                                   // 0x0530(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TargetBoilingIntensity;                                    // 0x0534(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CurrentBoilingSpawn;                                       // 0x0538(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TargetBoilingSpawn;                                        // 0x053C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_MasterFurniture_Workbench_C*             CampfireReference;                                         // 0x0540(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    SoupMaterial;                                              // 0x0548(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_FurnitureWorkbench_Cauldron.BP_FurnitureWorkbench_Cauldron_C");
		return ptr;
	}



	void Boiling_TL__FinishedFunc();
	void Boiling_TL__UpdateFunc();
	void FinishFurniture(bool Load);
	void StartBoiling();
	void ReverseBoiling();
	void ReceiveBeginPlay();
	void CraftingStarted();
	void CraftingEnded();
	void CraftingStopping();
	void LinkFurniture(class ABP_MasterFurniture_C* Furniture);
	void Interact(class ABP_BaseCharacter_C* BaseCharacter, const struct FHitResult& Hit, bool Timer);
	void CraftingStarted_NPC();
	void CraftingEnded_NPC();
	void ResetBoiling();
	void ExecuteUbergraph_BP_FurnitureWorkbench_Cauldron(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
