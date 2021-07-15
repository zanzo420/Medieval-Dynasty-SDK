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
// Enums
//---------------------------------------------------------------------------

// Enum FlockingBehaviourSystem.ELineTraceMethod
enum class FlockingBehaviourSystem_ELineTraceMethod : uint8_t
{
	ELineTraceMethod__LTM_Single   = 0,
	ELineTraceMethod__LTM_Multi    = 1,
	ELineTraceMethod__LTM_ActorBounds = 2,
	ELineTraceMethod__LTM_MAX      = 3,

};

// Enum FlockingBehaviourSystem.EFlockSpawnStyle
enum class FlockingBehaviourSystem_EFlockSpawnStyle : uint8_t
{
	EFlockSpawnStyle__FSS_SphereDistribution = 0,
	EFlockSpawnStyle__FSS_SphereDistributionAroundActor = 1,
	EFlockSpawnStyle__FSS_SphereDistributionAroundSpecificLocation = 2,
	EFlockSpawnStyle__FSS_FlockLocation = 3,
	EFlockSpawnStyle__FSS_ActorLocation = 4,
	EFlockSpawnStyle__FSS_SpecificLocation = 5,
	EFlockSpawnStyle__FSS_MAX      = 6,

};

// Enum FlockingBehaviourSystem.EFlockProcessingType
enum class FlockingBehaviourSystem_EFlockProcessingType : uint8_t
{
	EFlockProcessingType__FPT_CPU  = 0,
	EFlockProcessingType__FPT_GPU  = 1,
	EFlockProcessingType__FPT_MAX  = 2,

};

// Enum FlockingBehaviourSystem.EFlockRegionType
enum class FlockingBehaviourSystem_EFlockRegionType : uint8_t
{
	EFlockRegionType__FRT_Sphere   = 0,
	EFlockRegionType__FRT_Box      = 1,
	EFlockRegionType__FRT_MAX      = 2,

};

// Enum FlockingBehaviourSystem.EFlockThreadType
enum class FlockingBehaviourSystem_EFlockThreadType : uint8_t
{
	EFlockThreadType__FTT_SingleThreaded = 0,
	EFlockThreadType__FTT_MultiThreaded = 1,
	EFlockThreadType__FTT_MAX      = 2,

};

