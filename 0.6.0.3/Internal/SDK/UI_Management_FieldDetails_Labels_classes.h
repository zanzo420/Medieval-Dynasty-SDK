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

// WidgetBlueprintGeneratedClass UI_Management_FieldDetails_Labels.UI_Management_FieldDetails_Labels_C
// 0x0029 (FullSize[0x0289] - InheritedSize[0x0260])
class UUI_Management_FieldDetails_Labels_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UUI_LabelButton_C*                           btn_Crafting;                                              // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_LabelButton_C*                           btn_Overview;                                              // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              Labels;                                                    // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_MasterManagementDetails_C*               UI_Details;                                                // 0x0280(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_FieldCategories_E_FieldCategories>   FieldType;                                                 // 0x0288(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Management_FieldDetails_Labels.UI_Management_FieldDetails_Labels_C");
		return ptr;
	}



	void btn_Crafting_Clicked();
	void btn_Overview_Clicked();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void Init(class UUI_MasterManagementDetails_C* UI_Details, TEnumAsByte<E_FieldCategories_E_FieldCategories> FieldType);
	void AllHovered();
	void ToolsHovered();
	void ExecuteUbergraph_UI_Management_FieldDetails_Labels(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
