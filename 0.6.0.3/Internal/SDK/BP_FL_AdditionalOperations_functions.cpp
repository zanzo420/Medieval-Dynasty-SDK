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

// Function BP_FL_AdditionalOperations.BP_FL_AdditionalOperations_C.Cut Text Sex Specyfic
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   Male                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Female                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
// TEnumAsByte<E_Sex_E_Sex>       Sex                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   CutText                        (Parm, OutParm)
void UBP_FL_AdditionalOperations_C::STATIC_Cut_Text_Sex_Specyfic(const struct FText& Male, const struct FText& Female, TEnumAsByte<E_Sex_E_Sex> Sex, class UObject* __WorldContext, struct FText* CutText)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FL_AdditionalOperations.BP_FL_AdditionalOperations_C.Cut Text Sex Specyfic");

	UBP_FL_AdditionalOperations_C_Cut_Text_Sex_Specyfic_Params params;
	params.Male = Male;
	params.Female = Female;
	params.Sex = Sex;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CutText != nullptr)
		*CutText = params.CutText;

}


// Function BP_FL_AdditionalOperations.BP_FL_AdditionalOperations_C.GetSaveFiles
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FString>         Files                          (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UBP_FL_AdditionalOperations_C::STATIC_GetSaveFiles(class UObject* __WorldContext, TArray<struct FString>* Files)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FL_AdditionalOperations.BP_FL_AdditionalOperations_C.GetSaveFiles");

	UBP_FL_AdditionalOperations_C_GetSaveFiles_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Files != nullptr)
		*Files = params.Files;


	return params.ReturnValue;
}


// Function BP_FL_AdditionalOperations.BP_FL_AdditionalOperations_C.Fix Custom Old Save Files
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 SaveName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 SaveNameToCheck                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int                            UserIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_FL_AdditionalOperations_C::STATIC_Fix_Custom_Old_Save_Files(const struct FString& SaveName, const struct FString& SaveNameToCheck, int UserIndex, class UObject* __WorldContext, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FL_AdditionalOperations.BP_FL_AdditionalOperations_C.Fix Custom Old Save Files");

	UBP_FL_AdditionalOperations_C_Fix_Custom_Old_Save_Files_Params params;
	params.SaveName = SaveName;
	params.SaveNameToCheck = SaveNameToCheck;
	params.UserIndex = UserIndex;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;

}


// Function BP_FL_AdditionalOperations.BP_FL_AdditionalOperations_C.GetCustomSaveData
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 SaveName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 SaveNameToCheck                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int                            UserIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USAVE_Data_C*            SAVE_Data                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_FL_AdditionalOperations_C::STATIC_GetCustomSaveData(const struct FString& SaveName, const struct FString& SaveNameToCheck, int UserIndex, class UObject* __WorldContext, class USAVE_Data_C** SAVE_Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FL_AdditionalOperations.BP_FL_AdditionalOperations_C.GetCustomSaveData");

	UBP_FL_AdditionalOperations_C_GetCustomSaveData_Params params;
	params.SaveName = SaveName;
	params.SaveNameToCheck = SaveNameToCheck;
	params.UserIndex = UserIndex;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SAVE_Data != nullptr)
		*SAVE_Data = params.SAVE_Data;

}


// Function BP_FL_AdditionalOperations.BP_FL_AdditionalOperations_C.FixOldSaveFiles
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 SaveDataSlotName               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 SaveGameSlotName               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int                            SaveNameIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            UserIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 FileSaveName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_FL_AdditionalOperations_C::STATIC_FixOldSaveFiles(const struct FString& SaveDataSlotName, const struct FString& SaveGameSlotName, int SaveNameIndex, int UserIndex, const struct FString& FileSaveName, class UObject* __WorldContext, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FL_AdditionalOperations.BP_FL_AdditionalOperations_C.FixOldSaveFiles");

	UBP_FL_AdditionalOperations_C_FixOldSaveFiles_Params params;
	params.SaveDataSlotName = SaveDataSlotName;
	params.SaveGameSlotName = SaveGameSlotName;
	params.SaveNameIndex = SaveNameIndex;
	params.UserIndex = UserIndex;
	params.FileSaveName = FileSaveName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;

}


