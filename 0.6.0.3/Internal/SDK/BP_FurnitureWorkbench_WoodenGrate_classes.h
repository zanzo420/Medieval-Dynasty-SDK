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

// BlueprintGeneratedClass BP_FurnitureWorkbench_WoodenGrate.BP_FurnitureWorkbench_WoodenGrate_C
// 0x0098 (FullSize[0x0580] - InheritedSize[0x04E8])
class ABP_FurnitureWorkbench_WoodenGrate_C : public ABP_MasterFurniture_Workbench_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x04E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UNavModifierComponent*                       NavModifier;                                               // 0x04F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                        PointLight;                                                // 0x04F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    ParticleSystem;                                            // 0x0500(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        Food;                                                      // 0x0508(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        StaticMesh;                                                // 0x0510(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              FireBoxFire_TL_Alpha_80A82C4448EF4864D69400ADCC3A34F6;     // 0x0518(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             FireBoxFire_TL__Direction_80A82C4448EF4864D69400ADCC3A34F6; // 0x051C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_M4R7[0x3];                                     // 0x051D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          FireBoxFire_TL;                                            // 0x0520(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              FadeTimeline_Alpha_C59D1A7A4ADD4E37A2528AB726859CD9;       // 0x0528(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             FadeTimeline__Direction_C59D1A7A4ADD4E37A2528AB726859CD9;  // 0x052C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_OHRY[0x3];                                     // 0x052D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          FadeTimeline;                                              // 0x0530(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    DynamicFoodMaterial;                                       // 0x0538(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CraftingTime;                                              // 0x0540(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_J291[0x4];                                     // 0x0544(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInstanceDynamic*                    FireboxMaterial;                                           // 0x0548(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                                 StartFireCurve;                                            // 0x0550(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                                 ExtinguishFireCurve;                                       // 0x0558(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              StartFirePlayRate;                                         // 0x0560(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              EndFirePlayRate;                                           // 0x0564(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CurrentEmissiveIntensity;                                  // 0x0568(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TargetEmissiveIntensity;                                   // 0x056C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Fire;                                                      // 0x0570(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_IY3O[0x3];                                     // 0x0571(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              HourDuration;                                              // 0x0574(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_MasterFurniture_Workbench_C*             CauldronReference;                                         // 0x0578(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_FurnitureWorkbench_WoodenGrate.BP_FurnitureWorkbench_WoodenGrate_C");
		return ptr;
	}



	bool IsLinkedFurnitureStarted();
	void GetNPCInteractAnimation(TEnumAsByte<E_Sex_E_Sex> Sex, class UAnimMontage** Animation);
	void FadeTimeline__FinishedFunc();
	void FadeTimeline__UpdateFunc();
	void FireBoxFire_TL__FinishedFunc();
	void FireBoxFire_TL__UpdateFunc();
	void FurnitureNotify(const struct FName& NotifyName);
	void FryFood();
	void CraftingStarted();
	void WaitCrafting();
	void ReceiveBeginPlay();
	void StartFire();
	void ReverseFire();
	void CraftingEnded();
	void InteractCancel(class ABP_BaseCharacter_C* BaseCharacter);
	void CraftingStopping();
	void Interact(class ABP_BaseCharacter_C* BaseCharacter, const struct FHitResult& Hit, bool Timer);
	void PerformActorInteraction();
	void FinishFurniture(bool Load);
	void StopFire();
	void StartWorkbench();
	void LinkFurniture(class ABP_MasterFurniture_C* Furniture);
	void ExecuteUbergraph_BP_FurnitureWorkbench_WoodenGrate(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
