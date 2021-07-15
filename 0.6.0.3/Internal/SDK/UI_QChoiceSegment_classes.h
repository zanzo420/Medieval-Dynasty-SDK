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

// WidgetBlueprintGeneratedClass UI_QChoiceSegment.UI_QChoiceSegment_C
// 0x0082 (FullSize[0x02E2] - InheritedSize[0x0260])
class UUI_QChoiceSegment_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UImage*                                      Icon;                                                      // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      LockedIcon;                                                // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    Overlay_1;                                                 // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                               ForceCustomIcon;                                           // 0x0280(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_9A0H[0x7];                                     // 0x0281(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture2D*                                  CustomIcon;                                                // 0x0288(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              IconRotation;                                              // 0x0290(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Enabled;                                                   // 0x0294(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_XDYL[0x3];                                     // 0x0295(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundBase*                                  HoverSound;                                                // 0x0298(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       SegmentName;                                               // 0x02A0(0x0018) (Edit, BlueprintVisible)
	struct FText                                       SegmentDescription;                                        // 0x02B8(0x0018) (Edit, BlueprintVisible)
	bool                                               IsSelected;                                                // 0x02D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_XVLJ[0x7];                                     // 0x02D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UUI_QChoiceMasterRadialMenu_C*               ParentWidget;                                              // 0x02D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_ChoiceSegments_E_ChoiceSegments>     SegmentType;                                               // 0x02E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                               IsLocked;                                                  // 0x02E1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_QChoiceSegment.UI_QChoiceSegment_C");
		return ptr;
	}



	void SetEnabled(bool Enabled);
	void Segment_Selected(bool Selected);
	void UpdateSegmentIcon();
	void PreConstruct(bool IsDesignTime);
	void SetIconRotation(float IconRotation);
	void SetLocked();
	void ExecuteUbergraph_UI_QChoiceSegment(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
