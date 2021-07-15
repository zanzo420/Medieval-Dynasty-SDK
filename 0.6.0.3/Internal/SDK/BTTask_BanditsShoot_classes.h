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

// BlueprintGeneratedClass BTTask_BanditsShoot.BTTask_BanditsShoot_C
// 0x0090 (FullSize[0x0138] - InheritedSize[0x00A8])
class UBTTask_BanditsShoot_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class APawn*                                       PawnReference;                                             // 0x00B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBlackboardKeySelector                      ResourceState;                                             // 0x00B8(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      Task;                                                      // 0x00E0(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      Player;                                                    // 0x0108(0x0028) (Edit, BlueprintVisible)
	class ABP_NPC_C*                                   NPCReference;                                              // 0x0130(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTTask_BanditsShoot.BTTask_BanditsShoot_C");
		return ptr;
	}



	void SolveBallisticArc(const struct FVector& Proj_pos, float Proj_speed, const struct FVector& Target_pos, const struct FVector& Target_velocity, float Gravity, struct FVector* s0, struct FVector* s1, int* Number);
	void SolveQuartic(float c0, float C1, float C2, float c3, float c4, float* s0, float* s1, float* s2, float* s3, int* Number);
	void SolveCubic(float c0, float C1, float C2, float c3, float* s0, float* s1, float* s2, int* Number);
	void SolveQuadric(float c0, float C1, float C2, float* s0, float* s1, int* Number);
	void GetCubicRoot(float Value, float* OutValue);
	void CalculateLookingRotation(struct FRotator* LookingRotator);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void DestroyHeldItem();
	void ExecuteUbergraph_BTTask_BanditsShoot(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
