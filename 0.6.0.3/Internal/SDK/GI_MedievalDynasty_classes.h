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

// BlueprintGeneratedClass GI_MedievalDynasty.GI_MedievalDynasty_C
// 0x03C8 (FullSize[0x0578] - InheritedSize[0x01B0])
class UGI_MedievalDynasty_C : public UGI_MedievalDynastyBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x01B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	float                                              DefaultMasterVolumeValue;                                  // 0x01B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MasterVolumeValue;                                         // 0x01BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DefaultSoundEffectVolumeValue;                             // 0x01C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SoundEffectVolumeValue;                                    // 0x01C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DefaultVoiceVolumeValue;                                   // 0x01C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              VoiceVolumeValue;                                          // 0x01CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DefaultMusicVolumeValue;                                   // 0x01D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MusicVolumeValue;                                          // 0x01D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ViewDistanceScale;                                         // 0x01D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PostProcessAAQuality;                                      // 0x01DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PostProcessQuality;                                        // 0x01E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ShadowQuality;                                             // 0x01E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TextureQuality;                                            // 0x01E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                EffectsQuality;                                            // 0x01EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FoliageQuality;                                            // 0x01F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Vsync;                                                     // 0x01F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FrameRateLimit;                                            // 0x01F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FramerateLimitID;                                          // 0x01FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int>                                        ViewDistances;                                             // 0x0200(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                DefaultButtonViewDistanceID;                               // 0x0210(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_TNPA[0x4];                                     // 0x0214(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<int>                                        AntiAliasing;                                              // 0x0218(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                DefaultButtonAntiAliasingID;                               // 0x0228(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_J5GQ[0x4];                                     // 0x022C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<int>                                        PostProcessings;                                           // 0x0230(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                DefaultButtonPostProcessingID;                             // 0x0240(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_MY4X[0x4];                                     // 0x0244(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<int>                                        Shadows;                                                   // 0x0248(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                DefaultButtonShadowsID;                                    // 0x0258(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_PS2U[0x4];                                     // 0x025C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<int>                                        Textures;                                                  // 0x0260(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                DefaultButtonTexturesID;                                   // 0x0270(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_ZGYC[0x4];                                     // 0x0274(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<int>                                        Effects;                                                   // 0x0278(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                DefaultButtonEffectsID;                                    // 0x0288(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_A2IM[0x4];                                     // 0x028C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<int>                                        Foliage;                                                   // 0x0290(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                DefaultButtonFoliageID;                                    // 0x02A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                WindowMode;                                                // 0x02A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int>                                        WindowModes;                                               // 0x02A8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FString                                     Resolution;                                                // 0x02B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<struct FString>                             Resolutions4_3;                                            // 0x02C8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FString>                             Resolutions16_9;                                           // 0x02D8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FString>                             Resolutions16_10;                                          // 0x02E8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FString>                             Resolutions21_9;                                           // 0x02F8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FString>                             Resolutions32_9;                                           // 0x0308(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                DefaultButtonResolutionID;                                 // 0x0318(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   AspectRatio;                                               // 0x031C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                DefaultButtonAspectRatioID;                                // 0x0324(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int>                                        Vsyncs;                                                    // 0x0328(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                DefaultButtonVsyncID;                                      // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                DefaultButtonWindowModeID;                                 // 0x033C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                DefaultFramerateID;                                        // 0x0340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ViewDistanceScaleID;                                       // 0x0344(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PostProcessAAQualityID;                                    // 0x0348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PostProcessQualityID;                                      // 0x034C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ShadowQualityID;                                           // 0x0350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TextureQualityID;                                          // 0x0354(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                EffectsQualityID;                                          // 0x0358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FoliageQualityID;                                          // 0x035C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ResolutionID;                                              // 0x0360(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                AspectRatioID;                                             // 0x0364(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                VsyncID;                                                   // 0x0368(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                WindowModeID;                                              // 0x036C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int>                                        FramerateLimits;                                           // 0x0370(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              TonemapperSharpenValue;                                    // 0x0380(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DefaultTonemapperSharpenValue;                             // 0x0384(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int>                                        TempGraphicArray;                                          // 0x0388(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               DFAO;                                                      // 0x0398(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               DefaultDFAO;                                               // 0x0399(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ORE0[0x2];                                     // 0x039A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                DLSSQualityID;                                             // 0x039C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                DLSSFallbackQualityID;                                     // 0x03A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DLSSSharpness;                                             // 0x03A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                DLSSFallbackAAMethod;                                      // 0x03A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DLSS;                                                      // 0x03AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_4XXO[0x3];                                     // 0x03AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DefaultDLSSSharpness;                                      // 0x03B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                DefaultDLSSQualityID;                                      // 0x03B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                DefaultDLSSFallbackQualityID;                              // 0x03B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                DefaultDLSSFallbackAAMethod;                               // 0x03BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DefaultDLSS;                                               // 0x03C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ContactShadows;                                            // 0x03C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               DefaultContactShadows;                                     // 0x03C2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_JKOZ[0x5];                                     // 0x03C3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<float>                                      TempSoundArray;                                            // 0x03C8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              DefaultUIVolumeValue;                                      // 0x03D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              UIVolumeValue;                                             // 0x03DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DefaultEnvironmentVolumeValue;                             // 0x03E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              EnvironmentVolumeValue;                                    // 0x03E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               SkipMainMenu;                                              // 0x03E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               SkipIntro;                                                 // 0x03E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_02BL[0x2];                                     // 0x03EA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DefaultHorizontalSensitivity;                              // 0x03EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HorizontalSensitivity;                                     // 0x03F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DefaultVerticalSensitivity;                                // 0x03F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              VerticalSensitivity;                                       // 0x03F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DefaultInvertMouse;                                        // 0x03FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               InvertMouse;                                               // 0x03FD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_THZZ[0x2];                                     // 0x03FE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<float>                                      TempGameplayArray;                                         // 0x0400(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FString                                     SelectedLanguage;                                          // 0x0410(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TMap<struct FString, struct FName>                 AcceptableLanguages;                                       // 0x0420(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               WasLanguageFound;                                          // 0x0470(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_UHG1[0x3];                                     // 0x0471(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                LanguageID;                                                // 0x0474(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FOV;                                                       // 0x0478(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DefaultFOV;                                                // 0x047C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DefaultHeadbobbing;                                        // 0x0480(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Headbobbing;                                               // 0x0481(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               DefaultBlood;                                              // 0x0482(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Blood;                                                     // 0x0483(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_KW9C[0x4];                                     // 0x0484(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UUI_ShippingDebug_C*                         DebugWidget;                                               // 0x0488(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Cheats;                                                    // 0x0490(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               TestVersion;                                               // 0x0491(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               InitialLaunch;                                             // 0x0492(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               DefaultSprintOnHold;                                       // 0x0493(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               SprintOnHold;                                              // 0x0494(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               DefaultCrouchOnHold;                                       // 0x0495(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               CrouchOnHold;                                              // 0x0496(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_HTFW[0x1];                                     // 0x0497(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FString>                             QuickslotTypes;                                            // 0x0498(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                SelectedQuickslotsType;                                    // 0x04A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_U30D[0x4];                                     // 0x04AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnGraphicsSettingsChanged;                                 // 0x04B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class USAVE_Settings_C*                            Settings;                                                  // 0x04C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USAVE_Data_C*                                SaveGameDataReference;                                     // 0x04C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      SaveGameGameReference[0x28];                               // 0x04D0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	int                                                BackgroundIndex;                                           // 0x04F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_RXFY[0x4];                                     // 0x04FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FIntPoint>                           Resolutions4_3_Point;                                      // 0x0500(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FIntPoint>                           Resolutions16_9_Point;                                     // 0x0510(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FIntPoint>                           Resolutions16_10_Point;                                    // 0x0520(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FIntPoint>                           Resolutions21_9_Point;                                     // 0x0530(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FIntPoint>                           Resolutions32_9_Point;                                     // 0x0540(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FIntPoint                                   Resolution_Point;                                          // 0x0550(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ShadingQuality;                                            // 0x0558(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_JDZX[0x4];                                     // 0x055C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<int>                                        ShadingQualities;                                          // 0x0560(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                ShadingQualityID;                                          // 0x0570(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                DefaultShadingQualityID;                                   // 0x0574(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GI_MedievalDynasty.GI_MedievalDynasty_C");
		return ptr;
	}



	void RandomizeBackgroundIndex(int* BackgroundIndex);
	void GetBackgroundIndex(int* BackgroundIndex);
	void InitSaveGameData();
	void FixForMissingKeybinds();
	void RestoreDefaultKeybinds();
	void SetDefaultResolutionAndAspectRatioIndex();
	void OnFailure_D41BB5524E76F93D50046596B7260058(class APlayerController* PlayerController);
	void OnSuccess_D41BB5524E76F93D50046596B7260058(class APlayerController* PlayerController);
	void SetSkipIntro(bool SetSkipIntro);
	void SetSkipMainMenu(bool SkipMainMenu);
	void OSSInit();
	void ReceiveInit();
	void SetSettings();
	void GetDefaultSettings();
	void GetSettingsFromFile();
	void CreateDefaultSave();
	void UpdateSoundsVolumes();
	void GetSoundSettingsFromFile();
	void GetGraphicsSettingsFromFile();
	void SetSoundSettings();
	void SetGraphicsSettings();
	void GetGameSettingsFromFile();
	void SetGameSettings();
	void ChangeToQwerty();
	void ChangeToAzerty_FR();
	void ChangeToAzerty_BEFR();
	void ChangeToQwertz_CZ();
	void ReceiveShutdown();
	void ExecuteUbergraph_GI_MedievalDynasty(int EntryPoint);
	void OnGraphicsSettingsChanged__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
