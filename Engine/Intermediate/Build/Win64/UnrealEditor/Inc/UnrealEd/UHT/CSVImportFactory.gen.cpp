// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Factories/CSVImportFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCSVImportFactory() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UScriptStruct();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERichCurveInterpMode();
	UNREALED_API UClass* Z_Construct_UClass_UCSVImportFactory();
	UNREALED_API UClass* Z_Construct_UClass_UCSVImportFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_ECSVImportType();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FCSVImportSettings();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECSVImportType;
	static UEnum* ECSVImportType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECSVImportType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECSVImportType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_ECSVImportType, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("ECSVImportType"));
		}
		return Z_Registration_Info_UEnum_ECSVImportType.OuterSingleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<ECSVImportType>()
	{
		return ECSVImportType_StaticEnum();
	}
	struct Z_Construct_UEnum_UnrealEd_ECSVImportType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UnrealEd_ECSVImportType_Statics::Enumerators[] = {
		{ "ECSVImportType::ECSV_DataTable", (int64)ECSVImportType::ECSV_DataTable },
		{ "ECSVImportType::ECSV_CurveTable", (int64)ECSVImportType::ECSV_CurveTable },
		{ "ECSVImportType::ECSV_CurveFloat", (int64)ECSVImportType::ECSV_CurveFloat },
		{ "ECSVImportType::ECSV_CurveVector", (int64)ECSVImportType::ECSV_CurveVector },
		{ "ECSVImportType::ECSV_CurveLinearColor", (int64)ECSVImportType::ECSV_CurveLinearColor },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UnrealEd_ECSVImportType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Enum to indicate what to import CSV as */" },
		{ "ECSV_CurveFloat.Comment", "/** Import as a UCurveFloat */" },
		{ "ECSV_CurveFloat.Name", "ECSVImportType::ECSV_CurveFloat" },
		{ "ECSV_CurveFloat.ToolTip", "Import as a UCurveFloat" },
		{ "ECSV_CurveLinearColor.Comment", "/** Import as a UCurveLinearColor */" },
		{ "ECSV_CurveLinearColor.Name", "ECSVImportType::ECSV_CurveLinearColor" },
		{ "ECSV_CurveLinearColor.ToolTip", "Import as a UCurveLinearColor" },
		{ "ECSV_CurveTable.Comment", "/** Import as UCurveTable */" },
		{ "ECSV_CurveTable.Name", "ECSVImportType::ECSV_CurveTable" },
		{ "ECSV_CurveTable.ToolTip", "Import as UCurveTable" },
		{ "ECSV_CurveVector.Comment", "/** Import as a UCurveVector */" },
		{ "ECSV_CurveVector.Name", "ECSVImportType::ECSV_CurveVector" },
		{ "ECSV_CurveVector.ToolTip", "Import as a UCurveVector" },
		{ "ECSV_DataTable.Comment", "/** Import as UDataTable */" },
		{ "ECSV_DataTable.Name", "ECSVImportType::ECSV_DataTable" },
		{ "ECSV_DataTable.ToolTip", "Import as UDataTable" },
		{ "ModuleRelativePath", "Classes/Factories/CSVImportFactory.h" },
		{ "ToolTip", "Enum to indicate what to import CSV as" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UnrealEd_ECSVImportType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		"ECSVImportType",
		"ECSVImportType",
		Z_Construct_UEnum_UnrealEd_ECSVImportType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_ECSVImportType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_UnrealEd_ECSVImportType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_ECSVImportType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UnrealEd_ECSVImportType()
	{
		if (!Z_Registration_Info_UEnum_ECSVImportType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECSVImportType.InnerSingleton, Z_Construct_UEnum_UnrealEd_ECSVImportType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECSVImportType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CSVImportSettings;
class UScriptStruct* FCSVImportSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CSVImportSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CSVImportSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCSVImportSettings, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("CSVImportSettings"));
	}
	return Z_Registration_Info_UScriptStruct_CSVImportSettings.OuterSingleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FCSVImportSettings>()
{
	return FCSVImportSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCSVImportSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportRowStruct_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ImportRowStruct;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ImportType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ImportType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportCurveInterpMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ImportCurveInterpMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCSVImportSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Factories/CSVImportFactory.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCSVImportSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCSVImportSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCSVImportSettings_Statics::NewProp_ImportRowStruct_MetaData[] = {
		{ "Category", "Misc" },
		{ "ModuleRelativePath", "Classes/Factories/CSVImportFactory.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FCSVImportSettings_Statics::NewProp_ImportRowStruct = { "ImportRowStruct", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCSVImportSettings, ImportRowStruct), Z_Construct_UClass_UScriptStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FCSVImportSettings_Statics::NewProp_ImportRowStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCSVImportSettings_Statics::NewProp_ImportRowStruct_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCSVImportSettings_Statics::NewProp_ImportType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCSVImportSettings_Statics::NewProp_ImportType_MetaData[] = {
		{ "Category", "Misc" },
		{ "ModuleRelativePath", "Classes/Factories/CSVImportFactory.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCSVImportSettings_Statics::NewProp_ImportType = { "ImportType", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCSVImportSettings, ImportType), Z_Construct_UEnum_UnrealEd_ECSVImportType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCSVImportSettings_Statics::NewProp_ImportType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCSVImportSettings_Statics::NewProp_ImportType_MetaData)) }; // 4287015073
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCSVImportSettings_Statics::NewProp_ImportCurveInterpMode_MetaData[] = {
		{ "Category", "Misc" },
		{ "ModuleRelativePath", "Classes/Factories/CSVImportFactory.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCSVImportSettings_Statics::NewProp_ImportCurveInterpMode = { "ImportCurveInterpMode", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCSVImportSettings, ImportCurveInterpMode), Z_Construct_UEnum_Engine_ERichCurveInterpMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FCSVImportSettings_Statics::NewProp_ImportCurveInterpMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCSVImportSettings_Statics::NewProp_ImportCurveInterpMode_MetaData)) }; // 931686469
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCSVImportSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCSVImportSettings_Statics::NewProp_ImportRowStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCSVImportSettings_Statics::NewProp_ImportType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCSVImportSettings_Statics::NewProp_ImportType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCSVImportSettings_Statics::NewProp_ImportCurveInterpMode,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCSVImportSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		&NewStructOps,
		"CSVImportSettings",
		sizeof(FCSVImportSettings),
		alignof(FCSVImportSettings),
		Z_Construct_UScriptStruct_FCSVImportSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCSVImportSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCSVImportSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCSVImportSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCSVImportSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_CSVImportSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CSVImportSettings.InnerSingleton, Z_Construct_UScriptStruct_FCSVImportSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CSVImportSettings.InnerSingleton;
	}
	void UCSVImportFactory::StaticRegisterNativesUCSVImportFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCSVImportFactory);
	UClass* Z_Construct_UClass_UCSVImportFactory_NoRegister()
	{
		return UCSVImportFactory::StaticClass();
	}
	struct Z_Construct_UClass_UCSVImportFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutomatedImportSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AutomatedImportSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataTableImportOptions_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DataTableImportOptions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCSVImportFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSVImportFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/CSVImportFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/CSVImportFactory.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSVImportFactory_Statics::NewProp_AutomatedImportSettings_MetaData[] = {
		{ "Category", "Automation" },
		{ "ModuleRelativePath", "Classes/Factories/CSVImportFactory.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCSVImportFactory_Statics::NewProp_AutomatedImportSettings = { "AutomatedImportSettings", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCSVImportFactory, AutomatedImportSettings), Z_Construct_UScriptStruct_FCSVImportSettings, METADATA_PARAMS(Z_Construct_UClass_UCSVImportFactory_Statics::NewProp_AutomatedImportSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSVImportFactory_Statics::NewProp_AutomatedImportSettings_MetaData)) }; // 2896092695
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSVImportFactory_Statics::NewProp_DataTableImportOptions_MetaData[] = {
		{ "Comment", "/** Temporary data table to use to display import options */" },
		{ "ModuleRelativePath", "Classes/Factories/CSVImportFactory.h" },
		{ "ToolTip", "Temporary data table to use to display import options" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCSVImportFactory_Statics::NewProp_DataTableImportOptions = { "DataTableImportOptions", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCSVImportFactory, DataTableImportOptions), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCSVImportFactory_Statics::NewProp_DataTableImportOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSVImportFactory_Statics::NewProp_DataTableImportOptions_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCSVImportFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSVImportFactory_Statics::NewProp_AutomatedImportSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSVImportFactory_Statics::NewProp_DataTableImportOptions,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCSVImportFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCSVImportFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCSVImportFactory_Statics::ClassParams = {
		&UCSVImportFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCSVImportFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCSVImportFactory_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCSVImportFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCSVImportFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCSVImportFactory()
	{
		if (!Z_Registration_Info_UClass_UCSVImportFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCSVImportFactory.OuterSingleton, Z_Construct_UClass_UCSVImportFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCSVImportFactory.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UCSVImportFactory>()
	{
		return UCSVImportFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCSVImportFactory);
	UCSVImportFactory::~UCSVImportFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_CSVImportFactory_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_CSVImportFactory_h_Statics::EnumInfo[] = {
		{ ECSVImportType_StaticEnum, TEXT("ECSVImportType"), &Z_Registration_Info_UEnum_ECSVImportType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4287015073U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_CSVImportFactory_h_Statics::ScriptStructInfo[] = {
		{ FCSVImportSettings::StaticStruct, Z_Construct_UScriptStruct_FCSVImportSettings_Statics::NewStructOps, TEXT("CSVImportSettings"), &Z_Registration_Info_UScriptStruct_CSVImportSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCSVImportSettings), 2896092695U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_CSVImportFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCSVImportFactory, UCSVImportFactory::StaticClass, TEXT("UCSVImportFactory"), &Z_Registration_Info_UClass_UCSVImportFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCSVImportFactory), 2035986286U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_CSVImportFactory_h_4136994271(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_CSVImportFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_CSVImportFactory_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_CSVImportFactory_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_CSVImportFactory_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_CSVImportFactory_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_CSVImportFactory_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
