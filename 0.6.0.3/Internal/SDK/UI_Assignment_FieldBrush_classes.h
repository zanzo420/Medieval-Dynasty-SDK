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

// WidgetBlueprintGeneratedClass UI_Assignment_FieldBrush.UI_Assignment_FieldBrush_C
// 0x00B8 (FullSize[0x0340] - InheritedSize[0x0288])
class UUI_Assignment_FieldBrush_C : public UUI_MasterAssignment_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0288(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UVerticalBox*                                BrushesBox;                                                // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                                  BrushesScrollBox;                                          // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                BrushesVerticalBox;                                        // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_7;                                                   // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_8;                                                   // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_70;                                                  // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_120;                                                 // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_FieldDetails_PlantLabels_C*              UI_FieldDetails_PlantLabels;                               // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Book_Management_C*                       UI_ManagementReference;                                    // 0x02D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int                                                SelectedIndex;                                             // 0x02D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_MPRK[0x4];                                     // 0x02DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UUI_Slot_FieldBrush_C*>               BrushesArray;                                              // 0x02E0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TMap<TEnumAsByte<E_Seeds_E_Seeds>, int>            CountOfSeeds;                                              // 0x02F0(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Assignment_FieldBrush.UI_Assignment_FieldBrush_C");
		return ptr;
	}



	void MakeUnactive();
	void MakeActive(int Index);
	void ChangeSelection(int Index);
	void Construct();
	void InputIncreaseIndex();
	void InputDecreaseIndex();
	void InputConfirm();
	void InputCancel();
	void ExecuteUbergraph_UI_Assignment_FieldBrush(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
