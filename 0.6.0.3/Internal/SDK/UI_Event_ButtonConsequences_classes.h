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

// WidgetBlueprintGeneratedClass UI_Event_ButtonConsequences.UI_Event_ButtonConsequences_C
// 0x0072 (FullSize[0x02D2] - InheritedSize[0x0260])
class UUI_Event_ButtonConsequences_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UImage*                                      Image_180;                                                 // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             TextSwitcher;                                              // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  txt_ItemName_Long;                                         // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  txt_ItemName_Short;                                        // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UObject*                                     Image;                                                     // 0x0288(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FSlateColor                                 ImageTint;                                                 // 0x0290(0x0028) (Edit, BlueprintVisible, ExposeOnSpawn)
	struct FText                                       ItemName;                                                  // 0x02B8(0x0018) (Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                               Journal;                                                   // 0x02D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                               UseShort;                                                  // 0x02D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Event_ButtonConsequences.UI_Event_ButtonConsequences_C");
		return ptr;
	}



	void Construct();
	void MakeActive();
	void MakeUnactive();
	void PreConstruct(bool IsDesignTime);
	void UpdateTextLength(bool UseShort);
	void ExecuteUbergraph_UI_Event_ButtonConsequences(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
