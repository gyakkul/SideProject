// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/DatasmithDataprepFetcher.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatasmithDataprepFetcher() {}
// Cross Module References
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepStringsArrayFetcher();
	DATASMITHIMPORTER_API UClass* Z_Construct_UClass_UDatasmithStringMetadataValueFetcher();
	DATASMITHIMPORTER_API UClass* Z_Construct_UClass_UDatasmithStringMetadataValueFetcher_NoRegister();
	DATASMITHIMPORTER_API UEnum* Z_Construct_UEnum_DatasmithImporter_EMetadataKeyMatchingCriteria();
	UPackage* Z_Construct_UPackage__Script_DatasmithImporter();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMetadataKeyMatchingCriteria;
	static UEnum* EMetadataKeyMatchingCriteria_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMetadataKeyMatchingCriteria.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMetadataKeyMatchingCriteria.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DatasmithImporter_EMetadataKeyMatchingCriteria, (UObject*)Z_Construct_UPackage__Script_DatasmithImporter(), TEXT("EMetadataKeyMatchingCriteria"));
		}
		return Z_Registration_Info_UEnum_EMetadataKeyMatchingCriteria.OuterSingleton;
	}
	template<> DATASMITHIMPORTER_API UEnum* StaticEnum<EMetadataKeyMatchingCriteria>()
	{
		return EMetadataKeyMatchingCriteria_StaticEnum();
	}
	struct Z_Construct_UEnum_DatasmithImporter_EMetadataKeyMatchingCriteria_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DatasmithImporter_EMetadataKeyMatchingCriteria_Statics::Enumerators[] = {
		{ "ExactMatch", (int64)ExactMatch },
		{ "Contains", (int64)Contains },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DatasmithImporter_EMetadataKeyMatchingCriteria_Statics::Enum_MetaDataParams[] = {
		{ "Contains.Name", "Contains" },
		{ "ExactMatch.Name", "ExactMatch" },
		{ "ModuleRelativePath", "Private/DatasmithDataprepFetcher.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DatasmithImporter_EMetadataKeyMatchingCriteria_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DatasmithImporter,
		nullptr,
		"EMetadataKeyMatchingCriteria",
		"EMetadataKeyMatchingCriteria",
		Z_Construct_UEnum_DatasmithImporter_EMetadataKeyMatchingCriteria_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DatasmithImporter_EMetadataKeyMatchingCriteria_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_DatasmithImporter_EMetadataKeyMatchingCriteria_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DatasmithImporter_EMetadataKeyMatchingCriteria_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DatasmithImporter_EMetadataKeyMatchingCriteria()
	{
		if (!Z_Registration_Info_UEnum_EMetadataKeyMatchingCriteria.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMetadataKeyMatchingCriteria.InnerSingleton, Z_Construct_UEnum_DatasmithImporter_EMetadataKeyMatchingCriteria_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMetadataKeyMatchingCriteria.InnerSingleton;
	}
	void UDatasmithStringMetadataValueFetcher::StaticRegisterNativesUDatasmithStringMetadataValueFetcher()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithStringMetadataValueFetcher);
	UClass* Z_Construct_UClass_UDatasmithStringMetadataValueFetcher_NoRegister()
	{
		return UDatasmithStringMetadataValueFetcher::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithStringMetadataValueFetcher_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyMatch_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_KeyMatch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Key;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithStringMetadataValueFetcher_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataprepStringsArrayFetcher,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithImporter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithStringMetadataValueFetcher_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Metadata Value" },
		{ "IncludePath", "DatasmithDataprepFetcher.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Private/DatasmithDataprepFetcher.h" },
		{ "ToolTip", "Filter objects based on the key value of their metadata." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithStringMetadataValueFetcher_Statics::NewProp_KeyMatch_MetaData[] = {
		{ "Category", "Key" },
		{ "Comment", "//~ End of UDataprepFetcher interface\n" },
		{ "ModuleRelativePath", "Private/DatasmithDataprepFetcher.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDatasmithStringMetadataValueFetcher_Statics::NewProp_KeyMatch = { "KeyMatch", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithStringMetadataValueFetcher, KeyMatch), Z_Construct_UEnum_DatasmithImporter_EMetadataKeyMatchingCriteria, METADATA_PARAMS(Z_Construct_UClass_UDatasmithStringMetadataValueFetcher_Statics::NewProp_KeyMatch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithStringMetadataValueFetcher_Statics::NewProp_KeyMatch_MetaData)) }; // 1294732794
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithStringMetadataValueFetcher_Statics::NewProp_Key_MetaData[] = {
		{ "Category", "Key" },
		{ "Comment", "// The key for the for the string\n" },
		{ "ModuleRelativePath", "Private/DatasmithDataprepFetcher.h" },
		{ "ToolTip", "The key for the for the string" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDatasmithStringMetadataValueFetcher_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithStringMetadataValueFetcher, Key), METADATA_PARAMS(Z_Construct_UClass_UDatasmithStringMetadataValueFetcher_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithStringMetadataValueFetcher_Statics::NewProp_Key_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatasmithStringMetadataValueFetcher_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithStringMetadataValueFetcher_Statics::NewProp_KeyMatch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithStringMetadataValueFetcher_Statics::NewProp_Key,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithStringMetadataValueFetcher_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithStringMetadataValueFetcher>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithStringMetadataValueFetcher_Statics::ClassParams = {
		&UDatasmithStringMetadataValueFetcher::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDatasmithStringMetadataValueFetcher_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithStringMetadataValueFetcher_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithStringMetadataValueFetcher_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithStringMetadataValueFetcher_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithStringMetadataValueFetcher()
	{
		if (!Z_Registration_Info_UClass_UDatasmithStringMetadataValueFetcher.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithStringMetadataValueFetcher.OuterSingleton, Z_Construct_UClass_UDatasmithStringMetadataValueFetcher_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDatasmithStringMetadataValueFetcher.OuterSingleton;
	}
	template<> DATASMITHIMPORTER_API UClass* StaticClass<UDatasmithStringMetadataValueFetcher>()
	{
		return UDatasmithStringMetadataValueFetcher::StaticClass();
	}
	UDatasmithStringMetadataValueFetcher::UDatasmithStringMetadataValueFetcher(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithStringMetadataValueFetcher);
	UDatasmithStringMetadataValueFetcher::~UDatasmithStringMetadataValueFetcher() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Private_DatasmithDataprepFetcher_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Private_DatasmithDataprepFetcher_h_Statics::EnumInfo[] = {
		{ EMetadataKeyMatchingCriteria_StaticEnum, TEXT("EMetadataKeyMatchingCriteria"), &Z_Registration_Info_UEnum_EMetadataKeyMatchingCriteria, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1294732794U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Private_DatasmithDataprepFetcher_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDatasmithStringMetadataValueFetcher, UDatasmithStringMetadataValueFetcher::StaticClass, TEXT("UDatasmithStringMetadataValueFetcher"), &Z_Registration_Info_UClass_UDatasmithStringMetadataValueFetcher, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithStringMetadataValueFetcher), 882849042U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Private_DatasmithDataprepFetcher_h_3240367758(TEXT("/Script/DatasmithImporter"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Private_DatasmithDataprepFetcher_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Private_DatasmithDataprepFetcher_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Private_DatasmithDataprepFetcher_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Private_DatasmithDataprepFetcher_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
