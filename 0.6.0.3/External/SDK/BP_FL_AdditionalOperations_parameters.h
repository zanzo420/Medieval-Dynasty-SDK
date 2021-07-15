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

// Function BP_FL_AdditionalOperations.BP_FL_AdditionalOperations_C.Cut Text Sex Specyfic
struct UBP_FL_AdditionalOperations_C_Cut_Text_Sex_Specyfic_Params
{
	struct FText                                       Male;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Female;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	TEnumAsByte<E_Sex_E_Sex>                           Sex;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       CutText;                                                   // (Parm, OutParm)
};

// Function BP_FL_AdditionalOperations.BP_FL_AdditionalOperations_C.GetSaveFiles
struct UBP_FL_AdditionalOperations_C_GetSaveFiles_Params
{
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FString>                             Files;                                                     // (Parm, OutParm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_FL_AdditionalOperations.BP_FL_AdditionalOperations_C.Fix Custom Old Save Files
struct UBP_FL_AdditionalOperations_C_Fix_Custom_Old_Save_Files_Params
{
	struct FString                                     SaveName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     SaveNameToCheck;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int                                                UserIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_FL_AdditionalOperations.BP_FL_AdditionalOperations_C.GetCustomSaveData
struct UBP_FL_AdditionalOperations_C_GetCustomSaveData_Params
{
	struct FString                                     SaveName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     SaveNameToCheck;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int                                                UserIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USAVE_Data_C*                                SAVE_Data;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FL_AdditionalOperations.BP_FL_AdditionalOperations_C.FixOldSaveFiles
struct UBP_FL_AdditionalOperations_C_FixOldSaveFiles_Params
{
	struct FString                                     SaveDataSlotName;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     SaveGameSlotName;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int                                                SaveNameIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                UserIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     FileSaveName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_FL_AdditionalOperations.BP_FL_AdditionalOperations_C.GetSaveData
struct UBP_FL_AdditionalOperations_C_GetSaveData_Params
{
	struct FString                                     SaveDataSlotName;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     SaveGameSlotName;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int                                                SaveNameIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                UserIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     FileSaveName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USAVE_Data_C*                                SAVE_Data;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FL_AdditionalOperations.BP_FL_AdditionalOperations_C.DisplayMountInformation
struct UBP_FL_AdditionalOperations_C_DisplayMountInformation_Params
{
	float                                              Speed;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Velocity;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AngleDotProduct;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FL_AdditionalOperations.BP_FL_AdditionalOperations_C.GetClosestActor
struct UBP_FL_AdditionalOperations_C_GetClosestActor_Params
{
	TArray<class AActor*>                              Actors;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Found;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AActor*                                      ClosestActor;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FL_AdditionalOperations.BP_FL_AdditionalOperations_C.GetClosestActor(Hit)
struct UBP_FL_AdditionalOperations_C_GetClosestActor_Hit__Params
{
	TArray<struct FHitResult>                          HitResults;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Found;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AActor*                                      ClosestActor;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FL_AdditionalOperations.BP_FL_AdditionalOperations_C.GetIconLetterByKey
struct UBP_FL_AdditionalOperations_C_GetIconLetterByKey_Params
{
	struct FKey                                        Key;                                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	bool                                               Gamepad;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                                  Icon;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Letter;                                                    // (Parm, OutParm)
	bool                                               Found;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_FL_AdditionalOperations.BP_FL_AdditionalOperations_C.SelectRandomIDFromPool(byte)
struct UBP_FL_AdditionalOperations_C_SelectRandomIDFromPool_byte__Params
{
	TArray<unsigned char>                              IDs;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<float>                                      ChanceToPlay;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<unsigned char>                              IDsToExclude;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      SelectedPoseID;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FL_AdditionalOperations.BP_FL_AdditionalOperations_C.IsSpecifiedMontagePlaying
struct UBP_FL_AdditionalOperations_C_IsSpecifiedMontagePlaying_Params
{
	class UAnimInstance*                               AnimInstance;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                Montage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_FL_AdditionalOperations.BP_FL_AdditionalOperations_C.GetMaterialWithSpecifiedWord
struct UBP_FL_AdditionalOperations_C_GetMaterialWithSpecifiedWord_Params
{
	class UMeshComponent*                              Mesh;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     SearchString;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                          Material;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Index;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Success_;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_FL_AdditionalOperations.BP_FL_AdditionalOperations_C.Ease(CustomCurve)
struct UBP_FL_AdditionalOperations_C_Ease_CustomCurve__Params
{
	float                                              Alpha;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              A;                                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              B;                                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                                 Curve;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Result;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FL_AdditionalOperations.BP_FL_AdditionalOperations_C.GetIconByActionMapping
struct UBP_FL_AdditionalOperations_C_GetIconByActionMapping_Params
{
	struct FName                                       MappingToFind;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Gamepad_;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                                  Icon;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Letter;                                                    // (Parm, OutParm)
};

// Function BP_FL_AdditionalOperations.BP_FL_AdditionalOperations_C.CompareHitActorsAndComponents
struct UBP_FL_AdditionalOperations_C_CompareHitActorsAndComponents_Params
{
	struct FHitResult                                  A;                                                         // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                                  B;                                                         // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               SameActor;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               SameComponent;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_FL_AdditionalOperations.BP_FL_AdditionalOperations_C.SelectRandomID(byte)
struct UBP_FL_AdditionalOperations_C_SelectRandomID_byte__Params
{
	unsigned char                                      CurrentPoseID;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      MaxPoseID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ShuffleMode;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<float>                                      ChanceToPlay;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<unsigned char>                              IDsToExclude;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      SelectedPoseID;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FL_AdditionalOperations.BP_FL_AdditionalOperations_C.SelectRandomID(int)
struct UBP_FL_AdditionalOperations_C_SelectRandomID_int__Params
{
	int                                                CurrentPoseID;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxPoseID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ShuffleMode;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<float>                                      ChanceToPlay;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                SelectedPoseID;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FL_AdditionalOperations.BP_FL_AdditionalOperations_C.CompareCameraRotationLimits
struct UBP_FL_AdditionalOperations_C_CompareCameraRotationLimits_Params
{
	struct FST_CameraRotationLimits                    Input_Struct_A;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_CameraRotationLimits                    Input_Struct_B;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_FL_AdditionalOperations.BP_FL_AdditionalOperations_C.CompareMontageSettings
struct UBP_FL_AdditionalOperations_C_CompareMontageSettings_Params
{
	struct FST_MontagesSettings                        Input_Struct_A;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_MontagesSettings                        Input_Struct_B;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_FL_AdditionalOperations.BP_FL_AdditionalOperations_C.CalculateTargetPosition
struct UBP_FL_AdditionalOperations_C_CalculateTargetPosition_Params
{
	class ACharacter*                                  InteractingCharacter;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                                  Animal;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Distance_Offset_Multiplier;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FL_AdditionalOperations.BP_FL_AdditionalOperations_C.CalculateAngleBetweenDirectionVectors
struct UBP_FL_AdditionalOperations_C_CalculateAngleBetweenDirectionVectors_Params
{
	struct FVector                                     DirectionVector;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     CharacterDirectionVector;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
