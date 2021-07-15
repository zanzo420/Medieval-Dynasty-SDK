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

// WidgetBlueprintGeneratedClass UI_TransferWithMountCountSlider.UI_TransferWithMountCountSlider_C
// 0x000F (FullSize[0x0400] - InheritedSize[0x03F1])
class UUI_TransferWithMountCountSlider_C : public UUI_MasterCountSlider_C
{
public:
	unsigned char                                      UnknownData_P7GP[0x7];                                     // 0x03F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_TransferWithMountCountSlider.UI_TransferWithMountCountSlider_C");
		return ptr;
	}



	void SliderAccept();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void Cost(float Value);
	void SliderCancel();
	void ExecuteUbergraph_UI_TransferWithMountCountSlider(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
