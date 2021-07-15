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

// WidgetBlueprintGeneratedClass UI_Inventory_Labels.UI_Inventory_Labels_C
// 0x0008 (FullSize[0x02B0] - InheritedSize[0x02A8])
class UUI_Inventory_Labels_C : public UUI_MasterLabels_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Inventory_Labels.UI_Inventory_Labels_C");
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
	void ExecuteUbergraph_UI_Inventory_Labels(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
