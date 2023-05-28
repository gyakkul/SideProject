// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GizmoEdMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGizmoEdMode() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	GIZMOEDMODE_API UClass* Z_Construct_UClass_UAssetEditorGizmoFactory_NoRegister();
	GIZMOEDMODE_API UClass* Z_Construct_UClass_UGizmoEdMode();
	GIZMOEDMODE_API UClass* Z_Construct_UClass_UGizmoEdMode_NoRegister();
	GIZMOEDMODE_API UClass* Z_Construct_UClass_UGizmoEdModeSettings();
	GIZMOEDMODE_API UClass* Z_Construct_UClass_UGizmoEdModeSettings_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveGizmo_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UEdMode();
	UPackage* Z_Construct_UPackage__Script_GizmoEdMode();
// End Cross Module References
	void UGizmoEdModeSettings::StaticRegisterNativesUGizmoEdModeSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGizmoEdModeSettings);
	UClass* Z_Construct_UClass_UGizmoEdModeSettings_NoRegister()
	{
		return UGizmoEdModeSettings::StaticClass();
	}
	struct Z_Construct_UClass_UGizmoEdModeSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGizmoEdModeSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GizmoEdMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoEdModeSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GizmoEdMode.h" },
		{ "ModuleRelativePath", "Public/GizmoEdMode.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGizmoEdModeSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoEdModeSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGizmoEdModeSettings_Statics::ClassParams = {
		&UGizmoEdModeSettings::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGizmoEdModeSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoEdModeSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGizmoEdModeSettings()
	{
		if (!Z_Registration_Info_UClass_UGizmoEdModeSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGizmoEdModeSettings.OuterSingleton, Z_Construct_UClass_UGizmoEdModeSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGizmoEdModeSettings.OuterSingleton;
	}
	template<> GIZMOEDMODE_API UClass* StaticClass<UGizmoEdModeSettings>()
	{
		return UGizmoEdModeSettings::StaticClass();
	}
	UGizmoEdModeSettings::UGizmoEdModeSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoEdModeSettings);
	UGizmoEdModeSettings::~UGizmoEdModeSettings() {}
	void UGizmoEdMode::StaticRegisterNativesUGizmoEdMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGizmoEdMode);
	UClass* Z_Construct_UClass_UGizmoEdMode_NoRegister()
	{
		return UGizmoEdMode::StaticClass();
	}
	struct Z_Construct_UClass_UGizmoEdMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_GizmoFactories_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GizmoFactories_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GizmoFactories;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InteractiveGizmos_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractiveGizmos_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InteractiveGizmos;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGizmoEdMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdMode,
		(UObject* (*)())Z_Construct_UPackage__Script_GizmoEdMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoEdMode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GizmoEdMode.h" },
		{ "ModuleRelativePath", "Public/GizmoEdMode.h" },
	};
#endif
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UGizmoEdMode_Statics::NewProp_GizmoFactories_Inner = { "GizmoFactories", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAssetEditorGizmoFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoEdMode_Statics::NewProp_GizmoFactories_MetaData[] = {
		{ "ModuleRelativePath", "Public/GizmoEdMode.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGizmoEdMode_Statics::NewProp_GizmoFactories = { "GizmoFactories", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoEdMode, GizmoFactories), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGizmoEdMode_Statics::NewProp_GizmoFactories_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoEdMode_Statics::NewProp_GizmoFactories_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGizmoEdMode_Statics::NewProp_InteractiveGizmos_Inner = { "InteractiveGizmos", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UInteractiveGizmo_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoEdMode_Statics::NewProp_InteractiveGizmos_MetaData[] = {
		{ "ModuleRelativePath", "Public/GizmoEdMode.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGizmoEdMode_Statics::NewProp_InteractiveGizmos = { "InteractiveGizmos", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoEdMode, InteractiveGizmos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGizmoEdMode_Statics::NewProp_InteractiveGizmos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoEdMode_Statics::NewProp_InteractiveGizmos_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGizmoEdMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoEdMode_Statics::NewProp_GizmoFactories_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoEdMode_Statics::NewProp_GizmoFactories,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoEdMode_Statics::NewProp_InteractiveGizmos_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoEdMode_Statics::NewProp_InteractiveGizmos,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGizmoEdMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoEdMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGizmoEdMode_Statics::ClassParams = {
		&UGizmoEdMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGizmoEdMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoEdMode_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGizmoEdMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoEdMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGizmoEdMode()
	{
		if (!Z_Registration_Info_UClass_UGizmoEdMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGizmoEdMode.OuterSingleton, Z_Construct_UClass_UGizmoEdMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGizmoEdMode.OuterSingleton;
	}
	template<> GIZMOEDMODE_API UClass* StaticClass<UGizmoEdMode>()
	{
		return UGizmoEdMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoEdMode);
	UGizmoEdMode::~UGizmoEdMode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GizmoEdMode_Source_GizmoEdMode_Public_GizmoEdMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GizmoEdMode_Source_GizmoEdMode_Public_GizmoEdMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGizmoEdModeSettings, UGizmoEdModeSettings::StaticClass, TEXT("UGizmoEdModeSettings"), &Z_Registration_Info_UClass_UGizmoEdModeSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGizmoEdModeSettings), 2469168498U) },
		{ Z_Construct_UClass_UGizmoEdMode, UGizmoEdMode::StaticClass, TEXT("UGizmoEdMode"), &Z_Registration_Info_UClass_UGizmoEdMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGizmoEdMode), 3907822022U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GizmoEdMode_Source_GizmoEdMode_Public_GizmoEdMode_h_1875567732(TEXT("/Script/GizmoEdMode"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GizmoEdMode_Source_GizmoEdMode_Public_GizmoEdMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GizmoEdMode_Source_GizmoEdMode_Public_GizmoEdMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
