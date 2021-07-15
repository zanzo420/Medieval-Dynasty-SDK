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

void FBP_Struct_NeedCustom::AfterRead()
{
	READ_PTR_FULL(SingleActorSingleActorMode_22_5FEB8A28493E0B45B9E78DA7CA660DEB, AActor);
	READ_PTR_FULL(ActorClassClosestActorfromClassMode_26_2C13B2004A02A450A9BDC0A4B04D90EF, UClass);
}

void FBP_Struct_NeedCustom::BeforeDelete()
{
	DELE_PTR_FULL(SingleActorSingleActorMode_22_5FEB8A28493E0B45B9E78DA7CA660DEB);
	DELE_PTR_FULL(ActorClassClosestActorfromClassMode_26_2C13B2004A02A450A9BDC0A4B04D90EF);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
