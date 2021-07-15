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

// BlueprintGeneratedClass DE_GivePartOfDelivery.DE_GivePartOfDelivery_C
// 0x001C (FullSize[0x0044] - InheritedSize[0x0028])
class UDE_GivePartOfDelivery_C : public UDialogueEvents
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0028(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FDataTableRowHandle                         QuestReference;                                            // 0x0030(0x0010) (Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn)
	int                                                L_AmountToSubstract_;                                      // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DE_GivePartOfDelivery.DE_GivePartOfDelivery_C");
		return ptr;
	}



	void RecieveEventTriggered(class APlayerController* ConsideringPlayer, class AActor* NPCActor);
	void ExecuteUbergraph_DE_GivePartOfDelivery(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
