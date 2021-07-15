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

// Function NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect.GetSpawnedEffect
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UFXSystemComponent*      ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UFXSystemComponent* UAnimNotify_PlayNiagaraEffect::GetSpawnedEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect.GetSpawnedEffect");

	UAnimNotify_PlayNiagaraEffect_GetSpawnedEffect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UAnimNotify_PlayNiagaraEffect::AfterRead()
{
	UAnimNotify::AfterRead();

	READ_PTR_FULL(Template, UNiagaraSystem);
}

void UAnimNotify_PlayNiagaraEffect::BeforeDelete()
{
	UAnimNotify::BeforeDelete();

	DELE_PTR_FULL(Template);
}

void UAnimNotifyState_TimedNiagaraEffect::AfterRead()
{
	UAnimNotifyState::AfterRead();

	READ_PTR_FULL(Template, UNiagaraSystem);
}

void UAnimNotifyState_TimedNiagaraEffect::BeforeDelete()
{
	UAnimNotifyState::BeforeDelete();

	DELE_PTR_FULL(Template);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
