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

// Function BP_AquaticSimulation.BP_AquaticSimulation_C.OnWorldOriginChanged
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FIntVector              OldLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIntVector              NewLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Update                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_AquaticSimulation_C::OnWorldOriginChanged(const struct FIntVector& OldLocation, const struct FIntVector& NewLocation, bool* Update)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSimulation.BP_AquaticSimulation_C.OnWorldOriginChanged");

	ABP_AquaticSimulation_C_OnWorldOriginChanged_Params params;
	params.OldLocation = OldLocation;
	params.NewLocation = NewLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Update != nullptr)
		*Update = params.Update;

}


// Function BP_AquaticSimulation.BP_AquaticSimulation_C.SpawnSplash
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBS_AquaticInteraction  Interaction                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_AquaticSurface_C*    Surface                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 NewLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AquaticSimulation_C::SpawnSplash(struct FBS_AquaticInteraction* Interaction, class ABP_AquaticSurface_C* Surface, const struct FVector& NewLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSimulation.BP_AquaticSimulation_C.SpawnSplash");

	ABP_AquaticSimulation_C_SpawnSplash_Params params;
	params.Surface = Surface;
	params.NewLocation = NewLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Interaction != nullptr)
		*Interaction = params.Interaction;

}


// Function BP_AquaticSimulation.BP_AquaticSimulation_C.UpdateSimulationFocus
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_AquaticSimulation_C::UpdateSimulationFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSimulation.BP_AquaticSimulation_C.UpdateSimulationFocus");

	ABP_AquaticSimulation_C_UpdateSimulationFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AquaticSimulation.BP_AquaticSimulation_C.DrawSplat
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               ScreenSize                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvas*                 Canvas                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ForceSize                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Radius                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AquaticSimulation_C::DrawSplat(const struct FVector2D& ScreenSize, class UCanvas* Canvas, float ForceSize, const struct FVector& Location, float Radius)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSimulation.BP_AquaticSimulation_C.DrawSplat");

	ABP_AquaticSimulation_C_DrawSplat_Params params;
	params.ScreenSize = ScreenSize;
	params.Canvas = Canvas;
	params.ForceSize = ForceSize;
	params.Location = Location;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AquaticSimulation.BP_AquaticSimulation_C.IsLocal
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_AquaticSimulation_C::IsLocal()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSimulation.BP_AquaticSimulation_C.IsLocal");

	ABP_AquaticSimulation_C_IsLocal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_AquaticSimulation.BP_AquaticSimulation_C.NewRenderTarget
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextureRenderTarget2D*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTextureRenderTarget2D* ABP_AquaticSimulation_C::NewRenderTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSimulation.BP_AquaticSimulation_C.NewRenderTarget");

	ABP_AquaticSimulation_C_NewRenderTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_AquaticSimulation.BP_AquaticSimulation_C.DebugDraw
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_AquaticSimulation_C::DebugDraw()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSimulation.BP_AquaticSimulation_C.DebugDraw");

	ABP_AquaticSimulation_C_DebugDraw_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AquaticSimulation.BP_AquaticSimulation_C.AddInteraction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_AquaticInteractionData Interaction                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           VisibilityTest                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_AquaticSimulation_C::AddInteraction(const struct FST_AquaticInteractionData& Interaction, const struct FVector& Location, float Duration, bool VisibilityTest)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSimulation.BP_AquaticSimulation_C.AddInteraction");

	ABP_AquaticSimulation_C_AddInteraction_Params params;
	params.Interaction = Interaction;
	params.Location = Location;
	params.Duration = Duration;
	params.VisibilityTest = VisibilityTest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AquaticSimulation.BP_AquaticSimulation_C.SetTargetPoint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 TargetLocation                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          InterpSpeed                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          MaxDistance                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AquaticSimulation_C::SetTargetPoint(const struct FVector& TargetLocation, float InterpSpeed, float MaxDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSimulation.BP_AquaticSimulation_C.SetTargetPoint");

	ABP_AquaticSimulation_C_SetTargetPoint_Params params;
	params.TargetLocation = TargetLocation;
	params.InterpSpeed = InterpSpeed;
	params.MaxDistance = MaxDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AquaticSimulation.BP_AquaticSimulation_C.RemoveInteractionFinished
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_AquaticSimulation_C::RemoveInteractionFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSimulation.BP_AquaticSimulation_C.RemoveInteractionFinished");

	ABP_AquaticSimulation_C_RemoveInteractionFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AquaticSimulation.BP_AquaticSimulation_C.UpdateRenderPosition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_AquaticSimulation_C::UpdateRenderPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSimulation.BP_AquaticSimulation_C.UpdateRenderPosition");

	ABP_AquaticSimulation_C_UpdateRenderPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AquaticSimulation.BP_AquaticSimulation_C.UpdateInteractionTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Draw                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_AquaticSimulation_C::UpdateInteractionTime(int Index, float DeltaTime, bool* Draw)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSimulation.BP_AquaticSimulation_C.UpdateInteractionTime");

	ABP_AquaticSimulation_C_UpdateInteractionTime_Params params;
	params.Index = Index;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Draw != nullptr)
		*Draw = params.Draw;

}


