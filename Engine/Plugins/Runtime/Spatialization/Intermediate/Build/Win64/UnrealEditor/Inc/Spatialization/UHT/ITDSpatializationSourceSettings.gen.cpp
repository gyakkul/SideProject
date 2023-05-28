// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ITDSpatializationSourceSettings.h"
#include "../../Source/Runtime/Engine/Classes/Curves/CurveFloat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeITDSpatializationSourceSettings() {}
// Cross Module References
	AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_USpatializationPluginSourceSettingsBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	SPATIALIZATION_API UClass* Z_Construct_UClass_UITDSpatializationSourceSettings();
	SPATIALIZATION_API UClass* Z_Construct_UClass_UITDSpatializationSourceSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Spatialization();
// End Cross Module References
	void UITDSpatializationSourceSettings::StaticRegisterNativesUITDSpatializationSourceSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UITDSpatializationSourceSettings);
	UClass* Z_Construct_UClass_UITDSpatializationSourceSettings_NoRegister()
	{
		return UITDSpatializationSourceSettings::StaticClass();
	}
	struct Z_Construct_UClass_UITDSpatializationSourceSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableILD_MetaData[];
#endif
		static void NewProp_bEnableILD_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableILD;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PanningIntensityOverDistance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PanningIntensityOverDistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UITDSpatializationSourceSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USpatializationPluginSourceSettingsBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Spatialization,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UITDSpatializationSourceSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ITDSpatializationSourceSettings.h" },
		{ "ModuleRelativePath", "Public/ITDSpatializationSourceSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UITDSpatializationSourceSettings_Statics::NewProp_bEnableILD_MetaData[] = {
		{ "Category", "SpatializationSettings" },
		{ "Comment", "/* Whether we should use any level difference between the left and right channel in our spatialization algorithm. */" },
		{ "DisplayName", "Enable Level Panning" },
		{ "ModuleRelativePath", "Public/ITDSpatializationSourceSettings.h" },
		{ "ToolTip", "Whether we should use any level difference between the left and right channel in our spatialization algorithm." },
	};
#endif
	void Z_Construct_UClass_UITDSpatializationSourceSettings_Statics::NewProp_bEnableILD_SetBit(void* Obj)
	{
		((UITDSpatializationSourceSettings*)Obj)->bEnableILD = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UITDSpatializationSourceSettings_Statics::NewProp_bEnableILD = { "bEnableILD", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UITDSpatializationSourceSettings), &Z_Construct_UClass_UITDSpatializationSourceSettings_Statics::NewProp_bEnableILD_SetBit, METADATA_PARAMS(Z_Construct_UClass_UITDSpatializationSourceSettings_Statics::NewProp_bEnableILD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UITDSpatializationSourceSettings_Statics::NewProp_bEnableILD_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UITDSpatializationSourceSettings_Statics::NewProp_PanningIntensityOverDistance_MetaData[] = {
		{ "Category", "SpatializationSettings" },
		{ "Comment", "/* This curve will map the intensity of panning (y-axis, 0.0-1.0) as a factor of distance (in Unreal Units) */" },
		{ "ModuleRelativePath", "Public/ITDSpatializationSourceSettings.h" },
		{ "ToolTip", "This curve will map the intensity of panning (y-axis, 0.0-1.0) as a factor of distance (in Unreal Units)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UITDSpatializationSourceSettings_Statics::NewProp_PanningIntensityOverDistance = { "PanningIntensityOverDistance", nullptr, (EPropertyFlags)0x0010000000044005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UITDSpatializationSourceSettings, PanningIntensityOverDistance), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_UITDSpatializationSourceSettings_Statics::NewProp_PanningIntensityOverDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UITDSpatializationSourceSettings_Statics::NewProp_PanningIntensityOverDistance_MetaData)) }; // 1477693291
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UITDSpatializationSourceSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UITDSpatializationSourceSettings_Statics::NewProp_bEnableILD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UITDSpatializationSourceSettings_Statics::NewProp_PanningIntensityOverDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UITDSpatializationSourceSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UITDSpatializationSourceSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UITDSpatializationSourceSettings_Statics::ClassParams = {
		&UITDSpatializationSourceSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UITDSpatializationSourceSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UITDSpatializationSourceSettings_Statics::PropPointers),
		0,
		0x001010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UITDSpatializationSourceSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UITDSpatializationSourceSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UITDSpatializationSourceSettings()
	{
		if (!Z_Registration_Info_UClass_UITDSpatializationSourceSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UITDSpatializationSourceSettings.OuterSingleton, Z_Construct_UClass_UITDSpatializationSourceSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UITDSpatializationSourceSettings.OuterSingleton;
	}
	template<> SPATIALIZATION_API UClass* StaticClass<UITDSpatializationSourceSettings>()
	{
		return UITDSpatializationSourceSettings::StaticClass();
	}
	UITDSpatializationSourceSettings::UITDSpatializationSourceSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UITDSpatializationSourceSettings);
	UITDSpatializationSourceSettings::~UITDSpatializationSourceSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Spatialization_Source_Spatialization_Public_ITDSpatializationSourceSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Spatialization_Source_Spatialization_Public_ITDSpatializationSourceSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UITDSpatializationSourceSettings, UITDSpatializationSourceSettings::StaticClass, TEXT("UITDSpatializationSourceSettings"), &Z_Registration_Info_UClass_UITDSpatializationSourceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UITDSpatializationSourceSettings), 3549576088U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Spatialization_Source_Spatialization_Public_ITDSpatializationSourceSettings_h_1078890762(TEXT("/Script/Spatialization"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Spatialization_Source_Spatialization_Public_ITDSpatializationSourceSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Spatialization_Source_Spatialization_Public_ITDSpatializationSourceSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
