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

// BlueprintGeneratedClass TurnInPlace_AnimNotifyState.TurnInPlace_AnimNotifyState_C
// 0x0011 (FullSize[0x0041] - InheritedSize[0x0030])
class UTurnInPlace_AnimNotifyState_C : public UAnimNotifyState
{
public:
	class UCurveFloat*                                 RotationCurveAsset;                                        // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                Montage;                                                   // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsRightTurn;                                               // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TurnInPlace_AnimNotifyState.TurnInPlace_AnimNotifyState_C");
		return ptr;
	}



	bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
	bool Received_NotifyTick(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float FrameDeltaTime);
	bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
