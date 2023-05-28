// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ConcertHeaderRowUtils.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConcertHeaderRowUtils() {}
// Cross Module References
	CONCERTSHAREDSLATE_API UScriptStruct* Z_Construct_UScriptStruct_FColumnVisibilitySnapshot();
	UPackage* Z_Construct_UPackage__Script_ConcertSharedSlate();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ColumnVisibilitySnapshot;
class UScriptStruct* FColumnVisibilitySnapshot::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ColumnVisibilitySnapshot.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ColumnVisibilitySnapshot.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FColumnVisibilitySnapshot, (UObject*)Z_Construct_UPackage__Script_ConcertSharedSlate(), TEXT("ColumnVisibilitySnapshot"));
	}
	return Z_Registration_Info_UScriptStruct_ColumnVisibilitySnapshot.OuterSingleton;
}
template<> CONCERTSHAREDSLATE_API UScriptStruct* StaticStruct<FColumnVisibilitySnapshot>()
{
	return FColumnVisibilitySnapshot::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FColumnVisibilitySnapshot_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Snapshot_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Snapshot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColumnVisibilitySnapshot_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConcertHeaderRowUtils.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FColumnVisibilitySnapshot_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FColumnVisibilitySnapshot>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColumnVisibilitySnapshot_Statics::NewProp_Snapshot_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertHeaderRowUtils.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FColumnVisibilitySnapshot_Statics::NewProp_Snapshot = { "Snapshot", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FColumnVisibilitySnapshot, Snapshot), METADATA_PARAMS(Z_Construct_UScriptStruct_FColumnVisibilitySnapshot_Statics::NewProp_Snapshot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColumnVisibilitySnapshot_Statics::NewProp_Snapshot_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FColumnVisibilitySnapshot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColumnVisibilitySnapshot_Statics::NewProp_Snapshot,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FColumnVisibilitySnapshot_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertSharedSlate,
		nullptr,
		&NewStructOps,
		"ColumnVisibilitySnapshot",
		sizeof(FColumnVisibilitySnapshot),
		alignof(FColumnVisibilitySnapshot),
		Z_Construct_UScriptStruct_FColumnVisibilitySnapshot_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColumnVisibilitySnapshot_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FColumnVisibilitySnapshot_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColumnVisibilitySnapshot_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FColumnVisibilitySnapshot()
	{
		if (!Z_Registration_Info_UScriptStruct_ColumnVisibilitySnapshot.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ColumnVisibilitySnapshot.InnerSingleton, Z_Construct_UScriptStruct_FColumnVisibilitySnapshot_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ColumnVisibilitySnapshot.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertUI_ConcertSharedSlate_Source_ConcertSharedSlate_Public_ConcertHeaderRowUtils_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertUI_ConcertSharedSlate_Source_ConcertSharedSlate_Public_ConcertHeaderRowUtils_h_Statics::ScriptStructInfo[] = {
		{ FColumnVisibilitySnapshot::StaticStruct, Z_Construct_UScriptStruct_FColumnVisibilitySnapshot_Statics::NewStructOps, TEXT("ColumnVisibilitySnapshot"), &Z_Registration_Info_UScriptStruct_ColumnVisibilitySnapshot, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FColumnVisibilitySnapshot), 2652891390U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertUI_ConcertSharedSlate_Source_ConcertSharedSlate_Public_ConcertHeaderRowUtils_h_2337634272(TEXT("/Script/ConcertSharedSlate"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertUI_ConcertSharedSlate_Source_ConcertSharedSlate_Public_ConcertHeaderRowUtils_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertUI_ConcertSharedSlate_Source_ConcertSharedSlate_Public_ConcertHeaderRowUtils_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
