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

// WidgetBlueprintGeneratedClass UI_LoadingScreen.UI_LoadingScreen_C
// 0x0038 (FullSize[0x0298] - InheritedSize[0x0260])
class UUI_LoadingScreen_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWidgetAnimation*                            fade;                                                      // 0x0268(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                      LoadingProgress;                                           // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      LoadingScreeenImage;                                       // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                              ProgressValue;                                             // 0x0280(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_APN0[0x4];                                     // 0x0284(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      LoadingScreens[0x10];                                      // 0x0284(0x0010) UNKNOWN PROPERTY: ArrayProperty


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_LoadingScreen.UI_LoadingScreen_C");
		return ptr;
	}



	void SetLoadingScreen(float ProgressValue);
	void Construct();
	void FadeAnimation(bool Reverse);
	void ExecuteUbergraph_UI_LoadingScreen(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
