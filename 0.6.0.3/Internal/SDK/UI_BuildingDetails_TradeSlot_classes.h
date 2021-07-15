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

// WidgetBlueprintGeneratedClass UI_BuildingDetails_TradeSlot.UI_BuildingDetails_TradeSlot_C
// 0x0578 (FullSize[0x07D8] - InheritedSize[0x0260])
class UUI_BuildingDetails_TradeSlot_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UBorder*                                     Border_ItemSelection;                                      // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Btn_DecreasePower;                                         // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Btn_IncreasePower;                                         // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     Button;                                                    // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Icn_ItemBackground;                                        // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Icon;                                                      // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_120;                                                 // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_276;                                                 // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  Name;                                                      // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                                ProgressBar_103;                                           // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  txt_Power;                                                 // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  txt_Price;                                                 // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  txt_Status;                                                // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  txt_Storage;                                               // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  txt_TotalCoins;                                            // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  txt_TotalProduction;                                       // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateBrush                                 ButtonNormal;                                              // 0x02E8(0x0088) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                                 ButtonSelected;                                            // 0x0370(0x0088) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnHoveredDispatcher;                                       // 0x03F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UUI_ManagementDetails_Building_C*            UI_BuildingDetails;                                        // 0x0408(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int                                                Index;                                                     // 0x0410(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int                                                ItemTradeIndex;                                            // 0x0414(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FSlateBrush                                 ButtonHovered;                                             // 0x0418(0x0088) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FST_Trading_Progress                        ItemTradeProgress;                                         // 0x04A0(0x0038) (Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                               IsActive;                                                  // 0x04D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsLockedByTechnology;                                      // 0x04D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	unsigned char                                      UnknownData_QTR6[0x2];                                     // 0x04DA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ItemCount;                                                 // 0x04DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int                                                ProductionPowerPerClick;                                   // 0x04E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TimeLeftToChange;                                          // 0x04E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DefaultTimeToChange;                                       // 0x04E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ShouldPowerIncrease;                                       // 0x04EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_S4XU[0x3];                                     // 0x04ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ProductionPowerTicks;                                      // 0x04F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ShouldPowerDecrease;                                       // 0x04F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_6M4G[0x3];                                     // 0x04F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MaxNameSlotXSize;                                          // 0x04F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ShouldBounce;                                              // 0x04FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_BJHV[0x3];                                     // 0x04FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              NameBounceXSize;                                           // 0x0500(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TimeToBounce;                                              // 0x0504(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TimeLeftToBounce;                                          // 0x0508(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BounceAlpha;                                               // 0x050C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               BouncingRight;                                             // 0x0510(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_39KA[0x7];                                     // 0x0511(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FST_ItemDetails                             ItemData;                                                  // 0x0518(0x02C0) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_BuildingDetails_TradeSlot.UI_BuildingDetails_TradeSlot_C");
		return ptr;
	}



	void GetStatus(bool Hover, struct FText* Status, struct FSlateColor* SlateColor);
	void MakeUnactive();
	void BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void MakeActive();
	void IncreaseLimit();
	void DecreaseLimit();
	void BndEvt__UI_WorkplaceSlot_NPCDetails_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__UI_WorkplaceSlot_NPCDetails_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void Construct();
	void BndEvt__UI_BuildingDetails_CraftingSlot_Btn_IncreasePower_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__UI_BuildingDetails_CraftingSlot_Btn_IncreasePower_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature();
	void BndEvt__UI_BuildingDetails_CraftingSlot_Btn_IncreasePower_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__UI_BuildingDetails_CraftingSlot_Btn_DecreasePower_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__UI_BuildingDetails_CraftingSlot_Btn_DecreasePower_K2Node_ComponentBoundEvent_9_OnButtonReleasedEvent__DelegateSignature();
	void BndEvt__UI_BuildingDetails_CraftingSlot_Btn_DecreasePower_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void UpdateTradeLimit();
	void UpdateInitTradeLimit();
	void ExecuteUbergraph_UI_BuildingDetails_TradeSlot(int EntryPoint);
	void OnHoveredDispatcher__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
