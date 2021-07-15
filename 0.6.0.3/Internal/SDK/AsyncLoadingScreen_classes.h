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

// Class AsyncLoadingScreen.AsyncLoadingScreenLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAsyncLoadingScreenLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AsyncLoadingScreen.AsyncLoadingScreenLibrary");
		return ptr;
	}



	void STATIC_StopLoadingScreen();
	void STATIC_SetDisplayTipTextIndex(int TipTextIndex);
	void STATIC_SetDisplayMovieIndex(int MovieIndex);
	void STATIC_SetDisplayBackgroundIndex(int BackgroundIndex);
};

// Class AsyncLoadingScreen.LoadingScreenSettings
// 0x0CB8 (FullSize[0x0CF0] - InheritedSize[0x0038])
class ULoadingScreenSettings : public UDeveloperSettings
{
public:
	struct FALoadingScreenSettings                     StartupLoadingScreen;                                      // 0x0038(0x0428) (Edit, Config, NativeAccessSpecifierPublic)
	struct FALoadingScreenSettings                     DefaultLoadingScreen;                                      // 0x0460(0x0428) (Edit, Config, NativeAccessSpecifierPublic)
	struct FClassicLayoutSettings                      Classic;                                                   // 0x0888(0x00A8) (Edit, Config, NativeAccessSpecifierPublic)
	struct FCenterLayoutSettings                       Center;                                                    // 0x0930(0x00A0) (Edit, Config, NativeAccessSpecifierPublic)
	struct FLetterboxLayoutSettings                    Letterbox;                                                 // 0x09D0(0x0138) (Edit, Config, NativeAccessSpecifierPublic)
	struct FSidebarLayoutSettings                      Sidebar;                                                   // 0x0B08(0x00B0) (Edit, Config, NativeAccessSpecifierPublic)
	struct FDualSidebarLayoutSettings                  DualSidebar;                                               // 0x0BB8(0x0138) (Edit, Config, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AsyncLoadingScreen.LoadingScreenSettings");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