// Function BP_FL_AdditionalOperations.BP_FL_AdditionalOperations_C.GetSaveData
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 SaveDataSlotName               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 SaveGameSlotName               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int                            SaveNameIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            UserIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 FileSaveName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USAVE_Data_C*            SAVE_Data                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_FL_AdditionalOperations_C::STATIC_GetSaveData(const struct FString& SaveDataSlotName, const struct FString& SaveGameSlotName, int SaveNameIndex, int UserIndex, const struct FString& FileSaveName, class UObject* __WorldContext, class USAVE_Data_C** SAVE_Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FL_AdditionalOperations.BP_FL_AdditionalOperations_C.GetSaveData");

	UBP_FL_AdditionalOperations_C_GetSaveData_Params params;
	params.SaveDataSlotName = SaveDataSlotName;
	params.SaveGameSlotName = SaveGameSlotName;
	params.SaveNameIndex = SaveNameIndex;
	params.UserIndex = UserIndex;
	params.FileSaveName = FileSaveName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SAVE_Data != nullptr)
		*SAVE_Data = params.SAVE_Data;

}


// Function BP_FL_AdditionalOperations.BP_FL_AdditionalOperations_C.DisplayMountInformation
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Speed                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Velocity                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          AngleDotProduct                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_FL_AdditionalOperations_C::STATIC_DisplayMountInformation(float Speed, const struct FVector& Velocity, float AngleDotProduct, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FL_AdditionalOperations.BP_FL_AdditionalOperations_C.DisplayMountInformation");

	UBP_FL_AdditionalOperations_C_DisplayMountInformation_Params params;
	params.Speed = Speed;
	params.Velocity = Velocity;
	params.AngleDotProduct = AngleDotProduct;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FL_AdditionalOperations.BP_FL_AdditionalOperations_C.GetClosestActor
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>          Actors                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Found                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                  ClosestActor                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_FL_AdditionalOperations_C::STATIC_GetClosestActor(TArray<class AActor*>* Actors, class AActor* Actor, const struct FVector& Location, class UObject* __WorldContext, bool* Found, class AActor** ClosestActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FL_AdditionalOperations.BP_FL_AdditionalOperations_C.GetClosestActor");

	UBP_FL_AdditionalOperations_C_GetClosestActor_Params params;
	params.Actor = Actor;
	params.Location = Location;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Actors != nullptr)
		*Actors = params.Actors;
	if (Found != nullptr)
		*Found = params.Found;
	if (ClosestActor != nullptr)
		*ClosestActor = params.ClosestActor;

}


// Function BP_FL_AdditionalOperations.BP_FL_AdditionalOperations_C.GetClosestActor(Hit)
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FHitResult>      HitResults                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Found                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                  ClosestActor                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_FL_AdditionalOperations_C::STATIC_GetClosestActor_Hit_(TArray<struct FHitResult>* HitResults, class AActor* Actor, const struct FVector& Location, class UObject* __WorldContext, bool* Found, class AActor** ClosestActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FL_AdditionalOperations.BP_FL_AdditionalOperations_C.GetClosestActor(Hit)");

	UBP_FL_AdditionalOperations_C_GetClosestActor_Hit__Params params;
	params.Actor = Actor;
	params.Location = Location;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HitResults != nullptr)
		*HitResults = params.HitResults;
	if (Found != nullptr)
		*Found = params.Found;
	if (ClosestActor != nullptr)
		*ClosestActor = params.ClosestActor;

}


// Function BP_FL_AdditionalOperations.BP_FL_AdditionalOperations_C.GetIconLetterByKey
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FKey                    Key                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// bool                           Gamepad                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*              Icon                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   Letter                         (Parm, OutParm)
// bool                           Found                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_FL_AdditionalOperations_C::STATIC_GetIconLetterByKey(const struct FKey& Key, bool Gamepad, class UObject* __WorldContext, class UTexture2D** Icon, struct FText* Letter, bool* Found)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FL_AdditionalOperations.BP_FL_AdditionalOperations_C.GetIconLetterByKey");

	UBP_FL_AdditionalOperations_C_GetIconLetterByKey_Params params;
	params.Key = Key;
	params.Gamepad = Gamepad;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Icon != nullptr)
		*Icon = params.Icon;
	if (Letter != nullptr)
		*Letter = params.Letter;
	if (Found != nullptr)
		*Found = params.Found;

}


// Function BP_FL_AdditionalOperations.BP_FL_AdditionalOperations_C.SelectRandomIDFromPool(byte)
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<unsigned char>          IDs                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<float>                  ChanceToPlay                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<unsigned char>          IDsToExclude                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// unsigned char                  SelectedPoseID                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_FL_AdditionalOperations_C::STATIC_SelectRandomIDFromPool_byte_(TArray<unsigned char>* IDs, TArray<float>* ChanceToPlay, TArray<unsigned char>* IDsToExclude, class UObject* __WorldContext, unsigned char* SelectedPoseID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FL_AdditionalOperations.BP_FL_AdditionalOperations_C.SelectRandomIDFromPool(byte)");

	UBP_FL_AdditionalOperations_C_SelectRandomIDFromPool_byte__Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IDs != nullptr)
		*IDs = params.IDs;
	if (ChanceToPlay != nullptr)
		*ChanceToPlay = params.ChanceToPlay;
	if (IDsToExclude != nullptr)
		*IDsToExclude = params.IDsToExclude;
	if (SelectedPoseID != nullptr)
		*SelectedPoseID = params.SelectedPoseID;

}


