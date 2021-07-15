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

void UUI_HUD_LifeStats_Weight_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(Icn_WeightArrow, UImage);
	READ_PTR_FULL(StatusWeight, UCanvasPanel);
}

void UUI_HUD_LifeStats_Weight_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(Icn_WeightArrow);
	DELE_PTR_FULL(StatusWeight);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
