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
// Parameters
//---------------------------------------------------------------------------

// Function BP_AquaticSimulation.BP_AquaticSimulation_C.OnWorldOriginChanged
struct ABP_AquaticSimulation_C_OnWorldOriginChanged_Params
{
	struct FIntVector                                  OldLocation;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FIntVector                                  NewLocation;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Update;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_AquaticSimulation.BP_AquaticSimulation_C.SpawnSplash
struct ABP_AquaticSimulation_C_SpawnSplash_Params
{
	struct FBS_AquaticInteraction                      Interaction;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_AquaticSurface_C*                        Surface;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     NewLocation;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AquaticSimulation.BP_AquaticSimulation_C.UpdateSimulationFocus
struct ABP_AquaticSimulation_C_UpdateSimulationFocus_Params
{
};

// Function BP_AquaticSimulation.BP_AquaticSimulation_C.DrawSplat
struct ABP_AquaticSimulation_C_DrawSplat_Params
{
	struct FVector2D                                   ScreenSize;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvas*                                     Canvas;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ForceSize;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Radius;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AquaticSimulation.BP_AquaticSimulation_C.IsLocal
struct ABP_AquaticSimulation_C_IsLocal_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_AquaticSimulation.BP_AquaticSimulation_C.NewRenderTarget
struct ABP_AquaticSimulation_C_NewRenderTarget_Params
{
	class UTextureRenderTarget2D*                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AquaticSimulation.BP_AquaticSimulation_C.DebugDraw
struct ABP_AquaticSimulation_C_DebugDraw_Params
{
};

// Function BP_AquaticSimulation.BP_AquaticSimulation_C.AddInteraction
struct ABP_AquaticSimulation_C_AddInteraction_Params
{
	struct FST_AquaticInteractionData                  Interaction;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Duration;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               VisibilityTest;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_AquaticSimulation.BP_AquaticSimulation_C.SetTargetPoint
struct ABP_AquaticSimulation_C_SetTargetPoint_Params
{
	struct FVector                                     TargetLocation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InterpSpeed;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxDistance;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AquaticSimulation.BP_AquaticSimulation_C.RemoveInteractionFinished
struct ABP_AquaticSimulation_C_RemoveInteractionFinished_Params
{
};

// Function BP_AquaticSimulation.BP_AquaticSimulation_C.UpdateRenderPosition
struct ABP_AquaticSimulation_C_UpdateRenderPosition_Params
{
};

// Function BP_AquaticSimulation.BP_AquaticSimulation_C.UpdateInteractionTime
struct ABP_AquaticSimulation_C_UpdateInteractionTime_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DeltaTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Draw;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_AquaticSimulation.BP_AquaticSimulation_C.RemoveInteractionActor
struct ABP_AquaticSimulation_C_RemoveInteractionActor_Params
{
	class AActor*                                      Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AquaticSimulation.BP_AquaticSimulation_C.AddInteractionActor
struct ABP_AquaticSimulation_C_AddInteractionActor_Params
{
	class ABP_AquaticSurface_C*                        InteractionSurface;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AquaticSimulation.BP_AquaticSimulation_C.UpdateInteraction
struct ABP_AquaticSimulation_C_UpdateInteraction_Params
{
	class UCanvas*                                     Canvas;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   ScreenSize;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Interaction;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DeltaTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AquaticSimulation.BP_AquaticSimulation_C.GetRenderTarget
struct ABP_AquaticSimulation_C_GetRenderTarget_Params
{
	int                                                NumFramesOld;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                      HeightRT;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AquaticSimulation.BP_AquaticSimulation_C.UserConstructionScript
struct ABP_AquaticSimulation_C_UserConstructionScript_Params
{
};

// Function BP_AquaticSimulation.BP_AquaticSimulation_C.ReceiveBeginPlay
struct ABP_AquaticSimulation_C_ReceiveBeginPlay_Params
{
};

// Function BP_AquaticSimulation.BP_AquaticSimulation_C.ReceiveTick
struct ABP_AquaticSimulation_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AquaticSimulation.BP_AquaticSimulation_C.UpdateTransform
struct ABP_AquaticSimulation_C_UpdateTransform_Params
{
};

// Function BP_AquaticSimulation.BP_AquaticSimulation_C.ExecuteUbergraph_BP_AquaticSimulation
struct ABP_AquaticSimulation_C_ExecuteUbergraph_BP_AquaticSimulation_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
