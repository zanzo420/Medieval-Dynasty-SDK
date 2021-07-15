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
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_GroundAnimalBase.BP_GroundAnimalBase_C
// 0x0360 (FullSize[0x0BD0] - InheritedSize[0x0870])
class ABP_GroundAnimalBase_C : public ABP_AnimalBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0870(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UNavigationInvokerComponent*                 NavigationInvoker;                                         // 0x0878(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USphereComponent*                            Collision_Attack;                                          // 0x0880(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UAIPerceptionStimuliSourceComponent*         AIPerceptionStimuliSource;                                 // 0x0888(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UAIPerceptionComponent*                      AIPerception;                                              // 0x0890(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              AnimPhysicsBlend_Alpha_FB06BEF244365EB176C3ADA2DF421403;   // 0x0898(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             AnimPhysicsBlend__Direction_FB06BEF244365EB176C3ADA2DF421403; // 0x089C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_1UHX[0x3];                                     // 0x089D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          AnimPhysicsBlend;                                          // 0x08A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UBehaviorTree*                               BTReference;                                               // 0x08A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<BP_Enum_RoamMode_EBP_Enum_RoamMode>    RoamMode;                                                  // 0x08B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<BP_Enum_AIRoamBehavior_EBP_Enum_AIRoamBehavior> RoamBehavior;                                              // 0x08B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_W7VG[0x6];                                     // 0x08B2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      SensedActor;                                               // 0x08B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAIStimulus                                 RegisteredStimulus;                                        // 0x08C0(0x003C) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                               Sight;                                                     // 0x08FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Sound;                                                     // 0x08FD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Touch;                                                     // 0x08FE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Damage;                                                    // 0x08FF(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                     StimulusLocation;                                          // 0x0900(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<BP_Enum_AIState_EBP_Enum_AIState>      AIState;                                                   // 0x090C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<BP_Enum_StimulusDetected_EBP_Enum_StimulusDetected> StimulusDetected;                                          // 0x090D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_YHEN[0x2];                                     // 0x090E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                NaturalNeedTimerHandle;                                    // 0x0910(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<BP_Enum_GroundNaturalBehaviors_EBP_Enum_GroundNaturalBehaviors> BiggestNeed;                                               // 0x0918(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<BP_Enum_AIRoamBehavior_EBP_Enum_AIRoamBehavior> OriginalRoamBehavior;                                      // 0x0919(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_1K20[0x2];                                     // 0x091A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       EngageActorKey;                                            // 0x091C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<BP_Enum_GroundEngageBehavior_EBP_Enum_GroundEngageBehavior> EngageBehavior;                                            // 0x0924(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_JYSX[0x3];                                     // 0x0925(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       FoundBaitKey;                                              // 0x0928(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FName>                               EngageTags;                                                // 0x0930(0x0010) (Edit, BlueprintVisible)
	bool                                               EngageTagFound;                                            // 0x0940(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TEnumAsByte<BP_Enum_EngageTargetBehavior_EBP_Enum_EngageTargetBehavior> EngageTargetBehavior;                                      // 0x0941(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_UGBL[0x2];                                     // 0x0942(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MaxEngageDistance;                                         // 0x0944(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MovementAcceptanceRadius;                                  // 0x0948(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_2S6M[0x4];                                     // 0x094C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      OverlappedActor;                                           // 0x0950(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      EngagedActor;                                              // 0x0958(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AggroCounter;                                              // 0x0960(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_B4EH[0x4];                                     // 0x0964(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                AggroTimerHandle;                                          // 0x0968(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                               CanEngage;                                                 // 0x0970(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TEnumAsByte<BP_Enum_GroundEngageBehavior_EBP_Enum_GroundEngageBehavior> OriginalEngageBehavior;                                    // 0x0971(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UseHomeBase_;                                              // 0x0972(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_NGI4[0x5];                                     // 0x0973(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ABP_AI_POI_Base_C*                           HomeBase;                                                  // 0x0978(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBP_Struct_GroundAnimal_RandomMovement      RandomMovement;                                            // 0x0980(0x0020) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                AnimIndex;                                                 // 0x09A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               WantsToBreed;                                              // 0x09A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_HDUR[0x3];                                     // 0x09A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      mcValidActor;                                              // 0x09A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      NearbyPartner;                                             // 0x09B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBP_Struct_GroundAnimal_MovementObstruction MovementObstruction;                                       // 0x09B8(0x0020) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBP_Struct_GroundAnimalBehavior_AnimalDetails Behavior_Details;                                          // 0x09D8(0x0024) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBP_Struct_GroundAnimalBehavior_AnimalDetails_Attack Behavior_Details_Attack;                                   // 0x09FC(0x0018) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_0NRV[0x4];                                     // 0x0A14(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBP_Struct_GroundAnimaBehavior_Defend       Behavior_Defend;                                           // 0x0A18(0x0018) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBP_Struct_GroundAnimalBehavior_Location    Behavior_Location;                                         // 0x0A30(0x0018) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBP_Struct_GroundAnimalBehavior_FollowPath  Behavior_FollowPath;                                       // 0x0A48(0x0018) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBP_Struct_GroundAnimalBehavior_POI         Behavior_POI;                                              // 0x0A60(0x0008) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     DefenseLocation;                                           // 0x0A68(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       DefenseStateKey;                                           // 0x0A74(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<BP_Enum_DefenseState_EBP_Enum_DefenseState> DefenseState;                                              // 0x0A7C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_CUCQ[0x3];                                     // 0x0A7D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBP_Struct_GroundAnimal_Animations          IdleAnimations;                                            // 0x0A80(0x0018) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FBP_Struct_GroundAnimal_Animations          EngageAnimations;                                          // 0x0A98(0x0018) (Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                               StopForEngageAnimation;                                    // 0x0AB0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_5JN6[0x7];                                     // 0x0AB1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBP_Struct_GroundAnimal_Animations          AttackAnimations;                                          // 0x0AB8(0x0018) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FBP_Struct_GroundAnimal_Animations          DeathAnimations;                                           // 0x0AD0(0x0018) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FBP_Struct_GroundAnimal_Animations          HitAnimations;                                             // 0x0AE8(0x0018) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FBP_Struct_GroundAnimal_Animations          EatAnimations;                                             // 0x0B00(0x0018) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FBP_Struct_GroundAnimal_Animations          DrinkAnimations;                                           // 0x0B18(0x0018) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FBP_Struct_GroundAnimal_Animations          RestAnimations;                                            // 0x0B30(0x0018) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FBP_Struct_GroundAnimal_Debug               Debug_Animal;                                              // 0x0B48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                RandomAnimation;                                           // 0x0B4C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                                PerceptionCheckHandler;                                    // 0x0B50(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                               SetTextToEngaged;                                          // 0x0B58(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                               SetTextToActive;                                           // 0x0B59(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	unsigned char                                      UnknownData_4QD4[0x6];                                     // 0x0B5A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBP_Struct_GroundAnimal_CurrentMontage      CurrentAnimation;                                          // 0x0B60(0x0018) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                SpecificAnimIndex;                                         // 0x0B78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               AlreadyDead;                                               // 0x0B7C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_C7AV[0x3];                                     // 0x0B7D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBP_Struct_GroundAnimal_Animations          LayingAnimations;                                          // 0x0B80(0x0018) (Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<struct FBP_Struct_GroundAnimal_AnimationDetails> LayingEndAnimations;                                       // 0x0B98(0x0010) (Edit, BlueprintVisible)
	float                                              L_Distance;                                                // 0x0BA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsResting;                                                 // 0x0BAC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsLayingDown;                                              // 0x0BAD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_B8TG[0x2];                                     // 0x0BAE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       AttackTraceSocket;                                         // 0x0BB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                                AttackTimer;                                               // 0x0BB8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                              AttackedActors;                                            // 0x0BC0(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GroundAnimalBase.BP_GroundAnimalBase_C");
		return ptr;
	}



	void ChooseMaxWalkSpeed(float* MaxWalkSpeed);
	void InitiateCombat();
	void GetBlackboardValues_RestState(TEnumAsByte<BP_Enum_RestState_EBP_Enum_RestState>* RestState);
	void GetBlackboardValues_Action(TEnumAsByte<E_Husbandry_Action_E_Husbandry_Action>* Action);
	void GetBlackboardValues_DefenseState(TEnumAsByte<BP_Enum_DefenseState_EBP_Enum_DefenseState>* DefenseState);
	void GetBlackboardValues_FeedingBehavior(TEnumAsByte<BP_Enum_FeedingBehavior_EBP_Enum_FeedingBehavior>* FeedingBehavior);
	void GetBlackboardValues_EngageBehavior(TEnumAsByte<BP_Enum_GroundEngageBehavior_EBP_Enum_GroundEngageBehavior>* EngageBehavior);
	void GetBlackboardValues_BiggestNeed(TEnumAsByte<BP_Enum_GroundNaturalBehaviors_EBP_Enum_GroundNaturalBehaviors>* BiggestNeed);
	void GetBlackboardValues_RoamBehavior(TEnumAsByte<BP_Enum_AIRoamBehavior_EBP_Enum_AIRoamBehavior>* RoamBehavior);
	void GetBlackboardValues_AIState(TEnumAsByte<BP_Enum_AIState_EBP_Enum_AIState>* AIState);
	void SetBlackboardValues_RestState(TEnumAsByte<BP_Enum_RestState_EBP_Enum_RestState> RestState);
	void SetBlackboardValues_Action(TEnumAsByte<E_Husbandry_Action_E_Husbandry_Action> Action);
	void SetBlackboardValues_DefenseState(TEnumAsByte<BP_Enum_DefenseState_EBP_Enum_DefenseState> DefenseState);
	void SetBlackboardValues_FeedingBehavior(TEnumAsByte<BP_Enum_FeedingBehavior_EBP_Enum_FeedingBehavior> FeedingBehavior);
	void SetBlackboardValues_EngageBehavior(TEnumAsByte<BP_Enum_GroundEngageBehavior_EBP_Enum_GroundEngageBehavior> EngageBehavior);
	void SetBlackboardValues_BiggestNeed(TEnumAsByte<BP_Enum_GroundNaturalBehaviors_EBP_Enum_GroundNaturalBehaviors> BiggestNeed);
	void SetBlackboardValues_RoamBehavior(TEnumAsByte<BP_Enum_AIRoamBehavior_EBP_Enum_AIRoamBehavior> RoamBehavior);
	void SetBlackboardValues_AIState(TEnumAsByte<BP_Enum_AIState_EBP_Enum_AIState> AIState);
	void GetBlackboardValues_RunMode(TEnumAsByte<BP_Enum_AI_RunMode_EBP_Enum_AI_RunMode>* RunMode);
	void SetBlackboardValues_RunMode(TEnumAsByte<BP_Enum_AI_RunMode_EBP_Enum_AI_RunMode> RunMode);
	void GetBlackboardValues_Int(TEnumAsByte<BP_Enum_Animal_BlackboardInt_EBP_Enum_Animal_BlackboardInt> BlackboardInt, int* IntValue);
	void GetBlackboardValues_Float(TEnumAsByte<BP_Enum_Animal_BlackboardFloat_EBP_Enum_Animal_BlackboardFloat> BlackboardFloat, float* FloatValue);
	void GetBlackboardValues_Vector(TEnumAsByte<BP_Enum_Animal_BlackboardVector_EBP_Enum_Animal_BlackboardVector> BlackboardVector, struct FVector* VectorValue);
	void SetBlackboardValues_Int(TEnumAsByte<BP_Enum_Animal_BlackboardInt_EBP_Enum_Animal_BlackboardInt> BlackboardInt, int Value);
	void SetBlackboardValues_Float(TEnumAsByte<BP_Enum_Animal_BlackboardFloat_EBP_Enum_Animal_BlackboardFloat> BlackboardFloat, float Value);
	void SetBlackboardValues_Vector(TEnumAsByte<BP_Enum_Animal_BlackboardVector_EBP_Enum_Animal_BlackboardVector> BlackboardVector, const struct FVector& Value);
	void GetBlackboardValues_Boolean(TEnumAsByte<BP_Enum_Animal_BlackboardBoolean_EBP_Enum_Animal_BlackboardBoolean> BlackboardBoolean, bool* BooleanValue);
	void GetBlackboardValues_Object(TEnumAsByte<BP_Enum_Animal_BlackboardObject_EBP_Enum_Animal_BlackboardObject> BlackboardObject, class UObject** ObjectValue);
	void SetBlackboardValues_Boolean(TEnumAsByte<BP_Enum_Animal_BlackboardBoolean_EBP_Enum_Animal_BlackboardBoolean> BlackboardBoolean, bool Value);
	void SetBlackboardValues_Object(TEnumAsByte<BP_Enum_Animal_BlackboardObject_EBP_Enum_Animal_BlackboardObject> BlackboardObject, class UObject* Object);
	void CalculateMaxWalkSpeed(float WalkSpeed, float* MaxWalkSpeed);
	void AnimalBleed();
	void SetCurrentHP(float CurrentHP);
	void fnAnimRest_ChooseIndex(int* Animation_Index);
	void fnAnimDrink_ChooseIndex(int* Animation_Index);
	void fnAnimEat_ChooseIndex(int* Animation_Index);
	void fnAnimHit_ChooseIndex(int* Animation_Index);
	void fnAnimDeath_ChooseIndex(int* Animation_Index);
	void fnAnimAttack_ChooseIndex(int* Animation_Index);
	void fnAnimEngage_ChooseIndex(int* Animation_Index);
	void fnAnimIdle_ChooseIndex(int* Animation_Index);
	void fnCheckForActorInMelee(bool* Actor_Found);
	void fnAddComponents(bool LookForMate, bool NaturalDeath, class UBP_Comp_LookForMate_C** LookForMate_Ref, class UBP_Comp_NaturalDeath_C** NaturalDeath_Ref);
	void fnSetEngageParams();
	void fnDisengage();
	void fnSetEngageTarget(class AActor* SensedActor);
	void fnDoMeleeDamage(const struct FName& Socket);
	void fnSetRoamBehavior(TEnumAsByte<BP_Enum_AIRoamBehavior_EBP_Enum_AIRoamBehavior>* NewRoamBehavior);
	void fnCheckForStimulus(TArray<struct FAIStimulus>* Stimuli, bool* Detected_Something);
	void fnMakeMovementNoise();
	void UserConstructionScript();
	void AnimPhysicsBlend__FinishedFunc();
	void AnimPhysicsBlend__UpdateFunc();
	void EventCheckPerception();
	void BndEvt__AIPerception_K2Node_ComponentBoundEvent_0_ActorPerceptionUpdatedDelegate__DelegateSignature(class AActor* Actor, const struct FAIStimulus& Stimulus);
	void EventPlayAnimation(TEnumAsByte<BP_Enum_AnimType_EBP_Enum_AnimType> AnimationType);
	void FarOptimization();
	void NoneOptimization();
	void MediumOptimization();
	void CloseOptimization();
	void DisableNPC();
	void EnableNPC();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void EventDead();
	void EventTookDamage(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void EventAggroTimer();
	void EventCheckAggro(class AActor* Actor);
	void EventPlaySound(class USoundBase* Sound_Cue, float Volume_Multiplier, float Pitch_Multiplier, float Start_Time, class USoundAttenuation* Attenuation_Settings, class USoundConcurrency* Concurrency_Settings);
	void CheckPhysicsState();
	void BlendPhysics();
	void StopAttackFunction();
	void AttackTrace();
	void StartAttackFunction(bool Timer, const struct FName& Socket);
	void AnimNotify_LayEnd();
	void AnimNotify_LayStart();
	void AnimNotify_RestEnd();
	void AnimNotify_RestStart();
	void AnimNotify_DrinkEnd();
	void AnimNotify_DrinkStart();
	void AnimNotify_EatEnd();
	void AnimNotify_EatStart();
	void AnimNotify_HitEnd();
	void AnimNotify_HitStart();
	void AnimNotify_DeathEnd();
	void AnimNotify_DeathStart();
	void AnimNotify_AttackEnd();
	void AnimNotify_AttackStart();
	void AnimNotify_EngageEnd();
	void AnimNotify_EngageStart();
	void AnimNotify_IdleEnd();
	void AnimNotify_IdleStart();
	void EventEngagementEnd();
	void EventEngagementStart();
	void BreedingEnd(bool Spawning_Offspring);
	void BreedingStart(bool Spawning_Offspring);
	void AnimalTookDamage();
	void AnimalHideEnd();
	void AIDir_ReachedTarget();
	void Laydown_End();
	void Laydown_Start();
	void DayCycle_GoingToRest();
	void DayCycle_RestEnd();
	void DayCycle_RestStart();
	void MovementObstruction_Relocated();
	void MovementObstruction_Stuck();
	void ExecuteUbergraph_BP_GroundAnimalBase(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
