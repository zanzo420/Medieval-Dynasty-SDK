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
// Enums
//---------------------------------------------------------------------------

// Enum Medieval_Dynasty.EDetourCrowdSimulationState
enum class Medieval_Dynasty_EDetourCrowdSimulationState : uint8_t
{
	EDetourCrowdSimulationState__Enabled = 0,
	EDetourCrowdSimulationState__ObstacleOnly = 1,
	EDetourCrowdSimulationState__Disabled = 2,
	EDetourCrowdSimulationState__EDetourCrowdSimulationState_MAX = 3,

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
