// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/LiveCodingSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveCodingSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LIVECODING_API UClass* Z_Construct_UClass_ULiveCodingSettings();
	LIVECODING_API UClass* Z_Construct_UClass_ULiveCodingSettings_NoRegister();
	LIVECODING_API UEnum* Z_Construct_UEnum_LiveCoding_ELiveCodingStartupMode();
	UPackage* Z_Construct_UPackage__Script_LiveCoding();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELiveCodingStartupMode;
	static UEnum* ELiveCodingStartupMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELiveCodingStartupMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELiveCodingStartupMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LiveCoding_ELiveCodingStartupMode, (UObject*)Z_Construct_UPackage__Script_LiveCoding(), TEXT("ELiveCodingStartupMode"));
		}
		return Z_Registration_Info_UEnum_ELiveCodingStartupMode.OuterSingleton;
	}
	template<> LIVECODING_API UEnum* StaticEnum<ELiveCodingStartupMode>()
	{
		return ELiveCodingStartupMode_StaticEnum();
	}
	struct Z_Construct_UEnum_LiveCoding_ELiveCodingStartupMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LiveCoding_ELiveCodingStartupMode_Statics::Enumerators[] = {
		{ "ELiveCodingStartupMode::Automatic", (int64)ELiveCodingStartupMode::Automatic },
		{ "ELiveCodingStartupMode::AutomaticButHidden", (int64)ELiveCodingStartupMode::AutomaticButHidden },
		{ "ELiveCodingStartupMode::Manual", (int64)ELiveCodingStartupMode::Manual },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LiveCoding_ELiveCodingStartupMode_Statics::Enum_MetaDataParams[] = {
		{ "Automatic.DisplayName", "Start automatically and show console" },
		{ "Automatic.Name", "ELiveCodingStartupMode::Automatic" },
		{ "AutomaticButHidden.DisplayName", "Start automatically but hide console until summoned" },
		{ "AutomaticButHidden.Name", "ELiveCodingStartupMode::AutomaticButHidden" },
		{ "Manual.DisplayName", "Manual" },
		{ "Manual.Name", "ELiveCodingStartupMode::Manual" },
		{ "ModuleRelativePath", "Private/LiveCodingSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LiveCoding_ELiveCodingStartupMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LiveCoding,
		nullptr,
		"ELiveCodingStartupMode",
		"ELiveCodingStartupMode",
		Z_Construct_UEnum_LiveCoding_ELiveCodingStartupMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LiveCoding_ELiveCodingStartupMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_LiveCoding_ELiveCodingStartupMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_LiveCoding_ELiveCodingStartupMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_LiveCoding_ELiveCodingStartupMode()
	{
		if (!Z_Registration_Info_UEnum_ELiveCodingStartupMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELiveCodingStartupMode.InnerSingleton, Z_Construct_UEnum_LiveCoding_ELiveCodingStartupMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELiveCodingStartupMode.InnerSingleton;
	}
	void ULiveCodingSettings::StaticRegisterNativesULiveCodingSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveCodingSettings);
	UClass* Z_Construct_UClass_ULiveCodingSettings_NoRegister()
	{
		return ULiveCodingSettings::StaticClass();
	}
	struct Z_Construct_UClass_ULiveCodingSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Startup_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Startup_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Startup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableReinstancing_MetaData[];
#endif
		static void NewProp_bEnableReinstancing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableReinstancing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutomaticallyCompileNewClasses_MetaData[];
#endif
		static void NewProp_bAutomaticallyCompileNewClasses_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutomaticallyCompileNewClasses;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPreloadEngineModules_MetaData[];
#endif
		static void NewProp_bPreloadEngineModules_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreloadEngineModules;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPreloadEnginePluginModules_MetaData[];
#endif
		static void NewProp_bPreloadEnginePluginModules_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreloadEnginePluginModules;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPreloadProjectModules_MetaData[];
#endif
		static void NewProp_bPreloadProjectModules_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreloadProjectModules;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPreloadProjectPluginModules_MetaData[];
#endif
		static void NewProp_bPreloadProjectPluginModules_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreloadProjectPluginModules;
		static const UECodeGen_Private::FNamePropertyParams NewProp_PreloadNamedModules_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreloadNamedModules_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PreloadNamedModules;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveCodingSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveCoding,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveCodingSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Live Coding" },
		{ "IncludePath", "LiveCodingSettings.h" },
		{ "ModuleRelativePath", "Private/LiveCodingSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "General" },
		{ "ConfigRestartRequired", "FALSE" },
		{ "DisplayName", "Enable Live Coding" },
		{ "ModuleRelativePath", "Private/LiveCodingSettings.h" },
	};
#endif
	void Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((ULiveCodingSettings*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULiveCodingSettings), &Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_bEnabled_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_Startup_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_Startup_MetaData[] = {
		{ "Category", "General" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Private/LiveCodingSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_Startup = { "Startup", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULiveCodingSettings, Startup), Z_Construct_UEnum_LiveCoding_ELiveCodingStartupMode, METADATA_PARAMS(Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_Startup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_Startup_MetaData)) }; // 2125262392
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_bEnableReinstancing_MetaData[] = {
		{ "Category", "General" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Private/LiveCodingSettings.h" },
	};
#endif
	void Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_bEnableReinstancing_SetBit(void* Obj)
	{
		((ULiveCodingSettings*)Obj)->bEnableReinstancing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_bEnableReinstancing = { "bEnableReinstancing", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULiveCodingSettings), &Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_bEnableReinstancing_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_bEnableReinstancing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_bEnableReinstancing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_bAutomaticallyCompileNewClasses_MetaData[] = {
		{ "Category", "General" },
		{ "DisplayName", "Automatically Compile Newly Added C++ Classes" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Private/LiveCodingSettings.h" },
	};
#endif
	void Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_bAutomaticallyCompileNewClasses_SetBit(void* Obj)
	{
		((ULiveCodingSettings*)Obj)->bAutomaticallyCompileNewClasses = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_bAutomaticallyCompileNewClasses = { "bAutomaticallyCompileNewClasses", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULiveCodingSettings), &Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_bAutomaticallyCompileNewClasses_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_bAutomaticallyCompileNewClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_bAutomaticallyCompileNewClasses_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_bPreloadEngineModules_MetaData[] = {
		{ "Category", "Modules" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Private/LiveCodingSettings.h" },
	};
#endif
	void Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_bPreloadEngineModules_SetBit(void* Obj)
	{
		((ULiveCodingSettings*)Obj)->bPreloadEngineModules = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_bPreloadEngineModules = { "bPreloadEngineModules", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULiveCodingSettings), &Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_bPreloadEngineModules_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_bPreloadEngineModules_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_bPreloadEngineModules_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_bPreloadEnginePluginModules_MetaData[] = {
		{ "Category", "Modules" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Private/LiveCodingSettings.h" },
	};
#endif
	void Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_bPreloadEnginePluginModules_SetBit(void* Obj)
	{
		((ULiveCodingSettings*)Obj)->bPreloadEnginePluginModules = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_bPreloadEnginePluginModules = { "bPreloadEnginePluginModules", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULiveCodingSettings), &Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_bPreloadEnginePluginModules_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_bPreloadEnginePluginModules_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_bPreloadEnginePluginModules_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_bPreloadProjectModules_MetaData[] = {
		{ "Category", "Modules" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Private/LiveCodingSettings.h" },
	};
#endif
	void Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_bPreloadProjectModules_SetBit(void* Obj)
	{
		((ULiveCodingSettings*)Obj)->bPreloadProjectModules = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_bPreloadProjectModules = { "bPreloadProjectModules", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULiveCodingSettings), &Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_bPreloadProjectModules_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_bPreloadProjectModules_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_bPreloadProjectModules_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_bPreloadProjectPluginModules_MetaData[] = {
		{ "Category", "Modules" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Private/LiveCodingSettings.h" },
	};
#endif
	void Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_bPreloadProjectPluginModules_SetBit(void* Obj)
	{
		((ULiveCodingSettings*)Obj)->bPreloadProjectPluginModules = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_bPreloadProjectPluginModules = { "bPreloadProjectPluginModules", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULiveCodingSettings), &Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_bPreloadProjectPluginModules_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_bPreloadProjectPluginModules_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_bPreloadProjectPluginModules_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_PreloadNamedModules_Inner = { "PreloadNamedModules", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_PreloadNamedModules_MetaData[] = {
		{ "Category", "Modules" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Private/LiveCodingSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_PreloadNamedModules = { "PreloadNamedModules", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULiveCodingSettings, PreloadNamedModules), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_PreloadNamedModules_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_PreloadNamedModules_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULiveCodingSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_Startup_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_Startup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_bEnableReinstancing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_bAutomaticallyCompileNewClasses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_bPreloadEngineModules,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_bPreloadEnginePluginModules,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_bPreloadProjectModules,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_bPreloadProjectPluginModules,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_PreloadNamedModules_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveCodingSettings_Statics::NewProp_PreloadNamedModules,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveCodingSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveCodingSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveCodingSettings_Statics::ClassParams = {
		&ULiveCodingSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULiveCodingSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULiveCodingSettings_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULiveCodingSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveCodingSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveCodingSettings()
	{
		if (!Z_Registration_Info_UClass_ULiveCodingSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveCodingSettings.OuterSingleton, Z_Construct_UClass_ULiveCodingSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULiveCodingSettings.OuterSingleton;
	}
	template<> LIVECODING_API UClass* StaticClass<ULiveCodingSettings>()
	{
		return ULiveCodingSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveCodingSettings);
	ULiveCodingSettings::~ULiveCodingSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_Windows_LiveCoding_Private_LiveCodingSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_Windows_LiveCoding_Private_LiveCodingSettings_h_Statics::EnumInfo[] = {
		{ ELiveCodingStartupMode_StaticEnum, TEXT("ELiveCodingStartupMode"), &Z_Registration_Info_UEnum_ELiveCodingStartupMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2125262392U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_Windows_LiveCoding_Private_LiveCodingSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULiveCodingSettings, ULiveCodingSettings::StaticClass, TEXT("ULiveCodingSettings"), &Z_Registration_Info_UClass_ULiveCodingSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveCodingSettings), 622098832U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_Windows_LiveCoding_Private_LiveCodingSettings_h_3871737733(TEXT("/Script/LiveCoding"),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_Windows_LiveCoding_Private_LiveCodingSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_Windows_LiveCoding_Private_LiveCodingSettings_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_Windows_LiveCoding_Private_LiveCodingSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_Windows_LiveCoding_Private_LiveCodingSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
