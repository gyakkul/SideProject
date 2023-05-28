// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LevelSequenceLegacyObjectReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelSequenceLegacyObjectReference() {}
// Cross Module References
	LEVELSEQUENCE_API UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceLegacyObjectReference();
	LEVELSEQUENCE_API UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceObjectReferenceMap();
	UPackage* Z_Construct_UPackage__Script_LevelSequence();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LevelSequenceLegacyObjectReference;
class UScriptStruct* FLevelSequenceLegacyObjectReference::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LevelSequenceLegacyObjectReference.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LevelSequenceLegacyObjectReference.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelSequenceLegacyObjectReference, (UObject*)Z_Construct_UPackage__Script_LevelSequence(), TEXT("LevelSequenceLegacyObjectReference"));
	}
	return Z_Registration_Info_UScriptStruct_LevelSequenceLegacyObjectReference.OuterSingleton;
}
template<> LEVELSEQUENCE_API UScriptStruct* StaticStruct<FLevelSequenceLegacyObjectReference>()
{
	return FLevelSequenceLegacyObjectReference::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLevelSequenceLegacyObjectReference_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequenceLegacyObjectReference_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Legacy method by which objects were referenced within a level sequence. No longer used. See FLevelSequenceBindingReference for up-to-date implementation.\n */" },
		{ "ModuleRelativePath", "Public/LevelSequenceLegacyObjectReference.h" },
		{ "ToolTip", "Legacy method by which objects were referenced within a level sequence. No longer used. See FLevelSequenceBindingReference for up-to-date implementation." },
	};
#endif
	void* Z_Construct_UScriptStruct_FLevelSequenceLegacyObjectReference_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelSequenceLegacyObjectReference>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLevelSequenceLegacyObjectReference_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
		nullptr,
		&NewStructOps,
		"LevelSequenceLegacyObjectReference",
		sizeof(FLevelSequenceLegacyObjectReference),
		alignof(FLevelSequenceLegacyObjectReference),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequenceLegacyObjectReference_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceLegacyObjectReference_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceLegacyObjectReference()
	{
		if (!Z_Registration_Info_UScriptStruct_LevelSequenceLegacyObjectReference.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LevelSequenceLegacyObjectReference.InnerSingleton, Z_Construct_UScriptStruct_FLevelSequenceLegacyObjectReference_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LevelSequenceLegacyObjectReference.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LevelSequenceObjectReferenceMap;
class UScriptStruct* FLevelSequenceObjectReferenceMap::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LevelSequenceObjectReferenceMap.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LevelSequenceObjectReferenceMap.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelSequenceObjectReferenceMap, (UObject*)Z_Construct_UPackage__Script_LevelSequence(), TEXT("LevelSequenceObjectReferenceMap"));
	}
	return Z_Registration_Info_UScriptStruct_LevelSequenceObjectReferenceMap.OuterSingleton;
}
template<> LEVELSEQUENCE_API UScriptStruct* StaticStruct<FLevelSequenceObjectReferenceMap>()
{
	return FLevelSequenceObjectReferenceMap::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLevelSequenceObjectReferenceMap_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequenceObjectReferenceMap_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelSequenceLegacyObjectReference.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLevelSequenceObjectReferenceMap_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelSequenceObjectReferenceMap>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLevelSequenceObjectReferenceMap_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
		nullptr,
		&NewStructOps,
		"LevelSequenceObjectReferenceMap",
		sizeof(FLevelSequenceObjectReferenceMap),
		alignof(FLevelSequenceObjectReferenceMap),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequenceObjectReferenceMap_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceObjectReferenceMap_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceObjectReferenceMap()
	{
		if (!Z_Registration_Info_UScriptStruct_LevelSequenceObjectReferenceMap.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LevelSequenceObjectReferenceMap.InnerSingleton, Z_Construct_UScriptStruct_FLevelSequenceObjectReferenceMap_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LevelSequenceObjectReferenceMap.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceLegacyObjectReference_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceLegacyObjectReference_h_Statics::ScriptStructInfo[] = {
		{ FLevelSequenceLegacyObjectReference::StaticStruct, Z_Construct_UScriptStruct_FLevelSequenceLegacyObjectReference_Statics::NewStructOps, TEXT("LevelSequenceLegacyObjectReference"), &Z_Registration_Info_UScriptStruct_LevelSequenceLegacyObjectReference, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLevelSequenceLegacyObjectReference), 23623614U) },
		{ FLevelSequenceObjectReferenceMap::StaticStruct, Z_Construct_UScriptStruct_FLevelSequenceObjectReferenceMap_Statics::NewStructOps, TEXT("LevelSequenceObjectReferenceMap"), &Z_Registration_Info_UScriptStruct_LevelSequenceObjectReferenceMap, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLevelSequenceObjectReferenceMap), 795270803U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceLegacyObjectReference_h_2275074010(TEXT("/Script/LevelSequence"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceLegacyObjectReference_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceLegacyObjectReference_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
