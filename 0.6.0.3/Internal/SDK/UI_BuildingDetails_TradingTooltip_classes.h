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

// WidgetBlueprintGeneratedClass UI_BuildingDetails_TradingTooltip.UI_BuildingDetails_TradingTooltip_C
// 0x00A8 (FullSize[0x0308] - InheritedSize[0x0260])
class UUI_BuildingDetails_TradingTooltip_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UBorder*                                     Border_1;                                                  // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_110;                                                 // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_175;                                                 // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  ItemDescription;                                           // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      ItemIcon;                                                  // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  ItemName;                                                  // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                TooltipBox;                                                // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  txt_SingleCost;                                            // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  txt_Storage;                                               // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                         RecipeHandler;                                             // 0x02B0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class APC_Player_C*                                PlayerControllerReference;                                 // 0x02C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMG_ESlateVisibility                               ResourcesVisibility;                                       // 0x02C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                               ShouldCostBeVisible;                                       // 0x02C9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_7S7R[0x6];                                     // 0x02CA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FST_Trading_Progress                        TradeProgress;                                             // 0x02D0(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_BuildingDetails_TradingTooltip.UI_BuildingDetails_TradingTooltip_C");
		return ptr;
	}



	void CheckForToolFuel(class ABP_MasterBuilding_C* BuildingReference, TEnumAsByte<E_Tools_Activity_E_Tools_Activity> ToolToFind, float ToolCost, bool* ResourcesFound);
	void CheckForResources(class ABP_MasterBuilding_C* BuildingReference, const struct FName& ItemToCheck, int Count, bool* ResourcesFound);
	void InitTooltip(class ABP_MasterBuilding_C* BuildingReference, class APC_Player_C* PlayerControllerReference, const struct FST_Trading_Progress& TradeProgress);
	void ExecuteUbergraph_UI_BuildingDetails_TradingTooltip(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
