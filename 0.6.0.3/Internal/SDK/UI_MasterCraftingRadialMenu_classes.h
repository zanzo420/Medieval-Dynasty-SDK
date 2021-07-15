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

// WidgetBlueprintGeneratedClass UI_MasterCraftingRadialMenu.UI_MasterCraftingRadialMenu_C
// 0x0029 (FullSize[0x0289] - InheritedSize[0x0260])
class UUI_MasterCraftingRadialMenu_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	struct FTimerHandle                                Get_Mouse_Timer;                                           // 0x0268(0x0008) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	class UUI_CraftingRadialSegment_C*                 Mouse_Over_Segment;                                        // 0x0270(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Rotation;                                                  // 0x0278(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_6HUF[0x4];                                     // 0x027C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ABP_PlayerCharacter_C*                       PlayerCharacterReference;                                  // 0x0280(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	UMG_ESlateVisibility                               MiddleTextVisibility;                                      // 0x0288(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_MasterCraftingRadialMenu.UI_MasterCraftingRadialMenu_C");
		return ptr;
	}



	void SetSegmentOver(class UUI_CraftingRadialSegment_C* Segment, float Rotation__, float Rotation__=, bool ExtraCheck, float Extra__, float Extra__=);
	void GetMouseRotation();
	void OnSpawned();
	void Construct();
	void RemoveMenu();
	void SelectMenuSegment();
	void NextPage(int SwitcherIndex);
	void PreviousPage();
	void ExecuteUbergraph_UI_MasterCraftingRadialMenu(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
