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

// WidgetBlueprintGeneratedClass UI_Slot_CraftingDescription.UI_Slot_CraftingDescription_C
// 0x0071 (FullSize[0x02D1] - InheritedSize[0x0260])
class UUI_Slot_CraftingDescription_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UTextBlock*                                  Stats;                                                     // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  Text;                                                      // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  txt_ComparedValue;                                         // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FText                                       StatsText;                                                 // 0x0280(0x0018) (Edit, BlueprintVisible, ExposeOnSpawn)
	struct FText                                       DescriptionText;                                           // 0x0298(0x0018) (Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                               DisplayComparedValue;                                      // 0x02B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	unsigned char                                      UnknownData_C1IM[0x7];                                     // 0x02B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       ComparedText;                                              // 0x02B8(0x0018) (Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                               DisplayBetterColor;                                        // 0x02D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Slot_CraftingDescription.UI_Slot_CraftingDescription_C");
		return ptr;
	}



	void Construct();
	void ExecuteUbergraph_UI_Slot_CraftingDescription(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
