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

// WidgetBlueprintGeneratedClass UI_Event_ButtonRestriction.UI_Event_ButtonRestriction_C
// 0x0088 (FullSize[0x02E8] - InheritedSize[0x0260])
class UUI_Event_ButtonRestriction_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UImage*                                      Image_180;                                                 // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  txt_ItemName;                                              // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UObject*                                     Image;                                                     // 0x0278(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FSlateColor                                 ImageTint;                                                 // 0x0280(0x0028) (Edit, BlueprintVisible, ExposeOnSpawn)
	struct FText                                       ItemName;                                                  // 0x02A8(0x0018) (Edit, BlueprintVisible, ExposeOnSpawn)
	struct FSlateColor                                 TextColor;                                                 // 0x02C0(0x0028) (Edit, BlueprintVisible, ExposeOnSpawn)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Event_ButtonRestriction.UI_Event_ButtonRestriction_C");
		return ptr;
	}



	void Construct();
	void ExecuteUbergraph_UI_Event_ButtonRestriction(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
