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

void ABP_FurnitureWorkbench_DryingRacks_C::AfterRead()
{
	ABP_MasterFurniture_Workbench_C::AfterRead();

	READ_PTR_FULL(Box, UBoxComponent);
	READ_PTR_FULL(S_DryingRack, UStaticMeshComponent);
}

void ABP_FurnitureWorkbench_DryingRacks_C::BeforeDelete()
{
	ABP_MasterFurniture_Workbench_C::BeforeDelete();

	DELE_PTR_FULL(Box);
	DELE_PTR_FULL(S_DryingRack);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
