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

// BlueprintGeneratedClass BP_BaseCharacter.BP_BaseCharacter_C
// 0x08D0 (FullSize[0x0D88] - InheritedSize[0x04B8])
class ABP_BaseCharacter_C : public ACharacter
{
public:
	unsigned char                                      UnknownData_1TCX[0x8];                                     // 0x04B8(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x04C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UBP_CombatComponent_C*                       BP_CombatComponent;                                        // 0x04C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMountRiderComponent*                        MountRider;                                                // 0x04D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      Pouch;                                                     // 0x04D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      Backpack;                                                  // 0x04E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                            UI_Inspector;                                              // 0x04E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             Voice;                                                     // 0x04F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      Hair;                                                      // 0x04F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_AquaticInteraction_C*                    BP_AquaticInteractionRightFoot;                            // 0x0500(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_AquaticInteraction_C*                    BP_AquaticInteraction;                                     // 0x0508(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_AquaticInteraction_C*                    BP_AquaticInteractionRightHand;                            // 0x0510(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_AquaticInteraction_C*                    BP_AquaticInteractionLeftHand;                             // 0x0518(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_AquaticBuoyancy_C*                       BP_AquaticBuoyancy;                                        // 0x0520(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_AquaticInteraction_C*                    BP_AquaticInteractionLeftFoot;                             // 0x0528(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_StageInteractionComponent_C*             BP_StageInteractionComponent;                              // 0x0530(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      HatSKM;                                                    // 0x0538(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      Hood;                                                      // 0x0540(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      Torso;                                                     // 0x0548(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      Feet;                                                      // 0x0550(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      Legs;                                                      // 0x0558(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      Hands;                                                     // 0x0560(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_CharacterStatsComponent_C*               BP_CharacterStatsComponent;                                // 0x0568(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_CharacterRelationsComponent_C*           BP_RelationsComponent;                                     // 0x0570(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UInventoryComponent_C*                       InventoryComponent;                                        // 0x0578(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAIPerceptionStimuliSourceComponent*         AIPerceptionStimuliSource;                                 // 0x0580(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              EyesStateTL_Alpha_28990BE2480EC3470C3BB39375E98F99;        // 0x0588(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             EyesStateTL__Direction_28990BE2480EC3470C3BB39375E98F99;   // 0x058C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_LE5W[0x3];                                     // 0x058D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          EyesStateTL;                                               // 0x0590(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Blinking_Alpha_F1DEA1DC4D6B77F0C4F264B3D8DFD46A;           // 0x0598(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Blinking__Direction_F1DEA1DC4D6B77F0C4F264B3D8DFD46A;      // 0x059C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_2HPX[0x3];                                     // 0x059D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Blinking;                                                  // 0x05A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FistFightingTimeline_Alpha_26A602FE4930F8B0303292943852C813; // 0x05A8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             FistFightingTimeline__Direction_26A602FE4930F8B0303292943852C813; // 0x05AC(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_QLUY[0x3];                                     // 0x05AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          FistFightingTimeline;                                      // 0x05B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ShouldSprint;                                              // 0x05B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_3DES[0x3];                                     // 0x05B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DownRate;                                                  // 0x05BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RightRate;                                                 // 0x05C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     MovementInput;                                             // 0x05C4(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AimYawDelta;                                               // 0x05D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AimYawRate;                                                // 0x05D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              VelocityDifference;                                        // 0x05D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CharacterRotationDifference;                               // 0x05DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Direction;                                                 // 0x05E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    CharacterRotation;                                         // 0x05E4(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                                    LookingRotation;                                           // 0x05F0(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                                    LastVelocityRotation;                                      // 0x05FC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                                    LastMovementInputRotation;                                 // 0x0608(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsMoving;                                                  // 0x0614(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               HasMovementInput;                                          // 0x0615(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_Gait_E_Gait>                         GaitType;                                                  // 0x0616(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Stance_E_Stance>                     Stance;                                                    // 0x0617(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_RotationMode_E_RotationMode>         RotationMode;                                              // 0x0618(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_MovementMode_E_MovementMode>         MovementMode;                                              // 0x0619(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_MovementMode_E_MovementMode>         PrevMovementMode;                                          // 0x061A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_CardinalDirection_E_CardinalDirection> CardinalDirection;                                         // 0x061B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    TargetRotation;                                            // 0x061C(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              WalkingSpeed;                                              // 0x0628(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RunningSpeed;                                              // 0x062C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SprintingSpeed;                                            // 0x0630(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CrouchingSpeed;                                            // 0x0634(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WalkingAcceleration;                                       // 0x0638(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RunningAcceleration;                                       // 0x063C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WalkingDeceleration;                                       // 0x0640(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RunningDeceleration;                                       // 0x0644(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WalkingGroundFriction;                                     // 0x0648(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RunningGroundFriction;                                     // 0x064C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    JumpRotation;                                              // 0x0650(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              RotationOffset;                                            // 0x065C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RotationRateMultiplier;                                    // 0x0660(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ForwardAxisValue;                                          // 0x0664(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RightAxisValue;                                            // 0x0668(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_ViewMode_E_ViewMode>                 ViewMode;                                                  // 0x066C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Aiming;                                                    // 0x066D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_02JU[0x2];                                     // 0x066E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       VoiceSocket;                                               // 0x0670(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ShowTraces;                                                // 0x0678(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ShowSettings;                                              // 0x0679(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ZZCD[0x2];                                     // 0x067A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       PelvisBone;                                                // 0x067C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       RagdollPoseSnapshot;                                       // 0x0684(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               RagdollOnGround;                                           // 0x068C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ZOYV[0x3];                                     // 0x068D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     RagdollLocation;                                           // 0x0690(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     RagdollVelocity;                                           // 0x069C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Inventory_Open;                                            // 0x06A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ShouldCrouch;                                              // 0x06A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_8MI1[0x2];                                     // 0x06AA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                SelectedItemID;                                            // 0x06AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  HitReference;                                              // 0x06B0(0x008C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	unsigned char                                      UnknownData_4B2A[0x4];                                     // 0x073C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ABP_MasterHoldableItem_C*                    HeldItem;                                                  // 0x0740(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               BlockEquipping;                                            // 0x0748(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_HL6R[0x7];                                     // 0x0749(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FName>                               Tag;                                                       // 0x0750(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              EncumberedSpeedMultiplier;                                 // 0x0760(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               BuildingMenuOpen;                                          // 0x0764(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_HXC0[0x3];                                     // 0x0765(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ABP_MasterFurniture_Container_C*             ContainerReference;                                        // 0x0768(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_MasterFurniture_Workbench_C*             WorkbenchReference;                                        // 0x0770(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               BlockInteraction;                                          // 0x0778(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_XYDD[0x7];                                     // 0x0779(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ABP_MasterHoldableItem_C*                    Off_HandItem;                                              // 0x0780(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_SystemsManager_C*                        SystemsManagerReference;                                   // 0x0788(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FST_Chunks                                  FieldChunk;                                                // 0x0790(0x0138) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	struct FST_Chunks                                  HitFieldChunk;                                             // 0x08C8(0x0138) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	struct FST_CharacterModules                        DefaultCharacterModules;                                   // 0x0A00(0x0028) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FST_MeshDynamicMaterials>            DynamicMaterials;                                          // 0x0A28(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class ABP_AnimalBase_C*                            InteractedAnimal;                                          // 0x0A38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UseHeadForFullBodyAnimations;                              // 0x0A40(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_8ISZ[0x3];                                     // 0x0A41(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              InteractionCameraSlowDown;                                 // 0x0A44(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InteractionMovementSlowDown;                               // 0x0A48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    UsePawnCameraRelativeRotation;                             // 0x0A4C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FScriptMulticastDelegate                    CameraFadeFinished;                                        // 0x0A58(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<TEnumAsByte<E_Tools_E_Tools>>               TorchUsableToolTypes;                                      // 0x0A68(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FLinearColor                                SkinTone;                                                  // 0x0A78(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsSwooned;                                                 // 0x0A88(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsSprintKeyDown;                                           // 0x0A89(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_WLQB[0x6];                                     // 0x0A8A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ABP_MasterBuilding_C*                        BuildingReference;                                         // 0x0A90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DefaultFPCameraFOV;                                        // 0x0A98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_KUWZ[0x4];                                     // 0x0A9C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnMovementFinished;                                        // 0x0AA0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               Sitting;                                                   // 0x0AB0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Sleeping;                                                  // 0x0AB1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_SleepingDirection_E_SleepingDirection> SleepingDirection;                                         // 0x0AB2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_3SZR[0x5];                                     // 0x0AB3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnSitIdleEntered;                                          // 0x0AB8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnSleepIdleEntered;                                        // 0x0AC8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               UseBedSleepingPose;                                        // 0x0AD8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               CraftingMenuOpen;                                          // 0x0AD9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsCrafting;                                                // 0x0ADA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               InstantBuilding;                                           // 0x0ADB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              EndLoopSectionDuration;                                    // 0x0ADC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CraftingTime;                                              // 0x0AE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               HadToolBeforeCrafting;                                     // 0x0AE4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               SpawnedOffHandAnimItem;                                    // 0x0AE5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               HadOffhandBeforeCrafting;                                  // 0x0AE6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ChoiceMenuOpen;                                            // 0x0AE7(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UAnimMontage*                                CurrentPickingMontage;                                     // 0x0AE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bLockMovement;                                             // 0x0AF0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_FH7Q[0x3];                                     // 0x0AF1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MontageSectionStartTime;                                   // 0x0AF4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               BlockCraftingMenuMovement;                                 // 0x0AF8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               BlockOffhandEquipping;                                     // 0x0AF9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_PS7N[0x2];                                     // 0x0AFA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Oldness;                                                   // 0x0AFC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Ownership_E_Ownership>               Ownership;                                                 // 0x0B00(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	unsigned char                                      UnknownData_88X4[0x7];                                     // 0x0B01(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ABP_MasterHoldableItem_C*                    LeftHandReference;                                         // 0x0B08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_MasterHoldableItem_C*                    RightHandReference;                                        // 0x0B10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FistFightingAlpha;                                         // 0x0B18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsSick;                                                    // 0x0B1C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsInjured;                                                 // 0x0B1D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_4L33[0x2];                                     // 0x0B1E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UUI_Inspector_NPC_C*                         UI_InspectorReference;                                     // 0x0B20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsInIdleState;                                             // 0x0B28(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_IdleStates_E_IdleStates>             IdleState;                                                 // 0x0B29(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CanTakeFallDamage;                                         // 0x0B2A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_7D4I[0x5];                                     // 0x0B2B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                FallingTimerHandle;                                        // 0x0B30(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                              FallVelocity;                                              // 0x0B38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FallVelocityThreshold;                                     // 0x0B3C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ShouldTakeFallDamage;                                      // 0x0B40(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_A490[0x3];                                     // 0x0B41(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FallDamageToApply;                                         // 0x0B44(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      StandingIdlePose;                                          // 0x0B48(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      TalkingIdlePose;                                           // 0x0B49(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      LookingIdlePose;                                           // 0x0B4A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      OtherIdlePose;                                             // 0x0B4B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_L4D8[0x4];                                     // 0x0B4C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnIdleAnimEntered;                                         // 0x0B50(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnIdleAnimFinished;                                        // 0x0B60(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               HasLanded;                                                 // 0x0B70(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsInDialogue;                                              // 0x0B71(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_H9KU[0x6];                                     // 0x0B72(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<TEnumAsByte<E_BodyParts_E_BodyParts>, int>    BodyPartsIndexes;                                          // 0x0B78(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FName                                       MeshesRowName;                                             // 0x0BC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     PhysicsLocation;                                           // 0x0BD0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PhysicsVectorLength;                                       // 0x0BDC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsWorking;                                                 // 0x0BE0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_BagMode_E_BagMode>                   BagMode;                                                   // 0x0BE1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsTakingBreak;                                             // 0x0BE2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_CMXD[0x5];                                     // 0x0BE3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnInteractionFinished;                                     // 0x0BE8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int                                                InteractionSlotIndex;                                      // 0x0BF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               SpawnedMainHandAnimItem;                                   // 0x0BFC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_BuildingModifications_E_BuildingModifications> BuildingMode;                                              // 0x0BFD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_SitDownPosition_E_SitDownPosition>   SitDownPosition;                                           // 0x0BFE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_G49N[0x1];                                     // 0x0BFF(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnSitStarted;                                              // 0x0C00(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnSitFinished;                                             // 0x0C10(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnSleepStarted;                                            // 0x0C20(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnSleepFinished;                                           // 0x0C30(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               IsInDialogue_;                                             // 0x0C40(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsInWater;                                                 // 0x0C41(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_59DY[0x2];                                     // 0x0C42(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              InWaterSpeedReduction;                                     // 0x0C44(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnStartCrafting;                                           // 0x0C48(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnWaitForCrafting;                                         // 0x0C58(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnEndCrafting;                                             // 0x0C68(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnStoppingCrafting;                                        // 0x0C78(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               IsWaitingForCrafting;                                      // 0x0C88(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_YVH8[0x7];                                     // 0x0C89(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      InteractedActor;                                           // 0x0C90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                HairColor;                                                 // 0x0C98(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              IKFPSLimit;                                                // 0x0CA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              IKFPSRestore;                                              // 0x0CAC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnCharacterDeactivated;                                    // 0x0CB0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnCharacterActivated;                                      // 0x0CC0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                              TargetLerpFOV;                                             // 0x0CD0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              StartingLerpFOV;                                           // 0x0CD4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                HeadID;                                                    // 0x0CD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                HairID;                                                    // 0x0CDC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<TEnumAsByte<E_Profession_E_Profession>, struct FST_NPCSeasonClothing> PresetsIDs;                                                // 0x0CE0(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               IsCraftingClosed;                                          // 0x0D30(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               PendingKill;                                               // 0x0D31(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               CaughtPrey;                                                // 0x0D32(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Blinking_;                                                 // 0x0D33(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              BodyMovementAlpha;                                         // 0x0D34(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MountMovementType;                                         // 0x0D38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MountTurnDirection;                                        // 0x0D3C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IgnoreMountingAnimation;                                   // 0x0D40(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IgnoreDismountingAnimation;                                // 0x0D41(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_132Z[0x2];                                     // 0x0D42(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       CurrentBasePresetID;                                       // 0x0D44(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       CurrentProfessionPresetID;                                 // 0x0D4C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DrunkForwardAxis;                                          // 0x0D54(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DrunkRightAxis;                                            // 0x0D58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DrunkForwardTarget;                                        // 0x0D5C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DrunkRightTarget;                                          // 0x0D60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               StartedCrafting;                                           // 0x0D64(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_YRRK[0x3];                                     // 0x0D65(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DrunkForwardDelayDuration;                                 // 0x0D68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DrunkRightDelayDuration;                                   // 0x0D6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Animals_E_Animals>                   MountAnimalType;                                           // 0x0D70(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_HHEU[0x7];                                     // 0x0D71(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnCraftingAnimEnd;                                         // 0x0D78(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BaseCharacter.BP_BaseCharacter_C");
		return ptr;
	}



	class AController* GetCharacterController();
	class AActor* GetCharacterMount();
	class APawn* GetCharacterPawn();
	bool IsCharacterMountable();
	bool IsMounted();
	bool PerformDismountPawn(class APawn* mountOrRider);
	bool PerformMountPawn(class APawn* mountOrRider);
	bool PrepareToDismount(class AActor* mountOrRider, struct FMountActionResponse* Response);
	bool PrepareToMount(class AActor* mountOrRider, class AActor* linkedActor, struct FMountActionResponse* Response);
	bool BeginDismountingPawn(class APawn* dismountedPawn);
	bool BeginMountingPawn(class APawn* newMountPawn);
	TArray<class USkeletalMeshComponent*> GetAllRiderSkeletalMeshes();
	int GetDebugId();
	class UMountRiderComponent* GetMountRiderComponent();
	class UMeshComponent* GetRiderMesh();
	int GetSeatId();
	bool IsDriver();
	bool IsSeatedOnMount();
	bool MoveToMountingLocation(const struct FVector& Location, const struct FRotator& Orientation);
	bool OnChangeToNewSeatCompleted();
	bool OnDismountingPawnFinished(class AActor* oldPawnMount);
	bool OnMountingPawnFinished(class AActor* newMountActor);
	bool OnMoveToMountingLocationCompleted();
	bool PlayDismountingAnimation(AdsMountingSystem_EMountingDirection Position);
	bool PlayMountingAnimation(AdsMountingSystem_EMountingDirection Position);
	bool PlayMoveToSeatAnimation(int currentSeatId, int oldSeatId);
	bool SetRiderCollisionEnabled(bool shouldEnable);
	bool StartPawnDismounting(class AActor* oldPawnMount, struct FMountActionResponse* mountingResponse);
	bool StartPawnMounting(class AActor* newMountActor, class AActor* linkedActor, struct FMountActionResponse* mountingResponse);
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
	void GetInteractName(class ABP_BaseCharacter_C* BaseCharacter, struct FText* InteractName);
	void GetInteractAction(struct FText* InteractActionText, struct FText* InteractSecondActionText);
	void IsInteractable(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility, bool* ShowPressUI, bool* ShowTimerUI, bool* ShowOnlyName, float* Time, float* Distance);
	void GetInteractTool(class ABP_BaseCharacter_C* BaseCharacter, TEnumAsByte<E_Tools_E_Tools>* Tool);
	void GetInteractCount(int* Count);
	void GetInteractionEndpoint(float Distance, struct FVector* EndPoint);
	void GetPhysicsHandle(class UPhysicsHandleComponent** PhysicsHandle);
	void PlayMountAnimation(AdsMountingSystem_EMountingDirection Position, TEnumAsByte<E_MountAnimType_E_MountAnimType> Type, bool* Success);
	void GetProfessionData(struct FST_Profession* ProfessionData);
	void GetIsInDialogue_BPI(bool* IsInDialogue);
	void GetSystemManager(class ABP_SystemsManager_C** SystemManager);
	void GetBaseCharacterWorldLocation(struct FVector* Location);
	void PlayHolsterAnimation(float PlayRate, TEnumAsByte<E_Tools_E_Tools> ToolType, float* Duration, float* TakeOutDuration);
	void GetHeadTransform(struct FTransform* HeadTransform);
	void GetStatsComponent(class UBP_CharacterStatsComponent_C** StatsComponent);
	void GetProfession(TEnumAsByte<E_Profession_E_Profession>* Profession);
	void GetCurrentPickUpAnim(class UAnimMontage** PickUpMontage);
	void GetIsAnyMontageFromMapPlaying(bool* Return_Value);
	void isPlayer(bool* Player, class APC_Player_C** PlayerController);
	void GetCameraViewDirection(struct FVector* Forward);
	void Get_ALS_Stance_BPI(TEnumAsByte<E_Stance_E_Stance>* Stance);
	void GetDirection(float* Direction);
	void OnWaitForCraftingInteraction(class ABP_MasterFurniture_Workbench_C* InteractedWorkbench, const struct FVector& InteractLocation);
	void OnCloseCraftingInteraction(class ABP_MasterFurniture_Workbench_C* InteractedWorkbench, const struct FVector& InteractLocation);
	void UpdateDrunkMovement();
	bool IsWearingCorrectPreset(bool CheckProfession);
	void SnapToSlot(const struct FTransform& TargetTransform, class AActor* InteractedActor);
	void UpdateDefaultFov(float InFieldOfView);
	class UClass* GetAnimClassForNPC();
	void UpdateStitchColor(const struct FST_ColorTable& Dye, class UMaterialInstanceDynamic* Material);
	void UpdateDyeColor(const struct FST_ColorTable& Dye, class UMaterialInstanceDynamic* Material);
	void InitializeComponentMaterials(class USkeletalMeshComponent* SkeletalComponent);
	void GetHeadAndHair(class USkeletalMesh** Head, class USkeletalMesh** Hair);
	void GetHeadAndHairRow(struct FST_NPCMeshesGen* ST_NPCMeshesGen);
	void InitializeMeshFromPreset(class USkeletalMeshComponent* SkeletalComponent, const struct FST_NPCItemColors& Mesh);
	void CombinePresets(TEnumAsByte<E_Profession_E_Profession> Profession, const struct FST_NPCsPresets& BasePreset, struct FName* PresetID, struct FST_NPCsMeshesDyes* Meshes);
	void GetPresetForProfession(TEnumAsByte<E_Profession_E_Profession> Profession, struct FST_NPCsPresets* Preset);
	void SetMeshesFromPreset(TEnumAsByte<E_Profession_E_Profession> Profession, class UClass* NewClass, bool UpdateOnly);
	void GetFPCameraFOV(float* FieldOfView);
	void EquipToolForInteraction(class ABP_MasterHoldableItem_C* Holdable, TEnumAsByte<E_Tools_E_Tools> WantedTool, bool* Success);
	void SetRandomHairColor();
	void OnPlayerOccupy(class ABP_MasterFurniture_C* Furniture);
	void OnDayChanged();
	void SwapHouses(class ABP_MasterBuilding_C* House1, TArray<class ABP_BaseCharacter_C*>* Family1, class ABP_MasterBuilding_C* House2, TArray<class ABP_BaseCharacter_C*>* Family2, bool* Succeed);
	void BindFurnitureEvents(class ABP_MasterFurniture_C* Furniture);
	void UnbindFurnitureEvents(class ABP_MasterFurniture_C* Furniture);
	void OnDestroyFurniture();
	void CheckToSwap(class ABP_MasterBuilding_C* New_House, bool* CanSwap, class ABP_MasterBuilding_C** House1, TArray<class ABP_BaseCharacter_C*>* Family1, class ABP_MasterBuilding_C** House2, TArray<class ABP_BaseCharacter_C*>* Family2);
	void OnEndWorkbenchInteraction(class ABP_MasterFurniture_Workbench_C* InteractedWorkbench, class USceneComponent* InteractComponent, const struct FVector& InteractLocation);
	void On_Start_Workbench_Interaction(class ABP_MasterFurniture_Workbench_C* InteractedWorkbench, class USceneComponent* InteractComponent, const struct FVector& InteractLocation, bool ChangeCamera, bool UseLocation, bool UseLookAt, const struct FRotator& LookAtRotation, bool ResetPitch);
	void GetCrouchingSpeed(float* CrouchingSpeed);
	void SetEarMorph(float Value);
	void VisibilityCheck(const struct FVector& StartVector, float Radius, TArray<TEnumAsByte<Engine_EObjectTypeQuery>> ObjectTypes, class AActor* ActorToIgnore, bool* Observed);
	void UpdateCharacterSpeedByCharacterType();
	void Destroy_NPC();
	void SetNPCDataFromSave(const struct FST_SAVE_NPC& NPCData, bool ResetEQ, const struct FString& SaveGameVersion);
	void GetNPCDataToSave(struct FST_SAVE_NPC* NPCData);
	void OnDialogueEnded();
	void OnDialogueStarted();
	void OnCharacterTypeChanged();
	void OnSeasonChanged();
	void CheckItemForInteraction(class ABP_MasterHoldableItem_C* Holdable, TEnumAsByte<E_Tools_E_Tools> WantedToolType, bool* Success);
	void OnAfterPoseChanged(TEnumAsByte<E_AfterIdlePose_E_AfterIdlePose> AfterIdlePose);
	void SetIsInjured(bool IsInjured);
	void SetIsSick(bool IsSick);
	void SpawnHands();
	void SpawnOffHandItem(class UClass* Class, const struct FTransform& SpawnTransform, Engine_ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, class AActor* Owner, class ABP_BaseCharacter_C* PlayerCharacterReference, int Capacity, float CurrentHP, class APawn* Instigator, class ABP_MasterHoldableItem_C** Output_Get);
	void SpawnHeldItem(class UClass* Class, const struct FTransform& SpawnTransform, Engine_ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, class AActor* Owner, class ABP_BaseCharacter_C* PlayerCharacterReference, int Capacity, float CurrentHP, class APawn* Instigator, class ABP_MasterHoldableItem_C** Output_Get);
	bool CheckIfUsingHands();
	void DestroyOffHandItem();
	void DestroyHeldItem();
	void OnOwnershipSwap(TEnumAsByte<E_Ownership_E_Ownership> NewOwnership);
	void UpdateOldness(float Value);
	void SetOldness(float Value);
	bool IsMontagePlaying(class UAnimMontage* Montage);
	void DespawnAnimHoldable();
	void EquipAnimHoldable(class UClass* ItemClass, bool IsOffHand);
	float GetMouseUpDownAxisInput();
	float GetMouseLeftRightAxisInput();
	struct FRotator GetLookingRotation();
	void Holster_Weapon(bool IsSwitch, bool* bIsSwitch, bool* IsValidHeldItem);
	void UpdateStrengthAlpha(float Alpha);
	void Copy_SetCharacterParameters(const struct FString& CopyID, const struct FST_CharacterMeshes& CopyCharacterMeshes, const struct FST_CharacterStats& CopyCharacterStats, const struct FST_CharacterRelations& CopyCharacterRelations, const struct FST_CharacterSkillsAndTallents& CopyCharacterSkillsAndTallents, TMap<struct FName, struct FST_InventoryItemsArray> CopyCharacterInventory, TArray<struct FST_ItemInventorys>* CopyCharacterQuickSlots, TMap<TEnumAsByte<E_EquipmentCategories_E_EquipmentCategories>, struct FST_ItemInventorys> CopyCharacterArmor, const struct FVector& CopyActorLocation, const struct FRotator& CopyActorRotation);
	void SetFPCameraFOV(float InFieldOfView);
	void Attach_Components();
	void SetCanPerfromHitAction(bool CanPerfromHitAction);
	void Update_Range_Strength(float Strength);
	void CreateNewMeshMaterials(class UMeshComponent* Mesh, const struct FST_ColorTable& Dye);
	void ResetMeshMaterials(class UMeshComponent* Mesh);
	void GetDynamicMaterialsArray(class UMeshComponent* Mesh, TArray<class UMaterialInstanceDynamic*>* DynamicMaterialReferences);
	void GetDynamicMaterialStruct(class UMeshComponent* Mesh, struct FST_MeshDynamicMaterials* Array_Element);
	void GetDynamicMaterialIndex(class UMeshComponent* Mesh, int* Index);
	void ClearMaterials();
	void InitializeMaterials();
	void UpdateHoldableItemActionSpeed();
	void SetRandomSkinTone();
	void CalculateEncumberedSpeed();
	void MakeMovementNoise();
	void PlayerMovementInput(bool Is_Forward_Axis);
	void CalculateActorLocationAndRotationInRagdoll(const struct FRotator& RagdollRotation, const struct FVector& RagdollLocation, struct FRotator* ActorRotation, struct FVector* ActorLocation);
	void CanSprint(bool* CanSprint);
	void CustomAcceleration();
	void On_ALS_ViewMode_Changed();
	void DebugMode();
	void ChooseVelocity(struct FVector* Velocity);
	void LimitRotation(float AimYawLimit, float InterpSpeed);
	void On_ALS_Aiming_Changed();
	void LerpCameraSettings(float LerpAlpha, class USpringArmComponent* TargetSpringArm);
	void ChooseCameraSettings(struct FST_CameraSettings* TargetCameraSettings);
	float CalculateRotationRate(float SlowSpeed, float SlowSpeedRate, float FastSpeed, float FastSpeedRate);
	void LookingDirectionWithOffset(float OffsetInterpSpeed, float NE_Angle, float NW_Angle, float SE_Angle, float SW_Angle, float Buffer, struct FRotator* TargetRotation);
	void AddCharacterRotation(const struct FRotator& AddAmount);
	void ChooseGroundFriction(float* MaxWalkSpeed);
	void ChooseBrakingDeceleration(float* MaxWalkSpeed);
	void ChooseMaxAcceleration(float* MaxWalkSpeed);
	void ChooseMaxWalkSpeed(float* MaxWalkSpeed);
	void UpdateALS_CharacterMovementSettings();
	void SetCharacterRotation(const struct FRotator& TargetRotation, bool InterpRotation, float InterpSpeed);
	void On_ALS_RotationMode_Changed();
	void On_ALS_Stance_Changed();
	void On_ALS_Gait_Changed();
	void On_ALS_MovementMode_Changed();
	void On_PawnMovementMode_Changed(TEnumAsByte<Engine_EMovementMode> PrevMovementMode, TEnumAsByte<Engine_EMovementMode> NewMovementMode, unsigned char PrevCustomMode, unsigned char NewCustomMove);
	void CalculateEssentialVariables();
	void UserConstructionScript();
	void EyesStateTL__FinishedFunc();
	void EyesStateTL__UpdateFunc();
	void Blinking__FinishedFunc();
	void Blinking__UpdateFunc();
	void FistFightingTimeline__FinishedFunc();
	void FistFightingTimeline__UpdateFunc();
	void Interact(class ABP_BaseCharacter_C* BaseCharacter, const struct FHitResult& Hit, bool Timer);
	void InteractInput(bool KeyDown);
	void InteractStart(class ABP_BaseCharacter_C* BaseCharacter);
	void InteractCancel(class ABP_BaseCharacter_C* BaseCharacter);
	void SetOccupied(class APawn* Character);
	void SetTaskInActor(const struct FST_TaskList& Task);
	void ChangeTaskIsOccupied();
	void ToolInteract(class ABP_BaseCharacter_C* BaseCharacter, const struct FHitResult& Hit, bool UseChunkData, const struct FST_Chunks& ChunkData);
	void PerformActorInteraction();
	void IsLookedAt(bool Active);
	void InteractWithImpaledItem(class ABP_BaseCharacter_C* BaseCharacter);
	void AddImpaledItem(class AActor* ImpaledItem);
	void RemoveImpaledItem(class AActor* ImpaledItem);
	void StartAttackFunction(bool Timer, const struct FName& Socket);
	void StopAttackFunction();
	void Set_ALS_RotationMode_BPI(TEnumAsByte<E_RotationMode_E_RotationMode> ALS_RotationMode_BPI);
	void AnimNotify_Pivot_BPI(const struct FST_PivotParams& PivotParams);
	void AnimNotify_TurningInPlace_BPI(class UAnimMontage* TurnInPlaceMontage, bool ShouldTurnInPlace, bool TurningInPlace, bool TurningRight);
	void AnimNotify_IdleEntryState_BPI(TEnumAsByte<E_IdleEntryState_E_IdleEntryState> IdleEntryState);
	void Set_ALS_Aiming_BPI(bool Aiming);
	void Play_GetUp_Anim_BPI(bool FaceDown);
	void SavePoseSnapshot_BPI(const struct FName& PoseName);
	void Set_ALS_ViewMode_BPI(TEnumAsByte<E_ViewMode_E_ViewMode> ViewMode);
	void ShowTraces_BPI(bool ShowTraces);
	void Set_WalkingSpeed_BPI(float WalkingSpeed);
	void Set_RunningSpeed_BPI(float RunningSpeed);
	void Set_SprintingSpeed_BPI(float SprintingSpeed);
	void Set_CrouchingSpeed_BPI(float CrouchingSpeed);
	void Set_RF_BPI(bool RF);
	void SetToolType(TEnumAsByte<E_Tools_E_Tools> ToolType);
	void AnimNotify_SnapPoint(class USceneComponent* SnapComponent, float TargetSnapAlpha, float ResetSnapAlpha, bool Reset, const struct FName& LeftHandSocketName, const struct FName& RightHandSocketName);
	void ChangeAnimLoopState(bool IsLooping);
	void AnimNotify_StartSnappingIK();
	void AnimNotify_StopSnappingIK();
	void OnStartStageInteraction(class AActor* InteractedActor, class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, const struct FName& StartingSection);
	void OnLoopStageInteraction(class AActor* InteractedActor, class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, const struct FName& StartingSection);
	void OnEndStageInteraction(class AActor* InteractedActor, class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, const struct FName& StartingSection);
	void Set_Range_Strength(float Strength);
	void SetStrengthAlpha(float Alpha);
	void OverrideCanPerfromHitAction(bool CanPerfromHitAction);
	void PlayPickUpAnim(class UObject* Instigator, bool PreferTwoHanded);
	void PlayerMoveForInteraction(class AActor* Instigator, const struct FVector& Target, const struct FVector& LookAtTarget, bool RotateDuringMovement, bool UsePlayerLookAt, bool ResetLookAtPitch);
	void PlayerLookAt(class AActor* Target, const struct FVector& TargetLocation);
	void AnimNotify_LimitCamera(const struct FST_CameraRotationLimits& CameraLimits);
	void AnimNotify_StopRotation(bool StopRotationInput);
	void AnimNotify_StopMovement(bool bStopMovementInput);
	void PlayCraftingAnimation(TEnumAsByte<E_Workbenches_E_Workbenches> WorkbenchType, float CraftingTime);
	void SelectPickUpAnim(class UObject* Instigator, bool PreferTwoHanded);
	void Set_IdleStandingPose_BPI(TEnumAsByte<E_StandingIdles_E_StandingIdles> Standing_Idle_Pose, TEnumAsByte<E_AfterIdlePose_E_AfterIdlePose> DoAfterPose);
	void Set_IdleTalkingPose_BPI(TEnumAsByte<E_TalkingIdles_E_TalkingIdles> Talking_Idle_Pose, TEnumAsByte<E_AfterIdlePose_E_AfterIdlePose> DoAfterPose);
	void Set_IdleLookingPose_BPI(TEnumAsByte<E_LookingIdles_E_LookingIdles> Looking_Idle_Pose, TEnumAsByte<E_AfterIdlePose_E_AfterIdlePose> DoAfterPose);
	void Set_IdleOtherPose_BPI(TEnumAsByte<E_OtherIdles_E_OtherIdles> Other_Idle_Pose, TEnumAsByte<E_AfterIdlePose_E_AfterIdlePose> DoAfterPose);
	void AnimNotify_WorkMontageComplete(TEnumAsByte<E_Profession_E_Profession> Profession, class UAnimMontage* Montage, unsigned char ProfessionState);
	void AnimNotify_WorkMontageInterrupted(TEnumAsByte<E_Profession_E_Profession> Profession, class UAnimMontage* Montage, unsigned char ProfessionState);
	void AnimNotify_WorkLoopIncreased(TEnumAsByte<E_Profession_E_Profession> Profession, class UAnimMontage* Montage, unsigned char ProfessionState, int Loop);
	void AnimNotify_WorkLoopsFinished(TEnumAsByte<E_Profession_E_Profession> Profession, class UAnimMontage* Montage, unsigned char ProfessionState, int Loop);
	void AnimNotify_BreakMontageComplete(TEnumAsByte<E_Profession_E_Profession> Profession, class UAnimMontage* Montage, unsigned char BreakAnimID);
	void AnimNotify_BreakMontageBlendOut(TEnumAsByte<E_Profession_E_Profession> Profession, class UAnimMontage* Montage, unsigned char BreakAnimID);
	void AnimNotify_BreakMontageInterrupted(TEnumAsByte<E_Profession_E_Profession> Profession, class UAnimMontage* Montage, unsigned char BreakAnimID);
	void WaitForCrafting();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void SetMesh(class USkeletalMesh* NewHeadMesh, class USkeletalMesh* NewTorsoMesh, class USkeletalMesh* NewHandsMesh, class USkeletalMesh* NewLegsMesh, class USkeletalMesh* NewFeetMesh, class USkeletalMesh* NewHatSKMesh, class USkeletalMesh* NewHoodMesh, class USkeletalMesh* NewHairMesh, class USkeletalMesh* NewBackpackMesh, class USkeletalMesh* NewPouchMesh, class UClass* NewClass, bool UpdateOnly);
	void SetupStageInteraction(class AActor* InteractedActor, TMap<TEnumAsByte<E_BaseInteractionStages_E_BaseInteractionStages>, struct FName> SectionsToPlay, class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, bool AutomaticPlay, int NumberOfAutomaticLoops, bool SwapItemsOnInteraction);
	void Stop_Character_Rotation(bool StopRotationInput);
	void Change_Camera(bool bUsePlayerCamera, float BlendTime);
	void StartCameraFade_Pawn(float FromAlpha, float ToAlpha, float Duration, const struct FLinearColor& Color, bool bShouldFadeAudio, bool bHoldWhenFinished, bool bReverseOnFinish);
	void FinishStageInteraction();
	void Swoon();
	void Stop_Character_Movement(bool bStopMovementInput);
	void Limit_Stage_Interaction_Camera_Rotation(bool bUseHeadForFullBodyAnimations, bool bUsePlayerCamera, bool bLimitPlayerCamera);
	void Limit_Camera_Rotation(const struct FST_CameraRotationLimits& CameraRotationLimits);
	void HoldableAction(TMap<TEnumAsByte<E_AnimInteractionTypes_E_AnimInteractionTypes>, struct FST_MontagesSettings> MontagesSettings, bool UseLookingDown, float LookingDownAngle, bool Loop, bool Attack, bool OverrideMontage, bool IgnorePlayingMontage);
	void HoldableHitAction(const struct FST_MontagesSettings& Action_Montage_Settings);
	void PlayPickingUpMontage(class UObject* Instigator, bool PreferTwoHanded);
	void SetMeshAndMaterials(class USkeletalMesh* HeadMesh, class USkeletalMesh* TorsoMesh, class USkeletalMesh* HandsMesh, class USkeletalMesh* LegsMesh, class USkeletalMesh* FeetMesh, class USkeletalMesh* HatSKMesh, class USkeletalMesh* HoodMesh, class USkeletalMesh* Backpack, class USkeletalMesh* Pouch, class UClass* AnimClass, TArray<struct FST_MeshDynamicMaterials> DynamicMaterials);
	void ChangePlayerInput(bool DisablePlayerInput);
	void SelectPickUpAnimation(class UObject* Instigator, bool PreferTwoHanded);
	void CancelAnimationLoops();
	void SetMontageType(TEnumAsByte<E_AnimInteractionTypes_E_AnimInteractionTypes> Montage_Type);
	void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void SetMontageSettings(TMap<TEnumAsByte<E_AnimInteractionTypes_E_AnimInteractionTypes>, struct FST_MontagesSettings> MontagesSettings);
	void BndEvt__BP_CharacterStatsComponent_K2Node_ComponentBoundEvent_0_OnHealthChange__DelegateSignature();
	void ShowInspectorUI();
	void ChangeMontageNextSection(const struct FName& SectionNameToChange, const struct FName& NextSection, class UAnimMontage* Montage);
	void SetIsInWater(bool InWater, float Intensity);
	void PhysicsTimer();
	void Ragdoll();
	void Un_Ragdoll_Event();
	void To_Ragdoll_Event();
	void Un_Ragdoll___MULTICAST__(bool OnGround);
	void To_Ragdoll___MULTICAST__();
	void OnLanded(const struct FHitResult& Hit);
	void K2_OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
	void K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
	void K2_OnMovementModeChanged(TEnumAsByte<Engine_EMovementMode> PrevMovementMode, TEnumAsByte<Engine_EMovementMode> NewMovementMode, unsigned char PrevCustomMode, unsigned char NewCustomMode);
	void SetMountAnimalType_BPI(TEnumAsByte<E_Animals_E_Animals> MountAnimalType);
	void SetEnableIK_BPI(bool IK_Enabled);
	void EndCombat(class AActor* CombatCauser);
	void StartCombat(class AActor* CombatCauser);
	void UpdateIKAlpha(float Alpha);
	void PlayMountSpecial();
	void PlayMountStopAnimation(int AnimIndex);
	void Set_Caught_Prey_BPI(bool CaughtPrey);
	void OnDeath();
	void Set_IdlePoseByID_BPI(TEnumAsByte<E_IdleStates_E_IdleStates> Idle_State, unsigned char PoseID, TEnumAsByte<E_AfterIdlePose_E_AfterIdlePose> DoAfterPose);
	void Knockback(const struct FVector& KnockbackDirection, float KnockbackStrength);
	void AnimNotify_AnimObjectNotify(TEnumAsByte<E_NotifyObject_E_NotifyObject> ObjectToNotify, const struct FName& NotifyName);
	void ForceStanding();
	void Set_BreakState_BPI(bool IsTakingBreak, TEnumAsByte<E_Profession_E_Profession> Profession, bool RandomizeAnim, unsigned char BreakAnimID);
	void Set_WorkState_BPI(bool IsWorking, TEnumAsByte<E_Profession_E_Profession> Profession, unsigned char ProfessionState, int Loops);
	void ResetCameraPitch();
	void Set_IdleState_BPI(bool IsInIdleState, TEnumAsByte<E_IdleStates_E_IdleStates> IdleState);
	void AnimNotify_HolsterWeapon();
	void AnimNotify_SpawnAnimItem(class UClass* ItemClass, bool IsOffHand);
	void AnimNotify_DespawnAnimItem();
	void Set_Sitting_BPI(bool Sitting, TEnumAsByte<E_SitDownPosition_E_SitDownPosition> SitDownPosition);
	void Set_Sleeping_BPI(bool Sleeping, TEnumAsByte<E_SleepingDirection_E_SleepingDirection> SleepingDirection, bool UseBedSleepingPose);
	void StopAiming();
	void StartAiming();
	void Set_ALS_MovementMode_BPI(TEnumAsByte<E_MovementMode_E_MovementMode> ALS_MovementMode);
	void Set_ALS_Gait_BPI(TEnumAsByte<E_Gait_E_Gait> ALS_Gait);
	void Set_ALS_Stance_BPI(TEnumAsByte<E_Stance_E_Stance> ALS_Stance);
	void CameraShake_BPI(class UClass* ShakeClass, float Scale);
	void AddCharacterRotation_BPI(const struct FRotator& AddAmount);
	void To_Ragdoll___SERVER__();
	void Un_Ragdoll___SERVER__(bool OnGround);
	void UpdateRagdoll___MULTICAST__(const struct FVector& ActorLocation);
	void UpdateRagdoll___SERVER__(const struct FVector& RagdollVelocity, const struct FVector& RagdollLocation, const struct FRotator& ActorRotation, const struct FVector& ActorLocation);
	void Set_ALS_Gait_Event___SERVER__(TEnumAsByte<E_Gait_E_Gait> ALS_Gait);
	void Set_ALS_Gait_Event___MULTICAST__(TEnumAsByte<E_Gait_E_Gait> ALS_Gait);
	void Set_ALS_RotationMode_Event___SERVER__(TEnumAsByte<E_RotationMode_E_RotationMode> ALS_RotationMode);
	void Set_ALS_RotationMode_Event___MULTICAST__(TEnumAsByte<E_RotationMode_E_RotationMode> ALS_RotationMode);
	void Set_ALS_Aiming_Event___SERVER__(bool ALS_Aiming);
	void Set_ALS_Aiming_Event___MULTICAST__(bool ALS_Aiming);
	void Play_Networked_Montage___MULTICAST__(class UAnimMontage* MontageToPlay, float InPlayRate, float InTimeToStartMontageAt, bool bStopAllMontages);
	void Play_Networked_Montage___SERVER__(class UAnimMontage* MontageToPlay, float InPlayRate, float InTimeToStartMontageAt, bool bStopAllMontages);
	void Set_CharacterRotation_Event___SERVER__(const struct FRotator& TargetRotation, const struct FRotator& CharacterRotation);
	void Set_LookingRotation_Event___SERVER__(const struct FRotator& LookingRotation);
	void Set_MovementInput_Event___SERVER__(const struct FVector& MovementInput);
	void SetEnableIK_Event(bool IK_Enabled);
	void Set_CaughtPrey_Event(bool CaughtPrey);
	void Set_IdlePose_Event(TEnumAsByte<E_IdleStates_E_IdleStates> Idle_State, unsigned char PoseID, TEnumAsByte<E_AfterIdlePose_E_AfterIdlePose> DoAfterPose);
	void Set_ForceStanding_Event();
	void Set_BreakState_Event(bool IsTakingBreak, TEnumAsByte<E_Profession_E_Profession> Profession, bool RandomizeAnim, unsigned char BreakAnimID);
	void Set_WorkState_Event(bool IsWorking, TEnumAsByte<E_Profession_E_Profession> Profession, unsigned char ProfessionState, int Loops);
	void Set_IdleState_Event(bool IsInIdleState, TEnumAsByte<E_IdleStates_E_IdleStates> IdleState);
	void Set_Sitting_Event(bool IsSitting, TEnumAsByte<E_SitDownPosition_E_SitDownPosition> SitDownPosition);
	void Set_Sleeping_Event(bool IsSleeping, TEnumAsByte<E_SleepingDirection_E_SleepingDirection> SleepingDirection, bool UseBedSleepingPose);
	void Set_ALS_MovementMode_Event(TEnumAsByte<E_MovementMode_E_MovementMode> New_ALS_MovementMode);
	void Set_ALS_Gait_Event(TEnumAsByte<E_Gait_E_Gait> New_ALS_Gait);
	void Set_ALS_Stance_Event(TEnumAsByte<E_Stance_E_Stance> New_ALS_Stance);
	void Set_ALS_RotationMode_Event(TEnumAsByte<E_RotationMode_E_RotationMode> New_ALS_RotationMode);
	void Set_ALS_Aiming_Event(bool ALS_Aiming);
	void Set_ALS_ViewMode_Event(TEnumAsByte<E_ViewMode_E_ViewMode> ALS_ViewMode);
	void Set_WalkingSpeed_Event(float WalkingSpeed);
	void Set_RunningSpeed_Event(float RunningSpeed);
	void Set_SprintingSpeed_Event(float SprintingSpeed);
	void Set_CrouchingSpeed_Event(float CrouchingSpeed);
	void ShouldHolster();
	void OnCraftingAnimEnded();
	void CraftingClosed(class ABP_BaseCharacter_C* BaseCharacter);
	void WaitCrafting();
	void Stop_Blinking();
	void OpenEyes();
	void CloseEyes();
	void BlinkMorph(float Value);
	void StartBlinking();
	void Blink();
	void OnIdleAnimEnd();
	void OnIdleAnimStart();
	void EndFalling();
	void StartFalling();
	void FallingEvent();
	void ReverseFistTL();
	void StartFistTL();
	void FistFighting();
	void EndCrafting();
	void StartCrafting(TEnumAsByte<E_Workbenches_E_Workbenches> WorkbenchType, float CraftingTime);
	void OnSleepIdle();
	void OnSitIdle();
	void OnWakeUp();
	void OnGoToSleep();
	void OnSit();
	void OnGetUp();
	void FOVLerpUpdateSettings(class UCurveFloat* FloatCurve, float NewRate, float TargetFOV);
	void SetNewTimeCameraFOVLerp(float NewTime);
	void ReverseFromEndCameraFOVLerp();
	void ReverseCameraFOVLerp();
	void PlayCameraFOVLerp();
	void PlayFromStartCameraFOVLerp();
	void StopCameraFOVLerp();
	void Update_Camera_Event(class UCurveFloat* LerpCurve);
	void OnCombatEnded();
	void OnCombatStarted();
	void ExecuteUbergraph_BP_BaseCharacter(int EntryPoint);
	void OnCraftingAnimEnd__DelegateSignature();
	void OnWaitForCrafting__DelegateSignature();
	void OnCharacterActivated__DelegateSignature();
	void OnCharacterDeactivated__DelegateSignature();
	void OnStoppingCrafting__DelegateSignature();
	void OnEndCrafting__DelegateSignature();
	void OnStartCrafting__DelegateSignature();
	void OnSleepFinished__DelegateSignature();
	void OnSleepStarted__DelegateSignature();
	void OnSitFinished__DelegateSignature();
	void OnSitStarted__DelegateSignature();
	void OnInteractionFinished__DelegateSignature(class ABP_BaseCharacter_C* BaseCharacter);
	void OnIdleAnimFinished__DelegateSignature();
	void OnIdleAnimEntered__DelegateSignature();
	void OnSleepIdleEntered__DelegateSignature();
	void OnSitIdleEntered__DelegateSignature();
	void OnMovementFinished__DelegateSignature();
	void CameraFadeFinished__DelegateSignature();
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
