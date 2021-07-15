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

// BlueprintGeneratedClass P_Spectator.P_Spectator_C
// 0x0590 (FullSize[0x0810] - InheritedSize[0x0280])
class AP_Spectator_C : public APawn
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UFloatingPawnMovement*                       FloatingPawnMovement;                                      // 0x0288(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                            Sphere;                                                    // 0x0290(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                            FP_Camera;                                                 // 0x0298(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              SpeedMultiplier;                                           // 0x02A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BaseSpeed;                                                 // 0x02A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CurrentSpeed;                                              // 0x02A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsSprinting;                                               // 0x02AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_JB8I[0x3];                                     // 0x02AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FieldOfView;                                               // 0x02B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	unsigned char                                      UnknownData_L7EI[0xC];                                     // 0x02B4(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPostProcessSettings                        PostProcess;                                               // 0x02C0(0x0550) (Edit, BlueprintVisible, ExposeOnSpawn)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass P_Spectator.P_Spectator_C");
		return ptr;
	}



	void UpdateFoV(float FieldOfView);
	void UserConstructionScript();
	void PressedInput_Q();
	void ReleasedInput_Q();
	void PressedInput_E();
	void ReleasedInput_E();
	void PressedInput_Sprint();
	void ReleasedInput_Sprint();
	void Backwards_Axis(float AxisValue);
	void Left_Axis(float AxisValue);
	void MouseWheelAxisChange(float Axis_Value);
	void GoUp();
	void GoDown();
	void ReceiveBeginPlay();
	void Down(float Axis_Value);
	void Right(float Axis_Value);
	void ExecuteUbergraph_P_Spectator(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
