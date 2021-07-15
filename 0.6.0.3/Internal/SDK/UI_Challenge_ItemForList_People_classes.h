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

// WidgetBlueprintGeneratedClass UI_Challenge_ItemForList_People.UI_Challenge_ItemForList_People_C
// 0x0014 (FullSize[0x0274] - InheritedSize[0x0260])
class UUI_Challenge_ItemForList_People_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UTextBlock*                                  txt_AmountOfFood;                                          // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int                                                RequiredPeople;                                            // 0x0270(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Challenge_ItemForList_People.UI_Challenge_ItemForList_People_C");
		return ptr;
	}



	void Construct();
	void ExecuteUbergraph_UI_Challenge_ItemForList_People(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
