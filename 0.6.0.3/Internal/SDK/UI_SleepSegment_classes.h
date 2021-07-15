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

// WidgetBlueprintGeneratedClass UI_SleepSegment.UI_SleepSegment_C
// 0x0079 (FullSize[0x02D9] - InheritedSize[0x0260])
class UUI_SleepSegment_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UImage*                                      Icon;                                                      // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    Overlay_1;                                                 // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                               ForceCustomIcon;                                           // 0x0278(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_VLXI[0x7];                                     // 0x0279(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture2D*                                  CustomIcon;                                                // 0x0280(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              IconRotation;                                              // 0x0288(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Enabled;                                                   // 0x028C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_03GD[0x3];                                     // 0x028D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundBase*                                  HoverSound;                                                // 0x0290(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       SegmentName;                                               // 0x0298(0x0018) (Edit, BlueprintVisible)
	struct FText                                       SegmentDescription;                                        // 0x02B0(0x0018) (Edit, BlueprintVisible)
	bool                                               IsSelected;                                                // 0x02C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_CFQ0[0x7];                                     // 0x02C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UUI_SleepMasterRadialMenu_C*                 ParentWidget;                                              // 0x02D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_SleepMenuSegments_E_SleepMenuSegments> SegmentType;                                               // 0x02D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_SleepSegment.UI_SleepSegment_C");
		return ptr;
	}



	void SetEnabled(bool Enabled);
	void Segment_Selected(bool Selected);
	void UpdateSegmentIcon();
	void PreConstruct(bool IsDesignTime);
	void SetIconRotation(float IconRotation);
	void ExecuteUbergraph_UI_SleepSegment(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
