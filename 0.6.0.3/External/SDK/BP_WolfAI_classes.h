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

// BlueprintGeneratedClass BP_WolfAI.BP_WolfAI_C
// 0x0034 (FullSize[0x0C04] - InheritedSize[0x0BD0])
class ABP_WolfAI_C : public ABP_GroundAnimalBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0BD0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class ABP_AI_POI_Base_C*                           HomeBasePrey;                                              // 0x0BD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              EncircleTimer;                                             // 0x0BE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_D9KO[0x4];                                     // 0x0BE4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                EncircleTimerHandle;                                       // 0x0BE8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                               ShouldAttack;                                              // 0x0BF0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_W05L[0x3];                                     // 0x0BF1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     EngageLocation;                                            // 0x0BF4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DisengageRange;                                            // 0x0C00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WolfAI.BP_WolfAI_C");
		return ptr;
	}



	void UpdateEncircleTimer();
	bool CheckForPlayer();
	void OnNotifyEnd_1EBD50684C78FEE39CD24286ED6FC53F(const struct FName& NotifyName);
	void OnNotifyBegin_1EBD50684C78FEE39CD24286ED6FC53F(const struct FName& NotifyName);
	void OnInterrupted_1EBD50684C78FEE39CD24286ED6FC53F(const struct FName& NotifyName);
	void OnBlendOut_1EBD50684C78FEE39CD24286ED6FC53F(const struct FName& NotifyName);
	void OnCompleted_1EBD50684C78FEE39CD24286ED6FC53F(const struct FName& NotifyName);
	void ReceiveBeginPlay();
	void EventEngagementStart();
	void FearDecrease();
	void StartEncircleTimer();
	void StopEncircleTimer();
	void ExecuteUbergraph_BP_WolfAI(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
