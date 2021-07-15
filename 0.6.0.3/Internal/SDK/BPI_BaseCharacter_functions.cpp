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

// Function BPI_BaseCharacter.BPI_BaseCharacter_C.GetInteractionEndpoint
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 EndPoint                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_BaseCharacter_C::GetInteractionEndpoint(float Distance, struct FVector* EndPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.GetInteractionEndpoint");

	UBPI_BaseCharacter_C_GetInteractionEndpoint_Params params;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (EndPoint != nullptr)
		*EndPoint = params.EndPoint;

}


// Function BPI_BaseCharacter.BPI_BaseCharacter_C.GetPhysicsHandle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPhysicsHandleComponent* PhysicsHandle                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_BaseCharacter_C::GetPhysicsHandle(class UPhysicsHandleComponent** PhysicsHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.GetPhysicsHandle");

	UBPI_BaseCharacter_C_GetPhysicsHandle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PhysicsHandle != nullptr)
		*PhysicsHandle = params.PhysicsHandle;

}


// Function BPI_BaseCharacter.BPI_BaseCharacter_C.SetMountAnimalType BPI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Animals_E_Animals> MountAnimalType                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_BaseCharacter_C::SetMountAnimalType_BPI(TEnumAsByte<E_Animals_E_Animals> MountAnimalType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.SetMountAnimalType BPI");

	UBPI_BaseCharacter_C_SetMountAnimalType_BPI_Params params;
	params.MountAnimalType = MountAnimalType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_BaseCharacter.BPI_BaseCharacter_C.SetEnableIK_BPI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IK_Enabled                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_BaseCharacter_C::SetEnableIK_BPI(bool IK_Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.SetEnableIK_BPI");

	UBPI_BaseCharacter_C_SetEnableIK_BPI_Params params;
	params.IK_Enabled = IK_Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_BaseCharacter.BPI_BaseCharacter_C.UpdateIKAlpha
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Alpha                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_BaseCharacter_C::UpdateIKAlpha(float Alpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.UpdateIKAlpha");

	UBPI_BaseCharacter_C_UpdateIKAlpha_Params params;
	params.Alpha = Alpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_BaseCharacter.BPI_BaseCharacter_C.PlayMountSpecial
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_BaseCharacter_C::PlayMountSpecial()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.PlayMountSpecial");

	UBPI_BaseCharacter_C_PlayMountSpecial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_BaseCharacter.BPI_BaseCharacter_C.PlayMountStopAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            AnimIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_BaseCharacter_C::PlayMountStopAnimation(int AnimIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.PlayMountStopAnimation");

	UBPI_BaseCharacter_C_PlayMountStopAnimation_Params params;
	params.AnimIndex = AnimIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_BaseCharacter.BPI_BaseCharacter_C.PlayMountAnimation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// AdsMountingSystem_EMountingDirection Position                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_MountAnimType_E_MountAnimType> Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_BaseCharacter_C::PlayMountAnimation(AdsMountingSystem_EMountingDirection Position, TEnumAsByte<E_MountAnimType_E_MountAnimType> Type, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.PlayMountAnimation");

	UBPI_BaseCharacter_C_PlayMountAnimation_Params params;
	params.Position = Position;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;

}


// Function BPI_BaseCharacter.BPI_BaseCharacter_C.GetProfessionData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_Profession          ProfessionData                 (Parm, OutParm, HasGetValueTypeHash)
void UBPI_BaseCharacter_C::GetProfessionData(struct FST_Profession* ProfessionData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.GetProfessionData");

	UBPI_BaseCharacter_C_GetProfessionData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ProfessionData != nullptr)
		*ProfessionData = params.ProfessionData;

}


// Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set Caught Prey BPI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CaughtPrey                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_BaseCharacter_C::Set_Caught_Prey_BPI(bool CaughtPrey)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set Caught Prey BPI");

	UBPI_BaseCharacter_C_Set_Caught_Prey_BPI_Params params;
	params.CaughtPrey = CaughtPrey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_BaseCharacter.BPI_BaseCharacter_C.GetIsInDialogue_BPI
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsInDialogue                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_BaseCharacter_C::GetIsInDialogue_BPI(bool* IsInDialogue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.GetIsInDialogue_BPI");

	UBPI_BaseCharacter_C_GetIsInDialogue_BPI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsInDialogue != nullptr)
		*IsInDialogue = params.IsInDialogue;

}


// Function BPI_BaseCharacter.BPI_BaseCharacter_C.OnDeath
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_BaseCharacter_C::OnDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.OnDeath");

	UBPI_BaseCharacter_C_OnDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set IdlePoseByID BPI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_IdleStates_E_IdleStates> Idle_State                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// unsigned char                  PoseID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_AfterIdlePose_E_AfterIdlePose> DoAfterPose                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_BaseCharacter_C::Set_IdlePoseByID_BPI(TEnumAsByte<E_IdleStates_E_IdleStates> Idle_State, unsigned char PoseID, TEnumAsByte<E_AfterIdlePose_E_AfterIdlePose> DoAfterPose)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set IdlePoseByID BPI");

	UBPI_BaseCharacter_C_Set_IdlePoseByID_BPI_Params params;
	params.Idle_State = Idle_State;
	params.PoseID = PoseID;
	params.DoAfterPose = DoAfterPose;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_BaseCharacter.BPI_BaseCharacter_C.GetSystemManager
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_SystemsManager_C*    SystemManager                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_BaseCharacter_C::GetSystemManager(class ABP_SystemsManager_C** SystemManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.GetSystemManager");

	UBPI_BaseCharacter_C_GetSystemManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SystemManager != nullptr)
		*SystemManager = params.SystemManager;

}


