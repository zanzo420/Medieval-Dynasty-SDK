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

// BlueprintGeneratedClass BPI_MountInterface.BPI_MountInterface_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBPI_MountInterface_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_MountInterface.BPI_MountInterface_C");
		return ptr;
	}



	void GetMountCameraRotation(struct FRotator* Rotation);
	void LookAtOnMount(const struct FRotator& Rotation);
	void GetSprintKeyDown(bool* IsSprintKeyDown);
	void SetShouldSprint(bool ShouldSprint);
	void GetShouldSprint(bool* ShouldSprint);
	void WalkReleased(const struct FKey& Key);
	void WalkPressed(const struct FKey& Key);
	void MountStop();
	void DismountReleased(const struct FKey& Key);
	void DismountPressed(const struct FKey& Key);
	void Down_Axis(float Axis_Value);
	void Right_Axis(float Axis_Value);
	void SprintReleased(const struct FKey& Key);
	void SprintPressed(const struct FKey& Key);
	void MountSpecial();
	void JumpReleased(const struct FKey& Key);
	void JumpPressed(const struct FKey& Key);
	void Left_Axis(float Axis_Value);
	void Backwards_Axis(float Axis_Value);
	void UpdateMountCameraFoV(float FieldOfView);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
