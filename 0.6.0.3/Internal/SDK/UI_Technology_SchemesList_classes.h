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

// WidgetBlueprintGeneratedClass UI_Technology_SchemesList.UI_Technology_SchemesList_C
// 0x0040 (FullSize[0x02A0] - InheritedSize[0x0260])
class UUI_Technology_SchemesList_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UUniformGridPanel*                           Grid_Schemes;                                              // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_72;                                                  // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_248;                                                 // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_451;                                                 // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                                  SchemesScroll;                                             // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  txt_Coins;                                                 // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Book_Technology_C*                       ParentWidget;                                              // 0x0298(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Technology_SchemesList.UI_Technology_SchemesList_C");
		return ptr;
	}



	void FillSchemesList(TArray<struct FDataTableRowHandle>* SchemesList);
	void ChangeSelectedScheme(int Index);
	void MakeSchemeActive(int Index);
	void MakeSchemesUnactive();
	void AddChildToGrid(int Index, const struct FDataTableRowHandle& Scheme, int TechnologyVillageManagerID);
	void UpdateSchemesList(TArray<struct FDataTableRowHandle>* Array);
	void UpdateCoins();
	void MakeActive();
	void MakeUnactive();
	void BindSchemesUpdateCoins();
	void ExecuteUbergraph_UI_Technology_SchemesList(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
