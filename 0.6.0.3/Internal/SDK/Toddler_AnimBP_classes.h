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

// AnimBlueprintGeneratedClass Toddler_AnimBP.Toddler_AnimBP_C
// 0x20205 (FullSize[0x204BD] - InheritedSize[0x02B8])
class UToddler_AnimBP_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_U3I6[0x8];                                     // 0x02B8(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_90;                            // 0x02C8(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_89;                            // 0x02F0(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_88;                            // 0x0318(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_92;                         // 0x0340(0x00C0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_80;                          // 0x0400(0x00A0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_2;                     // 0x04A0(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_2;                     // 0x04C0(0x0020)
	struct FAnimNode_DragonFeetSolver                  AnimGraphNode_DragonFeetSolver;                            // 0x04E0(0x0710)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_87;                            // 0x0BF0(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_24;                           // 0x0C18(0x0158)
	struct FAnimNode_DragonSpineSolver                 AnimGraphNode_DragonSpineSolver;                           // 0x0D70(0x0860)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_86;                            // 0x15D0(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_79;                          // 0x15F8(0x00A0)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_42;                 // 0x1698(0x0190)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_91;                         // 0x1828(0x00C0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_85;                            // 0x18E8(0x0028)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_41;                 // 0x1910(0x0190)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_78;                          // 0x1AA0(0x00A0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_84;                            // 0x1B40(0x0028)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_40;                 // 0x1B68(0x0190)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_23;                           // 0x1CF8(0x0158)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_130;                        // 0x1E50(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_129;                        // 0x1E78(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_128;                        // 0x1EA0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_127;                        // 0x1EC8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_126;                        // 0x1EF0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_125;                        // 0x1F18(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_124;                        // 0x1F40(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_123;                        // 0x1F68(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_122;                        // 0x1F90(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_121;                        // 0x1FB8(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_175;                          // 0x1FE0(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_69;                              // 0x2060(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_174;                          // 0x2090(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_68;                              // 0x2110(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_173;                          // 0x2140(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_67;                              // 0x21C0(0x0030)
	struct FAnimNode_PoseSnapshot                      AnimGraphNode_PoseSnapshot_3;                              // 0x21F0(0x0090)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_66;                              // 0x2280(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_14;                             // 0x22B0(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_65;                              // 0x2360(0x0030)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_64;                              // 0x2390(0x0030)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_120;                        // 0x23C0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_119;                        // 0x23E8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_118;                        // 0x2410(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_117;                        // 0x2438(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_116;                        // 0x2460(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_115;                        // 0x2488(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_114;                        // 0x24B0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_113;                        // 0x24D8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_112;                        // 0x2500(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_111;                        // 0x2528(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_110;                        // 0x2550(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_109;                        // 0x2578(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_108;                        // 0x25A0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_107;                        // 0x25C8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_106;                        // 0x25F0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_105;                        // 0x2618(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_104;                        // 0x2640(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_103;                        // 0x2668(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_102;                        // 0x2690(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_101;                        // 0x26B8(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_172;                          // 0x26E0(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_63;                              // 0x2760(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_171;                          // 0x2790(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_62;                              // 0x2810(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_170;                          // 0x2840(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_61;                              // 0x28C0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_169;                          // 0x28F0(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_60;                              // 0x2970(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_168;                          // 0x29A0(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_59;                              // 0x2A20(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_167;                          // 0x2A50(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_58;                              // 0x2AD0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_166;                          // 0x2B00(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_57;                              // 0x2B80(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_165;                          // 0x2BB0(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_56;                              // 0x2C30(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_164;                          // 0x2C60(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_55;                              // 0x2CE0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_163;                          // 0x2D10(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_54;                              // 0x2D90(0x0030)
	struct FAnimNode_PoseSnapshot                      AnimGraphNode_PoseSnapshot_2;                              // 0x2DC0(0x0090)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_53;                              // 0x2E50(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_13;                             // 0x2E80(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_52;                              // 0x2F30(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_12;                             // 0x2F60(0x00B0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_83;                            // 0x3010(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_90;                         // 0x3038(0x00C0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_82;                            // 0x30F8(0x0028)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_39;                 // 0x3120(0x0190)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_81;                            // 0x32B0(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_22;                           // 0x32D8(0x0158)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_21;                           // 0x3430(0x0158)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_38;                 // 0x3588(0x0190)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_89;                         // 0x3718(0x00C0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_80;                            // 0x37D8(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_77;                          // 0x3800(0x00A0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_20;                           // 0x38A0(0x0158)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_79;                            // 0x39F8(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_19;                           // 0x3A20(0x0158)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                       // 0x3B78(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_78;                            // 0x3B98(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_77;                            // 0x3BC0(0x0028)
	unsigned char                                      UnknownData_DNV0[0x8];                                     // 0x3BE8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAnimNode_CCDIK                             AnimGraphNode_CCDIK;                                       // 0x3BF0(0x0180)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_88;                         // 0x3D70(0x00C0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                       // 0x3E30(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_76;                            // 0x3E50(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_87;                         // 0x3E78(0x00C0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_75;                            // 0x3F38(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_74;                            // 0x3F60(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_73;                            // 0x3F88(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_18;                           // 0x3FB0(0x0158)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_76;                          // 0x4108(0x00A0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_72;                            // 0x41A8(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_86;                         // 0x41D0(0x00C0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_71;                            // 0x4290(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_85;                         // 0x42B8(0x00C0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_75;                          // 0x4378(0x00A0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_70;                            // 0x4418(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_84;                         // 0x4440(0x00C0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_83;                         // 0x4500(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_162;                          // 0x45C0(0x0080)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_37;                 // 0x4640(0x0190)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_36;                 // 0x47D0(0x0190)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_69;                            // 0x4960(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_68;                            // 0x4988(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_74;                          // 0x49B0(0x00A0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_82;                         // 0x4A50(0x00C0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_67;                            // 0x4B10(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_66;                            // 0x4B38(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_81;                         // 0x4B60(0x00C0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_73;                          // 0x4C20(0x00A0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_6;                                      // 0x4CC0(0x0048)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_80;                         // 0x4D08(0x00C0)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_35;                 // 0x4DC8(0x0190)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_34;                 // 0x4F58(0x0190)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_65;                            // 0x50E8(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_79;                         // 0x5110(0x00C0)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_33;                 // 0x51D0(0x0190)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_32;                 // 0x5360(0x0190)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_64;                            // 0x54F0(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_78;                         // 0x5518(0x00C0)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_31;                 // 0x55D8(0x0190)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_63;                            // 0x5768(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_62;                            // 0x5790(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_61;                            // 0x57B8(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_60;                            // 0x57E0(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_59;                            // 0x5808(0x0028)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_30;                 // 0x5830(0x0190)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_77;                         // 0x59C0(0x00C0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_17;                           // 0x5A80(0x0158)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_72;                          // 0x5BD8(0x00A0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_58;                            // 0x5C78(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_57;                            // 0x5CA0(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_56;                            // 0x5CC8(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_76;                         // 0x5CF0(0x00C0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_71;                          // 0x5DB0(0x00A0)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_29;                 // 0x5E50(0x0190)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_55;                            // 0x5FE0(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_75;                         // 0x6008(0x00C0)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_28;                 // 0x60C8(0x0190)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_54;                            // 0x6258(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_53;                            // 0x6280(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_16;                           // 0x62A8(0x0158)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_15;                           // 0x6400(0x0158)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_14;                           // 0x6558(0x0158)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_52;                            // 0x66B0(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_51;                            // 0x66D8(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_50;                            // 0x6700(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_74;                         // 0x6728(0x00C0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_70;                          // 0x67E8(0x00A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_90;                         // 0x6888(0x00E8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_49;                            // 0x6970(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_73;                         // 0x6998(0x00C0)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_27;                 // 0x6A58(0x0190)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_48;                            // 0x6BE8(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_47;                            // 0x6C10(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_13;                           // 0x6C38(0x0158)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_46;                            // 0x6D90(0x0028)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_26;                 // 0x6DB8(0x0190)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_69;                          // 0x6F48(0x00A0)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_25;                 // 0x6FE8(0x0190)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_45;                            // 0x7178(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_68;                          // 0x71A0(0x00A0)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_24;                 // 0x7240(0x0190)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_44;                            // 0x73D0(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_67;                          // 0x73F8(0x00A0)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_23;                 // 0x7498(0x0190)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_43;                            // 0x7628(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_66;                          // 0x7650(0x00A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_89;                         // 0x76F0(0x00E8)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_12;                            // 0x77D8(0x00C8)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_72;                         // 0x78A0(0x00C0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_42;                            // 0x7960(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_41;                            // 0x7988(0x0028)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_22;                 // 0x79B0(0x0190)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_71;                         // 0x7B40(0x00C0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_70;                         // 0x7C00(0x00C0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_65;                          // 0x7CC0(0x00A0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_40;                            // 0x7D60(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_39;                            // 0x7D88(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_69;                         // 0x7DB0(0x00C0)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_21;                 // 0x7E70(0x0190)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_38;                            // 0x8000(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_37;                            // 0x8028(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_12;                           // 0x8050(0x0158)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_20;                 // 0x81A8(0x0190)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_36;                            // 0x8338(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_64;                          // 0x8360(0x00A0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_35;                            // 0x8400(0x0028)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_19;                 // 0x8428(0x0190)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_68;                         // 0x85B8(0x00C0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_63;                          // 0x8678(0x00A0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_67;                         // 0x8718(0x00C0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_34;                            // 0x87D8(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_66;                         // 0x8800(0x00C0)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_18;                 // 0x88C0(0x0190)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_33;                            // 0x8A50(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_32;                            // 0x8A78(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_11;                           // 0x8AA0(0x0158)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_17;                 // 0x8BF8(0x0190)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_31;                            // 0x8D88(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_62;                          // 0x8DB0(0x00A0)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_16;                 // 0x8E50(0x0190)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_30;                            // 0x8FE0(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_29;                            // 0x9008(0x0028)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_15;                 // 0x9030(0x0190)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_65;                         // 0x91C0(0x00C0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_10;                           // 0x9280(0x0158)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_88;                         // 0x93D8(0x00E8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_28;                            // 0x94C0(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_27;                            // 0x94E8(0x0028)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_14;                 // 0x9510(0x0190)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_11;                            // 0x96A0(0x00C8)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_13;                 // 0x9768(0x0190)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_26;                            // 0x98F8(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_9;                            // 0x9920(0x0158)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_25;                            // 0x9A78(0x0028)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_12;                 // 0x9AA0(0x0190)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_11;                 // 0x9C30(0x0190)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_10;                 // 0x9DC0(0x0190)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_9;                  // 0x9F50(0x0190)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_64;                         // 0xA0E0(0x00C0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_61;                          // 0xA1A0(0x00A0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_24;                            // 0xA240(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_8;                            // 0xA268(0x0158)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_60;                          // 0xA3C0(0x00A0)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_8;                  // 0xA460(0x0190)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_23;                            // 0xA5F0(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_63;                         // 0xA618(0x00C0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_59;                          // 0xA6D8(0x00A0)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_7;                  // 0xA778(0x0190)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_6;                  // 0xA908(0x0190)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_22;                            // 0xAA98(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_7;                            // 0xAAC0(0x0158)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_21;                            // 0xAC18(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_6;                            // 0xAC40(0x0158)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_58;                          // 0xAD98(0x00A0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_51;                          // 0xAE38(0x00B0)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_5;                  // 0xAEE8(0x0190)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_5;                            // 0xB078(0x0158)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_87;                         // 0xB1D0(0x00E8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_20;                            // 0xB2B8(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_62;                         // 0xB2E0(0x00C0)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_4;                  // 0xB3A0(0x0190)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_3;                  // 0xB530(0x0190)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_61;                         // 0xB6C0(0x00C0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_19;                            // 0xB780(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_18;                            // 0xB7A8(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_17;                            // 0xB7D0(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_4;                            // 0xB7F8(0x0158)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_86;                         // 0xB950(0x00E8)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_60;                         // 0xBA38(0x00C0)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_2;                  // 0xBAF8(0x0190)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_16;                            // 0xBC88(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_3;                            // 0xBCB0(0x0158)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_85;                         // 0xBE08(0x00E8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_15;                            // 0xBEF0(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_14;                            // 0xBF18(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_13;                            // 0xBF40(0x0028)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_84;                         // 0xBF68(0x00E8)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_10;                            // 0xC050(0x00C8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_12;                            // 0xC118(0x0028)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_9;                             // 0xC140(0x00C8)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_59;                         // 0xC208(0x00C0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_57;                          // 0xC2C8(0x00A0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_58;                         // 0xC368(0x00C0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_11;                            // 0xC428(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_56;                          // 0xC450(0x00A0)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace;                    // 0xC4F0(0x0190)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_83;                         // 0xC680(0x00E8)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_8;                             // 0xC768(0x00C8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_10;                            // 0xC830(0x0028)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_7;                             // 0xC858(0x00C8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_82;                         // 0xC920(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_81;                         // 0xCA08(0x00E8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_9;                             // 0xCAF0(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_8;                             // 0xCB18(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_2;                            // 0xCB40(0x0158)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7;                             // 0xCC98(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_6;                             // 0xCCC0(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_5;                             // 0xCCE8(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_57;                         // 0xCD10(0x00C0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_5;                                      // 0xCDD0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_100;                        // 0xCE18(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_99;                         // 0xCE40(0x0028)
	struct FAnimNode_PoseSnapshot                      AnimGraphNode_PoseSnapshot;                                // 0xCE68(0x0090)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_51;                              // 0xCEF8(0x0030)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_50;                          // 0xCF28(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_161;                          // 0xCFD8(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_160;                          // 0xD058(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_50;                              // 0xD0D8(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_11;                             // 0xD108(0x00B0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_49;                          // 0xD1B8(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_4;                                      // 0xD268(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose;                              // 0xD2B0(0x0158)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4;                             // 0xD408(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_98;                         // 0xD430(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_97;                         // 0xD458(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_96;                         // 0xD480(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_95;                         // 0xD4A8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_94;                         // 0xD4D0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_93;                         // 0xD4F8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_92;                         // 0xD520(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_91;                         // 0xD548(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_90;                         // 0xD570(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_89;                         // 0xD598(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_88;                         // 0xD5C0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_87;                         // 0xD5E8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_86;                         // 0xD610(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_85;                         // 0xD638(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_84;                         // 0xD660(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_83;                         // 0xD688(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_82;                         // 0xD6B0(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_56;                         // 0xD6D8(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_159;                          // 0xD798(0x0080)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_2;                               // 0xD818(0x00C8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_80;                         // 0xD8E0(0x00E8)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_6;                             // 0xD9C8(0x00C8)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator;                           // 0xDA90(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_158;                          // 0xDAE0(0x0080)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend;                                 // 0xDB60(0x00C8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_157;                          // 0xDC28(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_49;                              // 0xDCA8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_156;                          // 0xDCD8(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_155;                          // 0xDD58(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_55;                          // 0xDDD8(0x00A0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_55;                         // 0xDE78(0x00C0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_54;                         // 0xDF38(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_154;                          // 0xDFF8(0x0080)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_79;                         // 0xE078(0x00E8)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_5;                             // 0xE160(0x00C8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_153;                          // 0xE228(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_48;                              // 0xE2A8(0x0030)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_81;                         // 0xE2D8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_80;                         // 0xE300(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_79;                         // 0xE328(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_53;                         // 0xE350(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_152;                          // 0xE410(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_151;                          // 0xE490(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_47;                              // 0xE510(0x0030)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_78;                         // 0xE540(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_77;                         // 0xE568(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_76;                         // 0xE590(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_75;                         // 0xE5B8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_74;                         // 0xE5E0(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_150;                          // 0xE608(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_46;                              // 0xE688(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_149;                          // 0xE6B8(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_45;                              // 0xE738(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_148;                          // 0xE768(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_44;                              // 0xE7E8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_147;                          // 0xE818(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_146;                          // 0xE898(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_145;                          // 0xE918(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_144;                          // 0xE998(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_143;                          // 0xEA18(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_48;                          // 0xEA98(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_43;                              // 0xEB48(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_10;                             // 0xEB78(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_54;                          // 0xEC28(0x00A0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_73;                         // 0xECC8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_72;                         // 0xECF0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_71;                         // 0xED18(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_70;                         // 0xED40(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_69;                         // 0xED68(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_68;                         // 0xED90(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_67;                         // 0xEDB8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_66;                         // 0xEDE0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_65;                         // 0xEE08(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_142;                          // 0xEE30(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_42;                              // 0xEEB0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_141;                          // 0xEEE0(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_41;                              // 0xEF60(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_140;                          // 0xEF90(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_139;                          // 0xF010(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_53;                          // 0xF090(0x00A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_52;                          // 0xF130(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_138;                          // 0xF1D0(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_40;                              // 0xF250(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_137;                          // 0xF280(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_136;                          // 0xF300(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_51;                          // 0xF380(0x00A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_50;                          // 0xF420(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_135;                          // 0xF4C0(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_39;                              // 0xF540(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_134;                          // 0xF570(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_133;                          // 0xF5F0(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_49;                          // 0xF670(0x00A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_48;                          // 0xF710(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_132;                          // 0xF7B0(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_38;                              // 0xF830(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_131;                          // 0xF860(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_130;                          // 0xF8E0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_129;                          // 0xF960(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_128;                          // 0xF9E0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_127;                          // 0xFA60(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_47;                          // 0xFAE0(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_37;                              // 0xFB90(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_9;                              // 0xFBC0(0x00B0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_64;                         // 0xFC70(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_63;                         // 0xFC98(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_62;                         // 0xFCC0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_61;                         // 0xFCE8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_60;                         // 0xFD10(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_59;                         // 0xFD38(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_58;                         // 0xFD60(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_57;                         // 0xFD88(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_56;                         // 0xFDB0(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_126;                          // 0xFDD8(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_36;                              // 0xFE58(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_125;                          // 0xFE88(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_35;                              // 0xFF08(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_124;                          // 0xFF38(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_123;                          // 0xFFB8(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_47;                          // 0x10038(0x00A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_46;                          // 0x100D8(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_122;                          // 0x10178(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_34;                              // 0x101F8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_121;                          // 0x10228(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_120;                          // 0x102A8(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_45;                          // 0x10328(0x00A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_44;                          // 0x103C8(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_119;                          // 0x10468(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_33;                              // 0x104E8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_118;                          // 0x10518(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_117;                          // 0x10598(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_43;                          // 0x10618(0x00A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_42;                          // 0x106B8(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_116;                          // 0x10758(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_32;                              // 0x107D8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_115;                          // 0x10808(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_114;                          // 0x10888(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_113;                          // 0x10908(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_112;                          // 0x10988(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_111;                          // 0x10A08(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_46;                          // 0x10A88(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_31;                              // 0x10B38(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_8;                              // 0x10B68(0x00B0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_45;                          // 0x10C18(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_30;                              // 0x10CC8(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_7;                              // 0x10CF8(0x00B0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_55;                         // 0x10DA8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_54;                         // 0x10DD0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_53;                         // 0x10DF8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_52;                         // 0x10E20(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_51;                         // 0x10E48(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_110;                          // 0x10E70(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_109;                          // 0x10EF0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_108;                          // 0x10F70(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_107;                          // 0x10FF0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_106;                          // 0x11070(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_44;                          // 0x110F0(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_29;                              // 0x111A0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_105;                          // 0x111D0(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_28;                              // 0x11250(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_104;                          // 0x11280(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_27;                              // 0x11300(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_103;                          // 0x11330(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_26;                              // 0x113B0(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_6;                              // 0x113E0(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_25;                              // 0x11490(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_5;                              // 0x114C0(0x00B0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_43;                          // 0x11570(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_41;                          // 0x11620(0x00A0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_52;                         // 0x116C0(0x00C0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_4;                             // 0x11780(0x00C8)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_51;                         // 0x11848(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_102;                          // 0x11908(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_40;                          // 0x11988(0x00A0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_3;                                      // 0x11A28(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_101;                          // 0x11A70(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_42;                          // 0x11AF0(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_100;                          // 0x11BA0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_50;                         // 0x11C20(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_49;                         // 0x11C48(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_48;                         // 0x11C70(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_47;                         // 0x11C98(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_46;                         // 0x11CC0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_45;                         // 0x11CE8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_44;                         // 0x11D10(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_43;                         // 0x11D38(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_42;                         // 0x11D60(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_41;                         // 0x11D88(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_40;                         // 0x11DB0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_39;                         // 0x11DD8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_38;                         // 0x11E00(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_37;                         // 0x11E28(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_36;                         // 0x11E50(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_35;                         // 0x11E78(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_34;                         // 0x11EA0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_33;                         // 0x11EC8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_32;                         // 0x11EF0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_31;                         // 0x11F18(0x0028)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_78;                         // 0x11F40(0x00E8)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_24;                              // 0x12028(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_99;                           // 0x12058(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_23;                              // 0x120D8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_98;                           // 0x12108(0x0080)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_50;                         // 0x12188(0x00C0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_77;                         // 0x12248(0x00E8)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_22;                              // 0x12330(0x0030)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_30;                         // 0x12360(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_97;                           // 0x12388(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_96;                           // 0x12408(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_95;                           // 0x12488(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_94;                           // 0x12508(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_93;                           // 0x12588(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_92;                           // 0x12608(0x0080)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_49;                         // 0x12688(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_91;                           // 0x12748(0x0080)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_48;                         // 0x127C8(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_90;                           // 0x12888(0x0080)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_47;                         // 0x12908(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_89;                           // 0x129C8(0x0080)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_46;                         // 0x12A48(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_88;                           // 0x12B08(0x0080)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_45;                         // 0x12B88(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_87;                           // 0x12C48(0x0080)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_44;                         // 0x12CC8(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_86;                           // 0x12D88(0x0080)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_43;                         // 0x12E08(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_85;                           // 0x12EC8(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_39;                          // 0x12F48(0x00A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_38;                          // 0x12FE8(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_84;                           // 0x13088(0x0080)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_42;                         // 0x13108(0x00C0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_41;                          // 0x131C8(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_83;                           // 0x13278(0x0080)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_41;                         // 0x132F8(0x00C0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_40;                         // 0x133B8(0x00C0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_39;                         // 0x13478(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_82;                           // 0x13538(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_81;                           // 0x135B8(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_80;                           // 0x13638(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_79;                           // 0x136B8(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_78;                           // 0x13738(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_77;                           // 0x137B8(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_76;                           // 0x13838(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_37;                          // 0x138B8(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_75;                           // 0x13958(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_74;                           // 0x139D8(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_21;                              // 0x13A58(0x0030)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_38;                         // 0x13A88(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_73;                           // 0x13B48(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_36;                          // 0x13BC8(0x00A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_76;                         // 0x13C68(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_75;                         // 0x13D50(0x00E8)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_37;                         // 0x13E38(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_72;                           // 0x13EF8(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_35;                          // 0x13F78(0x00A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_74;                         // 0x14018(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_73;                         // 0x14100(0x00E8)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_36;                         // 0x141E8(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_71;                           // 0x142A8(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_34;                          // 0x14328(0x00A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_72;                         // 0x143C8(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_71;                         // 0x144B0(0x00E8)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_35;                         // 0x14598(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_70;                           // 0x14658(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_33;                          // 0x146D8(0x00A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_70;                         // 0x14778(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_69;                         // 0x14860(0x00E8)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_34;                         // 0x14948(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_69;                           // 0x14A08(0x0080)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_33;                         // 0x14A88(0x00C0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_32;                          // 0x14B48(0x00A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_68;                         // 0x14BE8(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_67;                         // 0x14CD0(0x00E8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_68;                           // 0x14DB8(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_31;                          // 0x14E38(0x00A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_66;                         // 0x14ED8(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_65;                         // 0x14FC0(0x00E8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_30;                          // 0x150A8(0x00A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_29;                          // 0x15148(0x00A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_64;                         // 0x151E8(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_63;                         // 0x152D0(0x00E8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_28;                          // 0x153B8(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_67;                           // 0x15458(0x0080)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_32;                         // 0x154D8(0x00C0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_27;                          // 0x15598(0x00A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_62;                         // 0x15638(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_61;                         // 0x15720(0x00E8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_26;                          // 0x15808(0x00A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_60;                         // 0x158A8(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_59;                         // 0x15990(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_58;                         // 0x15A78(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_57;                         // 0x15B60(0x00E8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_25;                          // 0x15C48(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_66;                           // 0x15CE8(0x0080)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_31;                         // 0x15D68(0x00C0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_56;                         // 0x15E28(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_55;                         // 0x15F10(0x00E8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_24;                          // 0x15FF8(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_65;                           // 0x16098(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_40;                          // 0x16118(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_64;                           // 0x161C8(0x0080)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_30;                         // 0x16248(0x00C0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_29;                         // 0x16308(0x00C0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_28;                         // 0x163C8(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_63;                           // 0x16488(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_23;                          // 0x16508(0x00A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_54;                         // 0x165A8(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_53;                         // 0x16690(0x00E8)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_20;                              // 0x16778(0x0030)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_29;                         // 0x167A8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_28;                         // 0x167D0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_27;                         // 0x167F8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_26;                         // 0x16820(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_25;                         // 0x16848(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_24;                         // 0x16870(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_23;                         // 0x16898(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_22;                         // 0x168C0(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_62;                           // 0x168E8(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_19;                              // 0x16968(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_61;                           // 0x16998(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_18;                              // 0x16A18(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_60;                           // 0x16A48(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_17;                              // 0x16AC8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_59;                           // 0x16AF8(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_16;                              // 0x16B78(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_58;                           // 0x16BA8(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_15;                              // 0x16C28(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_57;                           // 0x16C58(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_14;                              // 0x16CD8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_56;                           // 0x16D08(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_13;                              // 0x16D88(0x0030)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_12;                              // 0x16DB8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_55;                           // 0x16DE8(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_11;                              // 0x16E68(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_4;                              // 0x16E98(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_10;                              // 0x16F48(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_54;                           // 0x16F78(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_22;                          // 0x16FF8(0x00A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_52;                         // 0x17098(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_51;                         // 0x17180(0x00E8)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_39;                          // 0x17268(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_21;                          // 0x17318(0x00A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_50;                         // 0x173B8(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_49;                         // 0x174A0(0x00E8)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_38;                          // 0x17588(0x00B0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_37;                          // 0x17638(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_20;                          // 0x176E8(0x00A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_48;                         // 0x17788(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_47;                         // 0x17870(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_46;                         // 0x17958(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_45;                         // 0x17A40(0x00E8)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_36;                          // 0x17B28(0x00B0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_35;                          // 0x17BD8(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_19;                          // 0x17C88(0x00A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_44;                         // 0x17D28(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_43;                         // 0x17E10(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_42;                         // 0x17EF8(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_41;                         // 0x17FE0(0x00E8)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_34;                          // 0x180C8(0x00B0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_33;                          // 0x18178(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_18;                          // 0x18228(0x00A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_40;                         // 0x182C8(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_39;                         // 0x183B0(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_38;                         // 0x18498(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_37;                         // 0x18580(0x00E8)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_32;                          // 0x18668(0x00B0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_31;                          // 0x18718(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_17;                          // 0x187C8(0x00A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_36;                         // 0x18868(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_35;                         // 0x18950(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_34;                         // 0x18A38(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_33;                         // 0x18B20(0x00E8)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_30;                          // 0x18C08(0x00B0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_29;                          // 0x18CB8(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_16;                          // 0x18D68(0x00A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_32;                         // 0x18E08(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_31;                         // 0x18EF0(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_30;                         // 0x18FD8(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_29;                         // 0x190C0(0x00E8)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_28;                          // 0x191A8(0x00B0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_27;                          // 0x19258(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_15;                          // 0x19308(0x00A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_28;                         // 0x193A8(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_27;                         // 0x19490(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_26;                         // 0x19578(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_25;                         // 0x19660(0x00E8)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_26;                          // 0x19748(0x00B0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_25;                          // 0x197F8(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_14;                          // 0x198A8(0x00A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_24;                         // 0x19948(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_23;                         // 0x19A30(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_22;                         // 0x19B18(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_21;                         // 0x19C00(0x00E8)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_24;                          // 0x19CE8(0x00B0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_23;                          // 0x19D98(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_13;                          // 0x19E48(0x00A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_20;                         // 0x19EE8(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_19;                         // 0x19FD0(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_18;                         // 0x1A0B8(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_17;                         // 0x1A1A0(0x00E8)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_22;                          // 0x1A288(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_12;                          // 0x1A338(0x00A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_16;                         // 0x1A3D8(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_15;                         // 0x1A4C0(0x00E8)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_21;                          // 0x1A5A8(0x00B0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_20;                          // 0x1A658(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_11;                          // 0x1A708(0x00A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_14;                         // 0x1A7A8(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_13;                         // 0x1A890(0x00E8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_53;                           // 0x1A978(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_10;                          // 0x1A9F8(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_52;                           // 0x1AA98(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_51;                           // 0x1AB18(0x0080)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_27;                         // 0x1AB98(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_50;                           // 0x1AC58(0x0080)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_26;                         // 0x1ACD8(0x00C0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_25;                         // 0x1AD98(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_49;                           // 0x1AE58(0x0080)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_24;                         // 0x1AED8(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_48;                           // 0x1AF98(0x0080)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_23;                         // 0x1B018(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_47;                           // 0x1B0D8(0x0080)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_22;                         // 0x1B158(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_46;                           // 0x1B218(0x0080)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_21;                         // 0x1B298(0x00C0)
	struct FAnimNode_ModifyCurve                       AnimGraphNode_ModifyCurve_2;                               // 0x1B358(0x0058)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_20;                         // 0x1B3B0(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_45;                           // 0x1B470(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_9;                           // 0x1B4F0(0x00A0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_19;                         // 0x1B590(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_44;                           // 0x1B650(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_8;                           // 0x1B6D0(0x00A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_12;                         // 0x1B770(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_11;                         // 0x1B858(0x00E8)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_19;                          // 0x1B940(0x00B0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_18;                         // 0x1B9F0(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_43;                           // 0x1BAB0(0x0080)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_17;                         // 0x1BB30(0x00C0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_18;                          // 0x1BBF0(0x00B0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_16;                         // 0x1BCA0(0x00C0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_7;                           // 0x1BD60(0x00A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_10;                         // 0x1BE00(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_9;                          // 0x1BEE8(0x00E8)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_3;                             // 0x1BFD0(0x00C8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_8;                          // 0x1C098(0x00E8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_6;                           // 0x1C180(0x00A0)
	struct FAnimNode_ModifyCurve                       AnimGraphNode_ModifyCurve;                                 // 0x1C220(0x0058)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_7;                          // 0x1C278(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_6;                          // 0x1C360(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_5;                          // 0x1C448(0x00E8)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_17;                          // 0x1C530(0x00B0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_4;                          // 0x1C5E0(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_3;                          // 0x1C6C8(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_2;                          // 0x1C7B0(0x00E8)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_16;                          // 0x1C898(0x00B0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_15;                         // 0x1C948(0x00C0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_15;                          // 0x1CA08(0x00B0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_14;                          // 0x1CAB8(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_9;                               // 0x1CB68(0x0030)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3;                             // 0x1CB98(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_5;                           // 0x1CBC0(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_42;                           // 0x1CC60(0x0080)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_14;                         // 0x1CCE0(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_41;                           // 0x1CDA0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_40;                           // 0x1CE20(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_39;                           // 0x1CEA0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_38;                           // 0x1CF20(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_37;                           // 0x1CFA0(0x0080)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_13;                         // 0x1D020(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_36;                           // 0x1D0E0(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_13;                          // 0x1D160(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_35;                           // 0x1D210(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_34;                           // 0x1D290(0x0080)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_12;                         // 0x1D310(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_33;                           // 0x1D3D0(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_12;                          // 0x1D450(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_32;                           // 0x1D500(0x0080)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_11;                         // 0x1D580(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_31;                           // 0x1D640(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_11;                          // 0x1D6C0(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_30;                           // 0x1D770(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_29;                           // 0x1D7F0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_28;                           // 0x1D870(0x0080)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_10;                         // 0x1D8F0(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_27;                           // 0x1D9B0(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_10;                          // 0x1DA30(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_26;                           // 0x1DAE0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_25;                           // 0x1DB60(0x0080)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_9;                          // 0x1DBE0(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_24;                           // 0x1DCA0(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_9;                           // 0x1DD20(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_23;                           // 0x1DDD0(0x0080)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_8;                          // 0x1DE50(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_22;                           // 0x1DF10(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_8;                           // 0x1DF90(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_21;                           // 0x1E040(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_20;                           // 0x1E0C0(0x0080)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_7;                          // 0x1E140(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_19;                           // 0x1E200(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_7;                           // 0x1E280(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_18;                           // 0x1E330(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_17;                           // 0x1E3B0(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_6;                           // 0x1E430(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_16;                           // 0x1E4E0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_15;                           // 0x1E560(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_5;                           // 0x1E5E0(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_14;                           // 0x1E690(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_4;                           // 0x1E710(0x00A0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_6;                          // 0x1E7B0(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_13;                           // 0x1E870(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_12;                           // 0x1E8F0(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_4;                           // 0x1E970(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_3;                           // 0x1EA20(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_11;                           // 0x1EAC0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_10;                           // 0x1EB40(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_3;                           // 0x1EBC0(0x00B0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_5;                          // 0x1EC70(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9;                            // 0x1ED30(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8;                            // 0x1EDB0(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_2;                           // 0x1EE30(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7;                            // 0x1EEE0(0x0080)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_4;                          // 0x1EF60(0x00C0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum;                             // 0x1F020(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6;                            // 0x1F0D0(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2;                           // 0x1F150(0x00A0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_3;                          // 0x1F1F0(0x00C0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_2;                                      // 0x1F2B0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_21;                         // 0x1F2F8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_20;                         // 0x1F320(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_19;                         // 0x1F348(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_18;                         // 0x1F370(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_17;                         // 0x1F398(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_16;                         // 0x1F3C0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_15;                         // 0x1F3E8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_14;                         // 0x1F410(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_13;                         // 0x1F438(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_12;                         // 0x1F460(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_11;                         // 0x1F488(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_10;                         // 0x1F4B0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9;                          // 0x1F4D8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8;                          // 0x1F500(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7;                          // 0x1F528(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6;                          // 0x1F550(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5;                          // 0x1F578(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4;                          // 0x1F5A0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3;                          // 0x1F5C8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2;                          // 0x1F5F0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult;                            // 0x1F618(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5;                            // 0x1F640(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_8;                               // 0x1F6C0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4;                            // 0x1F6F0(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_7;                               // 0x1F770(0x0030)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_6;                               // 0x1F7A0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3;                            // 0x1F7D0(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_5;                               // 0x1F850(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2;                            // 0x1F880(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_4;                               // 0x1F900(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                              // 0x1F930(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3;                               // 0x1F9B0(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_3;                              // 0x1F9E0(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2;                               // 0x1FA90(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_2;                              // 0x1FAC0(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot;                                        // 0x1FB70(0x0048)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                 // 0x1FBB8(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                                // 0x1FBE8(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                        // 0x1FC98(0x0030)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2;                             // 0x1FCC8(0x0028)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer;                            // 0x1FCF0(0x00E8)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_2;                          // 0x1FDD8(0x00C0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool;                             // 0x1FE98(0x00A0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend;                            // 0x1FF38(0x00C0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose;                               // 0x1FFF8(0x0028)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_2;                             // 0x20020(0x00C8)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive;                               // 0x200E8(0x00C8)
	class ABP_NPC_C*                                   ALS_NPCCharacter;                                          // 0x201B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Velocity;                                                  // 0x201B8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   AimOffset;                                                 // 0x201C4(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   LeanGrounded;                                              // 0x201CC(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   FeetPosition;                                              // 0x201D4(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_MovementDirection_E_MovementDirection> MovementDirection;                                         // 0x201DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_SIZU[0x3];                                     // 0x201DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 FlailAlphaCurve;                                           // 0x201E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                                 LandAlphaCurve;                                            // 0x201E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_LocomotionState_E_LocomotionState>   ActiveLocomotionState;                                     // 0x201F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_IdleEntryState_E_IdleEntryState>     IdleEntryState;                                            // 0x201F1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_MovementMode_E_MovementMode>         ALS_PrevMovementMode;                                      // 0x201F2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_HJ5F[0x1];                                     // 0x201F3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRotator                                    CharacterRotation;                                         // 0x201F4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                                    LastVelocityRotation;                                      // 0x20200(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                                    LastMovementInputRotation;                                 // 0x2020C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                                    LookingRotation;                                           // 0x20218(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              AimYawDelta;                                               // 0x20224(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AimYawRate;                                                // 0x20228(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_MovementMode_E_MovementMode>         ALS_MovementMode;                                          // 0x2022C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Gait_E_Gait>                         ALS_Gait;                                                  // 0x2022D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Stance_E_Stance>                     ALS_Stance;                                                // 0x2022E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_RotationMode_E_RotationMode>         ALS_RotationMode;                                          // 0x2022F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_ViewMode_E_ViewMode>                 ALS_ViewMode;                                              // 0x20230(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_KY10[0x3];                                     // 0x20231(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Direction;                                                 // 0x20234(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Speed;                                                     // 0x20238(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              GaitValue;                                                 // 0x2023C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              N_PlayRate;                                                // 0x20240(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              C_PlayRate;                                                // 0x20244(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              StartPosition;                                             // 0x20248(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LeanInAir;                                                 // 0x2024C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    PreviousVelocityRotation;                                  // 0x20250(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              VelocityDifference;                                        // 0x2025C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PreviousSpeed;                                             // 0x20260(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AccelerationDifference;                                    // 0x20264(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FlailRate;                                                 // 0x20268(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FlailBlendAlpha;                                           // 0x2026C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LandPredictionAlpha;                                       // 0x20270(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_PivotParams                             PivotParams;                                               // 0x20274(0x0014) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CharacterRotationDifference;                               // 0x20288(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              VelocityDifference2;                                       // 0x2028C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ALS_Aiming;                                                // 0x20290(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsMoving;                                                  // 0x20291(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               HasMovementInput;                                          // 0x20292(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ShowTraces;                                                // 0x20293(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               TurningInPlace;                                            // 0x20294(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ShouldTurnInPlace;                                         // 0x20295(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               TurningRight;                                              // 0x20296(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_WWSH[0x1];                                     // 0x20297(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TurnInPlaceDelayCount;                                     // 0x20298(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_GOZJ[0x4];                                     // 0x2029C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCharacterMovementComponent*                 CharacterMovement;                                         // 0x202A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                           CapsuleComponent;                                          // 0x202A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                ActiveTurnInPlaceMontage;                                  // 0x202B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WalkingSpeed;                                              // 0x202B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RunningSpeed;                                              // 0x202BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SprintingSpeed;                                            // 0x202C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CrouchingSpeed;                                            // 0x202C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                GetUpFromBack;                                             // 0x202C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                GetUpFromFront;                                            // 0x202D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                AdditiveLand;                                              // 0x202D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               RF;                                                        // 0x202E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_L9MO[0x7];                                     // 0x202E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FST_TurnAnims                               N_Turn_91;                                                 // 0x202E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_TurnAnims                               N_Turn_181;                                                // 0x202F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_TurnAnims                               LF_Turn_91;                                                // 0x20308(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_TurnAnims                               RF_Turn_91;                                                // 0x20318(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_TurnAnims                               CLF_Turn_91;                                               // 0x20328(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_TurnAnims                               CRF_Turn_91;                                               // 0x20338(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               LoopMontage;                                               // 0x20348(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               LoopPlaying;                                               // 0x20349(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               HeldItem;                                                  // 0x2034A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_Tools_E_Tools>                       ToolType;                                                  // 0x2034B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Attack;                                                    // 0x2034C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_Q9ZV[0x3];                                     // 0x2034D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Strength;                                                  // 0x20350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsHoldingTorch;                                            // 0x20354(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_TCM3[0x3];                                     // 0x20355(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     SnapLocationRightHand;                                     // 0x20358(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     SnapLocationLeftHand;                                      // 0x20364(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             SnapComponent;                                             // 0x20370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SnapAlpha;                                                 // 0x20378(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              TargetSnapAlpha;                                           // 0x2037C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              ResetSnapAlpha;                                            // 0x20380(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	bool                                               UseHeadForFullBodyAnimations;                              // 0x20384(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_M6QN[0x3];                                     // 0x20385(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       LeftHandSocketName;                                        // 0x20388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       RightHandSocketName;                                       // 0x20390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_AnimInteractionTypes_E_AnimInteractionTypes> InteractionType;                                           // 0x20398(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UseLookingDown;                                            // 0x20399(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_Z9NG[0x2];                                     // 0x2039A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LookingDownAngle;                                          // 0x2039C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CanPerformHitAction;                                       // 0x203A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_KMPW[0x3];                                     // 0x203A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              HeadMovementBlend;                                         // 0x203A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<TEnumAsByte<E_AnimInteractionTypes_E_AnimInteractionTypes>, struct FST_MontagesSettings> MontagesSettings;                                          // 0x203A8(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               HitObject;                                                 // 0x203F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_5UCY[0x7];                                     // 0x203F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBlendSpaceBase*                             MontageAimOffset;                                          // 0x20400(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UseMontageAO;                                              // 0x20408(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_90EJ[0x7];                                     // 0x20409(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBlendSpaceBase*                             FullBodyAimOffset;                                         // 0x20410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UseFullBodyAO;                                             // 0x20418(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_D1HO[0x7];                                     // 0x20419(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimMontage*                                CurrentHoldableMontage;                                    // 0x20420(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DoLoop;                                                    // 0x20428(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               isAiming;                                                  // 0x20429(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_TL6B[0x2];                                     // 0x2042A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRotator                                    SpineRotation;                                             // 0x2042C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsPicking;                                                 // 0x20438(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               UsingLeftHand;                                             // 0x20439(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsSitting;                                                 // 0x2043A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsSleeping;                                                // 0x2043B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_SleepingDirection_E_SleepingDirection> SleepingDirection;                                         // 0x2043C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UseBedSleepingPose;                                        // 0x2043D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               EnableIK;                                                  // 0x2043E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsSick;                                                    // 0x2043F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsInjured;                                                 // 0x20440(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_EA0M[0x3];                                     // 0x20441(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              HeadBlendInDialogue;                                       // 0x20444(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ForceStand;                                                // 0x20448(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_S0RK[0x3];                                     // 0x20449(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FeetAlpha;                                                 // 0x2044C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDragonData_MultiInput                      DragonInput;                                               // 0x20450(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               IsInIdleState;                                             // 0x20470(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ITBC[0x3];                                     // 0x20471(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              IdleBlendAlpha;                                            // 0x20474(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AdditiveBlend;                                             // 0x20478(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CanSwitchAnim;                                             // 0x2047C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               OverriddenPose;                                            // 0x2047D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      SelectedStandingPose;                                      // 0x2047E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      SelectedOtherPose;                                         // 0x2047F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_AfterIdlePose_E_AfterIdlePose>       DoAfterIdle;                                               // 0x20480(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_7DM8[0x7];                                     // 0x20481(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<unsigned char>                              StandingIdlesIDs;                                          // 0x20488(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TEnumAsByte<E_IdleStates_E_IdleStates>             IdleState;                                                 // 0x20498(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_T0T6[0x7];                                     // 0x20499(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<unsigned char>                              OtherIdlesIDs;                                             // 0x204A0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               LowFPS;                                                    // 0x204B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_6AW3[0x3];                                     // 0x204B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              IKFPSLimit;                                                // 0x204B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              IKFPSRestore;                                              // 0x204B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               WokeUp;                                                    // 0x204BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Toddler_AnimBP.Toddler_AnimBP_C");
		return ptr;
	}



	void GetInteractionEndpoint(float Distance, struct FVector* EndPoint);
	void GetPhysicsHandle(class UPhysicsHandleComponent** PhysicsHandle);
	void PlayMountAnimation(AdsMountingSystem_EMountingDirection Position, TEnumAsByte<E_MountAnimType_E_MountAnimType> Type, bool* Success);
	void GetProfessionData(struct FST_Profession* ProfessionData);
	void GetIsInDialogue_BPI(bool* IsInDialogue);
	void GetSystemManager(class ABP_SystemsManager_C** SystemManager);
	void GetBaseCharacterWorldLocation(struct FVector* Location);
	void PlayHolsterAnimation(float PlayRate, TEnumAsByte<E_Tools_E_Tools> ToolType, float* Duration, float* TakeOutDuration);
	void GetHeadTransform(struct FTransform* HeadTransform);
	void GetStatsComponent(class UBP_CharacterStatsComponent_C** StatsComponent);
	void GetProfession(TEnumAsByte<E_Profession_E_Profession>* Profession);
	void GetCurrentPickUpAnim(class UAnimMontage** PickUpMontage);
	void GetIsAnyMontageFromMapPlaying(bool* Return_Value);
	void isPlayer(bool* Player, class APC_Player_C** PlayerController);
	void GetCameraViewDirection(struct FVector* Forward);
	void Get_ALS_Stance_BPI(TEnumAsByte<E_Stance_E_Stance>* Stance);
	void AnimGraph(struct FPoseLink* AnimGraph);
	float GetPelvisDip();
	void OnNPCUnoptimized();
	void OnNPCOptimized();
	void CheckALSStance();
	void OnNPCActive();
	void OnNPCDeactive();
	void VerifyPoseID();
	TArray<unsigned char> GetStandingPoseExcludes();
	void UpdateIKState();
	void GetCurrentSeason(int* Season);
	void SetPoseID(TEnumAsByte<E_IdleStates_E_IdleStates> IdleState, unsigned char PoseID);
	void Update_Range_Strength(float Strength);
	bool CheckIfShouldPlayAnotherLoop();
	void SetFullBodyAimOffset(class UBlendSpaceBase* FullBodyAimOffset);
	void SetMontageAimOffset(class UBlendSpaceBase* MontageAimOffset);
	bool CheckIfNewMontage(TMap<TEnumAsByte<E_AnimInteractionTypes_E_AnimInteractionTypes>, struct FST_MontagesSettings> MontagesSettings);
	void IsAnyMontageFromMapPlaying(bool* AnyMontagePlaying);
	void SetMontageSetting(TEnumAsByte<E_AnimInteractionTypes_E_AnimInteractionTypes> Key, const struct FST_MontagesSettings& Value);
	void GetMontageSettings(TEnumAsByte<E_AnimInteractionTypes_E_AnimInteractionTypes> Key, struct FST_MontagesSettings* MontageSettings);
	bool CheckIfIsLookingDown(float Angle);
	void SelectMontageDependingOnTheAngle(float Angle, struct FST_MontagesSettings* MontageSettings);
	void SetDefaultValues_();
	void SetReferences();
	void CalculateLandPredictionAlpha();
	void CalculateInAirLeaningValues();
	void On_ALS_MovementMode_Changed();
	void CalculatePlayRates(float WalkAnimSpeed, float RunAnimSpeed, float SprintAnimSpeed, float CrouchAnimSpeed);
	void CalculateGaitValue();
	void On_ALS_Stance_Changed();
	void TurnInPlace__Responsive_(float AimYawLimit, const struct FST_TurnAnims& Turn_Anims, float PlayRate);
	void CalculateStartPosition();
	void GetVariablesFromBaseCharacterBP();
	void TurnInPlace__Delay_(float MaxCameraSpeed, float AimYawLimit_1, float DelayTime_1, float PlayRate_1, const struct FST_TurnAnims& Turn_Anims_1, float AimYawLimit_2, float DelayTime_2, float PlayRate_2, const struct FST_TurnAnims& Turn_Anims_2);
	void CalculateAimOffset();
	void CalculateGroundedLeaningValues();
	void CalculateMovementDirection(float DirectionThresholdMin, float DirectionThresholdMax, float Buffer);
	void OnCompleted_0DF6A45F4C50E340161AAB892E7B1421(const struct FName& NotifyName);
	void OnBlendOut_0DF6A45F4C50E340161AAB892E7B1421(const struct FName& NotifyName);
	void OnInterrupted_0DF6A45F4C50E340161AAB892E7B1421(const struct FName& NotifyName);
	void OnNotifyBegin_0DF6A45F4C50E340161AAB892E7B1421(const struct FName& NotifyName);
	void OnNotifyEnd_0DF6A45F4C50E340161AAB892E7B1421(const struct FName& NotifyName);
	void OnCompleted_E8162AEA4004AFCFB3D65AA049F28171(const struct FName& NotifyName);
	void OnBlendOut_E8162AEA4004AFCFB3D65AA049F28171(const struct FName& NotifyName);
	void OnInterrupted_E8162AEA4004AFCFB3D65AA049F28171(const struct FName& NotifyName);
	void OnNotifyBegin_E8162AEA4004AFCFB3D65AA049F28171(const struct FName& NotifyName);
	void OnNotifyEnd_E8162AEA4004AFCFB3D65AA049F28171(const struct FName& NotifyName);
	void SetMountAnimalType_BPI(TEnumAsByte<E_Animals_E_Animals> MountAnimalType);
	void OnCompleted_9E2C9CF1458D35C205ABA6978F283FB9(const struct FName& NotifyName);
	void SetEnableIK_BPI(bool IK_Enabled);
	void OnBlendOut_9E2C9CF1458D35C205ABA6978F283FB9(const struct FName& NotifyName);
	void UpdateIKAlpha(float Alpha);
	void OnInterrupted_9E2C9CF1458D35C205ABA6978F283FB9(const struct FName& NotifyName);
	void PlayMountSpecial();
	void PlayMountStopAnimation(int AnimIndex);
	void OnNotifyBegin_9E2C9CF1458D35C205ABA6978F283FB9(const struct FName& NotifyName);
	void OnNotifyEnd_9E2C9CF1458D35C205ABA6978F283FB9(const struct FName& NotifyName);
	void Set_Caught_Prey_BPI(bool CaughtPrey);
	void OnDeath();
	void OnCompleted_61EB9E844FD54B1AF49A94ADD8A78222(const struct FName& NotifyName);
	void OnBlendOut_61EB9E844FD54B1AF49A94ADD8A78222(const struct FName& NotifyName);
	void OnInterrupted_61EB9E844FD54B1AF49A94ADD8A78222(const struct FName& NotifyName);
	void OnNotifyBegin_61EB9E844FD54B1AF49A94ADD8A78222(const struct FName& NotifyName);
	void OnNotifyEnd_61EB9E844FD54B1AF49A94ADD8A78222(const struct FName& NotifyName);
	void OnCompleted_B53749DB447CCFA05ECC81ABBE232892(const struct FName& NotifyName);
	void OnBlendOut_B53749DB447CCFA05ECC81ABBE232892(const struct FName& NotifyName);
	void Knockback(const struct FVector& KnockbackDirection, float KnockbackStrength);
	void OnInterrupted_B53749DB447CCFA05ECC81ABBE232892(const struct FName& NotifyName);
	void WaitForCrafting();
	void OnNotifyBegin_B53749DB447CCFA05ECC81ABBE232892(const struct FName& NotifyName);
	void SetIsInWater(bool InWater, float Intensity);
	void OnNotifyEnd_B53749DB447CCFA05ECC81ABBE232892(const struct FName& NotifyName);
	void AnimNotify_BreakMontageInterrupted(TEnumAsByte<E_Profession_E_Profession> Profession, class UAnimMontage* Montage, unsigned char BreakAnimID);
	void AnimNotify_BreakMontageBlendOut(TEnumAsByte<E_Profession_E_Profession> Profession, class UAnimMontage* Montage, unsigned char BreakAnimID);
	void AnimNotify_BreakMontageComplete(TEnumAsByte<E_Profession_E_Profession> Profession, class UAnimMontage* Montage, unsigned char BreakAnimID);
	void Set_BreakState_BPI(bool IsTakingBreak, TEnumAsByte<E_Profession_E_Profession> Profession, bool RandomizeAnim, unsigned char BreakAnimID);
	void AnimNotify_WorkLoopsFinished(TEnumAsByte<E_Profession_E_Profession> Profession, class UAnimMontage* Montage, unsigned char ProfessionState, int Loop);
	void AnimNotify_WorkLoopIncreased(TEnumAsByte<E_Profession_E_Profession> Profession, class UAnimMontage* Montage, unsigned char ProfessionState, int Loop);
	void AnimNotify_WorkMontageInterrupted(TEnumAsByte<E_Profession_E_Profession> Profession, class UAnimMontage* Montage, unsigned char ProfessionState);
	void AnimNotify_WorkMontageComplete(TEnumAsByte<E_Profession_E_Profession> Profession, class UAnimMontage* Montage, unsigned char ProfessionState);
	void OnCompleted_548CB49A4592686477CF36B71C214716(const struct FName& NotifyName);
	void Set_WorkState_BPI(bool IsWorking, TEnumAsByte<E_Profession_E_Profession> Profession, unsigned char ProfessionState, int Loops);
	void Set_IdleOtherPose_BPI(TEnumAsByte<E_OtherIdles_E_OtherIdles> Other_Idle_Pose, TEnumAsByte<E_AfterIdlePose_E_AfterIdlePose> DoAfterPose);
	void Set_IdleLookingPose_BPI(TEnumAsByte<E_LookingIdles_E_LookingIdles> Looking_Idle_Pose, TEnumAsByte<E_AfterIdlePose_E_AfterIdlePose> DoAfterPose);
	void Set_IdleTalkingPose_BPI(TEnumAsByte<E_TalkingIdles_E_TalkingIdles> Talking_Idle_Pose, TEnumAsByte<E_AfterIdlePose_E_AfterIdlePose> DoAfterPose);
	void Set_IdleStandingPose_BPI(TEnumAsByte<E_StandingIdles_E_StandingIdles> Standing_Idle_Pose, TEnumAsByte<E_AfterIdlePose_E_AfterIdlePose> DoAfterPose);
	void SetMontageSettings(TMap<TEnumAsByte<E_AnimInteractionTypes_E_AnimInteractionTypes>, struct FST_MontagesSettings> MontagesSettings);
	void SelectPickUpAnim(class UObject* Instigator, bool PreferTwoHanded);
	void OnBlendOut_548CB49A4592686477CF36B71C214716(const struct FName& NotifyName);
	void AnimNotify_HolsterWeapon();
	void OnInterrupted_548CB49A4592686477CF36B71C214716(const struct FName& NotifyName);
	void OnNotifyBegin_548CB49A4592686477CF36B71C214716(const struct FName& NotifyName);
	void AnimNotify_DespawnAnimItem();
	void AnimNotify_SpawnAnimItem(class UClass* ItemClass, bool IsOffHand);
	void OnNotifyEnd_548CB49A4592686477CF36B71C214716(const struct FName& NotifyName);
	void PlayCraftingAnimation(TEnumAsByte<E_Workbenches_E_Workbenches> WorkbenchType, float CraftingTime);
	void AnimNotify_StopMovement(bool bStopMovementInput);
	void AnimNotify_StopRotation(bool StopRotationInput);
	void AnimNotify_LimitCamera(const struct FST_CameraRotationLimits& CameraLimits);
	void PlayerLookAt(class AActor* Target, const struct FVector& TargetLocation);
	void PlayerMoveForInteraction(class AActor* Instigator, const struct FVector& Target, const struct FVector& LookAtTarget, bool RotateDuringMovement, bool UsePlayerLookAt, bool ResetLookAtPitch);
	void SetStrengthAlpha(float Alpha);
	void SetToolType(TEnumAsByte<E_Tools_E_Tools> ToolType);
	void CameraShake_BPI(class UClass* ShakeClass, float Scale);
	void AddCharacterRotation_BPI(const struct FRotator& AddAmount);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_BlendListByBool_EB8F8BDE483568BF53FB9289C76D3039();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_BlendListByBool_D7981D0D4FB7723B7AA43682B9A3EB3A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_BlendListByBool_459ACE5D48D427A5BBEBDEBEE26B5820();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_BlendListByBool_ECD07778426A6CD3A0247289A4982D96();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_BlendListByBool_60A8BE6F4BCE9FA4FAF28E96829845B3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_LayeredBoneBlend_4D723EFB4DA8F87F556EDBB03A0FE4C6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_BlendListByBool_6EED694C471C0B18AD5D29B06E7FEB3F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_BlendListByBool_3738D5274DA480E07D82DC82A1ABF85E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_BlendListByBool_7D12F30A477B2DBCB7FBB2865C419C79();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_BlendListByBool_CDCBECF74118EEBB599920A9CD2442D9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_BlendListByBool_73A8F3CD4B1B7894A8CF07A49BC146D4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_LayeredBoneBlend_0C030926447519DF01A119ACA9530FB4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_LayeredBoneBlend_4F763A8948F5242C3A4A6B957F70AE3E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_LayeredBoneBlend_044B923C47B279C821EA5E9A370AC464();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_0F1AFBD548DC31FC8917A4840A73835B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_8014DA7748D638E0C160E1B99DE1F43C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_C3C360294FC651D5582762B7F2823497();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_20497A2544F87F7AB34A6F91C64286E6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_ADB266484661BA2F44047CBC17F0D2E0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_4ADA5DB04AF93CE7ACB85290DC2DA348();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_56F5AAB84A69D97941082A94240CD87A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_69DDD24F4954E8AA419C34B14E79F7EA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_E25E4C8341B570DCF4BB2F9AF38F8A17();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_B1FEFDDB474EAB09DDDDB78F3B6538EB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_C981458C4AE3235619C08C8FA7AC4B2C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_87DBAF4D49CB080717163ABD5F03C76F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_F1DFAB464F770AAD9CC83683A28323DD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_3B55AD2A4925D7B1B5AC5FB2D8338AB8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_D082768E472AB92A0C090E8DFB3FC0D4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_B81B4B894ADB3AE3839A0CB27B77ADA4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_EDE2AF544DD0887307050BBFADCB9EC8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_AF12682444CEF54093376C84CED380A2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_0657A8FA454461856AE845A059AB53C4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_808FE06A44D96FB93B1DBC9BDC2C41BC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_A7C2E42449EF4B784F847D8D8B3C52B2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_BlendListByBool_3D8307404E3590E897608E9E59E94843();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_11CC0B46402A1F809EE4FEB3509EF214();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_305C7C7745DBDE93809B42B17757CCE0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_27C9BB7140AA1124C4A8738941C341A0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_920A2CB64C86FD69666320BADCFE2435();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_E278825E44B7E94B59BCEAB3E07349B4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_9D97BD2446C4BD66EF55558EBC8D1249();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_38C7C86942D56C4A2A8BE0AAB5B0AE81();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_4A0ED7A9413908A6681762A732E7E797();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_BlendListByBool_3CFFD7D74C503C51559B72BF3A0017FF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_BlendListByBool_C3A303724E2E0BAA68339F85CE531B61();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_BlendListByBool_A7AFC36643654CF6A97220A6A636D8D6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_E2D6D43B4785A945F63BA693E5C31087();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_D88BE9E84D3AB741A0D7C08BB28FB7B2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_BlendListByBool_841B72BD4BE836ABC041CEBDA2CC9A6A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_80B21437410B0592CA720CA8448847C1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_BlendListByBool_3E99F4C8435D3A596ECF878D3C96AACB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_BlendListByBool_B429416C4F4E920446FAA9B361494DF7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_B6F3A65C425F051893C6A4A75DF14712();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_BlendListByBool_CBAB7298431DE1D0591790B8FFBE24FF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_BlendListByBool_2BAC446444EB5FD3E3401CA669BA9E65();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_BlendListByBool_5A45A2AD490CA8FEF55F3E8953543F7E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_BlendListByBool_314F0B8E466B86ABFB25618A89D50382();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_B3CCB2584A4869E1FEB55F986AF08567();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_BlendListByBool_700BEF554F413B9ECA3B70899E97FDFF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_BlendListByBool_0A8F30FB433A967DD3BC07B0FF975989();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_4888EC3C4EDC5B55EC8090849D20E792();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_15CA90B241C6B1F9B06AC180929CB9FD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_LayeredBoneBlend_F79E138449D14F72FADFE18FC15EC77B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_23A0B76346852CE12C1EC2AE1A3A894C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_88D8FBF8431FD4C545263F9B1ECAD06D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_C7B47807476AAA5709F0D1834DE92A3B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_0BACFB3B40D83E12B7C4CBA12AF8F56F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_3BA4BDF14630E8B70D9FF68A375D76C8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_9FCE57F948C2737CE921199A7A072C69();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_7BB4989141C8155AA56B1FB0BAC476B2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_951EFF9E470082BC65496387A48A5537();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_B20F5F6D49D1DFB54807F0BF90B9BD4A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_1295D26A47DF65837C28369B0AF4DE35();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_EAC407A648A0E8F1D2BDF5A7E86EA0CF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_57F7FDEC4728B6F34AD81B892ADADB5B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_C84C0B9A43F3920BD6964BA71A3C72C6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_4A72D7B94A0EAEEBCB60818EE5852903();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_D4B6AFCB499249D4AD4936AAC1FAE332();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_5D23144E47C2A74B37AC42B2C1C6AA4A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_1C6E20824D963F8789D29E9386A7A06C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_DBBD12464D37DAC35DD9A7ACD911F195();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_A6D15A574A64541C9616D1931E318E42();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_7DA35CDC4A84CE35F9B48F98C0F415D4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_0D621D9947DF051BE005C09A5C148399();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_4422D31147C54F63EB8D6D9DA0224FEF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_E78610CF43172EC7110344990F249633();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_9686A07A445A4768E1DEB4A76252ED0E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_745F64A24707CC78A80129830FC9C908();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_37DC9F984B096A3881CA7AA510184954();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_2A6E8A384CD69A1256EE9C8DB6AA36B6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_BC3EC135459AAF9A40312C9FF89D6088();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_A4217FE14CEA6645C1EFDBB7ACFEAB20();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_1ABA2B92418F70545D47E682010B0FA7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_ECA5998E45337E43924FF39044B8EF18();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_7DA99E6645000BC7B979B7816C01FA7C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_3B3AEB6B4A291D48D61B6B9EEAB8EAEA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_D2A7786E4511D331023228A48638243E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_2633D1DB44B834B1FDCC2C8F6F9D4E9B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_4B2E088C49AD8DB8BFD322B46EAD2E81();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_3109A8ED43A0995EA43B38819E882EBC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_7E83CCDB475A23A5447E7D9ED4D788EC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_E1200B7249FD120639E0518536B25B83();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_AD7939C3424DAB52FD2EF2BEBA22B51A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_36718BB043CE0BB132C6D8A7DBDBE1DC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_C97D553E4B74871BF3A07683E53226AC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_LayeredBoneBlend_CEC2FDCB4B44FF82931FF89B2656C74D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_BlendListByBool_82F6843C4986FCE216E323BAC93E916B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_LayeredBoneBlend_831280114FD900D93563C8B7BB1182F3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_LayeredBoneBlend_CED85A4F4FDEE25AC39E5AB91067F026();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_5080960544838E6B79C7BA942F3CF59F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_548905BB4A808D75C48ACA8E84F28F80();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_2A5884554637FAECD998C5A24D690C00();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_68DCC446412C9FD22151839D1FDDAFC3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_1E0F61E04D48C27AC81AE98B2DFE9DB1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_FCACB124473CBCE96A37C68757AB7D25();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_E965C4E248B243B100B488A53B7DE749();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_25BBBD5249EC09E80A7100902017BDB9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_B0633D9D4DDA142EB2BD7BAE9EA28786();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_A6D7B76C434610827B4A209AFD9ED59C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_32EB64D8441BF6601FC1F189AD0018FA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_AE30A6F54FD8BA1EF507838527CDE78C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_2FAE82BD424CBA65FBD1DF82C8D9DB06();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_6FA7B4204B70546FB2C05DB3D91E2237();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_475964694D37075E8199D0B014E8D412();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_B5CCE92A4B9F2AFE7CDA989CF78EFA81();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_365BA2EF4226B5D0CAB18BBB805B8DC4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_9666A2AC43016A2B824E85B5B09FE636();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_6A7266974B934B77631F67B82373771B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_6359FC5349E80AF4656D5B891A838D2C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_C20442F249237B508149EAB66C311D6F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_AB72CEE141737047EF192B8D0CE7CC9A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_A98FA335445EC17D1666D3B169BE6CA5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_12F6F6624D84415A639EF7B3555183A0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_F31EE08E49AEDE66877B8D880321BD85();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_94F395DF4B753923EA95AC928FDC3B01();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_6BC2EDEC4118BEC65E82FDB43BB9FCFF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_562EADC6427E9902BF40F8A10467D53A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_11319D704B277D327B03369AEA22E63C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_78B17B75421697C976E201B1E6DCD3DF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_F6B08EDF430BC7122D8455A25B73543B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_B09B058841C43A4BE1E34E92401E1193();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_D17A0E3444BEF354BBE2BD86985FB64C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_460063C644B4D52BE270758AED7191BA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_7EC09A6245E4D29CB336F9896BA5CC26();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_AE9FCFF74C64B56CF21473A1137B418D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Toddler_AnimBP_AnimGraphNode_TransitionResult_CD31E95F4062C817200A8B890121B3F1();
	void BlueprintInitializeAnimation();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void AnimNotify_AnimObjectNotify(TEnumAsByte<E_NotifyObject_E_NotifyObject> ObjectToNotify, const struct FName& NotifyName);
	void Set_IdlePoseByID_BPI(TEnumAsByte<E_IdleStates_E_IdleStates> Idle_State, unsigned char PoseID, TEnumAsByte<E_AfterIdlePose_E_AfterIdlePose> DoAfterPose);
	void Set_IdleState_BPI(bool IsInIdleState, TEnumAsByte<E_IdleStates_E_IdleStates> IdleState);
	void ForceStanding();
	void Set_Sitting_BPI(bool Sitting, TEnumAsByte<E_SitDownPosition_E_SitDownPosition> SitDownPosition);
	void Set_Sleeping_BPI(bool Sleeping, TEnumAsByte<E_SleepingDirection_E_SleepingDirection> SleepingDirection, bool UseBedSleepingPose);
	void SetMontageType(TEnumAsByte<E_AnimInteractionTypes_E_AnimInteractionTypes> Montage_Type);
	void Set_Range_Strength(float Strength);
	void OverrideCanPerfromHitAction(bool CanPerfromHitAction);
	void HoldableHitAction(const struct FST_MontagesSettings& Action_Montage_Settings);
	void OnEndStageInteraction(class AActor* InteractedActor, class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, const struct FName& StartingSection);
	void OnLoopStageInteraction(class AActor* InteractedActor, class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, const struct FName& StartingSection);
	void OnStartStageInteraction(class AActor* InteractedActor, class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, const struct FName& StartingSection);
	void Loop_Montage();
	void ChangeAnimLoopState(bool IsLooping);
	void CancelAnimationLoops();
	void HoldableAction(TMap<TEnumAsByte<E_AnimInteractionTypes_E_AnimInteractionTypes>, struct FST_MontagesSettings> MontagesSettings, bool UseLookingDown, float LookingDownAngle, bool Loop, bool Attack, bool OverrideMontage, bool IgnorePlayingMontage);
	void Set_RF_BPI(bool RF);
	void Set_CrouchingSpeed_BPI(float CrouchingSpeed);
	void Set_SprintingSpeed_BPI(float SprintingSpeed);
	void Set_RunningSpeed_BPI(float RunningSpeed);
	void Set_WalkingSpeed_BPI(float WalkingSpeed);
	void AnimNotify_TurningInPlace_BPI(class UAnimMontage* TurnInPlaceMontage, bool ShouldTurnInPlace, bool TurningInPlace, bool TurningRight);
	void AnimNotify_IdleEntryState_BPI(TEnumAsByte<E_IdleEntryState_E_IdleEntryState> IdleEntryState);
	void AnimNotify_Pivot_BPI(const struct FST_PivotParams& PivotParams);
	void Set_ALS_MovementMode_BPI(TEnumAsByte<E_MovementMode_E_MovementMode> ALS_MovementMode);
	void Set_ALS_Gait_BPI(TEnumAsByte<E_Gait_E_Gait> ALS_Gait);
	void Set_ALS_Stance_BPI(TEnumAsByte<E_Stance_E_Stance> ALS_Stance);
	void Set_ALS_RotationMode_BPI(TEnumAsByte<E_RotationMode_E_RotationMode> ALS_RotationMode_BPI);
	void Set_ALS_Aiming_BPI(bool Aiming);
	void Play_GetUp_Anim_BPI(bool FaceDown);
	void SavePoseSnapshot_BPI(const struct FName& PoseName);
	void Set_ALS_ViewMode_BPI(TEnumAsByte<E_ViewMode_E_ViewMode> ViewMode);
	void ShowTraces_BPI(bool ShowTraces);
	void AnimNotify_GetRandomOtherPose();
	void AnimNotify_GetRandomStandingPose();
	void AnimNotify_IdleTransitionBool();
	void AnimNotify_EnteredSleeping();
	void AnimNotify_EnteredSitting();
	void AnimNotify_StartWakeUp();
	void AnimNotify_EndGoToSleep();
	void AnimNotify_EndSleep();
	void AnimNotify_StartSleep();
	void AnimNotify_EndGetUp();
	void AnimNotify_StartGetUp();
	void AnimNotify_EndSitting();
	void AnimNotify_StartSitting();
	void AnimNotify_InteractWithActor();
	void PlayPickUpAnim(class UObject* Instigator, bool PreferTwoHanded);
	void AnimNotify_PickUpItem();
	void AnimNotify_StopAiming();
	void AnimNotify_StartAiming();
	void AnimNotify_PerformInteraction();
	void AnimNotify_DisableHitAction();
	void AnimNotify_HoldableTickStop();
	void AnimNotify_HoldableTickStart();
	void AnimNotify_EndingStageFinished();
	void AnimNotify_LoopStageFinished();
	void AnimNotify_BeginningStageFinished();
	void AnimNotify_StopSnappingIK();
	void AnimNotify_StartSnappingIK();
	void AnimNotify_ResetSnapping();
	void AnimNotify_StartSnapping();
	void AnimNotify_SnapPoint(class USceneComponent* SnapComponent, float TargetSnapAlpha, float ResetSnapAlpha, bool Reset, const struct FName& LeftHandSocketName, const struct FName& RightHandSocketName);
	void AnimNotify_RF_to_LF();
	void AnimNotify_LF_to_RF();
	void AnimNotify_CRF_to_CLF();
	void AnimNotify_CLF_to_CRF();
	void AnimNotify_RF_to_CRF();
	void AnimNotify_CRF_to_RF();
	void AnimNotify_CRF_to_N();
	void AnimNotify_N_to_CRF();
	void AnimNotify_CLF_to_LF();
	void AnimNotify_LF_to_CLF();
	void AnimNotify_CLF_to_N();
	void AnimNotify_N_to_CLF();
	void AnimNotify_RF_to_N();
	void AnimNotify_N_to_RF();
	void AnimNotify_LF_to_N();
	void AnimNotify_N_to_LF();
	void IdleTransition(class UAnimMontage* Animation, float InPlayRate, float InTimeToStartMontageAt);
	void AnimNotify_Left_Stopping();
	void AnimNotify_Entered_Stopping();
	void AnimNotify_Land();
	void AnimNotify_Left_Pivot();
	void AnimNotify_Entered_Pivot();
	void AnimNotify_Entered_NotMoving();
	void AnimNotify_Left_Moving();
	void AnimNotify_Entered_Moving();
	void AnimNotify_Left_NotMoving();
	void Reset_Player_Controller_State();
	void Change_Player_Controller_State(const struct FST_MontagesSettings& MontageSettings);
	void PlayMontage_Networked_(class UAnimMontage* MontageToPlay, float InPlayRate, float InTimeToStartMontageAt, bool bStopAllMontages);
	void ExecuteUbergraph_Toddler_AnimBP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
