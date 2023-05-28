// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SelectionSystem/DataprepFloatFilter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataprepFloatFilter() {}
// Cross Module References
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepFilter();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepFloatFetcher_NoRegister();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepFloatFilter();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepFloatFilter_NoRegister();
	DATAPREPCORE_API UEnum* Z_Construct_UEnum_DataprepCore_EDataprepFloatMatchType();
	UPackage* Z_Construct_UPackage__Script_DataprepCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDataprepFloatMatchType;
	static UEnum* EDataprepFloatMatchType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDataprepFloatMatchType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDataprepFloatMatchType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DataprepCore_EDataprepFloatMatchType, (UObject*)Z_Construct_UPackage__Script_DataprepCore(), TEXT("EDataprepFloatMatchType"));
		}
		return Z_Registration_Info_UEnum_EDataprepFloatMatchType.OuterSingleton;
	}
	template<> DATAPREPCORE_API UEnum* StaticEnum<EDataprepFloatMatchType>()
	{
		return EDataprepFloatMatchType_StaticEnum();
	}
	struct Z_Construct_UEnum_DataprepCore_EDataprepFloatMatchType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DataprepCore_EDataprepFloatMatchType_Statics::Enumerators[] = {
		{ "EDataprepFloatMatchType::LessThan", (int64)EDataprepFloatMatchType::LessThan },
		{ "EDataprepFloatMatchType::GreatherThan", (int64)EDataprepFloatMatchType::GreatherThan },
		{ "EDataprepFloatMatchType::IsNearlyEqual", (int64)EDataprepFloatMatchType::IsNearlyEqual },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DataprepCore_EDataprepFloatMatchType_Statics::Enum_MetaDataParams[] = {
		{ "GreatherThan.Name", "EDataprepFloatMatchType::GreatherThan" },
		{ "IsNearlyEqual.Name", "EDataprepFloatMatchType::IsNearlyEqual" },
		{ "LessThan.Name", "EDataprepFloatMatchType::LessThan" },
		{ "ModuleRelativePath", "Public/SelectionSystem/DataprepFloatFilter.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DataprepCore_EDataprepFloatMatchType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DataprepCore,
		nullptr,
		"EDataprepFloatMatchType",
		"EDataprepFloatMatchType",
		Z_Construct_UEnum_DataprepCore_EDataprepFloatMatchType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DataprepCore_EDataprepFloatMatchType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DataprepCore_EDataprepFloatMatchType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DataprepCore_EDataprepFloatMatchType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DataprepCore_EDataprepFloatMatchType()
	{
		if (!Z_Registration_Info_UEnum_EDataprepFloatMatchType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDataprepFloatMatchType.InnerSingleton, Z_Construct_UEnum_DataprepCore_EDataprepFloatMatchType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDataprepFloatMatchType.InnerSingleton;
	}
	void UDataprepFloatFilter::StaticRegisterNativesUDataprepFloatFilter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataprepFloatFilter);
	UClass* Z_Construct_UClass_UDataprepFloatFilter_NoRegister()
	{
		return UDataprepFloatFilter::StaticClass();
	}
	struct Z_Construct_UClass_UDataprepFloatFilter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatFetcher_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FloatFetcher;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FloatMatchingCriteria_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatMatchingCriteria_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FloatMatchingCriteria;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EqualValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EqualValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tolerance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Tolerance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataprepFloatFilter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataprepFilter,
		(UObject* (*)())Z_Construct_UPackage__Script_DataprepCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepFloatFilter_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SelectionSystem/DataprepFloatFilter.h" },
		{ "ModuleRelativePath", "Public/SelectionSystem/DataprepFloatFilter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepFloatFilter_Statics::NewProp_FloatFetcher_MetaData[] = {
		{ "Comment", "// The source of float selected by the user\n" },
		{ "ModuleRelativePath", "Public/SelectionSystem/DataprepFloatFilter.h" },
		{ "ToolTip", "The source of float selected by the user" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDataprepFloatFilter_Statics::NewProp_FloatFetcher = { "FloatFetcher", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataprepFloatFilter, FloatFetcher), Z_Construct_UClass_UDataprepFloatFetcher_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDataprepFloatFilter_Statics::NewProp_FloatFetcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepFloatFilter_Statics::NewProp_FloatFetcher_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDataprepFloatFilter_Statics::NewProp_FloatMatchingCriteria_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepFloatFilter_Statics::NewProp_FloatMatchingCriteria_MetaData[] = {
		{ "Category", "Filter" },
		{ "Comment", "// The matching criteria used when checking if a fetched value can pass the filter\n" },
		{ "ModuleRelativePath", "Public/SelectionSystem/DataprepFloatFilter.h" },
		{ "ToolTip", "The matching criteria used when checking if a fetched value can pass the filter" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDataprepFloatFilter_Statics::NewProp_FloatMatchingCriteria = { "FloatMatchingCriteria", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataprepFloatFilter, FloatMatchingCriteria), Z_Construct_UEnum_DataprepCore_EDataprepFloatMatchType, METADATA_PARAMS(Z_Construct_UClass_UDataprepFloatFilter_Statics::NewProp_FloatMatchingCriteria_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepFloatFilter_Statics::NewProp_FloatMatchingCriteria_MetaData)) }; // 3958415322
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepFloatFilter_Statics::NewProp_EqualValue_MetaData[] = {
		{ "Category", "Filter" },
		{ "Comment", "// The value to use for the comparison against the fetched value\n" },
		{ "ModuleRelativePath", "Public/SelectionSystem/DataprepFloatFilter.h" },
		{ "ToolTip", "The value to use for the comparison against the fetched value" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDataprepFloatFilter_Statics::NewProp_EqualValue = { "EqualValue", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataprepFloatFilter, EqualValue), METADATA_PARAMS(Z_Construct_UClass_UDataprepFloatFilter_Statics::NewProp_EqualValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepFloatFilter_Statics::NewProp_EqualValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepFloatFilter_Statics::NewProp_Tolerance_MetaData[] = {
		{ "Category", "Filter" },
		{ "Comment", "// The value used for the tolerance when doing a nearly equal\n" },
		{ "ModuleRelativePath", "Public/SelectionSystem/DataprepFloatFilter.h" },
		{ "ToolTip", "The value used for the tolerance when doing a nearly equal" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDataprepFloatFilter_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataprepFloatFilter, Tolerance), METADATA_PARAMS(Z_Construct_UClass_UDataprepFloatFilter_Statics::NewProp_Tolerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepFloatFilter_Statics::NewProp_Tolerance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataprepFloatFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepFloatFilter_Statics::NewProp_FloatFetcher,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepFloatFilter_Statics::NewProp_FloatMatchingCriteria_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepFloatFilter_Statics::NewProp_FloatMatchingCriteria,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepFloatFilter_Statics::NewProp_EqualValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepFloatFilter_Statics::NewProp_Tolerance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataprepFloatFilter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataprepFloatFilter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataprepFloatFilter_Statics::ClassParams = {
		&UDataprepFloatFilter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDataprepFloatFilter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepFloatFilter_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDataprepFloatFilter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepFloatFilter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataprepFloatFilter()
	{
		if (!Z_Registration_Info_UClass_UDataprepFloatFilter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataprepFloatFilter.OuterSingleton, Z_Construct_UClass_UDataprepFloatFilter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataprepFloatFilter.OuterSingleton;
	}
	template<> DATAPREPCORE_API UClass* StaticClass<UDataprepFloatFilter>()
	{
		return UDataprepFloatFilter::StaticClass();
	}
	UDataprepFloatFilter::UDataprepFloatFilter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataprepFloatFilter);
	UDataprepFloatFilter::~UDataprepFloatFilter() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepFloatFilter_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepFloatFilter_h_Statics::EnumInfo[] = {
		{ EDataprepFloatMatchType_StaticEnum, TEXT("EDataprepFloatMatchType"), &Z_Registration_Info_UEnum_EDataprepFloatMatchType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3958415322U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepFloatFilter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDataprepFloatFilter, UDataprepFloatFilter::StaticClass, TEXT("UDataprepFloatFilter"), &Z_Registration_Info_UClass_UDataprepFloatFilter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataprepFloatFilter), 1300392983U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepFloatFilter_h_1499615709(TEXT("/Script/DataprepCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepFloatFilter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepFloatFilter_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepFloatFilter_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepFloatFilter_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
