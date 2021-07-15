﻿#pragma once

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

// Function ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject.Unload
struct UChromaSDKPluginAnimation1DObject_Unload_Params
{
};

// Function ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject.IsLoaded
struct UChromaSDKPluginAnimation1DObject_IsLoaded_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject.Unload
struct UChromaSDKPluginAnimation2DObject_Unload_Params
{
};

// Function ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject.IsLoaded
struct UChromaSDKPluginAnimation2DObject_IsLoaded_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.UnloadAnimationName
struct UChromaSDKPluginBPLibrary_UnloadAnimationName_Params
{
	struct FString                                     animationName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.UnloadAnimation
struct UChromaSDKPluginBPLibrary_UnloadAnimation_Params
{
	int                                                animationId;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.TrimStartFramesName
struct UChromaSDKPluginBPLibrary_TrimStartFramesName_Params
{
	struct FString                                     animationName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                numberOfFrames;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.TrimStartFrames
struct UChromaSDKPluginBPLibrary_TrimStartFrames_Params
{
	int                                                animationId;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                numberOfFrames;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.TrimFrameName
struct UChromaSDKPluginBPLibrary_TrimFrameName_Params
{
	struct FString                                     animationName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                frameId;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.TrimFrame
struct UChromaSDKPluginBPLibrary_TrimFrame_Params
{
	int                                                animationId;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                frameId;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.TrimEndFramesName
struct UChromaSDKPluginBPLibrary_TrimEndFramesName_Params
{
	struct FString                                     animationName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                lastFrameId;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.TrimEndFrames
struct UChromaSDKPluginBPLibrary_TrimEndFrames_Params
{
	int                                                animationId;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                lastFrameId;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ToLinearColor
struct UChromaSDKPluginBPLibrary_ToLinearColor_Params
{
	int                                                colorParam;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ToBGR
struct UChromaSDKPluginBPLibrary_ToBGR_Params
{
	struct FLinearColor                                colorParam;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SubtractNonZeroTargetAllKeysAllFramesOffsetName
struct UChromaSDKPluginBPLibrary_SubtractNonZeroTargetAllKeysAllFramesOffsetName_Params
{
	struct FString                                     sourceAnimationName;                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     targetAnimationName;                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Offset;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SubtractNonZeroTargetAllKeysAllFramesOffset
struct UChromaSDKPluginBPLibrary_SubtractNonZeroTargetAllKeysAllFramesOffset_Params
{
	int                                                sourceAnimationId;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                targetAnimationId;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Offset;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SubtractNonZeroTargetAllKeysAllFramesName
struct UChromaSDKPluginBPLibrary_SubtractNonZeroTargetAllKeysAllFramesName_Params
{
	struct FString                                     sourceAnimationName;                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     targetAnimationName;                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SubtractNonZeroTargetAllKeysAllFrames
struct UChromaSDKPluginBPLibrary_SubtractNonZeroTargetAllKeysAllFrames_Params
{
	int                                                sourceAnimationId;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                targetAnimationId;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SubtractNonZeroAllKeysName
struct UChromaSDKPluginBPLibrary_SubtractNonZeroAllKeysName_Params
{
	struct FString                                     sourceAnimationName;                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     targetAnimationName;                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                frameId;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SubtractNonZeroAllKeysAllFramesOffsetName
struct UChromaSDKPluginBPLibrary_SubtractNonZeroAllKeysAllFramesOffsetName_Params
{
	struct FString                                     sourceAnimationName;                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     targetAnimationName;                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Offset;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SubtractNonZeroAllKeysAllFramesOffset
struct UChromaSDKPluginBPLibrary_SubtractNonZeroAllKeysAllFramesOffset_Params
{
	int                                                sourceAnimationId;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                targetAnimationId;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Offset;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SubtractNonZeroAllKeysAllFramesName
struct UChromaSDKPluginBPLibrary_SubtractNonZeroAllKeysAllFramesName_Params
{
	struct FString                                     sourceAnimationName;                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     targetAnimationName;                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SubtractNonZeroAllKeysAllFrames
struct UChromaSDKPluginBPLibrary_SubtractNonZeroAllKeysAllFrames_Params
{
	int                                                sourceAnimationId;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                targetAnimationId;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SubtractNonZeroAllKeys
struct UChromaSDKPluginBPLibrary_SubtractNonZeroAllKeys_Params
{
	int                                                sourceAnimationId;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                targetAnimationId;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                frameId;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.StopAnimationType
struct UChromaSDKPluginBPLibrary_StopAnimationType_Params
{
	TEnumAsByte<ChromaSDKPlugin_EChromaSDKDeviceEnum>  Device;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.StopAnimations
struct UChromaSDKPluginBPLibrary_StopAnimations_Params
{
	TArray<struct FString>                             animationNames;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.StopAnimationComposite
struct UChromaSDKPluginBPLibrary_StopAnimationComposite_Params
{
	struct FString                                     animationName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.StopAnimation
struct UChromaSDKPluginBPLibrary_StopAnimation_Params
{
	struct FString                                     animationName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.StopAll
struct UChromaSDKPluginBPLibrary_StopAll_Params
{
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetMouseLedColor
struct UChromaSDKPluginBPLibrary_SetMouseLedColor_Params
{
	TEnumAsByte<ChromaSDKPlugin_EChromaSDKMouseLed>    led;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                colorParam;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FChromaSDKColors>                    Colors;                                                    // (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysNonZeroColorName
struct UChromaSDKPluginBPLibrary_SetKeysNonZeroColorName_Params
{
	struct FString                                     animationName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                frameIndex;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TEnumAsByte<ChromaSDKPlugin_EChromaSDKKeyboardKey>> Keys;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLinearColor                                colorParam;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysNonZeroColorAllFramesName
struct UChromaSDKPluginBPLibrary_SetKeysNonZeroColorAllFramesName_Params
{
	struct FString                                     animationName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TEnumAsByte<ChromaSDKPlugin_EChromaSDKKeyboardKey>> Keys;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLinearColor                                colorParam;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysNonZeroColorAllFrames
struct UChromaSDKPluginBPLibrary_SetKeysNonZeroColorAllFrames_Params
{
	int                                                animationId;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TEnumAsByte<ChromaSDKPlugin_EChromaSDKKeyboardKey>> Keys;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLinearColor                                colorParam;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysNonZeroColor
struct UChromaSDKPluginBPLibrary_SetKeysNonZeroColor_Params
{
	int                                                animationId;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                frameIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TEnumAsByte<ChromaSDKPlugin_EChromaSDKKeyboardKey>> Keys;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLinearColor                                colorParam;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysColorRGBName
struct UChromaSDKPluginBPLibrary_SetKeysColorRGBName_Params
{
	struct FString                                     animationName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                frameIndex;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TEnumAsByte<ChromaSDKPlugin_EChromaSDKKeyboardKey>> Keys;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	int                                                red;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                green;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                blue;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysColorRGB
struct UChromaSDKPluginBPLibrary_SetKeysColorRGB_Params
{
	int                                                animationId;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                frameIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TEnumAsByte<ChromaSDKPlugin_EChromaSDKKeyboardKey>> Keys;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	int                                                red;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                green;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                blue;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysColorName
struct UChromaSDKPluginBPLibrary_SetKeysColorName_Params
{
	struct FString                                     animationName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                frameIndex;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TEnumAsByte<ChromaSDKPlugin_EChromaSDKKeyboardKey>> Keys;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLinearColor                                colorParam;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysColorAllFramesRGBName
struct UChromaSDKPluginBPLibrary_SetKeysColorAllFramesRGBName_Params
{
	struct FString                                     animationName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TEnumAsByte<ChromaSDKPlugin_EChromaSDKKeyboardKey>> Keys;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	int                                                red;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                green;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                blue;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysColorAllFramesRGB
struct UChromaSDKPluginBPLibrary_SetKeysColorAllFramesRGB_Params
{
	int                                                animationId;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TEnumAsByte<ChromaSDKPlugin_EChromaSDKKeyboardKey>> Keys;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	int                                                red;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                green;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                blue;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysColorAllFramesName
struct UChromaSDKPluginBPLibrary_SetKeysColorAllFramesName_Params
{
	struct FString                                     animationName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TEnumAsByte<ChromaSDKPlugin_EChromaSDKKeyboardKey>> Keys;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLinearColor                                colorParam;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysColorAllFrames
struct UChromaSDKPluginBPLibrary_SetKeysColorAllFrames_Params
{
	int                                                animationId;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TEnumAsByte<ChromaSDKPlugin_EChromaSDKKeyboardKey>> Keys;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLinearColor                                colorParam;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysColor
struct UChromaSDKPluginBPLibrary_SetKeysColor_Params
{
	int                                                animationId;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                frameIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TEnumAsByte<ChromaSDKPlugin_EChromaSDKKeyboardKey>> Keys;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLinearColor                                colorParam;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeyNonZeroColorName
struct UChromaSDKPluginBPLibrary_SetKeyNonZeroColorName_Params
{
	struct FString                                     animationName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                frameIndex;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ChromaSDKPlugin_EChromaSDKKeyboardKey> Key;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                colorParam;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeyNonZeroColorAllFramesName
struct UChromaSDKPluginBPLibrary_SetKeyNonZeroColorAllFramesName_Params
{
	struct FString                                     animationName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ChromaSDKPlugin_EChromaSDKKeyboardKey> Key;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                colorParam;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeyNonZeroColorAllFrames
struct UChromaSDKPluginBPLibrary_SetKeyNonZeroColorAllFrames_Params
{
	int                                                animationId;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ChromaSDKPlugin_EChromaSDKKeyboardKey> Key;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                colorParam;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeyNonZeroColor
struct UChromaSDKPluginBPLibrary_SetKeyNonZeroColor_Params
{
	int                                                animationId;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                frameIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ChromaSDKPlugin_EChromaSDKKeyboardKey> Key;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                colorParam;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeyColorName
struct UChromaSDKPluginBPLibrary_SetKeyColorName_Params
{
	struct FString                                     animationName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                frameIndex;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ChromaSDKPlugin_EChromaSDKKeyboardKey> Key;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                colorParam;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeyColorAllFramesName
struct UChromaSDKPluginBPLibrary_SetKeyColorAllFramesName_Params
{
	struct FString                                     animationName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ChromaSDKPlugin_EChromaSDKKeyboardKey> Key;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                colorParam;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeyColorAllFrames
struct UChromaSDKPluginBPLibrary_SetKeyColorAllFrames_Params
{
	int                                                animationId;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ChromaSDKPlugin_EChromaSDKKeyboardKey> Key;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                colorParam;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeyColor
struct UChromaSDKPluginBPLibrary_SetKeyColor_Params
{
	int                                                animationId;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                frameIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ChromaSDKPlugin_EChromaSDKKeyboardKey> Key;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                colorParam;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeyboardKeyColor
struct UChromaSDKPluginBPLibrary_SetKeyboardKeyColor_Params
{
	TEnumAsByte<ChromaSDKPlugin_EChromaSDKKeyboardKey> Key;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                colorParam;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FChromaSDKColors>                    Colors;                                                    // (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetChromaCustomFlagName
struct UChromaSDKPluginBPLibrary_SetChromaCustomFlagName_Params
{
	struct FString                                     animationName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               flag;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetChromaCustomColorAllFramesName
struct UChromaSDKPluginBPLibrary_SetChromaCustomColorAllFramesName_Params
{
	struct FString                                     animationName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ReverseAllFramesName
struct UChromaSDKPluginBPLibrary_ReverseAllFramesName_Params
{
	struct FString                                     animationName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ReverseAllFrames
struct UChromaSDKPluginBPLibrary_ReverseAllFrames_Params
{
	int                                                animationId;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ReduceFramesName
struct UChromaSDKPluginBPLibrary_ReduceFramesName_Params
{
	struct FString                                     animationName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                N;                                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ReduceFrames
struct UChromaSDKPluginBPLibrary_ReduceFrames_Params
{
	int                                                animationId;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                N;                                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.PreviewFrameName
struct UChromaSDKPluginBPLibrary_PreviewFrameName_Params
{
	struct FString                                     animationName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                frameId;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.PreviewFrame
struct UChromaSDKPluginBPLibrary_PreviewFrame_Params
{
	int                                                animationId;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                frameId;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.PlayAnimations
struct UChromaSDKPluginBPLibrary_PlayAnimations_Params
{
	TArray<struct FString>                             animationNames;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               Loop;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.PlayAnimationName
struct UChromaSDKPluginBPLibrary_PlayAnimationName_Params
{
	struct FString                                     animationName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Loop;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.PlayAnimationComposite
struct UChromaSDKPluginBPLibrary_PlayAnimationComposite_Params
{
	struct FString                                     animationName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Loop;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.PlayAnimation
struct UChromaSDKPluginBPLibrary_PlayAnimation_Params
{
	struct FString                                     animationName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Loop;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.OverrideFrameDurationName
struct UChromaSDKPluginBPLibrary_OverrideFrameDurationName_Params
{
	struct FString                                     animationName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Duration;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.OffsetNonZeroColorsName
struct UChromaSDKPluginBPLibrary_OffsetNonZeroColorsName_Params
{
	struct FString                                     animationName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                frameId;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                red;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                green;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                blue;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.OffsetNonZeroColorsAllFramesName
struct UChromaSDKPluginBPLibrary_OffsetNonZeroColorsAllFramesName_Params
{
	struct FString                                     animationName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                red;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                green;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                blue;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.OffsetNonZeroColorsAllFrames
struct UChromaSDKPluginBPLibrary_OffsetNonZeroColorsAllFrames_Params
{
	int                                                animationId;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                red;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                green;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                blue;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.OffsetNonZeroColors
struct UChromaSDKPluginBPLibrary_OffsetNonZeroColors_Params
{
	int                                                animationId;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                frameId;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                red;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                green;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                blue;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.OffsetColorsName
struct UChromaSDKPluginBPLibrary_OffsetColorsName_Params
{
	struct FString                                     animationName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                frameId;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                red;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                green;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                blue;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.OffsetColorsAllFramesName
struct UChromaSDKPluginBPLibrary_OffsetColorsAllFramesName_Params
{
	struct FString                                     animationName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                red;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                green;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                blue;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.OffsetColorsAllFrames
struct UChromaSDKPluginBPLibrary_OffsetColorsAllFrames_Params
{
	int                                                animationId;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                red;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                green;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                blue;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.OffsetColors
struct UChromaSDKPluginBPLibrary_OffsetColors_Params
{
	int                                                animationId;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                frameId;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                red;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                green;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                blue;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyTargetColorLerpAllFramesName
struct UChromaSDKPluginBPLibrary_MultiplyTargetColorLerpAllFramesName_Params
{
	struct FString                                     animationName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                colorParam1;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                colorParam2;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyTargetColorLerpAllFrames
struct UChromaSDKPluginBPLibrary_MultiplyTargetColorLerpAllFrames_Params
{
	int                                                animationId;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                colorParam1;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                colorParam2;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyNonZeroTargetColorLerpAllFramesName
struct UChromaSDKPluginBPLibrary_MultiplyNonZeroTargetColorLerpAllFramesName_Params
{
	struct FString                                     animationName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                colorParam1;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                colorParam2;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyNonZeroTargetColorLerpAllFrames
struct UChromaSDKPluginBPLibrary_MultiplyNonZeroTargetColorLerpAllFrames_Params
{
	int                                                animationId;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                colorParam1;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                colorParam2;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyIntensityRGBName
struct UChromaSDKPluginBPLibrary_MultiplyIntensityRGBName_Params
{
	struct FString                                     animationName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                frameId;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                red;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                green;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                blue;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyIntensityRGB
struct UChromaSDKPluginBPLibrary_MultiplyIntensityRGB_Params
{
	int                                                animationId;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                frameId;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                red;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                green;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                blue;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyIntensityName
struct UChromaSDKPluginBPLibrary_MultiplyIntensityName_Params
{
	struct FString                                     animationName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                frameId;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Intensity;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyIntensityColorName
struct UChromaSDKPluginBPLibrary_MultiplyIntensityColorName_Params
{
	struct FString                                     animationName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                frameId;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                colorParam;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyIntensityColorAllFramesName
struct UChromaSDKPluginBPLibrary_MultiplyIntensityColorAllFramesName_Params
{
	struct FString                                     animationName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                colorParam;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyIntensityColorAllFrames
struct UChromaSDKPluginBPLibrary_MultiplyIntensityColorAllFrames_Params
{
	int                                                animationId;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                colorParam;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyIntensityColor
struct UChromaSDKPluginBPLibrary_MultiplyIntensityColor_Params
{
	int                                                animationId;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                frameId;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                colorParam;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyIntensityAllFramesRGBName
struct UChromaSDKPluginBPLibrary_MultiplyIntensityAllFramesRGBName_Params
{
	struct FString                                     animationName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              redIntensity;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              greenIntensity;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              blueIntensity;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyIntensityAllFramesRGB
struct UChromaSDKPluginBPLibrary_MultiplyIntensityAllFramesRGB_Params
{
	int                                                animationId;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              redIntensity;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              greenIntensity;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              blueIntensity;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyIntensityAllFramesName
struct UChromaSDKPluginBPLibrary_MultiplyIntensityAllFramesName_Params
{
	struct FString                                     animationName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Intensity;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyIntensityAllFrames
struct UChromaSDKPluginBPLibrary_MultiplyIntensityAllFrames_Params
{
	int                                                animationId;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Intensity;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyIntensity
struct UChromaSDKPluginBPLibrary_MultiplyIntensity_Params
{
	int                                                animationId;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                frameId;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Intensity;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyColorLerpAllFramesName
struct UChromaSDKPluginBPLibrary_MultiplyColorLerpAllFramesName_Params
{
	struct FString                                     animationName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                colorParam1;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                colorParam2;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyColorLerpAllFrames
struct UChromaSDKPluginBPLibrary_MultiplyColorLerpAllFrames_Params
{
	int                                                animationId;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                colorParam1;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                colorParam2;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MakeBlankFramesRGBName
struct UChromaSDKPluginBPLibrary_MakeBlankFramesRGBName_Params
{
	struct FString                                     animationName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                frameCount;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Duration;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                red;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                green;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                blue;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MakeBlankFramesRGB
struct UChromaSDKPluginBPLibrary_MakeBlankFramesRGB_Params
{
	int                                                animationId;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                frameCount;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Duration;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                red;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                green;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                blue;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MakeBlankFramesRandomName
struct UChromaSDKPluginBPLibrary_MakeBlankFramesRandomName_Params
{
	struct FString                                     animationName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                frameCount;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Duration;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MakeBlankFramesRandomBlackAndWhiteName
struct UChromaSDKPluginBPLibrary_MakeBlankFramesRandomBlackAndWhiteName_Params
{
	struct FString                                     animationName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                frameCount;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Duration;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MakeBlankFramesRandomBlackAndWhite
struct UChromaSDKPluginBPLibrary_MakeBlankFramesRandomBlackAndWhite_Params
{
	int                                                animationId;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                frameCount;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Duration;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MakeBlankFramesRandom
struct UChromaSDKPluginBPLibrary_MakeBlankFramesRandom_Params
{
	int                                                animationId;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                frameCount;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Duration;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MakeBlankFramesName
struct UChromaSDKPluginBPLibrary_MakeBlankFramesName_Params
{
	struct FString                                     animationName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                frameCount;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Duration;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                colorParam;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MakeBlankFrames
struct UChromaSDKPluginBPLibrary_MakeBlankFrames_Params
{
	int                                                animationId;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                frameCount;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Duration;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                colorParam;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.LoadAnimationName
struct UChromaSDKPluginBPLibrary_LoadAnimationName_Params
{
	struct FString                                     animationName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.LoadAnimation
struct UChromaSDKPluginBPLibrary_LoadAnimation_Params
{
	int                                                animationId;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.LerpColorBGR
struct UChromaSDKPluginBPLibrary_LerpColorBGR_Params
{
	int                                                from;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                to;                                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              T;                                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.LerpColor
struct UChromaSDKPluginBPLibrary_LerpColor_Params
{
	struct FLinearColor                                colorParam1;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                colorParam2;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              T;                                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.Lerp
struct UChromaSDKPluginBPLibrary_Lerp_Params
{
	float                                              Start;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              End;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              amt;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.IsPlatformWindows
struct UChromaSDKPluginBPLibrary_IsPlatformWindows_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.IsInitialized
struct UChromaSDKPluginBPLibrary_IsInitialized_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.IsAnimationTypePlaying
struct UChromaSDKPluginBPLibrary_IsAnimationTypePlaying_Params
{
	TEnumAsByte<ChromaSDKPlugin_EChromaSDKDeviceEnum>  Device;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.IsAnimationPlaying
struct UChromaSDKPluginBPLibrary_IsAnimationPlaying_Params
{
	struct FString                                     animationName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.InvertColorsAllFramesName
struct UChromaSDKPluginBPLibrary_InvertColorsAllFramesName_Params
{
	struct FString                                     animationName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.InvertColorsAllFrames
struct UChromaSDKPluginBPLibrary_InvertColorsAllFrames_Params
{
	int                                                animationId;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.InsertFrameName
struct UChromaSDKPluginBPLibrary_InsertFrameName_Params
{
	struct FString                                     animationName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                sourceFrame;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                targetFrame;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.InsertFrame
struct UChromaSDKPluginBPLibrary_InsertFrame_Params
{
	int                                                animationId;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                sourceFrame;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                targetFrame;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.InsertDelayName
struct UChromaSDKPluginBPLibrary_InsertDelayName_Params
{
	struct FString                                     animationName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                frameId;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Delay;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.InsertDelay
struct UChromaSDKPluginBPLibrary_InsertDelay_Params
{
	int                                                animationId;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                frameId;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Delay;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetRGB
struct UChromaSDKPluginBPLibrary_GetRGB_Params
{
	int                                                red;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                green;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                blue;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetPlayingAnimationId
struct UChromaSDKPluginBPLibrary_GetPlayingAnimationId_Params
{
	int                                                Index;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetPlayingAnimationCount
struct UChromaSDKPluginBPLibrary_GetPlayingAnimationCount_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetMouseLedColor
struct UChromaSDKPluginBPLibrary_GetMouseLedColor_Params
{
	TEnumAsByte<ChromaSDKPlugin_EChromaSDKMouseLed>    led;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FChromaSDKColors>                    Colors;                                                    // (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetMaxRow
struct UChromaSDKPluginBPLibrary_GetMaxRow_Params
{
	TEnumAsByte<ChromaSDKPlugin_EChromaSDKDevice2DEnum> Device;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetMaxLeds
struct UChromaSDKPluginBPLibrary_GetMaxLeds_Params
{
	TEnumAsByte<ChromaSDKPlugin_EChromaSDKDevice1DEnum> Device;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetMaxColumn
struct UChromaSDKPluginBPLibrary_GetMaxColumn_Params
{
	TEnumAsByte<ChromaSDKPlugin_EChromaSDKDevice2DEnum> Device;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetKeyColorName
struct UChromaSDKPluginBPLibrary_GetKeyColorName_Params
{
	struct FString                                     animationName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                frameIndex;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ChromaSDKPlugin_EChromaSDKKeyboardKey> Key;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetKeyColor
struct UChromaSDKPluginBPLibrary_GetKeyColor_Params
{
	int                                                animationId;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                frameIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ChromaSDKPlugin_EChromaSDKKeyboardKey> Key;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetKeyboardRazerKey
struct UChromaSDKPluginBPLibrary_GetKeyboardRazerKey_Params
{
	struct FKey                                        Key;                                                       // (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ChromaSDKPlugin_EChromaSDKKeyboardKey> ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetKeyboardKeyColor
struct UChromaSDKPluginBPLibrary_GetKeyboardKeyColor_Params
{
	TEnumAsByte<ChromaSDKPlugin_EChromaSDKKeyboardKey> Key;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FChromaSDKColors>                    Colors;                                                    // (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetFrameCountName
struct UChromaSDKPluginBPLibrary_GetFrameCountName_Params
{
	struct FString                                     animationName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetFrameCount
struct UChromaSDKPluginBPLibrary_GetFrameCount_Params
{
	int                                                animationId;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetAnimationName
struct UChromaSDKPluginBPLibrary_GetAnimationName_Params
{
	int                                                animationId;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetAnimationIdByIndex
struct UChromaSDKPluginBPLibrary_GetAnimationIdByIndex_Params
{
	int                                                Index;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetAnimationId
struct UChromaSDKPluginBPLibrary_GetAnimationId_Params
{
	struct FString                                     animationName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetAnimationCount
struct UChromaSDKPluginBPLibrary_GetAnimationCount_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetAnimation
struct UChromaSDKPluginBPLibrary_GetAnimation_Params
{
	struct FString                                     animationName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillZeroColorRGBName
struct UChromaSDKPluginBPLibrary_FillZeroColorRGBName_Params
{
	struct FString                                     animationName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                frameId;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                red;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                green;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                blue;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillZeroColorRGB
struct UChromaSDKPluginBPLibrary_FillZeroColorRGB_Params
{
	int                                                animationId;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                frameId;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                red;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                green;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                blue;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillZeroColorName
struct UChromaSDKPluginBPLibrary_FillZeroColorName_Params
{
	struct FString                                     animationName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                frameId;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                colorParam;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillZeroColorAllFramesRGBName
struct UChromaSDKPluginBPLibrary_FillZeroColorAllFramesRGBName_Params
{
	struct FString                                     animationName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                red;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                green;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                blue;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillZeroColorAllFramesRGB
struct UChromaSDKPluginBPLibrary_FillZeroColorAllFramesRGB_Params
{
	int                                                animationId;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                red;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                green;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                blue;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillZeroColorAllFramesName
struct UChromaSDKPluginBPLibrary_FillZeroColorAllFramesName_Params
{
	struct FString                                     animationName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                colorParam;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillZeroColorAllFrames
struct UChromaSDKPluginBPLibrary_FillZeroColorAllFrames_Params
{
	int                                                animationId;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                colorParam;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillZeroColor
struct UChromaSDKPluginBPLibrary_FillZeroColor_Params
{
	int                                                animationId;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                frameId;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                colorParam;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillThresholdRGBColorsAllFramesRGBName
struct UChromaSDKPluginBPLibrary_FillThresholdRGBColorsAllFramesRGBName_Params
{
	struct FString                                     animationName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                redThreshold;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                greenThreshold;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                blueThreshold;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                red;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                green;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                blue;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillThresholdRGBColorsAllFramesRGB
struct UChromaSDKPluginBPLibrary_FillThresholdRGBColorsAllFramesRGB_Params
{
	int                                                animationId;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                redThreshold;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                greenThreshold;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                blueThreshold;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                red;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                green;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                blue;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillThresholdColorsRGBName
struct UChromaSDKPluginBPLibrary_FillThresholdColorsRGBName_Params
{
	struct FString                                     animationName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                frameId;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Threshold;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                red;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                green;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                blue;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillThresholdColorsRGB
struct UChromaSDKPluginBPLibrary_FillThresholdColorsRGB_Params
{
	int                                                animationId;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                frameId;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Threshold;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                red;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                green;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                blue;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillThresholdColorsMinMaxAllFramesRGBName
struct UChromaSDKPluginBPLibrary_FillThresholdColorsMinMaxAllFramesRGBName_Params
{
	struct FString                                     animationName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                minThreshold;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                minRed;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                minGreen;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                minBlue;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                maxThreshold;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                maxRed;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                maxGreen;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                maxBlue;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillThresholdColorsMinMaxAllFramesRGB
struct UChromaSDKPluginBPLibrary_FillThresholdColorsMinMaxAllFramesRGB_Params
{
	int                                                animationId;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                minThreshold;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                minRed;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                minGreen;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                minBlue;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                maxThreshold;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                maxRed;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                maxGreen;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                maxBlue;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillThresholdColorsAllFramesRGBName
struct UChromaSDKPluginBPLibrary_FillThresholdColorsAllFramesRGBName_Params
{
	struct FString                                     animationName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Threshold;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                red;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                green;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                blue;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillThresholdColorsAllFramesRGB
struct UChromaSDKPluginBPLibrary_FillThresholdColorsAllFramesRGB_Params
{
	int                                                animationId;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Threshold;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                red;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                green;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                blue;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillThresholdColorsAllFramesName
struct UChromaSDKPluginBPLibrary_FillThresholdColorsAllFramesName_Params
{
	struct FString                                     animationName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Threshold;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                colorParam;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillThresholdColorsAllFrames
struct UChromaSDKPluginBPLibrary_FillThresholdColorsAllFrames_Params
{
	int                                                animationId;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Threshold;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                colorParam;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillRandomColorsName
struct UChromaSDKPluginBPLibrary_FillRandomColorsName_Params
{
	struct FString                                     animationName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                frameId;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillRandomColorsBlackAndWhiteName
struct UChromaSDKPluginBPLibrary_FillRandomColorsBlackAndWhiteName_Params
{
	struct FString                                     animationName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                frameId;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillRandomColorsBlackAndWhiteAllFramesName
struct UChromaSDKPluginBPLibrary_FillRandomColorsBlackAndWhiteAllFramesName_Params
{
	struct FString                                     animationName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillRandomColorsBlackAndWhiteAllFrames
struct UChromaSDKPluginBPLibrary_FillRandomColorsBlackAndWhiteAllFrames_Params
{
	int                                                animationId;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillRandomColorsBlackAndWhite
struct UChromaSDKPluginBPLibrary_FillRandomColorsBlackAndWhite_Params
{
	int                                                animationId;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                frameId;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillRandomColorsAllFramesName
struct UChromaSDKPluginBPLibrary_FillRandomColorsAllFramesName_Params
{
	struct FString                                     animationName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillRandomColorsAllFrames
struct UChromaSDKPluginBPLibrary_FillRandomColorsAllFrames_Params
{
	int                                                animationId;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillRandomColors
struct UChromaSDKPluginBPLibrary_FillRandomColors_Params
{
	int                                                animationId;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                frameId;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillNonZeroColorRGBName
struct UChromaSDKPluginBPLibrary_FillNonZeroColorRGBName_Params
{
	struct FString                                     animationName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                frameId;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                red;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                green;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                blue;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillNonZeroColorRGB
struct UChromaSDKPluginBPLibrary_FillNonZeroColorRGB_Params
{
	int                                                animationId;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                frameId;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                red;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                green;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                blue;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillNonZeroColorName
struct UChromaSDKPluginBPLibrary_FillNonZeroColorName_Params
{
	struct FString                                     animationName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                frameId;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                colorParam;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillNonZeroColorAllFramesRGBName
struct UChromaSDKPluginBPLibrary_FillNonZeroColorAllFramesRGBName_Params
{
	struct FString                                     animationName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                red;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                green;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                blue;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillNonZeroColorAllFramesRGB
struct UChromaSDKPluginBPLibrary_FillNonZeroColorAllFramesRGB_Params
{
	int                                                animationId;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                red;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                green;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                blue;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillNonZeroColorAllFramesName
struct UChromaSDKPluginBPLibrary_FillNonZeroColorAllFramesName_Params
{
	struct FString                                     animationName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                colorParam;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillNonZeroColorAllFrames
struct UChromaSDKPluginBPLibrary_FillNonZeroColorAllFrames_Params
{
	int                                                animationId;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                colorParam;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillNonZeroColor
struct UChromaSDKPluginBPLibrary_FillNonZeroColor_Params
{
	int                                                animationId;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                frameId;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                colorParam;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillColorRGBName
struct UChromaSDKPluginBPLibrary_FillColorRGBName_Params
{
	struct FString                                     animationName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                frameId;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                red;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                green;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                blue;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillColorRGB
struct UChromaSDKPluginBPLibrary_FillColorRGB_Params
{
	int                                                animationId;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                frameId;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                red;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                green;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                blue;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillColorName
struct UChromaSDKPluginBPLibrary_FillColorName_Params
{
	struct FString                                     animationName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                frameId;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                colorParam;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillColorAllFramesRGBName
struct UChromaSDKPluginBPLibrary_FillColorAllFramesRGBName_Params
{
	struct FString                                     animationName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                red;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                green;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                blue;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillColorAllFramesRGB
struct UChromaSDKPluginBPLibrary_FillColorAllFramesRGB_Params
{
	int                                                animationId;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                red;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                green;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                blue;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillColorAllFramesName
struct UChromaSDKPluginBPLibrary_FillColorAllFramesName_Params
{
	struct FString                                     animationName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                colorParam;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillColorAllFrames
struct UChromaSDKPluginBPLibrary_FillColorAllFrames_Params
{
	int                                                animationId;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                colorParam;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillColor
struct UChromaSDKPluginBPLibrary_FillColor_Params
{
	int                                                animationId;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                frameId;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                colorParam;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FadeStartFramesName
struct UChromaSDKPluginBPLibrary_FadeStartFramesName_Params
{
	struct FString                                     animationName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                fade;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FadeStartFrames
struct UChromaSDKPluginBPLibrary_FadeStartFrames_Params
{
	int                                                animationId;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                fade;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FadeEndFramesName
struct UChromaSDKPluginBPLibrary_FadeEndFramesName_Params
{
	struct FString                                     animationName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                fade;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FadeEndFrames
struct UChromaSDKPluginBPLibrary_FadeEndFrames_Params
{
	int                                                animationId;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                fade;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.DuplicateMirrorFramesName
struct UChromaSDKPluginBPLibrary_DuplicateMirrorFramesName_Params
{
	struct FString                                     animationName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.DuplicateMirrorFrames
struct UChromaSDKPluginBPLibrary_DuplicateMirrorFrames_Params
{
	int                                                animationId;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.DuplicateFramesName
struct UChromaSDKPluginBPLibrary_DuplicateFramesName_Params
{
	struct FString                                     animationName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.DuplicateFrames
struct UChromaSDKPluginBPLibrary_DuplicateFrames_Params
{
	int                                                animationId;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.DuplicateFirstFrameName
struct UChromaSDKPluginBPLibrary_DuplicateFirstFrameName_Params
{
	struct FString                                     animationName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                frameCount;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.DuplicateFirstFrame
struct UChromaSDKPluginBPLibrary_DuplicateFirstFrame_Params
{
	int                                                animationId;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                frameCount;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CreateRandomColorsBlackAndWhite2D
struct UChromaSDKPluginBPLibrary_CreateRandomColorsBlackAndWhite2D_Params
{
	TEnumAsByte<ChromaSDKPlugin_EChromaSDKDevice2DEnum> Device;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FChromaSDKColors>                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CreateRandomColorsBlackAndWhite1D
struct UChromaSDKPluginBPLibrary_CreateRandomColorsBlackAndWhite1D_Params
{
	TEnumAsByte<ChromaSDKPlugin_EChromaSDKDevice1DEnum> Device;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FLinearColor>                        ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CreateRandomColors2D
struct UChromaSDKPluginBPLibrary_CreateRandomColors2D_Params
{
	TEnumAsByte<ChromaSDKPlugin_EChromaSDKDevice2DEnum> Device;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FChromaSDKColors>                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CreateRandomColors1D
struct UChromaSDKPluginBPLibrary_CreateRandomColors1D_Params
{
	TEnumAsByte<ChromaSDKPlugin_EChromaSDKDevice1DEnum> Device;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FLinearColor>                        ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CreateColors2D
struct UChromaSDKPluginBPLibrary_CreateColors2D_Params
{
	TEnumAsByte<ChromaSDKPlugin_EChromaSDKDevice2DEnum> Device;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FChromaSDKColors>                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CreateColors1D
struct UChromaSDKPluginBPLibrary_CreateColors1D_Params
{
	TEnumAsByte<ChromaSDKPlugin_EChromaSDKDevice1DEnum> Device;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FLinearColor>                        ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroTargetAllKeysName
struct UChromaSDKPluginBPLibrary_CopyNonZeroTargetAllKeysName_Params
{
	struct FString                                     sourceAnimationName;                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     targetAnimationName;                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                frameId;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroTargetAllKeysAllFramesOffsetName
struct UChromaSDKPluginBPLibrary_CopyNonZeroTargetAllKeysAllFramesOffsetName_Params
{
	struct FString                                     sourceAnimationName;                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     targetAnimationName;                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Offset;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroTargetAllKeysAllFramesOffset
struct UChromaSDKPluginBPLibrary_CopyNonZeroTargetAllKeysAllFramesOffset_Params
{
	int                                                sourceAnimationId;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                targetAnimationId;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Offset;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroTargetAllKeysAllFramesName
struct UChromaSDKPluginBPLibrary_CopyNonZeroTargetAllKeysAllFramesName_Params
{
	struct FString                                     sourceAnimationName;                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     targetAnimationName;                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroTargetAllKeysAllFrames
struct UChromaSDKPluginBPLibrary_CopyNonZeroTargetAllKeysAllFrames_Params
{
	int                                                sourceAnimationId;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                targetAnimationId;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroTargetAllKeys
struct UChromaSDKPluginBPLibrary_CopyNonZeroTargetAllKeys_Params
{
	int                                                sourceAnimationId;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                targetAnimationId;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                frameId;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroKeysColorName
struct UChromaSDKPluginBPLibrary_CopyNonZeroKeysColorName_Params
{
	struct FString                                     sourceAnimationName;                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     targetAnimationName;                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                frameIndex;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TEnumAsByte<ChromaSDKPlugin_EChromaSDKKeyboardKey>> Keys;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroKeysColorAllFramesName
struct UChromaSDKPluginBPLibrary_CopyNonZeroKeysColorAllFramesName_Params
{
	struct FString                                     sourceAnimationName;                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     targetAnimationName;                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TEnumAsByte<ChromaSDKPlugin_EChromaSDKKeyboardKey>> Keys;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroKeysColorAllFrames
struct UChromaSDKPluginBPLibrary_CopyNonZeroKeysColorAllFrames_Params
{
	int                                                sourceAnimationId;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                targetAnimationId;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TEnumAsByte<ChromaSDKPlugin_EChromaSDKKeyboardKey>> Keys;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroKeysColor
struct UChromaSDKPluginBPLibrary_CopyNonZeroKeysColor_Params
{
	int                                                sourceAnimationId;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                targetAnimationId;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                frameIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TEnumAsByte<ChromaSDKPlugin_EChromaSDKKeyboardKey>> Keys;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroKeyColorName
struct UChromaSDKPluginBPLibrary_CopyNonZeroKeyColorName_Params
{
	struct FString                                     sourceAnimationName;                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     targetAnimationName;                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                frameIndex;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ChromaSDKPlugin_EChromaSDKKeyboardKey> Key;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroKeyColor
struct UChromaSDKPluginBPLibrary_CopyNonZeroKeyColor_Params
{
	int                                                sourceAnimationId;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                targetAnimationId;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                frameIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ChromaSDKPlugin_EChromaSDKKeyboardKey> Key;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroAllKeysOffsetName
struct UChromaSDKPluginBPLibrary_CopyNonZeroAllKeysOffsetName_Params
{
	struct FString                                     sourceAnimationName;                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     targetAnimationName;                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                frameId;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Offset;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroAllKeysOffset
struct UChromaSDKPluginBPLibrary_CopyNonZeroAllKeysOffset_Params
{
	int                                                sourceAnimationId;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                targetAnimationId;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                frameId;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Offset;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroAllKeysName
struct UChromaSDKPluginBPLibrary_CopyNonZeroAllKeysName_Params
{
	struct FString                                     sourceAnimationName;                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     targetAnimationName;                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                frameId;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroAllKeysAllFramesOffsetName
struct UChromaSDKPluginBPLibrary_CopyNonZeroAllKeysAllFramesOffsetName_Params
{
	struct FString                                     sourceAnimationName;                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     targetAnimationName;                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Offset;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroAllKeysAllFramesOffset
struct UChromaSDKPluginBPLibrary_CopyNonZeroAllKeysAllFramesOffset_Params
{
	int                                                sourceAnimationId;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                targetAnimationId;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Offset;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroAllKeysAllFramesName
struct UChromaSDKPluginBPLibrary_CopyNonZeroAllKeysAllFramesName_Params
{
	struct FString                                     sourceAnimationName;                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     targetAnimationName;                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroAllKeysAllFrames
struct UChromaSDKPluginBPLibrary_CopyNonZeroAllKeysAllFrames_Params
{
	int                                                sourceAnimationId;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                targetAnimationId;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroAllKeys
struct UChromaSDKPluginBPLibrary_CopyNonZeroAllKeys_Params
{
	int                                                sourceAnimationId;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                targetAnimationId;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                frameId;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyKeysColorName
struct UChromaSDKPluginBPLibrary_CopyKeysColorName_Params
{
	struct FString                                     sourceAnimationName;                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     targetAnimationName;                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                frameIndex;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TEnumAsByte<ChromaSDKPlugin_EChromaSDKKeyboardKey>> Keys;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyKeysColorAllFramesName
struct UChromaSDKPluginBPLibrary_CopyKeysColorAllFramesName_Params
{
	struct FString                                     sourceAnimationName;                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     targetAnimationName;                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TEnumAsByte<ChromaSDKPlugin_EChromaSDKKeyboardKey>> Keys;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyKeysColorAllFrames
struct UChromaSDKPluginBPLibrary_CopyKeysColorAllFrames_Params
{
	int                                                sourceAnimationId;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                targetAnimationId;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TEnumAsByte<ChromaSDKPlugin_EChromaSDKKeyboardKey>> Keys;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyKeysColor
struct UChromaSDKPluginBPLibrary_CopyKeysColor_Params
{
	int                                                sourceAnimationId;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                targetAnimationId;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                frameIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TEnumAsByte<ChromaSDKPlugin_EChromaSDKKeyboardKey>> Keys;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyKeyColorName
struct UChromaSDKPluginBPLibrary_CopyKeyColorName_Params
{
	struct FString                                     sourceAnimationName;                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     targetAnimationName;                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                frameIndex;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ChromaSDKPlugin_EChromaSDKKeyboardKey> Key;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyKeyColor
struct UChromaSDKPluginBPLibrary_CopyKeyColor_Params
{
	int                                                sourceAnimationId;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                targetAnimationId;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                frameIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ChromaSDKPlugin_EChromaSDKKeyboardKey> Key;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyAnimationName
struct UChromaSDKPluginBPLibrary_CopyAnimationName_Params
{
	struct FString                                     sourceAnimationName;                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     targetAnimationName;                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyAnimation
struct UChromaSDKPluginBPLibrary_CopyAnimation_Params
{
	int                                                sourceAnimationId;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     targetAnimationName;                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyAllKeysName
struct UChromaSDKPluginBPLibrary_CopyAllKeysName_Params
{
	struct FString                                     sourceAnimationName;                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     targetAnimationName;                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                frameId;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyAllKeysAllFramesName
struct UChromaSDKPluginBPLibrary_CopyAllKeysAllFramesName_Params
{
	struct FString                                     sourceAnimationName;                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     targetAnimationName;                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyAllKeysAllFrames
struct UChromaSDKPluginBPLibrary_CopyAllKeysAllFrames_Params
{
	int                                                sourceAnimationId;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                targetAnimationId;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyAllKeys
struct UChromaSDKPluginBPLibrary_CopyAllKeys_Params
{
	int                                                sourceAnimationId;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                targetAnimationId;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                frameId;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CloseAnimationName
struct UChromaSDKPluginBPLibrary_CloseAnimationName_Params
{
	struct FString                                     animationName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CloseAnimation
struct UChromaSDKPluginBPLibrary_CloseAnimation_Params
{
	int                                                animationId;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ClearAnimationType
struct UChromaSDKPluginBPLibrary_ClearAnimationType_Params
{
	TEnumAsByte<ChromaSDKPlugin_EChromaSDKDeviceEnum>  Device;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ClearAll
struct UChromaSDKPluginBPLibrary_ClearAll_Params
{
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKUnInit
struct UChromaSDKPluginBPLibrary_ChromaSDKUnInit_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKSetEffect
struct UChromaSDKPluginBPLibrary_ChromaSDKSetEffect_Params
{
	struct FChromaSDKGuid                              EffectId;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKInit
struct UChromaSDKPluginBPLibrary_ChromaSDKInit_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKDeleteEffect
struct UChromaSDKPluginBPLibrary_ChromaSDKDeleteEffect_Params
{
	struct FChromaSDKGuid                              EffectId;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKCreateEffectStatic
struct UChromaSDKPluginBPLibrary_ChromaSDKCreateEffectStatic_Params
{
	TEnumAsByte<ChromaSDKPlugin_EChromaSDKDeviceEnum>  Device;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                colorParam;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FChromaSDKEffectResult                      ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKCreateEffectNone
struct UChromaSDKPluginBPLibrary_ChromaSDKCreateEffectNone_Params
{
	TEnumAsByte<ChromaSDKPlugin_EChromaSDKDeviceEnum>  Device;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FChromaSDKEffectResult                      ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKCreateEffectKeyboardCustom2D
struct UChromaSDKPluginBPLibrary_ChromaSDKCreateEffectKeyboardCustom2D_Params
{
	TArray<struct FChromaSDKColors>                    Colors;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FChromaSDKEffectResult                      ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKCreateEffectCustom2D
struct UChromaSDKPluginBPLibrary_ChromaSDKCreateEffectCustom2D_Params
{
	TEnumAsByte<ChromaSDKPlugin_EChromaSDKDevice2DEnum> Device;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FChromaSDKColors>                    Colors;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FChromaSDKEffectResult                      ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKCreateEffectCustom1D
struct UChromaSDKPluginBPLibrary_ChromaSDKCreateEffectCustom1D_Params
{
	TEnumAsByte<ChromaSDKPlugin_EChromaSDKDevice1DEnum> Device;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FLinearColor>                        Colors;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FChromaSDKEffectResult                      ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.AppendAllFramesName
struct UChromaSDKPluginBPLibrary_AppendAllFramesName_Params
{
	struct FString                                     sourceAnimationName;                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     targetAnimationName;                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.AppendAllFrames
struct UChromaSDKPluginBPLibrary_AppendAllFrames_Params
{
	int                                                sourceAnimationId;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                targetAnimationId;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.AddNonZeroTargetAllKeysAllFramesOffsetName
struct UChromaSDKPluginBPLibrary_AddNonZeroTargetAllKeysAllFramesOffsetName_Params
{
	struct FString                                     sourceAnimationName;                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     targetAnimationName;                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Offset;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.AddNonZeroTargetAllKeysAllFramesOffset
struct UChromaSDKPluginBPLibrary_AddNonZeroTargetAllKeysAllFramesOffset_Params
{
	int                                                sourceAnimationId;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                targetAnimationId;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Offset;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.AddNonZeroTargetAllKeysAllFramesName
struct UChromaSDKPluginBPLibrary_AddNonZeroTargetAllKeysAllFramesName_Params
{
	struct FString                                     sourceAnimationName;                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     targetAnimationName;                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.AddNonZeroTargetAllKeysAllFrames
struct UChromaSDKPluginBPLibrary_AddNonZeroTargetAllKeysAllFrames_Params
{
	int                                                sourceAnimationId;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                targetAnimationId;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.AddNonZeroAllKeysName
struct UChromaSDKPluginBPLibrary_AddNonZeroAllKeysName_Params
{
	struct FString                                     sourceAnimationName;                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     targetAnimationName;                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                frameId;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.AddNonZeroAllKeysAllFramesOffsetName
struct UChromaSDKPluginBPLibrary_AddNonZeroAllKeysAllFramesOffsetName_Params
{
	struct FString                                     sourceAnimationName;                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     targetAnimationName;                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Offset;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.AddNonZeroAllKeysAllFramesOffset
struct UChromaSDKPluginBPLibrary_AddNonZeroAllKeysAllFramesOffset_Params
{
	int                                                sourceAnimationId;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                targetAnimationId;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Offset;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.AddNonZeroAllKeysAllFramesName
struct UChromaSDKPluginBPLibrary_AddNonZeroAllKeysAllFramesName_Params
{
	struct FString                                     sourceAnimationName;                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     targetAnimationName;                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.AddNonZeroAllKeysAllFrames
struct UChromaSDKPluginBPLibrary_AddNonZeroAllKeysAllFrames_Params
{
	int                                                sourceAnimationId;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                targetAnimationId;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.AddNonZeroAllKeys
struct UChromaSDKPluginBPLibrary_AddNonZeroAllKeys_Params
{
	int                                                sourceAnimationId;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                targetAnimationId;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                frameId;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
