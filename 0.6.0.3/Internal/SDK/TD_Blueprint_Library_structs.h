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

// Enum TD_Blueprint_Library.ASFDebugTrace
enum class TD_Blueprint_Library_EASFDebugTrace : uint8_t
{
	ASFDebugTrace__None            = 0,
	ASFDebugTrace__ForOneFrame     = 1,
	ASFDebugTrace__ASFDebugTrace_MAX = 2,

};

// Enum TD_Blueprint_Library.DebugTrace
enum class TD_Blueprint_Library_EDebugTrace : uint8_t
{
	DebugTrace__None               = 0,
	DebugTrace__ForOneFrame        = 1,
	DebugTrace__ForDuration        = 2,
	DebugTrace__Persistent         = 3,
	DebugTrace__DebugTrace_MAX     = 4,

};

// Enum TD_Blueprint_Library.eMultiBranch
enum class TD_Blueprint_Library_EeMultiBranch : uint8_t
{
	eMultiBranch__ABC              = 0,
	eMultiBranch__AB               = 1,
	eMultiBranch__BC               = 2,
	eMultiBranch__AC               = 3,
	eMultiBranch__A                = 4,
	eMultiBranch__B                = 5,
	eMultiBranch__C                = 6,
	eMultiBranch___False           = 7,
	eMultiBranch__eMultiBranch_MAX = 8,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct TD_Blueprint_Library.ProjectSettings
// 0x00E8
struct FProjectSettings
{
	struct FString                                     CompanyName;                                               // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CompanyDistinguishedName;                                  // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CopyrightNotice;                                           // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Description;                                               // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Homepage;                                                  // 0x0040(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     LicensingTerms;                                            // 0x0050(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PrivacyPolicy;                                             // 0x0060(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       ProjectID;                                                 // 0x0070(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ProjectName;                                               // 0x0080(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ProjectVersion;                                            // 0x0090(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SupportContact;                                            // 0x00A0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       ProjectDisplayedTitle;                                     // 0x00B0(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       ProjectDebugTitleInfo;                                     // 0x00C8(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                               bShouldWindowPreserveAspectRatio;                          // 0x00E0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseBorderlessWindow;                                      // 0x00E1(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bStartInVR;                                                // 0x00E2(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowWindowResize;                                        // 0x00E3(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowClose;                                               // 0x00E4(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowMaximize;                                            // 0x00E5(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowMinimize;                                            // 0x00E6(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PAZL[0x1];                                     // 0x00E7(0x0001) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
