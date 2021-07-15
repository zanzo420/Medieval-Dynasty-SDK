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

// Class Medieval_Dynasty.AnimalCharacter
// 0x0018 (FullSize[0x04D0] - InheritedSize[0x04B8])
class AAnimalCharacter : public ACharacter
{
public:
	class UCapsuleComponent*                           BodyCollision;                                             // 0x04B8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPawnMovementComponent*                      PawnMovement;                                              // 0x04C0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CF1I[0x8];                                     // 0x04C8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Medieval_Dynasty.AnimalCharacter");
		return ptr;
	}



};

// Class Medieval_Dynasty.BPCppHelperFunctions
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBPCppHelperFunctions : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Medieval_Dynasty.BPCppHelperFunctions");
		return ptr;
	}



	void STATIC_SetCurrentAspectRatioConstraint(class APlayerController* Controller, TEnumAsByte<Engine_EAspectRatioAxisConstraint> ConstraintMode);
	void STATIC_SetActorName(class UObject* Object, const struct FString& DisplayName);
	float STATIC_GetSectionPosition(class UAnimMontage* Montage, const struct FName& SectionName);
	struct FName STATIC_GetOnlineSubsystem(class UObject* InWorldContextObject);
	bool STATIC_GetFiles(TArray<struct FString>* Files, const struct FString& RootFolderFullPath, const struct FString& Ext, const struct FString& FileNameFilter, TArray<struct FString> FilesToExclude);
	TEnumAsByte<Engine_EAspectRatioAxisConstraint> STATIC_GetCurrentAspectRatioConstraint(class APlayerController* Controller);
	int64_t STATIC_FStrToInt64(const struct FString& String);
	void STATIC_CopyCurve(class UAnimSequence* Source, class UAnimSequence* Target);
	bool STATIC_Array_Empty(TArray<int> TargetArray);
	bool STATIC_AdjustTeleportLocation(class AActor* TestActor, struct FVector* PlaceLocation, const struct FRotator& PlaceRotation);
};

// Class Medieval_Dynasty.CustomCapsuleComponent
// 0x0010 (FullSize[0x0470] - InheritedSize[0x0460])
class UCustomCapsuleComponent : public UCapsuleComponent
{
public:
	struct FVector                                     BoxExtent;                                                 // 0x0460(0x000C) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              LineThickness;                                             // 0x046C(0x0004) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Medieval_Dynasty.CustomCapsuleComponent");
		return ptr;
	}



	void SetBoxExtent(const struct FVector& InBoxExtent, bool bUpdateOverlaps);
	struct FVector GetUnscaledBoxExtent();
	struct FVector GetScaledBoxExtent();
};

// Class Medieval_Dynasty.CustomDetourCrowdAIC
// 0x0008 (FullSize[0x0330] - InheritedSize[0x0328])
class ACustomDetourCrowdAIC : public AAIController
{
public:
	class UCrowdFollowingComponent*                    CrowdFollowingComponent;                                   // 0x0328(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Medieval_Dynasty.CustomDetourCrowdAIC");
		return ptr;
	}



	void SetCrowdSlowdownAtGoal(bool bEnable, bool bUpdateAgent);
	void SetCrowdSimulationState(Medieval_Dynasty_EDetourCrowdSimulationState NewState);
	void SetCrowdSeparationWeight(float Weight, bool bUpdateAgent);
	void SetCrowdSeparation(bool bEnable, bool bUpdateAgent);
	void SetCrowdRotateToVelocity(bool bEnable);
	void SetCrowdPathOptimizationRange(float Range, bool bUpdateAgent);
	void SetCrowdPathOffset(bool bEnable, bool bUpdateAgent);
	void SetCrowdOptimizeVisibility(bool bEnable, bool bUpdateAgent);
	void SetCrowdOptimizeTopology(bool bEnable, bool bUpdateAgent);
	void SetCrowdObstacleAvoidance(bool bEnable, bool bUpdateAgent);
	void SetCrowdCollisionQueryRange(float Range, bool bUpdateAgent);
	void SetCrowdAvoidanceRangeMultiplier(float Multiplier, bool bUpdateAgent);
	void SetCrowdAnticipateTurns(bool bEnable, bool bUpdateAgent);
	void SetCrowdAffectFallingVelocity(bool bEnable);
	bool IsCrowdSlowdownAtGoalEnabled();
	bool IsCrowdSimulatioSuspended();
	bool IsCrowdSimulationEnabled();
	bool IsCrowdSimulationActive();
	bool IsCrowdSeparationEnabled();
	bool IsCrowdSeparationActive();
	bool IsCrowdRotateToVelocityEnabled();
	bool IsCrowdPathOffsetEnabled();
	bool IsCrowdOptimizeVisibilityEnabled();
	bool IsCrowdOptimizeTopologyEnabled();
	bool IsCrowdOptimizeTopologyActive();
	bool IsCrowdObstacleAvoidanceEnabled();
	bool IsCrowdObstacleAvoidanceActive();
	bool IsCrowdAnticipateTurnsEnabled();
	bool IsCrowdAnticipateTurnsActive();
	bool IsCrowdAffectFallingVelocityEnabled();
	Medieval_Dynasty_EDetourCrowdSimulationState GetCrowdSimulationState();
	float GetCrowdSeparationWeight();
	float GetCrowdPathOptimizationRange();
	float GetCrowdCollisionQueryRange();
	float GetCrowdAvoidanceRangeMultiplier();
};

// Class Medieval_Dynasty.CustomFoliageInstancedSMComp
// 0x0000 (FullSize[0x06A0] - InheritedSize[0x06A0])
class UCustomFoliageInstancedSMComp : public UFoliageInstancedStaticMeshComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Medieval_Dynasty.CustomFoliageInstancedSMComp");
		return ptr;
	}



};

// Class Medieval_Dynasty.GI_MedievalDynastyBase
// 0x0008 (FullSize[0x01B0] - InheritedSize[0x01A8])
class UGI_MedievalDynastyBase : public UGameInstance
{
public:
	bool                                               MicrosoftVersion;                                          // 0x01A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AGIF[0x7];                                     // 0x01A9(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Medieval_Dynasty.GI_MedievalDynastyBase");
		return ptr;
	}



};

// Class Medieval_Dynasty.MultiCollisionCapsuleComponent
// 0x0000 (FullSize[0x0460] - InheritedSize[0x0460])
class UMultiCollisionCapsuleComponent : public UCapsuleComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Medieval_Dynasty.MultiCollisionCapsuleComponent");
		return ptr;
	}



};

// Class Medieval_Dynasty.MultiCollisionCharacter
// 0x0008 (FullSize[0x04C0] - InheritedSize[0x04B8])
class AMultiCollisionCharacter : public ACharacter
{
public:
	unsigned char                                      UnknownData_2XR9[0x8];                                     // 0x04B8(0x0008) Fix Super Size


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Medieval_Dynasty.MultiCollisionCharacter");
		return ptr;
	}



};

// Class Medieval_Dynasty.MultiCollisionMovementComponent
// 0x0020 (FullSize[0x0B20] - InheritedSize[0x0B00])
class UMultiCollisionMovementComponent : public UCharacterMovementComponent
{
public:
	float                                              PenetrationOverlapCheckInflation;                          // 0x0B00(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_530O[0x4];                                     // 0x0B04(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UMultiCollisionCapsuleComponent*>     AdditionalUpdatedComponents;                               // 0x0B08(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	class UPrimitiveComponent*                         LastBlockedComponent;                                      // 0x0B18(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Medieval_Dynasty.MultiCollisionMovementComponent");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
