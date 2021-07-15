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

// WidgetBlueprintGeneratedClass UI_Inspector_Item.UI_Inspector_Item_C
// 0x0029 (FullSize[0x0289] - InheritedSize[0x0260])
class UUI_Inspector_Item_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UTextBlock*                                  txt_Name;                                                  // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FText                                       Name;                                                      // 0x0270(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	TEnumAsByte<E_Ownership_E_Ownership>               Ownership;                                                 // 0x0288(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Inspector_Item.UI_Inspector_Item_C");
		return ptr;
	}



	void UpdateData();
	void Init(const struct FText& Name, TEnumAsByte<E_Ownership_E_Ownership> Ownership);
	void ExecuteUbergraph_UI_Inspector_Item(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
