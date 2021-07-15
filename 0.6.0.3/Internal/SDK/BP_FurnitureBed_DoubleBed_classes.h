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

// BlueprintGeneratedClass BP_FurnitureBed_DoubleBed.BP_FurnitureBed_DoubleBed_C
// 0x0010 (FullSize[0x0470] - InheritedSize[0x0460])
class ABP_FurnitureBed_DoubleBed_C : public ABP_MasterFurniture_Bed_C
{
public:
	struct FString                                     NPC_ID;                                                    // 0x0460(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_FurnitureBed_DoubleBed.BP_FurnitureBed_DoubleBed_C");
		return ptr;
	}



	void IsInteractable(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility, bool* ShowPressUI, bool* ShowTimerUI, bool* ShowOnlyName, float* Time, float* Distance);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