// Function BPI_BaseCharacter.BPI_BaseCharacter_C.Knockback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 KnockbackDirection             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          KnockbackStrength              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_BaseCharacter_C::Knockback(const struct FVector& KnockbackDirection, float KnockbackStrength)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.Knockback");

	UBPI_BaseCharacter_C_Knockback_Params params;
	params.KnockbackDirection = KnockbackDirection;
	params.KnockbackStrength = KnockbackStrength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_AnimObjectNotify
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_NotifyObject_E_NotifyObject> ObjectToNotify                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_BaseCharacter_C::AnimNotify_AnimObjectNotify(TEnumAsByte<E_NotifyObject_E_NotifyObject> ObjectToNotify, const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_AnimObjectNotify");

	UBPI_BaseCharacter_C_AnimNotify_AnimObjectNotify_Params params;
	params.ObjectToNotify = ObjectToNotify;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_BaseCharacter.BPI_BaseCharacter_C.ForceStanding
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_BaseCharacter_C::ForceStanding()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.ForceStanding");

	UBPI_BaseCharacter_C_ForceStanding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_BaseCharacter.BPI_BaseCharacter_C.WaitForCrafting
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_BaseCharacter_C::WaitForCrafting()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.WaitForCrafting");

	UBPI_BaseCharacter_C_WaitForCrafting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_BaseCharacter.BPI_BaseCharacter_C.GetBaseCharacterWorldLocation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_BaseCharacter_C::GetBaseCharacterWorldLocation(struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.GetBaseCharacterWorldLocation");

	UBPI_BaseCharacter_C_GetBaseCharacterWorldLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;

}


// Function BPI_BaseCharacter.BPI_BaseCharacter_C.SetIsInWater
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InWater                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Intensity                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_BaseCharacter_C::SetIsInWater(bool InWater, float Intensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.SetIsInWater");

	UBPI_BaseCharacter_C_SetIsInWater_Params params;
	params.InWater = InWater;
	params.Intensity = Intensity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_BreakMontageInterrupted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Profession_E_Profession> Profession                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// unsigned char                  BreakAnimID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_BaseCharacter_C::AnimNotify_BreakMontageInterrupted(TEnumAsByte<E_Profession_E_Profession> Profession, class UAnimMontage* Montage, unsigned char BreakAnimID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_BreakMontageInterrupted");

	UBPI_BaseCharacter_C_AnimNotify_BreakMontageInterrupted_Params params;
	params.Profession = Profession;
	params.Montage = Montage;
	params.BreakAnimID = BreakAnimID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_BreakMontageBlendOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Profession_E_Profession> Profession                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// unsigned char                  BreakAnimID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_BaseCharacter_C::AnimNotify_BreakMontageBlendOut(TEnumAsByte<E_Profession_E_Profession> Profession, class UAnimMontage* Montage, unsigned char BreakAnimID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_BreakMontageBlendOut");

	UBPI_BaseCharacter_C_AnimNotify_BreakMontageBlendOut_Params params;
	params.Profession = Profession;
	params.Montage = Montage;
	params.BreakAnimID = BreakAnimID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_BreakMontageComplete
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Profession_E_Profession> Profession                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// unsigned char                  BreakAnimID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_BaseCharacter_C::AnimNotify_BreakMontageComplete(TEnumAsByte<E_Profession_E_Profession> Profession, class UAnimMontage* Montage, unsigned char BreakAnimID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_BreakMontageComplete");

	UBPI_BaseCharacter_C_AnimNotify_BreakMontageComplete_Params params;
	params.Profession = Profession;
	params.Montage = Montage;
	params.BreakAnimID = BreakAnimID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set BreakState BPI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsTakingBreak                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TEnumAsByte<E_Profession_E_Profession> Profession                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           RandomizeAnim                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// unsigned char                  BreakAnimID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_BaseCharacter_C::Set_BreakState_BPI(bool IsTakingBreak, TEnumAsByte<E_Profession_E_Profession> Profession, bool RandomizeAnim, unsigned char BreakAnimID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set BreakState BPI");

	UBPI_BaseCharacter_C_Set_BreakState_BPI_Params params;
	params.IsTakingBreak = IsTakingBreak;
	params.Profession = Profession;
	params.RandomizeAnim = RandomizeAnim;
	params.BreakAnimID = BreakAnimID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_WorkLoopsFinished
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Profession_E_Profession> Profession                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// unsigned char                  ProfessionState                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Loop                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_BaseCharacter_C::AnimNotify_WorkLoopsFinished(TEnumAsByte<E_Profession_E_Profession> Profession, class UAnimMontage* Montage, unsigned char ProfessionState, int Loop)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_WorkLoopsFinished");

	UBPI_BaseCharacter_C_AnimNotify_WorkLoopsFinished_Params params;
	params.Profession = Profession;
	params.Montage = Montage;
	params.ProfessionState = ProfessionState;
	params.Loop = Loop;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_WorkLoopIncreased
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Profession_E_Profession> Profession                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// unsigned char                  ProfessionState                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Loop                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_BaseCharacter_C::AnimNotify_WorkLoopIncreased(TEnumAsByte<E_Profession_E_Profession> Profession, class UAnimMontage* Montage, unsigned char ProfessionState, int Loop)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_WorkLoopIncreased");

	UBPI_BaseCharacter_C_AnimNotify_WorkLoopIncreased_Params params;
	params.Profession = Profession;
	params.Montage = Montage;
	params.ProfessionState = ProfessionState;
	params.Loop = Loop;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_WorkMontageInterrupted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Profession_E_Profession> Profession                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// unsigned char                  ProfessionState                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_BaseCharacter_C::AnimNotify_WorkMontageInterrupted(TEnumAsByte<E_Profession_E_Profession> Profession, class UAnimMontage* Montage, unsigned char ProfessionState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_WorkMontageInterrupted");

	UBPI_BaseCharacter_C_AnimNotify_WorkMontageInterrupted_Params params;
	params.Profession = Profession;
	params.Montage = Montage;
	params.ProfessionState = ProfessionState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_WorkMontageComplete
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Profession_E_Profession> Profession                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// unsigned char                  ProfessionState                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_BaseCharacter_C::AnimNotify_WorkMontageComplete(TEnumAsByte<E_Profession_E_Profession> Profession, class UAnimMontage* Montage, unsigned char ProfessionState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_WorkMontageComplete");

	UBPI_BaseCharacter_C_AnimNotify_WorkMontageComplete_Params params;
	params.Profession = Profession;
	params.Montage = Montage;
	params.ProfessionState = ProfessionState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set WorkState BPI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsWorking                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TEnumAsByte<E_Profession_E_Profession> Profession                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// unsigned char                  ProfessionState                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Loops                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_BaseCharacter_C::Set_WorkState_BPI(bool IsWorking, TEnumAsByte<E_Profession_E_Profession> Profession, unsigned char ProfessionState, int Loops)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set WorkState BPI");

	UBPI_BaseCharacter_C_Set_WorkState_BPI_Params params;
	params.IsWorking = IsWorking;
	params.Profession = Profession;
	params.ProfessionState = ProfessionState;
	params.Loops = Loops;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_BaseCharacter.BPI_BaseCharacter_C.PlayHolsterAnimation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          PlayRate                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_Tools_E_Tools>   ToolType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Duration                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          TakeOutDuration                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_BaseCharacter_C::PlayHolsterAnimation(float PlayRate, TEnumAsByte<E_Tools_E_Tools> ToolType, float* Duration, float* TakeOutDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.PlayHolsterAnimation");

	UBPI_BaseCharacter_C_PlayHolsterAnimation_Params params;
	params.PlayRate = PlayRate;
	params.ToolType = ToolType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Duration != nullptr)
		*Duration = params.Duration;
	if (TakeOutDuration != nullptr)
		*TakeOutDuration = params.TakeOutDuration;

}


// Function BPI_BaseCharacter.BPI_BaseCharacter_C.GetHeadTransform
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              HeadTransform                  (Parm, OutParm, IsPlainOldData, NoDestructor)
void UBPI_BaseCharacter_C::GetHeadTransform(struct FTransform* HeadTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.GetHeadTransform");

	UBPI_BaseCharacter_C_GetHeadTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HeadTransform != nullptr)
		*HeadTransform = params.HeadTransform;

}


