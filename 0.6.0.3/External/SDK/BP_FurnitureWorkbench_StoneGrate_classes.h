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

// BlueprintGeneratedClass BP_FurnitureWorkbench_StoneGrate.BP_FurnitureWorkbench_StoneGrate_C
// 0x0098 (FullSize[0x0580] - InheritedSize[0x04E8])
class ABP_FurnitureWorkbench_StoneGrate_C : public ABP_MasterFurniture_Workbench_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x04E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UNavModifierComponent*                       NavModifier;                                               // 0x04F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    ParticleSystem;                                            // 0x04F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                        PointLight;                                                // 0x0500(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        Food;                                                      // 0x0508(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        StaticMesh;                                                // 0x0510(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              FireBoxFire_TL_Alpha_0335BB3C4D95AF43F62C778D34B2CCBE;     // 0x0518(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             FireBoxFire_TL__Direction_0335BB3C4D95AF43F62C778D34B2CCBE; // 0x051C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_RK2O[0x3];                                     // 0x051D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          FireBoxFire_TL;                                            // 0x0520(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              FadeTimeline_Alpha_CF42982E4D6643725F83C28292F68063;       // 0x0528(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             FadeTimeline__Direction_CF42982E4D6643725F83C28292F68063;  // 0x052C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_2F6S[0x3];                                     // 0x052D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          FadeTimeline;                                              // 0x0530(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    DynamicFoodMaterial;                                       // 0x0538(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CraftingTime;                                              // 0x0540(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_SH4E[0x4];                                     // 0x0544(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 StartFireCurve;                                            // 0x0548(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                                 ExtinguishFireCurve;                                       // 0x0550(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              StartFirePlayRate;                                         // 0x0558(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              EndFirePlayRate;                                           // 0x055C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CurrentEmissiveIntensity;                                  // 0x0560(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TargetEmissiveIntensity;                                   // 0x0564(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    FireboxMaterial;                                           // 0x0568(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Fire;                                                      // 0x0570(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_8XH7[0x3];                                     // 0x0571(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              HourDuration;                                              // 0x0574(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_MasterFurniture_Workbench_C*             CauldronReference;                                         // 0x0578(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_FurnitureWorkbench_StoneGrate.BP_FurnitureWorkbench_StoneGrate_C");
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
	void CraftingEnded();
	void InteractCancel(class ABP_BaseCharacter_C* BaseCharacter);
	void CraftingStopping();
	void StartFire();
	void ReverseFire();
	void Interact(class ABP_BaseCharacter_C* BaseCharacter, const struct FHitResult& Hit, bool Timer);
	void PerformActorInteraction();
	void StopFire();
	void FinishFurniture(bool Load);
	void StartWorkbench();
	void LinkFurniture(class ABP_MasterFurniture_C* Furniture);
	void ExecuteUbergraph_BP_FurnitureWorkbench_StoneGrate(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
