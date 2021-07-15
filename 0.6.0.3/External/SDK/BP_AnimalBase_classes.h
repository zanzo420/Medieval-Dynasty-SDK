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

// BlueprintGeneratedClass BP_AnimalBase.BP_AnimalBase_C
// 0x03B8 (FullSize[0x0870] - InheritedSize[0x04B8])
class ABP_AnimalBase_C : public ACharacter
{
public:
	unsigned char                                      UnknownData_5EVT[0x8];                                     // 0x04B8(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x04C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UAudioComponent*                             StaminaVoice;                                              // 0x04C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_AnimalRelationsComponent_C*              BP_AnimalRelationsComponent;                               // 0x04D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_AnimalStatsComponent_C*                  BP_AnimalStatsComponent;                                   // 0x04D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_BoostComponent_C*                        BP_BoostComponent;                                         // 0x04E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_AquaticBuoyancy_C*                       BP_AquaticBoyuancy;                                        // 0x04E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                             ArrowAI;                                                   // 0x04F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                               Engaged;                                                   // 0x04F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ICHK[0x7];                                     // 0x04F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ABP_SystemsManager_C*                        SystemsManagerReference;                                   // 0x0500(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FDataTableRowHandle                         AnimalHandler;                                             // 0x0508(0x0010) (Edit, BlueprintVisible, NoDestructor)
	TEnumAsByte<E_Ownership_E_Ownership>               Ownership;                                                 // 0x0518(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	unsigned char                                      UnknownData_27G0[0x7];                                     // 0x0519(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FName>                               ActorTags;                                                 // 0x0520(0x0010) (Edit, BlueprintVisible)
	TArray<struct FName>                               AdditionalTags;                                            // 0x0530(0x0010) (Edit, BlueprintVisible)
	bool                                               Resting;                                                   // 0x0540(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Awake;                                                     // 0x0541(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               AllowDamage;                                               // 0x0542(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_LY6S[0x5];                                     // 0x0543(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      DamageCauser;                                              // 0x0548(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AnimalDamage;                                              // 0x0550(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                               Attacking;                                                 // 0x0554(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               CanTakeDamage;                                             // 0x0555(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Breeding;                                                  // 0x0556(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_OGMF[0x1];                                     // 0x0557(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBP_Struct_AnimalBase_SimDetails            Simulation_Details;                                        // 0x0558(0x001C) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DamageAmount;                                              // 0x0574(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               InteractableLife;                                          // 0x0578(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_4HJD[0x7];                                     // 0x0579(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       InteractActionLifeText;                                    // 0x0580(0x0018) (Edit, BlueprintVisible)
	bool                                               InteractableDead;                                          // 0x0598(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_O4TL[0x7];                                     // 0x0599(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       InteractActionDeadText;                                    // 0x05A0(0x0018) (Edit, BlueprintVisible)
	class UAnimMontage*                                InteractAnimationMontageLife;                              // 0x05B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                InteractAnimationMontageDead;                              // 0x05C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UseInteractTimeLife;                                       // 0x05C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_UPRS[0x3];                                     // 0x05C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TimingTimeLife;                                            // 0x05CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UseInteractTimeDead;                                       // 0x05D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_D5EL[0x3];                                     // 0x05D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TimingTimeDead;                                            // 0x05D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CheckToolInInventoryLife;                                  // 0x05D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_Tools_E_Tools>                       InteractToolTypeLife;                                      // 0x05D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_MZUI[0x6];                                     // 0x05DA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ABP_SpawnPointWildAnimal_C*                  SpawnLocation;                                             // 0x05E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                               CheckToolInInventoryDead;                                  // 0x05E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_Tools_E_Tools>                       InteractToolTypeDead;                                      // 0x05E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               SpawnDead;                                                 // 0x05EA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	unsigned char                                      UnknownData_VV75[0x1];                                     // 0x05EB(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SkillForKillValue;                                         // 0x05EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SkillForSkinningValue;                                     // 0x05F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SkillForHusbandryValue;                                    // 0x05F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_BaseCharacter_C*                         InteractedCharacter;                                       // 0x05F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsStuned;                                                  // 0x0600(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_0WKW[0x3];                                     // 0x0601(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                FearFactor;                                                // 0x0604(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsFear;                                                    // 0x0608(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_26PX[0x7];                                     // 0x0609(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                FleeingTimer;                                              // 0x0610(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int                                                FearFactorIncreaser;                                       // 0x0618(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     SpawnPosition;                                             // 0x061C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_MovementMode_E_MovementMode>         PrevMovementMode;                                          // 0x0628(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_MovementMode_E_MovementMode>         MovementMode;                                              // 0x0629(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_RotationMode_E_RotationMode>         RotationMode;                                              // 0x062A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_4N66[0x1];                                     // 0x062B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRotator                                    JumpRotation;                                              // 0x062C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                                    LookingRotation;                                           // 0x0638(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_CardinalDirection_E_CardinalDirection> CardinalDirection;                                         // 0x0644(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Gait_E_Gait>                         GaitType;                                                  // 0x0645(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_643U[0x2];                                     // 0x0646(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRotator                                    LastVelocityRotation;                                      // 0x0648(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              RotationOffset;                                            // 0x0654(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RotationRateMultiplier;                                    // 0x0658(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    AnimalRotation;                                            // 0x065C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              AimYawRate;                                                // 0x0668(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PrevAimYaw;                                                // 0x066C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AimYawDelta;                                               // 0x0670(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     MovementInput;                                             // 0x0674(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               HasMovementInput;                                          // 0x0680(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_8YTR[0x3];                                     // 0x0681(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRotator                                    LastMovementInputRotation;                                 // 0x0684(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              VelocityDifference;                                        // 0x0690(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsMoving;                                                  // 0x0694(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_RH55[0x3];                                     // 0x0695(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Direction;                                                 // 0x0698(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    TargetRotation;                                            // 0x069C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              CharacterRotationDifference;                               // 0x06A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_KQ0I[0x4];                                     // 0x06AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                BleedTimerHandle;                                          // 0x06B0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_TechnologyTypes_E_TechnologyTypes>   Technology_ForKill;                                        // 0x06B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_JON2[0x3];                                     // 0x06B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ValueTechnology_ForKill;                                   // 0x06BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_TechnologyTypes_E_TechnologyTypes>   Technology_ForSkinning;                                    // 0x06C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_U7TX[0x3];                                     // 0x06C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ValueTechnology_ForSkinning;                               // 0x06C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_TechnologyTypes_E_TechnologyTypes>   Technology_ForMilkingAndSheering;                          // 0x06C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_94YZ[0x3];                                     // 0x06C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ValueTechnology_ForMilkingAndSheering;                     // 0x06CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                              ImpaledItems;                                              // 0x06D0(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	struct FTimerHandle                                BleedTimerCancel;                                          // 0x06E0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                              BleedDamage;                                               // 0x06E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                StuckCounter;                                              // 0x06EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ReputationPunishmentForKill;                               // 0x06F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_8IUF[0x4];                                     // 0x06F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<class AActor*, struct FST_CauserTimer>        DamageCausers;                                             // 0x06F8(0x0050) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	struct FTimerHandle                                DamageCausersHandle;                                       // 0x0748(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                               SpawnedBlood;                                              // 0x0750(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_6NM0[0x3];                                     // 0x0751(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              IKFPSLimit;                                                // 0x0754(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              IKFPSRestore;                                              // 0x0758(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               AdrenalineRush;                                            // 0x075C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_2N6C[0x3];                                     // 0x075D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UGI_MedievalDynasty_C*                       GameInstanceReference;                                     // 0x0760(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                                 AIControllerRef;                                           // 0x0768(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_Animal                                  AnimalData;                                                // 0x0770(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                               Ragdoll;                                                   // 0x0808(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Dead;                                                      // 0x0809(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_RKZ0[0x2];                                     // 0x080A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Variation;                                                 // 0x080C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FTimerHandle                                FallingTimerHandle;                                        // 0x0810(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                               HasLanded;                                                 // 0x0818(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_28WP[0x3];                                     // 0x0819(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FallZVelocity;                                             // 0x081C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ShouldTakeFallDamage;                                      // 0x0820(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_RKCK[0x3];                                     // 0x0821(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FallVelocityThreshold;                                     // 0x0824(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FallDamageToApply;                                         // 0x0828(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CanTakeFallDamage;                                         // 0x082C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_VHK6[0x3];                                     // 0x082D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       VoiceSocket;                                               // 0x0830(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MountedWalkSpeed;                                          // 0x0838(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MountedRunningSpeed;                                       // 0x083C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MountedSprintingSpeed;                                     // 0x0840(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsInWater;                                                 // 0x0844(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ZNPX[0x3];                                     // 0x0845(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              InWaterSpeedReduction;                                     // 0x0848(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              EncumberedSpeedMultiplier;                                 // 0x084C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              NightRiderTalentValue;                                     // 0x0850(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_11CH[0x4];                                     // 0x0854(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBehaviorTree*                               MountBehaviorTree;                                         // 0x0858(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector>                             Waypoints;                                                 // 0x0860(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AnimalBase.BP_AnimalBase_C");
		return ptr;
	}



	void GetMountCameraRotation(struct FRotator* Rotation);
	void GetSprintKeyDown(bool* IsSprintKeyDown);
	void GetShouldSprint(bool* ShouldSprint);
	bool CanMountActor();
	bool CanMountAtPosition(const struct FVector& riderLocation, AdsMountingSystem_EMountingDirection desiredMountingPosition);
	bool CanMountPawn();
	bool ClearSeatAtIndex(int seatIndex);
	bool ClearSeatById(int seatId);
	bool ClearSeatByIndex(int seatIndex);
	bool FindAvailableMountingPosition(AdsMountingSystem_EMountingDirection Position, const struct FVector& riderLocation, struct FSeatData* outSeatData, int* outSeatIndex);
	int GetCurrentRiderCount();
	AdsMountingSystem_EMountingDirection GetDismountDirection(class APawn* rider);
	class APawn* GetDriver();
	int GetMaxRiders();
	class UMountablePawnComponent* GetMountablePawnComponent();
	class UMeshComponent* GetMountBody(int seatId);
	AdsMountingSystem_EMountingDirection GetRelativeDismountDirection(class APawn* rider);
	AdsMountingSystem_EMountingDirection GetRelativeMountDirection(class APawn* rider);
	AdsMountingSystem_EMountingDirection GetRelativePositionToMount(class APawn* rider);
	bool GetSeatDataAtIndex(int Index, struct FSeatData* SeatData);
	bool GetSeatDataById(int seatId, struct FSeatData* SeatData);
	bool HasDriver();
	bool HasPassangers();
	bool IsDriverReady();
	bool IsDriverSeat(const struct FSeatData& SeatData);
	bool IsMountableActor();
	bool IsMountableByPawn(class APawn* newRider);
	bool IsMountablePawn();
	bool IsSeatOccupiedAtIndex(int seatIndex);
	bool IsSeatOccupiedById(int seatId);
	bool MustHaveDriver();
	bool OnRiderFinishedChangingSeats(class AActor* rider, int newSeatId, int oldSeatId);
	bool OnRiderFinishedDismounting(class AActor* dismountedActor, int seatId);
	bool OnRiderFinishedMounting(class AActor* mountedActor, int seatId);
	bool SetSeatOccupied(int seatIndex, class APawn* rider);
	bool SetSeatOccupiedAtIndex(int seatIndex, class APawn* rider);
	bool SetSeatOccupiedById(int seatId, class APawn* rider);
	class AController* GetCharacterController();
	class AActor* GetCharacterMount();
	class APawn* GetCharacterPawn();
	bool IsCharacterMountable();
	bool IsMounted();
	bool PerformDismountPawn(class APawn* mountOrRider);
	bool PerformMountPawn(class APawn* mountOrRider);
	bool PrepareToDismount(class AActor* mountOrRider, struct FMountActionResponse* Response);
	bool PrepareToMount(class AActor* mountOrRider, class AActor* linkedActor, struct FMountActionResponse* Response);
	void IsGrabbable(bool* Grabbable);
	void IsItemNeeded(class ABP_BaseCharacter_C* BaseCharacter, bool* CheckItems, bool* Success);
	void GetInteractItem(class ABP_BaseCharacter_C* BaseCharacter, struct FDataTableRowHandle* ItemHandler);
	void IsItemInteractable(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility);
	void GetInteractAdditionalStatus(class ABP_BaseCharacter_C* BaseCharacter, bool* CustomColor, struct FLinearColor* Color, struct FText* Status);
	void IsInteractAdditionalStatus(class ABP_BaseCharacter_C* BaseCharacter, bool* ShowStatus);
	void GetFishData(struct FST_ItemResource* Item, struct FTransform* Transform);
	void GetID(struct FString* ID);
	void GetInteractionDistance(float* Distance);
	void GetOff_HandItem(class ABP_MasterHoldableItem_C** Off_HandItem);
	void GetInteractCondition(class ABP_BaseCharacter_C* BaseCharacter, const struct FHitResult& Hit, float* Condition, bool* CustomText, struct FText* Text, bool* CustomColor, struct FLinearColor* Color);
	void IsInteractCondition(class ABP_BaseCharacter_C* BaseCharacter, bool* CheckCondition);
	void IsToolNeeded(class ABP_BaseCharacter_C* BaseCharacter, bool* CheckTools, bool* Success);
	void GetOwnershipType(TEnumAsByte<E_Ownership_E_Ownership>* Ownership);
	void GetInteractTitle(class ABP_BaseCharacter_C* BaseCharacter, bool* Show, struct FText* Title, bool* ShowAdditionalTitle1, struct FText* AdditionalTitleText1, bool* ShowAdditionalTitle2, struct FText* AdditionalTitleText2);
	void GetInteractResources(class ABP_BaseCharacter_C* BaseCharacter, bool* Show, TArray<struct FST_ItemResource>* Resources);
	void GetFluidType(TEnumAsByte<E_Fluids_E_Fluids>* FuildType);
	void GetInteractTool_UI(class ABP_BaseCharacter_C* BaseCharacter, TEnumAsByte<E_Tools_E_Tools>* Tool, TEnumAsByte<E_BagMode_E_BagMode>* BagMode, TEnumAsByte<E_BuildingModifications_E_BuildingModifications>* BuildingMode);
	void IsToolInteractable_UI(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility);
	void GetNPCInteractTime(float* Time);
	void IsToolInteractable(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility);
	void GetTaskFromActor(struct FST_TaskList* Task);
	void GetInteractIcon(class UTexture2D** Icon);
	void CheckOccupied(class APawn** Character);
	void GetNPCInteractAnimation(TEnumAsByte<E_Sex_E_Sex> Sex, class UAnimMontage** Animation);
	void GetResourceType(TEnumAsByte<E_Resources_E_Resources>* ResourceType);
	void GetHeldItem(class ABP_MasterHoldableItem_C** HeldItem);
	void GetInteractCount(int* Count);
	void GetInteractTool(class ABP_BaseCharacter_C* BaseCharacter, TEnumAsByte<E_Tools_E_Tools>* Tool);
	void GetInteractName(class ABP_BaseCharacter_C* BaseCharacter, struct FText* InteractName);
	void GetInteractAction(struct FText* InteractActionText, struct FText* InteractSecondActionText);
	void IsInteractable(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility, bool* ShowPressUI, bool* ShowTimerUI, bool* ShowOnlyName, float* Time, float* Distance);
	void GetAnimalRowName_BPI(struct FName* SwitchAnimals_RowName);
	void GetAnimalHeight(float* Height);
	void GetAnimalWorldLocation(struct FVector* Location);
	void GetPrice_Sell(int* Price);
	void GetPrice_Buy(int* Price);
	void GetForSale(bool* ForSale);
	void GetInventoryComponent(class UInventoryComponent_C** InventoryComponent);
	void GetSystemManager(class ABP_SystemsManager_C** SystemManager);
	void CheckIsBuilding(const struct FVector& CheckLocation, const struct FVector& Destination, struct FVector* NewLocation);
	void GetFleeingTimer(struct FTimerHandle* FleeingTimer);
	void GetFear(int* FearFactor);
	void GetAnimal(class ABP_AnimalBase_C** AnimalBase);
	void ChangeBehaviorTreeToHusbandry();
	void ChangeBehaviorTreeToMount();
	void OnIsMounted();
	void OnIsMount();
	void ChooseMaxWalkSpeed(float* MaxWalkSpeed);
	void UpdateAnimalMovementSettings();
	void CalculateEncumberedSpeed();
	void AddItems(class ABP_BaseCharacter_C* BaseCharacter);
	void AddDamageCauser(class AActor* DamageCauser);
	void GetDamageCauserTag(class AActor* Actor, struct FName* Tag);
	void UpdateCausersStatus();
	void UpdateCausers();
	void SetHusbandryDataFromSave(const struct FST_SAVE_HusbandryAnimals& HusbandryData);
	void GetHusbandryDataToSave(struct FST_SAVE_HusbandryAnimals* HusbandryData);
	void TeleportTowardMoveLocation(const struct FVector& Goal);
	void ResetStuckCounter();
	void IncreaseStuckCounter(const struct FVector& Goal);
	void LootImpaledItems();
	void OnOwnershipSwap(TEnumAsByte<E_Ownership_E_Ownership> NewOwnership);
	void CalculateMaxWalkSpeed(float WalkSpeed, float* MaxWalkSpeed);
	void SetMaxWalkSpeed(float MaxWalkSpeed);
	void AnimalBleed();
	void SetCurrentHP(float CurrentHP);
	void LimitRotation(float AimYawLimit, float InterpSpeed);
	void OnAnimalRotationModeChanged();
	void OnAnimalGaitModeChanged();
	struct FRotator GetLookingRotation();
	void CalculateEssentialVariables();
	void LookingDirectionWithOffset(float OffsetInterpSpeed, float NE_Angle, float NW_Angle, float SE_Angle, float SW_Angle, float Buffer, struct FRotator* TargetRotation);
	void ChooseVelocity(struct FVector* Velocity);
	float CalculateAnimalRotationRate(float SlowSpeed, float SlowSpeedRate, float FastSpeed, float FastSpeedRate);
	void OnAnimalPawnMovementModeChanged(TEnumAsByte<Engine_EMovementMode> Selection);
	class UAnimInstance* GetAnimInstance();
	void OnAnimalMovementModeChanged();
	void SetAnimalRotation(const struct FRotator& TargetRotation, bool InterpRotation, float InterpSpeed);
	void AddAnimalRotation(const struct FRotator& AddAmount);
	void fnGetAuthority(bool* HasAuthority);
	void UserConstructionScript();
	void UpdateMountCameraFoV(float FieldOfView);
	void Backwards_Axis(float Axis_Value);
	void Left_Axis(float Axis_Value);
	void JumpPressed(const struct FKey& Key);
	void JumpReleased(const struct FKey& Key);
	void MountSpecial();
	void SprintPressed(const struct FKey& Key);
	void SprintReleased(const struct FKey& Key);
	void Right_Axis(float Axis_Value);
	void Down_Axis(float Axis_Value);
	void DismountPressed(const struct FKey& Key);
	void DismountReleased(const struct FKey& Key);
	void MountStop();
	void WalkPressed(const struct FKey& Key);
	void WalkReleased(const struct FKey& Key);
	void SetShouldSprint(bool ShouldSprint);
	void LookAtOnMount(const struct FRotator& Rotation);
	void SetOccupied(class APawn* Character);
	void SetTaskInActor(const struct FST_TaskList& Task);
	void ChangeTaskIsOccupied();
	void ToolInteract(class ABP_BaseCharacter_C* BaseCharacter, const struct FHitResult& Hit, bool UseChunkData, const struct FST_Chunks& ChunkData);
	void IsLookedAt(bool Active);
	void ShowInspectorUI();
	void InteractWithImpaledItem(class ABP_BaseCharacter_C* BaseCharacter);
	void StartAttackFunction(bool Timer, const struct FName& Socket);
	void StopAttackFunction();
	void Remove();
	void CheckDistance(const struct FVector& PlayerLocation);
	void AddItemToHouse();
	void SetFear(int Fear);
	void SetEngageTargetBPI(class AActor* Causer);
	void OnWakeUp();
	void Starving(float HungerDamage);
	void OnSleep();
	void SetAnimalMovementMode_BPI(TEnumAsByte<E_MovementMode_E_MovementMode> MovementMode);
	void SetForSale(bool ForSale);
	void UpdateMountEquipment(bool Unequip, const struct FST_ItemOutfit& ItemData);
	void ReceivePossessed(class AController* NewController);
	void OnSummoned_Close();
	void OnSummoned_Far();
	void OnSummonFinished();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void Interact(class ABP_BaseCharacter_C* BaseCharacter, const struct FHitResult& Hit, bool Timer);
	void InteractStart(class ABP_BaseCharacter_C* BaseCharacter);
	void InteractCancel(class ABP_BaseCharacter_C* BaseCharacter);
	void ReceiveDestroyed();
	void UnpauseBrain();
	void PauseBrain();
	void OnMoveForSkinningFinished();
	void InteractInput(bool KeyDown);
	void PerformActorInteraction();
	void AddImpaledItem(class AActor* ImpaledItem);
	void RemoveImpaledItem(class AActor* ImpaledItem);
	void EnableNPC();
	void DisableNPC();
	void NoneOptimization();
	void CloseOptimization();
	void MediumOptimization();
	void FarOptimization();
	void SetIsInWater(bool InWater, float Intensity);
	void EventDead();
	void DealtDamage(class AActor* Target);
	void ReceivePointDamage(float Damage, class UDamageType* DamageType, const struct FVector& HitLocation, const struct FVector& HitNormal, class UPrimitiveComponent* HitComponent, const struct FName& BoneName, const struct FVector& ShotFromDirection, class AController* InstigatedBy, class AActor* DamageCauser, const struct FHitResult& HitInfo);
	void Splat(const struct FName& EventName, float EmitterTime, int ParticleTime, const struct FVector& Location, const struct FVector& Velocity, const struct FVector& Direction, const struct FVector& Normal, const struct FName& BoneName, class UPhysicalMaterial* PhysMat);
	void BleedCancel();
	void CauseBleeding(float BleedDamage, float BleedDuration);
	void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void EndFalling();
	void StartFalling();
	void FallingEvent();
	void Set_ALS_RotationMode_Event(TEnumAsByte<E_RotationMode_E_RotationMode> New_ALS_RotationMode);
	void Set_Animal_Gait_Event(TEnumAsByte<E_Gait_E_Gait> New_ALS_Gait);
	void K2_OnMovementModeChanged(TEnumAsByte<Engine_EMovementMode> PrevMovementMode, TEnumAsByte<Engine_EMovementMode> NewMovementMode, unsigned char PrevCustomMode, unsigned char NewCustomMode);
	void Set_Animal_MovementMode_Event(TEnumAsByte<E_MovementMode_E_MovementMode> New_ALS_MovementMode);
	void ExecuteUbergraph_BP_AnimalBase(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
