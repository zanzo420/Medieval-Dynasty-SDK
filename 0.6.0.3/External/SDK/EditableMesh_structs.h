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

// Enum EditableMesh.ETriangleTessellationMode
enum class EditableMesh_ETriangleTessellationMode : uint8_t
{
	ETriangleTessellationMode__ThreeTriangles = 0,
	ETriangleTessellationMode__FourTriangles = 1,
	ETriangleTessellationMode__ETriangleTessellationMode_MAX = 2,

};

// Enum EditableMesh.EInsetPolygonsMode
enum class EditableMesh_EInsetPolygonsMode : uint8_t
{
	EInsetPolygonsMode__All        = 0,
	EInsetPolygonsMode__CenterPolygonOnly = 1,
	EInsetPolygonsMode__SidePolygonsOnly = 2,
	EInsetPolygonsMode__EInsetPolygonsMode_MAX = 3,

};

// Enum EditableMesh.EPolygonEdgeHardness
enum class EditableMesh_EPolygonEdgeHardness : uint8_t
{
	EPolygonEdgeHardness__NewEdgesSoft = 0,
	EPolygonEdgeHardness__NewEdgesHard = 1,
	EPolygonEdgeHardness__AllEdgesSoft = 2,
	EPolygonEdgeHardness__AllEdgesHard = 3,
	EPolygonEdgeHardness__EPolygonEdgeHardness_MAX = 4,

};

// Enum EditableMesh.EMeshElementAttributeType
enum class EditableMesh_EMeshElementAttributeType : uint8_t
{
	EMeshElementAttributeType__None = 0,
	EMeshElementAttributeType__FVector4 = 1,
	EMeshElementAttributeType__FVector = 2,
	EMeshElementAttributeType__FVector2D = 3,
	EMeshElementAttributeType__Float = 4,
	EMeshElementAttributeType__Int = 5,
	EMeshElementAttributeType__Bool = 6,
	EMeshElementAttributeType__FName = 7,
	EMeshElementAttributeType__EMeshElementAttributeType_MAX = 8,

};

// Enum EditableMesh.EMeshTopologyChange
enum class EditableMesh_EMeshTopologyChange : uint8_t
{
	EMeshTopologyChange__NoTopologyChange = 0,
	EMeshTopologyChange__TopologyChange = 1,
	EMeshTopologyChange__EMeshTopologyChange_MAX = 2,

};

