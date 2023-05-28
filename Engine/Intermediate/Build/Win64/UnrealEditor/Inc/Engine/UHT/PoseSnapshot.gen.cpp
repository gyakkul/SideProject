// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/Animation/PoseSnapshot.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePoseSnapshot() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseSnapshot();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PoseSnapshot;
class UScriptStruct* FPoseSnapshot::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PoseSnapshot.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PoseSnapshot.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPoseSnapshot, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("PoseSnapshot"));
	}
	return Z_Registration_Info_UScriptStruct_PoseSnapshot.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPoseSnapshot>()
{
	return FPoseSnapshot::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPoseSnapshot_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalTransforms_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalTransforms_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LocalTransforms;
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneNames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SkeletalMeshName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SnapshotName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SnapshotName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsValid_MetaData[];
#endif
		static void NewProp_bIsValid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSnapshot_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** A pose for a skeletal mesh */" },
		{ "ModuleRelativePath", "Public/Animation/PoseSnapshot.h" },
		{ "ToolTip", "A pose for a skeletal mesh" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPoseSnapshot_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPoseSnapshot>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPoseSnapshot_Statics::NewProp_LocalTransforms_Inner = { "LocalTransforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSnapshot_Statics::NewProp_LocalTransforms_MetaData[] = {
		{ "Category", "Snapshot" },
		{ "Comment", "/** Array of transforms per-bone */" },
		{ "ModuleRelativePath", "Public/Animation/PoseSnapshot.h" },
		{ "ToolTip", "Array of transforms per-bone" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPoseSnapshot_Statics::NewProp_LocalTransforms = { "LocalTransforms", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPoseSnapshot, LocalTransforms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseSnapshot_Statics::NewProp_LocalTransforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSnapshot_Statics::NewProp_LocalTransforms_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPoseSnapshot_Statics::NewProp_BoneNames_Inner = { "BoneNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSnapshot_Statics::NewProp_BoneNames_MetaData[] = {
		{ "Category", "Snapshot" },
		{ "Comment", "/** Array of bone names (corresponding to LocalTransforms) */" },
		{ "ModuleRelativePath", "Public/Animation/PoseSnapshot.h" },
		{ "ToolTip", "Array of bone names (corresponding to LocalTransforms)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPoseSnapshot_Statics::NewProp_BoneNames = { "BoneNames", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPoseSnapshot, BoneNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseSnapshot_Statics::NewProp_BoneNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSnapshot_Statics::NewProp_BoneNames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSnapshot_Statics::NewProp_SkeletalMeshName_MetaData[] = {
		{ "Category", "Snapshot" },
		{ "Comment", "/** The name of the skeletal mesh that was used to take this snapshot */" },
		{ "ModuleRelativePath", "Public/Animation/PoseSnapshot.h" },
		{ "ToolTip", "The name of the skeletal mesh that was used to take this snapshot" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPoseSnapshot_Statics::NewProp_SkeletalMeshName = { "SkeletalMeshName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPoseSnapshot, SkeletalMeshName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseSnapshot_Statics::NewProp_SkeletalMeshName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSnapshot_Statics::NewProp_SkeletalMeshName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSnapshot_Statics::NewProp_SnapshotName_MetaData[] = {
		{ "Category", "Snapshot" },
		{ "Comment", "/** The name for this snapshot*/" },
		{ "ModuleRelativePath", "Public/Animation/PoseSnapshot.h" },
		{ "ToolTip", "The name for this snapshot" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPoseSnapshot_Statics::NewProp_SnapshotName = { "SnapshotName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPoseSnapshot, SnapshotName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseSnapshot_Statics::NewProp_SnapshotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSnapshot_Statics::NewProp_SnapshotName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSnapshot_Statics::NewProp_bIsValid_MetaData[] = {
		{ "Category", "Snapshot" },
		{ "Comment", "/** Whether the pose is valid */" },
		{ "ModuleRelativePath", "Public/Animation/PoseSnapshot.h" },
		{ "ToolTip", "Whether the pose is valid" },
	};
#endif
	void Z_Construct_UScriptStruct_FPoseSnapshot_Statics::NewProp_bIsValid_SetBit(void* Obj)
	{
		((FPoseSnapshot*)Obj)->bIsValid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPoseSnapshot_Statics::NewProp_bIsValid = { "bIsValid", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPoseSnapshot), &Z_Construct_UScriptStruct_FPoseSnapshot_Statics::NewProp_bIsValid_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseSnapshot_Statics::NewProp_bIsValid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSnapshot_Statics::NewProp_bIsValid_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPoseSnapshot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSnapshot_Statics::NewProp_LocalTransforms_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSnapshot_Statics::NewProp_LocalTransforms,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSnapshot_Statics::NewProp_BoneNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSnapshot_Statics::NewProp_BoneNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSnapshot_Statics::NewProp_SkeletalMeshName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSnapshot_Statics::NewProp_SnapshotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSnapshot_Statics::NewProp_bIsValid,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPoseSnapshot_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"PoseSnapshot",
		sizeof(FPoseSnapshot),
		alignof(FPoseSnapshot),
		Z_Construct_UScriptStruct_FPoseSnapshot_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSnapshot_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseSnapshot_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSnapshot_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPoseSnapshot()
	{
		if (!Z_Registration_Info_UScriptStruct_PoseSnapshot.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PoseSnapshot.InnerSingleton, Z_Construct_UScriptStruct_FPoseSnapshot_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PoseSnapshot.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_PoseSnapshot_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_PoseSnapshot_h_Statics::ScriptStructInfo[] = {
		{ FPoseSnapshot::StaticStruct, Z_Construct_UScriptStruct_FPoseSnapshot_Statics::NewStructOps, TEXT("PoseSnapshot"), &Z_Registration_Info_UScriptStruct_PoseSnapshot, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPoseSnapshot), 2909787229U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_PoseSnapshot_h_77944270(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_PoseSnapshot_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_PoseSnapshot_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
