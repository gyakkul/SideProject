// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Public/Tests/FbxAutomationCommon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFbxAutomationCommon() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UNREALED_API UClass* Z_Construct_UClass_UFbxImportUI_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFbxTestPlan();
	UNREALED_API UClass* Z_Construct_UClass_UFbxTestPlan_NoRegister();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EFBXExpectedResultPreset();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EFBXTestPlanActionType();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFBXExpectedResultPreset;
	static UEnum* EFBXExpectedResultPreset_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFBXExpectedResultPreset.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFBXExpectedResultPreset.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_EFBXExpectedResultPreset, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("EFBXExpectedResultPreset"));
		}
		return Z_Registration_Info_UEnum_EFBXExpectedResultPreset.OuterSingleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<EFBXExpectedResultPreset>()
	{
		return EFBXExpectedResultPreset_StaticEnum();
	}
	struct Z_Construct_UEnum_UnrealEd_EFBXExpectedResultPreset_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UnrealEd_EFBXExpectedResultPreset_Statics::Enumerators[] = {
		{ "Error_Number", (int64)Error_Number },
		{ "Warning_Number", (int64)Warning_Number },
		{ "Created_Staticmesh_Number", (int64)Created_Staticmesh_Number },
		{ "Created_Skeletalmesh_Number", (int64)Created_Skeletalmesh_Number },
		{ "Materials_Created_Number", (int64)Materials_Created_Number },
		{ "Material_Slot_Imported_Name", (int64)Material_Slot_Imported_Name },
		{ "Vertex_Number", (int64)Vertex_Number },
		{ "Lod_Number", (int64)Lod_Number },
		{ "Vertex_Number_Lod", (int64)Vertex_Number_Lod },
		{ "Mesh_Materials_Number", (int64)Mesh_Materials_Number },
		{ "Mesh_LOD_Section_Number", (int64)Mesh_LOD_Section_Number },
		{ "Mesh_LOD_Section_Vertex_Number", (int64)Mesh_LOD_Section_Vertex_Number },
		{ "Mesh_LOD_Section_Triangle_Number", (int64)Mesh_LOD_Section_Triangle_Number },
		{ "Mesh_LOD_Section_Material_Name", (int64)Mesh_LOD_Section_Material_Name },
		{ "Mesh_LOD_Section_Material_Index", (int64)Mesh_LOD_Section_Material_Index },
		{ "Mesh_LOD_Section_Material_Imported_Name", (int64)Mesh_LOD_Section_Material_Imported_Name },
		{ "Mesh_LOD_Vertex_Position", (int64)Mesh_LOD_Vertex_Position },
		{ "Mesh_LOD_Vertex_Normal", (int64)Mesh_LOD_Vertex_Normal },
		{ "LOD_UV_Channel_Number", (int64)LOD_UV_Channel_Number },
		{ "Bone_Number", (int64)Bone_Number },
		{ "Bone_Position", (int64)Bone_Position },
		{ "Animation_Frame_Number", (int64)Animation_Frame_Number },
		{ "Animation_Length", (int64)Animation_Length },
		{ "Animation_CustomCurve_KeyValue", (int64)Animation_CustomCurve_KeyValue },
		{ "Animation_CustomCurve_KeyArriveTangent", (int64)Animation_CustomCurve_KeyArriveTangent },
		{ "Animation_CustomCurve_KeyLeaveTangent", (int64)Animation_CustomCurve_KeyLeaveTangent },
		{ "Skin_By_Bone_Vertex_Number", (int64)Skin_By_Bone_Vertex_Number },
		{ "Animation_CustomCurve_KeyArriveTangentWeight", (int64)Animation_CustomCurve_KeyArriveTangentWeight },
		{ "Animation_CustomCurve_KeyLeaveTangentWeight", (int64)Animation_CustomCurve_KeyLeaveTangentWeight },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UnrealEd_EFBXExpectedResultPreset_Statics::Enum_MetaDataParams[] = {
		{ "Animation_CustomCurve_KeyArriveTangent.Comment", "/** Data should contain the custom animation name [string0], key index [int0], and expected arriving tangent value [float0]*/" },
		{ "Animation_CustomCurve_KeyArriveTangent.Name", "Animation_CustomCurve_KeyArriveTangent" },
		{ "Animation_CustomCurve_KeyArriveTangent.ToolTip", "Data should contain the custom animation name [string0], key index [int0], and expected arriving tangent value [float0]" },
		{ "Animation_CustomCurve_KeyArriveTangentWeight.Comment", "/** Data should contain the custom animation name [string0], key index [int0], and expected arriving tangent weight value [float0]*/" },
		{ "Animation_CustomCurve_KeyArriveTangentWeight.Name", "Animation_CustomCurve_KeyArriveTangentWeight" },
		{ "Animation_CustomCurve_KeyArriveTangentWeight.ToolTip", "Data should contain the custom animation name [string0], key index [int0], and expected arriving tangent weight value [float0]" },
		{ "Animation_CustomCurve_KeyLeaveTangent.Comment", "/** Data should contain the custom animation name [string0], key index [int0], and expected leaving tangent value [float0]*/" },
		{ "Animation_CustomCurve_KeyLeaveTangent.Name", "Animation_CustomCurve_KeyLeaveTangent" },
		{ "Animation_CustomCurve_KeyLeaveTangent.ToolTip", "Data should contain the custom animation name [string0], key index [int0], and expected leaving tangent value [float0]" },
		{ "Animation_CustomCurve_KeyLeaveTangentWeight.Comment", "/** Data should contain the custom animation name [string0], key index [int0], and expected leaving tangent weight value [float0]*/" },
		{ "Animation_CustomCurve_KeyLeaveTangentWeight.Name", "Animation_CustomCurve_KeyLeaveTangentWeight" },
		{ "Animation_CustomCurve_KeyLeaveTangentWeight.ToolTip", "Data should contain the custom animation name [string0], key index [int0], and expected leaving tangent weight value [float0]" },
		{ "Animation_CustomCurve_KeyValue.Comment", "/** Data should contain the custom animation name [string0], key index [int0], and expected key value [float0]*/" },
		{ "Animation_CustomCurve_KeyValue.Name", "Animation_CustomCurve_KeyValue" },
		{ "Animation_CustomCurve_KeyValue.ToolTip", "Data should contain the custom animation name [string0], key index [int0], and expected key value [float0]" },
		{ "Animation_Frame_Number.Comment", "/** Data should contain the Number of Frame [int0]. */" },
		{ "Animation_Frame_Number.Name", "Animation_Frame_Number" },
		{ "Animation_Frame_Number.ToolTip", "Data should contain the Number of Frame [int0]." },
		{ "Animation_Length.Comment", "/** Data should contain the animation length [float0]. */" },
		{ "Animation_Length.Name", "Animation_Length" },
		{ "Animation_Length.ToolTip", "Data should contain the animation length [float0]." },
		{ "Bone_Number.Comment", "/** Data should contain the number of bone created [int0]. */" },
		{ "Bone_Number.Name", "Bone_Number" },
		{ "Bone_Number.ToolTip", "Data should contain the number of bone created [int0]." },
		{ "Bone_Position.Comment", "/** Data should contain the bone index [int0] and a position xyz [float0 float1 float2] optionnaly you can pass a tolerance [float3]. */" },
		{ "Bone_Position.Name", "Bone_Position" },
		{ "Bone_Position.ToolTip", "Data should contain the bone index [int0] and a position xyz [float0 float1 float2] optionnaly you can pass a tolerance [float3]." },
		{ "Comment", "/** Import mesh type */" },
		{ "Created_Skeletalmesh_Number.Comment", "/** Data should contain the number of skeletal mesh created [int0]. */" },
		{ "Created_Skeletalmesh_Number.Name", "Created_Skeletalmesh_Number" },
		{ "Created_Skeletalmesh_Number.ToolTip", "Data should contain the number of skeletal mesh created [int0]." },
		{ "Created_Staticmesh_Number.Comment", "/** Data should contain the number of static mesh created [int0]. */" },
		{ "Created_Staticmesh_Number.Name", "Created_Staticmesh_Number" },
		{ "Created_Staticmesh_Number.ToolTip", "Data should contain the number of static mesh created [int0]." },
		{ "Error_Number.Comment", "/** Data should contain the number of error [int0]. */" },
		{ "Error_Number.Name", "Error_Number" },
		{ "Error_Number.ToolTip", "Data should contain the number of error [int0]." },
		{ "Lod_Number.Comment", "/** Data should be the expected number of LOD [int0]. */" },
		{ "Lod_Number.Name", "Lod_Number" },
		{ "Lod_Number.ToolTip", "Data should be the expected number of LOD [int0]." },
		{ "LOD_UV_Channel_Number.Comment", "/** Data should be the LOD index [int0] and the number of UV channel [int1] for the specified LOD. */" },
		{ "LOD_UV_Channel_Number.Name", "LOD_UV_Channel_Number" },
		{ "LOD_UV_Channel_Number.ToolTip", "Data should be the LOD index [int0] and the number of UV channel [int1] for the specified LOD." },
		{ "Material_Slot_Imported_Name.Comment", "/** Data should be the slot index [int0], and the expected original imported material slot name [string0]. */" },
		{ "Material_Slot_Imported_Name.Name", "Material_Slot_Imported_Name" },
		{ "Material_Slot_Imported_Name.ToolTip", "Data should be the slot index [int0], and the expected original imported material slot name [string0]." },
		{ "Materials_Created_Number.Comment", "/** Data should contain the number of Material created [int0] under the target content folder. */" },
		{ "Materials_Created_Number.Name", "Materials_Created_Number" },
		{ "Materials_Created_Number.ToolTip", "Data should contain the number of Material created [int0] under the target content folder." },
		{ "Mesh_LOD_Section_Material_Imported_Name.Comment", "/** Data should be the LOD index [int0], section index [int1] and the expected original imported material slot name [string0]. */" },
		{ "Mesh_LOD_Section_Material_Imported_Name.Name", "Mesh_LOD_Section_Material_Imported_Name" },
		{ "Mesh_LOD_Section_Material_Imported_Name.ToolTip", "Data should be the LOD index [int0], section index [int1] and the expected original imported material slot name [string0]." },
		{ "Mesh_LOD_Section_Material_Index.Comment", "/** Data should be the LOD index [int0], section index [int1] and the expected material index of mesh materials [int2]. */" },
		{ "Mesh_LOD_Section_Material_Index.Name", "Mesh_LOD_Section_Material_Index" },
		{ "Mesh_LOD_Section_Material_Index.ToolTip", "Data should be the LOD index [int0], section index [int1] and the expected material index of mesh materials [int2]." },
		{ "Mesh_LOD_Section_Material_Name.Comment", "/** Data should be the LOD index [int0], section index [int1] and the expected name of material [string0]. */" },
		{ "Mesh_LOD_Section_Material_Name.Name", "Mesh_LOD_Section_Material_Name" },
		{ "Mesh_LOD_Section_Material_Name.ToolTip", "Data should be the LOD index [int0], section index [int1] and the expected name of material [string0]." },
		{ "Mesh_LOD_Section_Number.Comment", "/** Data should be the LOD index [int0] and the expected number of section for a mesh [int1]. */" },
		{ "Mesh_LOD_Section_Number.Name", "Mesh_LOD_Section_Number" },
		{ "Mesh_LOD_Section_Number.ToolTip", "Data should be the LOD index [int0] and the expected number of section for a mesh [int1]." },
		{ "Mesh_LOD_Section_Triangle_Number.Comment", "/** Data should be the LOD index [int0], section index [int1] and the expected number of triangle [int2]. */" },
		{ "Mesh_LOD_Section_Triangle_Number.Name", "Mesh_LOD_Section_Triangle_Number" },
		{ "Mesh_LOD_Section_Triangle_Number.ToolTip", "Data should be the LOD index [int0], section index [int1] and the expected number of triangle [int2]." },
		{ "Mesh_LOD_Section_Vertex_Number.Comment", "/** Data should be the LOD index [int0], section index [int1] and the expected number of vertex [int2]. */" },
		{ "Mesh_LOD_Section_Vertex_Number.Name", "Mesh_LOD_Section_Vertex_Number" },
		{ "Mesh_LOD_Section_Vertex_Number.ToolTip", "Data should be the LOD index [int0], section index [int1] and the expected number of vertex [int2]." },
		{ "Mesh_LOD_Vertex_Normal.Comment", "/** Data should be the LOD index [int0], vertex index [int1] and the expected normal of the vertex X[float0] Y[float1] Z[float2]. */" },
		{ "Mesh_LOD_Vertex_Normal.Name", "Mesh_LOD_Vertex_Normal" },
		{ "Mesh_LOD_Vertex_Normal.ToolTip", "Data should be the LOD index [int0], vertex index [int1] and the expected normal of the vertex X[float0] Y[float1] Z[float2]." },
		{ "Mesh_LOD_Vertex_Position.Comment", "/** Data should be the LOD index [int0], vertex index [int1] and the expected position of the vertex X[float0] Y[float1] Z[float2]. */" },
		{ "Mesh_LOD_Vertex_Position.Name", "Mesh_LOD_Vertex_Position" },
		{ "Mesh_LOD_Vertex_Position.ToolTip", "Data should be the LOD index [int0], vertex index [int1] and the expected position of the vertex X[float0] Y[float1] Z[float2]." },
		{ "Mesh_Materials_Number.Comment", "/** Data should contain the number of Material indexed by the mesh [int0]. */" },
		{ "Mesh_Materials_Number.Name", "Mesh_Materials_Number" },
		{ "Mesh_Materials_Number.ToolTip", "Data should contain the number of Material indexed by the mesh [int0]." },
		{ "ModuleRelativePath", "Public/Tests/FbxAutomationCommon.h" },
		{ "Skin_By_Bone_Vertex_Number.Comment", "/** Data should contain the bone name [string0], the switch to inspect a alternate profile (0 = no, 1 = yes) [int0] and the expected number of vertex skin by the specified bone [int1]*/" },
		{ "Skin_By_Bone_Vertex_Number.Name", "Skin_By_Bone_Vertex_Number" },
		{ "Skin_By_Bone_Vertex_Number.ToolTip", "Data should contain the bone name [string0], the switch to inspect a alternate profile (0 = no, 1 = yes) [int0] and the expected number of vertex skin by the specified bone [int1]" },
		{ "ToolTip", "Import mesh type" },
		{ "Vertex_Number.Comment", "/** Data should be the total number of vertex for all LOD [int0]. */" },
		{ "Vertex_Number.Name", "Vertex_Number" },
		{ "Vertex_Number.ToolTip", "Data should be the total number of vertex for all LOD [int0]." },
		{ "Vertex_Number_Lod.Comment", "/** Data should be the LOD index [int0] and total number of vertex for lod [int1]. */" },
		{ "Vertex_Number_Lod.Name", "Vertex_Number_Lod" },
		{ "Vertex_Number_Lod.ToolTip", "Data should be the LOD index [int0] and total number of vertex for lod [int1]." },
		{ "Warning_Number.Comment", "/** Data should contain the number of warning [int0]. */" },
		{ "Warning_Number.Name", "Warning_Number" },
		{ "Warning_Number.ToolTip", "Data should contain the number of warning [int0]." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UnrealEd_EFBXExpectedResultPreset_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		"EFBXExpectedResultPreset",
		"EFBXExpectedResultPreset",
		Z_Construct_UEnum_UnrealEd_EFBXExpectedResultPreset_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_EFBXExpectedResultPreset_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_UnrealEd_EFBXExpectedResultPreset_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_EFBXExpectedResultPreset_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UnrealEd_EFBXExpectedResultPreset()
	{
		if (!Z_Registration_Info_UEnum_EFBXExpectedResultPreset.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFBXExpectedResultPreset.InnerSingleton, Z_Construct_UEnum_UnrealEd_EFBXExpectedResultPreset_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFBXExpectedResultPreset.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFBXTestPlanActionType;
	static UEnum* EFBXTestPlanActionType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFBXTestPlanActionType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFBXTestPlanActionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_EFBXTestPlanActionType, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("EFBXTestPlanActionType"));
		}
		return Z_Registration_Info_UEnum_EFBXTestPlanActionType.OuterSingleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<EFBXTestPlanActionType>()
	{
		return EFBXTestPlanActionType_StaticEnum();
	}
	struct Z_Construct_UEnum_UnrealEd_EFBXTestPlanActionType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UnrealEd_EFBXTestPlanActionType_Statics::Enumerators[] = {
		{ "Import", (int64)Import },
		{ "Reimport", (int64)Reimport },
		{ "AddLOD", (int64)AddLOD },
		{ "ReimportLOD", (int64)ReimportLOD },
		{ "ImportReload", (int64)ImportReload },
		{ "AddAlternateSkinnig", (int64)AddAlternateSkinnig },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UnrealEd_EFBXTestPlanActionType_Statics::Enum_MetaDataParams[] = {
		{ "AddAlternateSkinnig.Comment", "/*Add alternate skinning to LOD 0, you must provide a \"_alt\" suffix file from the base import file*/" },
		{ "AddAlternateSkinnig.Name", "AddAlternateSkinnig" },
		{ "AddAlternateSkinnig.ToolTip", "Add alternate skinning to LOD 0, you must provide a \"_alt\" suffix file from the base import file" },
		{ "AddLOD.Comment", "/*Add a new LOD*/" },
		{ "AddLOD.Name", "AddLOD" },
		{ "AddLOD.ToolTip", "Add a new LOD" },
		{ "Comment", "/** Import mesh type */" },
		{ "Import.Comment", "/*Normal import*/" },
		{ "Import.Name", "Import" },
		{ "Import.ToolTip", "Normal import" },
		{ "ImportReload.Comment", "/*The fbx will be imported, package will be save, object will be delete from memory then reload from the saved package. This mode force a delete of the asset after the test, no reimport is possible after*/" },
		{ "ImportReload.Name", "ImportReload" },
		{ "ImportReload.ToolTip", "The fbx will be imported, package will be save, object will be delete from memory then reload from the saved package. This mode force a delete of the asset after the test, no reimport is possible after" },
		{ "ModuleRelativePath", "Public/Tests/FbxAutomationCommon.h" },
		{ "Reimport.Comment", "/*Re-import the previous import, this is mandatory to make an import before*/" },
		{ "Reimport.Name", "Reimport" },
		{ "Reimport.ToolTip", "Re-import the previous import, this is mandatory to make an import before" },
		{ "ReimportLOD.Comment", "/*Reimport an existing LOD*/" },
		{ "ReimportLOD.Name", "ReimportLOD" },
		{ "ReimportLOD.ToolTip", "Reimport an existing LOD" },
		{ "ToolTip", "Import mesh type" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UnrealEd_EFBXTestPlanActionType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		"EFBXTestPlanActionType",
		"EFBXTestPlanActionType",
		Z_Construct_UEnum_UnrealEd_EFBXTestPlanActionType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_EFBXTestPlanActionType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_UnrealEd_EFBXTestPlanActionType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_EFBXTestPlanActionType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UnrealEd_EFBXTestPlanActionType()
	{
		if (!Z_Registration_Info_UEnum_EFBXTestPlanActionType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFBXTestPlanActionType.InnerSingleton, Z_Construct_UEnum_UnrealEd_EFBXTestPlanActionType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFBXTestPlanActionType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FbxTestPlanExpectedResult;
class UScriptStruct* FFbxTestPlanExpectedResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FbxTestPlanExpectedResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FbxTestPlanExpectedResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("FbxTestPlanExpectedResult"));
	}
	return Z_Registration_Info_UScriptStruct_FbxTestPlanExpectedResult.OuterSingleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FFbxTestPlanExpectedResult>()
{
	return FFbxTestPlanExpectedResult::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExpectedPresetsType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ExpectedPresetsType;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ExpectedPresetsDataInteger_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExpectedPresetsDataInteger_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExpectedPresetsDataInteger;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExpectedPresetsDataFloat_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExpectedPresetsDataFloat_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExpectedPresetsDataFloat;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ExpectedPresetsDataDouble_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExpectedPresetsDataDouble_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExpectedPresetsDataDouble;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExpectedPresetsDataString_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExpectedPresetsDataString_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExpectedPresetsDataString;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Container for detailing collision automated test data.\n*/" },
		{ "ModuleRelativePath", "Public/Tests/FbxAutomationCommon.h" },
		{ "ToolTip", "Container for detailing collision automated test data." },
	};
#endif
	void* Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFbxTestPlanExpectedResult>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult_Statics::NewProp_ExpectedPresetsType_MetaData[] = {
		{ "Category", "ExpectedResult" },
		{ "Comment", "/*Expected preset type*/" },
		{ "ModuleRelativePath", "Public/Tests/FbxAutomationCommon.h" },
		{ "ToolTip", "Expected preset type" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult_Statics::NewProp_ExpectedPresetsType = { "ExpectedPresetsType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFbxTestPlanExpectedResult, ExpectedPresetsType), Z_Construct_UEnum_UnrealEd_EFBXExpectedResultPreset, METADATA_PARAMS(Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult_Statics::NewProp_ExpectedPresetsType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult_Statics::NewProp_ExpectedPresetsType_MetaData)) }; // 1334064989
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult_Statics::NewProp_ExpectedPresetsDataInteger_Inner = { "ExpectedPresetsDataInteger", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult_Statics::NewProp_ExpectedPresetsDataInteger_MetaData[] = {
		{ "Category", "ExpectedResult" },
		{ "Comment", "/*Expected preset data: integer */" },
		{ "ModuleRelativePath", "Public/Tests/FbxAutomationCommon.h" },
		{ "ToolTip", "Expected preset data: integer" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult_Statics::NewProp_ExpectedPresetsDataInteger = { "ExpectedPresetsDataInteger", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFbxTestPlanExpectedResult, ExpectedPresetsDataInteger), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult_Statics::NewProp_ExpectedPresetsDataInteger_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult_Statics::NewProp_ExpectedPresetsDataInteger_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult_Statics::NewProp_ExpectedPresetsDataFloat_Inner = { "ExpectedPresetsDataFloat", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult_Statics::NewProp_ExpectedPresetsDataFloat_MetaData[] = {
		{ "Category", "ExpectedResult" },
		{ "Comment", "/*Expected preset data: double */" },
		{ "ModuleRelativePath", "Public/Tests/FbxAutomationCommon.h" },
		{ "ToolTip", "Expected preset data: double" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult_Statics::NewProp_ExpectedPresetsDataFloat = { "ExpectedPresetsDataFloat", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFbxTestPlanExpectedResult, ExpectedPresetsDataFloat), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult_Statics::NewProp_ExpectedPresetsDataFloat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult_Statics::NewProp_ExpectedPresetsDataFloat_MetaData)) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult_Statics::NewProp_ExpectedPresetsDataDouble_Inner = { "ExpectedPresetsDataDouble", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult_Statics::NewProp_ExpectedPresetsDataDouble_MetaData[] = {
		{ "Category", "ExpectedResult" },
		{ "Comment", "/*Expected preset data: double */" },
		{ "ModuleRelativePath", "Public/Tests/FbxAutomationCommon.h" },
		{ "ToolTip", "Expected preset data: double" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult_Statics::NewProp_ExpectedPresetsDataDouble = { "ExpectedPresetsDataDouble", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFbxTestPlanExpectedResult, ExpectedPresetsDataDouble), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult_Statics::NewProp_ExpectedPresetsDataDouble_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult_Statics::NewProp_ExpectedPresetsDataDouble_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult_Statics::NewProp_ExpectedPresetsDataString_Inner = { "ExpectedPresetsDataString", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult_Statics::NewProp_ExpectedPresetsDataString_MetaData[] = {
		{ "Category", "ExpectedResult" },
		{ "Comment", "/*Expected preset data: string */" },
		{ "ModuleRelativePath", "Public/Tests/FbxAutomationCommon.h" },
		{ "ToolTip", "Expected preset data: string" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult_Statics::NewProp_ExpectedPresetsDataString = { "ExpectedPresetsDataString", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFbxTestPlanExpectedResult, ExpectedPresetsDataString), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult_Statics::NewProp_ExpectedPresetsDataString_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult_Statics::NewProp_ExpectedPresetsDataString_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult_Statics::NewProp_ExpectedPresetsType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult_Statics::NewProp_ExpectedPresetsDataInteger_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult_Statics::NewProp_ExpectedPresetsDataInteger,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult_Statics::NewProp_ExpectedPresetsDataFloat_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult_Statics::NewProp_ExpectedPresetsDataFloat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult_Statics::NewProp_ExpectedPresetsDataDouble_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult_Statics::NewProp_ExpectedPresetsDataDouble,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult_Statics::NewProp_ExpectedPresetsDataString_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult_Statics::NewProp_ExpectedPresetsDataString,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		&NewStructOps,
		"FbxTestPlanExpectedResult",
		sizeof(FFbxTestPlanExpectedResult),
		alignof(FFbxTestPlanExpectedResult),
		Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult()
	{
		if (!Z_Registration_Info_UScriptStruct_FbxTestPlanExpectedResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FbxTestPlanExpectedResult.InnerSingleton, Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FbxTestPlanExpectedResult.InnerSingleton;
	}
	void UFbxTestPlan::StaticRegisterNativesUFbxTestPlan()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFbxTestPlan);
	UClass* Z_Construct_UClass_UFbxTestPlan_NoRegister()
	{
		return UFbxTestPlan::StaticClass();
	}
	struct Z_Construct_UClass_UFbxTestPlan_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TestPlanName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TestPlanName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Action;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LodIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LodIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDeleteFolderAssets_MetaData[];
#endif
		static void NewProp_bDeleteFolderAssets_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeleteFolderAssets;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExpectedResult_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExpectedResult_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExpectedResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportUI_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ImportUI;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFbxTestPlan_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxTestPlan_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Container for detailing collision automated test data.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Tests/FbxAutomationCommon.h" },
		{ "ModuleRelativePath", "Public/Tests/FbxAutomationCommon.h" },
		{ "ToolTip", "Container for detailing collision automated test data." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxTestPlan_Statics::NewProp_TestPlanName_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/* Name of the Test Plan*/" },
		{ "ModuleRelativePath", "Public/Tests/FbxAutomationCommon.h" },
		{ "ToolTip", "Name of the Test Plan" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFbxTestPlan_Statics::NewProp_TestPlanName = { "TestPlanName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFbxTestPlan, TestPlanName), METADATA_PARAMS(Z_Construct_UClass_UFbxTestPlan_Statics::NewProp_TestPlanName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxTestPlan_Statics::NewProp_TestPlanName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxTestPlan_Statics::NewProp_Action_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/*Tell the system what we want to do*/" },
		{ "ModuleRelativePath", "Public/Tests/FbxAutomationCommon.h" },
		{ "ToolTip", "Tell the system what we want to do" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFbxTestPlan_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFbxTestPlan, Action), Z_Construct_UEnum_UnrealEd_EFBXTestPlanActionType, METADATA_PARAMS(Z_Construct_UClass_UFbxTestPlan_Statics::NewProp_Action_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxTestPlan_Statics::NewProp_Action_MetaData)) }; // 681648348
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxTestPlan_Statics::NewProp_LodIndex_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/*The LOD index in case the user choose to add or reimport a LOD*/" },
		{ "ModuleRelativePath", "Public/Tests/FbxAutomationCommon.h" },
		{ "ToolTip", "The LOD index in case the user choose to add or reimport a LOD" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFbxTestPlan_Statics::NewProp_LodIndex = { "LodIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFbxTestPlan, LodIndex), METADATA_PARAMS(Z_Construct_UClass_UFbxTestPlan_Statics::NewProp_LodIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxTestPlan_Statics::NewProp_LodIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxTestPlan_Statics::NewProp_bDeleteFolderAssets_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/*If true the test will delete all assets create in the import folder*/" },
		{ "ModuleRelativePath", "Public/Tests/FbxAutomationCommon.h" },
		{ "ToolTip", "If true the test will delete all assets create in the import folder" },
	};
#endif
	void Z_Construct_UClass_UFbxTestPlan_Statics::NewProp_bDeleteFolderAssets_SetBit(void* Obj)
	{
		((UFbxTestPlan*)Obj)->bDeleteFolderAssets = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxTestPlan_Statics::NewProp_bDeleteFolderAssets = { "bDeleteFolderAssets", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UFbxTestPlan), &Z_Construct_UClass_UFbxTestPlan_Statics::NewProp_bDeleteFolderAssets_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxTestPlan_Statics::NewProp_bDeleteFolderAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxTestPlan_Statics::NewProp_bDeleteFolderAssets_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFbxTestPlan_Statics::NewProp_ExpectedResult_Inner = { "ExpectedResult", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult, METADATA_PARAMS(nullptr, 0) }; // 824374996
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxTestPlan_Statics::NewProp_ExpectedResult_MetaData[] = {
		{ "Category", "ExpectedResult" },
		{ "Comment", "/*Expected preset type*/" },
		{ "ModuleRelativePath", "Public/Tests/FbxAutomationCommon.h" },
		{ "ToolTip", "Expected preset type" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFbxTestPlan_Statics::NewProp_ExpectedResult = { "ExpectedResult", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFbxTestPlan, ExpectedResult), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFbxTestPlan_Statics::NewProp_ExpectedResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxTestPlan_Statics::NewProp_ExpectedResult_MetaData)) }; // 824374996
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxTestPlan_Statics::NewProp_ImportUI_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/* Options use for this test plan, Transient because we manually serialize the options. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tests/FbxAutomationCommon.h" },
		{ "ToolTip", "Options use for this test plan, Transient because we manually serialize the options." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UFbxTestPlan_Statics::NewProp_ImportUI = { "ImportUI", nullptr, (EPropertyFlags)0x0016000000082009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFbxTestPlan, ImportUI), Z_Construct_UClass_UFbxImportUI_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFbxTestPlan_Statics::NewProp_ImportUI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxTestPlan_Statics::NewProp_ImportUI_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFbxTestPlan_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxTestPlan_Statics::NewProp_TestPlanName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxTestPlan_Statics::NewProp_Action,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxTestPlan_Statics::NewProp_LodIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxTestPlan_Statics::NewProp_bDeleteFolderAssets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxTestPlan_Statics::NewProp_ExpectedResult_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxTestPlan_Statics::NewProp_ExpectedResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxTestPlan_Statics::NewProp_ImportUI,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFbxTestPlan_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFbxTestPlan>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFbxTestPlan_Statics::ClassParams = {
		&UFbxTestPlan::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFbxTestPlan_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFbxTestPlan_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFbxTestPlan_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxTestPlan_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFbxTestPlan()
	{
		if (!Z_Registration_Info_UClass_UFbxTestPlan.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFbxTestPlan.OuterSingleton, Z_Construct_UClass_UFbxTestPlan_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFbxTestPlan.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UFbxTestPlan>()
	{
		return UFbxTestPlan::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFbxTestPlan);
	UFbxTestPlan::~UFbxTestPlan() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Tests_FbxAutomationCommon_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Tests_FbxAutomationCommon_h_Statics::EnumInfo[] = {
		{ EFBXExpectedResultPreset_StaticEnum, TEXT("EFBXExpectedResultPreset"), &Z_Registration_Info_UEnum_EFBXExpectedResultPreset, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1334064989U) },
		{ EFBXTestPlanActionType_StaticEnum, TEXT("EFBXTestPlanActionType"), &Z_Registration_Info_UEnum_EFBXTestPlanActionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 681648348U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Tests_FbxAutomationCommon_h_Statics::ScriptStructInfo[] = {
		{ FFbxTestPlanExpectedResult::StaticStruct, Z_Construct_UScriptStruct_FFbxTestPlanExpectedResult_Statics::NewStructOps, TEXT("FbxTestPlanExpectedResult"), &Z_Registration_Info_UScriptStruct_FbxTestPlanExpectedResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFbxTestPlanExpectedResult), 824374996U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Tests_FbxAutomationCommon_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFbxTestPlan, UFbxTestPlan::StaticClass, TEXT("UFbxTestPlan"), &Z_Registration_Info_UClass_UFbxTestPlan, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFbxTestPlan), 1746449637U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Tests_FbxAutomationCommon_h_510687651(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Tests_FbxAutomationCommon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Tests_FbxAutomationCommon_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Tests_FbxAutomationCommon_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Tests_FbxAutomationCommon_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Tests_FbxAutomationCommon_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Tests_FbxAutomationCommon_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
