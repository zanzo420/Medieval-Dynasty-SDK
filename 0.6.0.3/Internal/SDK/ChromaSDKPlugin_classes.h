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

// Class ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject
// 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
class UChromaSDKPluginAnimation1DObject : public UObject
{
public:
	unsigned char                                      UnknownData_YIS5[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<ChromaSDKPlugin_EChromaSDKDevice1DEnum> Device;                                                    // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZA0S[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FChromaSDKColorFrame1D>              Frames;                                                    // 0x0038(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_S932[0x30];                                    // 0x0048(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject");
		return ptr;
	}



	void Unload();
	bool IsLoaded();
};

// Class ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject
// 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
class UChromaSDKPluginAnimation2DObject : public UObject
{
public:
	unsigned char                                      UnknownData_1DQL[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<ChromaSDKPlugin_EChromaSDKDevice2DEnum> Device;                                                    // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_07Z9[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FChromaSDKColorFrame2D>              Frames;                                                    // 0x0038(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1KRX[0x30];                                    // 0x0048(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject");
		return ptr;
	}



	void Unload();
	bool IsLoaded();
};

// Class ChromaSDKPlugin.ChromaSDKPluginBPLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UChromaSDKPluginBPLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ChromaSDKPlugin.ChromaSDKPluginBPLibrary");
		return ptr;
	}



	void STATIC_UnloadAnimationName(const struct FString& animationName);
	void STATIC_UnloadAnimation(int animationId);
	void STATIC_TrimStartFramesName(const struct FString& animationName, int numberOfFrames);
	void STATIC_TrimStartFrames(int animationId, int numberOfFrames);
	void STATIC_TrimFrameName(const struct FString& animationName, int frameId);
	void STATIC_TrimFrame(int animationId, int frameId);
	void STATIC_TrimEndFramesName(const struct FString& animationName, int lastFrameId);
	void STATIC_TrimEndFrames(int animationId, int lastFrameId);
	struct FLinearColor STATIC_ToLinearColor(int colorParam);
	int STATIC_ToBGR(const struct FLinearColor& colorParam);
	void STATIC_SubtractNonZeroTargetAllKeysAllFramesOffsetName(const struct FString& sourceAnimationName, const struct FString& targetAnimationName, int Offset);
	void STATIC_SubtractNonZeroTargetAllKeysAllFramesOffset(int sourceAnimationId, int targetAnimationId, int Offset);
	void STATIC_SubtractNonZeroTargetAllKeysAllFramesName(const struct FString& sourceAnimationName, const struct FString& targetAnimationName);
	void STATIC_SubtractNonZeroTargetAllKeysAllFrames(int sourceAnimationId, int targetAnimationId);
	void STATIC_SubtractNonZeroAllKeysName(const struct FString& sourceAnimationName, const struct FString& targetAnimationName, int frameId);
	void STATIC_SubtractNonZeroAllKeysAllFramesOffsetName(const struct FString& sourceAnimationName, const struct FString& targetAnimationName, int Offset);
	void STATIC_SubtractNonZeroAllKeysAllFramesOffset(int sourceAnimationId, int targetAnimationId, int Offset);
	void STATIC_SubtractNonZeroAllKeysAllFramesName(const struct FString& sourceAnimationName, const struct FString& targetAnimationName);
	void STATIC_SubtractNonZeroAllKeysAllFrames(int sourceAnimationId, int targetAnimationId);
	void STATIC_SubtractNonZeroAllKeys(int sourceAnimationId, int targetAnimationId, int frameId);
	void STATIC_StopAnimationType(TEnumAsByte<ChromaSDKPlugin_EChromaSDKDeviceEnum> Device);
	void STATIC_StopAnimations(TArray<struct FString> animationNames);
	void STATIC_StopAnimationComposite(const struct FString& animationName);
	void STATIC_StopAnimation(const struct FString& animationName);
	void STATIC_StopAll();
	void STATIC_SetMouseLedColor(TEnumAsByte<ChromaSDKPlugin_EChromaSDKMouseLed> led, const struct FLinearColor& colorParam, TArray<struct FChromaSDKColors>* Colors);
	void STATIC_SetKeysNonZeroColorName(const struct FString& animationName, int frameIndex, TArray<TEnumAsByte<ChromaSDKPlugin_EChromaSDKKeyboardKey>> Keys, const struct FLinearColor& colorParam);
	void STATIC_SetKeysNonZeroColorAllFramesName(const struct FString& animationName, TArray<TEnumAsByte<ChromaSDKPlugin_EChromaSDKKeyboardKey>> Keys, const struct FLinearColor& colorParam);
	void STATIC_SetKeysNonZeroColorAllFrames(int animationId, TArray<TEnumAsByte<ChromaSDKPlugin_EChromaSDKKeyboardKey>> Keys, const struct FLinearColor& colorParam);
	void STATIC_SetKeysNonZeroColor(int animationId, int frameIndex, TArray<TEnumAsByte<ChromaSDKPlugin_EChromaSDKKeyboardKey>> Keys, const struct FLinearColor& colorParam);
	void STATIC_SetKeysColorRGBName(const struct FString& animationName, int frameIndex, TArray<TEnumAsByte<ChromaSDKPlugin_EChromaSDKKeyboardKey>> Keys, int red, int green, int blue);
	void STATIC_SetKeysColorRGB(int animationId, int frameIndex, TArray<TEnumAsByte<ChromaSDKPlugin_EChromaSDKKeyboardKey>> Keys, int red, int green, int blue);
	void STATIC_SetKeysColorName(const struct FString& animationName, int frameIndex, TArray<TEnumAsByte<ChromaSDKPlugin_EChromaSDKKeyboardKey>> Keys, const struct FLinearColor& colorParam);
	void STATIC_SetKeysColorAllFramesRGBName(const struct FString& animationName, TArray<TEnumAsByte<ChromaSDKPlugin_EChromaSDKKeyboardKey>> Keys, int red, int green, int blue);
	void STATIC_SetKeysColorAllFramesRGB(int animationId, TArray<TEnumAsByte<ChromaSDKPlugin_EChromaSDKKeyboardKey>> Keys, int red, int green, int blue);
	void STATIC_SetKeysColorAllFramesName(const struct FString& animationName, TArray<TEnumAsByte<ChromaSDKPlugin_EChromaSDKKeyboardKey>> Keys, const struct FLinearColor& colorParam);
	void STATIC_SetKeysColorAllFrames(int animationId, TArray<TEnumAsByte<ChromaSDKPlugin_EChromaSDKKeyboardKey>> Keys, const struct FLinearColor& colorParam);
	void STATIC_SetKeysColor(int animationId, int frameIndex, TArray<TEnumAsByte<ChromaSDKPlugin_EChromaSDKKeyboardKey>> Keys, const struct FLinearColor& colorParam);
	void STATIC_SetKeyNonZeroColorName(const struct FString& animationName, int frameIndex, TEnumAsByte<ChromaSDKPlugin_EChromaSDKKeyboardKey> Key, const struct FLinearColor& colorParam);
	void STATIC_SetKeyNonZeroColorAllFramesName(const struct FString& animationName, TEnumAsByte<ChromaSDKPlugin_EChromaSDKKeyboardKey> Key, const struct FLinearColor& colorParam);
	void STATIC_SetKeyNonZeroColorAllFrames(int animationId, TEnumAsByte<ChromaSDKPlugin_EChromaSDKKeyboardKey> Key, const struct FLinearColor& colorParam);
	void STATIC_SetKeyNonZeroColor(int animationId, int frameIndex, TEnumAsByte<ChromaSDKPlugin_EChromaSDKKeyboardKey> Key, const struct FLinearColor& colorParam);
	void STATIC_SetKeyColorName(const struct FString& animationName, int frameIndex, TEnumAsByte<ChromaSDKPlugin_EChromaSDKKeyboardKey> Key, const struct FLinearColor& colorParam);
	void STATIC_SetKeyColorAllFramesName(const struct FString& animationName, TEnumAsByte<ChromaSDKPlugin_EChromaSDKKeyboardKey> Key, const struct FLinearColor& colorParam);
	void STATIC_SetKeyColorAllFrames(int animationId, TEnumAsByte<ChromaSDKPlugin_EChromaSDKKeyboardKey> Key, const struct FLinearColor& colorParam);
	void STATIC_SetKeyColor(int animationId, int frameIndex, TEnumAsByte<ChromaSDKPlugin_EChromaSDKKeyboardKey> Key, const struct FLinearColor& colorParam);
	void STATIC_SetKeyboardKeyColor(TEnumAsByte<ChromaSDKPlugin_EChromaSDKKeyboardKey> Key, const struct FLinearColor& colorParam, TArray<struct FChromaSDKColors>* Colors);
	void STATIC_SetChromaCustomFlagName(const struct FString& animationName, bool flag);
	void STATIC_SetChromaCustomColorAllFramesName(const struct FString& animationName);
	void STATIC_ReverseAllFramesName(const struct FString& animationName);
	void STATIC_ReverseAllFrames(int animationId);
	void STATIC_ReduceFramesName(const struct FString& animationName, int N);
	void STATIC_ReduceFrames(int animationId, int N);
	void STATIC_PreviewFrameName(const struct FString& animationName, int frameId);
	int STATIC_PreviewFrame(int animationId, int frameId);
	void STATIC_PlayAnimations(TArray<struct FString> animationNames, bool Loop);
	void STATIC_PlayAnimationName(const struct FString& animationName, bool Loop);
	void STATIC_PlayAnimationComposite(const struct FString& animationName, bool Loop);
	void STATIC_PlayAnimation(const struct FString& animationName, bool Loop);
	void STATIC_OverrideFrameDurationName(const struct FString& animationName, float Duration);
	void STATIC_OffsetNonZeroColorsName(const struct FString& animationName, int frameId, int red, int green, int blue);
	void STATIC_OffsetNonZeroColorsAllFramesName(const struct FString& animationName, int red, int green, int blue);
	void STATIC_OffsetNonZeroColorsAllFrames(int animationId, int red, int green, int blue);
	void STATIC_OffsetNonZeroColors(int animationId, int frameId, int red, int green, int blue);
	void STATIC_OffsetColorsName(const struct FString& animationName, int frameId, int red, int green, int blue);
	void STATIC_OffsetColorsAllFramesName(const struct FString& animationName, int red, int green, int blue);
	void STATIC_OffsetColorsAllFrames(int animationId, int red, int green, int blue);
	void STATIC_OffsetColors(int animationId, int frameId, int red, int green, int blue);
	void STATIC_MultiplyTargetColorLerpAllFramesName(const struct FString& animationName, const struct FLinearColor& colorParam1, const struct FLinearColor& colorParam2);
	void STATIC_MultiplyTargetColorLerpAllFrames(int animationId, const struct FLinearColor& colorParam1, const struct FLinearColor& colorParam2);
	void STATIC_MultiplyNonZeroTargetColorLerpAllFramesName(const struct FString& animationName, const struct FLinearColor& colorParam1, const struct FLinearColor& colorParam2);
	void STATIC_MultiplyNonZeroTargetColorLerpAllFrames(int animationId, const struct FLinearColor& colorParam1, const struct FLinearColor& colorParam2);
	void STATIC_MultiplyIntensityRGBName(const struct FString& animationName, int frameId, int red, int green, int blue);
	void STATIC_MultiplyIntensityRGB(int animationId, int frameId, int red, int green, int blue);
	void STATIC_MultiplyIntensityName(const struct FString& animationName, int frameId, float Intensity);
	void STATIC_MultiplyIntensityColorName(const struct FString& animationName, int frameId, const struct FLinearColor& colorParam);
	void STATIC_MultiplyIntensityColorAllFramesName(const struct FString& animationName, const struct FLinearColor& colorParam);
	void STATIC_MultiplyIntensityColorAllFrames(int animationId, const struct FLinearColor& colorParam);
	void STATIC_MultiplyIntensityColor(int animationId, int frameId, const struct FLinearColor& colorParam);
	void STATIC_MultiplyIntensityAllFramesRGBName(const struct FString& animationName, float redIntensity, float greenIntensity, float blueIntensity);
	void STATIC_MultiplyIntensityAllFramesRGB(int animationId, float redIntensity, float greenIntensity, float blueIntensity);
	void STATIC_MultiplyIntensityAllFramesName(const struct FString& animationName, float Intensity);
	void STATIC_MultiplyIntensityAllFrames(int animationId, float Intensity);
	void STATIC_MultiplyIntensity(int animationId, int frameId, float Intensity);
	void STATIC_MultiplyColorLerpAllFramesName(const struct FString& animationName, const struct FLinearColor& colorParam1, const struct FLinearColor& colorParam2);
	void STATIC_MultiplyColorLerpAllFrames(int animationId, const struct FLinearColor& colorParam1, const struct FLinearColor& colorParam2);
	void STATIC_MakeBlankFramesRGBName(const struct FString& animationName, int frameCount, float Duration, int red, int green, int blue);
	void STATIC_MakeBlankFramesRGB(int animationId, int frameCount, float Duration, int red, int green, int blue);
	void STATIC_MakeBlankFramesRandomName(const struct FString& animationName, int frameCount, float Duration);
	void STATIC_MakeBlankFramesRandomBlackAndWhiteName(const struct FString& animationName, int frameCount, float Duration);
	void STATIC_MakeBlankFramesRandomBlackAndWhite(int animationId, int frameCount, float Duration);
	void STATIC_MakeBlankFramesRandom(int animationId, int frameCount, float Duration);
	void STATIC_MakeBlankFramesName(const struct FString& animationName, int frameCount, float Duration, const struct FLinearColor& colorParam);
	void STATIC_MakeBlankFrames(int animationId, int frameCount, float Duration, const struct FLinearColor& colorParam);
	void STATIC_LoadAnimationName(const struct FString& animationName);
	void STATIC_LoadAnimation(int animationId);
	int STATIC_LerpColorBGR(int from, int to, float T);
	struct FLinearColor STATIC_LerpColor(const struct FLinearColor& colorParam1, const struct FLinearColor& colorParam2, float T);
	float STATIC_Lerp(float Start, float End, float amt);
	bool STATIC_IsPlatformWindows();
	bool STATIC_IsInitialized();
	bool STATIC_IsAnimationTypePlaying(TEnumAsByte<ChromaSDKPlugin_EChromaSDKDeviceEnum> Device);
	bool STATIC_IsAnimationPlaying(const struct FString& animationName);
	void STATIC_InvertColorsAllFramesName(const struct FString& animationName);
	void STATIC_InvertColorsAllFrames(int animationId);
	void STATIC_InsertFrameName(const struct FString& animationName, int sourceFrame, int targetFrame);
	void STATIC_InsertFrame(int animationId, int sourceFrame, int targetFrame);
	void STATIC_InsertDelayName(const struct FString& animationName, int frameId, int Delay);
	void STATIC_InsertDelay(int animationId, int frameId, int Delay);
	struct FLinearColor STATIC_GetRGB(int red, int green, int blue);
	int STATIC_GetPlayingAnimationId(int Index);
	int STATIC_GetPlayingAnimationCount();
	struct FLinearColor STATIC_GetMouseLedColor(TEnumAsByte<ChromaSDKPlugin_EChromaSDKMouseLed> led, TArray<struct FChromaSDKColors>* Colors);
	int STATIC_GetMaxRow(TEnumAsByte<ChromaSDKPlugin_EChromaSDKDevice2DEnum> Device);
	int STATIC_GetMaxLeds(TEnumAsByte<ChromaSDKPlugin_EChromaSDKDevice1DEnum> Device);
	int STATIC_GetMaxColumn(TEnumAsByte<ChromaSDKPlugin_EChromaSDKDevice2DEnum> Device);
	struct FLinearColor STATIC_GetKeyColorName(const struct FString& animationName, int frameIndex, TEnumAsByte<ChromaSDKPlugin_EChromaSDKKeyboardKey> Key);
	struct FLinearColor STATIC_GetKeyColor(int animationId, int frameIndex, TEnumAsByte<ChromaSDKPlugin_EChromaSDKKeyboardKey> Key);
	TEnumAsByte<ChromaSDKPlugin_EChromaSDKKeyboardKey> STATIC_GetKeyboardRazerKey(const struct FKey& Key);
	struct FLinearColor STATIC_GetKeyboardKeyColor(TEnumAsByte<ChromaSDKPlugin_EChromaSDKKeyboardKey> Key, TArray<struct FChromaSDKColors>* Colors);
	int STATIC_GetFrameCountName(const struct FString& animationName);
	int STATIC_GetFrameCount(int animationId);
	struct FString STATIC_GetAnimationName(int animationId);
	int STATIC_GetAnimationIdByIndex(int Index);
	int STATIC_GetAnimationId(const struct FString& animationName);
	int STATIC_GetAnimationCount();
	int STATIC_GetAnimation(const struct FString& animationName);
	void STATIC_FillZeroColorRGBName(const struct FString& animationName, int frameId, int red, int green, int blue);
	void STATIC_FillZeroColorRGB(int animationId, int frameId, int red, int green, int blue);
	void STATIC_FillZeroColorName(const struct FString& animationName, int frameId, const struct FLinearColor& colorParam);
	void STATIC_FillZeroColorAllFramesRGBName(const struct FString& animationName, int red, int green, int blue);
	void STATIC_FillZeroColorAllFramesRGB(int animationId, int red, int green, int blue);
	void STATIC_FillZeroColorAllFramesName(const struct FString& animationName, const struct FLinearColor& colorParam);
	void STATIC_FillZeroColorAllFrames(int animationId, const struct FLinearColor& colorParam);
	void STATIC_FillZeroColor(int animationId, int frameId, const struct FLinearColor& colorParam);
	void STATIC_FillThresholdRGBColorsAllFramesRGBName(const struct FString& animationName, int redThreshold, int greenThreshold, int blueThreshold, int red, int green, int blue);
	void STATIC_FillThresholdRGBColorsAllFramesRGB(int animationId, int redThreshold, int greenThreshold, int blueThreshold, int red, int green, int blue);
	void STATIC_FillThresholdColorsRGBName(const struct FString& animationName, int frameId, int Threshold, int red, int green, int blue);
	void STATIC_FillThresholdColorsRGB(int animationId, int frameId, int Threshold, int red, int green, int blue);
	void STATIC_FillThresholdColorsMinMaxAllFramesRGBName(const struct FString& animationName, int minThreshold, int minRed, int minGreen, int minBlue, int maxThreshold, int maxRed, int maxGreen, int maxBlue);
	void STATIC_FillThresholdColorsMinMaxAllFramesRGB(int animationId, int minThreshold, int minRed, int minGreen, int minBlue, int maxThreshold, int maxRed, int maxGreen, int maxBlue);
	void STATIC_FillThresholdColorsAllFramesRGBName(const struct FString& animationName, int Threshold, int red, int green, int blue);
	void STATIC_FillThresholdColorsAllFramesRGB(int animationId, int Threshold, int red, int green, int blue);
	void STATIC_FillThresholdColorsAllFramesName(const struct FString& animationName, int Threshold, const struct FLinearColor& colorParam);
	void STATIC_FillThresholdColorsAllFrames(int animationId, int Threshold, const struct FLinearColor& colorParam);
	void STATIC_FillRandomColorsName(const struct FString& animationName, int frameId);
	void STATIC_FillRandomColorsBlackAndWhiteName(const struct FString& animationName, int frameId);
	void STATIC_FillRandomColorsBlackAndWhiteAllFramesName(const struct FString& animationName);
	void STATIC_FillRandomColorsBlackAndWhiteAllFrames(int animationId);
	void STATIC_FillRandomColorsBlackAndWhite(int animationId, int frameId);
	void STATIC_FillRandomColorsAllFramesName(const struct FString& animationName);
	void STATIC_FillRandomColorsAllFrames(int animationId);
	void STATIC_FillRandomColors(int animationId, int frameId);
	void STATIC_FillNonZeroColorRGBName(const struct FString& animationName, int frameId, int red, int green, int blue);
	void STATIC_FillNonZeroColorRGB(int animationId, int frameId, int red, int green, int blue);
	void STATIC_FillNonZeroColorName(const struct FString& animationName, int frameId, const struct FLinearColor& colorParam);
	void STATIC_FillNonZeroColorAllFramesRGBName(const struct FString& animationName, int red, int green, int blue);
	void STATIC_FillNonZeroColorAllFramesRGB(int animationId, int red, int green, int blue);
	void STATIC_FillNonZeroColorAllFramesName(const struct FString& animationName, const struct FLinearColor& colorParam);
	void STATIC_FillNonZeroColorAllFrames(int animationId, const struct FLinearColor& colorParam);
	void STATIC_FillNonZeroColor(int animationId, int frameId, const struct FLinearColor& colorParam);
	void STATIC_FillColorRGBName(const struct FString& animationName, int frameId, int red, int green, int blue);
	void STATIC_FillColorRGB(int animationId, int frameId, int red, int green, int blue);
	void STATIC_FillColorName(const struct FString& animationName, int frameId, const struct FLinearColor& colorParam);
	void STATIC_FillColorAllFramesRGBName(const struct FString& animationName, int red, int green, int blue);
	void STATIC_FillColorAllFramesRGB(int animationId, int red, int green, int blue);
	void STATIC_FillColorAllFramesName(const struct FString& animationName, const struct FLinearColor& colorParam);
	void STATIC_FillColorAllFrames(int animationId, const struct FLinearColor& colorParam);
	void STATIC_FillColor(int animationId, int frameId, const struct FLinearColor& colorParam);
	void STATIC_FadeStartFramesName(const struct FString& animationName, int fade);
	void STATIC_FadeStartFrames(int animationId, int fade);
	void STATIC_FadeEndFramesName(const struct FString& animationName, int fade);
	void STATIC_FadeEndFrames(int animationId, int fade);
	void STATIC_DuplicateMirrorFramesName(const struct FString& animationName);
	void STATIC_DuplicateMirrorFrames(int animationId);
	void STATIC_DuplicateFramesName(const struct FString& animationName);
	void STATIC_DuplicateFrames(int animationId);
	void STATIC_DuplicateFirstFrameName(const struct FString& animationName, int frameCount);
	void STATIC_DuplicateFirstFrame(int animationId, int frameCount);
	TArray<struct FChromaSDKColors> STATIC_CreateRandomColorsBlackAndWhite2D(TEnumAsByte<ChromaSDKPlugin_EChromaSDKDevice2DEnum> Device);
	TArray<struct FLinearColor> STATIC_CreateRandomColorsBlackAndWhite1D(TEnumAsByte<ChromaSDKPlugin_EChromaSDKDevice1DEnum> Device);
	TArray<struct FChromaSDKColors> STATIC_CreateRandomColors2D(TEnumAsByte<ChromaSDKPlugin_EChromaSDKDevice2DEnum> Device);
	TArray<struct FLinearColor> STATIC_CreateRandomColors1D(TEnumAsByte<ChromaSDKPlugin_EChromaSDKDevice1DEnum> Device);
	TArray<struct FChromaSDKColors> STATIC_CreateColors2D(TEnumAsByte<ChromaSDKPlugin_EChromaSDKDevice2DEnum> Device);
	TArray<struct FLinearColor> STATIC_CreateColors1D(TEnumAsByte<ChromaSDKPlugin_EChromaSDKDevice1DEnum> Device);
	void STATIC_CopyNonZeroTargetAllKeysName(const struct FString& sourceAnimationName, const struct FString& targetAnimationName, int frameId);
	void STATIC_CopyNonZeroTargetAllKeysAllFramesOffsetName(const struct FString& sourceAnimationName, const struct FString& targetAnimationName, int Offset);
	void STATIC_CopyNonZeroTargetAllKeysAllFramesOffset(int sourceAnimationId, int targetAnimationId, int Offset);
	void STATIC_CopyNonZeroTargetAllKeysAllFramesName(const struct FString& sourceAnimationName, const struct FString& targetAnimationName);
	void STATIC_CopyNonZeroTargetAllKeysAllFrames(int sourceAnimationId, int targetAnimationId);
	void STATIC_CopyNonZeroTargetAllKeys(int sourceAnimationId, int targetAnimationId, int frameId);
	void STATIC_CopyNonZeroKeysColorName(const struct FString& sourceAnimationName, const struct FString& targetAnimationName, int frameIndex, TArray<TEnumAsByte<ChromaSDKPlugin_EChromaSDKKeyboardKey>> Keys);
	void STATIC_CopyNonZeroKeysColorAllFramesName(const struct FString& sourceAnimationName, const struct FString& targetAnimationName, TArray<TEnumAsByte<ChromaSDKPlugin_EChromaSDKKeyboardKey>> Keys);
	void STATIC_CopyNonZeroKeysColorAllFrames(int sourceAnimationId, int targetAnimationId, TArray<TEnumAsByte<ChromaSDKPlugin_EChromaSDKKeyboardKey>> Keys);
	void STATIC_CopyNonZeroKeysColor(int sourceAnimationId, int targetAnimationId, int frameIndex, TArray<TEnumAsByte<ChromaSDKPlugin_EChromaSDKKeyboardKey>> Keys);
	void STATIC_CopyNonZeroKeyColorName(const struct FString& sourceAnimationName, const struct FString& targetAnimationName, int frameIndex, TEnumAsByte<ChromaSDKPlugin_EChromaSDKKeyboardKey> Key);
	void STATIC_CopyNonZeroKeyColor(int sourceAnimationId, int targetAnimationId, int frameIndex, TEnumAsByte<ChromaSDKPlugin_EChromaSDKKeyboardKey> Key);
	void STATIC_CopyNonZeroAllKeysOffsetName(const struct FString& sourceAnimationName, const struct FString& targetAnimationName, int frameId, int Offset);
	void STATIC_CopyNonZeroAllKeysOffset(int sourceAnimationId, int targetAnimationId, int frameId, int Offset);
	void STATIC_CopyNonZeroAllKeysName(const struct FString& sourceAnimationName, const struct FString& targetAnimationName, int frameId);
	void STATIC_CopyNonZeroAllKeysAllFramesOffsetName(const struct FString& sourceAnimationName, const struct FString& targetAnimationName, int Offset);
	void STATIC_CopyNonZeroAllKeysAllFramesOffset(int sourceAnimationId, int targetAnimationId, int Offset);
	void STATIC_CopyNonZeroAllKeysAllFramesName(const struct FString& sourceAnimationName, const struct FString& targetAnimationName);
	void STATIC_CopyNonZeroAllKeysAllFrames(int sourceAnimationId, int targetAnimationId);
	void STATIC_CopyNonZeroAllKeys(int sourceAnimationId, int targetAnimationId, int frameId);
	void STATIC_CopyKeysColorName(const struct FString& sourceAnimationName, const struct FString& targetAnimationName, int frameIndex, TArray<TEnumAsByte<ChromaSDKPlugin_EChromaSDKKeyboardKey>> Keys);
	void STATIC_CopyKeysColorAllFramesName(const struct FString& sourceAnimationName, const struct FString& targetAnimationName, TArray<TEnumAsByte<ChromaSDKPlugin_EChromaSDKKeyboardKey>> Keys);
	void STATIC_CopyKeysColorAllFrames(int sourceAnimationId, int targetAnimationId, TArray<TEnumAsByte<ChromaSDKPlugin_EChromaSDKKeyboardKey>> Keys);
	void STATIC_CopyKeysColor(int sourceAnimationId, int targetAnimationId, int frameIndex, TArray<TEnumAsByte<ChromaSDKPlugin_EChromaSDKKeyboardKey>> Keys);
	void STATIC_CopyKeyColorName(const struct FString& sourceAnimationName, const struct FString& targetAnimationName, int frameIndex, TEnumAsByte<ChromaSDKPlugin_EChromaSDKKeyboardKey> Key);
	void STATIC_CopyKeyColor(int sourceAnimationId, int targetAnimationId, int frameIndex, TEnumAsByte<ChromaSDKPlugin_EChromaSDKKeyboardKey> Key);
	void STATIC_CopyAnimationName(const struct FString& sourceAnimationName, const struct FString& targetAnimationName);
	void STATIC_CopyAnimation(int sourceAnimationId, const struct FString& targetAnimationName);
	void STATIC_CopyAllKeysName(const struct FString& sourceAnimationName, const struct FString& targetAnimationName, int frameId);
	void STATIC_CopyAllKeysAllFramesName(const struct FString& sourceAnimationName, const struct FString& targetAnimationName);
	void STATIC_CopyAllKeysAllFrames(int sourceAnimationId, int targetAnimationId);
	void STATIC_CopyAllKeys(int sourceAnimationId, int targetAnimationId, int frameId);
	void STATIC_CloseAnimationName(const struct FString& animationName);
	void STATIC_CloseAnimation(int animationId);
	void STATIC_ClearAnimationType(TEnumAsByte<ChromaSDKPlugin_EChromaSDKDeviceEnum> Device);
	void STATIC_ClearAll();
	int STATIC_ChromaSDKUnInit();
	int STATIC_ChromaSDKSetEffect(const struct FChromaSDKGuid& EffectId);
	int STATIC_ChromaSDKInit();
	int STATIC_ChromaSDKDeleteEffect(const struct FChromaSDKGuid& EffectId);
	struct FChromaSDKEffectResult STATIC_ChromaSDKCreateEffectStatic(TEnumAsByte<ChromaSDKPlugin_EChromaSDKDeviceEnum> Device, const struct FLinearColor& colorParam);
	struct FChromaSDKEffectResult STATIC_ChromaSDKCreateEffectNone(TEnumAsByte<ChromaSDKPlugin_EChromaSDKDeviceEnum> Device);
	struct FChromaSDKEffectResult STATIC_ChromaSDKCreateEffectKeyboardCustom2D(TArray<struct FChromaSDKColors> Colors);
	struct FChromaSDKEffectResult STATIC_ChromaSDKCreateEffectCustom2D(TEnumAsByte<ChromaSDKPlugin_EChromaSDKDevice2DEnum> Device, TArray<struct FChromaSDKColors> Colors);
	struct FChromaSDKEffectResult STATIC_ChromaSDKCreateEffectCustom1D(TEnumAsByte<ChromaSDKPlugin_EChromaSDKDevice1DEnum> Device, TArray<struct FLinearColor> Colors);
	void STATIC_AppendAllFramesName(const struct FString& sourceAnimationName, const struct FString& targetAnimationName);
	void STATIC_AppendAllFrames(int sourceAnimationId, int targetAnimationId);
	void STATIC_AddNonZeroTargetAllKeysAllFramesOffsetName(const struct FString& sourceAnimationName, const struct FString& targetAnimationName, int Offset);
	void STATIC_AddNonZeroTargetAllKeysAllFramesOffset(int sourceAnimationId, int targetAnimationId, int Offset);
	void STATIC_AddNonZeroTargetAllKeysAllFramesName(const struct FString& sourceAnimationName, const struct FString& targetAnimationName);
	void STATIC_AddNonZeroTargetAllKeysAllFrames(int sourceAnimationId, int targetAnimationId);
	void STATIC_AddNonZeroAllKeysName(const struct FString& sourceAnimationName, const struct FString& targetAnimationName, int frameId);
	void STATIC_AddNonZeroAllKeysAllFramesOffsetName(const struct FString& sourceAnimationName, const struct FString& targetAnimationName, int Offset);
	void STATIC_AddNonZeroAllKeysAllFramesOffset(int sourceAnimationId, int targetAnimationId, int Offset);
	void STATIC_AddNonZeroAllKeysAllFramesName(const struct FString& sourceAnimationName, const struct FString& targetAnimationName);
	void STATIC_AddNonZeroAllKeysAllFrames(int sourceAnimationId, int targetAnimationId);
	void STATIC_AddNonZeroAllKeys(int sourceAnimationId, int targetAnimationId, int frameId);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
