// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rigs/RigHierarchyContainer.h"
#include "Rigs/RigBoneHierarchy.h"
#include "Rigs/RigControlHierarchy.h"
#include "Rigs/RigCurveContainer.h"
#include "Rigs/RigSpaceHierarchy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigHierarchyContainer() {}
// Cross Module References
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigBoneHierarchy();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigControlHierarchy();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigCurveContainer();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigHierarchyContainer();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigHierarchyRef();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigSpaceHierarchy();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigHierarchyContainer;
class UScriptStruct* FRigHierarchyContainer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigHierarchyContainer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigHierarchyContainer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigHierarchyContainer, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigHierarchyContainer"));
	}
	return Z_Registration_Info_UScriptStruct_RigHierarchyContainer.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigHierarchyContainer>()
{
	return FRigHierarchyContainer::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigHierarchyContainer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneHierarchy_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoneHierarchy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpaceHierarchy_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpaceHierarchy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlHierarchy_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ControlHierarchy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveContainer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurveContainer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigHierarchyContainer_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyContainer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigHierarchyContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigHierarchyContainer>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigHierarchyContainer_Statics::NewProp_BoneHierarchy_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyContainer.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigHierarchyContainer_Statics::NewProp_BoneHierarchy = { "BoneHierarchy", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigHierarchyContainer, BoneHierarchy), Z_Construct_UScriptStruct_FRigBoneHierarchy, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigHierarchyContainer_Statics::NewProp_BoneHierarchy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigHierarchyContainer_Statics::NewProp_BoneHierarchy_MetaData)) }; // 2495941878
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigHierarchyContainer_Statics::NewProp_SpaceHierarchy_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyContainer.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigHierarchyContainer_Statics::NewProp_SpaceHierarchy = { "SpaceHierarchy", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigHierarchyContainer, SpaceHierarchy), Z_Construct_UScriptStruct_FRigSpaceHierarchy, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigHierarchyContainer_Statics::NewProp_SpaceHierarchy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigHierarchyContainer_Statics::NewProp_SpaceHierarchy_MetaData)) }; // 2330516979
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigHierarchyContainer_Statics::NewProp_ControlHierarchy_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyContainer.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigHierarchyContainer_Statics::NewProp_ControlHierarchy = { "ControlHierarchy", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigHierarchyContainer, ControlHierarchy), Z_Construct_UScriptStruct_FRigControlHierarchy, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigHierarchyContainer_Statics::NewProp_ControlHierarchy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigHierarchyContainer_Statics::NewProp_ControlHierarchy_MetaData)) }; // 2105972519
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigHierarchyContainer_Statics::NewProp_CurveContainer_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyContainer.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigHierarchyContainer_Statics::NewProp_CurveContainer = { "CurveContainer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigHierarchyContainer, CurveContainer), Z_Construct_UScriptStruct_FRigCurveContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigHierarchyContainer_Statics::NewProp_CurveContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigHierarchyContainer_Statics::NewProp_CurveContainer_MetaData)) }; // 3673889521
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigHierarchyContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigHierarchyContainer_Statics::NewProp_BoneHierarchy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigHierarchyContainer_Statics::NewProp_SpaceHierarchy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigHierarchyContainer_Statics::NewProp_ControlHierarchy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigHierarchyContainer_Statics::NewProp_CurveContainer,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigHierarchyContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"RigHierarchyContainer",
		sizeof(FRigHierarchyContainer),
		alignof(FRigHierarchyContainer),
		Z_Construct_UScriptStruct_FRigHierarchyContainer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigHierarchyContainer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigHierarchyContainer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigHierarchyContainer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigHierarchyContainer()
	{
		if (!Z_Registration_Info_UScriptStruct_RigHierarchyContainer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigHierarchyContainer.InnerSingleton, Z_Construct_UScriptStruct_FRigHierarchyContainer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigHierarchyContainer.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigHierarchyRef;
class UScriptStruct* FRigHierarchyRef::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigHierarchyRef.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigHierarchyRef.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigHierarchyRef, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigHierarchyRef"));
	}
	return Z_Registration_Info_UScriptStruct_RigHierarchyRef.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigHierarchyRef>()
{
	return FRigHierarchyRef::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigHierarchyRef_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigHierarchyRef_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// this struct is still here for backwards compatibility - but not used anywhere\n" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyContainer.h" },
		{ "ToolTip", "this struct is still here for backwards compatibility - but not used anywhere" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigHierarchyRef_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigHierarchyRef>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigHierarchyRef_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"RigHierarchyRef",
		sizeof(FRigHierarchyRef),
		alignof(FRigHierarchyRef),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigHierarchyRef_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigHierarchyRef_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigHierarchyRef()
	{
		if (!Z_Registration_Info_UScriptStruct_RigHierarchyRef.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigHierarchyRef.InnerSingleton, Z_Construct_UScriptStruct_FRigHierarchyRef_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigHierarchyRef.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyContainer_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyContainer_h_Statics::ScriptStructInfo[] = {
		{ FRigHierarchyContainer::StaticStruct, Z_Construct_UScriptStruct_FRigHierarchyContainer_Statics::NewStructOps, TEXT("RigHierarchyContainer"), &Z_Registration_Info_UScriptStruct_RigHierarchyContainer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigHierarchyContainer), 406125163U) },
		{ FRigHierarchyRef::StaticStruct, Z_Construct_UScriptStruct_FRigHierarchyRef_Statics::NewStructOps, TEXT("RigHierarchyRef"), &Z_Registration_Info_UScriptStruct_RigHierarchyRef, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigHierarchyRef), 3474422887U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyContainer_h_3958669265(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyContainer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyContainer_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