// Function BPI_BaseCharacter.BPI_BaseCharacter_C.GetStatsComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_CharacterStatsComponent_C* StatsComponent                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_BaseCharacter_C::GetStatsComponent(class UBP_CharacterStatsComponent_C** StatsComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.GetStatsComponent");

	UBPI_BaseCharacter_C_GetStatsComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (StatsComponent != nullptr)
		*StatsComponent = params.StatsComponent;

}


// Function BPI_BaseCharacter.BPI_BaseCharacter_C.GetProfession
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Profession_E_Profession> Profession                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_BaseCharacter_C::GetProfession(TEnumAsByte<E_Profession_E_Profession>* Profession)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.GetProfession");

	UBPI_BaseCharacter_C_GetProfession_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Profession != nullptr)
		*Profession = params.Profession;

}


// Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set IdleOtherPose BPI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_OtherIdles_E_OtherIdles> Other_Idle_Pose                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_AfterIdlePose_E_AfterIdlePose> DoAfterPose                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_BaseCharacter_C::Set_IdleOtherPose_BPI(TEnumAsByte<E_OtherIdles_E_OtherIdles> Other_Idle_Pose, TEnumAsByte<E_AfterIdlePose_E_AfterIdlePose> DoAfterPose)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set IdleOtherPose BPI");

	UBPI_BaseCharacter_C_Set_IdleOtherPose_BPI_Params params;
	params.Other_Idle_Pose = Other_Idle_Pose;
	params.DoAfterPose = DoAfterPose;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set IdleLookingPose BPI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_LookingIdles_E_LookingIdles> Looking_Idle_Pose              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_AfterIdlePose_E_AfterIdlePose> DoAfterPose                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_BaseCharacter_C::Set_IdleLookingPose_BPI(TEnumAsByte<E_LookingIdles_E_LookingIdles> Looking_Idle_Pose, TEnumAsByte<E_AfterIdlePose_E_AfterIdlePose> DoAfterPose)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set IdleLookingPose BPI");

	UBPI_BaseCharacter_C_Set_IdleLookingPose_BPI_Params params;
	params.Looking_Idle_Pose = Looking_Idle_Pose;
	params.DoAfterPose = DoAfterPose;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set IdleTalkingPose BPI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_TalkingIdles_E_TalkingIdles> Talking_Idle_Pose              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_AfterIdlePose_E_AfterIdlePose> DoAfterPose                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_BaseCharacter_C::Set_IdleTalkingPose_BPI(TEnumAsByte<E_TalkingIdles_E_TalkingIdles> Talking_Idle_Pose, TEnumAsByte<E_AfterIdlePose_E_AfterIdlePose> DoAfterPose)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set IdleTalkingPose BPI");

	UBPI_BaseCharacter_C_Set_IdleTalkingPose_BPI_Params params;
	params.Talking_Idle_Pose = Talking_Idle_Pose;
	params.DoAfterPose = DoAfterPose;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set IdleStandingPose BPI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_StandingIdles_E_StandingIdles> Standing_Idle_Pose             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_AfterIdlePose_E_AfterIdlePose> DoAfterPose                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_BaseCharacter_C::Set_IdleStandingPose_BPI(TEnumAsByte<E_StandingIdles_E_StandingIdles> Standing_Idle_Pose, TEnumAsByte<E_AfterIdlePose_E_AfterIdlePose> DoAfterPose)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set IdleStandingPose BPI");

	UBPI_BaseCharacter_C_Set_IdleStandingPose_BPI_Params params;
	params.Standing_Idle_Pose = Standing_Idle_Pose;
	params.DoAfterPose = DoAfterPose;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set IdleState BPI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsInIdleState                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TEnumAsByte<E_IdleStates_E_IdleStates> IdleState                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_BaseCharacter_C::Set_IdleState_BPI(bool IsInIdleState, TEnumAsByte<E_IdleStates_E_IdleStates> IdleState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set IdleState BPI");

	UBPI_BaseCharacter_C_Set_IdleState_BPI_Params params;
	params.IsInIdleState = IsInIdleState;
	params.IdleState = IdleState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_BaseCharacter.BPI_BaseCharacter_C.SetMontageSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<TEnumAsByte<E_AnimInteractionTypes_E_AnimInteractionTypes>, struct FST_MontagesSettings> MontagesSettings               (BlueprintVisible, BlueprintReadOnly, Parm)
void UBPI_BaseCharacter_C::SetMontageSettings(TMap<TEnumAsByte<E_AnimInteractionTypes_E_AnimInteractionTypes>, struct FST_MontagesSettings> MontagesSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.SetMontageSettings");

	UBPI_BaseCharacter_C_SetMontageSettings_Params params;
	params.MontagesSettings = MontagesSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_BaseCharacter.BPI_BaseCharacter_C.SelectPickUpAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           PreferTwoHanded                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_BaseCharacter_C::SelectPickUpAnim(class UObject* Instigator, bool PreferTwoHanded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.SelectPickUpAnim");

	UBPI_BaseCharacter_C_SelectPickUpAnim_Params params;
	params.Instigator = Instigator;
	params.PreferTwoHanded = PreferTwoHanded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_HolsterWeapon
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_BaseCharacter_C::AnimNotify_HolsterWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_HolsterWeapon");

	UBPI_BaseCharacter_C_AnimNotify_HolsterWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_DespawnAnimItem
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_BaseCharacter_C::AnimNotify_DespawnAnimItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_DespawnAnimItem");

	UBPI_BaseCharacter_C_AnimNotify_DespawnAnimItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_SpawnAnimItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  ItemClass                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsOffHand                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_BaseCharacter_C::AnimNotify_SpawnAnimItem(class UClass* ItemClass, bool IsOffHand)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_SpawnAnimItem");

	UBPI_BaseCharacter_C_AnimNotify_SpawnAnimItem_Params params;
	params.ItemClass = ItemClass;
	params.IsOffHand = IsOffHand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_BaseCharacter.BPI_BaseCharacter_C.PlayCraftingAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Workbenches_E_Workbenches> WorkbenchType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          CraftingTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_BaseCharacter_C::PlayCraftingAnimation(TEnumAsByte<E_Workbenches_E_Workbenches> WorkbenchType, float CraftingTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.PlayCraftingAnimation");

	UBPI_BaseCharacter_C_PlayCraftingAnimation_Params params;
	params.WorkbenchType = WorkbenchType;
	params.CraftingTime = CraftingTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set Sitting BPI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Sitting                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TEnumAsByte<E_SitDownPosition_E_SitDownPosition> SitDownPosition                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_BaseCharacter_C::Set_Sitting_BPI(bool Sitting, TEnumAsByte<E_SitDownPosition_E_SitDownPosition> SitDownPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set Sitting BPI");

	UBPI_BaseCharacter_C_Set_Sitting_BPI_Params params;
	params.Sitting = Sitting;
	params.SitDownPosition = SitDownPosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set Sleeping BPI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Sleeping                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TEnumAsByte<E_SleepingDirection_E_SleepingDirection> SleepingDirection              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           UseBedSleepingPose             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_BaseCharacter_C::Set_Sleeping_BPI(bool Sleeping, TEnumAsByte<E_SleepingDirection_E_SleepingDirection> SleepingDirection, bool UseBedSleepingPose)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set Sleeping BPI");

	UBPI_BaseCharacter_C_Set_Sleeping_BPI_Params params;
	params.Sleeping = Sleeping;
	params.SleepingDirection = SleepingDirection;
	params.UseBedSleepingPose = UseBedSleepingPose;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_StopMovement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bStopMovementInput             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_BaseCharacter_C::AnimNotify_StopMovement(bool bStopMovementInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_StopMovement");

	UBPI_BaseCharacter_C_AnimNotify_StopMovement_Params params;
	params.bStopMovementInput = bStopMovementInput;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_StopRotation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           StopRotationInput              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_BaseCharacter_C::AnimNotify_StopRotation(bool StopRotationInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_StopRotation");

	UBPI_BaseCharacter_C_AnimNotify_StopRotation_Params params;
	params.StopRotationInput = StopRotationInput;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_LimitCamera
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_CameraRotationLimits CameraLimits                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_BaseCharacter_C::AnimNotify_LimitCamera(const struct FST_CameraRotationLimits& CameraLimits)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_LimitCamera");

	UBPI_BaseCharacter_C_AnimNotify_LimitCamera_Params params;
	params.CameraLimits = CameraLimits;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_BaseCharacter.BPI_BaseCharacter_C.PlayerLookAt
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 TargetLocation                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_BaseCharacter_C::PlayerLookAt(class AActor* Target, const struct FVector& TargetLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.PlayerLookAt");

	UBPI_BaseCharacter_C_PlayerLookAt_Params params;
	params.Target = Target;
	params.TargetLocation = TargetLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_BaseCharacter.BPI_BaseCharacter_C.SetMontageType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_AnimInteractionTypes_E_AnimInteractionTypes> Montage_Type                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_BaseCharacter_C::SetMontageType(TEnumAsByte<E_AnimInteractionTypes_E_AnimInteractionTypes> Montage_Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.SetMontageType");

	UBPI_BaseCharacter_C_SetMontageType_Params params;
	params.Montage_Type = Montage_Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_BaseCharacter.BPI_BaseCharacter_C.GetIsAnyMontageFromMapPlaying
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_BaseCharacter_C::GetIsAnyMontageFromMapPlaying(bool* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.GetIsAnyMontageFromMapPlaying");

	UBPI_BaseCharacter_C_GetIsAnyMontageFromMapPlaying_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;

}


// Function BPI_BaseCharacter.BPI_BaseCharacter_C.GetCurrentPickUpAnim
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            PickUpMontage                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_BaseCharacter_C::GetCurrentPickUpAnim(class UAnimMontage** PickUpMontage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.GetCurrentPickUpAnim");

	UBPI_BaseCharacter_C_GetCurrentPickUpAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PickUpMontage != nullptr)
		*PickUpMontage = params.PickUpMontage;

}


// Function BPI_BaseCharacter.BPI_BaseCharacter_C.PlayerMoveForInteraction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 LookAtTarget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           RotateDuringMovement           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           UsePlayerLookAt                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           ResetLookAtPitch               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_BaseCharacter_C::PlayerMoveForInteraction(class AActor* Instigator, const struct FVector& Target, const struct FVector& LookAtTarget, bool RotateDuringMovement, bool UsePlayerLookAt, bool ResetLookAtPitch)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.PlayerMoveForInteraction");

	UBPI_BaseCharacter_C_PlayerMoveForInteraction_Params params;
	params.Instigator = Instigator;
	params.Target = Target;
	params.LookAtTarget = LookAtTarget;
	params.RotateDuringMovement = RotateDuringMovement;
	params.UsePlayerLookAt = UsePlayerLookAt;
	params.ResetLookAtPitch = ResetLookAtPitch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_BaseCharacter.BPI_BaseCharacter_C.PlayPickUpAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           PreferTwoHanded                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_BaseCharacter_C::PlayPickUpAnim(class UObject* Instigator, bool PreferTwoHanded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.PlayPickUpAnim");

	UBPI_BaseCharacter_C_PlayPickUpAnim_Params params;
	params.Instigator = Instigator;
	params.PreferTwoHanded = PreferTwoHanded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_BaseCharacter.BPI_BaseCharacter_C.OverrideCanPerfromHitAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CanPerfromHitAction            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_BaseCharacter_C::OverrideCanPerfromHitAction(bool CanPerfromHitAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.OverrideCanPerfromHitAction");

	UBPI_BaseCharacter_C_OverrideCanPerfromHitAction_Params params;
	params.CanPerfromHitAction = CanPerfromHitAction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_BaseCharacter.BPI_BaseCharacter_C.SetStrengthAlpha
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Alpha                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_BaseCharacter_C::SetStrengthAlpha(float Alpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.SetStrengthAlpha");

	UBPI_BaseCharacter_C_SetStrengthAlpha_Params params;
	params.Alpha = Alpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set Range Strength
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Strength                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_BaseCharacter_C::Set_Range_Strength(float Strength)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set Range Strength");

	UBPI_BaseCharacter_C_Set_Range_Strength_Params params;
	params.Strength = Strength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_BaseCharacter.BPI_BaseCharacter_C.HoldableHitAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_MontagesSettings    Action_Montage_Settings        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_BaseCharacter_C::HoldableHitAction(const struct FST_MontagesSettings& Action_Montage_Settings)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.HoldableHitAction");

	UBPI_BaseCharacter_C_HoldableHitAction_Params params;
	params.Action_Montage_Settings = Action_Montage_Settings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_BaseCharacter.BPI_BaseCharacter_C.OnEndStageInteraction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  InteractedActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*            MontageToPlay                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          PlayRate                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          StartingPosition               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   StartingSection                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_BaseCharacter_C::OnEndStageInteraction(class AActor* InteractedActor, class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, const struct FName& StartingSection)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.OnEndStageInteraction");

	UBPI_BaseCharacter_C_OnEndStageInteraction_Params params;
	params.InteractedActor = InteractedActor;
	params.MontageToPlay = MontageToPlay;
	params.PlayRate = PlayRate;
	params.StartingPosition = StartingPosition;
	params.StartingSection = StartingSection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_BaseCharacter.BPI_BaseCharacter_C.OnLoopStageInteraction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  InteractedActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*            MontageToPlay                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          PlayRate                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          StartingPosition               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   StartingSection                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_BaseCharacter_C::OnLoopStageInteraction(class AActor* InteractedActor, class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, const struct FName& StartingSection)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.OnLoopStageInteraction");

	UBPI_BaseCharacter_C_OnLoopStageInteraction_Params params;
	params.InteractedActor = InteractedActor;
	params.MontageToPlay = MontageToPlay;
	params.PlayRate = PlayRate;
	params.StartingPosition = StartingPosition;
	params.StartingSection = StartingSection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_BaseCharacter.BPI_BaseCharacter_C.OnStartStageInteraction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  InteractedActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*            MontageToPlay                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          PlayRate                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          StartingPosition               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   StartingSection                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_BaseCharacter_C::OnStartStageInteraction(class AActor* InteractedActor, class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, const struct FName& StartingSection)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.OnStartStageInteraction");

	UBPI_BaseCharacter_C_OnStartStageInteraction_Params params;
	params.InteractedActor = InteractedActor;
	params.MontageToPlay = MontageToPlay;
	params.PlayRate = PlayRate;
	params.StartingPosition = StartingPosition;
	params.StartingSection = StartingSection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_StopSnappingIK
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_BaseCharacter_C::AnimNotify_StopSnappingIK()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_StopSnappingIK");

	UBPI_BaseCharacter_C_AnimNotify_StopSnappingIK_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_StartSnappingIK
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_BaseCharacter_C::AnimNotify_StartSnappingIK()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_StartSnappingIK");

	UBPI_BaseCharacter_C_AnimNotify_StartSnappingIK_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_BaseCharacter.BPI_BaseCharacter_C.ChangeAnimLoopState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsLooping                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_BaseCharacter_C::ChangeAnimLoopState(bool IsLooping)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.ChangeAnimLoopState");

	UBPI_BaseCharacter_C_ChangeAnimLoopState_Params params;
	params.IsLooping = IsLooping;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_SnapPoint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*         SnapComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          TargetSnapAlpha                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ResetSnapAlpha                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Reset                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FName                   LeftHandSocketName             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   RightHandSocketName            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_BaseCharacter_C::AnimNotify_SnapPoint(class USceneComponent* SnapComponent, float TargetSnapAlpha, float ResetSnapAlpha, bool Reset, const struct FName& LeftHandSocketName, const struct FName& RightHandSocketName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_SnapPoint");

	UBPI_BaseCharacter_C_AnimNotify_SnapPoint_Params params;
	params.SnapComponent = SnapComponent;
	params.TargetSnapAlpha = TargetSnapAlpha;
	params.ResetSnapAlpha = ResetSnapAlpha;
	params.Reset = Reset;
	params.LeftHandSocketName = LeftHandSocketName;
	params.RightHandSocketName = RightHandSocketName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_BaseCharacter.BPI_BaseCharacter_C.isPlayer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Player                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class APC_Player_C*            PlayerController               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_BaseCharacter_C::isPlayer(bool* Player, class APC_Player_C** PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.isPlayer");

	UBPI_BaseCharacter_C_isPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Player != nullptr)
		*Player = params.Player;
	if (PlayerController != nullptr)
		*PlayerController = params.PlayerController;

}


// Function BPI_BaseCharacter.BPI_BaseCharacter_C.GetCameraViewDirection
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Forward                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_BaseCharacter_C::GetCameraViewDirection(struct FVector* Forward)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.GetCameraViewDirection");

	UBPI_BaseCharacter_C_GetCameraViewDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Forward != nullptr)
		*Forward = params.Forward;

}


// Function BPI_BaseCharacter.BPI_BaseCharacter_C.Get ALS_Stance BPI
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Stance_E_Stance> Stance                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_BaseCharacter_C::Get_ALS_Stance_BPI(TEnumAsByte<E_Stance_E_Stance>* Stance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.Get ALS_Stance BPI");

	UBPI_BaseCharacter_C_Get_ALS_Stance_BPI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Stance != nullptr)
		*Stance = params.Stance;

}


// Function BPI_BaseCharacter.BPI_BaseCharacter_C.SetToolType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Tools_E_Tools>   ToolType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_BaseCharacter_C::SetToolType(TEnumAsByte<E_Tools_E_Tools> ToolType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.SetToolType");

	UBPI_BaseCharacter_C_SetToolType_Params params;
	params.ToolType = ToolType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_BaseCharacter.BPI_BaseCharacter_C.CancelAnimationLoops
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_BaseCharacter_C::CancelAnimationLoops()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.CancelAnimationLoops");

	UBPI_BaseCharacter_C_CancelAnimationLoops_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_BaseCharacter.BPI_BaseCharacter_C.HoldableAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<TEnumAsByte<E_AnimInteractionTypes_E_AnimInteractionTypes>, struct FST_MontagesSettings> MontagesSettings               (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           UseLookingDown                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          LookingDownAngle               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Loop                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Attack                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           OverrideMontage                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           IgnorePlayingMontage           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_BaseCharacter_C::HoldableAction(TMap<TEnumAsByte<E_AnimInteractionTypes_E_AnimInteractionTypes>, struct FST_MontagesSettings> MontagesSettings, bool UseLookingDown, float LookingDownAngle, bool Loop, bool Attack, bool OverrideMontage, bool IgnorePlayingMontage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.HoldableAction");

	UBPI_BaseCharacter_C_HoldableAction_Params params;
	params.MontagesSettings = MontagesSettings;
	params.UseLookingDown = UseLookingDown;
	params.LookingDownAngle = LookingDownAngle;
	params.Loop = Loop;
	params.Attack = Attack;
	params.OverrideMontage = OverrideMontage;
	params.IgnorePlayingMontage = IgnorePlayingMontage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set RF_BPI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           RF                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_BaseCharacter_C::Set_RF_BPI(bool RF)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set RF_BPI");

	UBPI_BaseCharacter_C_Set_RF_BPI_Params params;
	params.RF = RF;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_BaseCharacter.BPI_BaseCharacter_C.CameraShake_BPI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  ShakeClass                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_BaseCharacter_C::CameraShake_BPI(class UClass* ShakeClass, float Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.CameraShake_BPI");

	UBPI_BaseCharacter_C_CameraShake_BPI_Params params;
	params.ShakeClass = ShakeClass;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set CrouchingSpeed BPI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CrouchingSpeed                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_BaseCharacter_C::Set_CrouchingSpeed_BPI(float CrouchingSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set CrouchingSpeed BPI");

	UBPI_BaseCharacter_C_Set_CrouchingSpeed_BPI_Params params;
	params.CrouchingSpeed = CrouchingSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set SprintingSpeed BPI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          SprintingSpeed                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_BaseCharacter_C::Set_SprintingSpeed_BPI(float SprintingSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set SprintingSpeed BPI");

	UBPI_BaseCharacter_C_Set_SprintingSpeed_BPI_Params params;
	params.SprintingSpeed = SprintingSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set RunningSpeed BPI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          RunningSpeed                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_BaseCharacter_C::Set_RunningSpeed_BPI(float RunningSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set RunningSpeed BPI");

	UBPI_BaseCharacter_C_Set_RunningSpeed_BPI_Params params;
	params.RunningSpeed = RunningSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set WalkingSpeed BPI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          WalkingSpeed                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_BaseCharacter_C::Set_WalkingSpeed_BPI(float WalkingSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set WalkingSpeed BPI");

	UBPI_BaseCharacter_C_Set_WalkingSpeed_BPI_Params params;
	params.WalkingSpeed = WalkingSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_BaseCharacter.BPI_BaseCharacter_C.ShowTraces_BPI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShowTraces                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_BaseCharacter_C::ShowTraces_BPI(bool ShowTraces)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.ShowTraces_BPI");

	UBPI_BaseCharacter_C_ShowTraces_BPI_Params params;
	params.ShowTraces = ShowTraces;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set ALS_ViewMode BPI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_ViewMode_E_ViewMode> ViewMode                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_BaseCharacter_C::Set_ALS_ViewMode_BPI(TEnumAsByte<E_ViewMode_E_ViewMode> ViewMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set ALS_ViewMode BPI");

	UBPI_BaseCharacter_C_Set_ALS_ViewMode_BPI_Params params;
	params.ViewMode = ViewMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_BaseCharacter.BPI_BaseCharacter_C.AddCharacterRotation_BPI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                AddAmount                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_BaseCharacter_C::AddCharacterRotation_BPI(const struct FRotator& AddAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.AddCharacterRotation_BPI");

	UBPI_BaseCharacter_C_AddCharacterRotation_BPI_Params params;
	params.AddAmount = AddAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_BaseCharacter.BPI_BaseCharacter_C.SavePoseSnapshot_BPI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   PoseName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_BaseCharacter_C::SavePoseSnapshot_BPI(const struct FName& PoseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.SavePoseSnapshot_BPI");

	UBPI_BaseCharacter_C_SavePoseSnapshot_BPI_Params params;
	params.PoseName = PoseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_BaseCharacter.BPI_BaseCharacter_C.Play_GetUp_Anim BPI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FaceDown                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_BaseCharacter_C::Play_GetUp_Anim_BPI(bool FaceDown)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.Play_GetUp_Anim BPI");

	UBPI_BaseCharacter_C_Play_GetUp_Anim_BPI_Params params;
	params.FaceDown = FaceDown;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set ALS_Aiming BPI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Aiming                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_BaseCharacter_C::Set_ALS_Aiming_BPI(bool Aiming)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set ALS_Aiming BPI");

	UBPI_BaseCharacter_C_Set_ALS_Aiming_BPI_Params params;
	params.Aiming = Aiming;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_IdleEntryState BPI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_IdleEntryState_E_IdleEntryState> IdleEntryState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_BaseCharacter_C::AnimNotify_IdleEntryState_BPI(TEnumAsByte<E_IdleEntryState_E_IdleEntryState> IdleEntryState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_IdleEntryState BPI");

	UBPI_BaseCharacter_C_AnimNotify_IdleEntryState_BPI_Params params;
	params.IdleEntryState = IdleEntryState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_TurningInPlace BPI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            TurnInPlaceMontage             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ShouldTurnInPlace              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           TurningInPlace                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           TurningRight                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_BaseCharacter_C::AnimNotify_TurningInPlace_BPI(class UAnimMontage* TurnInPlaceMontage, bool ShouldTurnInPlace, bool TurningInPlace, bool TurningRight)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_TurningInPlace BPI");

	UBPI_BaseCharacter_C_AnimNotify_TurningInPlace_BPI_Params params;
	params.TurnInPlaceMontage = TurnInPlaceMontage;
	params.ShouldTurnInPlace = ShouldTurnInPlace;
	params.TurningInPlace = TurningInPlace;
	params.TurningRight = TurningRight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_Pivot BPI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_PivotParams         PivotParams                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_BaseCharacter_C::AnimNotify_Pivot_BPI(const struct FST_PivotParams& PivotParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.AnimNotify_Pivot BPI");

	UBPI_BaseCharacter_C_AnimNotify_Pivot_BPI_Params params;
	params.PivotParams = PivotParams;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set ALS_MovementMode BPI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_MovementMode_E_MovementMode> ALS_MovementMode               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_BaseCharacter_C::Set_ALS_MovementMode_BPI(TEnumAsByte<E_MovementMode_E_MovementMode> ALS_MovementMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set ALS_MovementMode BPI");

	UBPI_BaseCharacter_C_Set_ALS_MovementMode_BPI_Params params;
	params.ALS_MovementMode = ALS_MovementMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set ALS_RotationMode BPI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_RotationMode_E_RotationMode> ALS_RotationMode_BPI           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_BaseCharacter_C::Set_ALS_RotationMode_BPI(TEnumAsByte<E_RotationMode_E_RotationMode> ALS_RotationMode_BPI)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set ALS_RotationMode BPI");

	UBPI_BaseCharacter_C_Set_ALS_RotationMode_BPI_Params params;
	params.ALS_RotationMode_BPI = ALS_RotationMode_BPI;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set ALS_Stance BPI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Stance_E_Stance> ALS_Stance                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_BaseCharacter_C::Set_ALS_Stance_BPI(TEnumAsByte<E_Stance_E_Stance> ALS_Stance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set ALS_Stance BPI");

	UBPI_BaseCharacter_C_Set_ALS_Stance_BPI_Params params;
	params.ALS_Stance = ALS_Stance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set ALS_Gait BPI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Gait_E_Gait>     ALS_Gait                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_BaseCharacter_C::Set_ALS_Gait_BPI(TEnumAsByte<E_Gait_E_Gait> ALS_Gait)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BaseCharacter.BPI_BaseCharacter_C.Set ALS_Gait BPI");

	UBPI_BaseCharacter_C_Set_ALS_Gait_BPI_Params params;
	params.ALS_Gait = ALS_Gait;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
