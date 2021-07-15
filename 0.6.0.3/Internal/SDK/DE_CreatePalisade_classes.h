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

// BlueprintGeneratedClass DE_CreatePalisade.DE_CreatePalisade_C
// 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
class UDE_CreatePalisade_C : public UDialogueEvents
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0028(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<struct FTransform>                          PalisadeSegmentTransform;                                  // 0x0030(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<float>                                      PalisadeSegmentLength;                                     // 0x0040(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DE_CreatePalisade.DE_CreatePalisade_C");
		return ptr;
	}



	void RecieveEventTriggered(class APlayerController* ConsideringPlayer, class AActor* NPCActor);
	void ExecuteUbergraph_DE_CreatePalisade(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