// Function BP_AquaticSimulation.BP_AquaticSimulation_C.RemoveInteractionActor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AquaticSimulation_C::RemoveInteractionActor(class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSimulation.BP_AquaticSimulation_C.RemoveInteractionActor");

	ABP_AquaticSimulation_C_RemoveInteractionActor_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AquaticSimulation.BP_AquaticSimulation_C.AddInteractionActor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_AquaticSurface_C*    InteractionSurface             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AquaticSimulation_C::AddInteractionActor(class ABP_AquaticSurface_C* InteractionSurface, class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSimulation.BP_AquaticSimulation_C.AddInteractionActor");

	ABP_AquaticSimulation_C_AddInteractionActor_Params params;
	params.InteractionSurface = InteractionSurface;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AquaticSimulation.BP_AquaticSimulation_C.UpdateInteraction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCanvas*                 Canvas                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D               ScreenSize                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Interaction                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AquaticSimulation_C::UpdateInteraction(class UCanvas* Canvas, const struct FVector2D& ScreenSize, int Interaction, float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSimulation.BP_AquaticSimulation_C.UpdateInteraction");

	ABP_AquaticSimulation_C_UpdateInteraction_Params params;
	params.Canvas = Canvas;
	params.ScreenSize = ScreenSize;
	params.Interaction = Interaction;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AquaticSimulation.BP_AquaticSimulation_C.GetRenderTarget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NumFramesOld                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextureRenderTarget2D*  HeightRT                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AquaticSimulation_C::GetRenderTarget(int NumFramesOld, class UTextureRenderTarget2D** HeightRT)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSimulation.BP_AquaticSimulation_C.GetRenderTarget");

	ABP_AquaticSimulation_C_GetRenderTarget_Params params;
	params.NumFramesOld = NumFramesOld;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HeightRT != nullptr)
		*HeightRT = params.HeightRT;

}


// Function BP_AquaticSimulation.BP_AquaticSimulation_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_AquaticSimulation_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSimulation.BP_AquaticSimulation_C.UserConstructionScript");

	ABP_AquaticSimulation_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AquaticSimulation.BP_AquaticSimulation_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_AquaticSimulation_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSimulation.BP_AquaticSimulation_C.ReceiveBeginPlay");

	ABP_AquaticSimulation_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AquaticSimulation.BP_AquaticSimulation_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AquaticSimulation_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSimulation.BP_AquaticSimulation_C.ReceiveTick");

	ABP_AquaticSimulation_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AquaticSimulation.BP_AquaticSimulation_C.UpdateTransform
// (BlueprintCallable, BlueprintEvent)
void ABP_AquaticSimulation_C::UpdateTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSimulation.BP_AquaticSimulation_C.UpdateTransform");

	ABP_AquaticSimulation_C_UpdateTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AquaticSimulation.BP_AquaticSimulation_C.ExecuteUbergraph_BP_AquaticSimulation
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AquaticSimulation_C::ExecuteUbergraph_BP_AquaticSimulation(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AquaticSimulation.BP_AquaticSimulation_C.ExecuteUbergraph_BP_AquaticSimulation");

	ABP_AquaticSimulation_C_ExecuteUbergraph_BP_AquaticSimulation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_AquaticSimulation_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(Volume, UBoxComponent);
	READ_PTR_FULL(DefaultSceneRoot, USceneComponent);
	READ_PTR_FULL(SimulationInstance, UMaterialInstanceDynamic);
	READ_PTR_FULL(SplatInstance, UMaterialInstanceDynamic);
}

void ABP_AquaticSimulation_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(Volume);
	DELE_PTR_FULL(DefaultSceneRoot);
	DELE_PTR_FULL(SimulationInstance);
	DELE_PTR_FULL(SplatInstance);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
