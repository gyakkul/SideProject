// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataSourceFiltering.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataSourceFiltering() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
	SOURCEFILTERINGCORE_API UEnum* Z_Construct_UEnum_SourceFilteringCore_EFilterSetMode();
	SOURCEFILTERINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FActorClassFilter();
	UPackage* Z_Construct_UPackage__Script_SourceFilteringCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFilterSetMode;
	static UEnum* EFilterSetMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFilterSetMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFilterSetMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SourceFilteringCore_EFilterSetMode, (UObject*)Z_Construct_UPackage__Script_SourceFilteringCore(), TEXT("EFilterSetMode"));
		}
		return Z_Registration_Info_UEnum_EFilterSetMode.OuterSingleton;
	}
	template<> SOURCEFILTERINGCORE_API UEnum* StaticEnum<EFilterSetMode>()
	{
		return EFilterSetMode_StaticEnum();
	}
	struct Z_Construct_UEnum_SourceFilteringCore_EFilterSetMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SourceFilteringCore_EFilterSetMode_Statics::Enumerators[] = {
		{ "EFilterSetMode::AND", (int64)EFilterSetMode::AND },
		{ "EFilterSetMode::OR", (int64)EFilterSetMode::OR },
		{ "EFilterSetMode::NOT", (int64)EFilterSetMode::NOT },
		{ "EFilterSetMode::Count", (int64)EFilterSetMode::Count },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SourceFilteringCore_EFilterSetMode_Statics::Enum_MetaDataParams[] = {
		{ "AND.Name", "EFilterSetMode::AND" },
		{ "Comment", "/** Enum representing the possible Filter Set operations */" },
		{ "Count.Hidden", "" },
		{ "Count.Name", "EFilterSetMode::Count" },
		{ "ModuleRelativePath", "Public/DataSourceFiltering.h" },
		{ "NOT.Name", "EFilterSetMode::NOT" },
		{ "OR.Name", "EFilterSetMode::OR" },
		{ "ToolTip", "Enum representing the possible Filter Set operations" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SourceFilteringCore_EFilterSetMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SourceFilteringCore,
		nullptr,
		"EFilterSetMode",
		"EFilterSetMode",
		Z_Construct_UEnum_SourceFilteringCore_EFilterSetMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SourceFilteringCore_EFilterSetMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SourceFilteringCore_EFilterSetMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SourceFilteringCore_EFilterSetMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SourceFilteringCore_EFilterSetMode()
	{
		if (!Z_Registration_Info_UEnum_EFilterSetMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFilterSetMode.InnerSingleton, Z_Construct_UEnum_SourceFilteringCore_EFilterSetMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFilterSetMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActorClassFilter;
class UScriptStruct* FActorClassFilter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActorClassFilter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActorClassFilter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorClassFilter, (UObject*)Z_Construct_UPackage__Script_SourceFilteringCore(), TEXT("ActorClassFilter"));
	}
	return Z_Registration_Info_UScriptStruct_ActorClassFilter.OuterSingleton;
}
template<> SOURCEFILTERINGCORE_API UScriptStruct* StaticStruct<FActorClassFilter>()
{
	return FActorClassFilter::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FActorClassFilter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorClass_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActorClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeDerivedClasses_MetaData[];
#endif
		static void NewProp_bIncludeDerivedClasses_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeDerivedClasses;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorClassFilter_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** High-level filter structure used when filtering AActor instances to apply user filters to inside of a UWorld */" },
		{ "ModuleRelativePath", "Public/DataSourceFiltering.h" },
		{ "ToolTip", "High-level filter structure used when filtering AActor instances to apply user filters to inside of a UWorld" },
	};
#endif
	void* Z_Construct_UScriptStruct_FActorClassFilter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorClassFilter>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorClassFilter_Statics::NewProp_ActorClass_MetaData[] = {
		{ "Category", "TraceSourceFiltering" },
		{ "Comment", "/** Target actor class used when applying this filter */" },
		{ "ModuleRelativePath", "Public/DataSourceFiltering.h" },
		{ "ToolTip", "Target actor class used when applying this filter" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActorClassFilter_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FActorClassFilter, ActorClass), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorClassFilter_Statics::NewProp_ActorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorClassFilter_Statics::NewProp_ActorClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorClassFilter_Statics::NewProp_bIncludeDerivedClasses_MetaData[] = {
		{ "Category", "TraceSourceFiltering" },
		{ "Comment", "/** Flag as to whether or not any derived classes from ActorClass should also be considered when filtering */" },
		{ "ModuleRelativePath", "Public/DataSourceFiltering.h" },
		{ "ToolTip", "Flag as to whether or not any derived classes from ActorClass should also be considered when filtering" },
	};
#endif
	void Z_Construct_UScriptStruct_FActorClassFilter_Statics::NewProp_bIncludeDerivedClasses_SetBit(void* Obj)
	{
		((FActorClassFilter*)Obj)->bIncludeDerivedClasses = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FActorClassFilter_Statics::NewProp_bIncludeDerivedClasses = { "bIncludeDerivedClasses", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FActorClassFilter), &Z_Construct_UScriptStruct_FActorClassFilter_Statics::NewProp_bIncludeDerivedClasses_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorClassFilter_Statics::NewProp_bIncludeDerivedClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorClassFilter_Statics::NewProp_bIncludeDerivedClasses_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActorClassFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorClassFilter_Statics::NewProp_ActorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorClassFilter_Statics::NewProp_bIncludeDerivedClasses,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorClassFilter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SourceFilteringCore,
		nullptr,
		&NewStructOps,
		"ActorClassFilter",
		sizeof(FActorClassFilter),
		alignof(FActorClassFilter),
		Z_Construct_UScriptStruct_FActorClassFilter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorClassFilter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FActorClassFilter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorClassFilter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FActorClassFilter()
	{
		if (!Z_Registration_Info_UScriptStruct_ActorClassFilter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActorClassFilter.InnerSingleton, Z_Construct_UScriptStruct_FActorClassFilter_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ActorClassFilter.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_DataSourceFiltering_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_DataSourceFiltering_h_Statics::EnumInfo[] = {
		{ EFilterSetMode_StaticEnum, TEXT("EFilterSetMode"), &Z_Registration_Info_UEnum_EFilterSetMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4218951794U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_DataSourceFiltering_h_Statics::ScriptStructInfo[] = {
		{ FActorClassFilter::StaticStruct, Z_Construct_UScriptStruct_FActorClassFilter_Statics::NewStructOps, TEXT("ActorClassFilter"), &Z_Registration_Info_UScriptStruct_ActorClassFilter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActorClassFilter), 3782877489U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_DataSourceFiltering_h_2668591428(TEXT("/Script/SourceFilteringCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_DataSourceFiltering_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_DataSourceFiltering_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_DataSourceFiltering_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_DataSourceFiltering_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
