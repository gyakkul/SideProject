// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SourceFilterCollection.h"
#include "DataSourceFiltering.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSourceFilterCollection() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	SOURCEFILTERINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FActorClassFilter();
	SOURCEFILTERINGTRACE_API UClass* Z_Construct_UClass_UDataSourceFilter_NoRegister();
	SOURCEFILTERINGTRACE_API UClass* Z_Construct_UClass_UDataSourceFilterSet_NoRegister();
	SOURCEFILTERINGTRACE_API UClass* Z_Construct_UClass_USourceFilterCollection();
	SOURCEFILTERINGTRACE_API UClass* Z_Construct_UClass_USourceFilterCollection_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SourceFilteringTrace();
// End Cross Module References
	void USourceFilterCollection::StaticRegisterNativesUSourceFilterCollection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USourceFilterCollection);
	UClass* Z_Construct_UClass_USourceFilterCollection_NoRegister()
	{
		return USourceFilterCollection::StaticClass();
	}
	struct Z_Construct_UClass_USourceFilterCollection_Statics
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
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClassFilters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClassFilters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ClassFilters;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FilterClasses_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilterClasses_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FilterClasses;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ChildToParent_ValueProp;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ChildToParent_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChildToParent_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ChildToParent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USourceFilterCollection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_SourceFilteringTrace,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USourceFilterCollection_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SourceFilterCollection.h" },
		{ "ModuleRelativePath", "Public/SourceFilterCollection.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USourceFilterCollection_Statics::NewProp_Filters_Inner = { "Filters", nullptr, (EPropertyFlags)0x0004000000020000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDataSourceFilter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USourceFilterCollection_Statics::NewProp_Filters_MetaData[] = {
		{ "Category", "Filtering" },
		{ "Comment", "/** Root-level filter instances */" },
		{ "ModuleRelativePath", "Public/SourceFilterCollection.h" },
		{ "ToolTip", "Root-level filter instances" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USourceFilterCollection_Statics::NewProp_Filters = { "Filters", nullptr, (EPropertyFlags)0x0024080000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USourceFilterCollection, Filters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USourceFilterCollection_Statics::NewProp_Filters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USourceFilterCollection_Statics::NewProp_Filters_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USourceFilterCollection_Statics::NewProp_ClassFilters_Inner = { "ClassFilters", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FActorClassFilter, METADATA_PARAMS(nullptr, 0) }; // 3782877489
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USourceFilterCollection_Statics::NewProp_ClassFilters_MetaData[] = {
		{ "Category", "Filtering" },
		{ "Comment", "/** Class filters, used for high-level filtering of AActor instances inside of a UWorld */" },
		{ "ModuleRelativePath", "Public/SourceFilterCollection.h" },
		{ "ToolTip", "Class filters, used for high-level filtering of AActor instances inside of a UWorld" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USourceFilterCollection_Statics::NewProp_ClassFilters = { "ClassFilters", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USourceFilterCollection, ClassFilters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USourceFilterCollection_Statics::NewProp_ClassFilters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USourceFilterCollection_Statics::NewProp_ClassFilters_MetaData)) }; // 3782877489
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USourceFilterCollection_Statics::NewProp_FilterClasses_Inner = { "FilterClasses", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USourceFilterCollection_Statics::NewProp_FilterClasses_MetaData[] = {
		{ "Comment", "/** Flat version of the Filter classes contained by this collection, stored according to Filters ordering, with child filters inline */" },
		{ "ModuleRelativePath", "Public/SourceFilterCollection.h" },
		{ "ToolTip", "Flat version of the Filter classes contained by this collection, stored according to Filters ordering, with child filters inline" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USourceFilterCollection_Statics::NewProp_FilterClasses = { "FilterClasses", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USourceFilterCollection, FilterClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USourceFilterCollection_Statics::NewProp_FilterClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USourceFilterCollection_Statics::NewProp_FilterClasses_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USourceFilterCollection_Statics::NewProp_ChildToParent_ValueProp = { "ChildToParent", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UDataSourceFilterSet_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USourceFilterCollection_Statics::NewProp_ChildToParent_Key_KeyProp = { "ChildToParent_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDataSourceFilter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USourceFilterCollection_Statics::NewProp_ChildToParent_MetaData[] = {
		{ "Comment", "/** Child / Parent mapping for Filter (sets) */" },
		{ "ModuleRelativePath", "Public/SourceFilterCollection.h" },
		{ "ToolTip", "Child / Parent mapping for Filter (sets)" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USourceFilterCollection_Statics::NewProp_ChildToParent = { "ChildToParent", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USourceFilterCollection, ChildToParent), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USourceFilterCollection_Statics::NewProp_ChildToParent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USourceFilterCollection_Statics::NewProp_ChildToParent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USourceFilterCollection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USourceFilterCollection_Statics::NewProp_Filters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USourceFilterCollection_Statics::NewProp_Filters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USourceFilterCollection_Statics::NewProp_ClassFilters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USourceFilterCollection_Statics::NewProp_ClassFilters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USourceFilterCollection_Statics::NewProp_FilterClasses_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USourceFilterCollection_Statics::NewProp_FilterClasses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USourceFilterCollection_Statics::NewProp_ChildToParent_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USourceFilterCollection_Statics::NewProp_ChildToParent_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USourceFilterCollection_Statics::NewProp_ChildToParent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USourceFilterCollection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USourceFilterCollection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USourceFilterCollection_Statics::ClassParams = {
		&USourceFilterCollection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USourceFilterCollection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USourceFilterCollection_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USourceFilterCollection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USourceFilterCollection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USourceFilterCollection()
	{
		if (!Z_Registration_Info_UClass_USourceFilterCollection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USourceFilterCollection.OuterSingleton, Z_Construct_UClass_USourceFilterCollection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USourceFilterCollection.OuterSingleton;
	}
	template<> SOURCEFILTERINGTRACE_API UClass* StaticClass<USourceFilterCollection>()
	{
		return USourceFilterCollection::StaticClass();
	}
	USourceFilterCollection::USourceFilterCollection(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USourceFilterCollection);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USourceFilterCollection)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_SourceFilterCollection_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_SourceFilterCollection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USourceFilterCollection, USourceFilterCollection::StaticClass, TEXT("USourceFilterCollection"), &Z_Registration_Info_UClass_USourceFilterCollection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USourceFilterCollection), 1344769953U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_SourceFilterCollection_h_551676697(TEXT("/Script/SourceFilteringTrace"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_SourceFilterCollection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_SourceFilterCollection_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
