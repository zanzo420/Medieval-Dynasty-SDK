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

// BlueprintGeneratedClass DE_ChooseVendorForAnswere.DE_ChooseVendorForAnswere_C
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UDE_ChooseVendorForAnswere_C : public UDialogueEvents
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0028(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DE_ChooseVendorForAnswere.DE_ChooseVendorForAnswere_C");
		return ptr;
	}



	void Change_Response(class UUI_Dialogue_C* UIDialogueReference);
	void RecieveEventTriggered(class APlayerController* ConsideringPlayer, class AActor* NPCActor);
	void ExecuteUbergraph_DE_ChooseVendorForAnswere(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
