// Name: Medieval Dynasty, Version: 0.6.0.3

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

void FST_CharacterModules::AfterRead()
{
	READ_PTR_FULL(Head_2_0F62047E4B769A39F0697FB10A5E94ED, USkeletalMesh);
	READ_PTR_FULL(Torso_4_37050AC7438218EDBC20C0A3B1EEF040, USkeletalMesh);
	READ_PTR_FULL(TorsoHands_16_B29F4D134712EF4F8F7DE59FCC399C9C, USkeletalMesh);
	READ_PTR_FULL(Legs_15_E9E6C1E54C12674D9ADE0DB7B034DDBD, USkeletalMesh);
	READ_PTR_FULL(LegsFeet_17_C515AFE9437C816567347FAABD9E1E0D, USkeletalMesh);
}

void FST_CharacterModules::BeforeDelete()
{
	DELE_PTR_FULL(Head_2_0F62047E4B769A39F0697FB10A5E94ED);
	DELE_PTR_FULL(Torso_4_37050AC7438218EDBC20C0A3B1EEF040);
	DELE_PTR_FULL(TorsoHands_16_B29F4D134712EF4F8F7DE59FCC399C9C);
	DELE_PTR_FULL(Legs_15_E9E6C1E54C12674D9ADE0DB7B034DDBD);
	DELE_PTR_FULL(LegsFeet_17_C515AFE9437C816567347FAABD9E1E0D);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
