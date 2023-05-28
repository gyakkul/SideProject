// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rigs/RigHierarchyCache.h"
#include "Rigs/RigHierarchyDefines.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigHierarchyCache() {}
// Cross Module References
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FCachedRigElement();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKey();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CachedRigElement;
class UScriptStruct* FCachedRigElement::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CachedRigElement.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CachedRigElement.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCachedRigElement, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("CachedRigElement"));
	}
	return Z_Registration_Info_UScriptStruct_CachedRigElement.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FCachedRigElement>()
{
	return FCachedRigElement::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCachedRigElement_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_Index;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContainerVersion_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ContainerVersion;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCachedRigElement_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyCache.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCachedRigElement_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCachedRigElement>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCachedRigElement_Statics::NewProp_Key_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyCache.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCachedRigElement_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCachedRigElement, Key), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FCachedRigElement_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedRigElement_Statics::NewProp_Key_MetaData)) }; // 2461395651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCachedRigElement_Statics::NewProp_Index_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyCache.h" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FCachedRigElement_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCachedRigElement, Index), METADATA_PARAMS(Z_Construct_UScriptStruct_FCachedRigElement_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedRigElement_Statics::NewProp_Index_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCachedRigElement_Statics::NewProp_ContainerVersion_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyCache.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCachedRigElement_Statics::NewProp_ContainerVersion = { "ContainerVersion", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCachedRigElement, ContainerVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FCachedRigElement_Statics::NewProp_ContainerVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedRigElement_Statics::NewProp_ContainerVersion_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCachedRigElement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCachedRigElement_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCachedRigElement_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCachedRigElement_Statics::NewProp_ContainerVersion,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCachedRigElement_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"CachedRigElement",
		sizeof(FCachedRigElement),
		alignof(FCachedRigElement),
		Z_Construct_UScriptStruct_FCachedRigElement_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedRigElement_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCachedRigElement_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedRigElement_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCachedRigElement()
	{
		if (!Z_Registration_Info_UScriptStruct_CachedRigElement.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CachedRigElement.InnerSingleton, Z_Construct_UScriptStruct_FCachedRigElement_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CachedRigElement.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyCache_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyCache_h_Statics::ScriptStructInfo[] = {
		{ FCachedRigElement::StaticStruct, Z_Construct_UScriptStruct_FCachedRigElement_Statics::NewStructOps, TEXT("CachedRigElement"), &Z_Registration_Info_UScriptStruct_CachedRigElement, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCachedRigElement), 861402166U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyCache_h_326139365(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyCache_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyCache_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