// Enum FlockingBehaviourSystem.EGoalPointSpawnStyle
enum class FlockingBehaviourSystem_EGoalPointSpawnStyle : uint8_t
{
	GPSS_GoalOwner                 = 0,
	GPSS_LastGoalPoint             = 1,
	GPSS_CameraLocation            = 2,
	GPSS_MAX                       = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct FlockingBehaviourSystem.BoidData
// 0x0020
struct FBoidData
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Velocity;                                                  // 0x000C(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PerceptionRadius;                                          // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4FCA[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct FlockingBehaviourSystem.OctreeElement
// 0x0040
struct FOctreeElement
{
	unsigned char                                      UnknownData_SGW5[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBoidData                                   BoidData;                                                  // 0x0004(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoxSphereBounds                            BoxSphereBounds;                                           // 0x0024(0x001C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct FlockingBehaviourSystem.FlockSettings
// 0x00B0
struct FFlockSettings
{
	unsigned char                                      bInEnclosedArea : 1;                                       // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bRandomForces : 1;                                         // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUseCustomForces : 1;                                      // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M845[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<class UClass*, float>                         FlockForces;                                               // 0x0008(0x0050) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                              AlignmentForce;                                            // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CohesionForce;                                             // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SeparationForce;                                           // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAllowObstacleAvoidance : 1;                               // 0x0064(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FlockingBehaviourSystem_ELineTraceMethod           LineTraceMethod;                                           // 0x0065(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      LineTraceCount;                                            // 0x0066(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0X5W[0x1];                                     // 0x0067(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LineTraceSpacing;                                          // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_D5ZE[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UClass*>                              ActorObstaclesToConsider;                                  // 0x0070(0x0010) (Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TEnumAsByte<Engine_ECollisionChannel>>      CollisionChannelsToDetect;                                 // 0x0080(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                              AvoidanceForce;                                            // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AvoidanceConeAngle;                                        // 0x0094(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AvoidanceIterations;                                       // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bEnableGoalSeeking : 1;                                    // 0x009C(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4F1E[0x3];                                     // 0x009D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AGoal*                                       Goal;                                                      // 0x00A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              GoalSeekingForce;                                          // 0x00A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_29M8[0x4];                                     // 0x00AC(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct FlockingBehaviourSystem.FlockOctreeSettings
// 0x0020
struct FFlockOctreeSettings
{
	unsigned char                                      bEnableOctree : 1;                                         // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUseCustomOctree : 1;                                      // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUseSharedOctree : 1;                                      // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MMUY[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ASpatialPartitioner*                         OctreeActor;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      OctTreeClass;                                              // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OctreeSize;                                                // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RS8D[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct FlockingBehaviourSystem.BoidFrameSkipSetting
// 0x0002
struct FBoidFrameSkipSetting
{
	unsigned char                                      bEnabled : 1;                                              // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      SplitAcross;                                               // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct FlockingBehaviourSystem.BoidMesh_Static
// 0x0020
struct FBoidMesh_Static
{
	class UStaticMesh*                                 StaticMesh;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Scale;                                                     // 0x0008(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                  // 0x0014(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct FlockingBehaviourSystem.SpawnSettings
// 0x0030
struct FSpawnSettings
{
	int                                                NumberOfBoids;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FlockingBehaviourSystem_EFlockSpawnStyle           SpawnStyle;                                                // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1E6J[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SpawnRadius;                                               // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SPVX[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      ActorToSpawnFrom;                                          // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     SpecificSpawnLocation;                                     // 0x0018(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     FlockLocationOffset;                                       // 0x0024(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct FlockingBehaviourSystem.GoalSettings
// 0x0078
struct FGoalSettings
{
	float                                              AcceptanceRadius;                                          // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Confirmations;                                             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAdjustImpossibleGoalLocation : 1;                         // 0x0008(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      LocationAdjustmentAttemptsAllowed;                         // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0UQD[0x6];                                     // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UClass*>                              ActorsToIgnoreForGoalAdjustment;                           // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class AFlockGoalPoint*>                     FailsafeLocations;                                         // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      bRandomlyGenerateGoalLocations : 1;                        // 0x0030(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_H57Q[0x3];                                     // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     Range;                                                     // 0x0034(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bStartAtCustomLocation : 1;                                // 0x0040(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_980J[0x3];                                     // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     StartLocation;                                             // 0x0044(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSpawnNewPointWhenAddingToArray : 1;                       // 0x0050(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDestroyPointWhenDeletingFromArray : 1;                    // 0x0050(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_O5MW[0x7];                                     // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      CustomPointClass;                                          // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FlockingBehaviourSystem_EGoalPointSpawnStyle> SpawnStyle;                                                // 0x0060(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_D121[0x7];                                     // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class AFlockGoalPoint*>                     GoalLocations;                                             // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct FlockingBehaviourSystem.FlockDebugElementSetting
// 0x0018
struct FFlockDebugElementSetting
{
	unsigned char                                      UnknownData_SOME[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bDraw : 1;                                                 // 0x0008(0x0001) BIT_FIELD (Edit, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OUGC[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LineThickness;                                             // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                      DebugColor;                                                // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_URCC[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct FlockingBehaviourSystem.FlockDebugElementSetting_Static
// 0x0008 (0x0020 - 0x0018)
struct FFlockDebugElementSetting_Static : public FFlockDebugElementSetting
{
	unsigned char                                      bHiddenInGame : 1;                                         // 0x0018(0x0001) BIT_FIELD (Edit, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2BFD[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct FlockingBehaviourSystem.FlockDebugElementSetting_StaticSphere
// 0x0008 (0x0028 - 0x0020)
struct FFlockDebugElementSetting_StaticSphere : public FFlockDebugElementSetting_Static
{
	unsigned char                                      SphereSegments;                                            // 0x0020(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IO76[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct FlockingBehaviourSystem.FlockDebugElementSetting_StaticBox
// 0x0000 (0x0020 - 0x0020)
struct FFlockDebugElementSetting_StaticBox : public FFlockDebugElementSetting_Static
{

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct FlockingBehaviourSystem.FlockDebugElementSetting_Line
// 0x0008 (0x0020 - 0x0018)
struct FFlockDebugElementSetting_Line : public FFlockDebugElementSetting
{
	float                                              LineLength;                                                // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QC3Y[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct FlockingBehaviourSystem.FlockDebugSettings
// 0x00C8
struct FFlockDebugSettings
{
	struct FFlockDebugElementSetting_Line              AvoidanceVector;                                           // 0x0000(0x0020) (Edit, NativeAccessSpecifierPublic)
	struct FFlockDebugElementSetting_Line              LineTraces;                                                // 0x0020(0x0020) (Edit, NativeAccessSpecifierPublic)
	struct FFlockDebugElementSetting                   Octree;                                                    // 0x0040(0x0018) (Edit, NativeAccessSpecifierPublic)
	struct FFlockDebugElementSetting_StaticSphere      WanderDistance;                                            // 0x0058(0x0028) (Edit, NativeAccessSpecifierPublic)
	struct FFlockDebugElementSetting_StaticBox         WanderExtent;                                              // 0x0080(0x0020) (Edit, NativeAccessSpecifierPublic)
	struct FFlockDebugElementSetting_StaticSphere      SpawnRadius;                                               // 0x00A0(0x0028) (Edit, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct FlockingBehaviourSystem.DebugVariables_Goal
// 0x0010
struct FDebugVariables_Goal
{
	unsigned char                                      bShowAcceptanceRadius : 1;                                 // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bShowPath : 1;                                             // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bShowRangeExtent : 1;                                      // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bShowAllPoints : 1;                                        // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_N397[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FColor                                      LineColor;                                                 // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                      AcceptanceRadiusColor;                                     // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                      RangeExtentColor;                                          // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct FlockingBehaviourSystem.BoidMesh_Skeletal
// 0x0060
struct FBoidMesh_Skeletal
{
	class USkeletalMesh*                               SkeletalMesh;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUseAnimBlueprint : 1;                                     // 0x0008(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LLS7[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      AnimClass;                                                 // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bChooseRandomAnims : 1;                                    // 0x0018(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RZ65[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FSingleAnimationPlayData>            AnimationData;                                             // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FSingleAnimationPlayData                    SingleAnimation;                                           // 0x0030(0x0018) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     Scale;                                                     // 0x0048(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                  // 0x0054(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct FlockingBehaviourSystem.BoidSettings
// 0x0118
struct FBoidSettings
{
	unsigned char                                      bUseSkeletalMesh : 1;                                      // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ATS5[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      BoidStaticClass;                                           // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      BoidSkeletalClass;                                         // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUseMultipleMeshes : 1;                                    // 0x0018(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QTMG[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FBoidMesh_Static>                    BoidMeshes_Static;                                         // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FBoidMesh_Skeletal>                  BoidMeshes_Skeletal;                                       // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FBoidMesh_Static                            BoidMesh_Static;                                           // 0x0040(0x0020) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoidMesh_Skeletal                          BoidMesh_Skeletal;                                         // 0x0060(0x0060) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	unsigned char                                      bIsLargeMesh : 1;                                          // 0x00C0(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bRandomSpeed : 1;                                          // 0x00C0(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0BAI[0x3];                                     // 0x00C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MovementSpeed;                                             // 0x00C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinMovementSpeed;                                          // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxMovementSpeed;                                          // 0x00CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bRandomPerceptionRadius : 1;                               // 0x00D0(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HF41[0x3];                                     // 0x00D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              PerceptionRadius;                                          // 0x00D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinPerceptionRadius;                                       // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxPerceptionRadius;                                       // 0x00DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxBoidsInPerceptionRadius;                                // 0x00E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bShrinkPerceptionRadiusOnMaxBoids : 1;                     // 0x00E4(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EVEE[0x3];                                     // 0x00E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              PerceptionRadiusReduction;                                 // 0x00E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AvoidanceDistance;                                         // 0x00EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TurnSpeed;                                                 // 0x00F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUpdateBoidRotation : 1;                                   // 0x00F4(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2C7Y[0x3];                                     // 0x00F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RotationTurnSpeed;                                         // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bRollOnTurn : 1;                                           // 0x00FC(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YZYQ[0x3];                                     // 0x00FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RollStrength;                                              // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WanderDistance;                                            // 0x0104(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     WanderExtent;                                              // 0x0108(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bConstrainToPlane : 1;                                     // 0x0114(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Engine_EPlaneConstraintAxisSetting                 PlaneConstraintAxis;                                       // 0x0115(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bEnableShadows : 1;                                        // 0x0116(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GNX5[0x1];                                     // 0x0117(0x0001) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct FlockingBehaviourSystem.FlockOptimizationSettings
// 0x0004
struct FFlockOptimizationSettings
{
	struct FBoidFrameSkipSetting                       SkipThink;                                                 // 0x0000(0x0002) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoidFrameSkipSetting                       SplitUpBoids;                                              // 0x0002(0x0002) (Edit, NoDestructor, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
