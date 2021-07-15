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

// WidgetBlueprintGeneratedClass UI_Management_BuildingDetails_Labels.UI_Management_BuildingDetails_Labels_C
// 0x0044 (FullSize[0x02A4] - InheritedSize[0x0260])
class UUI_Management_BuildingDetails_Labels_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UUI_LabelButton_C*                           btn_Crafting;                                              // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_LabelButton_C*                           btn_MarketSelling;                                         // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_LabelButton_C*                           btn_Overview;                                              // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_LabelButton_C*                           btn_Production;                                            // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_LabelButton_C*                           btn_Storage;                                               // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              Labels;                                                    // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_MasterManagementDetails_C*               UI_Details;                                                // 0x0298(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               HasCrafting;                                               // 0x02A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                               HasProduction;                                             // 0x02A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                               IsShop;                                                    // 0x02A2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                               IsStorage;                                                 // 0x02A3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Management_BuildingDetails_Labels.UI_Management_BuildingDetails_Labels_C");
		return ptr;
	}



	void Construct();
	void PreConstruct(bool IsDesignTime);
	void Init(class UUI_MasterManagementDetails_C* UI_Details);
	void btn_Production_Clicked();
	void btn_Crafting_Clicked();
	void btn_StorageSelling_Clicked();
	void btn_Overview_Clicked();
	void AllHovered();
	void ToolsHovered();
	void ArmorHovered();
	void ConsumableHovered();
	void btn_Storage_Clicked();
	void StorageHovered();
	void ExecuteUbergraph_UI_Management_BuildingDetails_Labels(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
