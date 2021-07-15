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

// BlueprintGeneratedClass SAVE_Settings.SAVE_Settings_C
// 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
class USAVE_Settings_C : public USaveGame
{
public:
	TArray<int>                                        GraphicSettings;                                           // 0x0028(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<float>                                      GameSettings;                                              // 0x0038(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<float>                                      SoundSettings;                                             // 0x0048(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FString                                     GameVersion;                                               // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SAVE_Settings.SAVE_Settings_C");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
