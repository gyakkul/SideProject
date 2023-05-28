// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IdentifierTable/ConcertIdentifierTableData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConcertIdentifierTableData() {}
// Cross Module References
	CONCERTTRANSPORT_API UScriptStruct* Z_Construct_UScriptStruct_FConcertLocalIdentifierState();
	UPackage* Z_Construct_UPackage__Script_ConcertTransport();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertLocalIdentifierState;
class UScriptStruct* FConcertLocalIdentifierState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertLocalIdentifierState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertLocalIdentifierState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertLocalIdentifierState, (UObject*)Z_Construct_UPackage__Script_ConcertTransport(), TEXT("ConcertLocalIdentifierState"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertLocalIdentifierState.OuterSingleton;
}
template<> CONCERTTRANSPORT_API UScriptStruct* StaticStruct<FConcertLocalIdentifierState>()
{
	return FConcertLocalIdentifierState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertLocalIdentifierState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStrPropertyParams NewProp_MappedNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MappedNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MappedNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertLocalIdentifierState_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IdentifierTable/ConcertIdentifierTableData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertLocalIdentifierState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertLocalIdentifierState>();
	}
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FConcertLocalIdentifierState_Statics::NewProp_MappedNames_Inner = { "MappedNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertLocalIdentifierState_Statics::NewProp_MappedNames_MetaData[] = {
		{ "ModuleRelativePath", "Public/IdentifierTable/ConcertIdentifierTableData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FConcertLocalIdentifierState_Statics::NewProp_MappedNames = { "MappedNames", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertLocalIdentifierState, MappedNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertLocalIdentifierState_Statics::NewProp_MappedNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertLocalIdentifierState_Statics::NewProp_MappedNames_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertLocalIdentifierState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertLocalIdentifierState_Statics::NewProp_MappedNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertLocalIdentifierState_Statics::NewProp_MappedNames,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertLocalIdentifierState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertTransport,
		nullptr,
		&NewStructOps,
		"ConcertLocalIdentifierState",
		sizeof(FConcertLocalIdentifierState),
		alignof(FConcertLocalIdentifierState),
		Z_Construct_UScriptStruct_FConcertLocalIdentifierState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertLocalIdentifierState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertLocalIdentifierState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertLocalIdentifierState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertLocalIdentifierState()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertLocalIdentifierState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertLocalIdentifierState.InnerSingleton, Z_Construct_UScriptStruct_FConcertLocalIdentifierState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertLocalIdentifierState.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertTransport_Public_IdentifierTable_ConcertIdentifierTableData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertTransport_Public_IdentifierTable_ConcertIdentifierTableData_h_Statics::ScriptStructInfo[] = {
		{ FConcertLocalIdentifierState::StaticStruct, Z_Construct_UScriptStruct_FConcertLocalIdentifierState_Statics::NewStructOps, TEXT("ConcertLocalIdentifierState"), &Z_Registration_Info_UScriptStruct_ConcertLocalIdentifierState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertLocalIdentifierState), 4033960254U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertTransport_Public_IdentifierTable_ConcertIdentifierTableData_h_3032686604(TEXT("/Script/ConcertTransport"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertTransport_Public_IdentifierTable_ConcertIdentifierTableData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertTransport_Public_IdentifierTable_ConcertIdentifierTableData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
