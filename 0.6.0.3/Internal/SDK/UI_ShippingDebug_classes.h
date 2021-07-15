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

// WidgetBlueprintGeneratedClass UI_ShippingDebug.UI_ShippingDebug_C
// 0x0018 (FullSize[0x0278] - InheritedSize[0x0260])
class UUI_ShippingDebug_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                                  DebugTextBlock;                                            // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                DebugTextBox;                                              // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_ShippingDebug.UI_ShippingDebug_C");
		return ptr;
	}



	void UpdateDebugText(const struct FString& String);
	void Construct();
	void RemoveDebugText();
	void ExecuteUbergraph_UI_ShippingDebug(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
