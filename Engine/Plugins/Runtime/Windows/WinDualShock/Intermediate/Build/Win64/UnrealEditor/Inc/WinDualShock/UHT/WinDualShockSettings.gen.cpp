// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WinDualShockSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWinDualShockSettings() {}
// Cross Module References
	AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_UAudioEndpointSettingsBase();
	AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_USoundfieldEncodingSettingsBase();
	AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_USoundfieldEndpointSettingsBase();
	UPackage* Z_Construct_UPackage__Script_WinDualShock();
	WINDUALSHOCK_API UClass* Z_Construct_UClass_UDualShockExternalEndpointSettings();
	WINDUALSHOCK_API UClass* Z_Construct_UClass_UDualShockExternalEndpointSettings_NoRegister();
	WINDUALSHOCK_API UClass* Z_Construct_UClass_UDualShockSoundfieldEndpointSettings();
	WINDUALSHOCK_API UClass* Z_Construct_UClass_UDualShockSoundfieldEndpointSettings_NoRegister();
	WINDUALSHOCK_API UClass* Z_Construct_UClass_UDualShockSpatializationSettings();
	WINDUALSHOCK_API UClass* Z_Construct_UClass_UDualShockSpatializationSettings_NoRegister();
// End Cross Module References
	void UDualShockExternalEndpointSettings::StaticRegisterNativesUDualShockExternalEndpointSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDualShockExternalEndpointSettings);
	UClass* Z_Construct_UClass_UDualShockExternalEndpointSettings_NoRegister()
	{
		return UDualShockExternalEndpointSettings::StaticClass();
	}
	struct Z_Construct_UClass_UDualShockExternalEndpointSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControllerIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ControllerIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDualShockExternalEndpointSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAudioEndpointSettingsBase,
		(UObject* (*)())Z_Construct_UPackage__Script_WinDualShock,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDualShockExternalEndpointSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WinDualShockSettings.h" },
		{ "ModuleRelativePath", "Public/WinDualShockSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDualShockExternalEndpointSettings_Statics::NewProp_ControllerIndex_MetaData[] = {
		{ "Category", "Output" },
		{ "ModuleRelativePath", "Public/WinDualShockSettings.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDualShockExternalEndpointSettings_Statics::NewProp_ControllerIndex = { "ControllerIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDualShockExternalEndpointSettings, ControllerIndex), METADATA_PARAMS(Z_Construct_UClass_UDualShockExternalEndpointSettings_Statics::NewProp_ControllerIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDualShockExternalEndpointSettings_Statics::NewProp_ControllerIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDualShockExternalEndpointSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDualShockExternalEndpointSettings_Statics::NewProp_ControllerIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDualShockExternalEndpointSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDualShockExternalEndpointSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDualShockExternalEndpointSettings_Statics::ClassParams = {
		&UDualShockExternalEndpointSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDualShockExternalEndpointSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDualShockExternalEndpointSettings_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDualShockExternalEndpointSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDualShockExternalEndpointSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDualShockExternalEndpointSettings()
	{
		if (!Z_Registration_Info_UClass_UDualShockExternalEndpointSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDualShockExternalEndpointSettings.OuterSingleton, Z_Construct_UClass_UDualShockExternalEndpointSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDualShockExternalEndpointSettings.OuterSingleton;
	}
	template<> WINDUALSHOCK_API UClass* StaticClass<UDualShockExternalEndpointSettings>()
	{
		return UDualShockExternalEndpointSettings::StaticClass();
	}
	UDualShockExternalEndpointSettings::UDualShockExternalEndpointSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDualShockExternalEndpointSettings);
	UDualShockExternalEndpointSettings::~UDualShockExternalEndpointSettings() {}
	void UDualShockSoundfieldEndpointSettings::StaticRegisterNativesUDualShockSoundfieldEndpointSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDualShockSoundfieldEndpointSettings);
	UClass* Z_Construct_UClass_UDualShockSoundfieldEndpointSettings_NoRegister()
	{
		return UDualShockSoundfieldEndpointSettings::StaticClass();
	}
	struct Z_Construct_UClass_UDualShockSoundfieldEndpointSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControllerIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ControllerIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDualShockSoundfieldEndpointSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundfieldEndpointSettingsBase,
		(UObject* (*)())Z_Construct_UPackage__Script_WinDualShock,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDualShockSoundfieldEndpointSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WinDualShockSettings.h" },
		{ "ModuleRelativePath", "Public/WinDualShockSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDualShockSoundfieldEndpointSettings_Statics::NewProp_ControllerIndex_MetaData[] = {
		{ "Category", "Output" },
		{ "ModuleRelativePath", "Public/WinDualShockSettings.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDualShockSoundfieldEndpointSettings_Statics::NewProp_ControllerIndex = { "ControllerIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDualShockSoundfieldEndpointSettings, ControllerIndex), METADATA_PARAMS(Z_Construct_UClass_UDualShockSoundfieldEndpointSettings_Statics::NewProp_ControllerIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDualShockSoundfieldEndpointSettings_Statics::NewProp_ControllerIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDualShockSoundfieldEndpointSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDualShockSoundfieldEndpointSettings_Statics::NewProp_ControllerIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDualShockSoundfieldEndpointSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDualShockSoundfieldEndpointSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDualShockSoundfieldEndpointSettings_Statics::ClassParams = {
		&UDualShockSoundfieldEndpointSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDualShockSoundfieldEndpointSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDualShockSoundfieldEndpointSettings_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDualShockSoundfieldEndpointSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDualShockSoundfieldEndpointSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDualShockSoundfieldEndpointSettings()
	{
		if (!Z_Registration_Info_UClass_UDualShockSoundfieldEndpointSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDualShockSoundfieldEndpointSettings.OuterSingleton, Z_Construct_UClass_UDualShockSoundfieldEndpointSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDualShockSoundfieldEndpointSettings.OuterSingleton;
	}
	template<> WINDUALSHOCK_API UClass* StaticClass<UDualShockSoundfieldEndpointSettings>()
	{
		return UDualShockSoundfieldEndpointSettings::StaticClass();
	}
	UDualShockSoundfieldEndpointSettings::UDualShockSoundfieldEndpointSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDualShockSoundfieldEndpointSettings);
	UDualShockSoundfieldEndpointSettings::~UDualShockSoundfieldEndpointSettings() {}
	void UDualShockSpatializationSettings::StaticRegisterNativesUDualShockSpatializationSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDualShockSpatializationSettings);
	UClass* Z_Construct_UClass_UDualShockSpatializationSettings_NoRegister()
	{
		return UDualShockSpatializationSettings::StaticClass();
	}
	struct Z_Construct_UClass_UDualShockSpatializationSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Spread_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Spread;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Priority;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Passthrough_MetaData[];
#endif
		static void NewProp_Passthrough_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Passthrough;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDualShockSpatializationSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundfieldEncodingSettingsBase,
		(UObject* (*)())Z_Construct_UPackage__Script_WinDualShock,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDualShockSpatializationSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WinDualShockSettings.h" },
		{ "ModuleRelativePath", "Public/WinDualShockSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDualShockSpatializationSettings_Statics::NewProp_Spread_MetaData[] = {
		{ "Category", "Output" },
		{ "ClampMax", "6.2831" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/WinDualShockSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDualShockSpatializationSettings_Statics::NewProp_Spread = { "Spread", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDualShockSpatializationSettings, Spread), METADATA_PARAMS(Z_Construct_UClass_UDualShockSpatializationSettings_Statics::NewProp_Spread_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDualShockSpatializationSettings_Statics::NewProp_Spread_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDualShockSpatializationSettings_Statics::NewProp_Priority_MetaData[] = {
		{ "Category", "Output" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/WinDualShockSettings.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDualShockSpatializationSettings_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDualShockSpatializationSettings, Priority), METADATA_PARAMS(Z_Construct_UClass_UDualShockSpatializationSettings_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDualShockSpatializationSettings_Statics::NewProp_Priority_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDualShockSpatializationSettings_Statics::NewProp_Passthrough_MetaData[] = {
		{ "Category", "Output" },
		{ "ModuleRelativePath", "Public/WinDualShockSettings.h" },
	};
#endif
	void Z_Construct_UClass_UDualShockSpatializationSettings_Statics::NewProp_Passthrough_SetBit(void* Obj)
	{
		((UDualShockSpatializationSettings*)Obj)->Passthrough = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDualShockSpatializationSettings_Statics::NewProp_Passthrough = { "Passthrough", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDualShockSpatializationSettings), &Z_Construct_UClass_UDualShockSpatializationSettings_Statics::NewProp_Passthrough_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDualShockSpatializationSettings_Statics::NewProp_Passthrough_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDualShockSpatializationSettings_Statics::NewProp_Passthrough_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDualShockSpatializationSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDualShockSpatializationSettings_Statics::NewProp_Spread,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDualShockSpatializationSettings_Statics::NewProp_Priority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDualShockSpatializationSettings_Statics::NewProp_Passthrough,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDualShockSpatializationSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDualShockSpatializationSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDualShockSpatializationSettings_Statics::ClassParams = {
		&UDualShockSpatializationSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDualShockSpatializationSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDualShockSpatializationSettings_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDualShockSpatializationSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDualShockSpatializationSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDualShockSpatializationSettings()
	{
		if (!Z_Registration_Info_UClass_UDualShockSpatializationSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDualShockSpatializationSettings.OuterSingleton, Z_Construct_UClass_UDualShockSpatializationSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDualShockSpatializationSettings.OuterSingleton;
	}
	template<> WINDUALSHOCK_API UClass* StaticClass<UDualShockSpatializationSettings>()
	{
		return UDualShockSpatializationSettings::StaticClass();
	}
	UDualShockSpatializationSettings::UDualShockSpatializationSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDualShockSpatializationSettings);
	UDualShockSpatializationSettings::~UDualShockSpatializationSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Windows_WinDualShock_Source_WinDualShock_Public_WinDualShockSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Windows_WinDualShock_Source_WinDualShock_Public_WinDualShockSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDualShockExternalEndpointSettings, UDualShockExternalEndpointSettings::StaticClass, TEXT("UDualShockExternalEndpointSettings"), &Z_Registration_Info_UClass_UDualShockExternalEndpointSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDualShockExternalEndpointSettings), 53111273U) },
		{ Z_Construct_UClass_UDualShockSoundfieldEndpointSettings, UDualShockSoundfieldEndpointSettings::StaticClass, TEXT("UDualShockSoundfieldEndpointSettings"), &Z_Registration_Info_UClass_UDualShockSoundfieldEndpointSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDualShockSoundfieldEndpointSettings), 1005827099U) },
		{ Z_Construct_UClass_UDualShockSpatializationSettings, UDualShockSpatializationSettings::StaticClass, TEXT("UDualShockSpatializationSettings"), &Z_Registration_Info_UClass_UDualShockSpatializationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDualShockSpatializationSettings), 2913503825U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Windows_WinDualShock_Source_WinDualShock_Public_WinDualShockSettings_h_2564526257(TEXT("/Script/WinDualShock"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Windows_WinDualShock_Source_WinDualShock_Public_WinDualShockSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Windows_WinDualShock_Source_WinDualShock_Public_WinDualShockSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
