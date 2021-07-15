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

// WidgetBlueprintGeneratedClass UI_MiddleNotification.UI_MiddleNotification_C
// 0x005C (FullSize[0x02BC] - InheritedSize[0x0260])
class UUI_MiddleNotification_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UImage*                                      Icn_NotificationImage;                                     // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  txt_NotificationHeadline;                                  // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  txt_NotificationText;                                      // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FText                                       NotificationHeadline;                                      // 0x0280(0x0018) (Edit, BlueprintVisible, ExposeOnSpawn)
	struct FText                                       NotificationText;                                          // 0x0298(0x0018) (Edit, BlueprintVisible, ExposeOnSpawn)
	class UTexture2D*                                  Icon;                                                      // 0x02B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              NotificationTimeOut;                                       // 0x02B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_MiddleNotification.UI_MiddleNotification_C");
		return ptr;
	}



	void Construct();
	void ExecuteUbergraph_UI_MiddleNotification(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
