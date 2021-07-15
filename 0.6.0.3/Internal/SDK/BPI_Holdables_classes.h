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

// BlueprintGeneratedClass BPI_Holdables.BPI_Holdables_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBPI_Holdables_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_Holdables.BPI_Holdables_C");
		return ptr;
	}



	void GetFluidType(TEnumAsByte<E_Fluids_E_Fluids>* FluidType);
	void HitMontageBlendOut(class UAnimMontage* Montage);
	void HitMontageInterrupted(class UAnimMontage* Montage);
	void HitMontageComplete(class UAnimMontage* Montage);
	void MontageBlendOut(class UAnimMontage* Montage);
	void MontageInterrupted(class UAnimMontage* Montage);
	void MontageComplete(class UAnimMontage* Montage);
	void OnLoopStart(bool* CanStart);
	void PerformInteraction();
	void OnLoopFinish();
	void FlipRotation(bool UnFlip);
	void ResetHoldable();
	void RightMouseInput(bool KeyDown);
	void LeftMouseInput(bool KeyDown);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
