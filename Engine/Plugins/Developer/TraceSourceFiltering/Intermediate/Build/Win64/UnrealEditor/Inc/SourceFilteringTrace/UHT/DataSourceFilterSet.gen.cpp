// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataSourceFilterSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataSourceFilterSet() {}
// Cross Module References
	SOURCEFILTERINGCORE_API UClass* Z_Construct_UClass_UDataSourceFilterSetInterface_NoRegister();
	SOURCEFILTERINGCORE_API UEnum* Z_Construct_UEnum_SourceFilteringCore_EFilterSetMode();
	SOURCEFILTERINGTRACE_API UClass* Z_Construct_UClass_UDataSourceFilter();
	SOURCEFILTERINGTRACE_API UClass* Z_Construct_UClass_UDataSourceFilter_NoRegister();
	SOURCEFILTERINGTRACE_API UClass* Z_Construct_UClass_UDataSourceFilterSet();
	SOURCEFILTERINGTRACE_API UClass* Z_Construct_UClass_UDataSourceFilterSet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SourceFilteringTrace();
// End Cross Module References
	void UDataSourceFilterSet::StaticRegisterNativesUDataSourceFilterSet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataSourceFilterSet);
	UClass* Z_Construct_UClass_UDataSourceFilterSet_NoRegister()
	{
		return UDataSourceFilterSet::StaticClass();
	}
	struct Z_Construct_UClass_UDataSourceFilterSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Filters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Filters;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataSourceFilterSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataSourceFilter,
		(UObject* (*)())Z_Construct_UPackage__Script_SourceFilteringTrace,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataSourceFilterSet_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Engine implementation of IDataSourceFilterSetInterface */" },
		{ "IncludePath", "DataSourceFilterSet.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/DataSourceFilterSet.h" },
		{ "ToolTip", "Engine implementation of IDataSourceFilterSetInterface" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDataSourceFilterSet_Statics::NewProp_Filters_Inner = { "Filters", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDataSourceFilter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataSourceFilterSet_Statics::NewProp_Filters_MetaData[] = {
		{ "Comment", "/** Contained Filter instance */" },
		{ "ModuleRelativePath", "Public/DataSourceFilterSet.h" },
		{ "ToolTip", "Contained Filter instance" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDataSourceFilterSet_Statics::NewProp_Filters = { "Filters", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataSourceFilterSet, Filters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDataSourceFilterSet_Statics::NewProp_Filters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataSourceFilterSet_Statics::NewProp_Filters_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDataSourceFilterSet_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataSourceFilterSet_Statics::NewProp_Mode_MetaData[] = {
		{ "Comment", "/** Current Filter set operation */" },
		{ "ModuleRelativePath", "Public/DataSourceFilterSet.h" },
		{ "ToolTip", "Current Filter set operation" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDataSourceFilterSet_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataSourceFilterSet, Mode), Z_Construct_UEnum_SourceFilteringCore_EFilterSetMode, METADATA_PARAMS(Z_Construct_UClass_UDataSourceFilterSet_Statics::NewProp_Mode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataSourceFilterSet_Statics::NewProp_Mode_MetaData)) }; // 4218951794
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataSourceFilterSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataSourceFilterSet_Statics::NewProp_Filters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataSourceFilterSet_Statics::NewProp_Filters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataSourceFilterSet_Statics::NewProp_Mode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataSourceFilterSet_Statics::NewProp_Mode,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UDataSourceFilterSet_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UDataSourceFilterSetInterface_NoRegister, (int32)VTABLE_OFFSET(UDataSourceFilterSet, IDataSourceFilterSetInterface), false },  // 311471338
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataSourceFilterSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataSourceFilterSet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataSourceFilterSet_Statics::ClassParams = {
		&UDataSourceFilterSet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDataSourceFilterSet_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDataSourceFilterSet_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDataSourceFilterSet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataSourceFilterSet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataSourceFilterSet()
	{
		if (!Z_Registration_Info_UClass_UDataSourceFilterSet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataSourceFilterSet.OuterSingleton, Z_Construct_UClass_UDataSourceFilterSet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataSourceFilterSet.OuterSingleton;
	}
	template<> SOURCEFILTERINGTRACE_API UClass* StaticClass<UDataSourceFilterSet>()
	{
		return UDataSourceFilterSet::StaticClass();
	}
	UDataSourceFilterSet::UDataSourceFilterSet() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataSourceFilterSet);
	UDataSourceFilterSet::~UDataSourceFilterSet() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilterSet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilterSet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDataSourceFilterSet, UDataSourceFilterSet::StaticClass, TEXT("UDataSourceFilterSet"), &Z_Registration_Info_UClass_UDataSourceFilterSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataSourceFilterSet), 1527249318U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilterSet_h_3589509314(TEXT("/Script/SourceFilteringTrace"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilterSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilterSet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
