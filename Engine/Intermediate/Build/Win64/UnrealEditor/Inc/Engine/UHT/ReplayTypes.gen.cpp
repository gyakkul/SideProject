// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/ReplayTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReplayTypes() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLevelNameAndTime();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LevelNameAndTime;
class UScriptStruct* FLevelNameAndTime::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LevelNameAndTime.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LevelNameAndTime.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelNameAndTime, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("LevelNameAndTime"));
	}
	return Z_Registration_Info_UScriptStruct_LevelNameAndTime.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FLevelNameAndTime>()
{
	return FLevelNameAndTime::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLevelNameAndTime_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LevelName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelChangeTimeInMS_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_LevelChangeTimeInMS;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReplayTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelNameAndTime>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::NewProp_LevelName_MetaData[] = {
		{ "ModuleRelativePath", "Public/ReplayTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::NewProp_LevelName = { "LevelName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLevelNameAndTime, LevelName), METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::NewProp_LevelName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::NewProp_LevelName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::NewProp_LevelChangeTimeInMS_MetaData[] = {
		{ "ModuleRelativePath", "Public/ReplayTypes.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::NewProp_LevelChangeTimeInMS = { "LevelChangeTimeInMS", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLevelNameAndTime, LevelChangeTimeInMS), METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::NewProp_LevelChangeTimeInMS_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::NewProp_LevelChangeTimeInMS_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::NewProp_LevelName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::NewProp_LevelChangeTimeInMS,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"LevelNameAndTime",
		sizeof(FLevelNameAndTime),
		alignof(FLevelNameAndTime),
		Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLevelNameAndTime()
	{
		if (!Z_Registration_Info_UScriptStruct_LevelNameAndTime.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LevelNameAndTime.InnerSingleton, Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LevelNameAndTime.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ReplayTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ReplayTypes_h_Statics::ScriptStructInfo[] = {
		{ FLevelNameAndTime::StaticStruct, Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::NewStructOps, TEXT("LevelNameAndTime"), &Z_Registration_Info_UScriptStruct_LevelNameAndTime, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLevelNameAndTime), 2912835321U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ReplayTypes_h_3482533027(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ReplayTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ReplayTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
