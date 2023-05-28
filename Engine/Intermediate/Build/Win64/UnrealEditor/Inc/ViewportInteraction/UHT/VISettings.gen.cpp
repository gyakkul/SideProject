// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VISettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVISettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ViewportInteraction();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UVISettings();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UVISettings_NoRegister();
// End Cross Module References
	void UVISettings::StaticRegisterNativesUVISettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVISettings);
	UClass* Z_Construct_UClass_UVISettings_NoRegister()
	{
		return UVISettings::StaticClass();
	}
	struct Z_Construct_UClass_UVISettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bScaleWorldFromFloor_MetaData[];
#endif
		static void NewProp_bScaleWorldFromFloor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bScaleWorldFromFloor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bScaleWorldWithDynamicPivot_MetaData[];
#endif
		static void NewProp_bScaleWorldWithDynamicPivot_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bScaleWorldWithDynamicPivot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowSimultaneousWorldScalingAndRotation_MetaData[];
#endif
		static void NewProp_bAllowSimultaneousWorldScalingAndRotation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowSimultaneousWorldScalingAndRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVISettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ViewportInteraction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVISettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Implements the settings for Viewport Interaction and VR Mode. Note that this is primarily a base class for anything that needs to be accessed in the VI module.\n*/" },
		{ "IncludePath", "VISettings.h" },
		{ "ModuleRelativePath", "Public/VISettings.h" },
		{ "ToolTip", "Implements the settings for Viewport Interaction and VR Mode. Note that this is primarily a base class for anything that needs to be accessed in the VI module." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVISettings_Statics::NewProp_bScaleWorldFromFloor_MetaData[] = {
		{ "Category", "World Movement" },
		{ "Comment", "/** Whether the world should scale relative to your tracking space floor instead of the center of your hand locations */" },
		{ "ModuleRelativePath", "Public/VISettings.h" },
		{ "ToolTip", "Whether the world should scale relative to your tracking space floor instead of the center of your hand locations" },
	};
#endif
	void Z_Construct_UClass_UVISettings_Statics::NewProp_bScaleWorldFromFloor_SetBit(void* Obj)
	{
		((UVISettings*)Obj)->bScaleWorldFromFloor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVISettings_Statics::NewProp_bScaleWorldFromFloor = { "bScaleWorldFromFloor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UVISettings), &Z_Construct_UClass_UVISettings_Statics::NewProp_bScaleWorldFromFloor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVISettings_Statics::NewProp_bScaleWorldFromFloor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVISettings_Statics::NewProp_bScaleWorldFromFloor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVISettings_Statics::NewProp_bScaleWorldWithDynamicPivot_MetaData[] = {
		{ "Category", "World Movement" },
		{ "Comment", "/** Whether to compute a new center point for scaling relative from by looking at how far either controller moved relative to the last frame */" },
		{ "ModuleRelativePath", "Public/VISettings.h" },
		{ "ToolTip", "Whether to compute a new center point for scaling relative from by looking at how far either controller moved relative to the last frame" },
	};
#endif
	void Z_Construct_UClass_UVISettings_Statics::NewProp_bScaleWorldWithDynamicPivot_SetBit(void* Obj)
	{
		((UVISettings*)Obj)->bScaleWorldWithDynamicPivot = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVISettings_Statics::NewProp_bScaleWorldWithDynamicPivot = { "bScaleWorldWithDynamicPivot", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UVISettings), &Z_Construct_UClass_UVISettings_Statics::NewProp_bScaleWorldWithDynamicPivot_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVISettings_Statics::NewProp_bScaleWorldWithDynamicPivot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVISettings_Statics::NewProp_bScaleWorldWithDynamicPivot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVISettings_Statics::NewProp_bAllowSimultaneousWorldScalingAndRotation_MetaData[] = {
		{ "Category", "World Movement" },
		{ "Comment", "/** When enabled, you can freely rotate and scale the world with two hands at the same time.  Otherwise, we'll detect whether to rotate or scale depending on how much of either gesture you initially perform. */" },
		{ "ModuleRelativePath", "Public/VISettings.h" },
		{ "ToolTip", "When enabled, you can freely rotate and scale the world with two hands at the same time.  Otherwise, we'll detect whether to rotate or scale depending on how much of either gesture you initially perform." },
	};
#endif
	void Z_Construct_UClass_UVISettings_Statics::NewProp_bAllowSimultaneousWorldScalingAndRotation_SetBit(void* Obj)
	{
		((UVISettings*)Obj)->bAllowSimultaneousWorldScalingAndRotation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVISettings_Statics::NewProp_bAllowSimultaneousWorldScalingAndRotation = { "bAllowSimultaneousWorldScalingAndRotation", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UVISettings), &Z_Construct_UClass_UVISettings_Statics::NewProp_bAllowSimultaneousWorldScalingAndRotation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVISettings_Statics::NewProp_bAllowSimultaneousWorldScalingAndRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVISettings_Statics::NewProp_bAllowSimultaneousWorldScalingAndRotation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVISettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVISettings_Statics::NewProp_bScaleWorldFromFloor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVISettings_Statics::NewProp_bScaleWorldWithDynamicPivot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVISettings_Statics::NewProp_bAllowSimultaneousWorldScalingAndRotation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVISettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVISettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVISettings_Statics::ClassParams = {
		&UVISettings::StaticClass,
		"EditorSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVISettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVISettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVISettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVISettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVISettings()
	{
		if (!Z_Registration_Info_UClass_UVISettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVISettings.OuterSingleton, Z_Construct_UClass_UVISettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVISettings.OuterSingleton;
	}
	template<> VIEWPORTINTERACTION_API UClass* StaticClass<UVISettings>()
	{
		return UVISettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVISettings);
	UVISettings::~UVISettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Public_VISettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Public_VISettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVISettings, UVISettings::StaticClass, TEXT("UVISettings"), &Z_Registration_Info_UClass_UVISettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVISettings), 2595367723U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Public_VISettings_h_2328248361(TEXT("/Script/ViewportInteraction"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Public_VISettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Public_VISettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
