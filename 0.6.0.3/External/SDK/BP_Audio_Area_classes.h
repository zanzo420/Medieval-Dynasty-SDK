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

// BlueprintGeneratedClass BP_Audio_Area.BP_Audio_Area_C
// 0x00F0 (FullSize[0x0310] - InheritedSize[0x0220])
class ABP_Audio_Area_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0220(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UTextRenderComponent*                        T_Priority;                                                // 0x0228(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                         AudioBillboard;                                            // 0x0230(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                               Trigger_Collision;                                         // 0x0238(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                               GameStarted;                                               // 0x0240(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_V44U[0x7];                                     // 0x0241(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ABP_Audio_Manager_C*                         AudioReference;                                            // 0x0248(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       AreaName;                                                  // 0x0250(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Priority;                                                  // 0x0258(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_WYOO[0x4];                                     // 0x025C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FST_Audio>                           Ambient_Sounds;                                            // 0x0260(0x0010) (Edit, BlueprintVisible)
	TArray<struct FST_Audio>                           ExplorationMusic;                                          // 0x0270(0x0010) (Edit, BlueprintVisible)
	TArray<struct FST_Audio>                           CombatMusic;                                               // 0x0280(0x0010) (Edit, BlueprintVisible)
	TArray<struct FST_Audio>                           RandomAmbientSoundCue;                                     // 0x0290(0x0010) (Edit, BlueprintVisible)
	float                                              RandomAmbientSoundMinDelay;                                // 0x02A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RandomAmbientSoundMaxDelay;                                // 0x02A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Switch_Method_E_Switch_Method>       E_AudioSwitchMethod;                                       // 0x02A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_FGWE[0x7];                                     // 0x02A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundCue*                                   Switch_Stinger_Combat;                                     // 0x02B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Switch_Stinger_Combat_Delay;                               // 0x02B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_SO9H[0x4];                                     // 0x02BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundCue*                                   Switch_Stinger_Exploration;                                // 0x02C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Switch_Stinger_Exploration_Delay;                          // 0x02C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DelayBeforeStart;                                          // 0x02CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               UseDelayedMusic;                                           // 0x02CD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_LAIJ[0x2];                                     // 0x02CE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DelayedFadeDuration;                                       // 0x02D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DelayBetweenMusicMin;                                      // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DelayBetweenMusicMax;                                      // 0x02D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	unsigned char                                      UnknownData_U7MO[0x4];                                     // 0x02DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FST_Audio>                           CalmMusic;                                                 // 0x02E0(0x0010) (Edit, BlueprintVisible)
	TArray<struct FST_Audio>                           SuspenseMusic;                                             // 0x02F0(0x0010) (Edit, BlueprintVisible)
	TArray<struct FST_Audio>                           PumpingMusic;                                              // 0x0300(0x0010) (Edit, BlueprintVisible)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Audio_Area.BP_Audio_Area_C");
		return ptr;
	}



	void UserConstructionScript();
	void ReceiveBeginPlay();
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void NewAudioManager(class ABP_Audio_Manager_C* AudioReference);
	void ExecuteUbergraph_BP_Audio_Area(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
