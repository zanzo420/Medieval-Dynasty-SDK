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

// WidgetBlueprintGeneratedClass UI_RadialSegment.UI_RadialSegment_C
// 0x01E8 (FullSize[0x0448] - InheritedSize[0x0260])
class UUI_RadialSegment_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UImage*                                      Icon;                                                      // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Img_LevelIcon;                                             // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      LockedIcon;                                                // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    Overlay_1;                                                 // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TEnumAsByte<E_Segments_E_Segments>                 SegmentType;                                               // 0x0288(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                               ForceCustomIcon;                                           // 0x0289(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	unsigned char                                      UnknownData_Z2PU[0x6];                                     // 0x028A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture2D*                                  CustomIcon;                                                // 0x0290(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FDataTableRowHandle                         BuildingType;                                              // 0x0298(0x0010) (Edit, BlueprintVisible, NoDestructor)
	struct FDataTableRowHandle                         SeedType;                                                  // 0x02A8(0x0010) (Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn)
	struct FDataTableRowHandle                         FenceType;                                                 // 0x02B8(0x0010) (Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn)
	struct FDataTableRowHandle                         FurnitureType;                                             // 0x02C8(0x0010) (Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn)
	float                                              IconRotation;                                              // 0x02D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                               Enabled;                                                   // 0x02DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	unsigned char                                      UnknownData_92D6[0x3];                                     // 0x02DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundBase*                                  HoverSound;                                                // 0x02E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       SegmentName;                                               // 0x02E8(0x0018) (Edit, BlueprintVisible, ExposeOnSpawn)
	struct FText                                       SegmentDescription;                                        // 0x0300(0x0018) (Edit, BlueprintVisible, ExposeOnSpawn)
	class UUI_BuildingMenu_C*                          BuildingMenuReference;                                     // 0x0318(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_ModuleModificationMenu_C*                ModificationMenuReference;                                 // 0x0320(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                SwitcherIndex;                                             // 0x0328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                               Selected;                                                  // 0x032C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               NotEnoughResources_;                                       // 0x032D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Locked;                                                    // 0x032E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                               LimitExceeded;                                             // 0x032F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	struct FST_Module                                  ModuleType;                                                // 0x0330(0x0100) (Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	int                                                ModuleIndex;                                               // 0x0430(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TEnumAsByte<E_BuildingModifications_E_BuildingModifications> BuildingModificationMode;                                  // 0x0434(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	unsigned char                                      UnknownData_5GTR[0x3];                                     // 0x0435(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UUI_Furniture_DecorationMenu_C*              FurnitureMenuReference;                                    // 0x0438(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_FenceMenu_C*                             FenceMenuReference;                                        // 0x0440(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_RadialSegment.UI_RadialSegment_C");
		return ptr;
	}



	void SetBuildingModificationModeStats();
	void SetEnabled(bool Enabled);
	void Segment_Selected(bool Selected);
	void SetNotEnoughResources(bool Value);
	void SetLocked(bool Value);
	void SetIconRotation(float IconRotation);
	void SetLimitExceeded(bool LimitExceeded);
	void Construct();
	void ExecuteUbergraph_UI_RadialSegment(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
