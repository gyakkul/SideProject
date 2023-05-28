// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Misc/DisplayClusterObjectRef.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisplayClusterObjectRef() {}
// Cross Module References
	DISPLAYCLUSTER_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterComponentRef();
	UPackage* Z_Construct_UPackage__Script_DisplayCluster();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterComponentRef;
class UScriptStruct* FDisplayClusterComponentRef::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterComponentRef.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterComponentRef.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterComponentRef, (UObject*)Z_Construct_UPackage__Script_DisplayCluster(), TEXT("DisplayClusterComponentRef"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterComponentRef.OuterSingleton;
}
template<> DISPLAYCLUSTER_API UScriptStruct* StaticStruct<FDisplayClusterComponentRef>()
{
	return FDisplayClusterComponentRef::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterComponentRef_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterComponentRef_Statics::Struct_MetaDataParams[] = {
		{ "HideChildren", "" },
		{ "ModuleRelativePath", "Public/Misc/DisplayClusterObjectRef.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterComponentRef_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterComponentRef>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterComponentRef_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Component" },
		{ "ModuleRelativePath", "Public/Misc/DisplayClusterObjectRef.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterComponentRef_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterComponentRef, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterComponentRef_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterComponentRef_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterComponentRef_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterComponentRef_Statics::NewProp_Name,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterComponentRef_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayCluster,
		nullptr,
		&NewStructOps,
		"DisplayClusterComponentRef",
		sizeof(FDisplayClusterComponentRef),
		alignof(FDisplayClusterComponentRef),
		Z_Construct_UScriptStruct_FDisplayClusterComponentRef_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterComponentRef_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterComponentRef_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterComponentRef_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterComponentRef()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterComponentRef.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterComponentRef.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterComponentRef_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterComponentRef.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Misc_DisplayClusterObjectRef_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Misc_DisplayClusterObjectRef_h_Statics::ScriptStructInfo[] = {
		{ FDisplayClusterComponentRef::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterComponentRef_Statics::NewStructOps, TEXT("DisplayClusterComponentRef"), &Z_Registration_Info_UScriptStruct_DisplayClusterComponentRef, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterComponentRef), 2520873510U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Misc_DisplayClusterObjectRef_h_2278593992(TEXT("/Script/DisplayCluster"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Misc_DisplayClusterObjectRef_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Misc_DisplayClusterObjectRef_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
