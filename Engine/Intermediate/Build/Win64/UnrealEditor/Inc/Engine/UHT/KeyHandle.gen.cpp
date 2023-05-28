// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Curves/KeyHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKeyHandle() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FKeyHandleLookupTable();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FKeyHandleMap();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_KeyHandleMap;
class UScriptStruct* FKeyHandleMap::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_KeyHandleMap.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_KeyHandleMap.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FKeyHandleMap, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("KeyHandleMap"));
	}
	return Z_Registration_Info_UScriptStruct_KeyHandleMap.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FKeyHandleMap>()
{
	return FKeyHandleMap::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FKeyHandleMap_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyHandleMap_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Represents a mapping of key handles to key index that may be serialized \n */" },
		{ "ModuleRelativePath", "Classes/Curves/KeyHandle.h" },
		{ "ToolTip", "Represents a mapping of key handles to key index that may be serialized" },
	};
#endif
	void* Z_Construct_UScriptStruct_FKeyHandleMap_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKeyHandleMap>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKeyHandleMap_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"KeyHandleMap",
		sizeof(FKeyHandleMap),
		alignof(FKeyHandleMap),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyHandleMap_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyHandleMap_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FKeyHandleMap()
	{
		if (!Z_Registration_Info_UScriptStruct_KeyHandleMap.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_KeyHandleMap.InnerSingleton, Z_Construct_UScriptStruct_FKeyHandleMap_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_KeyHandleMap.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_KeyHandleLookupTable;
class UScriptStruct* FKeyHandleLookupTable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_KeyHandleLookupTable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_KeyHandleLookupTable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FKeyHandleLookupTable, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("KeyHandleLookupTable"));
	}
	return Z_Registration_Info_UScriptStruct_KeyHandleLookupTable.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FKeyHandleLookupTable>()
{
	return FKeyHandleLookupTable::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FKeyHandleLookupTable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyHandleLookupTable_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Lookup table that maps key handles to indices in an external data structure\n * Maintains a map of key handle to last known index,\n * and an array of optional key handles that's used to validate map entries.\n */" },
		{ "ModuleRelativePath", "Classes/Curves/KeyHandle.h" },
		{ "ToolTip", "Lookup table that maps key handles to indices in an external data structure\nMaintains a map of key handle to last known index,\nand an array of optional key handles that's used to validate map entries." },
	};
#endif
	void* Z_Construct_UScriptStruct_FKeyHandleLookupTable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKeyHandleLookupTable>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKeyHandleLookupTable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"KeyHandleLookupTable",
		sizeof(FKeyHandleLookupTable),
		alignof(FKeyHandleLookupTable),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyHandleLookupTable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyHandleLookupTable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FKeyHandleLookupTable()
	{
		if (!Z_Registration_Info_UScriptStruct_KeyHandleLookupTable.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_KeyHandleLookupTable.InnerSingleton, Z_Construct_UScriptStruct_FKeyHandleLookupTable_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_KeyHandleLookupTable.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_KeyHandle_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_KeyHandle_h_Statics::ScriptStructInfo[] = {
		{ FKeyHandleMap::StaticStruct, Z_Construct_UScriptStruct_FKeyHandleMap_Statics::NewStructOps, TEXT("KeyHandleMap"), &Z_Registration_Info_UScriptStruct_KeyHandleMap, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FKeyHandleMap), 3184147471U) },
		{ FKeyHandleLookupTable::StaticStruct, Z_Construct_UScriptStruct_FKeyHandleLookupTable_Statics::NewStructOps, TEXT("KeyHandleLookupTable"), &Z_Registration_Info_UScriptStruct_KeyHandleLookupTable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FKeyHandleLookupTable), 960431857U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_KeyHandle_h_3676406490(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_KeyHandle_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_KeyHandle_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
