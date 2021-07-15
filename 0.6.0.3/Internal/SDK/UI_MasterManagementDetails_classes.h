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

// WidgetBlueprintGeneratedClass UI_MasterManagementDetails.UI_MasterManagementDetails_C
// 0x0038 (FullSize[0x0298] - InheritedSize[0x0260])
class UUI_MasterManagementDetails_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	bool                                               IsFocused;                                                 // 0x0268(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_IPGL[0x7];                                     // 0x0269(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       ConfirmText;                                               // 0x0270(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              FullSizeY;                                                 // 0x0288(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CroppedSizeY;                                              // 0x028C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_Book_Management_C*                       BookManagementReference;                                   // 0x0290(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_MasterManagementDetails.UI_MasterManagementDetails_C");
		return ptr;
	}



	void InputAdditionalAction();
	void InputSpecialAction();
	void InputConfirm(bool* HoldingExecutesEvent);
	void InputDropHeld();
	void InputDropReleased();
	void InputDropPressed(bool* HoldingExecutesEvent, bool* Handled_);
	void ChangeSelectedLabel(int Index);
	void Crop();
	void Uncrop();
	void InputCancel();
	void InputLeft();
	void InputRight();
	void Construct();
	void Regenerate();
	void InputDecreaseIndex();
	void InputIncreaseIndex();
	void ExecuteUbergraph_UI_MasterManagementDetails(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
