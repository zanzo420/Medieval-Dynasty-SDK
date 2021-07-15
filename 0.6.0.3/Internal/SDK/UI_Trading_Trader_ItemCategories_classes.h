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

// WidgetBlueprintGeneratedClass UI_Trading_Trader_ItemCategories.UI_Trading_Trader_ItemCategories_C
// 0x0010 (FullSize[0x02B8] - InheritedSize[0x02A8])
class UUI_Trading_Trader_ItemCategories_C : public UUI_MasterLabels_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UUI_Trading_C*                               UI_TradingReference;                                       // 0x02B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Trading_Trader_ItemCategories.UI_Trading_Trader_ItemCategories_C");
		return ptr;
	}



	void btn_All_Clicked();
	void btn_Armor_Clicked();
	void btn_Consumable_Clicked();
	void btn_Crafting_Clicked();
	void btn_Misc_Clicked();
	void btn_Tools_Clicked();
	void Construct();
	void AllHovered();
	void ToolsHovered();
	void ArmorHovered();
	void ConsumableHovered();
	void CraftingHovered();
	void MiscHovered();
	void ExecuteUbergraph_UI_Trading_Trader_ItemCategories(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
