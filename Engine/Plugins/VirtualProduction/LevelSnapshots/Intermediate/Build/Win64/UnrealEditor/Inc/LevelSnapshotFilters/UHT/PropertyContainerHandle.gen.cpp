// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PropertyContainerHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePropertyContainerHandle() {}
// Cross Module References
	LEVELSNAPSHOTFILTERS_API UScriptStruct* Z_Construct_UScriptStruct_FPropertyContainerHandle();
	UPackage* Z_Construct_UPackage__Script_LevelSnapshotFilters();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PropertyContainerHandle;
class UScriptStruct* FPropertyContainerHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PropertyContainerHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PropertyContainerHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPropertyContainerHandle, (UObject*)Z_Construct_UPackage__Script_LevelSnapshotFilters(), TEXT("PropertyContainerHandle"));
	}
	return Z_Registration_Info_UScriptStruct_PropertyContainerHandle.OuterSingleton;
}
template<> LEVELSNAPSHOTFILTERS_API UScriptStruct* StaticStruct<FPropertyContainerHandle>()
{
	return FPropertyContainerHandle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPropertyContainerHandle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyContainerHandle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/* Blueprint wrapper for FProperty containers */" },
		{ "ModuleRelativePath", "Public/PropertyContainerHandle.h" },
		{ "ToolTip", "Blueprint wrapper for FProperty containers" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPropertyContainerHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPropertyContainerHandle>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPropertyContainerHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSnapshotFilters,
		nullptr,
		&NewStructOps,
		"PropertyContainerHandle",
		sizeof(FPropertyContainerHandle),
		alignof(FPropertyContainerHandle),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyContainerHandle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyContainerHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPropertyContainerHandle()
	{
		if (!Z_Registration_Info_UScriptStruct_PropertyContainerHandle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PropertyContainerHandle.InnerSingleton, Z_Construct_UScriptStruct_FPropertyContainerHandle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PropertyContainerHandle.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_PropertyContainerHandle_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_PropertyContainerHandle_h_Statics::ScriptStructInfo[] = {
		{ FPropertyContainerHandle::StaticStruct, Z_Construct_UScriptStruct_FPropertyContainerHandle_Statics::NewStructOps, TEXT("PropertyContainerHandle"), &Z_Registration_Info_UScriptStruct_PropertyContainerHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPropertyContainerHandle), 1532387083U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_PropertyContainerHandle_h_2316945959(TEXT("/Script/LevelSnapshotFilters"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_PropertyContainerHandle_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_PropertyContainerHandle_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
