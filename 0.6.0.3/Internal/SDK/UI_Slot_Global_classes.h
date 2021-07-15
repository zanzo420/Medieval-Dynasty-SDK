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

// WidgetBlueprintGeneratedClass UI_Slot_Global.UI_Slot_Global_C
// 0x008C (FullSize[0x02EC] - InheritedSize[0x0260])
class UUI_Slot_Global_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UImage*                                      img_Icon;                                                  // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  txt_Name;                                                  // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateColor                                 IconColor;                                                 // 0x0278(0x0028) (Edit, BlueprintVisible, ExposeOnSpawn)
	class UObject*                                     Icon;                                                      // 0x02A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FText                                       Name;                                                      // 0x02A8(0x0018) (Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                               BoldText;                                                  // 0x02C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	unsigned char                                      UnknownData_EC4W[0x7];                                     // 0x02C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDataTableRowHandle                         BuildingReference;                                         // 0x02C8(0x0010) (Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn)
	struct FDataTableRowHandle                         FurnitureReference;                                        // 0x02D8(0x0010) (Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn)
	float                                              IconRotation;                                              // 0x02E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Slot_Global.UI_Slot_Global_C");
		return ptr;
	}



	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UI_Slot_Global(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
