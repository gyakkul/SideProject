// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SelectionSystem/DataprepStringsArrayFilter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataprepStringsArrayFilter() {}
// Cross Module References
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepFilter();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepStringFilterMatchingArray_NoRegister();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepStringsArrayFetcher_NoRegister();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepStringsArrayFilter();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepStringsArrayFilter_NoRegister();
	DATAPREPCORE_API UEnum* Z_Construct_UEnum_DataprepCore_EDataprepStringMatchType();
	UPackage* Z_Construct_UPackage__Script_DataprepCore();
// End Cross Module References
	void UDataprepStringsArrayFilter::StaticRegisterNativesUDataprepStringsArrayFilter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataprepStringsArrayFilter);
	UClass* Z_Construct_UClass_UDataprepStringsArrayFilter_NoRegister()
	{
		return UDataprepStringsArrayFilter::StaticClass();
	}
	struct Z_Construct_UClass_UDataprepStringsArrayFilter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_StringMatchingCriteria_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StringMatchingCriteria_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_StringMatchingCriteria;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UserString;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserStringArray_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_UserStringArray;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMatchInArray_MetaData[];
#endif
		static void NewProp_bMatchInArray_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMatchInArray;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StringsArrayFetcher_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StringsArrayFetcher;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataprepStringsArrayFilter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataprepFilter,
		(UObject* (*)())Z_Construct_UPackage__Script_DataprepCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepStringsArrayFilter_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SelectionSystem/DataprepStringsArrayFilter.h" },
		{ "ModuleRelativePath", "Public/SelectionSystem/DataprepStringsArrayFilter.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDataprepStringsArrayFilter_Statics::NewProp_StringMatchingCriteria_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepStringsArrayFilter_Statics::NewProp_StringMatchingCriteria_MetaData[] = {
		{ "Category", "Filter" },
		{ "Comment", "// The matching criteria used when checking if a fetched value can pass the filter\n" },
		{ "ModuleRelativePath", "Public/SelectionSystem/DataprepStringsArrayFilter.h" },
		{ "ToolTip", "The matching criteria used when checking if a fetched value can pass the filter" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDataprepStringsArrayFilter_Statics::NewProp_StringMatchingCriteria = { "StringMatchingCriteria", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataprepStringsArrayFilter, StringMatchingCriteria), Z_Construct_UEnum_DataprepCore_EDataprepStringMatchType, METADATA_PARAMS(Z_Construct_UClass_UDataprepStringsArrayFilter_Statics::NewProp_StringMatchingCriteria_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepStringsArrayFilter_Statics::NewProp_StringMatchingCriteria_MetaData)) }; // 724624653
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepStringsArrayFilter_Statics::NewProp_UserString_MetaData[] = {
		{ "Category", "Filter" },
		{ "Comment", "// The string used when doing the comparison\n" },
		{ "ModuleRelativePath", "Public/SelectionSystem/DataprepStringsArrayFilter.h" },
		{ "ToolTip", "The string used when doing the comparison" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDataprepStringsArrayFilter_Statics::NewProp_UserString = { "UserString", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataprepStringsArrayFilter, UserString), METADATA_PARAMS(Z_Construct_UClass_UDataprepStringsArrayFilter_Statics::NewProp_UserString_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepStringsArrayFilter_Statics::NewProp_UserString_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepStringsArrayFilter_Statics::NewProp_UserStringArray_MetaData[] = {
		{ "Category", "Filter" },
		{ "ModuleRelativePath", "Public/SelectionSystem/DataprepStringsArrayFilter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDataprepStringsArrayFilter_Statics::NewProp_UserStringArray = { "UserStringArray", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataprepStringsArrayFilter, UserStringArray), Z_Construct_UClass_UDataprepStringFilterMatchingArray_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDataprepStringsArrayFilter_Statics::NewProp_UserStringArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepStringsArrayFilter_Statics::NewProp_UserStringArray_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepStringsArrayFilter_Statics::NewProp_bMatchInArray_MetaData[] = {
		{ "Category", "Filter" },
		{ "ModuleRelativePath", "Public/SelectionSystem/DataprepStringsArrayFilter.h" },
	};
#endif
	void Z_Construct_UClass_UDataprepStringsArrayFilter_Statics::NewProp_bMatchInArray_SetBit(void* Obj)
	{
		((UDataprepStringsArrayFilter*)Obj)->bMatchInArray = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDataprepStringsArrayFilter_Statics::NewProp_bMatchInArray = { "bMatchInArray", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDataprepStringsArrayFilter), &Z_Construct_UClass_UDataprepStringsArrayFilter_Statics::NewProp_bMatchInArray_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDataprepStringsArrayFilter_Statics::NewProp_bMatchInArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepStringsArrayFilter_Statics::NewProp_bMatchInArray_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepStringsArrayFilter_Statics::NewProp_StringsArrayFetcher_MetaData[] = {
		{ "Comment", "// The source of string selected by the user\n" },
		{ "ModuleRelativePath", "Public/SelectionSystem/DataprepStringsArrayFilter.h" },
		{ "ToolTip", "The source of string selected by the user" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDataprepStringsArrayFilter_Statics::NewProp_StringsArrayFetcher = { "StringsArrayFetcher", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataprepStringsArrayFilter, StringsArrayFetcher), Z_Construct_UClass_UDataprepStringsArrayFetcher_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDataprepStringsArrayFilter_Statics::NewProp_StringsArrayFetcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepStringsArrayFilter_Statics::NewProp_StringsArrayFetcher_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataprepStringsArrayFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepStringsArrayFilter_Statics::NewProp_StringMatchingCriteria_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepStringsArrayFilter_Statics::NewProp_StringMatchingCriteria,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepStringsArrayFilter_Statics::NewProp_UserString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepStringsArrayFilter_Statics::NewProp_UserStringArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepStringsArrayFilter_Statics::NewProp_bMatchInArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepStringsArrayFilter_Statics::NewProp_StringsArrayFetcher,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataprepStringsArrayFilter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataprepStringsArrayFilter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataprepStringsArrayFilter_Statics::ClassParams = {
		&UDataprepStringsArrayFilter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDataprepStringsArrayFilter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepStringsArrayFilter_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDataprepStringsArrayFilter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepStringsArrayFilter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataprepStringsArrayFilter()
	{
		if (!Z_Registration_Info_UClass_UDataprepStringsArrayFilter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataprepStringsArrayFilter.OuterSingleton, Z_Construct_UClass_UDataprepStringsArrayFilter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataprepStringsArrayFilter.OuterSingleton;
	}
	template<> DATAPREPCORE_API UClass* StaticClass<UDataprepStringsArrayFilter>()
	{
		return UDataprepStringsArrayFilter::StaticClass();
	}
	UDataprepStringsArrayFilter::UDataprepStringsArrayFilter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataprepStringsArrayFilter);
	UDataprepStringsArrayFilter::~UDataprepStringsArrayFilter() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepStringsArrayFilter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepStringsArrayFilter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDataprepStringsArrayFilter, UDataprepStringsArrayFilter::StaticClass, TEXT("UDataprepStringsArrayFilter"), &Z_Registration_Info_UClass_UDataprepStringsArrayFilter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataprepStringsArrayFilter), 3196372252U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepStringsArrayFilter_h_964566779(TEXT("/Script/DataprepCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepStringsArrayFilter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepStringsArrayFilter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
