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

// AnimBlueprintGeneratedClass Female_Mature_AnimBP.Female_Mature_AnimBP_C
// 0x27D75 (FullSize[0x2802D] - InheritedSize[0x02B8])
class UFemale_Mature_AnimBP_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_TBR9[0x8];                                     // 0x02B8(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_98;                            // 0x02C8(0x0028)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_42;                 // 0x02F0(0x0190)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_89;                          // 0x0480(0x00A0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_97;                            // 0x0520(0x0028)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_41;                 // 0x0548(0x0190)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_27;                           // 0x06D8(0x0158)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_3;                     // 0x0830(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_96;                            // 0x0850(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_100;                        // 0x0878(0x00C0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_95;                            // 0x0938(0x0028)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_40;                 // 0x0960(0x0190)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_26;                           // 0x0AF0(0x0158)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_39;                 // 0x0C48(0x0190)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_99;                         // 0x0DD8(0x00C0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_94;                            // 0x0E98(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_88;                          // 0x0EC0(0x00A0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_25;                           // 0x0F60(0x0158)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_93;                            // 0x10B8(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_98;                         // 0x10E0(0x00C0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_24;                           // 0x11A0(0x0158)
	unsigned char                                      UnknownData_TXML[0x8];                                     // 0x12F8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAnimNode_DragonSpineSolver                 AnimGraphNode_DragonSpineSolver;                           // 0x1300(0x0860)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_2;                     // 0x1B60(0x0020)
	struct FAnimNode_DragonFeetSolver                  AnimGraphNode_DragonFeetSolver;                            // 0x1B80(0x0710)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_3;                     // 0x2290(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_92;                            // 0x22B0(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_91;                            // 0x22D8(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_90;                            // 0x2300(0x0028)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_2;                     // 0x2328(0x0020)
	struct FAnimNode_PoseBlendNode                     AnimGraphNode_PoseBlendNode;                               // 0x2348(0x00A0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_97;                         // 0x23E8(0x00C0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_96;                         // 0x24A8(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_274;                          // 0x2568(0x0080)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_38;                 // 0x25E8(0x0190)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_37;                 // 0x2778(0x0190)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_89;                            // 0x2908(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_88;                            // 0x2930(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_87;                          // 0x2958(0x00A0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_95;                         // 0x29F8(0x00C0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_87;                            // 0x2AB8(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_86;                            // 0x2AE0(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_94;                         // 0x2B08(0x00C0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_86;                          // 0x2BC8(0x00A0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_85;                            // 0x2C68(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_23;                           // 0x2C90(0x0158)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_93;                         // 0x2DE8(0x00C0)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_36;                 // 0x2EA8(0x0190)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_35;                 // 0x3038(0x0190)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_84;                            // 0x31C8(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_92;                         // 0x31F0(0x00C0)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_34;                 // 0x32B0(0x0190)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_33;                 // 0x3440(0x0190)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_83;                            // 0x35D0(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_91;                         // 0x35F8(0x00C0)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_32;                 // 0x36B8(0x0190)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_82;                            // 0x3848(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_81;                            // 0x3870(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_80;                            // 0x3898(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_79;                            // 0x38C0(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_78;                            // 0x38E8(0x0028)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_31;                 // 0x3910(0x0190)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_90;                         // 0x3AA0(0x00C0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_22;                           // 0x3B60(0x0158)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_77;                            // 0x3CB8(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_76;                            // 0x3CE0(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_75;                            // 0x3D08(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_74;                            // 0x3D30(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_89;                         // 0x3D58(0x00C0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_85;                          // 0x3E18(0x00A0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_73;                            // 0x3EB8(0x0028)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_30;                 // 0x3EE0(0x0190)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_72;                            // 0x4070(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_88;                         // 0x4098(0x00C0)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_29;                 // 0x4158(0x0190)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_71;                            // 0x42E8(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_70;                            // 0x4310(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_21;                           // 0x4338(0x0158)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_20;                           // 0x4490(0x0158)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_19;                           // 0x45E8(0x0158)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_69;                            // 0x4740(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_68;                            // 0x4768(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_67;                            // 0x4790(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_87;                         // 0x47B8(0x00C0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_84;                          // 0x4878(0x00A0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_86;                         // 0x4918(0x00C0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_66;                            // 0x49D8(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_85;                         // 0x4A00(0x00C0)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_28;                 // 0x4AC0(0x0190)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_65;                            // 0x4C50(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_64;                            // 0x4C78(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_18;                           // 0x4CA0(0x0158)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_63;                            // 0x4DF8(0x0028)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_27;                 // 0x4E20(0x0190)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_83;                          // 0x4FB0(0x00A0)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_26;                 // 0x5050(0x0190)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_62;                            // 0x51E0(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_82;                          // 0x5208(0x00A0)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_25;                 // 0x52A8(0x0190)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_61;                            // 0x5438(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_81;                          // 0x5460(0x00A0)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_24;                 // 0x5500(0x0190)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_60;                            // 0x5690(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_80;                          // 0x56B8(0x00A0)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_23;                 // 0x5758(0x0190)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_84;                         // 0x58E8(0x00C0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_59;                            // 0x59A8(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_58;                            // 0x59D0(0x0028)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_22;                 // 0x59F8(0x0190)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_83;                         // 0x5B88(0x00C0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_82;                         // 0x5C48(0x00C0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_79;                          // 0x5D08(0x00A0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_17;                           // 0x5DA8(0x0158)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_57;                            // 0x5F00(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_81;                         // 0x5F28(0x00C0)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_21;                 // 0x5FE8(0x0190)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_56;                            // 0x6178(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_55;                            // 0x61A0(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_16;                           // 0x61C8(0x0158)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_20;                 // 0x6320(0x0190)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_54;                            // 0x64B0(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_78;                          // 0x64D8(0x00A0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_53;                            // 0x6578(0x0028)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_19;                 // 0x65A0(0x0190)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_80;                         // 0x6730(0x00C0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_77;                          // 0x67F0(0x00A0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_244;                        // 0x6890(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_243;                        // 0x68B8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_242;                        // 0x68E0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_241;                        // 0x6908(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_240;                        // 0x6930(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_239;                        // 0x6958(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_238;                        // 0x6980(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_237;                        // 0x69A8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_236;                        // 0x69D0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_235;                        // 0x69F8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_234;                        // 0x6A20(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_233;                        // 0x6A48(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_232;                        // 0x6A70(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_231;                        // 0x6A98(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_230;                        // 0x6AC0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_229;                        // 0x6AE8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_228;                        // 0x6B10(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_227;                        // 0x6B38(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_226;                        // 0x6B60(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_225;                        // 0x6B88(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_224;                        // 0x6BB0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_223;                        // 0x6BD8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_222;                        // 0x6C00(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_221;                        // 0x6C28(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_273;                          // 0x6C50(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_135;                             // 0x6CD0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_272;                          // 0x6D00(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_134;                             // 0x6D80(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_271;                          // 0x6DB0(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_133;                             // 0x6E30(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_270;                          // 0x6E60(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_132;                             // 0x6EE0(0x0030)
	struct FAnimNode_PoseSnapshot                      AnimGraphNode_PoseSnapshot_5;                              // 0x6F10(0x0090)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_131;                             // 0x6FA0(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_21;                             // 0x6FD0(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_130;                             // 0x7080(0x0030)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_220;                        // 0x70B0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_219;                        // 0x70D8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_218;                        // 0x7100(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_217;                        // 0x7128(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_216;                        // 0x7150(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_215;                        // 0x7178(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_214;                        // 0x71A0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_213;                        // 0x71C8(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_269;                          // 0x71F0(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_129;                             // 0x7270(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_268;                          // 0x72A0(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_128;                             // 0x7320(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_267;                          // 0x7350(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_127;                             // 0x73D0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_266;                          // 0x7400(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_126;                             // 0x7480(0x0030)
	struct FAnimNode_PoseSnapshot                      AnimGraphNode_PoseSnapshot_4;                              // 0x74B0(0x0090)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_125;                             // 0x7540(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_20;                             // 0x7570(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_124;                             // 0x7620(0x0030)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_123;                             // 0x7650(0x0030)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_212;                        // 0x7680(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_211;                        // 0x76A8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_210;                        // 0x76D0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_209;                        // 0x76F8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_208;                        // 0x7720(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_207;                        // 0x7748(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_206;                        // 0x7770(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_205;                        // 0x7798(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_204;                        // 0x77C0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_203;                        // 0x77E8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_202;                        // 0x7810(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_201;                        // 0x7838(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_200;                        // 0x7860(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_199;                        // 0x7888(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_198;                        // 0x78B0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_197;                        // 0x78D8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_196;                        // 0x7900(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_195;                        // 0x7928(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_194;                        // 0x7950(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_193;                        // 0x7978(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_192;                        // 0x79A0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_191;                        // 0x79C8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_190;                        // 0x79F0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_189;                        // 0x7A18(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_188;                        // 0x7A40(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_187;                        // 0x7A68(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_186;                        // 0x7A90(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_185;                        // 0x7AB8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_184;                        // 0x7AE0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_183;                        // 0x7B08(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_182;                        // 0x7B30(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_181;                        // 0x7B58(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_180;                        // 0x7B80(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_179;                        // 0x7BA8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_178;                        // 0x7BD0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_177;                        // 0x7BF8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_176;                        // 0x7C20(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_175;                        // 0x7C48(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_174;                        // 0x7C70(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_173;                        // 0x7C98(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_172;                        // 0x7CC0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_171;                        // 0x7CE8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_170;                        // 0x7D10(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_169;                        // 0x7D38(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_265;                          // 0x7D60(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_122;                             // 0x7DE0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_264;                          // 0x7E10(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_121;                             // 0x7E90(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_263;                          // 0x7EC0(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_120;                             // 0x7F40(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_262;                          // 0x7F70(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_119;                             // 0x7FF0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_261;                          // 0x8020(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_118;                             // 0x80A0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_260;                          // 0x80D0(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_117;                             // 0x8150(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_259;                          // 0x8180(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_116;                             // 0x8200(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_258;                          // 0x8230(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_115;                             // 0x82B0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_257;                          // 0x82E0(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_114;                             // 0x8360(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_256;                          // 0x8390(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_113;                             // 0x8410(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_255;                          // 0x8440(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_112;                             // 0x84C0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_254;                          // 0x84F0(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_111;                             // 0x8570(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_253;                          // 0x85A0(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_110;                             // 0x8620(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_252;                          // 0x8650(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_109;                             // 0x86D0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_251;                          // 0x8700(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_108;                             // 0x8780(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_250;                          // 0x87B0(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_107;                             // 0x8830(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_249;                          // 0x8860(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_106;                             // 0x88E0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_248;                          // 0x8910(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_105;                             // 0x8990(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_247;                          // 0x89C0(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_104;                             // 0x8A40(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_246;                          // 0x8A70(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_103;                             // 0x8AF0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_245;                          // 0x8B20(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_102;                             // 0x8BA0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_244;                          // 0x8BD0(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_101;                             // 0x8C50(0x0030)
	struct FAnimNode_PoseSnapshot                      AnimGraphNode_PoseSnapshot_3;                              // 0x8C80(0x0090)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_100;                             // 0x8D10(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_19;                             // 0x8D40(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_99;                              // 0x8DF0(0x0030)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_168;                        // 0x8E20(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_167;                        // 0x8E48(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_166;                        // 0x8E70(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_165;                        // 0x8E98(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_164;                        // 0x8EC0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_163;                        // 0x8EE8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_162;                        // 0x8F10(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_161;                        // 0x8F38(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_160;                        // 0x8F60(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_159;                        // 0x8F88(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_158;                        // 0x8FB0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_157;                        // 0x8FD8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_156;                        // 0x9000(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_155;                        // 0x9028(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_154;                        // 0x9050(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_153;                        // 0x9078(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_152;                        // 0x90A0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_151;                        // 0x90C8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_150;                        // 0x90F0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_149;                        // 0x9118(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_148;                        // 0x9140(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_147;                        // 0x9168(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_243;                          // 0x9190(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_98;                              // 0x9210(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_242;                          // 0x9240(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_97;                              // 0x92C0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_241;                          // 0x92F0(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_96;                              // 0x9370(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_240;                          // 0x93A0(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_95;                              // 0x9420(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_239;                          // 0x9450(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_94;                              // 0x94D0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_238;                          // 0x9500(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_93;                              // 0x9580(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_237;                          // 0x95B0(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_92;                              // 0x9630(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_236;                          // 0x9660(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_91;                              // 0x96E0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_235;                          // 0x9710(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_90;                              // 0x9790(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_234;                          // 0x97C0(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_89;                              // 0x9840(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_233;                          // 0x9870(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_88;                              // 0x98F0(0x0030)
	struct FAnimNode_PoseSnapshot                      AnimGraphNode_PoseSnapshot_2;                              // 0x9920(0x0090)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_87;                              // 0x99B0(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_18;                             // 0x99E0(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_86;                              // 0x9A90(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_17;                             // 0x9AC0(0x00B0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_52;                            // 0x9B70(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_79;                         // 0x9B98(0x00C0)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_18;                 // 0x9C58(0x0190)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_51;                            // 0x9DE8(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_50;                            // 0x9E10(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_15;                           // 0x9E38(0x0158)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_17;                 // 0x9F90(0x0190)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_49;                            // 0xA120(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_76;                          // 0xA148(0x00A0)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_16;                 // 0xA1E8(0x0190)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_48;                            // 0xA378(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_14;                           // 0xA3A0(0x0158)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_15;                 // 0xA4F8(0x0190)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_78;                         // 0xA688(0x00C0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_13;                           // 0xA748(0x0158)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_146;                        // 0xA8A0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_145;                        // 0xA8C8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_144;                        // 0xA8F0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_143;                        // 0xA918(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_142;                        // 0xA940(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_141;                        // 0xA968(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_232;                          // 0xA990(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_85;                              // 0xAA10(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_231;                          // 0xAA40(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_84;                              // 0xAAC0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_230;                          // 0xAAF0(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_83;                              // 0xAB70(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_229;                          // 0xABA0(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_82;                              // 0xAC20(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_228;                          // 0xAC50(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_81;                              // 0xACD0(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_16;                             // 0xAD00(0x00B0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_47;                            // 0xADB0(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_46;                            // 0xADD8(0x0028)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_14;                 // 0xAE00(0x0190)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_12;                           // 0xAF90(0x0158)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_13;                 // 0xB0E8(0x0190)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_45;                            // 0xB278(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_11;                           // 0xB2A0(0x0158)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_44;                            // 0xB3F8(0x0028)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_12;                 // 0xB420(0x0190)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_11;                 // 0xB5B0(0x0190)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_10;                 // 0xB740(0x0190)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_9;                  // 0xB8D0(0x0190)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_77;                         // 0xBA60(0x00C0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_75;                          // 0xBB20(0x00A0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_140;                        // 0xBBC0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_139;                        // 0xBBE8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_138;                        // 0xBC10(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_137;                        // 0xBC38(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_136;                        // 0xBC60(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_135;                        // 0xBC88(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_134;                        // 0xBCB0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_133;                        // 0xBCD8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_132;                        // 0xBD00(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_131;                        // 0xBD28(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_130;                        // 0xBD50(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_129;                        // 0xBD78(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_128;                        // 0xBDA0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_127;                        // 0xBDC8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_126;                        // 0xBDF0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_125;                        // 0xBE18(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_124;                        // 0xBE40(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_123;                        // 0xBE68(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_122;                        // 0xBE90(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_121;                        // 0xBEB8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_120;                        // 0xBEE0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_119;                        // 0xBF08(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_227;                          // 0xBF30(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_80;                              // 0xBFB0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_226;                          // 0xBFE0(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_79;                              // 0xC060(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_225;                          // 0xC090(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_78;                              // 0xC110(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_224;                          // 0xC140(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_77;                              // 0xC1C0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_223;                          // 0xC1F0(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_76;                              // 0xC270(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_222;                          // 0xC2A0(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_75;                              // 0xC320(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_221;                          // 0xC350(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_74;                              // 0xC3D0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_220;                          // 0xC400(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_73;                              // 0xC480(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_219;                          // 0xC4B0(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_72;                              // 0xC530(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_218;                          // 0xC560(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_71;                              // 0xC5E0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_217;                          // 0xC610(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_70;                              // 0xC690(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_216;                          // 0xC6C0(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_69;                              // 0xC740(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_215;                          // 0xC770(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_68;                              // 0xC7F0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_214;                          // 0xC820(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_67;                              // 0xC8A0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_213;                          // 0xC8D0(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_66;                              // 0xC950(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_212;                          // 0xC980(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_65;                              // 0xCA00(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_211;                          // 0xCA30(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_64;                              // 0xCAB0(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_15;                             // 0xCAE0(0x00B0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_43;                            // 0xCB90(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_10;                           // 0xCBB8(0x0158)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_74;                          // 0xCD10(0x00A0)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_8;                  // 0xCDB0(0x0190)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_42;                            // 0xCF40(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_76;                         // 0xCF68(0x00C0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_73;                          // 0xD028(0x00A0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_41;                            // 0xD0C8(0x0028)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_7;                  // 0xD0F0(0x0190)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_40;                            // 0xD280(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_9;                            // 0xD2A8(0x0158)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_39;                            // 0xD400(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_75;                         // 0xD428(0x00C0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_38;                            // 0xD4E8(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_37;                            // 0xD510(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_8;                            // 0xD538(0x0158)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_36;                            // 0xD690(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_72;                          // 0xD6B8(0x00A0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_35;                            // 0xD758(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_34;                            // 0xD780(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_74;                         // 0xD7A8(0x00C0)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_6;                  // 0xD868(0x0190)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_5;                  // 0xD9F8(0x0190)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_73;                         // 0xDB88(0x00C0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_33;                            // 0xDC48(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_32;                            // 0xDC70(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_31;                            // 0xDC98(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_7;                            // 0xDCC0(0x0158)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_30;                            // 0xDE18(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_72;                         // 0xDE40(0x00C0)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_4;                  // 0xDF00(0x0190)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_29;                            // 0xE090(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_6;                            // 0xE0B8(0x0158)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_28;                            // 0xE210(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_27;                            // 0xE238(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_26;                            // 0xE260(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_25;                            // 0xE288(0x0028)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_100;                        // 0xE2B0(0x00E8)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_14;                            // 0xE398(0x00C8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_24;                            // 0xE460(0x0028)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_13;                            // 0xE488(0x00C8)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_71;                         // 0xE550(0x00C0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_71;                          // 0xE610(0x00A0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_23;                            // 0xE6B0(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_22;                            // 0xE6D8(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_70;                          // 0xE700(0x00A0)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_3;                  // 0xE7A0(0x0190)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_99;                         // 0xE930(0x00E8)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_12;                            // 0xEA18(0x00C8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_21;                            // 0xEAE0(0x0028)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_11;                            // 0xEB08(0x00C8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_98;                         // 0xEBD0(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_97;                         // 0xECB8(0x00E8)
	struct FAnimNode_CCDIK                             AnimGraphNode_CCDIK_2;                                     // 0xEDA0(0x0180)
	struct FAnimNode_CCDIK                             AnimGraphNode_CCDIK;                                       // 0xEF20(0x0180)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_20;                            // 0xF0A0(0x0028)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                       // 0xF0C8(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                       // 0xF0E8(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_19;                            // 0xF108(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_18;                            // 0xF130(0x0028)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_61;                          // 0xF158(0x00B0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_5;                            // 0xF208(0x0158)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_7;                                      // 0xF360(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_118;                        // 0xF3A8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_117;                        // 0xF3D0(0x0028)
	struct FAnimNode_PoseSnapshot                      AnimGraphNode_PoseSnapshot;                                // 0xF3F8(0x0090)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_63;                              // 0xF488(0x0030)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_60;                          // 0xF4B8(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_210;                          // 0xF568(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_209;                          // 0xF5E8(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_62;                              // 0xF668(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_14;                             // 0xF698(0x00B0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_59;                          // 0xF748(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_6;                                      // 0xF7F8(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_17;                            // 0xF840(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_4;                            // 0xF868(0x0158)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_116;                        // 0xF9C0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_115;                        // 0xF9E8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_114;                        // 0xFA10(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_113;                        // 0xFA38(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_112;                        // 0xFA60(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_111;                        // 0xFA88(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_110;                        // 0xFAB0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_109;                        // 0xFAD8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_108;                        // 0xFB00(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_107;                        // 0xFB28(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_106;                        // 0xFB50(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_105;                        // 0xFB78(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_104;                        // 0xFBA0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_103;                        // 0xFBC8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_102;                        // 0xFBF0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_101;                        // 0xFC18(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_100;                        // 0xFC40(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_70;                         // 0xFC68(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_208;                          // 0xFD28(0x0080)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_2;                               // 0xFDA8(0x00C8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_96;                         // 0xFE70(0x00E8)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_10;                            // 0xFF58(0x00C8)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator;                           // 0x10020(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_207;                          // 0x10070(0x0080)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend;                                 // 0x100F0(0x00C8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_206;                          // 0x101B8(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_61;                              // 0x10238(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_205;                          // 0x10268(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_204;                          // 0x102E8(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_69;                          // 0x10368(0x00A0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_69;                         // 0x10408(0x00C0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_68;                         // 0x104C8(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_203;                          // 0x10588(0x0080)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_95;                         // 0x10608(0x00E8)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_9;                             // 0x106F0(0x00C8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_202;                          // 0x107B8(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_60;                              // 0x10838(0x0030)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_99;                         // 0x10868(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_98;                         // 0x10890(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_97;                         // 0x108B8(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_67;                         // 0x108E0(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_201;                          // 0x109A0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_200;                          // 0x10A20(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_59;                              // 0x10AA0(0x0030)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_96;                         // 0x10AD0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_95;                         // 0x10AF8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_94;                         // 0x10B20(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_93;                         // 0x10B48(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_92;                         // 0x10B70(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_199;                          // 0x10B98(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_58;                              // 0x10C18(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_198;                          // 0x10C48(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_57;                              // 0x10CC8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_197;                          // 0x10CF8(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_56;                              // 0x10D78(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_196;                          // 0x10DA8(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_195;                          // 0x10E28(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_194;                          // 0x10EA8(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_193;                          // 0x10F28(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_192;                          // 0x10FA8(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_58;                          // 0x11028(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_55;                              // 0x110D8(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_13;                             // 0x11108(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_68;                          // 0x111B8(0x00A0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_91;                         // 0x11258(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_90;                         // 0x11280(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_89;                         // 0x112A8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_88;                         // 0x112D0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_87;                         // 0x112F8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_86;                         // 0x11320(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_85;                         // 0x11348(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_84;                         // 0x11370(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_83;                         // 0x11398(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_191;                          // 0x113C0(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_54;                              // 0x11440(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_190;                          // 0x11470(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_53;                              // 0x114F0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_189;                          // 0x11520(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_188;                          // 0x115A0(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_67;                          // 0x11620(0x00A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_66;                          // 0x116C0(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_187;                          // 0x11760(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_52;                              // 0x117E0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_186;                          // 0x11810(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_185;                          // 0x11890(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_65;                          // 0x11910(0x00A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_64;                          // 0x119B0(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_184;                          // 0x11A50(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_51;                              // 0x11AD0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_183;                          // 0x11B00(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_182;                          // 0x11B80(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_63;                          // 0x11C00(0x00A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_62;                          // 0x11CA0(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_181;                          // 0x11D40(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_50;                              // 0x11DC0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_180;                          // 0x11DF0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_179;                          // 0x11E70(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_178;                          // 0x11EF0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_177;                          // 0x11F70(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_176;                          // 0x11FF0(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_57;                          // 0x12070(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_49;                              // 0x12120(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_12;                             // 0x12150(0x00B0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_82;                         // 0x12200(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_81;                         // 0x12228(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_80;                         // 0x12250(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_79;                         // 0x12278(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_78;                         // 0x122A0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_77;                         // 0x122C8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_76;                         // 0x122F0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_75;                         // 0x12318(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_74;                         // 0x12340(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_175;                          // 0x12368(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_48;                              // 0x123E8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_174;                          // 0x12418(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_47;                              // 0x12498(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_173;                          // 0x124C8(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_172;                          // 0x12548(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_61;                          // 0x125C8(0x00A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_60;                          // 0x12668(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_171;                          // 0x12708(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_46;                              // 0x12788(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_170;                          // 0x127B8(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_169;                          // 0x12838(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_59;                          // 0x128B8(0x00A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_58;                          // 0x12958(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_168;                          // 0x129F8(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_45;                              // 0x12A78(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_167;                          // 0x12AA8(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_166;                          // 0x12B28(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_57;                          // 0x12BA8(0x00A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_56;                          // 0x12C48(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_165;                          // 0x12CE8(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_44;                              // 0x12D68(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_164;                          // 0x12D98(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_163;                          // 0x12E18(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_162;                          // 0x12E98(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_161;                          // 0x12F18(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_160;                          // 0x12F98(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_56;                          // 0x13018(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_43;                              // 0x130C8(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_11;                             // 0x130F8(0x00B0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_55;                          // 0x131A8(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_42;                              // 0x13258(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_10;                             // 0x13288(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_55;                          // 0x13338(0x00A0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_66;                         // 0x133D8(0x00C0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_16;                            // 0x13498(0x0028)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_5;                                      // 0x134C0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_73;                         // 0x13508(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_72;                         // 0x13530(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_71;                         // 0x13558(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_70;                         // 0x13580(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_69;                         // 0x135A8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_68;                         // 0x135D0(0x0028)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_54;                          // 0x135F8(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_159;                          // 0x136A8(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_158;                          // 0x13728(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_157;                          // 0x137A8(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_156;                          // 0x13828(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_155;                          // 0x138A8(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_154;                          // 0x13928(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_153;                          // 0x139A8(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_41;                              // 0x13A28(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_152;                          // 0x13A58(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_40;                              // 0x13AD8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_151;                          // 0x13B08(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_150;                          // 0x13B88(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_149;                          // 0x13C08(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_148;                          // 0x13C88(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_147;                          // 0x13D08(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_53;                          // 0x13D88(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_146;                          // 0x13E38(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_54;                          // 0x13EB8(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_39;                              // 0x13F58(0x0030)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_15;                            // 0x13F88(0x0028)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_38;                              // 0x13FB0(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_9;                              // 0x13FE0(0x00B0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_67;                         // 0x14090(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_66;                         // 0x140B8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_65;                         // 0x140E0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_64;                         // 0x14108(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_63;                         // 0x14130(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_62;                         // 0x14158(0x0028)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_52;                          // 0x14180(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_145;                          // 0x14230(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_144;                          // 0x142B0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_143;                          // 0x14330(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_142;                          // 0x143B0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_141;                          // 0x14430(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_140;                          // 0x144B0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_139;                          // 0x14530(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_37;                              // 0x145B0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_138;                          // 0x145E0(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_36;                              // 0x14660(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_137;                          // 0x14690(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_136;                          // 0x14710(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_135;                          // 0x14790(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_134;                          // 0x14810(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_133;                          // 0x14890(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_51;                          // 0x14910(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_132;                          // 0x149C0(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_53;                          // 0x14A40(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_35;                              // 0x14AE0(0x0030)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_14;                            // 0x14B10(0x0028)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_34;                              // 0x14B38(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_8;                              // 0x14B68(0x00B0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_61;                         // 0x14C18(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_60;                         // 0x14C40(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_59;                         // 0x14C68(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_58;                         // 0x14C90(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_57;                         // 0x14CB8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_56;                         // 0x14CE0(0x0028)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_50;                          // 0x14D08(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_131;                          // 0x14DB8(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_130;                          // 0x14E38(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_129;                          // 0x14EB8(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_128;                          // 0x14F38(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_127;                          // 0x14FB8(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_126;                          // 0x15038(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_125;                          // 0x150B8(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_33;                              // 0x15138(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_124;                          // 0x15168(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_32;                              // 0x151E8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_123;                          // 0x15218(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_122;                          // 0x15298(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_121;                          // 0x15318(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_120;                          // 0x15398(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_119;                          // 0x15418(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_49;                          // 0x15498(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_118;                          // 0x15548(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_52;                          // 0x155C8(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_31;                              // 0x15668(0x0030)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_13;                            // 0x15698(0x0028)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_30;                              // 0x156C0(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_7;                              // 0x156F0(0x00B0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_48;                          // 0x157A0(0x00B0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_55;                         // 0x15850(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_54;                         // 0x15878(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_53;                         // 0x158A0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_52;                         // 0x158C8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_51;                         // 0x158F0(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_117;                          // 0x15918(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_116;                          // 0x15998(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_115;                          // 0x15A18(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_114;                          // 0x15A98(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_113;                          // 0x15B18(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_47;                          // 0x15B98(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_29;                              // 0x15C48(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_112;                          // 0x15C78(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_28;                              // 0x15CF8(0x0030)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_12;                            // 0x15D28(0x0028)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_27;                              // 0x15D50(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_111;                          // 0x15D80(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_26;                              // 0x15E00(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_6;                              // 0x15E30(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_25;                              // 0x15EE0(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_5;                              // 0x15F10(0x00B0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_46;                          // 0x15FC0(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_51;                          // 0x16070(0x00A0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_65;                         // 0x16110(0x00C0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_8;                             // 0x161D0(0x00C8)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_4;                                      // 0x16298(0x0048)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_64;                         // 0x162E0(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_110;                          // 0x163A0(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_50;                          // 0x16420(0x00A0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_3;                                      // 0x164C0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_109;                          // 0x16508(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_45;                          // 0x16588(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_108;                          // 0x16638(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_50;                         // 0x166B8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_49;                         // 0x166E0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_48;                         // 0x16708(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_47;                         // 0x16730(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_46;                         // 0x16758(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_45;                         // 0x16780(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_44;                         // 0x167A8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_43;                         // 0x167D0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_42;                         // 0x167F8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_41;                         // 0x16820(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_40;                         // 0x16848(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_39;                         // 0x16870(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_38;                         // 0x16898(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_37;                         // 0x168C0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_36;                         // 0x168E8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_35;                         // 0x16910(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_34;                         // 0x16938(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_33;                         // 0x16960(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_32;                         // 0x16988(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_31;                         // 0x169B0(0x0028)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_94;                         // 0x169D8(0x00E8)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_24;                              // 0x16AC0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_107;                          // 0x16AF0(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_23;                              // 0x16B70(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_106;                          // 0x16BA0(0x0080)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_63;                         // 0x16C20(0x00C0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_93;                         // 0x16CE0(0x00E8)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_22;                              // 0x16DC8(0x0030)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_30;                         // 0x16DF8(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_105;                          // 0x16E20(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_104;                          // 0x16EA0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_103;                          // 0x16F20(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_102;                          // 0x16FA0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_101;                          // 0x17020(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_100;                          // 0x170A0(0x0080)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_62;                         // 0x17120(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_99;                           // 0x171E0(0x0080)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_61;                         // 0x17260(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_98;                           // 0x17320(0x0080)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_60;                         // 0x173A0(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_97;                           // 0x17460(0x0080)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_59;                         // 0x174E0(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_96;                           // 0x175A0(0x0080)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_58;                         // 0x17620(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_95;                           // 0x176E0(0x0080)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_57;                         // 0x17760(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_94;                           // 0x17820(0x0080)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_56;                         // 0x178A0(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_93;                           // 0x17960(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_49;                          // 0x179E0(0x00A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_48;                          // 0x17A80(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_92;                           // 0x17B20(0x0080)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_55;                         // 0x17BA0(0x00C0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_44;                          // 0x17C60(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_91;                           // 0x17D10(0x0080)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_54;                         // 0x17D90(0x00C0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_53;                         // 0x17E50(0x00C0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_52;                         // 0x17F10(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_90;                           // 0x17FD0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_89;                           // 0x18050(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_88;                           // 0x180D0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_87;                           // 0x18150(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_86;                           // 0x181D0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_85;                           // 0x18250(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_84;                           // 0x182D0(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_47;                          // 0x18350(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_83;                           // 0x183F0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_82;                           // 0x18470(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_21;                              // 0x184F0(0x0030)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_92;                         // 0x18520(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_91;                         // 0x18608(0x00E8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_81;                           // 0x186F0(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_46;                          // 0x18770(0x00A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_90;                         // 0x18810(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_89;                         // 0x188F8(0x00E8)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_51;                         // 0x189E0(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_80;                           // 0x18AA0(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_45;                          // 0x18B20(0x00A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_88;                         // 0x18BC0(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_87;                         // 0x18CA8(0x00E8)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_50;                         // 0x18D90(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_79;                           // 0x18E50(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_44;                          // 0x18ED0(0x00A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_86;                         // 0x18F70(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_85;                         // 0x19058(0x00E8)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_49;                         // 0x19140(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_78;                           // 0x19200(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_43;                          // 0x19280(0x00A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_84;                         // 0x19320(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_83;                         // 0x19408(0x00E8)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_48;                         // 0x194F0(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_77;                           // 0x195B0(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_42;                          // 0x19630(0x00A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_82;                         // 0x196D0(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_81;                         // 0x197B8(0x00E8)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_47;                         // 0x198A0(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_76;                           // 0x19960(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_41;                          // 0x199E0(0x00A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_80;                         // 0x19A80(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_79;                         // 0x19B68(0x00E8)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_46;                         // 0x19C50(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_75;                           // 0x19D10(0x0080)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_45;                         // 0x19D90(0x00C0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_40;                          // 0x19E50(0x00A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_78;                         // 0x19EF0(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_77;                         // 0x19FD8(0x00E8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_74;                           // 0x1A0C0(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_39;                          // 0x1A140(0x00A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_76;                         // 0x1A1E0(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_75;                         // 0x1A2C8(0x00E8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_38;                          // 0x1A3B0(0x00A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_37;                          // 0x1A450(0x00A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_74;                         // 0x1A4F0(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_73;                         // 0x1A5D8(0x00E8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_36;                          // 0x1A6C0(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_73;                           // 0x1A760(0x0080)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_44;                         // 0x1A7E0(0x00C0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_35;                          // 0x1A8A0(0x00A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_72;                         // 0x1A940(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_71;                         // 0x1AA28(0x00E8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_34;                          // 0x1AB10(0x00A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_70;                         // 0x1ABB0(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_69;                         // 0x1AC98(0x00E8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_33;                          // 0x1AD80(0x00A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_32;                          // 0x1AE20(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_72;                           // 0x1AEC0(0x0080)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_43;                         // 0x1AF40(0x00C0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_42;                         // 0x1B000(0x00C0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_68;                         // 0x1B0C0(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_67;                         // 0x1B1A8(0x00E8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_31;                          // 0x1B290(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_71;                           // 0x1B330(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_43;                          // 0x1B3B0(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_70;                           // 0x1B460(0x0080)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_41;                         // 0x1B4E0(0x00C0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_40;                         // 0x1B5A0(0x00C0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_39;                         // 0x1B660(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_69;                           // 0x1B720(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_30;                          // 0x1B7A0(0x00A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_66;                         // 0x1B840(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_65;                         // 0x1B928(0x00E8)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_20;                              // 0x1BA10(0x0030)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_29;                         // 0x1BA40(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_28;                         // 0x1BA68(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_27;                         // 0x1BA90(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_26;                         // 0x1BAB8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_25;                         // 0x1BAE0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_24;                         // 0x1BB08(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_23;                         // 0x1BB30(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_22;                         // 0x1BB58(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_68;                           // 0x1BB80(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_19;                              // 0x1BC00(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_67;                           // 0x1BC30(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_18;                              // 0x1BCB0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_66;                           // 0x1BCE0(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_17;                              // 0x1BD60(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_65;                           // 0x1BD90(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_16;                              // 0x1BE10(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_64;                           // 0x1BE40(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_15;                              // 0x1BEC0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_63;                           // 0x1BEF0(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_14;                              // 0x1BF70(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_62;                           // 0x1BFA0(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_13;                              // 0x1C020(0x0030)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_12;                              // 0x1C050(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_61;                           // 0x1C080(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_11;                              // 0x1C100(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_4;                              // 0x1C130(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_10;                              // 0x1C1E0(0x0030)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_42;                          // 0x1C210(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_29;                          // 0x1C2C0(0x00A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_64;                         // 0x1C360(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_63;                         // 0x1C448(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_62;                         // 0x1C530(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_61;                         // 0x1C618(0x00E8)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_41;                          // 0x1C700(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_60;                           // 0x1C7B0(0x0080)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_38;                         // 0x1C830(0x00C0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_37;                         // 0x1C8F0(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_59;                           // 0x1C9B0(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_28;                          // 0x1CA30(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_58;                           // 0x1CAD0(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_27;                          // 0x1CB50(0x00A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_60;                         // 0x1CBF0(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_59;                         // 0x1CCD8(0x00E8)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_40;                          // 0x1CDC0(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_26;                          // 0x1CE70(0x00A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_58;                         // 0x1CF10(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_57;                         // 0x1CFF8(0x00E8)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_39;                          // 0x1D0E0(0x00B0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_38;                          // 0x1D190(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_25;                          // 0x1D240(0x00A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_56;                         // 0x1D2E0(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_55;                         // 0x1D3C8(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_54;                         // 0x1D4B0(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_53;                         // 0x1D598(0x00E8)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_37;                          // 0x1D680(0x00B0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_36;                          // 0x1D730(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_24;                          // 0x1D7E0(0x00A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_52;                         // 0x1D880(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_51;                         // 0x1D968(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_50;                         // 0x1DA50(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_49;                         // 0x1DB38(0x00E8)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_35;                          // 0x1DC20(0x00B0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_34;                          // 0x1DCD0(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_23;                          // 0x1DD80(0x00A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_48;                         // 0x1DE20(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_47;                         // 0x1DF08(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_46;                         // 0x1DFF0(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_45;                         // 0x1E0D8(0x00E8)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_33;                          // 0x1E1C0(0x00B0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_32;                          // 0x1E270(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_22;                          // 0x1E320(0x00A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_44;                         // 0x1E3C0(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_43;                         // 0x1E4A8(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_42;                         // 0x1E590(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_41;                         // 0x1E678(0x00E8)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_31;                          // 0x1E760(0x00B0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_30;                          // 0x1E810(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_21;                          // 0x1E8C0(0x00A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_40;                         // 0x1E960(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_39;                         // 0x1EA48(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_38;                         // 0x1EB30(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_37;                         // 0x1EC18(0x00E8)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_29;                          // 0x1ED00(0x00B0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_28;                          // 0x1EDB0(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_20;                          // 0x1EE60(0x00A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_36;                         // 0x1EF00(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_35;                         // 0x1EFE8(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_34;                         // 0x1F0D0(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_33;                         // 0x1F1B8(0x00E8)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_27;                          // 0x1F2A0(0x00B0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_26;                          // 0x1F350(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_19;                          // 0x1F400(0x00A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_32;                         // 0x1F4A0(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_31;                         // 0x1F588(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_30;                         // 0x1F670(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_29;                         // 0x1F758(0x00E8)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_25;                          // 0x1F840(0x00B0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_24;                          // 0x1F8F0(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_18;                          // 0x1F9A0(0x00A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_28;                         // 0x1FA40(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_27;                         // 0x1FB28(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_26;                         // 0x1FC10(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_25;                         // 0x1FCF8(0x00E8)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_23;                          // 0x1FDE0(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_17;                          // 0x1FE90(0x00A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_24;                         // 0x1FF30(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_23;                         // 0x20018(0x00E8)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_22;                          // 0x20100(0x00B0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_21;                          // 0x201B0(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_16;                          // 0x20260(0x00A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_22;                         // 0x20300(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_21;                         // 0x203E8(0x00E8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_57;                           // 0x204D0(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_15;                          // 0x20550(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_56;                           // 0x205F0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_55;                           // 0x20670(0x0080)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_36;                         // 0x206F0(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_54;                           // 0x207B0(0x0080)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_35;                         // 0x20830(0x00C0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_34;                         // 0x208F0(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_53;                           // 0x209B0(0x0080)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_33;                         // 0x20A30(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_52;                           // 0x20AF0(0x0080)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_32;                         // 0x20B70(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_51;                           // 0x20C30(0x0080)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_31;                         // 0x20CB0(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_50;                           // 0x20D70(0x0080)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_30;                         // 0x20DF0(0x00C0)
	struct FAnimNode_ModifyCurve                       AnimGraphNode_ModifyCurve_2;                               // 0x20EB0(0x0058)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_29;                         // 0x20F08(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_49;                           // 0x20FC8(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_14;                          // 0x21048(0x00A0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_28;                         // 0x210E8(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_48;                           // 0x211A8(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_13;                          // 0x21228(0x00A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_20;                         // 0x212C8(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_19;                         // 0x213B0(0x00E8)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_20;                          // 0x21498(0x00B0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_27;                         // 0x21548(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_47;                           // 0x21608(0x0080)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_26;                         // 0x21688(0x00C0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_19;                          // 0x21748(0x00B0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_25;                         // 0x217F8(0x00C0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_12;                          // 0x218B8(0x00A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_18;                         // 0x21958(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_17;                         // 0x21A40(0x00E8)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_7;                             // 0x21B28(0x00C8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_16;                         // 0x21BF0(0x00E8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_11;                          // 0x21CD8(0x00A0)
	struct FAnimNode_ModifyCurve                       AnimGraphNode_ModifyCurve;                                 // 0x21D78(0x0058)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_15;                         // 0x21DD0(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_14;                         // 0x21EB8(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_13;                         // 0x21FA0(0x00E8)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_18;                          // 0x22088(0x00B0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_12;                         // 0x22138(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_11;                         // 0x22220(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_10;                         // 0x22308(0x00E8)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_17;                          // 0x223F0(0x00B0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_24;                         // 0x224A0(0x00C0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_16;                          // 0x22560(0x00B0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_15;                          // 0x22610(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_9;                               // 0x226C0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_46;                           // 0x226F0(0x0080)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_23;                         // 0x22770(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_45;                           // 0x22830(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_14;                          // 0x228B0(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_44;                           // 0x22960(0x0080)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_11;                            // 0x229E0(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_43;                           // 0x22A08(0x0080)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_22;                         // 0x22A88(0x00C0)
	struct FAnimNode_RandomPlayer                      AnimGraphNode_RandomPlayer;                                // 0x22B48(0x0078)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_10;                          // 0x22BC0(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_42;                           // 0x22C60(0x0080)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_21;                         // 0x22CE0(0x00C0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_9;                           // 0x22DA0(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_41;                           // 0x22E40(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_40;                           // 0x22EC0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_39;                           // 0x22F40(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_38;                           // 0x22FC0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_37;                           // 0x23040(0x0080)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_20;                         // 0x230C0(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_36;                           // 0x23180(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_13;                          // 0x23200(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_35;                           // 0x232B0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_34;                           // 0x23330(0x0080)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_19;                         // 0x233B0(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_33;                           // 0x23470(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_12;                          // 0x234F0(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_32;                           // 0x235A0(0x0080)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_18;                         // 0x23620(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_31;                           // 0x236E0(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_11;                          // 0x23760(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_30;                           // 0x23810(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_29;                           // 0x23890(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_28;                           // 0x23910(0x0080)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_17;                         // 0x23990(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_27;                           // 0x23A50(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_10;                          // 0x23AD0(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_26;                           // 0x23B80(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_25;                           // 0x23C00(0x0080)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_16;                         // 0x23C80(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_24;                           // 0x23D40(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_9;                           // 0x23DC0(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_23;                           // 0x23E70(0x0080)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_15;                         // 0x23EF0(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_22;                           // 0x23FB0(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_8;                           // 0x24030(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_21;                           // 0x240E0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_20;                           // 0x24160(0x0080)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_14;                         // 0x241E0(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_19;                           // 0x242A0(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_7;                           // 0x24320(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_18;                           // 0x243D0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_17;                           // 0x24450(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_6;                           // 0x244D0(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_16;                           // 0x24580(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_15;                           // 0x24600(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_5;                           // 0x24680(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_14;                           // 0x24730(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_8;                           // 0x247B0(0x00A0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_13;                         // 0x24850(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_13;                           // 0x24910(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_12;                           // 0x24990(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_4;                           // 0x24A10(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_7;                           // 0x24AC0(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_11;                           // 0x24B60(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_10;                           // 0x24BE0(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_3;                           // 0x24C60(0x00B0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_12;                         // 0x24D10(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9;                            // 0x24DD0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8;                            // 0x24E50(0x0080)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_2;                           // 0x24ED0(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7;                            // 0x24F80(0x0080)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_11;                         // 0x25000(0x00C0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum;                             // 0x250C0(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6;                            // 0x25170(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_6;                           // 0x251F0(0x00A0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_10;                         // 0x25290(0x00C0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_2;                                      // 0x25350(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_21;                         // 0x25398(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_20;                         // 0x253C0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_19;                         // 0x253E8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_18;                         // 0x25410(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_17;                         // 0x25438(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_16;                         // 0x25460(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_15;                         // 0x25488(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_14;                         // 0x254B0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_13;                         // 0x254D8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_12;                         // 0x25500(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_11;                         // 0x25528(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_10;                         // 0x25550(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9;                          // 0x25578(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8;                          // 0x255A0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7;                          // 0x255C8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6;                          // 0x255F0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5;                          // 0x25618(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4;                          // 0x25640(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3;                          // 0x25668(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2;                          // 0x25690(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult;                            // 0x256B8(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5;                            // 0x256E0(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_8;                               // 0x25760(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4;                            // 0x25790(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_7;                               // 0x25810(0x0030)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_6;                               // 0x25840(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3;                            // 0x25870(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_5;                               // 0x258F0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2;                            // 0x25920(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_4;                               // 0x259A0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                              // 0x259D0(0x0080)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3;                               // 0x25A50(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_3;                              // 0x25A80(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2;                               // 0x25B30(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_2;                              // 0x25B60(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                 // 0x25C10(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                                // 0x25C40(0x00B0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_3;                            // 0x25CF0(0x0158)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_9;                          // 0x25E48(0x00E8)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_9;                          // 0x25F30(0x00C0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_5;                           // 0x25FF0(0x00A0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_8;                          // 0x26090(0x00C0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_10;                            // 0x26150(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_7;                          // 0x26178(0x00C0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_6;                             // 0x26238(0x00C8)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_5;                             // 0x26300(0x00C8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_9;                             // 0x263C8(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_8;                             // 0x263F0(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_6;                          // 0x26418(0x00C0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_8;                          // 0x264D8(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_7;                          // 0x265C0(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_6;                          // 0x266A8(0x00E8)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_2;                  // 0x26790(0x0190)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                        // 0x26920(0x0030)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace;                    // 0x26950(0x0190)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_4;                             // 0x26AE0(0x00C8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_5;                          // 0x26BA8(0x00E8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7;                             // 0x26C90(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_5;                          // 0x26CB8(0x00C0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_6;                             // 0x26D78(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_5;                             // 0x26DA0(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4;                             // 0x26DC8(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_2;                            // 0x26DF0(0x0158)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_4;                           // 0x26F48(0x00A0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3;                             // 0x26FE8(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2;                             // 0x27010(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose;                               // 0x27038(0x0028)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_3;                             // 0x27060(0x00C8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_4;                          // 0x27128(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_3;                          // 0x27210(0x00E8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_3;                           // 0x272F8(0x00A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2;                           // 0x27398(0x00A0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_4;                          // 0x27438(0x00C0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_3;                          // 0x274F8(0x00C0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose;                              // 0x275B8(0x0158)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_2;                          // 0x27710(0x00C0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool;                             // 0x277D0(0x00A0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_2;                             // 0x27870(0x00C8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_2;                          // 0x27938(0x00E8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer;                            // 0x27A20(0x00E8)
	struct FAnimNode_Slot                              AnimGraphNode_Slot;                                        // 0x27B08(0x0048)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend;                            // 0x27B50(0x00C0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive;                               // 0x27C10(0x00C8)
	class ABP_NPC_C*                                   ALS_NPCCharacter;                                          // 0x27CD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Velocity;                                                  // 0x27CE0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   AimOffset;                                                 // 0x27CEC(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   LeanGrounded;                                              // 0x27CF4(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   FeetPosition;                                              // 0x27CFC(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_MovementDirection_E_MovementDirection> MovementDirection;                                         // 0x27D04(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_N7LC[0x3];                                     // 0x27D05(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 FlailAlphaCurve;                                           // 0x27D08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                                 LandAlphaCurve;                                            // 0x27D10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_LocomotionState_E_LocomotionState>   ActiveLocomotionState;                                     // 0x27D18(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_IdleEntryState_E_IdleEntryState>     IdleEntryState;                                            // 0x27D19(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_MovementMode_E_MovementMode>         ALS_PrevMovementMode;                                      // 0x27D1A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_LV9F[0x1];                                     // 0x27D1B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRotator                                    CharacterRotation;                                         // 0x27D1C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                                    LastVelocityRotation;                                      // 0x27D28(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                                    LastMovementInputRotation;                                 // 0x27D34(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                                    LookingRotation;                                           // 0x27D40(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              AimYawDelta;                                               // 0x27D4C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AimYawRate;                                                // 0x27D50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_MovementMode_E_MovementMode>         ALS_MovementMode;                                          // 0x27D54(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Gait_E_Gait>                         ALS_Gait;                                                  // 0x27D55(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Stance_E_Stance>                     ALS_Stance;                                                // 0x27D56(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_RotationMode_E_RotationMode>         ALS_RotationMode;                                          // 0x27D57(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_ViewMode_E_ViewMode>                 ALS_ViewMode;                                              // 0x27D58(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_ZQK4[0x3];                                     // 0x27D59(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Direction;                                                 // 0x27D5C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Speed;                                                     // 0x27D60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              GaitValue;                                                 // 0x27D64(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              N_PlayRate;                                                // 0x27D68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              C_PlayRate;                                                // 0x27D6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              StartPosition;                                             // 0x27D70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LeanInAir;                                                 // 0x27D74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    PreviousVelocityRotation;                                  // 0x27D78(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              VelocityDifference;                                        // 0x27D84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PreviousSpeed;                                             // 0x27D88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AccelerationDifference;                                    // 0x27D8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FlailRate;                                                 // 0x27D90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FlailBlendAlpha;                                           // 0x27D94(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LandPredictionAlpha;                                       // 0x27D98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_PivotParams                             PivotParams;                                               // 0x27D9C(0x0014) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CharacterRotationDifference;                               // 0x27DB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              VelocityDifference2;                                       // 0x27DB4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ALS_Aiming;                                                // 0x27DB8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsMoving;                                                  // 0x27DB9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               HasMovementInput;                                          // 0x27DBA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ShowTraces;                                                // 0x27DBB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               TurningInPlace;                                            // 0x27DBC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ShouldTurnInPlace;                                         // 0x27DBD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               TurningRight;                                              // 0x27DBE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_2MSZ[0x1];                                     // 0x27DBF(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TurnInPlaceDelayCount;                                     // 0x27DC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_RFYV[0x4];                                     // 0x27DC4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCharacterMovementComponent*                 CharacterMovement;                                         // 0x27DC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                           CapsuleComponent;                                          // 0x27DD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                ActiveTurnInPlaceMontage;                                  // 0x27DD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WalkingSpeed;                                              // 0x27DE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RunningSpeed;                                              // 0x27DE4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SprintingSpeed;                                            // 0x27DE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CrouchingSpeed;                                            // 0x27DEC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                GetUpFromBack;                                             // 0x27DF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                GetUpFromFront;                                            // 0x27DF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                AdditiveLand;                                              // 0x27E00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               RF;                                                        // 0x27E08(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_1GL0[0x7];                                     // 0x27E09(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FST_TurnAnims                               N_Turn_91;                                                 // 0x27E10(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_TurnAnims                               N_Turn_181;                                                // 0x27E20(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_TurnAnims                               LF_Turn_91;                                                // 0x27E30(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_TurnAnims                               RF_Turn_91;                                                // 0x27E40(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_TurnAnims                               CLF_Turn_91;                                               // 0x27E50(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_TurnAnims                               CRF_Turn_91;                                               // 0x27E60(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               LoopMontage;                                               // 0x27E70(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               LoopPlaying;                                               // 0x27E71(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               HeldItem;                                                  // 0x27E72(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_Tools_E_Tools>                       ToolType;                                                  // 0x27E73(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Attack;                                                    // 0x27E74(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_39ZW[0x3];                                     // 0x27E75(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Strength;                                                  // 0x27E78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsHoldingTorch;                                            // 0x27E7C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_48D3[0x3];                                     // 0x27E7D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     SnapLocationRightHand;                                     // 0x27E80(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     SnapLocationLeftHand;                                      // 0x27E8C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             SnapComponent;                                             // 0x27E98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SnapAlpha;                                                 // 0x27EA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              TargetSnapAlpha;                                           // 0x27EA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                              ResetSnapAlpha;                                            // 0x27EA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	bool                                               UseHeadForFullBodyAnimations;                              // 0x27EAC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_9FV5[0x3];                                     // 0x27EAD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       LeftHandSocketName;                                        // 0x27EB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       RightHandSocketName;                                       // 0x27EB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_AnimInteractionTypes_E_AnimInteractionTypes> InteractionType;                                           // 0x27EC0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UseLookingDown;                                            // 0x27EC1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_NVZZ[0x2];                                     // 0x27EC2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LookingDownAngle;                                          // 0x27EC4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CanPerformHitAction;                                       // 0x27EC8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_HC2E[0x3];                                     // 0x27EC9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              HeadMovementBlend;                                         // 0x27ECC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<TEnumAsByte<E_AnimInteractionTypes_E_AnimInteractionTypes>, struct FST_MontagesSettings> MontagesSettings;                                          // 0x27ED0(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               HitObject;                                                 // 0x27F20(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_0OZK[0x7];                                     // 0x27F21(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBlendSpaceBase*                             MontageAimOffset;                                          // 0x27F28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UseMontageAO;                                              // 0x27F30(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_0XPM[0x7];                                     // 0x27F31(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBlendSpaceBase*                             FullBodyAimOffset;                                         // 0x27F38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UseFullBodyAO;                                             // 0x27F40(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_CD8G[0x7];                                     // 0x27F41(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimMontage*                                CurrentHoldableMontage;                                    // 0x27F48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DoLoop;                                                    // 0x27F50(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               isAiming;                                                  // 0x27F51(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_VUIM[0x2];                                     // 0x27F52(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRotator                                    SpineRotation;                                             // 0x27F54(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsPicking;                                                 // 0x27F60(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               UsingLeftHand;                                             // 0x27F61(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsSitting;                                                 // 0x27F62(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsSleeping;                                                // 0x27F63(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_SleepingDirection_E_SleepingDirection> SleepingDirection;                                         // 0x27F64(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UseBedSleepingPose;                                        // 0x27F65(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               EnableIK;                                                  // 0x27F66(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               UsingRightHand;                                            // 0x27F67(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsSick;                                                    // 0x27F68(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsInjured;                                                 // 0x27F69(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsInIdleState;                                             // 0x27F6A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_IdleStates_E_IdleStates>             IdleState;                                                 // 0x27F6B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CanSwitchAnim;                                             // 0x27F6C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      SelectedStandingPose;                                      // 0x27F6D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      SelectedTalkingPose;                                       // 0x27F6E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      SelectedOtherPose;                                         // 0x27F6F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      SelectedLookingPose;                                       // 0x27F70(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               OverriddenPose;                                            // 0x27F71(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_AfterIdlePose_E_AfterIdlePose>       DoAfterIdle;                                               // 0x27F72(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_6MK0[0x1];                                     // 0x27F73(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AdditiveBlend;                                             // 0x27F74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              IdleBlendAlpha;                                            // 0x27F78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HeadBlendInDialogue;                                       // 0x27F7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               HasInfant;                                                 // 0x27F80(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_Profession_E_Profession>             Profession;                                                // 0x27F81(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsWorking;                                                 // 0x27F82(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      ProfessionState;                                           // 0x27F83(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                WorkLoops;                                                 // 0x27F84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CurrentWorkLoops;                                          // 0x27F88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BreakChance;                                               // 0x27F8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsTakingBreak;                                             // 0x27F90(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      BreakAnimID;                                               // 0x27F91(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_MR4X[0x6];                                     // 0x27F92(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimMontage*                                BreakMontage;                                              // 0x27F98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                WorkMontage;                                               // 0x27FA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               SittingPoseSelected;                                       // 0x27FA8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_SitDownPosition_E_SitDownPosition>   SitDownPosition;                                           // 0x27FA9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_SittingPoseFemale_E_SittingPoseFemale> FurnitureSittingPoseID;                                    // 0x27FAA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_0XL6[0x1];                                     // 0x27FAB(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AmountOfLoops;                                             // 0x27FAC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      GroundSittingPoseID;                                       // 0x27FB0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               GotUp;                                                     // 0x27FB1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               SatDown;                                                   // 0x27FB2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsInDialogue;                                              // 0x27FB3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ForceStand;                                                // 0x27FB4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_P9OY[0x3];                                     // 0x27FB5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FeetAlpha;                                                 // 0x27FB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_OHAP[0x4];                                     // 0x27FBC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDragonData_MultiInput                      DragonInput;                                               // 0x27FC0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<unsigned char>                              StandingIdlesIDs;                                          // 0x27FE0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<unsigned char>                              TalkingIdlesIDs;                                           // 0x27FF0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<unsigned char>                              LookingIdleIDs;                                            // 0x28000(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<unsigned char>                              OtherIdleIDs;                                              // 0x28010(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               LowFPS;                                                    // 0x28020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_JO6G[0x3];                                     // 0x28021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              IKFPSLimit;                                                // 0x28024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              IKFPSRestore;                                              // 0x28028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               WokeUp;                                                    // 0x2802C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Female_Mature_AnimBP.Female_Mature_AnimBP_C");
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
	TArray<unsigned char> GetTalkingPoseExcludes();
	TArray<unsigned char> GetStandingPoseExcludes();
	void UpdateIKState();
	void GetCurrentSeason(int* Season);
	void SetPoseID(TEnumAsByte<E_IdleStates_E_IdleStates> IdleState, unsigned char PoseID);
	void RandomizeAmountOfLoopsForSitting(float Min, float Max);
	void SelectBreakMontage();
	void SelectWorkMontage();
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
	void OnCompleted_148632AA4FE945F3CAB89CA4B6EFAC43(const struct FName& NotifyName);
	void OnBlendOut_148632AA4FE945F3CAB89CA4B6EFAC43(const struct FName& NotifyName);
	void OnInterrupted_148632AA4FE945F3CAB89CA4B6EFAC43(const struct FName& NotifyName);
	void OnNotifyBegin_148632AA4FE945F3CAB89CA4B6EFAC43(const struct FName& NotifyName);
	void OnNotifyEnd_148632AA4FE945F3CAB89CA4B6EFAC43(const struct FName& NotifyName);
	void OnCompleted_2D02D750492FA4FF6B639DA3590AF352(const struct FName& NotifyName);
	void OnBlendOut_2D02D750492FA4FF6B639DA3590AF352(const struct FName& NotifyName);
	void OnInterrupted_2D02D750492FA4FF6B639DA3590AF352(const struct FName& NotifyName);
	void OnNotifyBegin_2D02D750492FA4FF6B639DA3590AF352(const struct FName& NotifyName);
	void OnNotifyEnd_2D02D750492FA4FF6B639DA3590AF352(const struct FName& NotifyName);
	void OnCompleted_4CF8D8A34C1396A9C638968946314FEF(const struct FName& NotifyName);
	void OnBlendOut_4CF8D8A34C1396A9C638968946314FEF(const struct FName& NotifyName);
	void OnInterrupted_4CF8D8A34C1396A9C638968946314FEF(const struct FName& NotifyName);
	void OnNotifyBegin_4CF8D8A34C1396A9C638968946314FEF(const struct FName& NotifyName);
	void OnNotifyEnd_4CF8D8A34C1396A9C638968946314FEF(const struct FName& NotifyName);
	void OnCompleted_692AFD09441BA1F1BBF6C29374DAD437(const struct FName& NotifyName);
	void OnBlendOut_692AFD09441BA1F1BBF6C29374DAD437(const struct FName& NotifyName);
	void OnInterrupted_692AFD09441BA1F1BBF6C29374DAD437(const struct FName& NotifyName);
	void OnNotifyBegin_692AFD09441BA1F1BBF6C29374DAD437(const struct FName& NotifyName);
	void OnNotifyEnd_692AFD09441BA1F1BBF6C29374DAD437(const struct FName& NotifyName);
	void OnCompleted_35573788491B9EB599E1A597F49E9407(const struct FName& NotifyName);
	void OnBlendOut_35573788491B9EB599E1A597F49E9407(const struct FName& NotifyName);
	void OnInterrupted_35573788491B9EB599E1A597F49E9407(const struct FName& NotifyName);
	void OnNotifyBegin_35573788491B9EB599E1A597F49E9407(const struct FName& NotifyName);
	void OnNotifyEnd_35573788491B9EB599E1A597F49E9407(const struct FName& NotifyName);
	void OnCompleted_E8F7DAAB4AEC5E9EC6B5A5AA92F8C9AA(const struct FName& NotifyName);
	void OnBlendOut_E8F7DAAB4AEC5E9EC6B5A5AA92F8C9AA(const struct FName& NotifyName);
	void OnInterrupted_E8F7DAAB4AEC5E9EC6B5A5AA92F8C9AA(const struct FName& NotifyName);
	void OnNotifyBegin_E8F7DAAB4AEC5E9EC6B5A5AA92F8C9AA(const struct FName& NotifyName);
	void OnNotifyEnd_E8F7DAAB4AEC5E9EC6B5A5AA92F8C9AA(const struct FName& NotifyName);
	void OnCompleted_5C56C2344DDA4D95432807BB040D9DD0(const struct FName& NotifyName);
	void OnBlendOut_5C56C2344DDA4D95432807BB040D9DD0(const struct FName& NotifyName);
	void OnInterrupted_5C56C2344DDA4D95432807BB040D9DD0(const struct FName& NotifyName);
	void OnNotifyBegin_5C56C2344DDA4D95432807BB040D9DD0(const struct FName& NotifyName);
	void OnNotifyEnd_5C56C2344DDA4D95432807BB040D9DD0(const struct FName& NotifyName);
	void OnCompleted_BD63C0534CF1FC779D132791FC559124(const struct FName& NotifyName);
	void OnBlendOut_BD63C0534CF1FC779D132791FC559124(const struct FName& NotifyName);
	void OnInterrupted_BD63C0534CF1FC779D132791FC559124(const struct FName& NotifyName);
	void OnNotifyBegin_BD63C0534CF1FC779D132791FC559124(const struct FName& NotifyName);
	void OnNotifyEnd_BD63C0534CF1FC779D132791FC559124(const struct FName& NotifyName);
	void OnCompleted_D07E53514389305B73B4EEBAD348811C(const struct FName& NotifyName);
	void OnBlendOut_D07E53514389305B73B4EEBAD348811C(const struct FName& NotifyName);
	void OnInterrupted_D07E53514389305B73B4EEBAD348811C(const struct FName& NotifyName);
	void OnNotifyBegin_D07E53514389305B73B4EEBAD348811C(const struct FName& NotifyName);
	void OnNotifyEnd_D07E53514389305B73B4EEBAD348811C(const struct FName& NotifyName);
	void OnCompleted_42B5EC8D42FC2B0D6A367E99F9BB18C8(const struct FName& NotifyName);
	void OnBlendOut_42B5EC8D42FC2B0D6A367E99F9BB18C8(const struct FName& NotifyName);
	void OnInterrupted_42B5EC8D42FC2B0D6A367E99F9BB18C8(const struct FName& NotifyName);
	void OnNotifyBegin_42B5EC8D42FC2B0D6A367E99F9BB18C8(const struct FName& NotifyName);
	void OnNotifyEnd_42B5EC8D42FC2B0D6A367E99F9BB18C8(const struct FName& NotifyName);
	void OnCompleted_7C49ECDD40EAF43EA73E54BEF932193F(const struct FName& NotifyName);
	void OnBlendOut_7C49ECDD40EAF43EA73E54BEF932193F(const struct FName& NotifyName);
	void OnInterrupted_7C49ECDD40EAF43EA73E54BEF932193F(const struct FName& NotifyName);
	void OnNotifyBegin_7C49ECDD40EAF43EA73E54BEF932193F(const struct FName& NotifyName);
	void OnNotifyEnd_7C49ECDD40EAF43EA73E54BEF932193F(const struct FName& NotifyName);
	void SetMountAnimalType_BPI(TEnumAsByte<E_Animals_E_Animals> MountAnimalType);
	void UpdateIKAlpha(float Alpha);
	void PlayMountSpecial();
	void PlayMountStopAnimation(int AnimIndex);
	void Set_Caught_Prey_BPI(bool CaughtPrey);
	void OnDeath();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_BlendListByBool_BCD1C9C1488E090818AA56A8ADB23374();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_BlendListByBool_A8BFBDDF48E994F65A4A8389CCA25E10();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_BlendListByBool_39743B0D4CDBDE2428F53C94A51945BB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_BlendListByBool_4EE7D94949EE1C4A9A7CC5A01D52C7A8();
	void Knockback(const struct FVector& KnockbackDirection, float KnockbackStrength);
	void WaitForCrafting();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_BlendListByBool_0AD7CFCB424990091A93F397635B51D4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_BlendListByBool_EE1879B8402363EED62E84AACF6E665B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_LayeredBoneBlend_289FBC53417115EA15FB1D8C7465B17A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_BlendListByBool_7AA1797C4FC7B46D65FD31A3267A412E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_BlendListByBool_B692196D49A03449D60AA68BC4F6AD67();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_BlendListByBool_A921324144B40B6AD36AD4800F21FB86();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_BlendListByBool_926C664047F3731BE7814F95C7D5A95E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_LayeredBoneBlend_85BFA52F4EB6AB5E7C450FBD4307E61C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_LayeredBoneBlend_EFB3648644CB18E098BA67937DD92BF6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_EB20F70C410C6EE3052B5B8E7C35C495();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_88A7666D42DE5ED89B316C85EFE5A32A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_E19787E04A0B828FF54FF3962F7C197D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_6927239E4A90597ECED8F4B954937D9D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_A28CCA4C4EC5DE687BF768AFA1BFF8BC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_64A9B9704ACD20CF2D9ED29930B9865E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_F8D14C324C57E6475A156FAE448A9124();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_4310E8D9442A5E804A5A11B99B304126();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_3083B5B3480D7B5AE2904D8F42B896D4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_75C3680D4BD1C5540A5AA894DD44E59D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_32ED0ABF48FA6E49F0A287A61A82FD4A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_74F5FB414FD1D9F3D6F65CB748615835();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_1ABCA13040AD98E4755BB2A5958FE4E8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_A55F19214BD50382EAA556A496DF1BB6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_E8CE3914491BCF1C73CD77A1B450319D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_AE5CCD5B4B2DCF532179D2B1D16E811F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_31412B02442C75EFFD8333B0C0C9D260();
	void SetIsInWater(bool InWater, float Intensity);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_4FA7D0DE43E19897FB9ED787373A2816();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_9EFFAC8649CC32ABE79FFC9B01ADF9F5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_2A0A646644668A4EA59D09AE91ECD34C();
	void AnimNotify_BreakMontageInterrupted(TEnumAsByte<E_Profession_E_Profession> Profession, class UAnimMontage* Montage, unsigned char BreakAnimID);
	void AnimNotify_BreakMontageBlendOut(TEnumAsByte<E_Profession_E_Profession> Profession, class UAnimMontage* Montage, unsigned char BreakAnimID);
	void AnimNotify_BreakMontageComplete(TEnumAsByte<E_Profession_E_Profession> Profession, class UAnimMontage* Montage, unsigned char BreakAnimID);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_F6EA80854BF88BF73B91088C3E3FFD14();
	void AnimNotify_WorkLoopsFinished(TEnumAsByte<E_Profession_E_Profession> Profession, class UAnimMontage* Montage, unsigned char ProfessionState, int Loop);
	void AnimNotify_WorkLoopIncreased(TEnumAsByte<E_Profession_E_Profession> Profession, class UAnimMontage* Montage, unsigned char ProfessionState, int Loop);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_A7C7ED204F0C158778D1ECA38F019342();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_61EE020146C495C4581CD29F3B35E4D4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_70F978F84058CCF462942BABD7564BD6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_F0B5779B4364ECCB1158FCA33EF5F29F();
	void AnimNotify_WorkMontageInterrupted(TEnumAsByte<E_Profession_E_Profession> Profession, class UAnimMontage* Montage, unsigned char ProfessionState);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_BlendListByBool_886345C847D79E9A674512B875DB5129();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_CF8F27BA4A3B83323DB8ED97A415E30B();
	void AnimNotify_WorkMontageComplete(TEnumAsByte<E_Profession_E_Profession> Profession, class UAnimMontage* Montage, unsigned char ProfessionState);
	void Set_IdleOtherPose_BPI(TEnumAsByte<E_OtherIdles_E_OtherIdles> Other_Idle_Pose, TEnumAsByte<E_AfterIdlePose_E_AfterIdlePose> DoAfterPose);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_1ED39F4C4BF6B4A266AF3C90A8715080();
	void Set_IdleLookingPose_BPI(TEnumAsByte<E_LookingIdles_E_LookingIdles> Looking_Idle_Pose, TEnumAsByte<E_AfterIdlePose_E_AfterIdlePose> DoAfterPose);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_35B46EFA426669D57FA087A4C059EE8C();
	void Set_IdleTalkingPose_BPI(TEnumAsByte<E_TalkingIdles_E_TalkingIdles> Talking_Idle_Pose, TEnumAsByte<E_AfterIdlePose_E_AfterIdlePose> DoAfterPose);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_B87E75F741CA97C3AFD0B8961B42305E();
	void Set_IdleStandingPose_BPI(TEnumAsByte<E_StandingIdles_E_StandingIdles> Standing_Idle_Pose, TEnumAsByte<E_AfterIdlePose_E_AfterIdlePose> DoAfterPose);
	void SetMontageSettings(TMap<TEnumAsByte<E_AnimInteractionTypes_E_AnimInteractionTypes>, struct FST_MontagesSettings> MontagesSettings);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_49EBB1B14E954994A9BB1E96A2863236();
	void SelectPickUpAnim(class UObject* Instigator, bool PreferTwoHanded);
	void AnimNotify_HolsterWeapon();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_ED30E3E34C038FC4F01EE7BEC181B4EB();
	void PlayCraftingAnimation(TEnumAsByte<E_Workbenches_E_Workbenches> WorkbenchType, float CraftingTime);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_20BCEDBE42ADBE4B6BF16B99857B8C69();
	void AnimNotify_StopMovement(bool bStopMovementInput);
	void AnimNotify_StopRotation(bool StopRotationInput);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_3188AB904260FFCA9766E5A22FF5234E();
	void AnimNotify_LimitCamera(const struct FST_CameraRotationLimits& CameraLimits);
	void PlayerLookAt(class AActor* Target, const struct FVector& TargetLocation);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_6D1AC39842ED142F1303A3A41BAF109B();
	void SetMontageType(TEnumAsByte<E_AnimInteractionTypes_E_AnimInteractionTypes> Montage_Type);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_095103D647628C75C41396BD8D2F9418();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_BlendListByBool_DDA25DB3499E8A11D94DBE9883A98EE4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_BlendListByBool_A30FA5A647B853753FF9CEA66C9A1DF8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_BlendListByBool_CCE07BD5421C6442B1A42381025B09AA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_9445F78D4B45937965586399F2F3F205();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_BlendListByBool_D2D555E54C1333AC0291E08A5C080F90();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_BlendListByBool_83F24BED444244656D471F8CF9710AE5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_E83839A94F6DCDC5AD2F47BA20EC5C3E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_881F82144091A2CDB32E8383A6290B48();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_BlendListByBool_7B0042BC459D7102C31CCD87DC3A7FA5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_BE8695D84B6167A1DD76089113575702();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_BlendListByBool_3732EF9D4EC0842CEA42EF9195E66A12();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_BlendListByBool_913720C2437DC7EE4A536AB3AED2BF3B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_AD6951074DDBCCE59669A1AD93BD89E4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_BlendListByBool_61281C88407F757DBB15D982F34D7C47();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_BlendListByBool_88ACB265438603598553FE94B9F446DB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_BlendListByBool_AFF0F6C34814A72EBF2E25AEB3DE14DA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_BlendListByBool_F42A7E8E4477644878914F9222101126();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_735CED97489B18CE1D2909AC143408A8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_BlendListByBool_806808B143298E4F29E530AAB7A20CE9();
	void PlayerMoveForInteraction(class AActor* Instigator, const struct FVector& Target, const struct FVector& LookAtTarget, bool RotateDuringMovement, bool UsePlayerLookAt, bool ResetLookAtPitch);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_EE35BC6448EA868532FFA98163FE9CDB();
	void SetStrengthAlpha(float Alpha);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_BlendListByBool_01B4C1BB426153C7059628BEFFCCF2E5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_A583139D4C7F3A82F59868A396FDF078();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_6DB4DD854F7E5BFD6184C8A73A56599F();
	void SetToolType(TEnumAsByte<E_Tools_E_Tools> ToolType);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_D845763F4AF01D5B6E33DFA428787A69();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_LayeredBoneBlend_BE3F36EF41A5176D7FF520A1F449F1F0();
	void CameraShake_BPI(class UClass* ShakeClass, float Scale);
	void AddCharacterRotation_BPI(const struct FRotator& AddAmount);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_E4CA372F43828C522A57E0B1575A0DAE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_F9DC53BA4D7DD6B37E42EFAD56760A64();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_A9F4D8C24AA1FCE10E487089CE2F163D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_3DA52B4747D6FE2F75B527912A7603B5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_707C179244BB7A7D35FE36B5B3E064D6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_BB0021C1496038BB9F0AE99036921676();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_56EFEF2542B21753EB3680A18FCD6A3F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_5C012C1F4559A747D7F34E9B7A659D8A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_FCDD92FB47C20E429D3A40A8C7D22052();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_9DC6D12F4F4FCB81157E088D00B7C7A6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_66F0DDFA44E4555B8BC2559DEE8EF008();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_80DF23D44912B1AD9CD0F2A0F640F2DD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_9851C1FF48A054614AB601BD210D3B4A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_334097544DEADBC2AC9C67B9C3762BB8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_3D6F1AF144ED41520FFB2DAB26AD4800();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_2CBEA53B4F792D688F26198C99D128A9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_9988DE254FDE0619D4FCE8B08BA215F2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_0FF1F8A6489C53665609C89B09C9EFCE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_58BC477C4B27ABF74A0B739A7F9D3849();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_171F54834E1C9A7117E7E1890979DA13();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_C4064378492FDA16449E20B0A1415774();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_5553D28F4B86AFD5EF9B8DA4A10ACB6D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_599652B64B4DB277A7C372962B802768();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_0B534A5844AE924AB9AD05866A495500();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_C29E49B045EC9C264AF3DA8C8A21F6B7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_D64DDBDF47C04FADB14F56A3EAA291AA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_2770E90743384A7E4DD87D85330FC8C6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_108257394CEF9B147B7D589A20BA8064();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_498E9A9F42B34D2EF9A7AEBBBE09C702();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_F203FEAD469824C623DF888AE1DF9E93();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_4B8AE3AA4D8A61C31D3B739FDFFA824C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_C3B06E93422DC5616DE77F8D5A38CE40();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_F69183154A5A5C2A5C9924A3FBB23A3B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_F1D7B98F45F57F012BA162AFD6968ECE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_4571D9DB473EDB4915A8EF868201C888();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_E6F3B8F54F8A84150B205AA5B8B25369();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_84B740264C559D7468AAB981FFB4B8F3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_FB197A5D40DAF7B18EAACC8AF2D3047A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_D37503A548EC9706B85E558947B8C3D8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_28DE5308477EE002F7A13C96A4F49BC5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_35903F54405B877C87238CAA61094FE7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_1F646D904049F881931425A0D0FEF80B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_90E650A54687A2B7BF0421B20BC47093();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_EF0C4FB346D72BDEE30B938C64BF7FE1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_C95BE02A45D4DA2944BF3492DF907D5D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_C4FCBC4E426F73F97C3ADAAD788E2BB1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_C67A0E61431BF264A7489DA1AABCDA71();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_856395D5417F7AF661BE42AE79468807();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_3CACD56E406C86D38F6C94A8AE510F2F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_4F310EAA485C9DF716E7FB87F45F00B9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_0E0A0F03407C145A33B1D5B42FC08D7F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_F31D3C5F4F6D3B2A22FBB2822251C011();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_D0A7B6774F52B5D76E6E6C91A89DB7DE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_B3D61BB5431D6604C5594F8EC40B86AB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_C336118B4AA459587CD4B59DE649F712();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_LayeredBoneBlend_1CA093304BE9FA9EB505BFAABF917848();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_BlendListByBool_07FBADA040E73D2CEBA90EA9D07D01E7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_LayeredBoneBlend_9DB0815049C05216BCFEBEB907262FF2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_LayeredBoneBlend_18E4145B4E32A35EC9BD55A4175ED685();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_C9D46E1345215B51185A5EAA1588157A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_C01DCB2D4400270D51A7A8B0E4051E5B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_B69A009349C4A88A318CE7A68F5FD590();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_CCDABFF848CFD581882AD8A802AD84FE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_D41B9F6847F6A29DEE2C53AA1F45E7B4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_D13EB09F48AF13115A284781B404BC7A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_C3B82BCE4893C19918C58A8C084A15DD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_2B8356F8421E9A235B8745B89081A450();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_683ACFBD42856FCDE93334A280AF5496();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_F778AC6A419CDF150CDA96BCF0F84B8C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_9B7CCF1E4718DC7D6D0E24B728FFCDCC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_321A6FD14049408E37CD3F950F4CFD9A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_AE016DC44A0AAF64226BD898BF1E477B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_68F5378449524C536EEFDEA06EDA4960();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_1146408A44D827EF9372C1A58A64A912();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_BCDD92104D4D90103D111EB85987DD88();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_EC110F6A461D21089022819F1928B44C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_449725824103BFAC0421CFB4D73F2201();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_CFA2E07C4F6458EAA5F0609DF2C3C34D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_25643F044E053D2A5C800DBEF9EB266E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_84C4AB5D45597D2815D24BB3C4E4409E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_9BD5031B4C08097537FAB080EFAEDA92();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_EE69A35D46BB2F5F724884A88ED23D87();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_C90118E843E33FF9EB1457B8D8229925();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_E38B30E545E43C1658277BBA9AEF1D28();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_8A39496040D41794828B719C72F14E34();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_063806C8458510D7D684949A9BE48605();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_6A91CCAF44F9EA9BC7932DB7D9043F76();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_13A03CA54DD175C107CB06B3658E557A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_1295F82E4D1B753A61A3428146A9A41C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_08650047494C9B52035BDEBD42884274();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_78FAFCB849B0322B2C97459A05A9FDAC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_5691B17140999378640B27B99842C6B3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_7CD4818C4C17918C5BC340BBCF1AAD9C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_F6362895483F393938EB9291A55DD209();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_5BA76CAB4773CD23BCF4BEA592DD14C7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_4D3E8B8A404DA719EAACB489EAC58C61();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_96908AF24FC6B462E0FE098665D2A51F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_2A1FE0C243D394EF7B4D17AC4E589FA1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_ED0C67004D8E61510A6D38B10E10A78D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_5CC547124C3BCD8DBE77749F3EF176ED();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_87B3D2044B0EA1C1B8A1F69892852ECD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_99D5DA1B4092736FAB47DC94CDF30DB4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_1B6F22E84EEFA54266DB1E9EA0DDDADA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_799A9EFA41DED8C039E827B33D21E89C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_9010687C4753701638E10F976C4D3E34();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_EA9BE88B4D9B0C21A7749B9089CC9CB4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_11F6433840220AF0EEC7C2A50535D11E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_8BA108434654FB94370924AECA0C612D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_FACE2E624B027251DE13E8BF462C0EB7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_62F3B79441DBEA9968B40AB01E6B7531();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_4C441FBD4D148C06EAA14F80F6170C16();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_20C398E4479892DE9AC7B38B1F14A545();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_DB1B561541070A10C5C71A83003EDC9B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_F7EBFE534D2292B0549405A661E846DC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_A80EDC22407EEE47BF8A7F938F4575B8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_B2D3FD604CCDA59FCCA2BBA23E81CBDE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_DCD3EF1A459AD66ADB60F084ECCE4E7C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_C834FA7D4E252A8519FECA86873B6B97();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_81727679496E01015A448983C2AD0583();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_1064D7A74B4E5ABA6298D1AC39F4F445();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_E525FBE14D0419B106B61FA935DC33F2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_23C785BE45DD4544E0120EB1BB3C041A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_B29024704F8AC6B2D564E4B9C9F4ACC4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_F4475CCF4A2991ADDC257D998CFEFD29();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_B2CD54DC44146619AA167CB42D271F7F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_B919707C490D8B101B526AA2D9E90BD8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_559186B94AD9E3B15E4167811B94D838();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_9E15F0474269BB6BC8F9A19E1A0E1631();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_D5388B054724E8E19ECF0A9B39749586();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_8DEBB1FE4E68BE4EC9FAE4AF9784FB89();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_8F34E228444C77029D7CB584DBA64242();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_234F107C4937B0280518E1ABE424EB91();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_316917B241DE3BCCAADB319B94D6ED77();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_B373BD2A410870F4AF1E2987EEA5DB77();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_1D134D664A03641F2C726080E98C200F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_145EAAD94D661788736304852AF4EBE1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_9A11166448905D3CFFB903B12A448FBE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_8E93FD1D45CA93FBD31EF7BA3A18366C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_706F5BEE4CAD67A587786283C674EAB3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_01367C4045F67ED063D124A83A174071();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_8FCED9EE4FF131F3E40EF2A00E334FA6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_AB2FA2FF45CA3F59EA41078C1787FE26();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_CD3D1CA5441D7B2A76DC299C5BE9FEB4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_4CD7DD7A4DB0DFE145C9A2A8D4B58972();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_4F36A255422E7EFF3D5F9296D08880CC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_BE3D94E34A9F349B755F2581450A0467();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_7211499249D32A4CA4152481DE48114B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_8158112F411BAEF079035DA188A760E1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_32EBE59845347B0E8C4AACA01DA96338();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_9D38DEDD43E872F251B337A7A94F3907();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_EA5CAFC34F06D77729843392CC0B3672();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_9FF75859407566F64C6D28ABD533DBE6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_27DD6D8B4588F254FDC85ABFE0074549();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_00AA17D2484B905DF43E5AB192EF53BE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_B05A253941431ACADD3162BCB4969E13();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_03FC3344430C963F57B84FB104F2BBC0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_6B43099B4767A755B52CF08DDE7E7A84();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_B0F3DE06488A562A0CB6DBACBCE20D15();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_7499D7BA408E06DA6D8075A2352481B9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_F14D1E424C14205B73279487BDC06398();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_95E48737454DD92269204E81487B4F87();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_7241824E4CFE41407808F48D2C1921AC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_499C74EB4F9A0CC333E7F099F1EA06F6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_311768534B859AF41C94E9A1733C11CB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_47EC074A4D00F7CEFC63AFB309B4BA47();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_B34E180B44918AEFE85F508EAB5465A6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Female_Mature_AnimBP_AnimGraphNode_TransitionResult_2DB85F7444C64E45EC8D37B3A74165CD();
	void BlueprintInitializeAnimation();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void SetEnableIK_BPI(bool IK_Enabled);
	void AnimNotify_AnimObjectNotify(TEnumAsByte<E_NotifyObject_E_NotifyObject> ObjectToNotify, const struct FName& NotifyName);
	void Set_IdlePoseByID_BPI(TEnumAsByte<E_IdleStates_E_IdleStates> Idle_State, unsigned char PoseID, TEnumAsByte<E_AfterIdlePose_E_AfterIdlePose> DoAfterPose);
	void ForceStanding();
	void Set_Sitting_BPI(bool Sitting, TEnumAsByte<E_SitDownPosition_E_SitDownPosition> SitDownPosition);
	void Set_BreakState_BPI(bool IsTakingBreak, TEnumAsByte<E_Profession_E_Profession> Profession, bool RandomizeAnim, unsigned char BreakAnimID);
	void Set_WorkState_BPI(bool IsWorking, TEnumAsByte<E_Profession_E_Profession> Profession, unsigned char ProfessionState, int Loops);
	void Set_IdleState_BPI(bool IsInIdleState, TEnumAsByte<E_IdleStates_E_IdleStates> IdleState);
	void Set_Sleeping_BPI(bool Sleeping, TEnumAsByte<E_SleepingDirection_E_SleepingDirection> SleepingDirection, bool UseBedSleepingPose);
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
	void AnimNotify_EnteredSleeping();
	void AnimNotify_EnteredSitting();
	void AnimNotify_SelectGroundSittingPose();
	void AnimNotify_SelectSittingPose();
	void AnimNotify_DespawnAnimItem();
	void AnimNotify_SpawnAnimItem(class UClass* ItemClass, bool IsOffHand);
	void AnimNotify_IdleTransitionBool();
	void AnimNotify_GetRandomTalkingPose();
	void AnimNotify_GetRandomOtherPose();
	void AnimNotify_GetRandomLookingPose();
	void AnimNotify_GetRandomStandingPose();
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
	void AnimNotify_InteractionTypeObject();
	void AnimNotify_InteractionTypeGround();
	void AnimNotify_InteractionTypeBasic();
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
	void StopBreakAnimation();
	void PlayBreakAnimation();
	void StopWorkAnimation();
	void PlayWorkAnimation();
	void Reset_Player_Controller_State();
	void Change_Player_Controller_State(const struct FST_MontagesSettings& MontageSettings);
	void PlayMontage_Networked_(class UAnimMontage* MontageToPlay, float InPlayRate, float InTimeToStartMontageAt, bool bStopAllMontages);
	void ExecuteUbergraph_Female_Mature_AnimBP(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
