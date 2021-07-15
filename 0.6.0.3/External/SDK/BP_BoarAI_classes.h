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

// BlueprintGeneratedClass BP_BoarAI.BP_BoarAI_C
// 0x0034 (FullSize[0x0C04] - InheritedSize[0x0BD0])
class ABP_BoarAI_C : public ABP_GroundAnimalBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0BD0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class ABP_AI_POI_Base_C*                           HomeBasePrey;                                              // 0x0BD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     EngageLocation;                                            // 0x0BE0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DisengageRange;                                            // 0x0BEC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               EngageCooldownActive;                                      // 0x0BF0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_48U7[0x7];                                     // 0x0BF1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                CooldownTimer;                                             // 0x0BF8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                              CoolDownTime;                                              // 0x0C00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BoarAI.BP_BoarAI_C");
		return ptr;
	}



	void EventEngagementStart();
	void EngageingCooldown();
	void BndEvt__AIPerception_K2Node_ComponentBoundEvent_1_ActorPerceptionUpdatedDelegate__DelegateSignature(class AActor* Actor, const struct FAIStimulus& Stimulus);
	void ReceiveBeginPlay();
	void AnimalTookDamage();
	void ExecuteUbergraph_BP_BoarAI(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