// Enum EditableMesh.EMeshModificationType
enum class EditableMesh_EMeshModificationType : uint8_t
{
	EMeshModificationType__FirstInterim = 0,
	EMeshModificationType__Interim = 1,
	EMeshModificationType__Final   = 2,
	EMeshModificationType__EMeshModificationType_MAX = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct EditableMesh.AdaptorPolygon2Group
// 0x0048
struct FAdaptorPolygon2Group
{
	uint32_t                                           RenderingSectionIndex;                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaterialIndex;                                             // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxTriangles;                                              // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9F7I[0x3C];                                    // 0x000C(0x003C) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EditableMesh.AdaptorTriangleID
// 0x0000 (0x0004 - 0x0004)
struct FAdaptorTriangleID : public FElementID
{

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EditableMesh.AdaptorPolygon
// 0x0018
struct FAdaptorPolygon
{
	struct FPolygonGroupID                             PolygonGroupID;                                            // 0x0000(0x0004) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4AX8[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FAdaptorTriangleID>                  TriangulatedPolygonTriangleIndices;                        // 0x0008(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EditableMesh.PolygonGroupForPolygon
// 0x0008
struct FPolygonGroupForPolygon
{
	struct FPolygonID                                  PolygonID;                                                 // 0x0000(0x0004) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPolygonGroupID                             PolygonGroupID;                                            // 0x0004(0x0004) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EditableMesh.MeshElementAttributeValue
// 0x0050
struct FMeshElementAttributeValue
{
	unsigned char                                      UnknownData_1AMI[0x50];                                    // 0x0000(0x0050) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EditableMesh.MeshElementAttributeData
// 0x0060
struct FMeshElementAttributeData
{
	struct FName                                       AttributeName;                                             // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AttributeIndex;                                            // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TPZ9[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMeshElementAttributeValue                  AttributeValue;                                            // 0x0010(0x0050) (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EditableMesh.MeshElementAttributeList
// 0x0010
struct FMeshElementAttributeList
{
	TArray<struct FMeshElementAttributeData>           Attributes;                                                // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EditableMesh.PolygonGroupToCreate
// 0x0018
struct FPolygonGroupToCreate
{
	struct FMeshElementAttributeList                   PolygonGroupAttributes;                                    // 0x0000(0x0010) (BlueprintVisible, NativeAccessSpecifierPublic)
	struct FPolygonGroupID                             OriginalPolygonGroupID;                                    // 0x0010(0x0004) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_D2GW[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EditableMesh.VertexToMove
// 0x0010
struct FVertexToMove
{
	struct FVertexID                                   VertexID;                                                  // 0x0000(0x0004) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     NewVertexPosition;                                         // 0x0004(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EditableMesh.VertexIndexAndInstanceID
// 0x0008
struct FVertexIndexAndInstanceID
{
	int                                                ContourIndex;                                              // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVertexInstanceID                           VertexInstanceID;                                          // 0x0004(0x0004) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EditableMesh.VertexInstancesForPolygonHole
// 0x0010
struct FVertexInstancesForPolygonHole
{
	TArray<struct FVertexIndexAndInstanceID>           VertexIndicesAndInstanceIDs;                               // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EditableMesh.ChangeVertexInstancesForPolygon
// 0x0028
struct FChangeVertexInstancesForPolygon
{
	struct FPolygonID                                  PolygonID;                                                 // 0x0000(0x0004) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4FFR[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FVertexIndexAndInstanceID>           PerimeterVertexIndicesAndInstanceIDs;                      // 0x0008(0x0010) (BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVertexInstancesForPolygonHole>      VertexIndicesAndInstanceIDsForEachHole;                    // 0x0018(0x0010) (BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EditableMesh.VertexAttributesForPolygonHole
// 0x0010
struct FVertexAttributesForPolygonHole
{
	TArray<struct FMeshElementAttributeList>           VertexAttributeList;                                       // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EditableMesh.VertexAttributesForPolygon
// 0x0028
struct FVertexAttributesForPolygon
{
	struct FPolygonID                                  PolygonID;                                                 // 0x0000(0x0004) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_36P0[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FMeshElementAttributeList>           PerimeterVertexAttributeLists;                             // 0x0008(0x0010) (BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVertexAttributesForPolygonHole>     VertexAttributeListsForEachHole;                           // 0x0018(0x0010) (BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EditableMesh.AttributesForEdge
// 0x0018
struct FAttributesForEdge
{
	struct FEdgeID                                     EdgeID;                                                    // 0x0000(0x0004) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XY3Q[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMeshElementAttributeList                   EdgeAttributes;                                            // 0x0008(0x0010) (BlueprintVisible, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EditableMesh.AttributesForVertexInstance
// 0x0018
struct FAttributesForVertexInstance
{
	struct FVertexInstanceID                           VertexInstanceID;                                          // 0x0000(0x0004) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Y09Z[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMeshElementAttributeList                   VertexInstanceAttributes;                                  // 0x0008(0x0010) (BlueprintVisible, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EditableMesh.AttributesForVertex
// 0x0018
struct FAttributesForVertex
{
	struct FVertexID                                   VertexID;                                                  // 0x0000(0x0004) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7WOS[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMeshElementAttributeList                   VertexAttributes;                                          // 0x0008(0x0010) (BlueprintVisible, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EditableMesh.VertexPair
// 0x0008
struct FVertexPair
{
	struct FVertexID                                   VertexID0;                                                 // 0x0000(0x0004) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVertexID                                   VertexID1;                                                 // 0x0004(0x0004) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EditableMesh.PolygonToSplit
// 0x0018
struct FPolygonToSplit
{
	struct FPolygonID                                  PolygonID;                                                 // 0x0000(0x0004) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TID8[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FVertexPair>                         VertexPairsToSplitAt;                                      // 0x0008(0x0010) (BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EditableMesh.VertexAndAttributes
// 0x0018
struct FVertexAndAttributes
{
	struct FVertexInstanceID                           VertexInstanceID;                                          // 0x0000(0x0004) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVertexID                                   VertexID;                                                  // 0x0004(0x0004) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMeshElementAttributeList                   PolygonVertexAttributes;                                   // 0x0008(0x0010) (BlueprintVisible, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EditableMesh.PolygonToCreate
// 0x0020
struct FPolygonToCreate
{
	struct FPolygonGroupID                             PolygonGroupID;                                            // 0x0000(0x0004) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_S9CA[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FVertexAndAttributes>                PerimeterVertices;                                         // 0x0008(0x0010) (BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FPolygonID                                  OriginalPolygonID;                                         // 0x0018(0x0004) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EditableMesh_EPolygonEdgeHardness                  PolygonEdgeHardness;                                       // 0x001C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3WK7[0x3];                                     // 0x001D(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EditableMesh.EdgeToCreate
// 0x0020
struct FEdgeToCreate
{
	struct FVertexID                                   VertexID0;                                                 // 0x0000(0x0004) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVertexID                                   VertexID1;                                                 // 0x0004(0x0004) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMeshElementAttributeList                   EdgeAttributes;                                            // 0x0008(0x0010) (BlueprintVisible, NativeAccessSpecifierPublic)
	struct FEdgeID                                     OriginalEdgeID;                                            // 0x0018(0x0004) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WNZC[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EditableMesh.VertexInstanceToCreate
// 0x0020
struct FVertexInstanceToCreate
{
	struct FVertexID                                   VertexID;                                                  // 0x0000(0x0004) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_K1OF[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMeshElementAttributeList                   VertexInstanceAttributes;                                  // 0x0008(0x0010) (BlueprintVisible, NativeAccessSpecifierPublic)
	struct FVertexInstanceID                           OriginalVertexInstanceID;                                  // 0x0018(0x0004) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CMVF[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EditableMesh.VertexToCreate
// 0x0018
struct FVertexToCreate
{
	struct FMeshElementAttributeList                   VertexAttributes;                                          // 0x0000(0x0010) (BlueprintVisible, NativeAccessSpecifierPublic)
	struct FVertexID                                   OriginalVertexID;                                          // 0x0010(0x0004) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_A8P7[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EditableMesh.SubdividedWireEdge
// 0x000C
struct FSubdividedWireEdge
{
	int                                                EdgeVertex0PositionIndex;                                  // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EdgeVertex1PositionIndex;                                  // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZQ1S[0x4];                                     // 0x0008(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EditableMesh.SubdividedQuadVertex
// 0x0034
struct FSubdividedQuadVertex
{
	int                                                VertexPositionIndex;                                       // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   TextureCoordinate0;                                        // 0x0004(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   TextureCoordinate1;                                        // 0x000C(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                      VertexColor;                                               // 0x0014(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     VertexNormal;                                              // 0x0018(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     VertexTangent;                                             // 0x0024(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              VertexBinormalSign;                                        // 0x0030(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EditableMesh.SubdividedQuad
// 0x00D0
struct FSubdividedQuad
{
	struct FSubdividedQuadVertex                       QuadVertex0;                                               // 0x0000(0x0034) (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FSubdividedQuadVertex                       QuadVertex1;                                               // 0x0034(0x0034) (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FSubdividedQuadVertex                       QuadVertex2;                                               // 0x0068(0x0034) (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FSubdividedQuadVertex                       QuadVertex3;                                               // 0x009C(0x0034) (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EditableMesh.SubdivisionLimitSection
// 0x0010
struct FSubdivisionLimitSection
{
	TArray<struct FSubdividedQuad>                     SubdividedQuads;                                           // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EditableMesh.SubdivisionLimitData
// 0x0030
struct FSubdivisionLimitData
{
	TArray<struct FVector>                             VertexPositions;                                           // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FSubdivisionLimitSection>            Sections;                                                  // 0x0010(0x0010) (BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FSubdividedWireEdge>                 SubdividedWireEdges;                                       // 0x0020(0x0010) (BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EditableMesh.RenderingPolygonGroup
// 0x0048
struct FRenderingPolygonGroup
{
	uint32_t                                           RenderingSectionIndex;                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaterialIndex;                                             // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxTriangles;                                              // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KHFY[0x3C];                                    // 0x000C(0x003C) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EditableMesh.RenderingPolygon
// 0x0018
struct FRenderingPolygon
{
	struct FPolygonGroupID                             PolygonGroupID;                                            // 0x0000(0x0004) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XYZG[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FTriangleID>                         TriangulatedPolygonTriangleIndices;                        // 0x0008(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