// Function BP_FL_AdditionalOperations.BP_FL_AdditionalOperations_C.IsSpecifiedMontagePlaying
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UAnimInstance*           AnimInstance                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UBP_FL_AdditionalOperations_C::STATIC_IsSpecifiedMontagePlaying(class UAnimInstance* AnimInstance, class UAnimMontage* Montage, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FL_AdditionalOperations.BP_FL_AdditionalOperations_C.IsSpecifiedMontagePlaying");

	UBP_FL_AdditionalOperations_C_IsSpecifiedMontagePlaying_Params params;
	params.AnimInstance = AnimInstance;
	params.Montage = Montage;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_FL_AdditionalOperations.BP_FL_AdditionalOperations_C.GetMaterialWithSpecifiedWord
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMeshComponent*          Mesh                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 SearchString                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*      Material                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Success_                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_FL_AdditionalOperations_C::STATIC_GetMaterialWithSpecifiedWord(class UMeshComponent* Mesh, const struct FString& SearchString, class UObject* __WorldContext, class UMaterialInterface** Material, int* Index, bool* Success_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FL_AdditionalOperations.BP_FL_AdditionalOperations_C.GetMaterialWithSpecifiedWord");

	UBP_FL_AdditionalOperations_C_GetMaterialWithSpecifiedWord_Params params;
	params.Mesh = Mesh;
	params.SearchString = SearchString;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Material != nullptr)
		*Material = params.Material;
	if (Index != nullptr)
		*Index = params.Index;
	if (Success_ != nullptr)
		*Success_ = params.Success_;

}


// Function BP_FL_AdditionalOperations.BP_FL_AdditionalOperations_C.Ease(CustomCurve)
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Alpha                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          A                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          B                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*             Curve                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_FL_AdditionalOperations_C::STATIC_Ease_CustomCurve_(float Alpha, float A, float B, class UCurveFloat* Curve, class UObject* __WorldContext, float* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FL_AdditionalOperations.BP_FL_AdditionalOperations_C.Ease(CustomCurve)");

	UBP_FL_AdditionalOperations_C_Ease_CustomCurve__Params params;
	params.Alpha = Alpha;
	params.A = A;
	params.B = B;
	params.Curve = Curve;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function BP_FL_AdditionalOperations.BP_FL_AdditionalOperations_C.GetIconByActionMapping
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   MappingToFind                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Gamepad_                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*              Icon                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   Letter                         (Parm, OutParm)
void UBP_FL_AdditionalOperations_C::STATIC_GetIconByActionMapping(const struct FName& MappingToFind, bool Gamepad_, class UObject* __WorldContext, class UTexture2D** Icon, struct FText* Letter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FL_AdditionalOperations.BP_FL_AdditionalOperations_C.GetIconByActionMapping");

	UBP_FL_AdditionalOperations_C_GetIconByActionMapping_Params params;
	params.MappingToFind = MappingToFind;
	params.Gamepad_ = Gamepad_;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Icon != nullptr)
		*Icon = params.Icon;
	if (Letter != nullptr)
		*Letter = params.Letter;

}


// Function BP_FL_AdditionalOperations.BP_FL_AdditionalOperations_C.CompareHitActorsAndComponents
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FHitResult              A                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult              B                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           SameActor                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           SameComponent                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_FL_AdditionalOperations_C::STATIC_CompareHitActorsAndComponents(const struct FHitResult& A, const struct FHitResult& B, class UObject* __WorldContext, bool* SameActor, bool* SameComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FL_AdditionalOperations.BP_FL_AdditionalOperations_C.CompareHitActorsAndComponents");

	UBP_FL_AdditionalOperations_C_CompareHitActorsAndComponents_Params params;
	params.A = A;
	params.B = B;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SameActor != nullptr)
		*SameActor = params.SameActor;
	if (SameComponent != nullptr)
		*SameComponent = params.SameComponent;

}


