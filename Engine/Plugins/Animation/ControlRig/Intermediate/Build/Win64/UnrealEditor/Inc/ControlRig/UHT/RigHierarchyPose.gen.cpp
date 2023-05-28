// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rigs/RigHierarchyPose.h"
#include "Rigs/RigHierarchyCache.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigHierarchyPose() {}
// Cross Module References
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FCachedRigElement();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigPose();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigPoseElement();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigPoseElement;
class UScriptStruct* FRigPoseElement::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigPoseElement.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigPoseElement.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigPoseElement, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigPoseElement"));
	}
	return Z_Registration_Info_UScriptStruct_RigPoseElement.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigPoseElement>()
{
	return FRigPoseElement::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigPoseElement_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlobalTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GlobalTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurveValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigPoseElement_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyPose.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigPoseElement_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigPoseElement>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigPoseElement_Statics::NewProp_Index_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyPose.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigPoseElement_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigPoseElement, Index), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigPoseElement_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigPoseElement_Statics::NewProp_Index_MetaData)) }; // 861402166
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigPoseElement_Statics::NewProp_GlobalTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyPose.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigPoseElement_Statics::NewProp_GlobalTransform = { "GlobalTransform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigPoseElement, GlobalTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigPoseElement_Statics::NewProp_GlobalTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigPoseElement_Statics::NewProp_GlobalTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigPoseElement_Statics::NewProp_LocalTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyPose.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigPoseElement_Statics::NewProp_LocalTransform = { "LocalTransform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigPoseElement, LocalTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigPoseElement_Statics::NewProp_LocalTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigPoseElement_Statics::NewProp_LocalTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigPoseElement_Statics::NewProp_CurveValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyPose.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigPoseElement_Statics::NewProp_CurveValue = { "CurveValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigPoseElement, CurveValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigPoseElement_Statics::NewProp_CurveValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigPoseElement_Statics::NewProp_CurveValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigPoseElement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigPoseElement_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigPoseElement_Statics::NewProp_GlobalTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigPoseElement_Statics::NewProp_LocalTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigPoseElement_Statics::NewProp_CurveValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigPoseElement_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"RigPoseElement",
		sizeof(FRigPoseElement),
		alignof(FRigPoseElement),
		Z_Construct_UScriptStruct_FRigPoseElement_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigPoseElement_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigPoseElement_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigPoseElement_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigPoseElement()
	{
		if (!Z_Registration_Info_UScriptStruct_RigPoseElement.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigPoseElement.InnerSingleton, Z_Construct_UScriptStruct_FRigPoseElement_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigPoseElement.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigPose;
class UScriptStruct* FRigPose::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigPose.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigPose.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigPose, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigPose"));
	}
	return Z_Registration_Info_UScriptStruct_RigPose.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigPose>()
{
	return FRigPose::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigPose_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Elements_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Elements_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Elements;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HierarchyTopologyVersion_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_HierarchyTopologyVersion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PoseHash_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PoseHash;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigPose_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyPose.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigPose_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigPose>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigPose_Statics::NewProp_Elements_Inner = { "Elements", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigPoseElement, METADATA_PARAMS(nullptr, 0) }; // 3422398653
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigPose_Statics::NewProp_Elements_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyPose.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigPose_Statics::NewProp_Elements = { "Elements", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigPose, Elements), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigPose_Statics::NewProp_Elements_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigPose_Statics::NewProp_Elements_MetaData)) }; // 3422398653
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigPose_Statics::NewProp_HierarchyTopologyVersion_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyPose.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigPose_Statics::NewProp_HierarchyTopologyVersion = { "HierarchyTopologyVersion", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigPose, HierarchyTopologyVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigPose_Statics::NewProp_HierarchyTopologyVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigPose_Statics::NewProp_HierarchyTopologyVersion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigPose_Statics::NewProp_PoseHash_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyPose.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigPose_Statics::NewProp_PoseHash = { "PoseHash", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigPose, PoseHash), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigPose_Statics::NewProp_PoseHash_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigPose_Statics::NewProp_PoseHash_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigPose_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigPose_Statics::NewProp_Elements_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigPose_Statics::NewProp_Elements,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigPose_Statics::NewProp_HierarchyTopologyVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigPose_Statics::NewProp_PoseHash,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigPose_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"RigPose",
		sizeof(FRigPose),
		alignof(FRigPose),
		Z_Construct_UScriptStruct_FRigPose_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigPose_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigPose_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigPose_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigPose()
	{
		if (!Z_Registration_Info_UScriptStruct_RigPose.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigPose.InnerSingleton, Z_Construct_UScriptStruct_FRigPose_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigPose.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyPose_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyPose_h_Statics::ScriptStructInfo[] = {
		{ FRigPoseElement::StaticStruct, Z_Construct_UScriptStruct_FRigPoseElement_Statics::NewStructOps, TEXT("RigPoseElement"), &Z_Registration_Info_UScriptStruct_RigPoseElement, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigPoseElement), 3422398653U) },
		{ FRigPose::StaticStruct, Z_Construct_UScriptStruct_FRigPose_Statics::NewStructOps, TEXT("RigPose"), &Z_Registration_Info_UScriptStruct_RigPose, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigPose), 1272709228U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyPose_h_667201503(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyPose_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyPose_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
