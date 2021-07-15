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

// BlueprintGeneratedClass BP_Chroma.BP_Chroma_C
// 0x00E0 (FullSize[0x0300] - InheritedSize[0x0220])
class ABP_Chroma_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0220(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0228(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	int                                                MainID;                                                    // 0x0230(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                HealthBarID;                                               // 0x0234(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FoodBarID;                                                 // 0x0238(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                WaterBarID;                                                // 0x023C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                QuickslotBarID;                                            // 0x0240(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                HealthAnimChoicer;                                         // 0x0244(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FoodAnimChoicer;                                           // 0x0248(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                WaterAnimChoicer;                                          // 0x024C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                HealthThreshold;                                           // 0x0250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FoodThreshold;                                             // 0x0254(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                WaterThreshold;                                            // 0x0258(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_SK4S[0x4];                                     // 0x025C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<TEnumAsByte<ChromaSDKPlugin_EChromaSDKKeyboardKey>> HealthBarKeys;                                             // 0x0260(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<TEnumAsByte<ChromaSDKPlugin_EChromaSDKKeyboardKey>> FoodBarKeys;                                               // 0x0270(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<TEnumAsByte<ChromaSDKPlugin_EChromaSDKKeyboardKey>> WaterBarKeys;                                              // 0x0280(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<TEnumAsByte<ChromaSDKPlugin_EChromaSDKKeyboardKey>> QuickslotBarKeys;                                          // 0x0290(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FLinearColor                                InactiveKeyColor;                                          // 0x02A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                BackgroundColor;                                           // 0x02B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                EquippedColor;                                             // 0x02C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                SelectedColor;                                             // 0x02D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               HealthUpdate;                                              // 0x02E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               FoodUpdate;                                                // 0x02E1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               WaterUpdate;                                               // 0x02E2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ShowBars;                                                  // 0x02E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              AnimEffectTimer;                                           // 0x02E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AnimTickTimer;                                             // 0x02E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_Q67K[0x4];                                     // 0x02EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class APC_Player_C*                                PCPlayerReference;                                         // 0x02F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FName                                       CurrentEffectRow;                                          // 0x02F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Chroma.BP_Chroma_C");
		return ptr;
	}



	void PrepareHealthFrames();
	void PrepareFoodFrames();
	void PrepareWaterFrames();
	void UpdateQuickslots();
	void CheckIfWaterUpdateNeeded(float water);
	void CheckIfFoodUpdateNeeded(float Food);
	void CheckIfHealthUpdateNeeded(float Health);
	void HandleInactiveKeys(int Animation_ID, TArray<TEnumAsByte<ChromaSDKPlugin_EChromaSDKKeyboardKey>>* Keys, int Threshold);
	void UpdateChromaAnimationEffect();
	void UpdateChromaAnimation();
	void InitChromaHealthBar(float Health_Percentage);
	void InitChromaFoodBar(float Food_Percentage);
	void InitChromaWaterBar(float Water_Percentage);
	void ReceiveBeginPlay();
	void UpdateChromaWaterBar(float Water_Percentage);
	void UpdateQuickslotBar();
	void BindChromaQuickslotEvent(class APC_Player_C* PCPlayerReference);
	void UpdateChromaFoodBar(float Food_Percentage);
	void ChromaHitEffect(TEnumAsByte<E_DamageType_E_DamageType> Damage_Type);
	void ReceiveTick(float DeltaSeconds);
	void UpdateChromaHealthBar(float Health_Percentage);
	void InitChromaBars();
	void ExecuteUbergraph_BP_Chroma(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
