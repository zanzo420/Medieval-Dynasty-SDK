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

// BlueprintGeneratedClass BP_CombatComponent.BP_CombatComponent_C
// 0x0040 (FullSize[0x00F0] - InheritedSize[0x00B0])
class UBP_CombatComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	struct FScriptMulticastDelegate                    OnEnteredCombat;                                           // 0x00B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnLeaveCombat;                                             // 0x00C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               IsInCombat;                                                // 0x00D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_QIF1[0x7];                                     // 0x00D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class AActor*>                              CombatCausers;                                             // 0x00E0(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CombatComponent.BP_CombatComponent_C");
		return ptr;
	}



	void StartCombat(class AActor* CombatCauser);
	void EndCombat(class AActor* CombatCauser);
	void IsInCombat_Timer();
	void ExecuteUbergraph_BP_CombatComponent(int EntryPoint);
	void OnLeaveCombat__DelegateSignature();
	void OnEnteredCombat__DelegateSignature();
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
