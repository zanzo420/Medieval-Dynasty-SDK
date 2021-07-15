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

// WidgetBlueprintGeneratedClass UI_CraftingTooltip_ResourceSlot.UI_CraftingTooltip_ResourceSlot_C
// 0x0039 (FullSize[0x0299] - InheritedSize[0x0260])
class UUI_CraftingTooltip_ResourceSlot_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UImage*                                      ItemIcon;                                                  // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  ItemWithCount;                                             // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FST_ItemResource                            Resource;                                                  // 0x0278(0x0018) (Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TEnumAsByte<E_Tools_Activity_E_Tools_Activity>     ItemNeededForRecipe;                                       // 0x0290(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	unsigned char                                      UnknownData_MVQE[0x3];                                     // 0x0291(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ToolHpCost;                                                // 0x0294(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                               NoResource;                                                // 0x0298(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_CraftingTooltip_ResourceSlot.UI_CraftingTooltip_ResourceSlot_C");
		return ptr;
	}



	void Construct();
	void ExecuteUbergraph_UI_CraftingTooltip_ResourceSlot(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
