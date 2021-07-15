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

// BlueprintGeneratedClass BPI_RangeHoldable.BPI_RangeHoldable_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBPI_RangeHoldable_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_RangeHoldable.BPI_RangeHoldable_C");
		return ptr;
	}



	void PlayReloadMontage();
	void PlayShootMontage();
	void StopReload();
	void SetAnimBowStretch(float Stretch);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
