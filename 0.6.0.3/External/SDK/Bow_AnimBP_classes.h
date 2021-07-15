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

// AnimBlueprintGeneratedClass Bow_AnimBP.Bow_AnimBP_C
// 0x0190 (FullSize[0x0448] - InheritedSize[0x02B8])
class UBow_AnimBP_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_6YMJ[0x8];                                     // 0x02B8(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                        // 0x02C8(0x0030)
	struct FAnimNode_Slot                              AnimGraphNode_Slot;                                        // 0x02F8(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer;                            // 0x0340(0x00E8)
	float                                              Strength;                                                  // 0x0428(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_7K1T[0x4];                                     // 0x042C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ABP_HoldableItem_Bow_C*                      Item;                                                      // 0x0430(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                ReloadMontage;                                             // 0x0438(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                ShootMontage;                                              // 0x0440(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Bow_AnimBP.Bow_AnimBP_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void Set_Anim_Bow_Stretch(float Stretch);
	void OnNotifyEnd_BB6ABE8A479AA62B453B6589F78DE181(const struct FName& NotifyName);
	void OnNotifyBegin_BB6ABE8A479AA62B453B6589F78DE181(const struct FName& NotifyName);
	void OnInterrupted_BB6ABE8A479AA62B453B6589F78DE181(const struct FName& NotifyName);
	void OnBlendOut_BB6ABE8A479AA62B453B6589F78DE181(const struct FName& NotifyName);
	void OnCompleted_BB6ABE8A479AA62B453B6589F78DE181(const struct FName& NotifyName);
	void PlayReloadMontage();
	void BlueprintBeginPlay();
	void AnimNotify_StartAiming();
	void AnimNotify_ChangeStance();
	void StopReload();
	void SetAnimBowStretch(float Stretch);
	void PlayShootMontage();
	void ExecuteUbergraph_Bow_AnimBP(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
