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

// Enum AsyncLoadingScreen.ELoadingWidgetType
enum class AsyncLoadingScreen_ELoadingWidgetType : uint8_t
{
	ELoadingWidgetType__LWT_Horizontal = 0,
	ELoadingWidgetType__LWT_Vertical = 1,
	ELoadingWidgetType__LWT_MAX    = 2,

};

// Enum AsyncLoadingScreen.ELoadingIconType
enum class AsyncLoadingScreen_ELoadingIconType : uint8_t
{
	ELoadingIconType__LIT_Throbber = 0,
	ELoadingIconType__LIT_CircularThrobber = 1,
	ELoadingIconType__LIT_ImageSequence = 2,
	ELoadingIconType__LIT_MAX      = 3,

};

// Enum AsyncLoadingScreen.EAsyncLoadingScreenLayout
enum class AsyncLoadingScreen_EAsyncLoadingScreenLayout : uint8_t
{
	EAsyncLoadingScreenLayout__ALSL_Classic = 0,
	EAsyncLoadingScreenLayout__ALSL_Center = 1,
	EAsyncLoadingScreenLayout__ALSL_Letterbox = 2,
	EAsyncLoadingScreenLayout__ALSL_Sidebar = 3,
	EAsyncLoadingScreenLayout__ALSL_DualSidebar = 4,
	EAsyncLoadingScreenLayout__ALSL_MAX = 5,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AsyncLoadingScreen.TextAppearance
// 0x00A0
struct FTextAppearance
{
	struct FSlateColor                                 ColorAndOpacity;                                           // 0x0000(0x0028) (Edit, BlueprintVisible, Config, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                              Font;                                                      // 0x0028(0x0058) (Edit, BlueprintVisible, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   ShadowOffset;                                              // 0x0080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                ShadowColorAndOpacity;                                     // 0x0088(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Slate_ETextJustify>                    Justification;                                             // 0x0098(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_91SS[0x7];                                     // 0x0099(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct AsyncLoadingScreen.WidgetAlignment
// 0x0002
struct FWidgetAlignment
{
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalAlignment;                                       // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EVerticalAlignment>          VerticalAlignment;                                         // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AsyncLoadingScreen.LoadingCompleteTextSettings
// 0x00D8
struct FLoadingCompleteTextSettings
{
	struct FText                                       LoadingCompleteText;                                       // 0x0000(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FTextAppearance                             Appearance;                                                // 0x0018(0x00A0) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FWidgetAlignment                            Alignment;                                                 // 0x00B8(0x0002) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YTBG[0x2];                                     // 0x00BA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMargin                                     Padding;                                                   // 0x00BC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bFadeInOutAnim;                                            // 0x00CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BUJ1[0x3];                                     // 0x00CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AnimationSpeed;                                            // 0x00D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_K914[0x4];                                     // 0x00D4(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct AsyncLoadingScreen.TipSettings
// 0x00B8
struct FTipSettings
{
	TArray<struct FText>                               TipText;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FTextAppearance                             Appearance;                                                // 0x0010(0x00A0) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                              TipWrapAt;                                                 // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSetDisplayTipTextManually;                                // 0x00B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9F87[0x3];                                     // 0x00B5(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct AsyncLoadingScreen.ImageSequenceSettings
// 0x0020
struct FImageSequenceSettings
{
	TArray<class UTexture2D*>                          Images;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FVector2D                                   Scale;                                                     // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Interval;                                                  // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPlayReverse;                                              // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5BNE[0x3];                                     // 0x001D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct AsyncLoadingScreen.ThrobberSettings
// 0x0090
struct FThrobberSettings
{
	int                                                NumberOfPieces;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAnimateHorizontally;                                      // 0x0004(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAnimateVertically;                                        // 0x0005(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAnimateOpacity;                                           // 0x0006(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TDES[0x1];                                     // 0x0007(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSlateBrush                                 Image;                                                     // 0x0008(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

};

// ScriptStruct AsyncLoadingScreen.CircularThrobberSettings
// 0x0098
struct FCircularThrobberSettings
{
	int                                                NumberOfPieces;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Period;                                                    // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Radius;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DBKL[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSlateBrush                                 Image;                                                     // 0x0010(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct AsyncLoadingScreen.LoadingWidgetSettings
// 0x0230
struct FLoadingWidgetSettings
{
	AsyncLoadingScreen_ELoadingIconType                LoadingIconType;                                           // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AsyncLoadingScreen_ELoadingWidgetType              LoadingWidgetType;                                         // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2AYG[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   TransformTranslation;                                      // 0x0004(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   TransformScale;                                            // 0x000C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   TransformPivot;                                            // 0x0014(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_62RI[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       LoadingText;                                               // 0x0020(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                               bLoadingTextRightPosition;                                 // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLoadingTextTopPosition;                                   // 0x0039(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_L1Z3[0x6];                                     // 0x003A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTextAppearance                             Appearance;                                                // 0x0040(0x00A0) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FThrobberSettings                           ThrobberSettings;                                          // 0x00E0(0x0090) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FCircularThrobberSettings                   CircularThrobberSettings;                                  // 0x0170(0x0098) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FImageSequenceSettings                      ImageSequenceSettings;                                     // 0x0208(0x0020) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FWidgetAlignment                            TextAlignment;                                             // 0x0228(0x0002) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FWidgetAlignment                            LoadingIconAlignment;                                      // 0x022A(0x0002) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                              Space;                                                     // 0x022C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AsyncLoadingScreen.BackgroundSettings
// 0x0038
struct FBackgroundSettings
{
	TArray<struct FSoftObjectPath>                     Images;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TEnumAsByte<Slate_EStretch>                        ImageStretch;                                              // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ULD9[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMargin                                     Padding;                                                   // 0x0014(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearColor                                BackgroundColor;                                           // 0x0024(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSetDisplayBackgroundManually;                             // 0x0034(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OFOH[0x3];                                     // 0x0035(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct AsyncLoadingScreen.ALoadingScreenSettings
// 0x0428
struct FALoadingScreenSettings
{
	float                                              MinimumLoadingScreenDisplayTime;                           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAutoCompleteWhenLoadingCompletes;                         // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bMoviesAreSkippable;                                       // 0x0005(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWaitForManualStop;                                        // 0x0006(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowInEarlyStartup;                                      // 0x0007(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowEngineTick;                                          // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<MoviePlayer_EMoviePlaybackType>        PlaybackType;                                              // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7TZ8[0x6];                                     // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FString>                             MoviePaths;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bShuffle;                                                  // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSetDisplayMovieIndexManually;                             // 0x0021(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowWidgetOverlay;                                        // 0x0022(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowLoadingCompleteText;                                  // 0x0023(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HYUI[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLoadingCompleteTextSettings                LoadingCompleteTextSettings;                               // 0x0028(0x00D8) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FBackgroundSettings                         Background;                                                // 0x0100(0x0038) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FTipSettings                                TipWidget;                                                 // 0x0138(0x00B8) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FLoadingWidgetSettings                      LoadingWidget;                                             // 0x01F0(0x0230) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	AsyncLoadingScreen_EAsyncLoadingScreenLayout       Layout;                                                    // 0x0420(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7MZP[0x7];                                     // 0x0421(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct AsyncLoadingScreen.ClassicLayoutSettings
// 0x00A8
struct FClassicLayoutSettings
{
	bool                                               bIsWidgetAtBottom;                                         // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsLoadingWidgetAtLeft;                                    // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_D7ZB[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Space;                                                     // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWidgetAlignment                            TipAlignment;                                              // 0x0008(0x0002) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        BorderHorizontalAlignment;                                 // 0x000A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Q9QT[0x1];                                     // 0x000B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMargin                                     BorderPadding;                                             // 0x000C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BAIB[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSlateBrush                                 BorderBackground;                                          // 0x0020(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct AsyncLoadingScreen.CenterLayoutSettings
// 0x00A0
struct FCenterLayoutSettings
{
	bool                                               bIsTipAtBottom;                                            // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWidgetAlignment                            TipAlignment;                                              // 0x0001(0x0002) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        BorderHorizontalAlignment;                                 // 0x0003(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BorderVerticalOffset;                                      // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                                     BorderPadding;                                             // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 BorderBackground;                                          // 0x0018(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct AsyncLoadingScreen.SidebarLayoutSettings
// 0x00B0
struct FSidebarLayoutSettings
{
	bool                                               bIsWidgetAtRight;                                          // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsLoadingWidgetAtTop;                                     // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_S59J[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Space;                                                     // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EVerticalAlignment>          VerticalAlignment;                                         // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWidgetAlignment                            LoadingWidgetAlignment;                                    // 0x0009(0x0002) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FWidgetAlignment                            TipAlignment;                                              // 0x000B(0x0002) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EVerticalAlignment>          BorderVerticalAlignment;                                   // 0x000D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VQZV[0x2];                                     // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              BorderHorizontalOffset;                                    // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                                     BorderPadding;                                             // 0x0014(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DVA0[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSlateBrush                                 BorderBackground;                                          // 0x0028(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct AsyncLoadingScreen.LetterboxLayoutSettings
// 0x0138
struct FLetterboxLayoutSettings
{
	bool                                               bIsLoadingWidgetAtTop;                                     // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWidgetAlignment                            TipAlignment;                                              // 0x0001(0x0002) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FWidgetAlignment                            LoadingWidgetAlignment;                                    // 0x0003(0x0002) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        TopBorderHorizontalAlignment;                              // 0x0005(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        BottomBorderHorizontalAlignment;                           // 0x0006(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4R4F[0x1];                                     // 0x0007(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMargin                                     TopBorderPadding;                                          // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                                     BottomBorderPadding;                                       // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 TopBorderBackground;                                       // 0x0028(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 BottomBorderBackground;                                    // 0x00B0(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct AsyncLoadingScreen.DualSidebarLayoutSettings
// 0x0138
struct FDualSidebarLayoutSettings
{
	bool                                               bIsLoadingWidgetAtRight;                                   // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EVerticalAlignment>          LeftVerticalAlignment;                                     // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EVerticalAlignment>          RightVerticalAlignment;                                    // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EVerticalAlignment>          LeftBorderVerticalAlignment;                               // 0x0003(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EVerticalAlignment>          RightBorderVerticalAlignment;                              // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AIE2[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMargin                                     LeftBorderPadding;                                         // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                                     RightBorderPadding;                                        // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 LeftBorderBackground;                                      // 0x0028(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 RightBorderBackground;                                     // 0x00B0(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
