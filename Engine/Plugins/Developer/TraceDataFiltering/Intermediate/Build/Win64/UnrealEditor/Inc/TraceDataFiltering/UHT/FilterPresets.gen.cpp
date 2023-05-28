// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FilterPresets.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFilterPresets() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	TRACEDATAFILTERING_API UClass* Z_Construct_UClass_UEngineFilterPresetContainer();
	TRACEDATAFILTERING_API UClass* Z_Construct_UClass_UEngineFilterPresetContainer_NoRegister();
	TRACEDATAFILTERING_API UClass* Z_Construct_UClass_ULocalFilterPresetContainer();
	TRACEDATAFILTERING_API UClass* Z_Construct_UClass_ULocalFilterPresetContainer_NoRegister();
	TRACEDATAFILTERING_API UClass* Z_Construct_UClass_USharedFilterPresetContainer();
	TRACEDATAFILTERING_API UClass* Z_Construct_UClass_USharedFilterPresetContainer_NoRegister();
	TRACEDATAFILTERING_API UScriptStruct* Z_Construct_UScriptStruct_FFilterData();
	UPackage* Z_Construct_UPackage__Script_TraceDataFiltering();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FilterData;
class UScriptStruct* FFilterData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FilterData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FilterData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFilterData, (UObject*)Z_Construct_UPackage__Script_TraceDataFiltering(), TEXT("FilterData"));
	}
	return Z_Registration_Info_UScriptStruct_FilterData.OuterSingleton;
}
template<> TRACEDATAFILTERING_API UScriptStruct* StaticStruct<FFilterData>()
{
	return FFilterData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFilterData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FStrPropertyParams NewProp_AllowlistedNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllowlistedNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllowlistedNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFilterData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Structure representing an individual preset in configuration (ini) files */" },
		{ "ModuleRelativePath", "Private/FilterPresets.h" },
		{ "ToolTip", "Structure representing an individual preset in configuration (ini) files" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFilterData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFilterData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFilterData_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Private/FilterPresets.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFilterData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFilterData, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FFilterData_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFilterData_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFilterData_Statics::NewProp_AllowlistedNames_Inner = { "AllowlistedNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFilterData_Statics::NewProp_AllowlistedNames_MetaData[] = {
		{ "ModuleRelativePath", "Private/FilterPresets.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFilterData_Statics::NewProp_AllowlistedNames = { "AllowlistedNames", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFilterData, AllowlistedNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FFilterData_Statics::NewProp_AllowlistedNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFilterData_Statics::NewProp_AllowlistedNames_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFilterData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFilterData_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFilterData_Statics::NewProp_AllowlistedNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFilterData_Statics::NewProp_AllowlistedNames,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFilterData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TraceDataFiltering,
		nullptr,
		&NewStructOps,
		"FilterData",
		sizeof(FFilterData),
		alignof(FFilterData),
		Z_Construct_UScriptStruct_FFilterData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFilterData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFilterData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFilterData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFilterData()
	{
		if (!Z_Registration_Info_UScriptStruct_FilterData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FilterData.InnerSingleton, Z_Construct_UScriptStruct_FFilterData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FilterData.InnerSingleton;
	}
	void ULocalFilterPresetContainer::StaticRegisterNativesULocalFilterPresetContainer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULocalFilterPresetContainer);
	UClass* Z_Construct_UClass_ULocalFilterPresetContainer_NoRegister()
	{
		return ULocalFilterPresetContainer::StaticClass();
	}
	struct Z_Construct_UClass_ULocalFilterPresetContainer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserPresets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserPresets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UserPresets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULocalFilterPresetContainer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TraceDataFiltering,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocalFilterPresetContainer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** UObject containers for the preset data */" },
		{ "IncludePath", "FilterPresets.h" },
		{ "ModuleRelativePath", "Private/FilterPresets.h" },
		{ "ToolTip", "UObject containers for the preset data" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULocalFilterPresetContainer_Statics::NewProp_UserPresets_Inner = { "UserPresets", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FFilterData, METADATA_PARAMS(nullptr, 0) }; // 1718716672
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocalFilterPresetContainer_Statics::NewProp_UserPresets_MetaData[] = {
		{ "ModuleRelativePath", "Private/FilterPresets.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULocalFilterPresetContainer_Statics::NewProp_UserPresets = { "UserPresets", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULocalFilterPresetContainer, UserPresets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULocalFilterPresetContainer_Statics::NewProp_UserPresets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULocalFilterPresetContainer_Statics::NewProp_UserPresets_MetaData)) }; // 1718716672
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULocalFilterPresetContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocalFilterPresetContainer_Statics::NewProp_UserPresets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocalFilterPresetContainer_Statics::NewProp_UserPresets,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULocalFilterPresetContainer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULocalFilterPresetContainer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULocalFilterPresetContainer_Statics::ClassParams = {
		&ULocalFilterPresetContainer::StaticClass,
		"TraceDataFilters",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULocalFilterPresetContainer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULocalFilterPresetContainer_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULocalFilterPresetContainer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULocalFilterPresetContainer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULocalFilterPresetContainer()
	{
		if (!Z_Registration_Info_UClass_ULocalFilterPresetContainer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULocalFilterPresetContainer.OuterSingleton, Z_Construct_UClass_ULocalFilterPresetContainer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULocalFilterPresetContainer.OuterSingleton;
	}
	template<> TRACEDATAFILTERING_API UClass* StaticClass<ULocalFilterPresetContainer>()
	{
		return ULocalFilterPresetContainer::StaticClass();
	}
	ULocalFilterPresetContainer::ULocalFilterPresetContainer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULocalFilterPresetContainer);
	ULocalFilterPresetContainer::~ULocalFilterPresetContainer() {}
	void USharedFilterPresetContainer::StaticRegisterNativesUSharedFilterPresetContainer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USharedFilterPresetContainer);
	UClass* Z_Construct_UClass_USharedFilterPresetContainer_NoRegister()
	{
		return USharedFilterPresetContainer::StaticClass();
	}
	struct Z_Construct_UClass_USharedFilterPresetContainer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SharedPresets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SharedPresets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SharedPresets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USharedFilterPresetContainer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TraceDataFiltering,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USharedFilterPresetContainer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FilterPresets.h" },
		{ "ModuleRelativePath", "Private/FilterPresets.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USharedFilterPresetContainer_Statics::NewProp_SharedPresets_Inner = { "SharedPresets", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FFilterData, METADATA_PARAMS(nullptr, 0) }; // 1718716672
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USharedFilterPresetContainer_Statics::NewProp_SharedPresets_MetaData[] = {
		{ "ModuleRelativePath", "Private/FilterPresets.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USharedFilterPresetContainer_Statics::NewProp_SharedPresets = { "SharedPresets", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USharedFilterPresetContainer, SharedPresets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USharedFilterPresetContainer_Statics::NewProp_SharedPresets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USharedFilterPresetContainer_Statics::NewProp_SharedPresets_MetaData)) }; // 1718716672
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USharedFilterPresetContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USharedFilterPresetContainer_Statics::NewProp_SharedPresets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USharedFilterPresetContainer_Statics::NewProp_SharedPresets,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USharedFilterPresetContainer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USharedFilterPresetContainer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USharedFilterPresetContainer_Statics::ClassParams = {
		&USharedFilterPresetContainer::StaticClass,
		"TraceDataFilters",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USharedFilterPresetContainer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USharedFilterPresetContainer_Statics::PropPointers),
		0,
		0x000000A6u,
		METADATA_PARAMS(Z_Construct_UClass_USharedFilterPresetContainer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USharedFilterPresetContainer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USharedFilterPresetContainer()
	{
		if (!Z_Registration_Info_UClass_USharedFilterPresetContainer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USharedFilterPresetContainer.OuterSingleton, Z_Construct_UClass_USharedFilterPresetContainer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USharedFilterPresetContainer.OuterSingleton;
	}
	template<> TRACEDATAFILTERING_API UClass* StaticClass<USharedFilterPresetContainer>()
	{
		return USharedFilterPresetContainer::StaticClass();
	}
	USharedFilterPresetContainer::USharedFilterPresetContainer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USharedFilterPresetContainer);
	USharedFilterPresetContainer::~USharedFilterPresetContainer() {}
	void UEngineFilterPresetContainer::StaticRegisterNativesUEngineFilterPresetContainer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEngineFilterPresetContainer);
	UClass* Z_Construct_UClass_UEngineFilterPresetContainer_NoRegister()
	{
		return UEngineFilterPresetContainer::StaticClass();
	}
	struct Z_Construct_UClass_UEngineFilterPresetContainer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EnginePresets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnginePresets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EnginePresets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEngineFilterPresetContainer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TraceDataFiltering,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngineFilterPresetContainer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FilterPresets.h" },
		{ "ModuleRelativePath", "Private/FilterPresets.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEngineFilterPresetContainer_Statics::NewProp_EnginePresets_Inner = { "EnginePresets", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FFilterData, METADATA_PARAMS(nullptr, 0) }; // 1718716672
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngineFilterPresetContainer_Statics::NewProp_EnginePresets_MetaData[] = {
		{ "ModuleRelativePath", "Private/FilterPresets.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEngineFilterPresetContainer_Statics::NewProp_EnginePresets = { "EnginePresets", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEngineFilterPresetContainer, EnginePresets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEngineFilterPresetContainer_Statics::NewProp_EnginePresets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEngineFilterPresetContainer_Statics::NewProp_EnginePresets_MetaData)) }; // 1718716672
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEngineFilterPresetContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngineFilterPresetContainer_Statics::NewProp_EnginePresets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngineFilterPresetContainer_Statics::NewProp_EnginePresets,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEngineFilterPresetContainer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEngineFilterPresetContainer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEngineFilterPresetContainer_Statics::ClassParams = {
		&UEngineFilterPresetContainer::StaticClass,
		"TraceDataFilters",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEngineFilterPresetContainer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEngineFilterPresetContainer_Statics::PropPointers),
		0,
		0x000000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UEngineFilterPresetContainer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEngineFilterPresetContainer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEngineFilterPresetContainer()
	{
		if (!Z_Registration_Info_UClass_UEngineFilterPresetContainer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEngineFilterPresetContainer.OuterSingleton, Z_Construct_UClass_UEngineFilterPresetContainer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEngineFilterPresetContainer.OuterSingleton;
	}
	template<> TRACEDATAFILTERING_API UClass* StaticClass<UEngineFilterPresetContainer>()
	{
		return UEngineFilterPresetContainer::StaticClass();
	}
	UEngineFilterPresetContainer::UEngineFilterPresetContainer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEngineFilterPresetContainer);
	UEngineFilterPresetContainer::~UEngineFilterPresetContainer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_TraceDataFiltering_Source_TraceDataFiltering_Private_FilterPresets_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_TraceDataFiltering_Source_TraceDataFiltering_Private_FilterPresets_h_Statics::ScriptStructInfo[] = {
		{ FFilterData::StaticStruct, Z_Construct_UScriptStruct_FFilterData_Statics::NewStructOps, TEXT("FilterData"), &Z_Registration_Info_UScriptStruct_FilterData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFilterData), 1718716672U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_TraceDataFiltering_Source_TraceDataFiltering_Private_FilterPresets_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULocalFilterPresetContainer, ULocalFilterPresetContainer::StaticClass, TEXT("ULocalFilterPresetContainer"), &Z_Registration_Info_UClass_ULocalFilterPresetContainer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULocalFilterPresetContainer), 879700585U) },
		{ Z_Construct_UClass_USharedFilterPresetContainer, USharedFilterPresetContainer::StaticClass, TEXT("USharedFilterPresetContainer"), &Z_Registration_Info_UClass_USharedFilterPresetContainer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USharedFilterPresetContainer), 206632009U) },
		{ Z_Construct_UClass_UEngineFilterPresetContainer, UEngineFilterPresetContainer::StaticClass, TEXT("UEngineFilterPresetContainer"), &Z_Registration_Info_UClass_UEngineFilterPresetContainer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEngineFilterPresetContainer), 155154830U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_TraceDataFiltering_Source_TraceDataFiltering_Private_FilterPresets_h_3718057587(TEXT("/Script/TraceDataFiltering"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_TraceDataFiltering_Source_TraceDataFiltering_Private_FilterPresets_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_TraceDataFiltering_Source_TraceDataFiltering_Private_FilterPresets_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_TraceDataFiltering_Source_TraceDataFiltering_Private_FilterPresets_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_TraceDataFiltering_Source_TraceDataFiltering_Private_FilterPresets_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
