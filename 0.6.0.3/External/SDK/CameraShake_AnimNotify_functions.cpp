// Name: Medieval Dynasty, Version: 0.6.0.3

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function CameraShake_AnimNotify.CameraShake_AnimNotify_C.Received_Notify
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*  MeshComp                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*       Animation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UCameraShake_AnimNotify_C::Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function CameraShake_AnimNotify.CameraShake_AnimNotify_C.Received_Notify");

	UCameraShake_AnimNotify_C_Received_Notify_Params params;
	params.MeshComp = MeshComp;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UCameraShake_AnimNotify_C::AfterRead()
{
	UAnimNotify::AfterRead();

	READ_PTR_FULL(ShakeClass, UClass);
}

void UCameraShake_AnimNotify_C::BeforeDelete()
{
	UAnimNotify::BeforeDelete();

	DELE_PTR_FULL(ShakeClass);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
