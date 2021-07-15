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

// BlueprintGeneratedClass BP_Chameleon.BP_Chameleon_C
// 0x14A8 (FullSize[0x16C8] - InheritedSize[0x0220])
class ABP_Chameleon_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0220(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UMaterialBillboardComponent*                 MaterialBillboard;                                         // 0x0228(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UPostProcessComponent*                       InternalPP;                                                // 0x0230(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UBoxComponent*                               Bounding_Box;                                              // 0x0238(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              VignetteAnimation_VignetteCurve_C522E5314C1864856C34329B2F3234C6; // 0x0240(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             VignetteAnimation__Direction_C522E5314C1864856C34329B2F3234C6; // 0x0244(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_I223[0x3];                                     // 0x0245(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          VignetteAnimation;                                         // 0x0248(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                               Distance_Fog;                                              // 0x0250(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Channel_Clamper;                                           // 0x0251(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_872V[0x6];                                     // 0x0252(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterial*                                   mChannelClamper;                                           // 0x0258(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    iChannelClamper;                                           // 0x0260(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Channel_Swapper;                                           // 0x0268(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Alcohol;                                                   // 0x0269(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Drug;                                                      // 0x026A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Blur;                                                      // 0x026B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_8588[0x4];                                     // 0x026C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterial*                                   mDistanceFog;                                              // 0x0270(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterial*                                   mChannelSwapper;                                           // 0x0278(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterial*                                   mAlcohol;                                                  // 0x0280(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterial*                                   mDrug;                                                     // 0x0288(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterial*                                   mBlur;                                                     // 0x0290(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Channel_Clamper_Red_Intensity;                             // 0x0298(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              Channel_Clamper_Green_Intensity;                           // 0x029C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              Channel_Clamper_Blue_Intensity;                            // 0x02A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_1VF2[0x4];                                     // 0x02A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInstanceDynamic*                    iDistanceFog;                                              // 0x02A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    iChannelSwapper;                                           // 0x02B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<ColorChannels_EColorChannels>          Channel_Swapper_Red;                                       // 0x02B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<ColorChannels_EColorChannels>          Channel_Swapper_Green;                                     // 0x02B9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<ColorChannels_EColorChannels>          Channel_Swapper_Blue;                                      // 0x02BA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_CT50[0x5];                                     // 0x02BB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInstanceDynamic*                    iAlcohol;                                                  // 0x02C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    iDrug;                                                     // 0x02C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    iBlur;                                                     // 0x02D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Alcohol_Speed;                                             // 0x02D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              Drug_Speed;                                                // 0x02DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              Blur_Amount;                                               // 0x02E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	bool                                               Colorize;                                                  // 0x02E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_Q51Y[0x3];                                     // 0x02E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterial*                                   mColorize;                                                 // 0x02E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    iColorize;                                                 // 0x02F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Colorize_Detail;                                           // 0x02F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	bool                                               Comic;                                                     // 0x02FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_OIYJ[0x3];                                     // 0x02FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterial*                                   mComic;                                                    // 0x0300(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    iComic;                                                    // 0x0308(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Comic_Blend_Color;                                         // 0x0310(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              Comic_Threshold;                                           // 0x0320(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	bool                                               Edge_Detect;                                               // 0x0324(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_QYPE[0x3];                                     // 0x0325(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterial*                                   mEdgeDetect;                                               // 0x0328(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    iEdgeDetect;                                               // 0x0330(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Emboss;                                                    // 0x0338(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_VKG0[0x7];                                     // 0x0339(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterial*                                   mEmboss;                                                   // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    iEmboss;                                                   // 0x0348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Glitch;                                                    // 0x0350(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_OEUP[0x7];                                     // 0x0351(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterial*                                   mGlitch;                                                   // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    iGlitch;                                                   // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Glitch_Speed;                                              // 0x0368(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              Glitch_Lines;                                              // 0x036C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              Glitch_Blocking;                                           // 0x0370(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	bool                                               Hard_Emboss;                                               // 0x0374(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_8XG6[0x3];                                     // 0x0375(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterial*                                   mHardEmboss;                                               // 0x0378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    iHardEmboss;                                               // 0x0380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Hue_Panner;                                                // 0x0388(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_V5HM[0x7];                                     // 0x0389(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterial*                                   mHuePanner;                                                // 0x0390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    iHuePanner;                                                // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Hue_Panner_Speed;                                          // 0x03A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	bool                                               Monochrome;                                                // 0x03A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_9LN0[0x3];                                     // 0x03A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterial*                                   mMonochrome;                                               // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    iMonochrome;                                               // 0x03B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Monochrome_Color;                                          // 0x03B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	bool                                               Radial_Blur;                                               // 0x03C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_H12G[0x7];                                     // 0x03C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterial*                                   mRadialBlur;                                               // 0x03D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    iRadialBlur;                                               // 0x03D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Radial_Blur_Width;                                         // 0x03E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	int                                                Radial_Blur_Samples;                                       // 0x03E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Distance_Fog_Near_Color;                                   // 0x03E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Distance_Fog_Far_Color;                                    // 0x03F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              Distance_Fog_Distance;                                     // 0x0408(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	bool                                               Invert;                                                    // 0x040C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ZG6S[0x3];                                     // 0x040D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterial*                                   mInvert;                                                   // 0x0410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    iInvert;                                                   // 0x0418(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Kuwahara;                                                  // 0x0420(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_TTTI[0x7];                                     // 0x0421(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterial*                                   mKuwahara;                                                 // 0x0428(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    iKuwahara;                                                 // 0x0430(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Kuwahara_Amount;                                           // 0x0438(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	bool                                               Pulse;                                                     // 0x043C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_DA1K[0x3];                                     // 0x043D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterial*                                   mPulse;                                                    // 0x0440(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    iPulse;                                                    // 0x0448(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Pulse_Center_X;                                            // 0x0450(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              Pulse_Center_Y;                                            // 0x0454(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              Pulse_Speed;                                               // 0x0458(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              Pulse_Smoothing;                                           // 0x045C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	bool                                               Tiles;                                                     // 0x0460(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_X96D[0x7];                                     // 0x0461(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterial*                                   mTiles;                                                    // 0x0468(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    iTiles;                                                    // 0x0470(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Tiles_Centered;                                            // 0x0478(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_R9AI[0x3];                                     // 0x0479(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Tiles_Count;                                               // 0x047C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	bool                                               TV_Noise;                                                  // 0x0480(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_HC6P[0x7];                                     // 0x0481(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterial*                                   mTVNoise;                                                  // 0x0488(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    iTVNoise;                                                  // 0x0490(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TV_Noise_Contrast;                                         // 0x0498(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              TV_Noise_Intensity;                                        // 0x049C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	struct FPostProcessSettings                        Native_Post_Process;                                       // 0x04A0(0x0550) (Edit, BlueprintVisible)
	bool                                               Sonar;                                                     // 0x09F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_D8QC[0x7];                                     // 0x09F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterial*                                   mSonar;                                                    // 0x09F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    iSonar;                                                    // 0x0A00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Sonar_Color;                                               // 0x0A08(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              Sonar_Color_Intensity;                                     // 0x0A18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              Sonar_Depth;                                               // 0x0A1C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              Sonar_Wave_Distance;                                       // 0x0A20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              Sonar_Distortion_Intensity;                                // 0x0A24(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              Sonar_Sharpness;                                           // 0x0A28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              Alcohol_Offset;                                            // 0x0A2C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	bool                                               Sharpen;                                                   // 0x0A30(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_UMJ9[0x7];                                     // 0x0A31(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterial*                                   mSharpen;                                                  // 0x0A38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    iSharpen;                                                  // 0x0A40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Sharpen_Value;                                             // 0x0A48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	bool                                               Toon_Shading;                                              // 0x0A4C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	unsigned char                                      UnknownData_TD2P[0x3];                                     // 0x0A4D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterial*                                   mToonShading;                                              // 0x0A50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    iToonShading;                                              // 0x0A58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Toon_Shading_Use_Diffuse_Buffer;                           // 0x0A60(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	unsigned char                                      UnknownData_ADS0[0x3];                                     // 0x0A61(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Toon_Shading_Details;                                      // 0x0A64(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              Toon_Shading_Fading_;                                      // 0x0A68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              Toon_Shading_Size;                                         // 0x0A6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              Toon_Shading_Sobel_Strength;                               // 0x0A70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	bool                                               Custom_Depth_Highlighter;                                  // 0x0A74(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	unsigned char                                      UnknownData_K3IB[0x3];                                     // 0x0A75(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CustomDepthHighlighterOpacity;                             // 0x0A78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_SO71[0x4];                                     // 0x0A7C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterial*                                   mCustomDepthHighlighter;                                   // 0x0A80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    iCustomDepthHighlighter;                                   // 0x0A88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CustomDepthHighlighterIntensity_7___9___11_;               // 0x0A90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                CustomDepthHighlighterColor_7___9___11_;                   // 0x0A94(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	bool                                               Custom_Depth_Highlighter__Clip_;                           // 0x0AA4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	unsigned char                                      UnknownData_WQME[0x3];                                     // 0x0AA5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterial*                                   mCustomDepthHighlighterClip;                               // 0x0AA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    iCustomDepthHighlighterClip;                               // 0x0AB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Custom_Depth_Highlighter__C__Highlight_Color;              // 0x0AB8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              Custom_Depth_Highlighter__C__Highlight_Opacity;            // 0x0AC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              Edge_Detect_Threshold;                                     // 0x0ACC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	bool                                               Enabled;                                                   // 0x0AD0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Unbound;                                                   // 0x0AD1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               _2D_Transform;                                             // 0x0AD2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	unsigned char                                      UnknownData_9SC5[0x5];                                     // 0x0AD3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterial*                                   m2DTransform;                                              // 0x0AD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    i2DTransform;                                              // 0x0AE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              _2D_Transform_Anchor_Point__X_;                            // 0x0AE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              _2D_Transform_Anchor_Point__Y_;                            // 0x0AEC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              _2D_Transform_Rotate;                                      // 0x0AF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              _2D_Transform_Pan__X_;                                     // 0x0AF4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              _2D_Transform_Pan__Y_;                                     // 0x0AF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              _2D_Transform_Scale__X_;                                   // 0x0AFC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              _2D_Transform_Scale__Y_;                                   // 0x0B00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	bool                                               _2D_Transform_Tiled;                                       // 0x0B04(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	unsigned char                                      UnknownData_6LVZ[0x3];                                     // 0x0B05(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Distance_Fog_Edge_Sharpness;                               // 0x0B08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	int                                                Blur_Samples;                                              // 0x0B0C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              Comic_PreMultiplier;                                       // 0x0B10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              Comic_Desaturation;                                        // 0x0B14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	bool                                               Digitize;                                                  // 0x0B18(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	unsigned char                                      UnknownData_S3S6[0x7];                                     // 0x0B19(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterial*                                   mDigitize;                                                 // 0x0B20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    iDigitize;                                                 // 0x0B28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Digitize_Cell_Color;                                       // 0x0B30(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Digitize_Cell_Position;                                    // 0x0B40(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Digitize_Cell_Position_Over_Time;                          // 0x0B4C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              Digitize_Distance;                                         // 0x0B58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              Digitize_Distance_Sharpness;                               // 0x0B5C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              Digitize_Cell_Size;                                        // 0x0B60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              Digitize_Cell_Color_Multiplier;                            // 0x0B64(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              Digitize_Cell_Distortion;                                  // 0x0B68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              Digitize_Background_Color_Multiplier;                      // 0x0B6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Custom_Depth_Highlighter__C__Outline_Color;                // 0x0B70(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              Custom_Depth_Highlighter__C__Outline_Opacity;              // 0x0B80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	bool                                               Wired;                                                     // 0x0B84(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	unsigned char                                      UnknownData_IBVH[0x3];                                     // 0x0B85(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInstanceDynamic*                    iWired;                                                    // 0x0B88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterial*                                   mWired;                                                    // 0x0B90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Wired_Color;                                               // 0x0B98(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              Wired_Power;                                               // 0x0BA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_6R3O[0x4];                                     // 0x0BAC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAdvancedEffectFeatures                     Drug___Advanced;                                           // 0x0BB0(0x0038) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAdvancedEffectFeatures                     Alcohol___Advanced;                                        // 0x0BE8(0x0038) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAdvancedEffectFeatures                     Channel_Clamper___Advanced;                                // 0x0C20(0x0038) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAdvancedEffectFeatures                     Channel_Swapper___Advanced;                                // 0x0C58(0x0038) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAdvancedEffectFeatures                     Blur___Advanced;                                           // 0x0C90(0x0038) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAdvancedEffectFeatures                     Colorize___Advanced;                                       // 0x0CC8(0x0038) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAdvancedEffectFeatures                     Edge_Detect___Advanced;                                    // 0x0D00(0x0038) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAdvancedEffectFeatures                     Emboss___Advanced;                                         // 0x0D38(0x0038) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAdvancedEffectFeatures                     Hard_Emboss___Advanced;                                    // 0x0D70(0x0038) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Glitch_Grid_Distortion_Power;                              // 0x0DA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              Glitch_Grid_Distortion_Size;                               // 0x0DAC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              Glitch_Grid_Distortion_Speed;                              // 0x0DB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_QK8O[0x4];                                     // 0x0DB4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAdvancedEffectFeatures                     Glitch___Advanced;                                         // 0x0DB8(0x0038) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAdvancedEffectFeatures                     Hue_Panner___Advanced;                                     // 0x0DF0(0x0038) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAdvancedEffectFeatures                     Monochrome___Advanced;                                     // 0x0E28(0x0038) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   Radial_Blur_Center;                                        // 0x0E60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   Radial_Blur_Sample_Offset;                                 // 0x0E68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	struct FAdvancedEffectFeatures                     Radial_Blur___Advanced;                                    // 0x0E70(0x0038) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAdvancedEffectFeatures                     Distance_Fog___Advanced;                                   // 0x0EA8(0x0038) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAdvancedEffectFeatures                     Invert___Advanced;                                         // 0x0EE0(0x0038) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAdvancedEffectFeatures                     Kuwahara___Advanced;                                       // 0x0F18(0x0038) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAdvancedEffectFeatures                     Pulse___Advanced;                                          // 0x0F50(0x0038) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAdvancedEffectFeatures                     Tiles___Advanced;                                          // 0x0F88(0x0038) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAdvancedEffectFeatures                     TV_Noise___Advanced;                                       // 0x0FC0(0x0038) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAdvancedEffectFeatures                     Sonar___Advanced;                                          // 0x0FF8(0x0038) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAdvancedEffectFeatures                     Sharpen___Advanced;                                        // 0x1030(0x0038) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAdvancedEffectFeatures                     Toon_Shading___Advanced;                                   // 0x1068(0x0038) (Edit, BlueprintVisible, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	struct FAdvancedEffectFeaturesNoCustomDepth        Custom_Depth_Highlighter__Clip____Advanced;                // 0x10A0(0x0030) (Edit, BlueprintVisible, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                _2D_Transform_Background_Color;                            // 0x10D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	struct FAdvancedEffectFeatures                     _2D_Transform___Advanced;                                  // 0x10E0(0x0038) (Edit, BlueprintVisible, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	struct FAdvancedEffectFeatures                     Digitize___Advanced;                                       // 0x1118(0x0038) (Edit, BlueprintVisible, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	struct FAdvancedEffectFeatures                     Wired___Advanced;                                          // 0x1150(0x0038) (Edit, BlueprintVisible, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              Comic_Pattern_Intensity;                                   // 0x1188(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	int                                                Comic_Pattern_Line_Count;                                  // 0x118C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              Comic_Pattern_Rotation;                                    // 0x1190(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_347Z[0x4];                                     // 0x1194(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAdvancedEffectFeatures                     Comic___Advanced;                                          // 0x1198(0x0038) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Actor_Featurette;                                          // 0x11D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	unsigned char                                      UnknownData_AZQE[0x7];                                     // 0x11D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterial*                                   mActorFeaturette;                                          // 0x11D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    iActorFeaturette;                                          // 0x11E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Actor_Featurette_Background_Multiplier;                    // 0x11E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              Actor_Featurette_Background_Desaturation;                  // 0x11F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Actor_Featurette_Foreground_Multiplier;                    // 0x11FC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              Actor_Featurette_Foreground_Saturation;                    // 0x120C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              Actor_Featurette_Blur_Amount;                              // 0x1210(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	int                                                Actor_Featurette_Blur_Samples;                             // 0x1214(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	int                                                Actor_Featurette_Stencil_Mask;                             // 0x1218(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_AFAB[0x4];                                     // 0x121C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAdvancedEffectFeaturesNoCustomDepth        Actor_Featurette___Advanced;                               // 0x1220(0x0030) (Edit, BlueprintVisible, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	bool                                               Infected;                                                  // 0x1250(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	unsigned char                                      UnknownData_A6TY[0x7];                                     // 0x1251(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterial*                                   mInfected;                                                 // 0x1258(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    iInfected;                                                 // 0x1260(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Infected_Distortion_Amount;                                // 0x1268(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              Infected_Smoothness;                                       // 0x126C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              Infected_Speed;                                            // 0x1270(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              Infected_TransformZ;                                       // 0x1274(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	struct FAdvancedEffectFeatures                     Infected___Advanced;                                       // 0x1278(0x0038) (Edit, BlueprintVisible, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	bool                                               Colored_AO;                                                // 0x12B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	unsigned char                                      UnknownData_KM2Q[0x7];                                     // 0x12B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterial*                                   mColoredAO;                                                // 0x12B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    iColoredAO;                                                // 0x12C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Colored_AO_Color;                                          // 0x12C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              Colored_AO_Intensity;                                      // 0x12D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_BUG9[0x4];                                     // 0x12DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAdvancedEffectFeatures                     Colored_AO___Advanced;                                     // 0x12E0(0x0038) (Edit, BlueprintVisible, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	bool                                               Disco_Ball;                                                // 0x1318(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	unsigned char                                      UnknownData_7E6X[0x7];                                     // 0x1319(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterial*                                   mDiscoBall;                                                // 0x1320(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    iDiscoBall;                                                // 0x1328(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector3DN                                  Disco_Ball_WS_Center;                                      // 0x1330(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Disco_Ball_Color_1;                                        // 0x133C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Disco_Ball_Color_2;                                        // 0x134C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Disco_Ball_Block_Scale;                                    // 0x135C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              Disco_Ball_Block_Distribution;                             // 0x1368(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              Disco_Ball_Rotation_Speed;                                 // 0x136C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              Disco_Ball_Manual_Rotation;                                // 0x1370(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_DSER[0x4];                                     // 0x1374(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAdvancedEffectFeatures                     Disco_Ball___Advanced;                                     // 0x1378(0x0038) (Edit, BlueprintVisible, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	bool                                               Grid_Cell;                                                 // 0x13B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	unsigned char                                      UnknownData_BQ5K[0x7];                                     // 0x13B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterial*                                   mGridCell;                                                 // 0x13B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    iGridCell;                                                 // 0x13C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Grid_Cell_Animated;                                        // 0x13C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	unsigned char                                      UnknownData_4KRC[0x3];                                     // 0x13C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Grid_Cell_Animation_Speed;                                 // 0x13CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Grid_Cell_Color;                                           // 0x13D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Grid_Cell_Void_Color;                                      // 0x13E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              Grid_Cell_Tiling;                                          // 0x13F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              Grid_Cell_Transition_Amount;                               // 0x13F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	struct FAdvancedEffectFeatures                     Grid_Cell___Advanced;                                      // 0x13F8(0x0038) (Edit, BlueprintVisible, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	bool                                               Zone;                                                      // 0x1430(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	unsigned char                                      UnknownData_RLQN[0x7];                                     // 0x1431(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterial*                                   mZone;                                                     // 0x1438(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    iZone;                                                     // 0x1440(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Zone_Center;                                               // 0x1448(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              Zone_Radius;                                               // 0x1458(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              Zone_Edge_Hardness;                                        // 0x145C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Zone_Edge_Color;                                           // 0x1460(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Zone_Coverage_Color;                                       // 0x1470(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	struct FAdvancedEffectFeatures                     Zone___Advanced;                                           // 0x1480(0x0038) (Edit, BlueprintVisible, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	bool                                               Custom_Highlighter;                                        // 0x14B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	unsigned char                                      UnknownData_5RJV[0x7];                                     // 0x14B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterial*                                   mCustomHighlighter;                                        // 0x14C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    iCustomHighlighter;                                        // 0x14C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CustomHighlighterIntensity_1_;                             // 0x14D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                CustomHighlighterHighlightColor_1_;                        // 0x14D4(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              CustomHighlighterIntensity_2_;                             // 0x14E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                CustomHighlighterHighlightColor_2_;                        // 0x14E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              CustomHighlighterIntensity_3_;                             // 0x14F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                CustomHighlighterHighlightColor_3_;                        // 0x14FC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              CustomHighlighterIntensity_4_;                             // 0x150C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                CustomHighlighterHighlightColor_4_;                        // 0x1510(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              CustomHighlighterIntensity_5_;                             // 0x1520(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                CustomHighlighterHighlightColor_5_;                        // 0x1524(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              CustomHighlighterIntensity_6_;                             // 0x1534(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                CustomHighlighterHighlightColor_6_;                        // 0x1538(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              CustomHighlighterHighlightOpacity;                         // 0x1548(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_DOC6[0x4];                                     // 0x154C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAdvancedEffectFeaturesNoCustomDepth        CustomHighlighter___Advanced;                              // 0x1550(0x0030) (Edit, BlueprintVisible, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              CustomDepthHighlighterIntensity_8___10___12_;              // 0x1580(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                CustomDepthHighlighterColor_8___10___12_;                  // 0x1584(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              CustomDepthHighlighterIntensity_9___10_;                   // 0x1594(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                CustomDepthHighlighterColor_9___10_;                       // 0x1598(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              CustomDepthHighlighterIntensity_11___12_;                  // 0x15A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                CustomDepthHighlighterColor_11___12_;                      // 0x15AC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              CustomDepthHighlighterIntensity_7_13_;                     // 0x15BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                CustomDepthHighlighterColor_7_13_;                         // 0x15C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	struct FAdvancedEffectFeaturesNoCustomDepth        Custom_Depth_Highlighter___Advanced;                       // 0x15D0(0x0030) (Edit, BlueprintVisible, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	bool                                               ColoredVignette;                                           // 0x1600(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_QZPJ[0x7];                                     // 0x1601(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterial*                                   mColoredVignette;                                          // 0x1608(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                VignetteColor;                                             // 0x1610(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              VignetteIntensity;                                         // 0x1620(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              VignetteRadius;                                            // 0x1624(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              VignetteHardness;                                          // 0x1628(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_T5HS[0x4];                                     // 0x162C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInstanceDynamic*                    iColoredViognette;                                         // 0x1630(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAdvancedEffectFeatures                     ColoredVignette___Advanced;                                // 0x1638(0x0038) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CustomHighlighterRange;                                    // 0x1670(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	bool                                               InspectorMode;                                             // 0x1674(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_CAVC[0x3];                                     // 0x1675(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterial*                                   mInspectorMode;                                            // 0x1678(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InspectorModeIntensity;                                    // 0x1680(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_TU98[0x4];                                     // 0x1684(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInstanceDynamic*                    iInspectorMode;                                            // 0x1688(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAdvancedEffectFeatures                     InspectorMode___Advanced;                                  // 0x1690(0x0038) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Chameleon.BP_Chameleon_C");
		return ptr;
	}



	void UpdateAlcohol(float Intensity);
	void UpdateInspectorMode(float Intensity);
	void InspectorModeFunc(bool IsEnabled);
	void UpdateColoredVignette(float Intensity);
	void ColoredVignetteFunc(bool IsEnabled);
	void UpdateCustomDepthHighlighter(bool Ignore_7___9___11_, float Intensity_7___9___11_, bool Ignore_8___10___12_, float Intensity_8___10___12_, bool Ignore_9___10_, float Intensity_9___10_, bool Ignore_11___12_, float Intensity_11___12_, bool Ignore_7_13_, float Intensity_7_13_);
	void UpdateVignette(float Intensity);
	void UpdateInfected(float Intensity);
	void UpdateRadialBlur(float Intensity);
	void UpdateCustomHighlighter(bool Ignore_1_, float Intensity_1_, bool Ignore_2_, float Intensity_2_, bool Ignore_3_, float Intensity_3_, bool Ignore_4_, float Intensity_4_, bool Ignore_5_, float Intensity_5_, bool Ignore_6_, float Intensity_6_);
	void SetCustomHighlighter(bool IsEnabled);
	void Create_Effect_Material_Instance(class UMaterial* Material, class UMaterialInstanceDynamic** Instance);
	void Zone_Func(bool IsEnabled);
	void Grid_Cell_Func(bool IsEnabled);
	void Disco_Ball_Func(bool IsEnabled);
	void Colored_AO_Func(bool IsEnabled);
	void Infected_Func(bool IsEnabled);
	void Actor_Featurette_Func(bool IsEnabled);
	void Set_Advanced_Effect_Features__No_Custom_Depth_(const struct FAdvancedEffectFeaturesNoCustomDepth& Features, class UMaterial* Material, class UMaterialInstanceDynamic* Dynamic_Material_Instance);
	void Set_Advanced_Effect_Features(const struct FAdvancedEffectFeatures& Features, class UMaterial* Material, class UMaterialInstanceDynamic* Dynamic_Material_Instance);
	void Wired_Func(bool IsEnabled);
	void Digitize_Func(bool IsEnabled);
	void _2D_Transform_Func(bool IsEnabled);
	void SetEffectPriority(int Priority, class UMaterial* Material);
	void ApplyChameleonSettings();
	void Custom_Depth_Highlighter__NC__Func(bool IsEnabled);
	void Custom_Depth_Highlighter_Func(bool IsEnabled);
	void Toon_Shading_Func(bool IsEnabled);
	void Sharpen_Func(bool IsEnabled);
	void Sonar_Func(bool Condition);
	void TV_Noise_Func(bool* IsEnabled);
	void Tiles_Func(bool* IsEnabled);
	void Pulse_Func(bool* IsEnabled);
	void Kuwahara_Func(bool* IsEnabled);
	void Invert_Func(bool* IsEnabled);
	void Hard_Emboss_Func(bool* IsEnabled);
	void Emboss_Func(bool* IsEnabled);
	void Edge_Detect_Func(bool* IsEnabled);
	void Distance_Fog_Func(bool IsEnabled);
	void Radial_Blur_Func(bool IsEnabled);
	void Monochrome_Func(bool IsEnabled);
	void Hue_Panner_Func(bool IsEnabled);
	void Glitch_Func(bool IsEnabled);
	void Comic_Func(bool IsEnabled);
	void Colorize_Func(bool Condition);
	void Blur_Func(bool IsEnabled);
	void Drug_Func(bool IsEnabled);
	void Alcohol_Func(bool IsEnabled);
	void InitChameleon();
	void Channel_Swapper_Func(bool IsEnabled);
	void Channel_Clamper_Func(bool* IsEnabled);
	void UserConstructionScript();
	void VignetteAnimation__FinishedFunc();
	void VignetteAnimation__UpdateFunc();
	void ReceiveBeginPlay();
	void PlayAnimation_ColoredVignette(float Intensity);
	void ExecuteUbergraph_BP_Chameleon(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
