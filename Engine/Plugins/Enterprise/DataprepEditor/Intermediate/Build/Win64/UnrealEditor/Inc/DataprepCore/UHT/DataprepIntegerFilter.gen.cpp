// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SelectionSystem/DataprepIntegerFilter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataprepIntegerFilter() {}
// Cross Module References
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepFilter();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepIntegerFetcher_NoRegister();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepIntegerFilter();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepIntegerFilter_NoRegister();
	DATAPREPCORE_API UEnum* Z_Construct_UEnum_DataprepCore_EDataprepIntegerMatchType();
	UPackage* Z_Construct_UPackage__Script_DataprepCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDataprepIntegerMatchType;
	static UEnum* EDataprepIntegerMatchType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDataprepIntegerMatchType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDataprepIntegerMatchType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DataprepCore_EDataprepIntegerMatchType, (UObject*)Z_Construct_UPackage__Script_DataprepCore(), TEXT("EDataprepIntegerMatchType"));
		}
		return Z_Registration_Info_UEnum_EDataprepIntegerMatchType.OuterSingleton;
	}
	template<> DATAPREPCORE_API UEnum* StaticEnum<EDataprepIntegerMatchType>()
	{
		return EDataprepIntegerMatchType_StaticEnum();
	}
	struct Z_Construct_UEnum_DataprepCore_EDataprepIntegerMatchType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DataprepCore_EDataprepIntegerMatchType_Statics::Enumerators[] = {
		{ "EDataprepIntegerMatchType::LessThan", (int64)EDataprepIntegerMatchType::LessThan },
		{ "EDataprepIntegerMatchType::GreatherThan", (int64)EDataprepIntegerMatchType::GreatherThan },
		{ "EDataprepIntegerMatchType::IsEqual", (int64)EDataprepIntegerMatchType::IsEqual },
		{ "EDataprepIntegerMatchType::InBetween", (int64)EDataprepIntegerMatchType::InBetween },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DataprepCore_EDataprepIntegerMatchType_Statics::Enum_MetaDataParams[] = {
		{ "GreatherThan.Name", "EDataprepIntegerMatchType::GreatherThan" },
		{ "InBetween.Name", "EDataprepIntegerMatchType::InBetween" },
		{ "IsEqual.Name", "EDataprepIntegerMatchType::IsEqual" },
		{ "LessThan.Name", "EDataprepIntegerMatchType::LessThan" },
		{ "ModuleRelativePath", "Public/SelectionSystem/DataprepIntegerFilter.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DataprepCore_EDataprepIntegerMatchType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DataprepCore,
		nullptr,
		"EDataprepIntegerMatchType",
		"EDataprepIntegerMatchType",
		Z_Construct_UEnum_DataprepCore_EDataprepIntegerMatchType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DataprepCore_EDataprepIntegerMatchType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DataprepCore_EDataprepIntegerMatchType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DataprepCore_EDataprepIntegerMatchType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DataprepCore_EDataprepIntegerMatchType()
	{
		if (!Z_Registration_Info_UEnum_EDataprepIntegerMatchType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDataprepIntegerMatchType.InnerSingleton, Z_Construct_UEnum_DataprepCore_EDataprepIntegerMatchType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDataprepIntegerMatchType.InnerSingleton;
	}
	void UDataprepIntegerFilter::StaticRegisterNativesUDataprepIntegerFilter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataprepIntegerFilter);
	UClass* Z_Construct_UClass_UDataprepIntegerFilter_NoRegister()
	{
		return UDataprepIntegerFilter::StaticClass();
	}
	struct Z_Construct_UClass_UDataprepIntegerFilter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntFetcher_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_IntFetcher;
		static const UECodeGen_Private::FBytePropertyParams NewProp_IntegerMatchingCriteria_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntegerMatchingCriteria_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_IntegerMatchingCriteria;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EqualValue_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_EqualValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FromValue_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_FromValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToValue_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ToValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataprepIntegerFilter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataprepFilter,
		(UObject* (*)())Z_Construct_UPackage__Script_DataprepCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepIntegerFilter_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SelectionSystem/DataprepIntegerFilter.h" },
		{ "ModuleRelativePath", "Public/SelectionSystem/DataprepIntegerFilter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepIntegerFilter_Statics::NewProp_IntFetcher_MetaData[] = {
		{ "Comment", "// The source of int selected by the user\n" },
		{ "ModuleRelativePath", "Public/SelectionSystem/DataprepIntegerFilter.h" },
		{ "ToolTip", "The source of int selected by the user" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDataprepIntegerFilter_Statics::NewProp_IntFetcher = { "IntFetcher", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataprepIntegerFilter, IntFetcher), Z_Construct_UClass_UDataprepIntegerFetcher_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDataprepIntegerFilter_Statics::NewProp_IntFetcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepIntegerFilter_Statics::NewProp_IntFetcher_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDataprepIntegerFilter_Statics::NewProp_IntegerMatchingCriteria_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepIntegerFilter_Statics::NewProp_IntegerMatchingCriteria_MetaData[] = {
		{ "Category", "Filter" },
		{ "Comment", "// The matching criteria used when checking if a fetched value can pass the filter\n" },
		{ "ModuleRelativePath", "Public/SelectionSystem/DataprepIntegerFilter.h" },
		{ "ToolTip", "The matching criteria used when checking if a fetched value can pass the filter" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDataprepIntegerFilter_Statics::NewProp_IntegerMatchingCriteria = { "IntegerMatchingCriteria", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataprepIntegerFilter, IntegerMatchingCriteria), Z_Construct_UEnum_DataprepCore_EDataprepIntegerMatchType, METADATA_PARAMS(Z_Construct_UClass_UDataprepIntegerFilter_Statics::NewProp_IntegerMatchingCriteria_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepIntegerFilter_Statics::NewProp_IntegerMatchingCriteria_MetaData)) }; // 3688747850
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepIntegerFilter_Statics::NewProp_EqualValue_MetaData[] = {
		{ "Category", "Filter" },
		{ "Comment", "// The value to use when doing the comparison against the fetched value\n" },
		{ "ModuleRelativePath", "Public/SelectionSystem/DataprepIntegerFilter.h" },
		{ "ToolTip", "The value to use when doing the comparison against the fetched value" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UDataprepIntegerFilter_Statics::NewProp_EqualValue = { "EqualValue", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataprepIntegerFilter, EqualValue), METADATA_PARAMS(Z_Construct_UClass_UDataprepIntegerFilter_Statics::NewProp_EqualValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepIntegerFilter_Statics::NewProp_EqualValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepIntegerFilter_Statics::NewProp_FromValue_MetaData[] = {
		{ "Category", "Filter" },
		{ "Comment", "// A value used for the in-between check\n" },
		{ "ModuleRelativePath", "Public/SelectionSystem/DataprepIntegerFilter.h" },
		{ "ToolTip", "A value used for the in-between check" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UDataprepIntegerFilter_Statics::NewProp_FromValue = { "FromValue", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataprepIntegerFilter, FromValue), METADATA_PARAMS(Z_Construct_UClass_UDataprepIntegerFilter_Statics::NewProp_FromValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepIntegerFilter_Statics::NewProp_FromValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepIntegerFilter_Statics::NewProp_ToValue_MetaData[] = {
		{ "Category", "Filter" },
		{ "Comment", "// A value used for the in-between check\n" },
		{ "ModuleRelativePath", "Public/SelectionSystem/DataprepIntegerFilter.h" },
		{ "ToolTip", "A value used for the in-between check" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UDataprepIntegerFilter_Statics::NewProp_ToValue = { "ToValue", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataprepIntegerFilter, ToValue), METADATA_PARAMS(Z_Construct_UClass_UDataprepIntegerFilter_Statics::NewProp_ToValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepIntegerFilter_Statics::NewProp_ToValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataprepIntegerFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepIntegerFilter_Statics::NewProp_IntFetcher,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepIntegerFilter_Statics::NewProp_IntegerMatchingCriteria_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepIntegerFilter_Statics::NewProp_IntegerMatchingCriteria,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepIntegerFilter_Statics::NewProp_EqualValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepIntegerFilter_Statics::NewProp_FromValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepIntegerFilter_Statics::NewProp_ToValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataprepIntegerFilter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataprepIntegerFilter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataprepIntegerFilter_Statics::ClassParams = {
		&UDataprepIntegerFilter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDataprepIntegerFilter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepIntegerFilter_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDataprepIntegerFilter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepIntegerFilter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataprepIntegerFilter()
	{
		if (!Z_Registration_Info_UClass_UDataprepIntegerFilter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataprepIntegerFilter.OuterSingleton, Z_Construct_UClass_UDataprepIntegerFilter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataprepIntegerFilter.OuterSingleton;
	}
	template<> DATAPREPCORE_API UClass* StaticClass<UDataprepIntegerFilter>()
	{
		return UDataprepIntegerFilter::StaticClass();
	}
	UDataprepIntegerFilter::UDataprepIntegerFilter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataprepIntegerFilter);
	UDataprepIntegerFilter::~UDataprepIntegerFilter() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepIntegerFilter_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepIntegerFilter_h_Statics::EnumInfo[] = {
		{ EDataprepIntegerMatchType_StaticEnum, TEXT("EDataprepIntegerMatchType"), &Z_Registration_Info_UEnum_EDataprepIntegerMatchType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3688747850U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepIntegerFilter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDataprepIntegerFilter, UDataprepIntegerFilter::StaticClass, TEXT("UDataprepIntegerFilter"), &Z_Registration_Info_UClass_UDataprepIntegerFilter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataprepIntegerFilter), 3154805578U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepIntegerFilter_h_735568689(TEXT("/Script/DataprepCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepIntegerFilter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepIntegerFilter_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepIntegerFilter_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepIntegerFilter_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
