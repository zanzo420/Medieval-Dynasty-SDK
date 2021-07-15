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

// Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.FindDuplicates_ResourceDeposit
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_LandscapeResourcesManager_C::FindDuplicates_ResourceDeposit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.FindDuplicates_ResourceDeposit");

	ABP_LandscapeResourcesManager_C_FindDuplicates_ResourceDeposit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.AddFoliageDepleted
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              Transform                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
// int                            NumberOfSeasonToReset          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_LandscapeResourcesManager_C::AddFoliageDepleted(const struct FTransform& Transform, int NumberOfSeasonToReset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.AddFoliageDepleted");

	ABP_LandscapeResourcesManager_C_AddFoliageDepleted_Params params;
	params.Transform = Transform;
	params.NumberOfSeasonToReset = NumberOfSeasonToReset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.FindFoliageDepleted
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              Transform                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_LandscapeResourcesManager_C::FindFoliageDepleted(const struct FTransform& Transform, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.FindFoliageDepleted");

	ABP_LandscapeResourcesManager_C_FindFoliageDepleted_Params params;
	params.Transform = Transform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;

}


// Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.FindFoliageCondition
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              InteractFoliageTransform       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Condition                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_LandscapeResourcesManager_C::FindFoliageCondition(const struct FTransform& InteractFoliageTransform, bool* Success, float* Condition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.FindFoliageCondition");

	ABP_LandscapeResourcesManager_C_FindFoliageCondition_Params params;
	params.InteractFoliageTransform = InteractFoliageTransform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (Condition != nullptr)
		*Condition = params.Condition;

}


// Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.RestoreResourceDeposit
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_LandscapeResourcesManager_C::RestoreResourceDeposit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.RestoreResourceDeposit");

	ABP_LandscapeResourcesManager_C_RestoreResourceDeposit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.SaveDataFromSystemToFile
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USAVE_Game_C*            SaveReference                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_LandscapeResourcesManager_C::SaveDataFromSystemToFile(class USAVE_Game_C* SaveReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.SaveDataFromSystemToFile");

	ABP_LandscapeResourcesManager_C_SaveDataFromSystemToFile_Params params;
	params.SaveReference = SaveReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.ClearFoliageQueue
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_LandscapeResourcesManager_C::ClearFoliageQueue()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.ClearFoliageQueue");

	ABP_LandscapeResourcesManager_C_ClearFoliageQueue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.CompareByLocationInteractiveFoliageInstance
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_FoliageTarget       FoliageTarget                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                           Correct                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_LandscapeResourcesManager_C::CompareByLocationInteractiveFoliageInstance(const struct FST_FoliageTarget& FoliageTarget, bool* Correct)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.CompareByLocationInteractiveFoliageInstance");

	ABP_LandscapeResourcesManager_C_CompareByLocationInteractiveFoliageInstance_Params params;
	params.FoliageTarget = FoliageTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Correct != nullptr)
		*Correct = params.Correct;

}


// Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.FindInteractiveFoliageInstances
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Radius                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<TEnumAsByte<E_Resources_E_Resources>> ResourceType                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FST_FoliageTargetsData> FoliageTargets                 (Parm, OutParm, ContainsInstancedReference)
void ABP_LandscapeResourcesManager_C::FindInteractiveFoliageInstances(const struct FVector& Location, float Radius, TArray<TEnumAsByte<E_Resources_E_Resources>>* ResourceType, TArray<struct FST_FoliageTargetsData>* FoliageTargets)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.FindInteractiveFoliageInstances");

	ABP_LandscapeResourcesManager_C_FindInteractiveFoliageInstances_Params params;
	params.Location = Location;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ResourceType != nullptr)
		*ResourceType = params.ResourceType;
	if (FoliageTargets != nullptr)
		*FoliageTargets = params.FoliageTargets;

}


// Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.MoveTreesInBox
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UpOrDown                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           RemoveForever                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           AtBeginning                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 Start                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 End                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 HalfSize                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                Orientation                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_LandscapeResourcesManager_C::MoveTreesInBox(bool UpOrDown, bool RemoveForever, bool AtBeginning, const struct FVector& Start, const struct FVector& End, const struct FVector& HalfSize, const struct FRotator& Orientation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.MoveTreesInBox");

	ABP_LandscapeResourcesManager_C_MoveTreesInBox_Params params;
	params.UpOrDown = UpOrDown;
	params.RemoveForever = RemoveForever;
	params.AtBeginning = AtBeginning;
	params.Start = Start;
	params.End = End;
	params.HalfSize = HalfSize;
	params.Orientation = Orientation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.MoveFoliagesInSphere
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UpOrDown                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 Center                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Radius                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           RemoveForever                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           AtBeginning                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_LandscapeResourcesManager_C::MoveFoliagesInSphere(bool UpOrDown, const struct FVector& Center, float Radius, bool RemoveForever, bool AtBeginning)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.MoveFoliagesInSphere");

	ABP_LandscapeResourcesManager_C_MoveFoliagesInSphere_Params params;
	params.UpOrDown = UpOrDown;
	params.Center = Center;
	params.Radius = Radius;
	params.RemoveForever = RemoveForever;
	params.AtBeginning = AtBeginning;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.MoveFoliageInstance
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFoliageType_InstancedStaticMesh* FoliageType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_MasterFoliage_C*     InstancedStaticMesh            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            InstanceIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           UpOrDown                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            NumberOfSeasonToReset          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           RemoveForever                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           AtBeginning                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_LandscapeResourcesManager_C::MoveFoliageInstance(class UFoliageType_InstancedStaticMesh* FoliageType, class UBP_MasterFoliage_C* InstancedStaticMesh, int InstanceIndex, bool UpOrDown, int NumberOfSeasonToReset, bool RemoveForever, bool AtBeginning)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.MoveFoliageInstance");

	ABP_LandscapeResourcesManager_C_MoveFoliageInstance_Params params;
	params.FoliageType = FoliageType;
	params.InstancedStaticMesh = InstancedStaticMesh;
	params.InstanceIndex = InstanceIndex;
	params.UpOrDown = UpOrDown;
	params.NumberOfSeasonToReset = NumberOfSeasonToReset;
	params.RemoveForever = RemoveForever;
	params.AtBeginning = AtBeginning;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.CreateAdditionalInstances
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_LandscapeResourcesManager_C::CreateAdditionalInstances()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.CreateAdditionalInstances");

	ABP_LandscapeResourcesManager_C_CreateAdditionalInstances_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.LoadSaveFileIntoSystem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USAVE_Game_C*            SaveReference                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_LandscapeResourcesManager_C::LoadSaveFileIntoSystem(class USAVE_Game_C* SaveReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.LoadSaveFileIntoSystem");

	ABP_LandscapeResourcesManager_C_LoadSaveFileIntoSystem_Params params;
	params.SaveReference = SaveReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.CheckForAvailableSpace
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Radius                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<Engine_ETraceTypeQuery> TraceChannel                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ObstacleDetected               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_LandscapeResourcesManager_C::CheckForAvailableSpace(const struct FVector& Location, float Radius, TEnumAsByte<Engine_ETraceTypeQuery> TraceChannel, bool* ObstacleDetected)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.CheckForAvailableSpace");

	ABP_LandscapeResourcesManager_C_CheckForAvailableSpace_Params params;
	params.Location = Location;
	params.Radius = Radius;
	params.TraceChannel = TraceChannel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ObstacleDetected != nullptr)
		*ObstacleDetected = params.ObstacleDetected;

}


// Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           MainMenu                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_LandscapeResourcesManager_C::Init(bool MainMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.Init");

	ABP_LandscapeResourcesManager_C_Init_Params params;
	params.MainMenu = MainMenu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.RestoreFoliageInstances
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_LandscapeResourcesManager_C::RestoreFoliageInstances()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.RestoreFoliageInstances");

	ABP_LandscapeResourcesManager_C_RestoreFoliageInstances_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.InteractFoliageInstanceDetection
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Radius                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_TimerResourceFoliage_C* HitComponent                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ID                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_LandscapeResourcesManager_C::InteractFoliageInstanceDetection(const struct FVector& Location, float Radius, class ABP_BaseCharacter_C* BaseCharacter, bool* Success, class UBP_TimerResourceFoliage_C** HitComponent, int* ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.InteractFoliageInstanceDetection");

	ABP_LandscapeResourcesManager_C_InteractFoliageInstanceDetection_Params params;
	params.Location = Location;
	params.Radius = Radius;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (HitComponent != nullptr)
		*HitComponent = params.HitComponent;
	if (ID != nullptr)
		*ID = params.ID;

}


// Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.DrawDotLandscapeRT
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 V                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Size                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_LandscapeResourcesManager_C::DrawDotLandscapeRT(const struct FVector& V, const struct FLinearColor& Color, float Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.DrawDotLandscapeRT");

	ABP_LandscapeResourcesManager_C_DrawDotLandscapeRT_Params params;
	params.V = V;
	params.Color = Color;
	params.Size = Size;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.UpdateFoliageQueue
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              InteractFoliageTransform       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          BaseCondition                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Extraction                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           DoImmediately                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           AddToFoliageDepleted           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            SeasonsToReset                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_LandscapeResourcesManager_C::UpdateFoliageQueue(const struct FTransform& InteractFoliageTransform, float BaseCondition, float Extraction, bool DoImmediately, bool AddToFoliageDepleted, int SeasonsToReset, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.UpdateFoliageQueue");

	ABP_LandscapeResourcesManager_C_UpdateFoliageQueue_Params params;
	params.InteractFoliageTransform = InteractFoliageTransform;
	params.BaseCondition = BaseCondition;
	params.Extraction = Extraction;
	params.DoImmediately = DoImmediately;
	params.AddToFoliageDepleted = AddToFoliageDepleted;
	params.SeasonsToReset = SeasonsToReset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;

}


// Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.DrawLineLandscapeRT
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 V0                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 v1                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Thickness                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_LandscapeResourcesManager_C::DrawLineLandscapeRT(const struct FVector& V0, const struct FVector& v1, const struct FLinearColor& Color, float Thickness)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.DrawLineLandscapeRT");

	ABP_LandscapeResourcesManager_C_DrawLineLandscapeRT_Params params;
	params.V0 = V0;
	params.v1 = v1;
	params.Color = Color;
	params.Thickness = Thickness;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.AddFoliageInstance
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFoliageType_InstancedStaticMesh* FoliageType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform              InstanceTransform              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
// int                            InstanceIndex                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFoliageInstancedStaticMeshComponent* InstanceComponent              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_LandscapeResourcesManager_C::AddFoliageInstance(class UFoliageType_InstancedStaticMesh* FoliageType, const struct FTransform& InstanceTransform, int* InstanceIndex, class UFoliageInstancedStaticMeshComponent** InstanceComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.AddFoliageInstance");

	ABP_LandscapeResourcesManager_C_AddFoliageInstance_Params params;
	params.FoliageType = FoliageType;
	params.InstanceTransform = InstanceTransform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InstanceIndex != nullptr)
		*InstanceIndex = params.InstanceIndex;
	if (InstanceComponent != nullptr)
		*InstanceComponent = params.InstanceComponent;

}


// Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.ClearLandscapeRT
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_LandscapeResourcesManager_C::ClearLandscapeRT()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.ClearLandscapeRT");

	ABP_LandscapeResourcesManager_C_ClearLandscapeRT_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.DrawQuadrangleLandscapeRT
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 V0                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 v1                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 v2                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 V3                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_LandscapeResourcesManager_C::DrawQuadrangleLandscapeRT(const struct FVector& V0, const struct FVector& v1, const struct FVector& v2, const struct FVector& V3, const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.DrawQuadrangleLandscapeRT");

	ABP_LandscapeResourcesManager_C_DrawQuadrangleLandscapeRT_Params params;
	params.V0 = V0;
	params.v1 = v1;
	params.v2 = v2;
	params.V3 = V3;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.RemoveFoliagesOccupied
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Destination                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_LandscapeResourcesManager_C::RemoveFoliagesOccupied(const struct FVector& Destination)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.RemoveFoliagesOccupied");

	ABP_LandscapeResourcesManager_C_RemoveFoliagesOccupied_Params params;
	params.Destination = Destination;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.AddFoliagesOccupied
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Destination                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_LandscapeResourcesManager_C::AddFoliagesOccupied(const struct FVector& Destination)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.AddFoliagesOccupied");

	ABP_LandscapeResourcesManager_C_AddFoliagesOccupied_Params params;
	params.Destination = Destination;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.CheckFoliagesOccupied
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Destination                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsFree                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_LandscapeResourcesManager_C::CheckFoliagesOccupied(const struct FVector& Destination, bool* IsFree)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.CheckFoliagesOccupied");

	ABP_LandscapeResourcesManager_C_CheckFoliagesOccupied_Params params;
	params.Destination = Destination;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsFree != nullptr)
		*IsFree = params.IsFree;

}


// Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.ReplaceFoliageInstanceToEmptyInstance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFoliageType_InstancedStaticMesh* FoliageType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFoliageType_InstancedStaticMesh* TargetFoliageType              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_MasterFoliage_C*     InstancedStaticMesh            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            InstanceIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            NumberOfSeasonToReset          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_LandscapeResourcesManager_C::ReplaceFoliageInstanceToEmptyInstance(class UFoliageType_InstancedStaticMesh* FoliageType, class UFoliageType_InstancedStaticMesh* TargetFoliageType, class UBP_MasterFoliage_C* InstancedStaticMesh, int InstanceIndex, int NumberOfSeasonToReset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.ReplaceFoliageInstanceToEmptyInstance");

	ABP_LandscapeResourcesManager_C_ReplaceFoliageInstanceToEmptyInstance_Params params;
	params.FoliageType = FoliageType;
	params.TargetFoliageType = TargetFoliageType;
	params.InstancedStaticMesh = InstancedStaticMesh;
	params.InstanceIndex = InstanceIndex;
	params.NumberOfSeasonToReset = NumberOfSeasonToReset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.ReplaceFoliageInstanceToAdditionalStage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_MasterFoliage_C*     InstancedStaticMesh            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            InstanceIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFoliageType_InstancedStaticMesh* FoliageType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFoliageType_InstancedStaticMesh* TargetFoliageType              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  StageClass                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            NumberOfSeasonToReset          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_LandscapeResourcesManager_C::ReplaceFoliageInstanceToAdditionalStage(class UBP_MasterFoliage_C* InstancedStaticMesh, int InstanceIndex, class UFoliageType_InstancedStaticMesh* FoliageType, class UFoliageType_InstancedStaticMesh* TargetFoliageType, class UClass* StageClass, class ABP_BaseCharacter_C* BaseCharacter, int NumberOfSeasonToReset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.ReplaceFoliageInstanceToAdditionalStage");

	ABP_LandscapeResourcesManager_C_ReplaceFoliageInstanceToAdditionalStage_Params params;
	params.InstancedStaticMesh = InstancedStaticMesh;
	params.InstanceIndex = InstanceIndex;
	params.FoliageType = FoliageType;
	params.TargetFoliageType = TargetFoliageType;
	params.StageClass = StageClass;
	params.BaseCharacter = BaseCharacter;
	params.NumberOfSeasonToReset = NumberOfSeasonToReset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.ReplaceFoliageInstanceToEmptyInstanceWithDropItem
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInstancedStaticMeshComponent* InstancedStaticMesh            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            InstaceIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFoliageType*            FoliageType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FST_ItemResource> Items                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_LandscapeResourcesManager_C::ReplaceFoliageInstanceToEmptyInstanceWithDropItem(class UInstancedStaticMeshComponent* InstancedStaticMesh, int InstaceIndex, class UFoliageType* FoliageType, TArray<struct FST_ItemResource>* Items, class ABP_BaseCharacter_C* BaseCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.ReplaceFoliageInstanceToEmptyInstanceWithDropItem");

	ABP_LandscapeResourcesManager_C_ReplaceFoliageInstanceToEmptyInstanceWithDropItem_Params params;
	params.InstancedStaticMesh = InstancedStaticMesh;
	params.InstaceIndex = InstaceIndex;
	params.FoliageType = FoliageType;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Items != nullptr)
		*Items = params.Items;

}


// Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.CheckFoliageActors
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  FoliageActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_LandscapeResourcesManager_C::CheckFoliageActors(class AActor* FoliageActor, bool* Return)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.CheckFoliageActors");

	ABP_LandscapeResourcesManager_C_CheckFoliageActors_Params params;
	params.FoliageActor = FoliageActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_LandscapeResourcesManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.UserConstructionScript");

	ABP_LandscapeResourcesManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_LandscapeResourcesManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.ReceiveBeginPlay");

	ABP_LandscapeResourcesManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_LandscapeResourcesManager_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.ReceiveTick");

	ABP_LandscapeResourcesManager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.InitFoliage
// (BlueprintCallable, BlueprintEvent)
void ABP_LandscapeResourcesManager_C::InitFoliage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.InitFoliage");

	ABP_LandscapeResourcesManager_C_InitFoliage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.ExecuteUbergraph_BP_LandscapeResourcesManager
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_LandscapeResourcesManager_C::ExecuteUbergraph_BP_LandscapeResourcesManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C.ExecuteUbergraph_BP_LandscapeResourcesManager");

	ABP_LandscapeResourcesManager_C_ExecuteUbergraph_BP_LandscapeResourcesManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_LandscapeResourcesManager_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(DefaultSceneRoot, USceneComponent);
	READ_PTR_FULL(SystemsManagerReference, ABP_SystemsManager_C);
	READ_PTR_FULL(FoliageActor, AActor);
	READ_PTR_FULL(RT_Landscape, UTextureRenderTarget2D);
	READ_PTR_FULL(LandscapeReference, ALandscape);
	READ_PTR_FULL(RT_SplatMapQuadrangle, UMaterialInstanceDynamic);
	READ_PTR_FULL(RT_SplatMapLine, UMaterialInstanceDynamic);
	READ_PTR_FULL(RT_SplatMapDot, UMaterialInstanceDynamic);
	READ_PTR_FULL(RT_SplatMapCustom, UMaterialInstanceDynamic);
}

void ABP_LandscapeResourcesManager_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(DefaultSceneRoot);
	DELE_PTR_FULL(SystemsManagerReference);
	DELE_PTR_FULL(FoliageActor);
	DELE_PTR_FULL(RT_Landscape);
	DELE_PTR_FULL(LandscapeReference);
	DELE_PTR_FULL(RT_SplatMapQuadrangle);
	DELE_PTR_FULL(RT_SplatMapLine);
	DELE_PTR_FULL(RT_SplatMapDot);
	DELE_PTR_FULL(RT_SplatMapCustom);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
