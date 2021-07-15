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

// BlueprintGeneratedClass BPI_PC_Player.BPI_PC_Player_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBPI_PC_Player_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_PC_Player.BPI_PC_Player_C");
		return ptr;
	}



	void BPI_OnHeadbobbingChanged();
	void BPI_UpdateControlsSensitivity();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
