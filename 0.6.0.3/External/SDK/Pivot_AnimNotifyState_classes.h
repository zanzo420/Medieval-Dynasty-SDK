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

// BlueprintGeneratedClass Pivot_AnimNotifyState.Pivot_AnimNotifyState_C
// 0x0014 (FullSize[0x0044] - InheritedSize[0x0030])
class UPivot_AnimNotifyState_C : public UAnimNotifyState
{
public:
	struct FST_PivotParams                             PivotParams;                                               // 0x0030(0x0014) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Pivot_AnimNotifyState.Pivot_AnimNotifyState_C");
		return ptr;
	}



	bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
