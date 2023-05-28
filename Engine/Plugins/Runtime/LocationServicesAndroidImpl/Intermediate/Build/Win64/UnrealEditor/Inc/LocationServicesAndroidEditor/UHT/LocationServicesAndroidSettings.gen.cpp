// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LocationServicesAndroidSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLocationServicesAndroidSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LOCATIONSERVICESANDROIDEDITOR_API UClass* Z_Construct_UClass_ULocationServicesAndroidSettings();
	LOCATIONSERVICESANDROIDEDITOR_API UClass* Z_Construct_UClass_ULocationServicesAndroidSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LocationServicesAndroidEditor();
// End Cross Module References
	void ULocationServicesAndroidSettings::StaticRegisterNativesULocationServicesAndroidSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULocationServicesAndroidSettings);
	UClass* Z_Construct_UClass_ULocationServicesAndroidSettings_NoRegister()
	{
		return ULocationServicesAndroidSettings::StaticClass();
	}
	struct Z_Construct_UClass_ULocationServicesAndroidSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCoarseLocationEnabled_MetaData[];
#endif
		static void NewProp_bCoarseLocationEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCoarseLocationEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFineLocationEnabled_MetaData[];
#endif
		static void NewProp_bFineLocationEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFineLocationEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLocationUpdatesEnabled_MetaData[];
#endif
		static void NewProp_bLocationUpdatesEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLocationUpdatesEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULocationServicesAndroidSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LocationServicesAndroidEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocationServicesAndroidSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LocationServicesAndroidSettings.h" },
		{ "ModuleRelativePath", "Classes/LocationServicesAndroidSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocationServicesAndroidSettings_Statics::NewProp_bCoarseLocationEnabled_MetaData[] = {
		{ "Category", "LocationServices" },
		{ "DisplayName", "Enable Coarse Location Accuracy (Network Provider)" },
		{ "ModuleRelativePath", "Classes/LocationServicesAndroidSettings.h" },
	};
#endif
	void Z_Construct_UClass_ULocationServicesAndroidSettings_Statics::NewProp_bCoarseLocationEnabled_SetBit(void* Obj)
	{
		((ULocationServicesAndroidSettings*)Obj)->bCoarseLocationEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULocationServicesAndroidSettings_Statics::NewProp_bCoarseLocationEnabled = { "bCoarseLocationEnabled", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULocationServicesAndroidSettings), &Z_Construct_UClass_ULocationServicesAndroidSettings_Statics::NewProp_bCoarseLocationEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULocationServicesAndroidSettings_Statics::NewProp_bCoarseLocationEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULocationServicesAndroidSettings_Statics::NewProp_bCoarseLocationEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocationServicesAndroidSettings_Statics::NewProp_bFineLocationEnabled_MetaData[] = {
		{ "Category", "LocationServices" },
		{ "DisplayName", "Enable Fine Location Accuracy (GPS Provider)" },
		{ "ModuleRelativePath", "Classes/LocationServicesAndroidSettings.h" },
	};
#endif
	void Z_Construct_UClass_ULocationServicesAndroidSettings_Statics::NewProp_bFineLocationEnabled_SetBit(void* Obj)
	{
		((ULocationServicesAndroidSettings*)Obj)->bFineLocationEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULocationServicesAndroidSettings_Statics::NewProp_bFineLocationEnabled = { "bFineLocationEnabled", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULocationServicesAndroidSettings), &Z_Construct_UClass_ULocationServicesAndroidSettings_Statics::NewProp_bFineLocationEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULocationServicesAndroidSettings_Statics::NewProp_bFineLocationEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULocationServicesAndroidSettings_Statics::NewProp_bFineLocationEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocationServicesAndroidSettings_Statics::NewProp_bLocationUpdatesEnabled_MetaData[] = {
		{ "Category", "LocationServices" },
		{ "DisplayName", "Enable Location Updates" },
		{ "ModuleRelativePath", "Classes/LocationServicesAndroidSettings.h" },
	};
#endif
	void Z_Construct_UClass_ULocationServicesAndroidSettings_Statics::NewProp_bLocationUpdatesEnabled_SetBit(void* Obj)
	{
		((ULocationServicesAndroidSettings*)Obj)->bLocationUpdatesEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULocationServicesAndroidSettings_Statics::NewProp_bLocationUpdatesEnabled = { "bLocationUpdatesEnabled", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULocationServicesAndroidSettings), &Z_Construct_UClass_ULocationServicesAndroidSettings_Statics::NewProp_bLocationUpdatesEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULocationServicesAndroidSettings_Statics::NewProp_bLocationUpdatesEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULocationServicesAndroidSettings_Statics::NewProp_bLocationUpdatesEnabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULocationServicesAndroidSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocationServicesAndroidSettings_Statics::NewProp_bCoarseLocationEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocationServicesAndroidSettings_Statics::NewProp_bFineLocationEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocationServicesAndroidSettings_Statics::NewProp_bLocationUpdatesEnabled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULocationServicesAndroidSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULocationServicesAndroidSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULocationServicesAndroidSettings_Statics::ClassParams = {
		&ULocationServicesAndroidSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULocationServicesAndroidSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULocationServicesAndroidSettings_Statics::PropPointers),
		0,
		0x000000A6u,
		METADATA_PARAMS(Z_Construct_UClass_ULocationServicesAndroidSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULocationServicesAndroidSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULocationServicesAndroidSettings()
	{
		if (!Z_Registration_Info_UClass_ULocationServicesAndroidSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULocationServicesAndroidSettings.OuterSingleton, Z_Construct_UClass_ULocationServicesAndroidSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULocationServicesAndroidSettings.OuterSingleton;
	}
	template<> LOCATIONSERVICESANDROIDEDITOR_API UClass* StaticClass<ULocationServicesAndroidSettings>()
	{
		return ULocationServicesAndroidSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULocationServicesAndroidSettings);
	ULocationServicesAndroidSettings::~ULocationServicesAndroidSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_LocationServicesAndroidImpl_Source_LocationServicesAndroidEditor_Classes_LocationServicesAndroidSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_LocationServicesAndroidImpl_Source_LocationServicesAndroidEditor_Classes_LocationServicesAndroidSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULocationServicesAndroidSettings, ULocationServicesAndroidSettings::StaticClass, TEXT("ULocationServicesAndroidSettings"), &Z_Registration_Info_UClass_ULocationServicesAndroidSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULocationServicesAndroidSettings), 1916328402U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_LocationServicesAndroidImpl_Source_LocationServicesAndroidEditor_Classes_LocationServicesAndroidSettings_h_1348014845(TEXT("/Script/LocationServicesAndroidEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_LocationServicesAndroidImpl_Source_LocationServicesAndroidEditor_Classes_LocationServicesAndroidSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_LocationServicesAndroidImpl_Source_LocationServicesAndroidEditor_Classes_LocationServicesAndroidSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