// Function BP_FL_AdditionalOperations.BP_FL_AdditionalOperations_C.SelectRandomID(byte)
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// unsigned char                  CurrentPoseID                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// unsigned char                  MaxPoseID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ShuffleMode                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<float>                  ChanceToPlay                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<unsigned char>          IDsToExclude                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// unsigned char                  SelectedPoseID                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_FL_AdditionalOperations_C::STATIC_SelectRandomID_byte_(unsigned char CurrentPoseID, unsigned char MaxPoseID, bool ShuffleMode, TArray<float>* ChanceToPlay, TArray<unsigned char>* IDsToExclude, class UObject* __WorldContext, unsigned char* SelectedPoseID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FL_AdditionalOperations.BP_FL_AdditionalOperations_C.SelectRandomID(byte)");

	UBP_FL_AdditionalOperations_C_SelectRandomID_byte__Params params;
	params.CurrentPoseID = CurrentPoseID;
	params.MaxPoseID = MaxPoseID;
	params.ShuffleMode = ShuffleMode;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ChanceToPlay != nullptr)
		*ChanceToPlay = params.ChanceToPlay;
	if (IDsToExclude != nullptr)
		*IDsToExclude = params.IDsToExclude;
	if (SelectedPoseID != nullptr)
		*SelectedPoseID = params.SelectedPoseID;

}


// Function BP_FL_AdditionalOperations.BP_FL_AdditionalOperations_C.SelectRandomID(int)
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            CurrentPoseID                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            MaxPoseID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ShuffleMode                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<float>                  ChanceToPlay                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            SelectedPoseID                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_FL_AdditionalOperations_C::STATIC_SelectRandomID_int_(int CurrentPoseID, int MaxPoseID, bool ShuffleMode, TArray<float>* ChanceToPlay, class UObject* __WorldContext, int* SelectedPoseID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FL_AdditionalOperations.BP_FL_AdditionalOperations_C.SelectRandomID(int)");

	UBP_FL_AdditionalOperations_C_SelectRandomID_int__Params params;
	params.CurrentPoseID = CurrentPoseID;
	params.MaxPoseID = MaxPoseID;
	params.ShuffleMode = ShuffleMode;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ChanceToPlay != nullptr)
		*ChanceToPlay = params.ChanceToPlay;
	if (SelectedPoseID != nullptr)
		*SelectedPoseID = params.SelectedPoseID;

}


// Function BP_FL_AdditionalOperations.BP_FL_AdditionalOperations_C.CompareCameraRotationLimits
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FST_CameraRotationLimits Input_Struct_A                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_CameraRotationLimits Input_Struct_B                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UBP_FL_AdditionalOperations_C::STATIC_CompareCameraRotationLimits(const struct FST_CameraRotationLimits& Input_Struct_A, const struct FST_CameraRotationLimits& Input_Struct_B, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FL_AdditionalOperations.BP_FL_AdditionalOperations_C.CompareCameraRotationLimits");

	UBP_FL_AdditionalOperations_C_CompareCameraRotationLimits_Params params;
	params.Input_Struct_A = Input_Struct_A;
	params.Input_Struct_B = Input_Struct_B;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_FL_AdditionalOperations.BP_FL_AdditionalOperations_C.CompareMontageSettings
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FST_MontagesSettings    Input_Struct_A                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_MontagesSettings    Input_Struct_B                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UBP_FL_AdditionalOperations_C::STATIC_CompareMontageSettings(const struct FST_MontagesSettings& Input_Struct_A, const struct FST_MontagesSettings& Input_Struct_B, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FL_AdditionalOperations.BP_FL_AdditionalOperations_C.CompareMontageSettings");

	UBP_FL_AdditionalOperations_C_CompareMontageSettings_Params params;
	params.Input_Struct_A = Input_Struct_A;
	params.Input_Struct_B = Input_Struct_B;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_FL_AdditionalOperations.BP_FL_AdditionalOperations_C.CalculateTargetPosition
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ACharacter*              InteractingCharacter           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*              Animal                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Distance_Offset_Multiplier     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FVector UBP_FL_AdditionalOperations_C::STATIC_CalculateTargetPosition(class ACharacter* InteractingCharacter, class ACharacter* Animal, float Distance_Offset_Multiplier, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FL_AdditionalOperations.BP_FL_AdditionalOperations_C.CalculateTargetPosition");

	UBP_FL_AdditionalOperations_C_CalculateTargetPosition_Params params;
	params.InteractingCharacter = InteractingCharacter;
	params.Animal = Animal;
	params.Distance_Offset_Multiplier = Distance_Offset_Multiplier;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_FL_AdditionalOperations.BP_FL_AdditionalOperations_C.CalculateAngleBetweenDirectionVectors
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 DirectionVector                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 CharacterDirectionVector       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UBP_FL_AdditionalOperations_C::STATIC_CalculateAngleBetweenDirectionVectors(const struct FVector& DirectionVector, const struct FVector& CharacterDirectionVector, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FL_AdditionalOperations.BP_FL_AdditionalOperations_C.CalculateAngleBetweenDirectionVectors");

	UBP_FL_AdditionalOperations_C_CalculateAngleBetweenDirectionVectors_Params params;
	params.DirectionVector = DirectionVector;
	params.CharacterDirectionVector = CharacterDirectionVector;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
