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

// BlueprintGeneratedClass BP_HoldableItem_Hands.BP_HoldableItem_Hands_C
// 0x004C (FullSize[0x081C] - InheritedSize[0x07D0])
class ABP_HoldableItem_Hands_C : public ABP_MasterMeleeHoldableItem_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x07D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	TArray<class UAnimMontage*>                        LeftHandMontages;                                          // 0x07D8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UAnimMontage*>                        RightHandMontages;                                         // 0x07E8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UBlendSpaceBase*>                     AimOffsets;                                                // 0x07F8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UAnimMontage*                                SelectedLeftMontage;                                       // 0x0808(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                SelectedRightMontage;                                      // 0x0810(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               TriggerNextAttack;                                         // 0x0818(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               CanPerformAttack;                                          // 0x0819(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               CanUseLeftAttack;                                          // 0x081A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               CanUseRightAttack;                                         // 0x081B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_HoldableItem_Hands.BP_HoldableItem_Hands_C");
		return ptr;
	}



	void DecreaseHoldableItemHP(float Value, bool Offhand);
	void GetRandomMontage(TArray<class UAnimMontage*> TargetArray, class UAnimMontage* CurrentMontage, class UAnimMontage** SelectedMontage);
	void CheckMontagesStatus();
	void GetRandomFistMontage(TMap<TEnumAsByte<E_AnimInteractionTypes_E_AnimInteractionTypes>, struct FST_MontagesSettings>* MontagesSettings);
	void LeftMouseInput(bool KeyDown);
	void SetTickEnabled(bool bEnabled);
	void PerformNextAttack();
	void StartLeftHandTimer();
	void StartRightHandTimer();
	void ExecuteUbergraph_BP_HoldableItem_Hands(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
