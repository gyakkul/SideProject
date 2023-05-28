// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Builtin/ActorDependentPropertyFilter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorDependentPropertyFilter() {}
// Cross Module References
	LEVELSNAPSHOTFILTERS_API UClass* Z_Construct_UClass_UActorDependentPropertyFilter();
	LEVELSNAPSHOTFILTERS_API UClass* Z_Construct_UClass_UActorDependentPropertyFilter_NoRegister();
	LEVELSNAPSHOTFILTERS_API UClass* Z_Construct_UClass_ULevelSnapshotFilter();
	LEVELSNAPSHOTFILTERS_API UClass* Z_Construct_UClass_ULevelSnapshotFilter_NoRegister();
	LEVELSNAPSHOTFILTERS_API UEnum* Z_Construct_UEnum_LevelSnapshotFilters_EDoNotCareHandling();
	UPackage* Z_Construct_UPackage__Script_LevelSnapshotFilters();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDoNotCareHandling;
	static UEnum* EDoNotCareHandling_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDoNotCareHandling.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDoNotCareHandling.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LevelSnapshotFilters_EDoNotCareHandling, (UObject*)Z_Construct_UPackage__Script_LevelSnapshotFilters(), TEXT("EDoNotCareHandling"));
		}
		return Z_Registration_Info_UEnum_EDoNotCareHandling.OuterSingleton;
	}
	template<> LEVELSNAPSHOTFILTERS_API UEnum* StaticEnum<EDoNotCareHandling>()
	{
		return EDoNotCareHandling_StaticEnum();
	}
	struct Z_Construct_UEnum_LevelSnapshotFilters_EDoNotCareHandling_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LevelSnapshotFilters_EDoNotCareHandling_Statics::Enumerators[] = {
		{ "EDoNotCareHandling::UseIncludeFilter", (int64)EDoNotCareHandling::UseIncludeFilter },
		{ "EDoNotCareHandling::UseExcludeFilter", (int64)EDoNotCareHandling::UseExcludeFilter },
		{ "EDoNotCareHandling::UseDoNotCareFilter", (int64)EDoNotCareHandling::UseDoNotCareFilter },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LevelSnapshotFilters_EDoNotCareHandling_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Builtin/ActorDependentPropertyFilter.h" },
		{ "UseDoNotCareFilter.Comment", "/* When IsActorValid returns DoNotCare, use RunOnDoNotCareActorFilter. */" },
		{ "UseDoNotCareFilter.Name", "EDoNotCareHandling::UseDoNotCareFilter" },
		{ "UseDoNotCareFilter.ToolTip", "When IsActorValid returns DoNotCare, use RunOnDoNotCareActorFilter." },
		{ "UseExcludeFilter.Comment", "/* When IsActorValid returns Exclude, use RunOnExcludedActorFilter. */" },
		{ "UseExcludeFilter.Name", "EDoNotCareHandling::UseExcludeFilter" },
		{ "UseExcludeFilter.ToolTip", "When IsActorValid returns Exclude, use RunOnExcludedActorFilter." },
		{ "UseIncludeFilter.Comment", "/* When IsActorValid returns Include, use RunOnIncludedActorFilter. */" },
		{ "UseIncludeFilter.Name", "EDoNotCareHandling::UseIncludeFilter" },
		{ "UseIncludeFilter.ToolTip", "When IsActorValid returns Include, use RunOnIncludedActorFilter." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LevelSnapshotFilters_EDoNotCareHandling_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LevelSnapshotFilters,
		nullptr,
		"EDoNotCareHandling",
		"EDoNotCareHandling",
		Z_Construct_UEnum_LevelSnapshotFilters_EDoNotCareHandling_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LevelSnapshotFilters_EDoNotCareHandling_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_LevelSnapshotFilters_EDoNotCareHandling_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_LevelSnapshotFilters_EDoNotCareHandling_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_LevelSnapshotFilters_EDoNotCareHandling()
	{
		if (!Z_Registration_Info_UEnum_EDoNotCareHandling.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDoNotCareHandling.InnerSingleton, Z_Construct_UEnum_LevelSnapshotFilters_EDoNotCareHandling_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDoNotCareHandling.InnerSingleton;
	}
	void UActorDependentPropertyFilter::StaticRegisterNativesUActorDependentPropertyFilter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorDependentPropertyFilter);
	UClass* Z_Construct_UClass_UActorDependentPropertyFilter_NoRegister()
	{
		return UActorDependentPropertyFilter::StaticClass();
	}
	struct Z_Construct_UClass_UActorDependentPropertyFilter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorFilter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActorFilter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IncludePropertyFilter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_IncludePropertyFilter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExcludePropertyFilter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ExcludePropertyFilter;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_DoNotCareHandling_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoNotCareHandling_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DoNotCareHandling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoNotCarePropertyFilter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DoNotCarePropertyFilter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorDependentPropertyFilter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULevelSnapshotFilter,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSnapshotFilters,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorDependentPropertyFilter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements IsActorValid and IsPropertyValid as follows:\n *\x09- IsActorValid returns ActorFilter->IsActorValid\n *\x09- IsPropertyValid runs ActorFilter->IsActorValid. Depending on its results it runs\n *\x09\x09- IncludePropertyFilter\n *\x09\x09- ExcludePropertyFilter\n *\x09\x09- DoNotCarePropertyFilter\n *\n * Use case: You want to allow certain properties when another filters would include the actor and allow different properties when excluded.\n */" },
		{ "IncludePath", "Builtin/ActorDependentPropertyFilter.h" },
		{ "ModuleRelativePath", "Public/Builtin/ActorDependentPropertyFilter.h" },
		{ "ToolTip", "Implements IsActorValid and IsPropertyValid as follows:\n    - IsActorValid returns ActorFilter->IsActorValid\n    - IsPropertyValid runs ActorFilter->IsActorValid. Depending on its results it runs\n            - IncludePropertyFilter\n            - ExcludePropertyFilter\n            - DoNotCarePropertyFilter\n\nUse case: You want to allow certain properties when another filters would include the actor and allow different properties when excluded." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorDependentPropertyFilter_Statics::NewProp_ActorFilter_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "/* We run IsActorValid on this filter. IsPropertyValid uses one of the below filters depending on this filter. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Builtin/ActorDependentPropertyFilter.h" },
		{ "ToolTip", "We run IsActorValid on this filter. IsPropertyValid uses one of the below filters depending on this filter." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UActorDependentPropertyFilter_Statics::NewProp_ActorFilter = { "ActorFilter", nullptr, (EPropertyFlags)0x0016000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UActorDependentPropertyFilter, ActorFilter), Z_Construct_UClass_ULevelSnapshotFilter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UActorDependentPropertyFilter_Statics::NewProp_ActorFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorDependentPropertyFilter_Statics::NewProp_ActorFilter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorDependentPropertyFilter_Statics::NewProp_IncludePropertyFilter_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "/* Used by IsPropertyValid when ActorFilter->IsActorValid returns Include */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Builtin/ActorDependentPropertyFilter.h" },
		{ "ToolTip", "Used by IsPropertyValid when ActorFilter->IsActorValid returns Include" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UActorDependentPropertyFilter_Statics::NewProp_IncludePropertyFilter = { "IncludePropertyFilter", nullptr, (EPropertyFlags)0x0016000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UActorDependentPropertyFilter, IncludePropertyFilter), Z_Construct_UClass_ULevelSnapshotFilter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UActorDependentPropertyFilter_Statics::NewProp_IncludePropertyFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorDependentPropertyFilter_Statics::NewProp_IncludePropertyFilter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorDependentPropertyFilter_Statics::NewProp_ExcludePropertyFilter_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "/* Used by IsPropertyValid when ActorFilter->IsActorValid returns Exclude */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Builtin/ActorDependentPropertyFilter.h" },
		{ "ToolTip", "Used by IsPropertyValid when ActorFilter->IsActorValid returns Exclude" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UActorDependentPropertyFilter_Statics::NewProp_ExcludePropertyFilter = { "ExcludePropertyFilter", nullptr, (EPropertyFlags)0x0016000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UActorDependentPropertyFilter, ExcludePropertyFilter), Z_Construct_UClass_ULevelSnapshotFilter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UActorDependentPropertyFilter_Statics::NewProp_ExcludePropertyFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorDependentPropertyFilter_Statics::NewProp_ExcludePropertyFilter_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UActorDependentPropertyFilter_Statics::NewProp_DoNotCareHandling_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorDependentPropertyFilter_Statics::NewProp_DoNotCareHandling_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "/* Determines what filter IsPropertyValid is supposed to use when IsActorValid returns DoNotCare. */" },
		{ "ModuleRelativePath", "Public/Builtin/ActorDependentPropertyFilter.h" },
		{ "ToolTip", "Determines what filter IsPropertyValid is supposed to use when IsActorValid returns DoNotCare." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UActorDependentPropertyFilter_Statics::NewProp_DoNotCareHandling = { "DoNotCareHandling", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UActorDependentPropertyFilter, DoNotCareHandling), Z_Construct_UEnum_LevelSnapshotFilters_EDoNotCareHandling, METADATA_PARAMS(Z_Construct_UClass_UActorDependentPropertyFilter_Statics::NewProp_DoNotCareHandling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorDependentPropertyFilter_Statics::NewProp_DoNotCareHandling_MetaData)) }; // 3082103966
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorDependentPropertyFilter_Statics::NewProp_DoNotCarePropertyFilter_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "/* Used by IsPropertyValid when ActorFilter->IsActorValid returns DoNotCare and DoNotCareHandling == UseDoNotCareFilter. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Builtin/ActorDependentPropertyFilter.h" },
		{ "ToolTip", "Used by IsPropertyValid when ActorFilter->IsActorValid returns DoNotCare and DoNotCareHandling == UseDoNotCareFilter." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UActorDependentPropertyFilter_Statics::NewProp_DoNotCarePropertyFilter = { "DoNotCarePropertyFilter", nullptr, (EPropertyFlags)0x0016000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UActorDependentPropertyFilter, DoNotCarePropertyFilter), Z_Construct_UClass_ULevelSnapshotFilter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UActorDependentPropertyFilter_Statics::NewProp_DoNotCarePropertyFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorDependentPropertyFilter_Statics::NewProp_DoNotCarePropertyFilter_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActorDependentPropertyFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorDependentPropertyFilter_Statics::NewProp_ActorFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorDependentPropertyFilter_Statics::NewProp_IncludePropertyFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorDependentPropertyFilter_Statics::NewProp_ExcludePropertyFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorDependentPropertyFilter_Statics::NewProp_DoNotCareHandling_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorDependentPropertyFilter_Statics::NewProp_DoNotCareHandling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorDependentPropertyFilter_Statics::NewProp_DoNotCarePropertyFilter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorDependentPropertyFilter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorDependentPropertyFilter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorDependentPropertyFilter_Statics::ClassParams = {
		&UActorDependentPropertyFilter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UActorDependentPropertyFilter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UActorDependentPropertyFilter_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UActorDependentPropertyFilter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorDependentPropertyFilter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorDependentPropertyFilter()
	{
		if (!Z_Registration_Info_UClass_UActorDependentPropertyFilter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorDependentPropertyFilter.OuterSingleton, Z_Construct_UClass_UActorDependentPropertyFilter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActorDependentPropertyFilter.OuterSingleton;
	}
	template<> LEVELSNAPSHOTFILTERS_API UClass* StaticClass<UActorDependentPropertyFilter>()
	{
		return UActorDependentPropertyFilter::StaticClass();
	}
	UActorDependentPropertyFilter::UActorDependentPropertyFilter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorDependentPropertyFilter);
	UActorDependentPropertyFilter::~UActorDependentPropertyFilter() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_ActorDependentPropertyFilter_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_ActorDependentPropertyFilter_h_Statics::EnumInfo[] = {
		{ EDoNotCareHandling_StaticEnum, TEXT("EDoNotCareHandling"), &Z_Registration_Info_UEnum_EDoNotCareHandling, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3082103966U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_ActorDependentPropertyFilter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActorDependentPropertyFilter, UActorDependentPropertyFilter::StaticClass, TEXT("UActorDependentPropertyFilter"), &Z_Registration_Info_UClass_UActorDependentPropertyFilter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorDependentPropertyFilter), 2998460743U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_ActorDependentPropertyFilter_h_4119959443(TEXT("/Script/LevelSnapshotFilters"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_ActorDependentPropertyFilter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_ActorDependentPropertyFilter_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_ActorDependentPropertyFilter_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_ActorDependentPropertyFilter_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
