// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IKRigSkeleton.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIKRigSkeleton() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	IKRIG_API UScriptStruct* Z_Construct_UScriptStruct_FIKRigInputSkeleton();
	IKRIG_API UScriptStruct* Z_Construct_UScriptStruct_FIKRigSkeleton();
	UPackage* Z_Construct_UPackage__Script_IKRig();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_IKRigInputSkeleton;
class UScriptStruct* FIKRigInputSkeleton::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_IKRigInputSkeleton.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_IKRigInputSkeleton.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIKRigInputSkeleton, (UObject*)Z_Construct_UPackage__Script_IKRig(), TEXT("IKRigInputSkeleton"));
	}
	return Z_Registration_Info_UScriptStruct_IKRigInputSkeleton.OuterSingleton;
}
template<> IKRIG_API UScriptStruct* StaticStruct<FIKRigInputSkeleton>()
{
	return FIKRigInputSkeleton::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FIKRigInputSkeleton_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIKRigInputSkeleton_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Data used just to initialize an IKRigSkeleton from outside systems\n *\n * The input skeleton may be different than the skeleton that the IK Rig asset was created for, within some limits.\n * 1. It must have all the Bones that the IK Rig asset referenced (must be a sub-set)\n * 2. All the bones must have the same parents (no change in hierarchy)\n *\n * You can however add additional bones, change the reference pose (including proportions) and the bone indices.\n * This allows you to run the same IK Rig asset on somewhat different skeletal meshes.\n *\n * To validate compatibility use UIKRigProcess::IsIKRigCompatibleWithSkeleton()\n */" },
		{ "ModuleRelativePath", "Public/IKRigSkeleton.h" },
		{ "ToolTip", "Data used just to initialize an IKRigSkeleton from outside systems\n\nThe input skeleton may be different than the skeleton that the IK Rig asset was created for, within some limits.\n1. It must have all the Bones that the IK Rig asset referenced (must be a sub-set)\n2. All the bones must have the same parents (no change in hierarchy)\n\nYou can however add additional bones, change the reference pose (including proportions) and the bone indices.\nThis allows you to run the same IK Rig asset on somewhat different skeletal meshes.\n\nTo validate compatibility use UIKRigProcess::IsIKRigCompatibleWithSkeleton()" },
	};
