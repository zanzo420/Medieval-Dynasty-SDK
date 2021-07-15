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

// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_VelocityToMh
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 Velocity                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UTD_Blueprint_Library::STATIC_TDBPL_VelocityToMh(const struct FVector& Velocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_VelocityToMh");

	UTD_Blueprint_Library_TDBPL_VelocityToMh_Params params;
	params.Velocity = Velocity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_VelocityToKmh
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 Velocity                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UTD_Blueprint_Library::STATIC_TDBPL_VelocityToKmh(const struct FVector& Velocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_VelocityToKmh");

	UTD_Blueprint_Library_TDBPL_VelocityToKmh_Params params;
	params.Velocity = Velocity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_VectorToGrid
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 Vector                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            GridSize                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           SnapX                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           SnapY                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           SnapZ                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UTD_Blueprint_Library::STATIC_TDBPL_VectorToGrid(const struct FVector& Vector, int GridSize, bool SnapX, bool SnapY, bool SnapZ)
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_VectorToGrid");

	UTD_Blueprint_Library_TDBPL_VectorToGrid_Params params;
	params.Vector = Vector;
	params.GridSize = GridSize;
	params.SnapX = SnapX;
	params.SnapY = SnapY;
	params.SnapZ = SnapZ;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_TargetVectorToGrid
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            GridSize                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           SnapX                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           SnapY                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           SnapZ                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UTD_Blueprint_Library::STATIC_TDBPL_TargetVectorToGrid(class AActor* Actor, int GridSize, bool SnapX, bool SnapY, bool SnapZ)
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_TargetVectorToGrid");

	UTD_Blueprint_Library_TDBPL_TargetVectorToGrid_Params params;
	params.Actor = Actor;
	params.GridSize = GridSize;
	params.SnapX = SnapX;
	params.SnapY = SnapY;
	params.SnapZ = SnapZ;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_StartEnd
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Start                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 End                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Horizontal                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Vertical                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Distance                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USceneComponent*         Scene                          (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bDrawDebugCone                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTD_Blueprint_Library::STATIC_TDBPL_StartEnd(class UObject* WorldContextObject, struct FVector* Start, struct FVector* End, float Horizontal, float Vertical, float Distance, class USceneComponent* Scene, bool bDrawDebugCone)
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_StartEnd");

	UTD_Blueprint_Library_TDBPL_StartEnd_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Horizontal = Horizontal;
	params.Vertical = Vertical;
	params.Distance = Distance;
	params.Scene = Scene;
	params.bDrawDebugCone = bDrawDebugCone;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Start != nullptr)
		*Start = params.Start;
	if (End != nullptr)
		*End = params.End;

}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_SpreadControlSimple
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// float                          RefMoving                      (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          RefShooting                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          OutSpread                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          IncreaseDecreaseRatio          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Min                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Max                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           IsMoving                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           IsShooting                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTD_Blueprint_Library::STATIC_TDBPL_SpreadControlSimple(float* RefMoving, float* RefShooting, float* OutSpread, float IncreaseDecreaseRatio, float Min, float Max, bool IsMoving, bool IsShooting)
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_SpreadControlSimple");

	UTD_Blueprint_Library_TDBPL_SpreadControlSimple_Params params;
	params.IncreaseDecreaseRatio = IncreaseDecreaseRatio;
	params.Min = Min;
	params.Max = Max;
	params.IsMoving = IsMoving;
	params.IsShooting = IsShooting;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RefMoving != nullptr)
		*RefMoving = params.RefMoving;
	if (RefShooting != nullptr)
		*RefShooting = params.RefShooting;
	if (OutSpread != nullptr)
		*OutSpread = params.OutSpread;

}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_SpreadControlShooting
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// float                          Ref                            (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          OutHorizontal                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          OutVertical                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          IncreaseRatio                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          DecreaseRatio                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          HorizontalMin                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          HorizontalMax                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          VerticalMin                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          VerticalMax                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           IsShooting                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTD_Blueprint_Library::STATIC_TDBPL_SpreadControlShooting(float* Ref, float* OutHorizontal, float* OutVertical, float IncreaseRatio, float DecreaseRatio, float HorizontalMin, float HorizontalMax, float VerticalMin, float VerticalMax, bool IsShooting)
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_SpreadControlShooting");

	UTD_Blueprint_Library_TDBPL_SpreadControlShooting_Params params;
	params.IncreaseRatio = IncreaseRatio;
	params.DecreaseRatio = DecreaseRatio;
	params.HorizontalMin = HorizontalMin;
	params.HorizontalMax = HorizontalMax;
	params.VerticalMin = VerticalMin;
	params.VerticalMax = VerticalMax;
	params.IsShooting = IsShooting;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Ref != nullptr)
		*Ref = params.Ref;
	if (OutHorizontal != nullptr)
		*OutHorizontal = params.OutHorizontal;
	if (OutVertical != nullptr)
		*OutVertical = params.OutVertical;

}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_SpreadControlMoving
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// float                          Ref                            (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          OutHorizontal                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          OutVertical                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          IncreaseRatio                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          DecreaseRatio                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          HorizontalMin                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          HorizontalMax                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          VerticalMin                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          VerticalMax                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           IsMoving                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTD_Blueprint_Library::STATIC_TDBPL_SpreadControlMoving(float* Ref, float* OutHorizontal, float* OutVertical, float IncreaseRatio, float DecreaseRatio, float HorizontalMin, float HorizontalMax, float VerticalMin, float VerticalMax, bool IsMoving)
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_SpreadControlMoving");

	UTD_Blueprint_Library_TDBPL_SpreadControlMoving_Params params;
	params.IncreaseRatio = IncreaseRatio;
	params.DecreaseRatio = DecreaseRatio;
	params.HorizontalMin = HorizontalMin;
	params.HorizontalMax = HorizontalMax;
	params.VerticalMin = VerticalMin;
	params.VerticalMax = VerticalMax;
	params.IsMoving = IsMoving;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Ref != nullptr)
		*Ref = params.Ref;
	if (OutHorizontal != nullptr)
		*OutHorizontal = params.OutHorizontal;
	if (OutVertical != nullptr)
		*OutVertical = params.OutVertical;

}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_SnapToGridActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            GridSize                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           SnapX                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           SnapY                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           SnapZ                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UTD_Blueprint_Library::STATIC_TDBPL_SnapToGridActor(class AActor* Actor, int GridSize, bool SnapX, bool SnapY, bool SnapZ)
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_SnapToGridActor");

	UTD_Blueprint_Library_TDBPL_SnapToGridActor_Params params;
	params.Actor = Actor;
	params.GridSize = GridSize;
	params.SnapX = SnapX;
	params.SnapY = SnapY;
	params.SnapZ = SnapZ;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_SingleShotTraceSingleByChannel
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult              OutHit                         (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// class USceneComponent*         Scene                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Distance                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Spread                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<Engine_ETraceTypeQuery> TraceChannel                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           TraceComplex                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>          ActorsToIgnore                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TD_Blueprint_Library_EDebugTrace DrawDebugType                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           IgnoreSelf                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            TraceColor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            TraceHitColor                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          DrawTime                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTD_Blueprint_Library::STATIC_TDBPL_SingleShotTraceSingleByChannel(class UObject* WorldContextObject, struct FHitResult* OutHit, class USceneComponent* Scene, float Distance, float Spread, TEnumAsByte<Engine_ETraceTypeQuery> TraceChannel, bool TraceComplex, TArray<class AActor*> ActorsToIgnore, TD_Blueprint_Library_EDebugTrace DrawDebugType, bool IgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_SingleShotTraceSingleByChannel");

	UTD_Blueprint_Library_TDBPL_SingleShotTraceSingleByChannel_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Scene = Scene;
	params.Distance = Distance;
	params.Spread = Spread;
	params.TraceChannel = TraceChannel;
	params.TraceComplex = TraceComplex;
	params.ActorsToIgnore = ActorsToIgnore;
	params.DrawDebugType = DrawDebugType;
	params.IgnoreSelf = IgnoreSelf;
	params.TraceColor = TraceColor;
	params.TraceHitColor = TraceHitColor;
	params.DrawTime = DrawTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutHit != nullptr)
		*OutHit = params.OutHit;

}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_ShotgunTraceSingleByChannel
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FHitResult>      OutHits                        (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// class USceneComponent*         Scene                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            NumberOfTraces                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Distance                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Spread                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<Engine_ETraceTypeQuery> TraceChannel                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           TraceComplex                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>          ActorsToIgnore                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TD_Blueprint_Library_EDebugTrace DrawDebugType                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           IgnoreSelf                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            TraceColor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            TraceHitColor                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          DrawTime                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTD_Blueprint_Library::STATIC_TDBPL_ShotgunTraceSingleByChannel(class UObject* WorldContextObject, TArray<struct FHitResult>* OutHits, class USceneComponent* Scene, int NumberOfTraces, float Distance, float Spread, TEnumAsByte<Engine_ETraceTypeQuery> TraceChannel, bool TraceComplex, TArray<class AActor*> ActorsToIgnore, TD_Blueprint_Library_EDebugTrace DrawDebugType, bool IgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_ShotgunTraceSingleByChannel");

	UTD_Blueprint_Library_TDBPL_ShotgunTraceSingleByChannel_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Scene = Scene;
	params.NumberOfTraces = NumberOfTraces;
	params.Distance = Distance;
	params.Spread = Spread;
	params.TraceChannel = TraceChannel;
	params.TraceComplex = TraceComplex;
	params.ActorsToIgnore = ActorsToIgnore;
	params.DrawDebugType = DrawDebugType;
	params.IgnoreSelf = IgnoreSelf;
	params.TraceColor = TraceColor;
	params.TraceHitColor = TraceHitColor;
	params.DrawTime = DrawTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutHits != nullptr)
		*OutHits = params.OutHits;

}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_SetMaxFPS
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            FPS                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTD_Blueprint_Library::STATIC_TDBPL_SetMaxFPS(int FPS)
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_SetMaxFPS");

	UTD_Blueprint_Library_TDBPL_SetMaxFPS_Params params;
	params.FPS = FPS;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_SetActorRotationSmoothConstant
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                Rotation                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// float                          Speed                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Teleport                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UTD_Blueprint_Library::STATIC_TDBPL_SetActorRotationSmoothConstant(class AActor* Actor, const struct FRotator& Rotation, float Speed, bool Teleport)
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_SetActorRotationSmoothConstant");

	UTD_Blueprint_Library_TDBPL_SetActorRotationSmoothConstant_Params params;
	params.Actor = Actor;
	params.Rotation = Rotation;
	params.Speed = Speed;
	params.Teleport = Teleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_SetActorRotationSmooth
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                Rotation                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// float                          Speed                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Teleport                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UTD_Blueprint_Library::STATIC_TDBPL_SetActorRotationSmooth(class AActor* Actor, const struct FRotator& Rotation, float Speed, bool Teleport)
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_SetActorRotationSmooth");

	UTD_Blueprint_Library_TDBPL_SetActorRotationSmooth_Params params;
	params.Actor = Actor;
	params.Rotation = Rotation;
	params.Speed = Speed;
	params.Teleport = Teleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_SetActorLocationSmoothConstant
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Speed                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Sweep                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Teleport                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UTD_Blueprint_Library::STATIC_TDBPL_SetActorLocationSmoothConstant(class AActor* Actor, const struct FVector& Location, float Speed, bool Sweep, bool Teleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_SetActorLocationSmoothConstant");

	UTD_Blueprint_Library_TDBPL_SetActorLocationSmoothConstant_Params params;
	params.Actor = Actor;
	params.Location = Location;
	params.Speed = Speed;
	params.Sweep = Sweep;
	params.Teleport = Teleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;


	return params.ReturnValue;
}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_SetActorLocationSmooth
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Speed                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Sweep                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Teleport                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UTD_Blueprint_Library::STATIC_TDBPL_SetActorLocationSmooth(class AActor* Actor, const struct FVector& Location, float Speed, bool Sweep, bool Teleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_SetActorLocationSmooth");

	UTD_Blueprint_Library_TDBPL_SetActorLocationSmooth_Params params;
	params.Actor = Actor;
	params.Location = Location;
	params.Speed = Speed;
	params.Sweep = Sweep;
	params.Teleport = Teleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;


	return params.ReturnValue;
}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_SetActorLocationAndRotationSmoothConstant
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                Rotation                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// float                          Speed                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Sweep                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Teleport                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UTD_Blueprint_Library::STATIC_TDBPL_SetActorLocationAndRotationSmoothConstant(class AActor* Actor, const struct FVector& Location, const struct FRotator& Rotation, float Speed, bool Sweep, bool Teleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_SetActorLocationAndRotationSmoothConstant");

	UTD_Blueprint_Library_TDBPL_SetActorLocationAndRotationSmoothConstant_Params params;
	params.Actor = Actor;
	params.Location = Location;
	params.Rotation = Rotation;
	params.Speed = Speed;
	params.Sweep = Sweep;
	params.Teleport = Teleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;


	return params.ReturnValue;
}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_SetActorLocationAndRotationSmooth
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                Rotation                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// float                          Speed                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Sweep                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Teleport                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UTD_Blueprint_Library::STATIC_TDBPL_SetActorLocationAndRotationSmooth(class AActor* Actor, const struct FVector& Location, const struct FRotator& Rotation, float Speed, bool Sweep, bool Teleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_SetActorLocationAndRotationSmooth");

	UTD_Blueprint_Library_TDBPL_SetActorLocationAndRotationSmooth_Params params;
	params.Actor = Actor;
	params.Location = Location;
	params.Rotation = Rotation;
	params.Speed = Speed;
	params.Sweep = Sweep;
	params.Teleport = Teleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;


	return params.ReturnValue;
}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_RicochetSphereTrace
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FHitResult>      OutHits                        (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FVector                 Start                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 End                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            NumberOfTraces                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TD_Blueprint_Library_EDebugTrace DrawDebugType                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<Engine_ETraceTypeQuery> TraceChannel                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           TraceComplex                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>          ActorsToIgnore                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
// bool                           IgnoreSelf                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            TraceColor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          DrawTime                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTD_Blueprint_Library::STATIC_TDBPL_RicochetSphereTrace(class UObject* WorldContextObject, TArray<struct FHitResult>* OutHits, const struct FVector& Start, const struct FVector& End, int NumberOfTraces, float Radius, TD_Blueprint_Library_EDebugTrace DrawDebugType, TEnumAsByte<Engine_ETraceTypeQuery> TraceChannel, bool TraceComplex, TArray<class AActor*> ActorsToIgnore, bool IgnoreSelf, const struct FLinearColor& TraceColor, float DrawTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_RicochetSphereTrace");

	UTD_Blueprint_Library_TDBPL_RicochetSphereTrace_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Start = Start;
	params.End = End;
	params.NumberOfTraces = NumberOfTraces;
	params.Radius = Radius;
	params.DrawDebugType = DrawDebugType;
	params.TraceChannel = TraceChannel;
	params.TraceComplex = TraceComplex;
	params.ActorsToIgnore = ActorsToIgnore;
	params.IgnoreSelf = IgnoreSelf;
	params.TraceColor = TraceColor;
	params.DrawTime = DrawTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutHits != nullptr)
		*OutHits = params.OutHits;

}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_RicochetLineTrace
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FHitResult>      OutHits                        (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FVector                 Start                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 End                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            NumberOfTraces                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TD_Blueprint_Library_EDebugTrace DrawDebugType                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<Engine_ETraceTypeQuery> TraceChannel                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           TraceComplex                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>          ActorsToIgnore                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
// bool                           IgnoreSelf                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            TraceColor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          DrawTime                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTD_Blueprint_Library::STATIC_TDBPL_RicochetLineTrace(class UObject* WorldContextObject, TArray<struct FHitResult>* OutHits, const struct FVector& Start, const struct FVector& End, int NumberOfTraces, TD_Blueprint_Library_EDebugTrace DrawDebugType, TEnumAsByte<Engine_ETraceTypeQuery> TraceChannel, bool TraceComplex, TArray<class AActor*> ActorsToIgnore, bool IgnoreSelf, const struct FLinearColor& TraceColor, float DrawTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_RicochetLineTrace");

	UTD_Blueprint_Library_TDBPL_RicochetLineTrace_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Start = Start;
	params.End = End;
	params.NumberOfTraces = NumberOfTraces;
	params.DrawDebugType = DrawDebugType;
	params.TraceChannel = TraceChannel;
	params.TraceComplex = TraceComplex;
	params.ActorsToIgnore = ActorsToIgnore;
	params.IgnoreSelf = IgnoreSelf;
	params.TraceColor = TraceColor;
	params.DrawTime = DrawTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutHits != nullptr)
		*OutHits = params.OutHits;

}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_MultiBranch
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// bool                           A                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           B                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           C                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TD_Blueprint_Library_EeMultiBranch Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTD_Blueprint_Library::STATIC_TDBPL_MultiBranch(bool A, bool B, bool C, TD_Blueprint_Library_EeMultiBranch* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_MultiBranch");

	UTD_Blueprint_Library_TDBPL_MultiBranch_Params params;
	params.A = A;
	params.B = B;
	params.C = C;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_MouseLineTracePure
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult              OutHit                         (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Distance                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TD_Blueprint_Library_EDebugTrace DrawDebugType                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<Engine_ETraceTypeQuery> TraceChannel                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           TraceComplex                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>          ActorsToIgnore                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
// bool                           IgnoreSelf                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            TraceColor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          DrawTime                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UTD_Blueprint_Library::STATIC_TDBPL_MouseLineTracePure(class UObject* WorldContextObject, struct FHitResult* OutHit, class APlayerController* PlayerController, float Distance, TD_Blueprint_Library_EDebugTrace DrawDebugType, TEnumAsByte<Engine_ETraceTypeQuery> TraceChannel, bool TraceComplex, TArray<class AActor*> ActorsToIgnore, bool IgnoreSelf, const struct FLinearColor& TraceColor, float DrawTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_MouseLineTracePure");

	UTD_Blueprint_Library_TDBPL_MouseLineTracePure_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.Distance = Distance;
	params.DrawDebugType = DrawDebugType;
	params.TraceChannel = TraceChannel;
	params.TraceComplex = TraceComplex;
	params.ActorsToIgnore = ActorsToIgnore;
	params.IgnoreSelf = IgnoreSelf;
	params.TraceColor = TraceColor;
	params.DrawTime = DrawTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutHit != nullptr)
		*OutHit = params.OutHit;


	return params.ReturnValue;
}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_MouseLineTrace
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult              OutHit                         (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Distance                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TD_Blueprint_Library_EDebugTrace DrawDebugType                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<Engine_ETraceTypeQuery> TraceChannel                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           TraceComplex                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>          ActorsToIgnore                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
// bool                           IgnoreSelf                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            TraceColor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          DrawTime                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UTD_Blueprint_Library::STATIC_TDBPL_MouseLineTrace(class UObject* WorldContextObject, struct FHitResult* OutHit, class APlayerController* PlayerController, float Distance, TD_Blueprint_Library_EDebugTrace DrawDebugType, TEnumAsByte<Engine_ETraceTypeQuery> TraceChannel, bool TraceComplex, TArray<class AActor*> ActorsToIgnore, bool IgnoreSelf, const struct FLinearColor& TraceColor, float DrawTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_MouseLineTrace");

	UTD_Blueprint_Library_TDBPL_MouseLineTrace_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.Distance = Distance;
	params.DrawDebugType = DrawDebugType;
	params.TraceChannel = TraceChannel;
	params.TraceComplex = TraceComplex;
	params.ActorsToIgnore = ActorsToIgnore;
	params.IgnoreSelf = IgnoreSelf;
	params.TraceColor = TraceColor;
	params.DrawTime = DrawTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutHit != nullptr)
		*OutHit = params.OutHit;


	return params.ReturnValue;
}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_IsXboxOne
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UTD_Blueprint_Library::STATIC_TDBPL_IsXboxOne()
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_IsXboxOne");

	UTD_Blueprint_Library_TDBPL_IsXboxOne_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_IsWindows64
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UTD_Blueprint_Library::STATIC_TDBPL_IsWindows64()
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_IsWindows64");

	UTD_Blueprint_Library_TDBPL_IsWindows64_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_IsWindows32
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UTD_Blueprint_Library::STATIC_TDBPL_IsWindows32()
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_IsWindows32");

	UTD_Blueprint_Library_TDBPL_IsWindows32_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_IsWindows
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UTD_Blueprint_Library::STATIC_TDBPL_IsWindows()
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_IsWindows");

	UTD_Blueprint_Library_TDBPL_IsWindows_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_IsTVOS
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UTD_Blueprint_Library::STATIC_TDBPL_IsTVOS()
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_IsTVOS");

	UTD_Blueprint_Library_TDBPL_IsTVOS_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_IsTestBuild
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UTD_Blueprint_Library::STATIC_TDBPL_IsTestBuild()
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_IsTestBuild");

	UTD_Blueprint_Library_TDBPL_IsTestBuild_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_IsSwitch
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UTD_Blueprint_Library::STATIC_TDBPL_IsSwitch()
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_IsSwitch");

	UTD_Blueprint_Library_TDBPL_IsSwitch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_IsShippingBuild
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UTD_Blueprint_Library::STATIC_TDBPL_IsShippingBuild()
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_IsShippingBuild");

	UTD_Blueprint_Library_TDBPL_IsShippingBuild_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_IsRunningOnBattery
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UTD_Blueprint_Library::STATIC_TDBPL_IsRunningOnBattery()
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_IsRunningOnBattery");

	UTD_Blueprint_Library_TDBPL_IsRunningOnBattery_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_IsPS4
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UTD_Blueprint_Library::STATIC_TDBPL_IsPS4()
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_IsPS4");

	UTD_Blueprint_Library_TDBPL_IsPS4_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_IsPlayInEditor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UTD_Blueprint_Library::STATIC_TDBPL_IsPlayInEditor()
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_IsPlayInEditor");

	UTD_Blueprint_Library_TDBPL_IsPlayInEditor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_IsMovingVertically
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UTD_Blueprint_Library::STATIC_TDBPL_IsMovingVertically(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_IsMovingVertically");

	UTD_Blueprint_Library_TDBPL_IsMovingVertically_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_IsMovingHorizontally
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UTD_Blueprint_Library::STATIC_TDBPL_IsMovingHorizontally(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_IsMovingHorizontally");

	UTD_Blueprint_Library_TDBPL_IsMovingHorizontally_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_IsMoving
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UTD_Blueprint_Library::STATIC_TDBPL_IsMoving(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_IsMoving");

	UTD_Blueprint_Library_TDBPL_IsMoving_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_IsMacOS
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UTD_Blueprint_Library::STATIC_TDBPL_IsMacOS()
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_IsMacOS");

	UTD_Blueprint_Library_TDBPL_IsMacOS_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_IsLinux
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UTD_Blueprint_Library::STATIC_TDBPL_IsLinux()
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_IsLinux");

	UTD_Blueprint_Library_TDBPL_IsLinux_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_IsIOS
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UTD_Blueprint_Library::STATIC_TDBPL_IsIOS()
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_IsIOS");

	UTD_Blueprint_Library_TDBPL_IsIOS_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_IsDevelopmentBuild
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UTD_Blueprint_Library::STATIC_TDBPL_IsDevelopmentBuild()
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_IsDevelopmentBuild");

	UTD_Blueprint_Library_TDBPL_IsDevelopmentBuild_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_IsDesktop
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UTD_Blueprint_Library::STATIC_TDBPL_IsDesktop()
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_IsDesktop");

	UTD_Blueprint_Library_TDBPL_IsDesktop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_IsDebugBuild
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UTD_Blueprint_Library::STATIC_TDBPL_IsDebugBuild()
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_IsDebugBuild");

	UTD_Blueprint_Library_TDBPL_IsDebugBuild_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_IsApple
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UTD_Blueprint_Library::STATIC_TDBPL_IsApple()
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_IsApple");

	UTD_Blueprint_Library_TDBPL_IsApple_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_IsAndroid
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UTD_Blueprint_Library::STATIC_TDBPL_IsAndroid()
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_IsAndroid");

	UTD_Blueprint_Library_TDBPL_IsAndroid_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_InvertVector
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 Vector                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UTD_Blueprint_Library::STATIC_TDBPL_InvertVector(const struct FVector& Vector)
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_InvertVector");

	UTD_Blueprint_Library_TDBPL_InvertVector_Params params;
	params.Vector = Vector;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_InvertInteger
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            Integer                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UTD_Blueprint_Library::STATIC_TDBPL_InvertInteger(int Integer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_InvertInteger");

	UTD_Blueprint_Library_TDBPL_InvertInteger_Params params;
	params.Integer = Integer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_InvertFloat
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          Float                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UTD_Blueprint_Library::STATIC_TDBPL_InvertFloat(float Float)
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_InvertFloat");

	UTD_Blueprint_Library_TDBPL_InvertFloat_Params params;
	params.Float = Float;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_iIncrementByValue
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            Ref                            (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UTD_Blueprint_Library::STATIC_TDBPL_iIncrementByValue(int* Ref, int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_iIncrementByValue");

	UTD_Blueprint_Library_TDBPL_iIncrementByValue_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Ref != nullptr)
		*Ref = params.Ref;


	return params.ReturnValue;
}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_iDecrementByValue
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            Ref                            (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UTD_Blueprint_Library::STATIC_TDBPL_iDecrementByValue(int* Ref, int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_iDecrementByValue");

	UTD_Blueprint_Library_TDBPL_iDecrementByValue_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Ref != nullptr)
		*Ref = params.Ref;


	return params.ReturnValue;
}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_HasMoreThan
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Length                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 String                         (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Chars                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTD_Blueprint_Library::STATIC_TDBPL_HasMoreThan(bool* Return, int* Length, const struct FString& String, int Chars)
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_HasMoreThan");

	UTD_Blueprint_Library_TDBPL_HasMoreThan_Params params;
	params.String = String;
	params.Chars = Chars;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;
	if (Length != nullptr)
		*Length = params.Length;

}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_HasLessThan
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Length                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 String                         (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Chars                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTD_Blueprint_Library::STATIC_TDBPL_HasLessThan(bool* Return, int* Length, const struct FString& String, int Chars)
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_HasLessThan");

	UTD_Blueprint_Library_TDBPL_HasLessThan_Params params;
	params.String = String;
	params.Chars = Chars;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;
	if (Length != nullptr)
		*Length = params.Length;

}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_GetUseBorderlessWindow
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UTD_Blueprint_Library::STATIC_TDBPL_GetUseBorderlessWindow()
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_GetUseBorderlessWindow");

	UTD_Blueprint_Library_TDBPL_GetUseBorderlessWindow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_GetStartInVR
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UTD_Blueprint_Library::STATIC_TDBPL_GetStartInVR()
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_GetStartInVR");

	UTD_Blueprint_Library_TDBPL_GetStartInVR_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_GetProjectVersion
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UTD_Blueprint_Library::STATIC_TDBPL_GetProjectVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_GetProjectVersion");

	UTD_Blueprint_Library_TDBPL_GetProjectVersion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_GetProjectName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UTD_Blueprint_Library::STATIC_TDBPL_GetProjectName()
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_GetProjectName");

	UTD_Blueprint_Library_TDBPL_GetProjectName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_GetProjectID
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGuid                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FGuid UTD_Blueprint_Library::STATIC_TDBPL_GetProjectID()
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_GetProjectID");

	UTD_Blueprint_Library_TDBPL_GetProjectID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_GetProjectDescription
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UTD_Blueprint_Library::STATIC_TDBPL_GetProjectDescription()
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_GetProjectDescription");

	UTD_Blueprint_Library_TDBPL_GetProjectDescription_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_GetPreserveAspectRatio
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UTD_Blueprint_Library::STATIC_TDBPL_GetPreserveAspectRatio()
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_GetPreserveAspectRatio");

	UTD_Blueprint_Library_TDBPL_GetPreserveAspectRatio_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_GetOSVersion
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UTD_Blueprint_Library::STATIC_TDBPL_GetOSVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_GetOSVersion");

	UTD_Blueprint_Library_TDBPL_GetOSVersion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_GetMiddlePoint
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 A                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 B                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UTD_Blueprint_Library::STATIC_TDBPL_GetMiddlePoint(const struct FVector& A, const struct FVector& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_GetMiddlePoint");

	UTD_Blueprint_Library_TDBPL_GetMiddlePoint_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_GetGPUBrand
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UTD_Blueprint_Library::STATIC_TDBPL_GetGPUBrand()
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_GetGPUBrand");

	UTD_Blueprint_Library_TDBPL_GetGPUBrand_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_GetGeneralProjectSettingsPure
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FProjectSettings        Settings                       (Parm, OutParm, NativeAccessSpecifierPublic)
void UTD_Blueprint_Library::STATIC_TDBPL_GetGeneralProjectSettingsPure(struct FProjectSettings* Settings)
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_GetGeneralProjectSettingsPure");

	UTD_Blueprint_Library_TDBPL_GetGeneralProjectSettingsPure_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Settings != nullptr)
		*Settings = params.Settings;

}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_GetGeneralProjectSettings
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FProjectSettings        Settings                       (Parm, OutParm, NativeAccessSpecifierPublic)
void UTD_Blueprint_Library::STATIC_TDBPL_GetGeneralProjectSettings(struct FProjectSettings* Settings)
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_GetGeneralProjectSettings");

	UTD_Blueprint_Library_TDBPL_GetGeneralProjectSettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Settings != nullptr)
		*Settings = params.Settings;

}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_GetFPS
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UTD_Blueprint_Library::STATIC_TDBPL_GetFPS()
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_GetFPS");

	UTD_Blueprint_Library_TDBPL_GetFPS_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_GetDistanceToVector
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 A                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 B                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Z                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UTD_Blueprint_Library::STATIC_TDBPL_GetDistanceToVector(const struct FVector& A, const struct FVector& B, bool Z)
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_GetDistanceToVector");

	UTD_Blueprint_Library_TDBPL_GetDistanceToVector_Params params;
	params.A = A;
	params.B = B;
	params.Z = Z;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_GetDisplayedTitle
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UTD_Blueprint_Library::STATIC_TDBPL_GetDisplayedTitle()
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_GetDisplayedTitle");

	UTD_Blueprint_Library_TDBPL_GetDisplayedTitle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_GetDebugTitleInfo
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UTD_Blueprint_Library::STATIC_TDBPL_GetDebugTitleInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_GetDebugTitleInfo");

	UTD_Blueprint_Library_TDBPL_GetDebugTitleInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_GetCPUVendor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UTD_Blueprint_Library::STATIC_TDBPL_GetCPUVendor()
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_GetCPUVendor");

	UTD_Blueprint_Library_TDBPL_GetCPUVendor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_GetCPUBrand
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UTD_Blueprint_Library::STATIC_TDBPL_GetCPUBrand()
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_GetCPUBrand");

	UTD_Blueprint_Library_TDBPL_GetCPUBrand_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_GetCPU_NOT
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UTD_Blueprint_Library::STATIC_TDBPL_GetCPU_NOT()
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_GetCPU_NOT");

	UTD_Blueprint_Library_TDBPL_GetCPU_NOT_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_GetCPU_NOC
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UTD_Blueprint_Library::STATIC_TDBPL_GetCPU_NOC()
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_GetCPU_NOC");

	UTD_Blueprint_Library_TDBPL_GetCPU_NOC_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_GetCompanySupportContact
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UTD_Blueprint_Library::STATIC_TDBPL_GetCompanySupportContact()
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_GetCompanySupportContact");

	UTD_Blueprint_Library_TDBPL_GetCompanySupportContact_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_GetCompanyPrivacyPolicy
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UTD_Blueprint_Library::STATIC_TDBPL_GetCompanyPrivacyPolicy()
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_GetCompanyPrivacyPolicy");

	UTD_Blueprint_Library_TDBPL_GetCompanyPrivacyPolicy_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_GetCompanyName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UTD_Blueprint_Library::STATIC_TDBPL_GetCompanyName()
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_GetCompanyName");

	UTD_Blueprint_Library_TDBPL_GetCompanyName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_GetCompanyLicensingTerms
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UTD_Blueprint_Library::STATIC_TDBPL_GetCompanyLicensingTerms()
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_GetCompanyLicensingTerms");

	UTD_Blueprint_Library_TDBPL_GetCompanyLicensingTerms_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_GetCompanyHomepage
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UTD_Blueprint_Library::STATIC_TDBPL_GetCompanyHomepage()
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_GetCompanyHomepage");

	UTD_Blueprint_Library_TDBPL_GetCompanyHomepage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_GetCompanyDistinguishedName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UTD_Blueprint_Library::STATIC_TDBPL_GetCompanyDistinguishedName()
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_GetCompanyDistinguishedName");

	UTD_Blueprint_Library_TDBPL_GetCompanyDistinguishedName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_GetCompanyCopyrightNotice
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UTD_Blueprint_Library::STATIC_TDBPL_GetCompanyCopyrightNotice()
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_GetCompanyCopyrightNotice");

	UTD_Blueprint_Library_TDBPL_GetCompanyCopyrightNotice_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_GetAllowWindowResize
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UTD_Blueprint_Library::STATIC_TDBPL_GetAllowWindowResize()
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_GetAllowWindowResize");

	UTD_Blueprint_Library_TDBPL_GetAllowWindowResize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_GetAllowMinimize
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UTD_Blueprint_Library::STATIC_TDBPL_GetAllowMinimize()
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_GetAllowMinimize");

	UTD_Blueprint_Library_TDBPL_GetAllowMinimize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_GetAllowMaximize
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UTD_Blueprint_Library::STATIC_TDBPL_GetAllowMaximize()
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_GetAllowMaximize");

	UTD_Blueprint_Library_TDBPL_GetAllowMaximize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_GetAllowClose
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UTD_Blueprint_Library::STATIC_TDBPL_GetAllowClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_GetAllowClose");

	UTD_Blueprint_Library_TDBPL_GetAllowClose_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_FindNumeric
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 String                         (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UTD_Blueprint_Library::STATIC_TDBPL_FindNumeric(const struct FString& String)
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_FindNumeric");

	UTD_Blueprint_Library_TDBPL_FindNumeric_Params params;
	params.String = String;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_FindLookAtActorRotation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FRotator UTD_Blueprint_Library::STATIC_TDBPL_FindLookAtActorRotation(class AActor* Actor, class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_FindLookAtActorRotation");

	UTD_Blueprint_Library_TDBPL_FindLookAtActorRotation_Params params;
	params.Actor = Actor;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_fIncrementByValue
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// float                          Ref                            (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UTD_Blueprint_Library::STATIC_TDBPL_fIncrementByValue(float* Ref, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_fIncrementByValue");

	UTD_Blueprint_Library_TDBPL_fIncrementByValue_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Ref != nullptr)
		*Ref = params.Ref;


	return params.ReturnValue;
}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_fGetWorldGravityZ
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UTD_Blueprint_Library::STATIC_TDBPL_fGetWorldGravityZ(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_fGetWorldGravityZ");

	UTD_Blueprint_Library_TDBPL_fGetWorldGravityZ_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_fDecrementByValue
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// float                          Ref                            (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UTD_Blueprint_Library::STATIC_TDBPL_fDecrementByValue(float* Ref, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_fDecrementByValue");

	UTD_Blueprint_Library_TDBPL_fDecrementByValue_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Ref != nullptr)
		*Ref = params.Ref;


	return params.ReturnValue;
}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_DrawDebugGrid2D
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// float                          Z                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Size                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Spacing                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            LineColor                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Thickness                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTD_Blueprint_Library::STATIC_TDBPL_DrawDebugGrid2D(float Z, int Size, int Spacing, class UObject* WorldContextObject, const struct FLinearColor& LineColor, float Duration, float Thickness)
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_DrawDebugGrid2D");

	UTD_Blueprint_Library_TDBPL_DrawDebugGrid2D_Params params;
	params.Z = Z;
	params.Size = Size;
	params.Spacing = Spacing;
	params.WorldContextObject = WorldContextObject;
	params.LineColor = LineColor;
	params.Duration = Duration;
	params.Thickness = Thickness;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_DrawDebugDonut
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FMatrix                 TransformMatrix                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// float                          InnerRadius                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          OuterRadius                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Segments                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            LineColor                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           PersistentLines                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Thickness                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTD_Blueprint_Library::STATIC_TDBPL_DrawDebugDonut(const struct FMatrix& TransformMatrix, float InnerRadius, float OuterRadius, int Segments, class UObject* WorldContextObject, const struct FLinearColor& LineColor, bool PersistentLines, float Duration, float Thickness)
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_DrawDebugDonut");

	UTD_Blueprint_Library_TDBPL_DrawDebugDonut_Params params;
	params.TransformMatrix = TransformMatrix;
	params.InnerRadius = InnerRadius;
	params.OuterRadius = OuterRadius;
	params.Segments = Segments;
	params.WorldContextObject = WorldContextObject;
	params.LineColor = LineColor;
	params.PersistentLines = PersistentLines;
	params.Duration = Duration;
	params.Thickness = Thickness;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_DrawDebugCrosshair
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 AxisLoc                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                AxisRot                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// float                          Scale                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            LineColor                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           PersistentLines                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTD_Blueprint_Library::STATIC_TDBPL_DrawDebugCrosshair(const struct FVector& AxisLoc, const struct FRotator& AxisRot, float Scale, class UObject* WorldContextObject, const struct FLinearColor& LineColor, bool PersistentLines, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_DrawDebugCrosshair");

	UTD_Blueprint_Library_TDBPL_DrawDebugCrosshair_Params params;
	params.AxisLoc = AxisLoc;
	params.AxisRot = AxisRot;
	params.Scale = Scale;
	params.WorldContextObject = WorldContextObject;
	params.LineColor = LineColor;
	params.PersistentLines = PersistentLines;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_DotUpVector
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class USceneComponent*         Target                         (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Normal                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UTD_Blueprint_Library::STATIC_TDBPL_DotUpVector(class USceneComponent* Target, const struct FVector& Normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_DotUpVector");

	UTD_Blueprint_Library_TDBPL_DotUpVector_Params params;
	params.Target = Target;
	params.Normal = Normal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_DotRightVector
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class USceneComponent*         Target                         (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Normal                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UTD_Blueprint_Library::STATIC_TDBPL_DotRightVector(class USceneComponent* Target, const struct FVector& Normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_DotRightVector");

	UTD_Blueprint_Library_TDBPL_DotRightVector_Params params;
	params.Target = Target;
	params.Normal = Normal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_DotForwardVector
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class USceneComponent*         Target                         (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Normal                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UTD_Blueprint_Library::STATIC_TDBPL_DotForwardVector(class USceneComponent* Target, const struct FVector& Normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_DotForwardVector");

	UTD_Blueprint_Library_TDBPL_DotForwardVector_Params params;
	params.Target = Target;
	params.Normal = Normal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_ContainsUppercase
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 String                         (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UTD_Blueprint_Library::STATIC_TDBPL_ContainsUppercase(const struct FString& String)
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_ContainsUppercase");

	UTD_Blueprint_Library_TDBPL_ContainsUppercase_Params params;
	params.String = String;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_ContainsNumber
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 String                         (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UTD_Blueprint_Library::STATIC_TDBPL_ContainsNumber(const struct FString& String)
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_ContainsNumber");

	UTD_Blueprint_Library_TDBPL_ContainsNumber_Params params;
	params.String = String;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_CombineSpread
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// float                          OutHorizontal                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          OutVertical                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          HorizontalMoving               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          VerticalMoving                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          HorizontalShooting             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          VerticalShooting               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTD_Blueprint_Library::STATIC_TDBPL_CombineSpread(float* OutHorizontal, float* OutVertical, float HorizontalMoving, float VerticalMoving, float HorizontalShooting, float VerticalShooting)
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_CombineSpread");

	UTD_Blueprint_Library_TDBPL_CombineSpread_Params params;
	params.HorizontalMoving = HorizontalMoving;
	params.VerticalMoving = VerticalMoving;
	params.HorizontalShooting = HorizontalShooting;
	params.VerticalShooting = VerticalShooting;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutHorizontal != nullptr)
		*OutHorizontal = params.OutHorizontal;
	if (OutVertical != nullptr)
		*OutVertical = params.OutVertical;

}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_AlignToSurfaceSmoothConstant
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Normal                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Speed                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Teleport                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UTD_Blueprint_Library::STATIC_TDBPL_AlignToSurfaceSmoothConstant(class AActor* Actor, const struct FVector& Normal, float Speed, bool Teleport)
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_AlignToSurfaceSmoothConstant");

	UTD_Blueprint_Library_TDBPL_AlignToSurfaceSmoothConstant_Params params;
	params.Actor = Actor;
	params.Normal = Normal;
	params.Speed = Speed;
	params.Teleport = Teleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_AlignToSurfaceSmooth
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Normal                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Speed                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Teleport                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UTD_Blueprint_Library::STATIC_TDBPL_AlignToSurfaceSmooth(class AActor* Actor, const struct FVector& Normal, float Speed, bool Teleport)
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_AlignToSurfaceSmooth");

	UTD_Blueprint_Library_TDBPL_AlignToSurfaceSmooth_Params params;
	params.Actor = Actor;
	params.Normal = Normal;
	params.Speed = Speed;
	params.Teleport = Teleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_AlignToSurfaceInstant
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Normal                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Teleport                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UTD_Blueprint_Library::STATIC_TDBPL_AlignToSurfaceInstant(class AActor* Actor, const struct FVector& Normal, bool Teleport)
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_AlignToSurfaceInstant");

	UTD_Blueprint_Library_TDBPL_AlignToSurfaceInstant_Params params;
	params.Actor = Actor;
	params.Normal = Normal;
	params.Teleport = Teleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_AlignToSurface
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// float                          ASD                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*     PrimitiveComponent             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Force                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Strenght                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           AccelChange                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Normal                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Roll                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Pitch                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTD_Blueprint_Library::STATIC_TDBPL_AlignToSurface(float* ASD, class UPrimitiveComponent* PrimitiveComponent, float Force, float Strenght, bool AccelChange, const struct FVector& Normal, bool Roll, bool Pitch)
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_AlignToSurface");

	UTD_Blueprint_Library_TDBPL_AlignToSurface_Params params;
	params.PrimitiveComponent = PrimitiveComponent;
	params.Force = Force;
	params.Strenght = Strenght;
	params.AccelChange = AccelChange;
	params.Normal = Normal;
	params.Roll = Roll;
	params.Pitch = Pitch;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ASD != nullptr)
		*ASD = params.ASD;

}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_AddSpringForceSphereTrace
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult              OutHit                         (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// float                          Ref                            (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*     PrimitiveComponent             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 TraceStart                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 TraceDirection                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          TraceRadius                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          TraceDistance                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          SpringStiffness                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          SpringDamping                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           AccelChange                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<Engine_ETraceTypeQuery> TraceChannel                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           TraceComplex                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>          ActorsToIgnore                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
// bool                           IgnoreSelf                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TD_Blueprint_Library_EASFDebugTrace DrawDebugType                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            TraceColor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UTD_Blueprint_Library::STATIC_TDBPL_AddSpringForceSphereTrace(class UObject* WorldContextObject, struct FHitResult* OutHit, float* Ref, class UPrimitiveComponent* PrimitiveComponent, const struct FVector& TraceStart, const struct FVector& TraceDirection, float TraceRadius, float TraceDistance, float SpringStiffness, float SpringDamping, bool AccelChange, TEnumAsByte<Engine_ETraceTypeQuery> TraceChannel, bool TraceComplex, TArray<class AActor*> ActorsToIgnore, bool IgnoreSelf, TD_Blueprint_Library_EASFDebugTrace DrawDebugType, const struct FLinearColor& TraceColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_AddSpringForceSphereTrace");

	UTD_Blueprint_Library_TDBPL_AddSpringForceSphereTrace_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PrimitiveComponent = PrimitiveComponent;
	params.TraceStart = TraceStart;
	params.TraceDirection = TraceDirection;
	params.TraceRadius = TraceRadius;
	params.TraceDistance = TraceDistance;
	params.SpringStiffness = SpringStiffness;
	params.SpringDamping = SpringDamping;
	params.AccelChange = AccelChange;
	params.TraceChannel = TraceChannel;
	params.TraceComplex = TraceComplex;
	params.ActorsToIgnore = ActorsToIgnore;
	params.IgnoreSelf = IgnoreSelf;
	params.DrawDebugType = DrawDebugType;
	params.TraceColor = TraceColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutHit != nullptr)
		*OutHit = params.OutHit;
	if (Ref != nullptr)
		*Ref = params.Ref;


	return params.ReturnValue;
}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_AddSpringForceLineTrace
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult              OutHit                         (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// float                          Ref                            (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*     PrimitiveComponent             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 TraceStart                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 TraceDirection                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          TraceDistance                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          SpringStiffness                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          SpringDamping                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           AccelChange                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<Engine_ETraceTypeQuery> TraceChannel                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           TraceComplex                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>          ActorsToIgnore                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
// bool                           IgnoreSelf                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TD_Blueprint_Library_EASFDebugTrace DrawDebugType                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            TraceColor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UTD_Blueprint_Library::STATIC_TDBPL_AddSpringForceLineTrace(class UObject* WorldContextObject, struct FHitResult* OutHit, float* Ref, class UPrimitiveComponent* PrimitiveComponent, const struct FVector& TraceStart, const struct FVector& TraceDirection, float TraceDistance, float SpringStiffness, float SpringDamping, bool AccelChange, TEnumAsByte<Engine_ETraceTypeQuery> TraceChannel, bool TraceComplex, TArray<class AActor*> ActorsToIgnore, bool IgnoreSelf, TD_Blueprint_Library_EASFDebugTrace DrawDebugType, const struct FLinearColor& TraceColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_AddSpringForceLineTrace");

	UTD_Blueprint_Library_TDBPL_AddSpringForceLineTrace_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PrimitiveComponent = PrimitiveComponent;
	params.TraceStart = TraceStart;
	params.TraceDirection = TraceDirection;
	params.TraceDistance = TraceDistance;
	params.SpringStiffness = SpringStiffness;
	params.SpringDamping = SpringDamping;
	params.AccelChange = AccelChange;
	params.TraceChannel = TraceChannel;
	params.TraceComplex = TraceComplex;
	params.ActorsToIgnore = ActorsToIgnore;
	params.IgnoreSelf = IgnoreSelf;
	params.DrawDebugType = DrawDebugType;
	params.TraceColor = TraceColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutHit != nullptr)
		*OutHit = params.OutHit;
	if (Ref != nullptr)
		*Ref = params.Ref;


	return params.ReturnValue;
}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_AddSpringForceAtLocationSphereTrace
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult              OutHit                         (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// float                          Ref                            (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*     PrimitiveComponent             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 TraceStart                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 TraceDirection                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          TraceRadius                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          TraceDistance                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          SpringStiffness                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          SpringDamping                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<Engine_ETraceTypeQuery> TraceChannel                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           TraceComplex                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>          ActorsToIgnore                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
// bool                           IgnoreSelf                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TD_Blueprint_Library_EASFDebugTrace DrawDebugType                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            TraceColor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UTD_Blueprint_Library::STATIC_TDBPL_AddSpringForceAtLocationSphereTrace(class UObject* WorldContextObject, struct FHitResult* OutHit, float* Ref, class UPrimitiveComponent* PrimitiveComponent, const struct FVector& TraceStart, const struct FVector& TraceDirection, float TraceRadius, float TraceDistance, float SpringStiffness, float SpringDamping, TEnumAsByte<Engine_ETraceTypeQuery> TraceChannel, bool TraceComplex, TArray<class AActor*> ActorsToIgnore, bool IgnoreSelf, TD_Blueprint_Library_EASFDebugTrace DrawDebugType, const struct FLinearColor& TraceColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_AddSpringForceAtLocationSphereTrace");

	UTD_Blueprint_Library_TDBPL_AddSpringForceAtLocationSphereTrace_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PrimitiveComponent = PrimitiveComponent;
	params.TraceStart = TraceStart;
	params.TraceDirection = TraceDirection;
	params.TraceRadius = TraceRadius;
	params.TraceDistance = TraceDistance;
	params.SpringStiffness = SpringStiffness;
	params.SpringDamping = SpringDamping;
	params.TraceChannel = TraceChannel;
	params.TraceComplex = TraceComplex;
	params.ActorsToIgnore = ActorsToIgnore;
	params.IgnoreSelf = IgnoreSelf;
	params.DrawDebugType = DrawDebugType;
	params.TraceColor = TraceColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutHit != nullptr)
		*OutHit = params.OutHit;
	if (Ref != nullptr)
		*Ref = params.Ref;


	return params.ReturnValue;
}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_AddSpringForceAtLocationLineTrace
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult              OutHit                         (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// float                          Ref                            (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*     PrimitiveComponent             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 TraceStart                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 TraceDirection                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          TraceDistance                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          SpringStiffness                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          SpringDamping                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<Engine_ETraceTypeQuery> TraceChannel                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           TraceComplex                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>          ActorsToIgnore                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
// bool                           IgnoreSelf                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TD_Blueprint_Library_EASFDebugTrace DrawDebugType                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            TraceColor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UTD_Blueprint_Library::STATIC_TDBPL_AddSpringForceAtLocationLineTrace(class UObject* WorldContextObject, struct FHitResult* OutHit, float* Ref, class UPrimitiveComponent* PrimitiveComponent, const struct FVector& TraceStart, const struct FVector& TraceDirection, float TraceDistance, float SpringStiffness, float SpringDamping, TEnumAsByte<Engine_ETraceTypeQuery> TraceChannel, bool TraceComplex, TArray<class AActor*> ActorsToIgnore, bool IgnoreSelf, TD_Blueprint_Library_EASFDebugTrace DrawDebugType, const struct FLinearColor& TraceColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_AddSpringForceAtLocationLineTrace");

	UTD_Blueprint_Library_TDBPL_AddSpringForceAtLocationLineTrace_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PrimitiveComponent = PrimitiveComponent;
	params.TraceStart = TraceStart;
	params.TraceDirection = TraceDirection;
	params.TraceDistance = TraceDistance;
	params.SpringStiffness = SpringStiffness;
	params.SpringDamping = SpringDamping;
	params.TraceChannel = TraceChannel;
	params.TraceComplex = TraceComplex;
	params.ActorsToIgnore = ActorsToIgnore;
	params.IgnoreSelf = IgnoreSelf;
	params.DrawDebugType = DrawDebugType;
	params.TraceColor = TraceColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutHit != nullptr)
		*OutHit = params.OutHit;
	if (Ref != nullptr)
		*Ref = params.Ref;


	return params.ReturnValue;
}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_AddSpringForceAtLocation
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*     PrimitiveComponent             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Ref                            (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Distance                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          RestLength                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Stiffness                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Damping                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Normal                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTD_Blueprint_Library::STATIC_TDBPL_AddSpringForceAtLocation(class UPrimitiveComponent* PrimitiveComponent, float* Ref, float Distance, float RestLength, float Stiffness, float Damping, const struct FVector& Normal, const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_AddSpringForceAtLocation");

	UTD_Blueprint_Library_TDBPL_AddSpringForceAtLocation_Params params;
	params.PrimitiveComponent = PrimitiveComponent;
	params.Distance = Distance;
	params.RestLength = RestLength;
	params.Stiffness = Stiffness;
	params.Damping = Damping;
	params.Normal = Normal;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Ref != nullptr)
		*Ref = params.Ref;

}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_AddSpringForce
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*     PrimitiveComponent             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Ref                            (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Distance                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          RestLength                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Stiffness                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Damping                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Normal                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           AccelChange                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTD_Blueprint_Library::STATIC_TDBPL_AddSpringForce(class UPrimitiveComponent* PrimitiveComponent, float* Ref, float Distance, float RestLength, float Stiffness, float Damping, const struct FVector& Normal, bool AccelChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_AddSpringForce");

	UTD_Blueprint_Library_TDBPL_AddSpringForce_Params params;
	params.PrimitiveComponent = PrimitiveComponent;
	params.Distance = Distance;
	params.RestLength = RestLength;
	params.Stiffness = Stiffness;
	params.Damping = Damping;
	params.Normal = Normal;
	params.AccelChange = AccelChange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Ref != nullptr)
		*Ref = params.Ref;

}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_ActorLookAtTargetSmoothConstant
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Location                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Speed                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Teleport                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UTD_Blueprint_Library::STATIC_TDBPL_ActorLookAtTargetSmoothConstant(class AActor* Actor, class AActor* Target, const struct FVector& Location, float Speed, bool Teleport)
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_ActorLookAtTargetSmoothConstant");

	UTD_Blueprint_Library_TDBPL_ActorLookAtTargetSmoothConstant_Params params;
	params.Actor = Actor;
	params.Target = Target;
	params.Location = Location;
	params.Speed = Speed;
	params.Teleport = Teleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_ActorLookAtTargetSmooth
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Location                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Speed                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Teleport                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UTD_Blueprint_Library::STATIC_TDBPL_ActorLookAtTargetSmooth(class AActor* Actor, class AActor* Target, const struct FVector& Location, float Speed, bool Teleport)
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_ActorLookAtTargetSmooth");

	UTD_Blueprint_Library_TDBPL_ActorLookAtTargetSmooth_Params params;
	params.Actor = Actor;
	params.Target = Target;
	params.Location = Location;
	params.Speed = Speed;
	params.Teleport = Teleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_ActorLookAtTargetInstant
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Location                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Teleport                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UTD_Blueprint_Library::STATIC_TDBPL_ActorLookAtTargetInstant(class AActor* Actor, class AActor* Target, const struct FVector& Location, bool Teleport)
{
	static auto fn = UObject::FindObject<UFunction>("Function TD_Blueprint_Library.TD_Blueprint_Library.TDBPL_ActorLookAtTargetInstant");

	UTD_Blueprint_Library_TDBPL_ActorLookAtTargetInstant_Params params;
	params.Actor = Actor;
	params.Target = Target;
	params.Location = Location;
	params.Teleport = Teleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
