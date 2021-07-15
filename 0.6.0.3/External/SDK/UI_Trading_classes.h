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

// WidgetBlueprintGeneratedClass UI_Trading.UI_Trading_C
// 0x00F8 (FullSize[0x0358] - InheritedSize[0x0260])
class UUI_Trading_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UHorizontalBox*                              ActionDescriptionButtonsRight;                             // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Book_Tab_C*                              btn_Storage;                                               // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Book_Tab_C*                              btn_Trader;                                                // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Book_Tab_C*                              btn_You;                                                   // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_83;                                                  // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Book_InputButton_C*                      InputChangeCategory;                                       // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Book_InputButton_C*                      InputChangeSelection;                                      // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Book_InputButton_C*                      InputChangeTab;                                            // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Book_InputButton_C*                      InputConfirm;                                              // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Book_InputButton_C*                      InputConfirmHold;                                          // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Book_InputButton_C*                      InputReturn;                                               // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                     TransferSliderBorder;                                      // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Trading_Player_C*                        UI_Trading_Player;                                         // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Trading_Storage_C*                       UI_Trading_Storage;                                        // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Trading_Trader_C*                        UI_Trading_Trader;                                         // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_HUD_C*                                   UI_HUD_Reference;                                          // 0x02E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class APC_Player_C*                                PlayerControllerReference;                                 // 0x02E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                               isPlayer;                                                  // 0x02F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_BN6V[0x3];                                     // 0x02F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FST_ItemInventorys                          tmpItemToTransferReference;                                // 0x02F4(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       TmpTransferItemName;                                       // 0x0324(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UI_NextLabelPressed;                                       // 0x032C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               UI_PreviousLabelPressed;                                   // 0x032D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               WithNPC_;                                                  // 0x032E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                               WithHorse_;                                                // 0x032F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                               GiftGiving_;                                               // 0x0330(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	unsigned char                                      UnknownData_C16O[0x3];                                     // 0x0331(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       TmpTransferItemName_3;                                     // 0x0334(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TmpArrayIndex;                                             // 0x033C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInventoryComponent_C*                       OtherInventoryComponentReference;                          // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<class UUI_Book_InputButton_C*>              InputWidgets;                                              // 0x0348(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Trading.UI_Trading_C");
		return ptr;
	}



	void GiveGift();
	void UIConfirmHeld();
	void UIConfirmReleased();
	void UIConfirmPressed(bool* HoldingExecutesEvent);
	void ChangeSelectedSide(bool IsPlayerSetValue);
	void IsTransfering_(bool* Return);
	void UI_Up();
	void UI_NextCategory();
	void UI_Down();
	void UI_NextSection();
	void UI_PreviousSection();
	void UI_Exit();
	void UI_PreviousCategory();
	void UI_TradeItem();
	void FinalizeTrade(int Count);
	void Construct();
	void UI_TransferItem(bool ShouldCheckContainerRestrictions);
	void FinalizeTransfer(int Count);
	void OnYouClicked();
	void OnTraderClicked();
	void OnStorageClicked();
	void ChangeSteeringType_Event_1(bool Gamepad);
	void PreConstruct(bool IsDesignTime);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Btn_Confirm();
	void Btn_Up();
	void Btn_Down();
	void Btn_Left();
	void Btn_Right();
	void Btn_Previous();
	void Btn_Next();
	void btn_Return();
	void Btn_ConfirmHold();
	void ExecuteUbergraph_UI_Trading(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