#endif
	void* Z_Construct_UScriptStruct_FIKRigInputSkeleton_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIKRigInputSkeleton>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIKRigInputSkeleton_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IKRig,
		nullptr,
		&NewStructOps,
		"IKRigInputSkeleton",
		sizeof(FIKRigInputSkeleton),
		alignof(FIKRigInputSkeleton),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FIKRigInputSkeleton_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIKRigInputSkeleton_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FIKRigInputSkeleton()
	{
		if (!Z_Registration_Info_UScriptStruct_IKRigInputSkeleton.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_IKRigInputSkeleton.InnerSingleton, Z_Construct_UScriptStruct_FIKRigInputSkeleton_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_IKRigInputSkeleton.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_IKRigSkeleton;
class UScriptStruct* FIKRigSkeleton::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_IKRigSkeleton.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_IKRigSkeleton.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIKRigSkeleton, (UObject*)Z_Construct_UPackage__Script_IKRig(), TEXT("IKRigSkeleton"));
	}
	return Z_Registration_Info_UScriptStruct_IKRigSkeleton.OuterSingleton;
}
template<> IKRIG_API UScriptStruct* StaticStruct<FIKRigSkeleton>()
{
	return FIKRigSkeleton::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FIKRigSkeleton_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneNames;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ParentIndices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentIndices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ParentIndices;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ExcludedBones_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExcludedBones_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExcludedBones;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentPoseGlobal_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPoseGlobal_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CurrentPoseGlobal;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentPoseLocal_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPoseLocal_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CurrentPoseLocal;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RefPoseGlobal_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RefPoseGlobal_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RefPoseGlobal;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIKRigSkeleton_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IKRigSkeleton.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FIKRigSkeleton_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIKRigSkeleton>();
	}
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FIKRigSkeleton_Statics::NewProp_BoneNames_Inner = { "BoneNames", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIKRigSkeleton_Statics::NewProp_BoneNames_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "Comment", "/** Names of bones. Used to match hierarchy with runtime skeleton. */" },
		{ "ModuleRelativePath", "Public/IKRigSkeleton.h" },
		{ "ToolTip", "Names of bones. Used to match hierarchy with runtime skeleton." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FIKRigSkeleton_Statics::NewProp_BoneNames = { "BoneNames", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FIKRigSkeleton, BoneNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FIKRigSkeleton_Statics::NewProp_BoneNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIKRigSkeleton_Statics::NewProp_BoneNames_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FIKRigSkeleton_Statics::NewProp_ParentIndices_Inner = { "ParentIndices", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIKRigSkeleton_Statics::NewProp_ParentIndices_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "Comment", "/** Same length as BoneNames, stores index of parent for each bone. */" },
		{ "ModuleRelativePath", "Public/IKRigSkeleton.h" },
		{ "ToolTip", "Same length as BoneNames, stores index of parent for each bone." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FIKRigSkeleton_Statics::NewProp_ParentIndices = { "ParentIndices", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FIKRigSkeleton, ParentIndices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FIKRigSkeleton_Statics::NewProp_ParentIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIKRigSkeleton_Statics::NewProp_ParentIndices_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FIKRigSkeleton_Statics::NewProp_ExcludedBones_Inner = { "ExcludedBones", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIKRigSkeleton_Statics::NewProp_ExcludedBones_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "Comment", "/** Sparse array of bones that are to be excluded from any solvers (parented around, treated as FK children). */" },
		{ "ModuleRelativePath", "Public/IKRigSkeleton.h" },
		{ "ToolTip", "Sparse array of bones that are to be excluded from any solvers (parented around, treated as FK children)." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FIKRigSkeleton_Statics::NewProp_ExcludedBones = { "ExcludedBones", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FIKRigSkeleton, ExcludedBones), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FIKRigSkeleton_Statics::NewProp_ExcludedBones_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIKRigSkeleton_Statics::NewProp_ExcludedBones_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIKRigSkeleton_Statics::NewProp_CurrentPoseGlobal_Inner = { "CurrentPoseGlobal", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIKRigSkeleton_Statics::NewProp_CurrentPoseGlobal_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "Comment", "/** The current GLOBAL space pose of each bone. */" },
		{ "ModuleRelativePath", "Public/IKRigSkeleton.h" },
		{ "ToolTip", "The current GLOBAL space pose of each bone." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FIKRigSkeleton_Statics::NewProp_CurrentPoseGlobal = { "CurrentPoseGlobal", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FIKRigSkeleton, CurrentPoseGlobal), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FIKRigSkeleton_Statics::NewProp_CurrentPoseGlobal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIKRigSkeleton_Statics::NewProp_CurrentPoseGlobal_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIKRigSkeleton_Statics::NewProp_CurrentPoseLocal_Inner = { "CurrentPoseLocal", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIKRigSkeleton_Statics::NewProp_CurrentPoseLocal_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "Comment", "/** The current LOCAL space pose of each bone. */" },
		{ "ModuleRelativePath", "Public/IKRigSkeleton.h" },
		{ "ToolTip", "The current LOCAL space pose of each bone." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FIKRigSkeleton_Statics::NewProp_CurrentPoseLocal = { "CurrentPoseLocal", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FIKRigSkeleton, CurrentPoseLocal), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FIKRigSkeleton_Statics::NewProp_CurrentPoseLocal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIKRigSkeleton_Statics::NewProp_CurrentPoseLocal_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIKRigSkeleton_Statics::NewProp_RefPoseGlobal_Inner = { "RefPoseGlobal", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIKRigSkeleton_Statics::NewProp_RefPoseGlobal_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "Comment", "/** The initial/reference GLOBAL space pose of each bone. */" },
		{ "ModuleRelativePath", "Public/IKRigSkeleton.h" },
		{ "ToolTip", "The initial/reference GLOBAL space pose of each bone." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FIKRigSkeleton_Statics::NewProp_RefPoseGlobal = { "RefPoseGlobal", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FIKRigSkeleton, RefPoseGlobal), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FIKRigSkeleton_Statics::NewProp_RefPoseGlobal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIKRigSkeleton_Statics::NewProp_RefPoseGlobal_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIKRigSkeleton_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIKRigSkeleton_Statics::NewProp_BoneNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIKRigSkeleton_Statics::NewProp_BoneNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIKRigSkeleton_Statics::NewProp_ParentIndices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIKRigSkeleton_Statics::NewProp_ParentIndices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIKRigSkeleton_Statics::NewProp_ExcludedBones_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIKRigSkeleton_Statics::NewProp_ExcludedBones,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIKRigSkeleton_Statics::NewProp_CurrentPoseGlobal_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIKRigSkeleton_Statics::NewProp_CurrentPoseGlobal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIKRigSkeleton_Statics::NewProp_CurrentPoseLocal_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIKRigSkeleton_Statics::NewProp_CurrentPoseLocal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIKRigSkeleton_Statics::NewProp_RefPoseGlobal_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIKRigSkeleton_Statics::NewProp_RefPoseGlobal,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIKRigSkeleton_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IKRig,
		nullptr,
		&NewStructOps,
		"IKRigSkeleton",
		sizeof(FIKRigSkeleton),
		alignof(FIKRigSkeleton),
		Z_Construct_UScriptStruct_FIKRigSkeleton_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIKRigSkeleton_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FIKRigSkeleton_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIKRigSkeleton_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FIKRigSkeleton()
	{
		if (!Z_Registration_Info_UScriptStruct_IKRigSkeleton.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_IKRigSkeleton.InnerSingleton, Z_Construct_UScriptStruct_FIKRigSkeleton_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_IKRigSkeleton.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_IKRigSkeleton_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_IKRigSkeleton_h_Statics::ScriptStructInfo[] = {
		{ FIKRigInputSkeleton::StaticStruct, Z_Construct_UScriptStruct_FIKRigInputSkeleton_Statics::NewStructOps, TEXT("IKRigInputSkeleton"), &Z_Registration_Info_UScriptStruct_IKRigInputSkeleton, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIKRigInputSkeleton), 4203058900U) },
		{ FIKRigSkeleton::StaticStruct, Z_Construct_UScriptStruct_FIKRigSkeleton_Statics::NewStructOps, TEXT("IKRigSkeleton"), &Z_Registration_Info_UScriptStruct_IKRigSkeleton, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIKRigSkeleton), 2842946516U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_IKRigSkeleton_h_266161400(TEXT("/Script/IKRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_IKRigSkeleton_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_IKRigSkeleton_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
