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

void UUI_Management_NPCLabels_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(Image, UImage);
	READ_PTR_FULL(Image_2, UImage);
	READ_PTR_FULL(Image_3, UImage);
	READ_PTR_FULL(Image_4, UImage);
	READ_PTR_FULL(Image_5, UImage);
	READ_PTR_FULL(Image_157, UImage);
	READ_PTR_FULL(SkillsBox, UHorizontalBox);
}

void UUI_Management_NPCLabels_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(Image);
	DELE_PTR_FULL(Image_2);
	DELE_PTR_FULL(Image_3);
	DELE_PTR_FULL(Image_4);
	DELE_PTR_FULL(Image_5);
	DELE_PTR_FULL(Image_157);
	DELE_PTR_FULL(SkillsBox);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
