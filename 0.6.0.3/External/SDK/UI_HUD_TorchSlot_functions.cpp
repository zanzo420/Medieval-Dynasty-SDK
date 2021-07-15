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

void UUI_HUD_TorchSlot_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(Icn_PoisonBar, UImage);
}

void UUI_HUD_TorchSlot_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(Icn_PoisonBar);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
