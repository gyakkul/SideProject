// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PoseCorrectivesAsset.h"
#include "RBF/RBFSolver.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePoseCorrectivesAsset() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FRBFParams();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	POSECORRECTIVES_API UClass* Z_Construct_UClass_UPoseCorrectivesAsset();
	POSECORRECTIVES_API UClass* Z_Construct_UClass_UPoseCorrectivesAsset_NoRegister();
	POSECORRECTIVES_API UScriptStruct* Z_Construct_UScriptStruct_FPoseCorrective();
	POSECORRECTIVES_API UScriptStruct* Z_Construct_UScriptStruct_FPoseGroupDefinition();
	UPackage* Z_Construct_UPackage__Script_PoseCorrectives();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PoseCorrective;
class UScriptStruct* FPoseCorrective::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PoseCorrective.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PoseCorrective.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPoseCorrective, (UObject*)Z_Construct_UPackage__Script_PoseCorrectives(), TEXT("PoseCorrective"));
	}
	return Z_Registration_Info_UScriptStruct_PoseCorrective.OuterSingleton;
}
template<> POSECORRECTIVES_API UScriptStruct* StaticStruct<FPoseCorrective>()
{
	return FPoseCorrective::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPoseCorrective_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_PoseLocal_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PoseLocal_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PoseLocal;
		static const UECodeGen_Private::FIntPropertyParams NewProp_DriverBoneIndices_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DriverBoneIndices_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_DriverBoneIndices;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurveData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CurveData;
		static const UECodeGen_Private::FIntPropertyParams NewProp_DriverCurveIndices_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DriverCurveIndices_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_DriverCurveIndices;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CorrectivePoseLocal_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CorrectivePoseLocal_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CorrectivePoseLocal;
		static const UECodeGen_Private::FIntPropertyParams NewProp_CorrectiveBoneIndices_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CorrectiveBoneIndices_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_CorrectiveBoneIndices;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CorrectiveCurvesDelta_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CorrectiveCurvesDelta_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CorrectiveCurvesDelta;
		static const UECodeGen_Private::FIntPropertyParams NewProp_CorrectiveCurveIndices_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CorrectiveCurveIndices_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_CorrectiveCurveIndices;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_GroupName;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseCorrective_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PoseCorrectivesAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPoseCorrective_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPoseCorrective>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPoseCorrective_Statics::NewProp_PoseLocal_Inner = { "PoseLocal", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseCorrective_Statics::NewProp_PoseLocal_MetaData[] = {
		{ "Comment", "// Local space pose\n" },
		{ "ModuleRelativePath", "Public/PoseCorrectivesAsset.h" },
		{ "ToolTip", "Local space pose" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPoseCorrective_Statics::NewProp_PoseLocal = { "PoseLocal", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPoseCorrective, PoseLocal), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseCorrective_Statics::NewProp_PoseLocal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseCorrective_Statics::NewProp_PoseLocal_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPoseCorrective_Statics::NewProp_DriverBoneIndices_ElementProp = { "DriverBoneIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseCorrective_Statics::NewProp_DriverBoneIndices_MetaData[] = {
		{ "Comment", "// Indices of bones that this particular corrective is being driven by\n" },
		{ "ModuleRelativePath", "Public/PoseCorrectivesAsset.h" },
		{ "ToolTip", "Indices of bones that this particular corrective is being driven by" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FPoseCorrective_Statics::NewProp_DriverBoneIndices = { "DriverBoneIndices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPoseCorrective, DriverBoneIndices), METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseCorrective_Statics::NewProp_DriverBoneIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseCorrective_Statics::NewProp_DriverBoneIndices_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPoseCorrective_Statics::NewProp_CurveData_Inner = { "CurveData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseCorrective_Statics::NewProp_CurveData_MetaData[] = {
		{ "Comment", "// Curve data\n" },
		{ "ModuleRelativePath", "Public/PoseCorrectivesAsset.h" },
		{ "ToolTip", "Curve data" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPoseCorrective_Statics::NewProp_CurveData = { "CurveData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPoseCorrective, CurveData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseCorrective_Statics::NewProp_CurveData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseCorrective_Statics::NewProp_CurveData_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPoseCorrective_Statics::NewProp_DriverCurveIndices_ElementProp = { "DriverCurveIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseCorrective_Statics::NewProp_DriverCurveIndices_MetaData[] = {
		{ "Comment", "// Indices of driver curves that this particular corrective is using\n" },
		{ "ModuleRelativePath", "Public/PoseCorrectivesAsset.h" },
		{ "ToolTip", "Indices of driver curves that this particular corrective is using" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FPoseCorrective_Statics::NewProp_DriverCurveIndices = { "DriverCurveIndices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPoseCorrective, DriverCurveIndices), METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseCorrective_Statics::NewProp_DriverCurveIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseCorrective_Statics::NewProp_DriverCurveIndices_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPoseCorrective_Statics::NewProp_CorrectivePoseLocal_Inner = { "CorrectivePoseLocal", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseCorrective_Statics::NewProp_CorrectivePoseLocal_MetaData[] = {
		{ "Comment", "// Corrective transform \n" },
		{ "ModuleRelativePath", "Public/PoseCorrectivesAsset.h" },
		{ "ToolTip", "Corrective transform" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPoseCorrective_Statics::NewProp_CorrectivePoseLocal = { "CorrectivePoseLocal", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPoseCorrective, CorrectivePoseLocal), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseCorrective_Statics::NewProp_CorrectivePoseLocal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseCorrective_Statics::NewProp_CorrectivePoseLocal_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPoseCorrective_Statics::NewProp_CorrectiveBoneIndices_ElementProp = { "CorrectiveBoneIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseCorrective_Statics::NewProp_CorrectiveBoneIndices_MetaData[] = {
		{ "Comment", "// Indices of bones that this particular corrective will apply to\n" },
		{ "ModuleRelativePath", "Public/PoseCorrectivesAsset.h" },
		{ "ToolTip", "Indices of bones that this particular corrective will apply to" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FPoseCorrective_Statics::NewProp_CorrectiveBoneIndices = { "CorrectiveBoneIndices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPoseCorrective, CorrectiveBoneIndices), METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseCorrective_Statics::NewProp_CorrectiveBoneIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseCorrective_Statics::NewProp_CorrectiveBoneIndices_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPoseCorrective_Statics::NewProp_CorrectiveCurvesDelta_Inner = { "CorrectiveCurvesDelta", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseCorrective_Statics::NewProp_CorrectiveCurvesDelta_MetaData[] = {
		{ "Comment", "// Delta to CurveData\n" },
		{ "ModuleRelativePath", "Public/PoseCorrectivesAsset.h" },
		{ "ToolTip", "Delta to CurveData" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPoseCorrective_Statics::NewProp_CorrectiveCurvesDelta = { "CorrectiveCurvesDelta", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPoseCorrective, CorrectiveCurvesDelta), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseCorrective_Statics::NewProp_CorrectiveCurvesDelta_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseCorrective_Statics::NewProp_CorrectiveCurvesDelta_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPoseCorrective_Statics::NewProp_CorrectiveCurveIndices_ElementProp = { "CorrectiveCurveIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseCorrective_Statics::NewProp_CorrectiveCurveIndices_MetaData[] = {
		{ "Comment", "// Indices of curves that this particular corrective will apply to\n" },
		{ "ModuleRelativePath", "Public/PoseCorrectivesAsset.h" },
		{ "ToolTip", "Indices of curves that this particular corrective will apply to" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FPoseCorrective_Statics::NewProp_CorrectiveCurveIndices = { "CorrectiveCurveIndices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPoseCorrective, CorrectiveCurveIndices), METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseCorrective_Statics::NewProp_CorrectiveCurveIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseCorrective_Statics::NewProp_CorrectiveCurveIndices_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseCorrective_Statics::NewProp_GroupName_MetaData[] = {
		{ "Comment", "// Group used to set indices\n" },
		{ "ModuleRelativePath", "Public/PoseCorrectivesAsset.h" },
		{ "ToolTip", "Group used to set indices" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPoseCorrective_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPoseCorrective, GroupName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseCorrective_Statics::NewProp_GroupName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseCorrective_Statics::NewProp_GroupName_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPoseCorrective_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseCorrective_Statics::NewProp_PoseLocal_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseCorrective_Statics::NewProp_PoseLocal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseCorrective_Statics::NewProp_DriverBoneIndices_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseCorrective_Statics::NewProp_DriverBoneIndices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseCorrective_Statics::NewProp_CurveData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseCorrective_Statics::NewProp_CurveData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseCorrective_Statics::NewProp_DriverCurveIndices_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseCorrective_Statics::NewProp_DriverCurveIndices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseCorrective_Statics::NewProp_CorrectivePoseLocal_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseCorrective_Statics::NewProp_CorrectivePoseLocal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseCorrective_Statics::NewProp_CorrectiveBoneIndices_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseCorrective_Statics::NewProp_CorrectiveBoneIndices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseCorrective_Statics::NewProp_CorrectiveCurvesDelta_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseCorrective_Statics::NewProp_CorrectiveCurvesDelta,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseCorrective_Statics::NewProp_CorrectiveCurveIndices_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseCorrective_Statics::NewProp_CorrectiveCurveIndices,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseCorrective_Statics::NewProp_GroupName,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPoseCorrective_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PoseCorrectives,
		nullptr,
		&NewStructOps,
		"PoseCorrective",
		sizeof(FPoseCorrective),
		alignof(FPoseCorrective),
		Z_Construct_UScriptStruct_FPoseCorrective_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseCorrective_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseCorrective_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseCorrective_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPoseCorrective()
	{
		if (!Z_Registration_Info_UScriptStruct_PoseCorrective.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PoseCorrective.InnerSingleton, Z_Construct_UScriptStruct_FPoseCorrective_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PoseCorrective.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PoseGroupDefinition;
class UScriptStruct* FPoseGroupDefinition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PoseGroupDefinition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PoseGroupDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPoseGroupDefinition, (UObject*)Z_Construct_UPackage__Script_PoseCorrectives(), TEXT("PoseGroupDefinition"));
	}
	return Z_Registration_Info_UScriptStruct_PoseGroupDefinition.OuterSingleton;
}
template<> POSECORRECTIVES_API UScriptStruct* StaticStruct<FPoseGroupDefinition>()
{
	return FPoseGroupDefinition::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPoseGroupDefinition_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FNamePropertyParams NewProp_DriverBones_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DriverBones_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DriverBones;
		static const UECodeGen_Private::FNamePropertyParams NewProp_DriverCurves_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DriverCurves_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DriverCurves;
		static const UECodeGen_Private::FNamePropertyParams NewProp_CorrectiveBones_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CorrectiveBones_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CorrectiveBones;
		static const UECodeGen_Private::FNamePropertyParams NewProp_CorrectiveCurves_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CorrectiveCurves_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CorrectiveCurves;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseGroupDefinition_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Predefines what bones/curves are used by the pose in the rbf/algorithm\n" },
		{ "ModuleRelativePath", "Public/PoseCorrectivesAsset.h" },
		{ "ToolTip", "Predefines what bones/curves are used by the pose in the rbf/algorithm" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPoseGroupDefinition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPoseGroupDefinition>();
	}
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPoseGroupDefinition_Statics::NewProp_DriverBones_Inner = { "DriverBones", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseGroupDefinition_Statics::NewProp_DriverBones_MetaData[] = {
		{ "ModuleRelativePath", "Public/PoseCorrectivesAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPoseGroupDefinition_Statics::NewProp_DriverBones = { "DriverBones", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPoseGroupDefinition, DriverBones), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseGroupDefinition_Statics::NewProp_DriverBones_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseGroupDefinition_Statics::NewProp_DriverBones_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPoseGroupDefinition_Statics::NewProp_DriverCurves_Inner = { "DriverCurves", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseGroupDefinition_Statics::NewProp_DriverCurves_MetaData[] = {
		{ "ModuleRelativePath", "Public/PoseCorrectivesAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPoseGroupDefinition_Statics::NewProp_DriverCurves = { "DriverCurves", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPoseGroupDefinition, DriverCurves), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseGroupDefinition_Statics::NewProp_DriverCurves_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseGroupDefinition_Statics::NewProp_DriverCurves_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPoseGroupDefinition_Statics::NewProp_CorrectiveBones_Inner = { "CorrectiveBones", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseGroupDefinition_Statics::NewProp_CorrectiveBones_MetaData[] = {
		{ "ModuleRelativePath", "Public/PoseCorrectivesAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPoseGroupDefinition_Statics::NewProp_CorrectiveBones = { "CorrectiveBones", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPoseGroupDefinition, CorrectiveBones), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseGroupDefinition_Statics::NewProp_CorrectiveBones_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseGroupDefinition_Statics::NewProp_CorrectiveBones_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPoseGroupDefinition_Statics::NewProp_CorrectiveCurves_Inner = { "CorrectiveCurves", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseGroupDefinition_Statics::NewProp_CorrectiveCurves_MetaData[] = {
		{ "ModuleRelativePath", "Public/PoseCorrectivesAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPoseGroupDefinition_Statics::NewProp_CorrectiveCurves = { "CorrectiveCurves", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPoseGroupDefinition, CorrectiveCurves), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseGroupDefinition_Statics::NewProp_CorrectiveCurves_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseGroupDefinition_Statics::NewProp_CorrectiveCurves_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPoseGroupDefinition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseGroupDefinition_Statics::NewProp_DriverBones_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseGroupDefinition_Statics::NewProp_DriverBones,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseGroupDefinition_Statics::NewProp_DriverCurves_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseGroupDefinition_Statics::NewProp_DriverCurves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseGroupDefinition_Statics::NewProp_CorrectiveBones_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseGroupDefinition_Statics::NewProp_CorrectiveBones,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseGroupDefinition_Statics::NewProp_CorrectiveCurves_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseGroupDefinition_Statics::NewProp_CorrectiveCurves,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPoseGroupDefinition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PoseCorrectives,
		nullptr,
		&NewStructOps,
		"PoseGroupDefinition",
		sizeof(FPoseGroupDefinition),
		alignof(FPoseGroupDefinition),
		Z_Construct_UScriptStruct_FPoseGroupDefinition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseGroupDefinition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseGroupDefinition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseGroupDefinition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPoseGroupDefinition()
	{
		if (!Z_Registration_Info_UScriptStruct_PoseGroupDefinition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PoseGroupDefinition.InnerSingleton, Z_Construct_UScriptStruct_FPoseGroupDefinition_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PoseGroupDefinition.InnerSingleton;
	}
	void UPoseCorrectivesAsset::StaticRegisterNativesUPoseCorrectivesAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPoseCorrectivesAsset);
	UClass* Z_Construct_UClass_UPoseCorrectivesAsset_NoRegister()
	{
		return UPoseCorrectivesAsset::StaticClass();
	}
	struct Z_Construct_UClass_UPoseCorrectivesAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PoseCorrectives_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_PoseCorrectives_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PoseCorrectives_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PoseCorrectives;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_GroupDefinitions_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_GroupDefinitions_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupDefinitions_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_GroupDefinitions;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TargetMesh;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourcePreviewMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SourcePreviewMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlRigBlueprint_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ControlRigBlueprint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceMeshOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceMeshOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceMeshScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SourceMeshScale;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RBFParams_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RBFParams;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPoseCorrectivesAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PoseCorrectives,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseCorrectivesAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n * Pose Correctives Asset\n */" },
		{ "IncludePath", "PoseCorrectivesAsset.h" },
		{ "ModuleRelativePath", "Public/PoseCorrectivesAsset.h" },
		{ "ToolTip", "* Pose Correctives Asset" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPoseCorrectivesAsset_Statics::NewProp_PoseCorrectives_ValueProp = { "PoseCorrectives", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FPoseCorrective, METADATA_PARAMS(nullptr, 0) }; // 1914135619
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPoseCorrectivesAsset_Statics::NewProp_PoseCorrectives_Key_KeyProp = { "PoseCorrectives_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseCorrectivesAsset_Statics::NewProp_PoseCorrectives_MetaData[] = {
		{ "Comment", "/** Animation Pose Data*/" },
		{ "ModuleRelativePath", "Public/PoseCorrectivesAsset.h" },
		{ "ToolTip", "Animation Pose Data" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPoseCorrectivesAsset_Statics::NewProp_PoseCorrectives = { "PoseCorrectives", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseCorrectivesAsset, PoseCorrectives), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPoseCorrectivesAsset_Statics::NewProp_PoseCorrectives_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseCorrectivesAsset_Statics::NewProp_PoseCorrectives_MetaData)) }; // 1914135619
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPoseCorrectivesAsset_Statics::NewProp_GroupDefinitions_ValueProp = { "GroupDefinitions", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FPoseGroupDefinition, METADATA_PARAMS(nullptr, 0) }; // 3068239423
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPoseCorrectivesAsset_Statics::NewProp_GroupDefinitions_Key_KeyProp = { "GroupDefinitions_Key", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseCorrectivesAsset_Statics::NewProp_GroupDefinitions_MetaData[] = {
		{ "Comment", "// Predefined groups stored here in editor mode for configuring groups in UI and applying to pose but runtime driver/corrective bones live with pose\n" },
		{ "ModuleRelativePath", "Public/PoseCorrectivesAsset.h" },
		{ "ToolTip", "Predefined groups stored here in editor mode for configuring groups in UI and applying to pose but runtime driver/corrective bones live with pose" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPoseCorrectivesAsset_Statics::NewProp_GroupDefinitions = { "GroupDefinitions", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseCorrectivesAsset, GroupDefinitions), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPoseCorrectivesAsset_Statics::NewProp_GroupDefinitions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseCorrectivesAsset_Statics::NewProp_GroupDefinitions_MetaData)) }; // 3068239423
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseCorrectivesAsset_Statics::NewProp_TargetMesh_MetaData[] = {
		{ "Category", "Rigs" },
		{ "ModuleRelativePath", "Public/PoseCorrectivesAsset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPoseCorrectivesAsset_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseCorrectivesAsset, TargetMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPoseCorrectivesAsset_Statics::NewProp_TargetMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseCorrectivesAsset_Statics::NewProp_TargetMesh_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseCorrectivesAsset_Statics::NewProp_SourcePreviewMesh_MetaData[] = {
		{ "Category", "Rigs" },
		{ "ModuleRelativePath", "Public/PoseCorrectivesAsset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPoseCorrectivesAsset_Statics::NewProp_SourcePreviewMesh = { "SourcePreviewMesh", nullptr, (EPropertyFlags)0x0014000800000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseCorrectivesAsset, SourcePreviewMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPoseCorrectivesAsset_Statics::NewProp_SourcePreviewMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseCorrectivesAsset_Statics::NewProp_SourcePreviewMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseCorrectivesAsset_Statics::NewProp_ControlRigBlueprint_MetaData[] = {
		{ "Category", "Rigs" },
		{ "ModuleRelativePath", "Public/PoseCorrectivesAsset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPoseCorrectivesAsset_Statics::NewProp_ControlRigBlueprint = { "ControlRigBlueprint", nullptr, (EPropertyFlags)0x0014000800000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseCorrectivesAsset, ControlRigBlueprint), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPoseCorrectivesAsset_Statics::NewProp_ControlRigBlueprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseCorrectivesAsset_Statics::NewProp_ControlRigBlueprint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseCorrectivesAsset_Statics::NewProp_SourceMeshOffset_MetaData[] = {
		{ "Category", "Rigs" },
		{ "ModuleRelativePath", "Public/PoseCorrectivesAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPoseCorrectivesAsset_Statics::NewProp_SourceMeshOffset = { "SourceMeshOffset", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseCorrectivesAsset, SourceMeshOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UPoseCorrectivesAsset_Statics::NewProp_SourceMeshOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseCorrectivesAsset_Statics::NewProp_SourceMeshOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseCorrectivesAsset_Statics::NewProp_SourceMeshScale_MetaData[] = {
		{ "Category", "Rigs" },
		{ "ModuleRelativePath", "Public/PoseCorrectivesAsset.h" },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.01" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPoseCorrectivesAsset_Statics::NewProp_SourceMeshScale = { "SourceMeshScale", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseCorrectivesAsset, SourceMeshScale), METADATA_PARAMS(Z_Construct_UClass_UPoseCorrectivesAsset_Statics::NewProp_SourceMeshScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseCorrectivesAsset_Statics::NewProp_SourceMeshScale_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseCorrectivesAsset_Statics::NewProp_RBFParams_MetaData[] = {
		{ "Category", "Solve" },
		{ "Comment", "// Default rbf params\n" },
		{ "ModuleRelativePath", "Public/PoseCorrectivesAsset.h" },
		{ "ToolTip", "Default rbf params" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPoseCorrectivesAsset_Statics::NewProp_RBFParams = { "RBFParams", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseCorrectivesAsset, RBFParams), Z_Construct_UScriptStruct_FRBFParams, METADATA_PARAMS(Z_Construct_UClass_UPoseCorrectivesAsset_Statics::NewProp_RBFParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseCorrectivesAsset_Statics::NewProp_RBFParams_MetaData)) }; // 637132977
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPoseCorrectivesAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseCorrectivesAsset_Statics::NewProp_PoseCorrectives_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseCorrectivesAsset_Statics::NewProp_PoseCorrectives_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseCorrectivesAsset_Statics::NewProp_PoseCorrectives,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseCorrectivesAsset_Statics::NewProp_GroupDefinitions_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseCorrectivesAsset_Statics::NewProp_GroupDefinitions_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseCorrectivesAsset_Statics::NewProp_GroupDefinitions,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseCorrectivesAsset_Statics::NewProp_TargetMesh,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseCorrectivesAsset_Statics::NewProp_SourcePreviewMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseCorrectivesAsset_Statics::NewProp_ControlRigBlueprint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseCorrectivesAsset_Statics::NewProp_SourceMeshOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseCorrectivesAsset_Statics::NewProp_SourceMeshScale,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseCorrectivesAsset_Statics::NewProp_RBFParams,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPoseCorrectivesAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPoseCorrectivesAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPoseCorrectivesAsset_Statics::ClassParams = {
		&UPoseCorrectivesAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPoseCorrectivesAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPoseCorrectivesAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPoseCorrectivesAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseCorrectivesAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPoseCorrectivesAsset()
	{
		if (!Z_Registration_Info_UClass_UPoseCorrectivesAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPoseCorrectivesAsset.OuterSingleton, Z_Construct_UClass_UPoseCorrectivesAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPoseCorrectivesAsset.OuterSingleton;
	}
	template<> POSECORRECTIVES_API UClass* StaticClass<UPoseCorrectivesAsset>()
	{
		return UPoseCorrectivesAsset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPoseCorrectivesAsset);
	UPoseCorrectivesAsset::~UPoseCorrectivesAsset() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseCorrectives_Source_PoseCorrectives_Public_PoseCorrectivesAsset_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseCorrectives_Source_PoseCorrectives_Public_PoseCorrectivesAsset_h_Statics::ScriptStructInfo[] = {
		{ FPoseCorrective::StaticStruct, Z_Construct_UScriptStruct_FPoseCorrective_Statics::NewStructOps, TEXT("PoseCorrective"), &Z_Registration_Info_UScriptStruct_PoseCorrective, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPoseCorrective), 1914135619U) },
		{ FPoseGroupDefinition::StaticStruct, Z_Construct_UScriptStruct_FPoseGroupDefinition_Statics::NewStructOps, TEXT("PoseGroupDefinition"), &Z_Registration_Info_UScriptStruct_PoseGroupDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPoseGroupDefinition), 3068239423U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseCorrectives_Source_PoseCorrectives_Public_PoseCorrectivesAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPoseCorrectivesAsset, UPoseCorrectivesAsset::StaticClass, TEXT("UPoseCorrectivesAsset"), &Z_Registration_Info_UClass_UPoseCorrectivesAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPoseCorrectivesAsset), 1652264027U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseCorrectives_Source_PoseCorrectives_Public_PoseCorrectivesAsset_h_1512386800(TEXT("/Script/PoseCorrectives"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseCorrectives_Source_PoseCorrectives_Public_PoseCorrectivesAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseCorrectives_Source_PoseCorrectives_Public_PoseCorrectivesAsset_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseCorrectives_Source_PoseCorrectives_Public_PoseCorrectivesAsset_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseCorrectives_Source_PoseCorrectives_Public_PoseCorrectivesAsset_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
