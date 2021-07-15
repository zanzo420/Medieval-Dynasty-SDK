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

// WidgetBlueprintGeneratedClass UI_TransferCountSlider.UI_TransferCountSlider_C
// 0x0023 (FullSize[0x0414] - InheritedSize[0x03F1])
class UUI_TransferCountSlider_C : public UUI_MasterCountSlider_C
{
public:
	unsigned char                                      UnknownData_SUJ0[0x7];                                     // 0x03F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	bool                                               Buying_;                                                   // 0x0400(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	unsigned char                                      UnknownData_1ZP4[0x3];                                     // 0x0401(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ItemFreshness;                                             // 0x0404(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int                                                ItemCapacity;                                              // 0x0408(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              ItemHP;                                                    // 0x040C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              ItemMaxHP;                                                 // 0x0410(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_TransferCountSlider.UI_TransferCountSlider_C");
		return ptr;
	}



	void SliderAccept();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void Cost(float Value);
	void ExecuteUbergraph_UI_TransferCountSlider(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
