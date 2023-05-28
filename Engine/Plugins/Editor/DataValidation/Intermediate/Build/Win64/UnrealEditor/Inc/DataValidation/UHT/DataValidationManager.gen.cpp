// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataValidationManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataValidationManager() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
	DATAVALIDATION_API UClass* Z_Construct_UClass_UDEPRECATED_DataValidationManager();
	DATAVALIDATION_API UClass* Z_Construct_UClass_UDEPRECATED_DataValidationManager_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DataValidation();
// End Cross Module References
	void UDEPRECATED_DataValidationManager::StaticRegisterNativesUDEPRECATED_DataValidationManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDEPRECATED_DataValidationManager);
	UClass* Z_Construct_UClass_UDEPRECATED_DataValidationManager_NoRegister()
	{
		return UDEPRECATED_DataValidationManager::StaticClass();
	}
	struct Z_Construct_UClass_UDEPRECATED_DataValidationManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExcludedDirectories_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExcludedDirectories_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExcludedDirectories;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bValidateOnSave_MetaData[];
#endif
		static void NewProp_bValidateOnSave_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bValidateOnSave;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataValidationManagerClassName_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DataValidationManagerClassName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDEPRECATED_DataValidationManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DataValidation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_DataValidationManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Manages centralized execution and tracking of data validation, as well as handling console commands,\n * and some misc tasks like local log hooking\n */" },
		{ "IncludePath", "DataValidationManager.h" },
		{ "ModuleRelativePath", "Public/DataValidationManager.h" },
		{ "ToolTip", "Manages centralized execution and tracking of data validation, as well as handling console commands,\nand some misc tasks like local log hooking" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDEPRECATED_DataValidationManager_Statics::NewProp_ExcludedDirectories_Inner = { "ExcludedDirectories", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_DataValidationManager_Statics::NewProp_ExcludedDirectories_MetaData[] = {
		{ "Comment", "/**\n\x09 * Directories to ignore for data validation. Useful for test assets\n\x09 */" },
		{ "Deprecated", "" },
		{ "DeprecationMessage", "UDataValidationManager's ExcludedDirectories is deprecated, use UEditorValidatorSubsystem's ExcludedDirectories instead." },
		{ "ModuleRelativePath", "Public/DataValidationManager.h" },
		{ "ToolTip", "Directories to ignore for data validation. Useful for test assets" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDEPRECATED_DataValidationManager_Statics::NewProp_ExcludedDirectories = { "ExcludedDirectories", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_DataValidationManager, ExcludedDirectories), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_DataValidationManager_Statics::NewProp_ExcludedDirectories_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_DataValidationManager_Statics::NewProp_ExcludedDirectories_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_DataValidationManager_Statics::NewProp_bValidateOnSave_MetaData[] = {
		{ "Comment", "/**\n\x09 * Rather it should validate assets on save inside the editor\n\x09 */" },
		{ "Deprecated", "" },
		{ "DeprecationMessage", "UDataValidationManager's bValidateOnSave is deprecated, use UEditorValidatorSubsystem's bValidateOnSave instead." },
		{ "ModuleRelativePath", "Public/DataValidationManager.h" },
		{ "ToolTip", "Rather it should validate assets on save inside the editor" },
	};
#endif
	void Z_Construct_UClass_UDEPRECATED_DataValidationManager_Statics::NewProp_bValidateOnSave_SetBit(void* Obj)
	{
		((UDEPRECATED_DataValidationManager*)Obj)->bValidateOnSave = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDEPRECATED_DataValidationManager_Statics::NewProp_bValidateOnSave = { "bValidateOnSave", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDEPRECATED_DataValidationManager), &Z_Construct_UClass_UDEPRECATED_DataValidationManager_Statics::NewProp_bValidateOnSave_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_DataValidationManager_Statics::NewProp_bValidateOnSave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_DataValidationManager_Statics::NewProp_bValidateOnSave_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_DataValidationManager_Statics::NewProp_DataValidationManagerClassName_MetaData[] = {
		{ "Comment", "/** The class to instantiate as the manager object. Defaults to this class but can be overridden */" },
		{ "ModuleRelativePath", "Public/DataValidationManager.h" },
		{ "ToolTip", "The class to instantiate as the manager object. Defaults to this class but can be overridden" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDEPRECATED_DataValidationManager_Statics::NewProp_DataValidationManagerClassName = { "DataValidationManagerClassName", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_DataValidationManager, DataValidationManagerClassName), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_DataValidationManager_Statics::NewProp_DataValidationManagerClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_DataValidationManager_Statics::NewProp_DataValidationManagerClassName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDEPRECATED_DataValidationManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_DataValidationManager_Statics::NewProp_ExcludedDirectories_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_DataValidationManager_Statics::NewProp_ExcludedDirectories,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_DataValidationManager_Statics::NewProp_bValidateOnSave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_DataValidationManager_Statics::NewProp_DataValidationManagerClassName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDEPRECATED_DataValidationManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_DataValidationManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_DataValidationManager_Statics::ClassParams = {
		&UDEPRECATED_DataValidationManager::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDEPRECATED_DataValidationManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_DataValidationManager_Statics::PropPointers),
		0,
		0x021002A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_DataValidationManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_DataValidationManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDEPRECATED_DataValidationManager()
	{
		if (!Z_Registration_Info_UClass_UDEPRECATED_DataValidationManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEPRECATED_DataValidationManager.OuterSingleton, Z_Construct_UClass_UDEPRECATED_DataValidationManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDEPRECATED_DataValidationManager.OuterSingleton;
	}
	template<> DATAVALIDATION_API UClass* StaticClass<UDEPRECATED_DataValidationManager>()
	{
		return UDEPRECATED_DataValidationManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_DataValidationManager);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_DataValidationManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_DataValidationManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDEPRECATED_DataValidationManager, UDEPRECATED_DataValidationManager::StaticClass, TEXT("UDEPRECATED_DataValidationManager"), &Z_Registration_Info_UClass_UDEPRECATED_DataValidationManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEPRECATED_DataValidationManager), 833854415U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_DataValidationManager_h_2523101878(TEXT("/Script/DataValidation"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_DataValidationManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_DataValidationManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
