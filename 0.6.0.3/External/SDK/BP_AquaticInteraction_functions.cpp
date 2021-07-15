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

// Function BP_AquaticInteraction.BP_AquaticInteraction_C.GetTransform
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_AquaticSurface_C*    Surface                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Location                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                Rotation                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          fade                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_AquaticInteraction_C::GetTransform(class ABP_AquaticSurface_C* Surface, struct FVector* Location, struct FRotator* Rotation, float* fade)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticInteraction.BP_AquaticInteraction_C.GetTransform");

	UBP_AquaticInteraction_C_GetTransform_Params params;
	params.Surface = Surface;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
	if (Rotation != nullptr)
		*Rotation = params.Rotation;
	if (fade != nullptr)
		*fade = params.fade;

}


void UBP_AquaticInteraction_C::AfterRead()
{
	USceneComponent::AfterRead();

}

void UBP_AquaticInteraction_C::BeforeDelete()
{
	USceneComponent::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
