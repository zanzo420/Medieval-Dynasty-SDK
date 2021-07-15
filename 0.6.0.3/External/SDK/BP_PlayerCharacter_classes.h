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

// BlueprintGeneratedClass BP_PlayerCharacter.BP_PlayerCharacter_C
// 0x0728 (FullSize[0x14B0] - InheritedSize[0x0D88])
class ABP_PlayerCharacter_C : public ABP_BaseCharacter_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0D88(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UPhysicsHandleComponent*                     PhysicsHandle;                                             // 0x0D90(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UMediaSoundComponent*                        MediaSound;                                                // 0x0D98(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UCameraComponent*                            FP_Camera;                                                 // 0x0DA0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USpringArmComponent*                         FP_SpringArm;                                              // 0x0DA8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UCameraComponent*                            TP_Camera;                                                 // 0x0DB0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USpringArmComponent*                         TP_SpringArm;                                              // 0x0DB8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UAudioComponent*                             LifeStats_Voice;                                           // 0x0DC0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UBP_AimOffsetComponent_C*                    BP_AimOffsetComponent;                                     // 0x0DC8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USceneComponent*                             ActionCameraSocket;                                        // 0x0DD0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UBP_WeatherComponent_C*                      BP_WeatherComponent;                                       // 0x0DD8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UArrowComponent*                             BuildingTargetArrow;                                       // 0x0DE0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UBP_PlayerBuildingComponent_C*               BP_PlayerBuildingComponent;                                // 0x0DE8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              CameraLerp_LerpAlpha_C5FA4DB54C0199BD8228928150300557;     // 0x0DF0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             CameraLerp__Direction_C5FA4DB54C0199BD8228928150300557;    // 0x0DF4(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_5KYQ[0x3];                                     // 0x0DF5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          CameraLerp;                                                // 0x0DF8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              FOV_FOV_Lerp_D090BFAE4EDC09CE8849BEA7FF1ACD7A;             // 0x0E00(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             FOV__Direction_D090BFAE4EDC09CE8849BEA7FF1ACD7A;           // 0x0E04(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_B15W[0x3];                                     // 0x0E05(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          FOV;                                                       // 0x0E08(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class APC_Player_C*                                PlayerControllerReference;                                 // 0x0E10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                QuickSlotCount;                                            // 0x0E18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_I9GK[0x4];                                     // 0x0E1C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      LastHitActor;                                              // 0x0E20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               HoldingItem;                                               // 0x0E28(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_TMOQ[0x3];                                     // 0x0E29(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FST_ItemInventorys                          UsedItem;                                                  // 0x0E2C(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_2UP9[0x4];                                     // 0x0E5C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      HitActor;                                                  // 0x0E60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                                InteractTimerHandle;                                       // 0x0E68(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                               InteractKeyDown;                                           // 0x0E70(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_U64Z[0x7];                                     // 0x0E71(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                PickingTImer;                                              // 0x0E78(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                              InteractionTime;                                           // 0x0E80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InteractionRange;                                          // 0x0E84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InteractionNoCollisionRange;                               // 0x0E88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HitRayCastFrequency;                                       // 0x0E8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HitRayCastBuildingFrequency;                               // 0x0E90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                HitActorID;                                                // 0x0E94(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                LastHitActorID;                                            // 0x0E98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       TmpItemName;                                               // 0x0E9C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                LastSelectedQuickSlotID;                                   // 0x0EA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_GameMenu_C*                              GameMenuReference;                                         // 0x0EA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               InBuildingMode;                                            // 0x0EB0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_I707[0x3];                                     // 0x0EB1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              BuildingRotation;                                          // 0x0EB4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               RotatingRight;                                             // 0x0EB8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               RotatingLeft;                                              // 0x0EB9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_Z1IQ[0x2];                                     // 0x0EBA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TempSoundsVolume;                                          // 0x0EBC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               TorchLighten;                                              // 0x0EC0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_MHJ9[0x3];                                     // 0x0EC1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     FoliageDestination;                                        // 0x0EC4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               BuildingModeTargetingOffset;                               // 0x0ED0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_NUUT[0x3];                                     // 0x0ED1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FieldBuildingRange;                                        // 0x0ED4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TmpFreshness;                                              // 0x0ED8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               QuickslotMenuOpen;                                         // 0x0EDC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ZF8G[0x3];                                     // 0x0EDD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ABP_NPC_C*                                   TraderReference;                                           // 0x0EE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FName>                               StartingWeapons;                                           // 0x0EE8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               HadOffHandItem;                                            // 0x0EF8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               HadMainHandItem;                                           // 0x0EF9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               HadRightTool;                                              // 0x0EFA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               PlayerCamera;                                              // 0x0EFB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_5T5E[0x4];                                     // 0x0EFC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ABP_Camera_C*                                ActionCamera;                                              // 0x0F00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DefaultViewYawMin;                                         // 0x0F08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DefaultViewYawMax;                                         // 0x0F0C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DefaultViewPitchMin;                                       // 0x0F10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DefaultViewPitchMax;                                       // 0x0F14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               LimitPlayerCamera;                                         // 0x0F18(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_D4R6[0x3];                                     // 0x0F19(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SplineBuildingRange;                                       // 0x0F1C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FurnitureBuildingRange;                                    // 0x0F20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsInteractTimer_;                                          // 0x0F24(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               SwapItemOnInteraction;                                     // 0x0F25(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_TC28[0x2];                                     // 0x0F26(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TimeRequired;                                              // 0x0F28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                tmp_Capacity;                                              // 0x0F2C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               InputDisabled;                                             // 0x0F30(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ClickBlock;                                                // 0x0F31(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               UpBool;                                                    // 0x0F32(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               DownBool;                                                  // 0x0F33(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               RightBool;                                                 // 0x0F34(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               LeftBool;                                                  // 0x0F35(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               NextBool;                                                  // 0x0F36(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               PreviousBool;                                              // 0x0F37(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               tmp_BuildingTutorialBlockade;                              // 0x0F38(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_XAJ6[0x7];                                     // 0x0F39(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPrimitiveComponent*                         HitComponent;                                              // 0x0F40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         LastHitComponent;                                          // 0x0F48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Tmp_HP;                                                    // 0x0F50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               BlockModificationMenuMovement;                             // 0x0F54(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_DNXI[0x3];                                     // 0x0F55(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Tmp_Max_HP;                                                // 0x0F58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  OnStartHitReference;                                       // 0x0F5C(0x008C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                               TimerPickup;                                               // 0x0FE8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_T5Q0[0x7];                                     // 0x0FE9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    SpawnedHeldItem;                                           // 0x0FF0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    DespawnedHeldItem;                                         // 0x1000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    SpawnedOffHandItem;                                        // 0x1010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    DespawnedOffHandItem;                                      // 0x1020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               SleepMenuOpen;                                             // 0x1030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_Ownership_E_Ownership>               Tmp_Ownership;                                             // 0x1031(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_BDTQ[0x6];                                     // 0x1032(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                InteractionHitTimer;                                       // 0x1038(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<struct FST_ItemResource>                    CurrentlyCrafting;                                         // 0x1040(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               InteractionKeyDown;                                        // 0x1050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_CX4L[0x3];                                     // 0x1051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     LastHitLocation;                                           // 0x1054(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Tools_E_Tools>                       TakingOutToolType;                                         // 0x1060(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_ZXME[0x7];                                     // 0x1061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                EquipTorchHandle;                                          // 0x1068(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                                EquipToolHandle;                                           // 0x1070(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                                UnequipToolHandle;                                         // 0x1078(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                              LastHitActorInteractionDistance;                           // 0x1080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Tools_E_Tools>                       HolsteredToolType;                                         // 0x1084(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_YQJW[0x3];                                     // 0x1085(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                SelectedQuickSlotID;                                       // 0x1088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_OGB2[0x4];                                     // 0x108C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FST_ItemDetails                             SelectedQuickSlotItem;                                     // 0x1090(0x02C0) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                               SelectedQuickSlotDrawWeapon;                               // 0x1350(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               EquippedToolsForInteraction;                               // 0x1351(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_DBGM[0x2];                                     // 0x1352(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRotator                                    StabilizedRotation;                                        // 0x1354(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                                    PreviousControllerRotation;                                // 0x1360(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                                    PreviousTargetRotation;                                    // 0x136C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class ABP_BaseCharacter_C*                         Heir_Temp;                                                 // 0x1378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Headbobbing;                                               // 0x1380(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_KAE3[0x7];                                     // 0x1381(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                TimedInteractionHandle;                                    // 0x1388(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FKey                                        PressedKey;                                                // 0x1390(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FST_Camera_Targets                          CameraTargets;                                             // 0x13A8(0x00C8) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       FirstPersonCameraSocket;                                   // 0x1470(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_CameraSettings                          CurrentCameraSettings;                                     // 0x1478(0x0014) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_01MX[0x4];                                     // 0x148C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 CameraLerpCurve;                                           // 0x1490(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               RightShoulder;                                             // 0x1498(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_7N9Z[0x7];                                     // 0x1499(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      TimerHitActor;                                             // 0x14A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ForwardAxisInput;                                          // 0x14A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RightAxisInput;                                            // 0x14AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerCharacter.BP_PlayerCharacter_C");
		return ptr;
	}



	void GetInteractionEndpoint(float Distance, struct FVector* EndPoint);
	void GetPhysicsHandle(class UPhysicsHandleComponent** PhysicsHandle);
	void OnWaitForCraftingInteraction(class ABP_MasterFurniture_Workbench_C* InteractedWorkbench, const struct FVector& InteractLocation);
	bool IsFovChanging();
	void OnCloseCraftingInteraction(class ABP_MasterFurniture_Workbench_C* InteractedWorkbench, const struct FVector& InteractLocation);
	bool GetRandomPointOnTerrain(class AActor* Actor, class UMeshComponent* Mesh, struct FVector* Location);
	void FindRandomPointForUnstuck(struct FVector* RandomLocation);
	bool TryToUnstuckPlayer(struct FVector* TargetLocation, struct FRotator* TargetRotation);
	void InteractTimerFinish(class AActor* Actor);
	void InteractTimerActor(const struct FHitResult& HitReference, bool* FinishedInteraction);
	void InteractTimerFoliage(class UBP_MasterFoliage_C* MasterFoliage, const struct FHitResult& HitReference, bool* FinishedInteraction);
	void InteractTimer(bool* FinishedInteraction);
	bool OnDismountingPawnFinished(class AActor* oldPawnMount);
	bool PrepareToDismount(class AActor* mountOrRider, struct FMountActionResponse* Response);
	bool PrepareToMount(class AActor* mountOrRider, class AActor* linkedActor, struct FMountActionResponse* Response);
	struct FRotator GetLookingRotation();
	bool OnMountingPawnFinished(class AActor* newMountActor);
	bool MoveToMountingLocation(const struct FVector& Location, const struct FRotator& Orientation);
	void SetFPCameraFOV(float InFieldOfView);
	void GetCameraViewDirection(struct FVector* Forward);
	void GetFPCameraFOV(float* FieldOfView);
	void ChooseCameraSettings(struct FST_CameraSettings* TargetCameraSettings);
	void LerpCameraSettings(float LerpAlpha, class USpringArmComponent* TargetSpringArm);
	void Attach_Components();
	void PlayerPush();
	void UpdateDefaultFov(float InFieldOfView);
	void Unstuck();
	void ReEquipHeldItemsForInteraction();
	void HideHeldItemsForInteraction(TEnumAsByte<E_Tools_E_Tools> ToolType);
	void EquipToolForInteraction(class ABP_MasterHoldableItem_C* Holdable, TEnumAsByte<E_Tools_E_Tools> WantedTool, bool* Success);
	void SelectedSlotWithToolUpdate();
	void GetLastHitActorInteractionDistance(float* Distance);
	void OnEndWorkbenchInteraction(class ABP_MasterFurniture_Workbench_C* InteractedWorkbench, class USceneComponent* InteractComponent, const struct FVector& InteractLocation);
	void On_Start_Workbench_Interaction(class ABP_MasterFurniture_Workbench_C* InteractedWorkbench, class USceneComponent* InteractComponent, const struct FVector& InteractLocation, bool ChangeCamera, bool UseLocation, bool UseLookAt, const struct FRotator& LookAtRotation, bool ResetPitch);
	void SetInBuildingMode(bool Active);
	void UpdateGhosts();
	void SpawnOffHandItem(class UClass* Class, const struct FTransform& SpawnTransform, Engine_ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, class AActor* Owner, class ABP_BaseCharacter_C* PlayerCharacterReference, int Capacity, float CurrentHP, class APawn* Instigator, class ABP_MasterHoldableItem_C** Output_Get);
	void DestroyOffHandItem();
	void DestroyHeldItem();
	void SpawnHeldItem(class UClass* Class, const struct FTransform& SpawnTransform, Engine_ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, class AActor* Owner, class ABP_BaseCharacter_C* PlayerCharacterReference, int Capacity, float CurrentHP, class APawn* Instigator, class ABP_MasterHoldableItem_C** Output_Get);
	void On_ALS_Aiming_Changed();
	void Holster_Weapon(bool IsSwitch, bool* bIsSwitch, bool* IsValidHeldItem);
	void InteractionDetect();
	void On_ALS_ViewMode_Changed();
	void ReEquipHeldItems();
	void Hide_Held_Items(class AActor* InteractedActor);
	void StopBarterWithNPC();
	void StartBarterWithNPC(class ABP_NPC_C** NPCReference, bool GiftGiving);
	void isPlayer(bool* Player, class APC_Player_C** PlayerController);
	void TryToGetResourcesForBuilding(class ABP_MasterBuilding_C* Building, class ABP_MasterBuildModule_C* Module, bool* Success);
	void SwapHeldItemToHands(bool _2Hand);
	void RevertHeldItem();
	void SwapHeldItem(const struct FName& ItemName, int ArrayID);
	void ToggleGameMenu();
	void SelectQuickSlot(int SelectedQuickSlotID, bool DrawWeapon_);
	void InteractRange(float InteractionRange, struct FVector* StartVector, struct FVector* EndVector);
	void UserConstructionScript();
	void FOV__FinishedFunc();
	void FOV__UpdateFunc();
	void CameraLerp__FinishedFunc();
	void CameraLerp__UpdateFunc();
	void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_8(const struct FKey& Key);
	void InpActEvt_PageUp_K2Node_InputKeyEvent_7(const struct FKey& Key);
	void InpActEvt_NumPadNine_K2Node_InputKeyEvent_6(const struct FKey& Key);
	void InpActEvt_NumPadEight_K2Node_InputKeyEvent_5(const struct FKey& Key);
	void InpActEvt_NumPadSeven_K2Node_InputKeyEvent_4(const struct FKey& Key);
	void InpActEvt_NumPadSix_K2Node_InputKeyEvent_3(const struct FKey& Key);
	void InpActEvt_NumPadFive_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_NumPadFour_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void InteractOpenGate(bool Timer);
	void InteractCloseGate();
	void InteractLineTrace();
	void PressedInput_Torch();
	void PressedInput_QuickSlot1();
	void PressedInput_QuickSlot2();
	void PressedInput_QuickSlot3();
	void PressedInput_QuickSlot4();
	void PressedInput_QuickSlot5();
	void PressedInput_QuickSlot6();
	void PressedInput_QuickSlot7();
	void PressedInput_QuickSlot8();
	void PressedInput_InteractAction(const struct FKey& Key);
	void ReleasedInput_InteractAction();
	void PressedInput_Sprint();
	void ReleasedInput_Sprint();
	void PressedInput_InspectorMode();
	void PressedInput_HolsterHoldableItem();
	void PressedInput_ChoiceMenu();
	void ReleasedInput_ChoiceMenu();
	void PressedInput_RotateGhostRight();
	void ReleasedInput_RotateGhostRight();
	void UnequipItem();
	void JumpEvent();
	void PressedInput_SelectRotationMode_2();
	void PressedInput_SelectRotationMode_3();
	void PressedInput_WalkAction();
	void Backwards_Axis(float AxisValue);
	void Left_Axis(float AxisValue);
	void PressedInput_StanceAction();
	void ReleasedInput_StanceAction();
	void PressedInput_CameraAction();
	void ReleasedInput_CameraAction();
	void PressedInput_JumpAction();
	void ReleasedInput_JumpAction();
	void ReleasedInput_InspectorMode();
	void EquipTorchTimer();
	void ReleasedInput_RotateGhostLeft();
	void PressedInput_RotateGhostLeft();
	void TimedInteraction();
	void PickingItem();
	void InteractTimerDone();
	void Down_Axis(float AxisValue);
	void MouseWheelAxisChange(float Axis_Value);
	void PressedInput_RightAction();
	void ReleasedInput_RightAction();
	void ReleasedInput_LeftAction();
	void PressedInput_LeftAction();
	void Right_Axis(float Axis_Value);
	void ReleasedInput_UI_NextSection();
	void PressedInput_UI_NextSection();
	void ReleasedInput_UI_PreviousSelection();
	void PressedInput_UI_PreviousSection();
	void ReleasedInput_UI_Left();
	void PressedInput_UI_Left();
	void ReleasedInput_UI_Right();
	void PressedInput_UI_Right();
	void ReleasedInput_UI_Up();
	void PressedInput_UI_Up();
	void ReleasedInput_UI_Down();
	void PressedInput_UI_Down();
	void PressedInput_UI_Cancel();
	void PressedInput_GameMenu();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void StartInteractionTrace();
	void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void StartCameraFade_Pawn(float FromAlpha, float ToAlpha, float Duration, const struct FLinearColor& Color, bool bShouldFadeAudio, bool bHoldWhenFinished, bool bReverseOnFinish);
	void On_Camera_Fade_Finished();
	void BndEvt__BP_StageInteractionComponent_K2Node_ComponentBoundEvent_0_OnLoopStageFinished__DelegateSignature();
	void Swoon();
	void AddCharacterRotation_BPI(const struct FRotator& AddAmount);
	void SetMesh(class USkeletalMesh* NewHeadMesh, class USkeletalMesh* NewTorsoMesh, class USkeletalMesh* NewHandsMesh, class USkeletalMesh* NewLegsMesh, class USkeletalMesh* NewFeetMesh, class USkeletalMesh* NewHatSKMesh, class USkeletalMesh* NewHoodMesh, class USkeletalMesh* NewHairMesh, class USkeletalMesh* NewBackpackMesh, class USkeletalMesh* NewPouchMesh, class UClass* NewClass, bool UpdateOnly);
	void SetInteractionTimer(float Time);
	void OnLookAtLoopReached();
	void OnSeasonChanged_End_Event_1();
	void CreateDeathScreen(TEnumAsByte<E_DeathType_E_DeathType> DeathType);
	void PrepareForMounting(const struct FVector& Location);
	void OnGoToSleep();
	void ResetCameraPitch();
	void PlayerLookAt(class AActor* Target, const struct FVector& TargetLocation);
	void FinishStageInteraction();
	void ChangePlayerInput(bool DisablePlayerInput);
	void PlayerMoveForInteraction(class AActor* Instigator, const struct FVector& Target, const struct FVector& LookAtTarget, bool RotateDuringMovement, bool UsePlayerLookAt, bool ResetLookAtPitch);
	void Limit_Camera_Rotation(const struct FST_CameraRotationLimits& CameraRotationLimits);
	void Limit_Stage_Interaction_Camera_Rotation(bool bUseHeadForFullBodyAnimations, bool bUsePlayerCamera, bool bLimitPlayerCamera);
	void Stop_Character_Movement(bool bStopMovementInput);
	void Stop_Character_Rotation(bool StopRotationInput);
	void Change_Camera(bool bUsePlayerCamera, float BlendTime);
	void SetupStageInteraction(class AActor* InteractedActor, TMap<TEnumAsByte<E_BaseInteractionStages_E_BaseInteractionStages>, struct FName> SectionsToPlay, class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, bool AutomaticPlay, int NumberOfAutomaticLoops, bool SwapItemsOnInteraction);
	void UnequipWithEquipTimer();
	void UnequipToEmptySlot();
	void UnequipToolTimer();
	void EquipToolTimer();
	void SelectQuickSlotWithHolster(int SelectedQuickSlotID, bool DrawWeapon_);
	void StartingInventory();
	void SetNewTimeCameraFOVLerp(float NewTime);
	void ReverseFromEndCameraFOVLerp();
	void ReverseCameraFOVLerp();
	void PlayCameraFOVLerp();
	void PlayFromStartCameraFOVLerp();
	void StopCameraFOVLerp();
	void FOVLerpUpdateSettings(class UCurveFloat* FloatCurve, float NewRate, float TargetFOV);
	void Update_Camera_Event(class UCurveFloat* LerpCurve);
	void ExecuteUbergraph_BP_PlayerCharacter(int EntryPoint);
	void DespawnedOffHandItem__DelegateSignature();
	void SpawnedOffHandItem__DelegateSignature();
	void DespawnedHeldItem__DelegateSignature();
	void SpawnedHeldItem__DelegateSignature();
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
