// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/AI/MLAdapter/Source/MLAdapter/Public/MLAdapterSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMLAdapterSettings() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	MLADAPTER_API UClass* Z_Construct_UClass_UMLAdapterSettings();
	MLADAPTER_API UClass* Z_Construct_UClass_UMLAdapterSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MLAdapter();
// End Cross Module References
	void UMLAdapterSettings::StaticRegisterNativesUMLAdapterSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMLAdapterSettings);
	UClass* Z_Construct_UClass_UMLAdapterSettings_NoRegister()
	{
		return UMLAdapterSettings::StaticClass();
	}
	struct Z_Construct_UClass_UMLAdapterSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ManagerClass_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ManagerClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SessionClass_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SessionClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultAgentClass_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultAgentClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultRPCServerPort_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_DefaultRPCServerPort;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMLAdapterSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_MLAdapter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLAdapterSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements the settings for the MLAdapter plugin.\n */" },
		{ "DisplayName", "MLAdapter" },
		{ "IncludePath", "MLAdapterSettings.h" },
		{ "ModuleRelativePath", "Public/MLAdapterSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Implements the settings for the MLAdapter plugin." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLAdapterSettings_Statics::NewProp_ManagerClass_MetaData[] = {
		{ "Category", "MLAdapter" },
		{ "MetaClass", "/Script/MLAdapter.MLAdapterManager" },
		{ "ModuleRelativePath", "Public/MLAdapterSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMLAdapterSettings_Statics::NewProp_ManagerClass = { "ManagerClass", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLAdapterSettings, ManagerClass), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UMLAdapterSettings_Statics::NewProp_ManagerClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLAdapterSettings_Statics::NewProp_ManagerClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLAdapterSettings_Statics::NewProp_SessionClass_MetaData[] = {
		{ "Category", "MLAdapter" },
		{ "MetaClass", "/Script/MLAdapter.MLAdapterSession" },
		{ "ModuleRelativePath", "Public/MLAdapterSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMLAdapterSettings_Statics::NewProp_SessionClass = { "SessionClass", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLAdapterSettings, SessionClass), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UMLAdapterSettings_Statics::NewProp_SessionClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLAdapterSettings_Statics::NewProp_SessionClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLAdapterSettings_Statics::NewProp_DefaultAgentClass_MetaData[] = {
		{ "Category", "MLAdapter" },
		{ "MetaClass", "/Script/MLAdapter.MLAdapterAgent" },
		{ "ModuleRelativePath", "Public/MLAdapterSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMLAdapterSettings_Statics::NewProp_DefaultAgentClass = { "DefaultAgentClass", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLAdapterSettings, DefaultAgentClass), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UMLAdapterSettings_Statics::NewProp_DefaultAgentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLAdapterSettings_Statics::NewProp_DefaultAgentClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLAdapterSettings_Statics::NewProp_DefaultRPCServerPort_MetaData[] = {
		{ "Category", "MLAdapter" },
		{ "ModuleRelativePath", "Public/MLAdapterSettings.h" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UClass_UMLAdapterSettings_Statics::NewProp_DefaultRPCServerPort = { "DefaultRPCServerPort", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLAdapterSettings, DefaultRPCServerPort), METADATA_PARAMS(Z_Construct_UClass_UMLAdapterSettings_Statics::NewProp_DefaultRPCServerPort_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLAdapterSettings_Statics::NewProp_DefaultRPCServerPort_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMLAdapterSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLAdapterSettings_Statics::NewProp_ManagerClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLAdapterSettings_Statics::NewProp_SessionClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLAdapterSettings_Statics::NewProp_DefaultAgentClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLAdapterSettings_Statics::NewProp_DefaultRPCServerPort,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMLAdapterSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMLAdapterSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMLAdapterSettings_Statics::ClassParams = {
		&UMLAdapterSettings::StaticClass,
		"Plugins",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMLAdapterSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMLAdapterSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UMLAdapterSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMLAdapterSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMLAdapterSettings()
	{
		if (!Z_Registration_Info_UClass_UMLAdapterSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMLAdapterSettings.OuterSingleton, Z_Construct_UClass_UMLAdapterSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMLAdapterSettings.OuterSingleton;
	}
	template<> MLADAPTER_API UClass* StaticClass<UMLAdapterSettings>()
	{
		return UMLAdapterSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMLAdapterSettings);
	UMLAdapterSettings::~UMLAdapterSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_MLAdapterSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_MLAdapterSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMLAdapterSettings, UMLAdapterSettings::StaticClass, TEXT("UMLAdapterSettings"), &Z_Registration_Info_UClass_UMLAdapterSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMLAdapterSettings), 1034607944U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_MLAdapterSettings_h_633891369(TEXT("/Script/MLAdapter"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_MLAdapterSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_MLAdapterSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
