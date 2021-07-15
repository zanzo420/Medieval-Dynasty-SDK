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

void UUI_SeasonSumUp_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(SystemsManagerReference, ABP_SystemsManager_C);
	READ_PTR_FULL(PlayerControllerReference, APC_Player_C);
}

void UUI_SeasonSumUp_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(SystemsManagerReference);
	DELE_PTR_FULL(PlayerControllerReference);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
