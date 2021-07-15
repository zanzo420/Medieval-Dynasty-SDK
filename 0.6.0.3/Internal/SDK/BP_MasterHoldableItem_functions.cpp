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

// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.GetFluidType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Fluids_E_Fluids> FluidType                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterHoldableItem_C::GetFluidType(TEnumAsByte<E_Fluids_E_Fluids>* FluidType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.GetFluidType");

	ABP_MasterHoldableItem_C_GetFluidType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FluidType != nullptr)
		*FluidType = params.FluidType;

}


// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.OnLoopStart
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CanStart                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterHoldableItem_C::OnLoopStart(bool* CanStart)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.OnLoopStart");

	ABP_MasterHoldableItem_C_OnLoopStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanStart != nullptr)
		*CanStart = params.CanStart;

}


// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.CheckForTorchEquipableItems
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_MasterHoldableItem_C::CheckForTorchEquipableItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.CheckForTorchEquipableItems");

	ABP_MasterHoldableItem_C_CheckForTorchEquipableItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.ChangeInputStage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InputStage                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterHoldableItem_C::ChangeInputStage(int InputStage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.ChangeInputStage");

	ABP_MasterHoldableItem_C_ChangeInputStage_Params params;
	params.InputStage = InputStage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.HitBoneDetection
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   HitBoneName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          DamagePercent                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterHoldableItem_C::HitBoneDetection(const struct FName& HitBoneName, float* DamagePercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.HitBoneDetection");

	ABP_MasterHoldableItem_C_HitBoneDetection_Params params;
	params.HitBoneName = HitBoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DamagePercent != nullptr)
		*DamagePercent = params.DamagePercent;

}


// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.OnEndInteraction
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_MasterHoldableItem_C::OnEndInteraction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.OnEndInteraction");

	ABP_MasterHoldableItem_C_OnEndInteraction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.OnStartInteraction
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_MasterHoldableItem_C::OnStartInteraction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.OnStartInteraction");

	ABP_MasterHoldableItem_C_OnStartInteraction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.On Tool Interact with Foliage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            FoliageAmount                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterHoldableItem_C::On_Tool_Interact_with_Foliage(int FoliageAmount, const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.On Tool Interact with Foliage");

	ABP_MasterHoldableItem_C_On_Tool_Interact_with_Foliage_Params params;
	params.FoliageAmount = FoliageAmount;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.GetHoldableFlippedTransform
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTransform              HoldableTransform              (Parm, OutParm, IsPlainOldData, NoDestructor)
void ABP_MasterHoldableItem_C::GetHoldableFlippedTransform(struct FTransform* HoldableTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.GetHoldableFlippedTransform");

	ABP_MasterHoldableItem_C_GetHoldableFlippedTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HoldableTransform != nullptr)
		*HoldableTransform = params.HoldableTransform;

}


// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.GetHoldableTransform
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTransform              HoldableTransform              (Parm, OutParm, IsPlainOldData, NoDestructor)
void ABP_MasterHoldableItem_C::GetHoldableTransform(struct FTransform* HoldableTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.GetHoldableTransform");

	ABP_MasterHoldableItem_C_GetHoldableTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HoldableTransform != nullptr)
		*HoldableTransform = params.HoldableTransform;

}


// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.DecreaseHoldableItemCapacity
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_MasterHoldableItem_C::DecreaseHoldableItemCapacity()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.DecreaseHoldableItemCapacity");

	ABP_MasterHoldableItem_C_DecreaseHoldableItemCapacity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.Set Montage Settings
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_AnimInteractionTypes_E_AnimInteractionTypes> Key                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_MontagesSettings    MontageSettings                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<TEnumAsByte<E_AnimInteractionTypes_E_AnimInteractionTypes>, struct FST_MontagesSettings> MontagesSettings               (Parm, OutParm)
void ABP_MasterHoldableItem_C::Set_Montage_Settings(TEnumAsByte<E_AnimInteractionTypes_E_AnimInteractionTypes> Key, const struct FST_MontagesSettings& MontageSettings, TMap<TEnumAsByte<E_AnimInteractionTypes_E_AnimInteractionTypes>, struct FST_MontagesSettings>* MontagesSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.Set Montage Settings");

	ABP_MasterHoldableItem_C_Set_Montage_Settings_Params params;
	params.Key = Key;
	params.MontageSettings = MontageSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MontagesSettings != nullptr)
		*MontagesSettings = params.MontagesSettings;

}


// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.SetStatsFromAbilities
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_CharacterStatsComponent_C* CharacterStatsComponentReference (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           OnlyAnimSpeed                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterHoldableItem_C::SetStatsFromAbilities(class UBP_CharacterStatsComponent_C** CharacterStatsComponentReference, bool OnlyAnimSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.SetStatsFromAbilities");

	ABP_MasterHoldableItem_C_SetStatsFromAbilities_Params params;
	params.OnlyAnimSpeed = OnlyAnimSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CharacterStatsComponentReference != nullptr)
		*CharacterStatsComponentReference = params.CharacterStatsComponentReference;

}


// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.GetMontageSettings
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<E_AnimInteractionTypes_E_AnimInteractionTypes> Key                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_MontagesSettings    MontageSettings                (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterHoldableItem_C::GetMontageSettings(TEnumAsByte<E_AnimInteractionTypes_E_AnimInteractionTypes> Key, struct FST_MontagesSettings* MontageSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.GetMontageSettings");

	ABP_MasterHoldableItem_C_GetMontageSettings_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MontageSettings != nullptr)
		*MontageSettings = params.MontageSettings;

}


// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.DecreaseHoldableItemHP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Offhand                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterHoldableItem_C::DecreaseHoldableItemHP(float Value, bool Offhand)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.DecreaseHoldableItemHP");

	ABP_MasterHoldableItem_C_DecreaseHoldableItemHP_Params params;
	params.Value = Value;
	params.Offhand = Offhand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_MasterHoldableItem_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.UserConstructionScript");

	ABP_MasterHoldableItem_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.LeftMouseInput
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           KeyDown                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterHoldableItem_C::LeftMouseInput(bool KeyDown)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.LeftMouseInput");

	ABP_MasterHoldableItem_C_LeftMouseInput_Params params;
	params.KeyDown = KeyDown;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.RightMouseInput
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           KeyDown                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterHoldableItem_C::RightMouseInput(bool KeyDown)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.RightMouseInput");

	ABP_MasterHoldableItem_C_RightMouseInput_Params params;
	params.KeyDown = KeyDown;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.ResetHoldable
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_MasterHoldableItem_C::ResetHoldable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.ResetHoldable");

	ABP_MasterHoldableItem_C_ResetHoldable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.FlipRotation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UnFlip                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterHoldableItem_C::FlipRotation(bool UnFlip)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.FlipRotation");

	ABP_MasterHoldableItem_C_FlipRotation_Params params;
	params.UnFlip = UnFlip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.OnLoopFinish
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_MasterHoldableItem_C::OnLoopFinish()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.OnLoopFinish");

	ABP_MasterHoldableItem_C_OnLoopFinish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.PerformInteraction
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_MasterHoldableItem_C::PerformInteraction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.PerformInteraction");

	ABP_MasterHoldableItem_C_PerformInteraction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.MontageComplete
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterHoldableItem_C::MontageComplete(class UAnimMontage* Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.MontageComplete");

	ABP_MasterHoldableItem_C_MontageComplete_Params params;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.MontageInterrupted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterHoldableItem_C::MontageInterrupted(class UAnimMontage* Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.MontageInterrupted");

	ABP_MasterHoldableItem_C_MontageInterrupted_Params params;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.MontageBlendOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterHoldableItem_C::MontageBlendOut(class UAnimMontage* Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.MontageBlendOut");

	ABP_MasterHoldableItem_C_MontageBlendOut_Params params;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.HitMontageComplete
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterHoldableItem_C::HitMontageComplete(class UAnimMontage* Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.HitMontageComplete");

	ABP_MasterHoldableItem_C_HitMontageComplete_Params params;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.HitMontageInterrupted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterHoldableItem_C::HitMontageInterrupted(class UAnimMontage* Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.HitMontageInterrupted");

	ABP_MasterHoldableItem_C_HitMontageInterrupted_Params params;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.HitMontageBlendOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterHoldableItem_C::HitMontageBlendOut(class UAnimMontage* Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.HitMontageBlendOut");

	ABP_MasterHoldableItem_C_HitMontageBlendOut_Params params;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.SetTickEnabled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEnabled                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterHoldableItem_C::SetTickEnabled(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.SetTickEnabled");

	ABP_MasterHoldableItem_C_SetTickEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_MasterHoldableItem_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.ReceiveBeginPlay");

	ABP_MasterHoldableItem_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.CheckForInteraction
// (BlueprintCallable, BlueprintEvent)
void ABP_MasterHoldableItem_C::CheckForInteraction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.CheckForInteraction");

	ABP_MasterHoldableItem_C_CheckForInteraction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.StartTimer
// (BlueprintCallable, BlueprintEvent)
void ABP_MasterHoldableItem_C::StartTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.StartTimer");

	ABP_MasterHoldableItem_C_StartTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.SpawnItem
// (BlueprintCallable, BlueprintEvent)
void ABP_MasterHoldableItem_C::SpawnItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.SpawnItem");

	ABP_MasterHoldableItem_C_SpawnItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.DespawnItem
// (BlueprintCallable, BlueprintEvent)
void ABP_MasterHoldableItem_C::DespawnItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.DespawnItem");

	ABP_MasterHoldableItem_C_DespawnItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.HoldableNotify
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterHoldableItem_C::HoldableNotify(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.HoldableNotify");

	ABP_MasterHoldableItem_C_HoldableNotify_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.ExecuteUbergraph_BP_MasterHoldableItem
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterHoldableItem_C::ExecuteUbergraph_BP_MasterHoldableItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterHoldableItem.BP_MasterHoldableItem_C.ExecuteUbergraph_BP_MasterHoldableItem");

	ABP_MasterHoldableItem_C_ExecuteUbergraph_BP_MasterHoldableItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
