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

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.ChooseMaxWalkSpeed
struct ABP_GroundAnimalBase_C_ChooseMaxWalkSpeed_Params
{
	float                                              MaxWalkSpeed;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.InitiateCombat
struct ABP_GroundAnimalBase_C_InitiateCombat_Params
{
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.GetBlackboardValues_RestState
struct ABP_GroundAnimalBase_C_GetBlackboardValues_RestState_Params
{
	TEnumAsByte<BP_Enum_RestState_EBP_Enum_RestState>  RestState;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.GetBlackboardValues_Action
struct ABP_GroundAnimalBase_C_GetBlackboardValues_Action_Params
{
	TEnumAsByte<E_Husbandry_Action_E_Husbandry_Action> Action;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.GetBlackboardValues_DefenseState
struct ABP_GroundAnimalBase_C_GetBlackboardValues_DefenseState_Params
{
	TEnumAsByte<BP_Enum_DefenseState_EBP_Enum_DefenseState> DefenseState;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.GetBlackboardValues_FeedingBehavior
struct ABP_GroundAnimalBase_C_GetBlackboardValues_FeedingBehavior_Params
{
	TEnumAsByte<BP_Enum_FeedingBehavior_EBP_Enum_FeedingBehavior> FeedingBehavior;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.GetBlackboardValues_EngageBehavior
struct ABP_GroundAnimalBase_C_GetBlackboardValues_EngageBehavior_Params
{
	TEnumAsByte<BP_Enum_GroundEngageBehavior_EBP_Enum_GroundEngageBehavior> EngageBehavior;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.GetBlackboardValues_BiggestNeed
struct ABP_GroundAnimalBase_C_GetBlackboardValues_BiggestNeed_Params
{
	TEnumAsByte<BP_Enum_GroundNaturalBehaviors_EBP_Enum_GroundNaturalBehaviors> BiggestNeed;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.GetBlackboardValues_RoamBehavior
struct ABP_GroundAnimalBase_C_GetBlackboardValues_RoamBehavior_Params
{
	TEnumAsByte<BP_Enum_AIRoamBehavior_EBP_Enum_AIRoamBehavior> RoamBehavior;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.GetBlackboardValues_AIState
struct ABP_GroundAnimalBase_C_GetBlackboardValues_AIState_Params
{
	TEnumAsByte<BP_Enum_AIState_EBP_Enum_AIState>      AIState;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.SetBlackboardValues_RestState
struct ABP_GroundAnimalBase_C_SetBlackboardValues_RestState_Params
{
	TEnumAsByte<BP_Enum_RestState_EBP_Enum_RestState>  RestState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.SetBlackboardValues_Action
struct ABP_GroundAnimalBase_C_SetBlackboardValues_Action_Params
{
	TEnumAsByte<E_Husbandry_Action_E_Husbandry_Action> Action;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.SetBlackboardValues_DefenseState
struct ABP_GroundAnimalBase_C_SetBlackboardValues_DefenseState_Params
{
	TEnumAsByte<BP_Enum_DefenseState_EBP_Enum_DefenseState> DefenseState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.SetBlackboardValues_FeedingBehavior
struct ABP_GroundAnimalBase_C_SetBlackboardValues_FeedingBehavior_Params
{
	TEnumAsByte<BP_Enum_FeedingBehavior_EBP_Enum_FeedingBehavior> FeedingBehavior;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.SetBlackboardValues_EngageBehavior
struct ABP_GroundAnimalBase_C_SetBlackboardValues_EngageBehavior_Params
{
	TEnumAsByte<BP_Enum_GroundEngageBehavior_EBP_Enum_GroundEngageBehavior> EngageBehavior;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.SetBlackboardValues_BiggestNeed
struct ABP_GroundAnimalBase_C_SetBlackboardValues_BiggestNeed_Params
{
	TEnumAsByte<BP_Enum_GroundNaturalBehaviors_EBP_Enum_GroundNaturalBehaviors> BiggestNeed;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.SetBlackboardValues_RoamBehavior
struct ABP_GroundAnimalBase_C_SetBlackboardValues_RoamBehavior_Params
{
	TEnumAsByte<BP_Enum_AIRoamBehavior_EBP_Enum_AIRoamBehavior> RoamBehavior;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.SetBlackboardValues_AIState
struct ABP_GroundAnimalBase_C_SetBlackboardValues_AIState_Params
{
	TEnumAsByte<BP_Enum_AIState_EBP_Enum_AIState>      AIState;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.GetBlackboardValues_RunMode
struct ABP_GroundAnimalBase_C_GetBlackboardValues_RunMode_Params
{
	TEnumAsByte<BP_Enum_AI_RunMode_EBP_Enum_AI_RunMode> RunMode;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.SetBlackboardValues_RunMode
struct ABP_GroundAnimalBase_C_SetBlackboardValues_RunMode_Params
{
	TEnumAsByte<BP_Enum_AI_RunMode_EBP_Enum_AI_RunMode> RunMode;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.GetBlackboardValues_Int
struct ABP_GroundAnimalBase_C_GetBlackboardValues_Int_Params
{
	TEnumAsByte<BP_Enum_Animal_BlackboardInt_EBP_Enum_Animal_BlackboardInt> BlackboardInt;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                IntValue;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.GetBlackboardValues_Float
struct ABP_GroundAnimalBase_C_GetBlackboardValues_Float_Params
{
	TEnumAsByte<BP_Enum_Animal_BlackboardFloat_EBP_Enum_Animal_BlackboardFloat> BlackboardFloat;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FloatValue;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.GetBlackboardValues_Vector
struct ABP_GroundAnimalBase_C_GetBlackboardValues_Vector_Params
{
	TEnumAsByte<BP_Enum_Animal_BlackboardVector_EBP_Enum_Animal_BlackboardVector> BlackboardVector;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     VectorValue;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.SetBlackboardValues_Int
struct ABP_GroundAnimalBase_C_SetBlackboardValues_Int_Params
{
	TEnumAsByte<BP_Enum_Animal_BlackboardInt_EBP_Enum_Animal_BlackboardInt> BlackboardInt;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.SetBlackboardValues_Float
struct ABP_GroundAnimalBase_C_SetBlackboardValues_Float_Params
{
	TEnumAsByte<BP_Enum_Animal_BlackboardFloat_EBP_Enum_Animal_BlackboardFloat> BlackboardFloat;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.SetBlackboardValues_Vector
struct ABP_GroundAnimalBase_C_SetBlackboardValues_Vector_Params
{
	TEnumAsByte<BP_Enum_Animal_BlackboardVector_EBP_Enum_Animal_BlackboardVector> BlackboardVector;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.GetBlackboardValues_Boolean
struct ABP_GroundAnimalBase_C_GetBlackboardValues_Boolean_Params
{
	TEnumAsByte<BP_Enum_Animal_BlackboardBoolean_EBP_Enum_Animal_BlackboardBoolean> BlackboardBoolean;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               BooleanValue;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.GetBlackboardValues_Object
struct ABP_GroundAnimalBase_C_GetBlackboardValues_Object_Params
{
	TEnumAsByte<BP_Enum_Animal_BlackboardObject_EBP_Enum_Animal_BlackboardObject> BlackboardObject;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     ObjectValue;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.SetBlackboardValues_Boolean
struct ABP_GroundAnimalBase_C_SetBlackboardValues_Boolean_Params
{
	TEnumAsByte<BP_Enum_Animal_BlackboardBoolean_EBP_Enum_Animal_BlackboardBoolean> BlackboardBoolean;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.SetBlackboardValues_Object
struct ABP_GroundAnimalBase_C_SetBlackboardValues_Object_Params
{
	TEnumAsByte<BP_Enum_Animal_BlackboardObject_EBP_Enum_Animal_BlackboardObject> BlackboardObject;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     Object;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.CalculateMaxWalkSpeed
struct ABP_GroundAnimalBase_C_CalculateMaxWalkSpeed_Params
{
	float                                              WalkSpeed;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxWalkSpeed;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.AnimalBleed
struct ABP_GroundAnimalBase_C_AnimalBleed_Params
{
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.SetCurrentHP
struct ABP_GroundAnimalBase_C_SetCurrentHP_Params
{
	float                                              CurrentHP;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.fnAnimRest_ChooseIndex
struct ABP_GroundAnimalBase_C_fnAnimRest_ChooseIndex_Params
{
	int                                                Animation_Index;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.fnAnimDrink_ChooseIndex
struct ABP_GroundAnimalBase_C_fnAnimDrink_ChooseIndex_Params
{
	int                                                Animation_Index;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.fnAnimEat_ChooseIndex
struct ABP_GroundAnimalBase_C_fnAnimEat_ChooseIndex_Params
{
	int                                                Animation_Index;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.fnAnimHit_ChooseIndex
struct ABP_GroundAnimalBase_C_fnAnimHit_ChooseIndex_Params
{
	int                                                Animation_Index;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.fnAnimDeath_ChooseIndex
struct ABP_GroundAnimalBase_C_fnAnimDeath_ChooseIndex_Params
{
	int                                                Animation_Index;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.fnAnimAttack_ChooseIndex
struct ABP_GroundAnimalBase_C_fnAnimAttack_ChooseIndex_Params
{
	int                                                Animation_Index;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.fnAnimEngage_ChooseIndex
struct ABP_GroundAnimalBase_C_fnAnimEngage_ChooseIndex_Params
{
	int                                                Animation_Index;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.fnAnimIdle_ChooseIndex
struct ABP_GroundAnimalBase_C_fnAnimIdle_ChooseIndex_Params
{
	int                                                Animation_Index;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.fnCheckForActorInMelee
struct ABP_GroundAnimalBase_C_fnCheckForActorInMelee_Params
{
	bool                                               Actor_Found;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.fnAddComponents
struct ABP_GroundAnimalBase_C_fnAddComponents_Params
{
	bool                                               LookForMate;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               NaturalDeath;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UBP_Comp_LookForMate_C*                      LookForMate_Ref;                                           // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_Comp_NaturalDeath_C*                     NaturalDeath_Ref;                                          // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.fnSetEngageParams
struct ABP_GroundAnimalBase_C_fnSetEngageParams_Params
{
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.fnDisengage
struct ABP_GroundAnimalBase_C_fnDisengage_Params
{
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.fnSetEngageTarget
struct ABP_GroundAnimalBase_C_fnSetEngageTarget_Params
{
	class AActor*                                      SensedActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.fnDoMeleeDamage
struct ABP_GroundAnimalBase_C_fnDoMeleeDamage_Params
{
	struct FName                                       Socket;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.fnSetRoamBehavior
struct ABP_GroundAnimalBase_C_fnSetRoamBehavior_Params
{
	TEnumAsByte<BP_Enum_AIRoamBehavior_EBP_Enum_AIRoamBehavior> NewRoamBehavior;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.fnCheckForStimulus
struct ABP_GroundAnimalBase_C_fnCheckForStimulus_Params
{
	TArray<struct FAIStimulus>                         Stimuli;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               Detected_Something;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.fnMakeMovementNoise
struct ABP_GroundAnimalBase_C_fnMakeMovementNoise_Params
{
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.UserConstructionScript
struct ABP_GroundAnimalBase_C_UserConstructionScript_Params
{
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.AnimPhysicsBlend__FinishedFunc
struct ABP_GroundAnimalBase_C_AnimPhysicsBlend__FinishedFunc_Params
{
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.AnimPhysicsBlend__UpdateFunc
struct ABP_GroundAnimalBase_C_AnimPhysicsBlend__UpdateFunc_Params
{
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.EventCheckPerception
struct ABP_GroundAnimalBase_C_EventCheckPerception_Params
{
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.BndEvt__AIPerception_K2Node_ComponentBoundEvent_0_ActorPerceptionUpdatedDelegate__DelegateSignature
struct ABP_GroundAnimalBase_C_BndEvt__AIPerception_K2Node_ComponentBoundEvent_0_ActorPerceptionUpdatedDelegate__DelegateSignature_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAIStimulus                                 Stimulus;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.EventPlayAnimation
struct ABP_GroundAnimalBase_C_EventPlayAnimation_Params
{
	TEnumAsByte<BP_Enum_AnimType_EBP_Enum_AnimType>    AnimationType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.FarOptimization
struct ABP_GroundAnimalBase_C_FarOptimization_Params
{
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.NoneOptimization
struct ABP_GroundAnimalBase_C_NoneOptimization_Params
{
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.MediumOptimization
struct ABP_GroundAnimalBase_C_MediumOptimization_Params
{
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.CloseOptimization
struct ABP_GroundAnimalBase_C_CloseOptimization_Params
{
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.DisableNPC
struct ABP_GroundAnimalBase_C_DisableNPC_Params
{
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.EnableNPC
struct ABP_GroundAnimalBase_C_EnableNPC_Params
{
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.ReceiveTick
struct ABP_GroundAnimalBase_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.ReceiveBeginPlay
struct ABP_GroundAnimalBase_C_ReceiveBeginPlay_Params
{
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.EventDead
struct ABP_GroundAnimalBase_C_EventDead_Params
{
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.EventTookDamage
struct ABP_GroundAnimalBase_C_EventTookDamage_Params
{
	class AActor*                                      DamagedActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Damage;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDamageType*                                 DamageType;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                                 InstigatedBy;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      DamageCauser;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.EventAggroTimer
struct ABP_GroundAnimalBase_C_EventAggroTimer_Params
{
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.EventCheckAggro
struct ABP_GroundAnimalBase_C_EventCheckAggro_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.EventPlaySound
struct ABP_GroundAnimalBase_C_EventPlaySound_Params
{
	class USoundBase*                                  Sound_Cue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Volume_Multiplier;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Pitch_Multiplier;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Start_Time;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundAttenuation*                           Attenuation_Settings;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundConcurrency*                           Concurrency_Settings;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.CheckPhysicsState
struct ABP_GroundAnimalBase_C_CheckPhysicsState_Params
{
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.BlendPhysics
struct ABP_GroundAnimalBase_C_BlendPhysics_Params
{
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.StopAttackFunction
struct ABP_GroundAnimalBase_C_StopAttackFunction_Params
{
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.AttackTrace
struct ABP_GroundAnimalBase_C_AttackTrace_Params
{
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.StartAttackFunction
struct ABP_GroundAnimalBase_C_StartAttackFunction_Params
{
	bool                                               Timer;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FName                                       Socket;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.AnimNotify_LayEnd
struct ABP_GroundAnimalBase_C_AnimNotify_LayEnd_Params
{
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.AnimNotify_LayStart
struct ABP_GroundAnimalBase_C_AnimNotify_LayStart_Params
{
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.AnimNotify_RestEnd
struct ABP_GroundAnimalBase_C_AnimNotify_RestEnd_Params
{
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.AnimNotify_RestStart
struct ABP_GroundAnimalBase_C_AnimNotify_RestStart_Params
{
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.AnimNotify_DrinkEnd
struct ABP_GroundAnimalBase_C_AnimNotify_DrinkEnd_Params
{
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.AnimNotify_DrinkStart
struct ABP_GroundAnimalBase_C_AnimNotify_DrinkStart_Params
{
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.AnimNotify_EatEnd
struct ABP_GroundAnimalBase_C_AnimNotify_EatEnd_Params
{
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.AnimNotify_EatStart
struct ABP_GroundAnimalBase_C_AnimNotify_EatStart_Params
{
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.AnimNotify_HitEnd
struct ABP_GroundAnimalBase_C_AnimNotify_HitEnd_Params
{
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.AnimNotify_HitStart
struct ABP_GroundAnimalBase_C_AnimNotify_HitStart_Params
{
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.AnimNotify_DeathEnd
struct ABP_GroundAnimalBase_C_AnimNotify_DeathEnd_Params
{
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.AnimNotify_DeathStart
struct ABP_GroundAnimalBase_C_AnimNotify_DeathStart_Params
{
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.AnimNotify_AttackEnd
struct ABP_GroundAnimalBase_C_AnimNotify_AttackEnd_Params
{
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.AnimNotify_AttackStart
struct ABP_GroundAnimalBase_C_AnimNotify_AttackStart_Params
{
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.AnimNotify_EngageEnd
struct ABP_GroundAnimalBase_C_AnimNotify_EngageEnd_Params
{
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.AnimNotify_EngageStart
struct ABP_GroundAnimalBase_C_AnimNotify_EngageStart_Params
{
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.AnimNotify_IdleEnd
struct ABP_GroundAnimalBase_C_AnimNotify_IdleEnd_Params
{
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.AnimNotify_IdleStart
struct ABP_GroundAnimalBase_C_AnimNotify_IdleStart_Params
{
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.EventEngagementEnd
struct ABP_GroundAnimalBase_C_EventEngagementEnd_Params
{
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.EventEngagementStart
struct ABP_GroundAnimalBase_C_EventEngagementStart_Params
{
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.BreedingEnd
struct ABP_GroundAnimalBase_C_BreedingEnd_Params
{
	bool                                               Spawning_Offspring;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.BreedingStart
struct ABP_GroundAnimalBase_C_BreedingStart_Params
{
	bool                                               Spawning_Offspring;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.AnimalTookDamage
struct ABP_GroundAnimalBase_C_AnimalTookDamage_Params
{
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.AnimalHideEnd
struct ABP_GroundAnimalBase_C_AnimalHideEnd_Params
{
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.AIDir_ReachedTarget
struct ABP_GroundAnimalBase_C_AIDir_ReachedTarget_Params
{
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.Laydown_End
struct ABP_GroundAnimalBase_C_Laydown_End_Params
{
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.Laydown_Start
struct ABP_GroundAnimalBase_C_Laydown_Start_Params
{
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.DayCycle_GoingToRest
struct ABP_GroundAnimalBase_C_DayCycle_GoingToRest_Params
{
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.DayCycle_RestEnd
struct ABP_GroundAnimalBase_C_DayCycle_RestEnd_Params
{
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.DayCycle_RestStart
struct ABP_GroundAnimalBase_C_DayCycle_RestStart_Params
{
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.MovementObstruction_Relocated
struct ABP_GroundAnimalBase_C_MovementObstruction_Relocated_Params
{
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.MovementObstruction_Stuck
struct ABP_GroundAnimalBase_C_MovementObstruction_Stuck_Params
{
};

// Function BP_GroundAnimalBase.BP_GroundAnimalBase_C.ExecuteUbergraph_BP_GroundAnimalBase
struct ABP_GroundAnimalBase_C_ExecuteUbergraph_BP_GroundAnimalBase_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
