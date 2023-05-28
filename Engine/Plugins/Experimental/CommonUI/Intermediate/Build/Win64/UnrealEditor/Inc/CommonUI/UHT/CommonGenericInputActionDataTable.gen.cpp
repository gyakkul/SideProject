// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Input/CommonGenericInputActionDataTable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonGenericInputActionDataTable() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonGenericInputActionDataTable();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonGenericInputActionDataTable_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonInputActionDataProcessor();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonInputActionDataProcessor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
// End Cross Module References
	void UCommonGenericInputActionDataTable::StaticRegisterNativesUCommonGenericInputActionDataTable()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommonGenericInputActionDataTable);
	UClass* Z_Construct_UClass_UCommonGenericInputActionDataTable_NoRegister()
	{
		return UCommonGenericInputActionDataTable::StaticClass();
	}
	struct Z_Construct_UClass_UCommonGenericInputActionDataTable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonGenericInputActionDataTable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataTable,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonGenericInputActionDataTable_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "DataTable,ImportOptions" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Overrides postload to allow for derived classes to perform code-level changes to the datatable.\n * Ex: Per-platform edits. Allows modification of datatable data without checking out the data table asset.\n */" },
		{ "IncludePath", "Input/CommonGenericInputActionDataTable.h" },
		{ "ModuleRelativePath", "Public/Input/CommonGenericInputActionDataTable.h" },
		{ "ToolTip", "Overrides postload to allow for derived classes to perform code-level changes to the datatable.\nEx: Per-platform edits. Allows modification of datatable data without checking out the data table asset." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonGenericInputActionDataTable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonGenericInputActionDataTable>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonGenericInputActionDataTable_Statics::ClassParams = {
		&UCommonGenericInputActionDataTable::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCommonGenericInputActionDataTable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonGenericInputActionDataTable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonGenericInputActionDataTable()
	{
		if (!Z_Registration_Info_UClass_UCommonGenericInputActionDataTable.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonGenericInputActionDataTable.OuterSingleton, Z_Construct_UClass_UCommonGenericInputActionDataTable_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCommonGenericInputActionDataTable.OuterSingleton;
	}
	template<> COMMONUI_API UClass* StaticClass<UCommonGenericInputActionDataTable>()
	{
		return UCommonGenericInputActionDataTable::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonGenericInputActionDataTable);
	void UCommonInputActionDataProcessor::StaticRegisterNativesUCommonInputActionDataProcessor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommonInputActionDataProcessor);
	UClass* Z_Construct_UClass_UCommonInputActionDataProcessor_NoRegister()
	{
		return UCommonInputActionDataProcessor::StaticClass();
	}
	struct Z_Construct_UClass_UCommonInputActionDataProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonInputActionDataProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonInputActionDataProcessor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Derive from to process common input action datatable\n */" },
		{ "IncludePath", "Input/CommonGenericInputActionDataTable.h" },
		{ "ModuleRelativePath", "Public/Input/CommonGenericInputActionDataTable.h" },
		{ "ToolTip", "Derive from to process common input action datatable" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonInputActionDataProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonInputActionDataProcessor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonInputActionDataProcessor_Statics::ClassParams = {
		&UCommonInputActionDataProcessor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UCommonInputActionDataProcessor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonInputActionDataProcessor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonInputActionDataProcessor()
	{
		if (!Z_Registration_Info_UClass_UCommonInputActionDataProcessor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonInputActionDataProcessor.OuterSingleton, Z_Construct_UClass_UCommonInputActionDataProcessor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCommonInputActionDataProcessor.OuterSingleton;
	}
	template<> COMMONUI_API UClass* StaticClass<UCommonInputActionDataProcessor>()
	{
		return UCommonInputActionDataProcessor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonInputActionDataProcessor);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_Input_CommonGenericInputActionDataTable_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_Input_CommonGenericInputActionDataTable_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCommonGenericInputActionDataTable, UCommonGenericInputActionDataTable::StaticClass, TEXT("UCommonGenericInputActionDataTable"), &Z_Registration_Info_UClass_UCommonGenericInputActionDataTable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonGenericInputActionDataTable), 1334749480U) },
		{ Z_Construct_UClass_UCommonInputActionDataProcessor, UCommonInputActionDataProcessor::StaticClass, TEXT("UCommonInputActionDataProcessor"), &Z_Registration_Info_UClass_UCommonInputActionDataProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonInputActionDataProcessor), 2977288256U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_Input_CommonGenericInputActionDataTable_h_3858449802(TEXT("/Script/CommonUI"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_Input_CommonGenericInputActionDataTable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_Input_CommonGenericInputActionDataTable_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
