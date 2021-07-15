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

void UUI_Field_Details_SelectionBorderSlot_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(Image_633, UImage);
}

void UUI_Field_Details_SelectionBorderSlot_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(Image_633);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
