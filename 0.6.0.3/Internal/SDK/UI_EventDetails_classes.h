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

// WidgetBlueprintGeneratedClass UI_EventDetails.UI_EventDetails_C
// 0x00D8 (FullSize[0x0338] - InheritedSize[0x0260])
class UUI_EventDetails_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UGridPanel*                                  ButtonRestrictionsBox;                                     // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_11;                                                  // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_13;                                                  // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_14;                                                  // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  txt_TabName;                                               // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    ActionDispatcher;                                          // 0x0290(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FST_EventButtons                            ButtonParameters;                                          // 0x02A0(0x0080) (Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	class APC_Player_C*                                PlayerControllerReference;                                 // 0x0320(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<struct FST_ItemsToRemove>                   ItemFoundIn;                                               // 0x0328(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_EventDetails.UI_EventDetails_C");
		return ptr;
	}



	void ItemsRestriction(const struct FST_EventButtonRestrictions& Restrictions);
	void VillageRestriction(const struct FST_EventButtonRestrictions& Restrictions);
	void SkillRestriction(const struct FST_EventButtonRestrictions& Restrictions);
	void Construct();
	void ExecuteUbergraph_UI_EventDetails(int EntryPoint);
	void ActionDispatcher__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
