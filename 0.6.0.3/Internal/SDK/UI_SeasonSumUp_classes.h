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

// WidgetBlueprintGeneratedClass UI_SeasonSumUp.UI_SeasonSumUp_C
// 0x00B0 (FullSize[0x0310] - InheritedSize[0x0260])
class UUI_SeasonSumUp_C : public UUserWidget
{
public:
	class ABP_SystemsManager_C*                        SystemsManagerReference;                                   // 0x0260(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FSlateColor                                 ColorPositive;                                             // 0x0268(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                                 ColorNeutral;                                              // 0x0290(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                                 ColorNegative;                                             // 0x02B8(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                                 ColorNormal;                                               // 0x02E0(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	class APC_Player_C*                                PlayerControllerReference;                                 // 0x0308(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_SeasonSumUp.UI_SeasonSumUp_C");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
