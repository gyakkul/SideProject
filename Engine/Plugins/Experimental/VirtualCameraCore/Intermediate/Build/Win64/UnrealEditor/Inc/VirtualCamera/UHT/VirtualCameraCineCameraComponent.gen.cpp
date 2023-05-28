// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VirtualCameraCineCameraComponent.h"
#include "CineCameraSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVirtualCameraCineCameraComponent() {}
// Cross Module References
	CINEMATICCAMERA_API UClass* Z_Construct_UClass_UCineCameraComponent();
	CINEMATICCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FCameraFilmbackSettings();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	UPackage* Z_Construct_UPackage__Script_VirtualCamera();
	VIRTUALCAMERA_API UClass* Z_Construct_UClass_UVirtualCameraCineCameraComponent();
	VIRTUALCAMERA_API UClass* Z_Construct_UClass_UVirtualCameraCineCameraComponent_NoRegister();
// End Cross Module References
	void UVirtualCameraCineCameraComponent::StaticRegisterNativesUVirtualCameraCineCameraComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVirtualCameraCineCameraComponent);
	UClass* Z_Construct_UClass_UVirtualCameraCineCameraComponent_NoRegister()
	{
		return UVirtualCameraCineCameraComponent::StaticClass();
	}
	struct Z_Construct_UClass_UVirtualCameraCineCameraComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ApertureOptions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ApertureOptions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ApertureOptions;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FocalLengthOptions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FocalLengthOptions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FocalLengthOptions;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MatteOptions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MatteOptions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MatteOptions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FilmbackOptions_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FilmbackOptions_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilmbackOptions_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_FilmbackOptions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DesiredFilmbackSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DesiredFilmbackSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MatteAspectRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MatteAspectRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MatteOpacity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MatteOpacity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewSizeRatio_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ViewSizeRatio;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVirtualCameraCineCameraComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCineCameraComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VirtualCamera,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualCameraCineCameraComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "CameraSettings Mobility Rendering LOD Trigger PhysicsVolume" },
		{ "HideFunctions", "SetFieldOfView SetAspectRatio" },
		{ "IncludePath", "VirtualCameraCineCameraComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VirtualCameraCineCameraComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVirtualCameraCineCameraComponent_Statics::NewProp_ApertureOptions_Inner = { "ApertureOptions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualCameraCineCameraComponent_Statics::NewProp_ApertureOptions_MetaData[] = {
		{ "Category", "Current Camera Settings" },
		{ "Comment", "/** List of preset aperture options, aperture will always be one of these values */" },
		{ "ModuleRelativePath", "Public/VirtualCameraCineCameraComponent.h" },
		{ "ToolTip", "List of preset aperture options, aperture will always be one of these values" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVirtualCameraCineCameraComponent_Statics::NewProp_ApertureOptions = { "ApertureOptions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVirtualCameraCineCameraComponent, ApertureOptions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVirtualCameraCineCameraComponent_Statics::NewProp_ApertureOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualCameraCineCameraComponent_Statics::NewProp_ApertureOptions_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVirtualCameraCineCameraComponent_Statics::NewProp_FocalLengthOptions_Inner = { "FocalLengthOptions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualCameraCineCameraComponent_Statics::NewProp_FocalLengthOptions_MetaData[] = {
		{ "Category", "Current Camera Settings" },
		{ "Comment", "/** List of preset focal length options, focal length will be one of these values, unless manually zooming */" },
		{ "ModuleRelativePath", "Public/VirtualCameraCineCameraComponent.h" },
		{ "ToolTip", "List of preset focal length options, focal length will be one of these values, unless manually zooming" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVirtualCameraCineCameraComponent_Statics::NewProp_FocalLengthOptions = { "FocalLengthOptions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVirtualCameraCineCameraComponent, FocalLengthOptions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVirtualCameraCineCameraComponent_Statics::NewProp_FocalLengthOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualCameraCineCameraComponent_Statics::NewProp_FocalLengthOptions_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVirtualCameraCineCameraComponent_Statics::NewProp_MatteOptions_Inner = { "MatteOptions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualCameraCineCameraComponent_Statics::NewProp_MatteOptions_MetaData[] = {
		{ "Category", "Current Camera Settings" },
		{ "Comment", "/** List of preset matte options to chose from, UI options will only pull from this, unless a filmback option with a custom matte is selected */" },
		{ "ModuleRelativePath", "Public/VirtualCameraCineCameraComponent.h" },
		{ "ToolTip", "List of preset matte options to chose from, UI options will only pull from this, unless a filmback option with a custom matte is selected" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVirtualCameraCineCameraComponent_Statics::NewProp_MatteOptions = { "MatteOptions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVirtualCameraCineCameraComponent, MatteOptions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVirtualCameraCineCameraComponent_Statics::NewProp_MatteOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualCameraCineCameraComponent_Statics::NewProp_MatteOptions_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVirtualCameraCineCameraComponent_Statics::NewProp_FilmbackOptions_ValueProp = { "FilmbackOptions", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FCameraFilmbackSettings, METADATA_PARAMS(nullptr, 0) }; // 833749679
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVirtualCameraCineCameraComponent_Statics::NewProp_FilmbackOptions_Key_KeyProp = { "FilmbackOptions_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualCameraCineCameraComponent_Statics::NewProp_FilmbackOptions_MetaData[] = {
		{ "Category", "Current Camera Settings" },
		{ "Comment", "/** List of preset filmback options, filmback will always be one of these values */" },
		{ "ModuleRelativePath", "Public/VirtualCameraCineCameraComponent.h" },
		{ "ToolTip", "List of preset filmback options, filmback will always be one of these values" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVirtualCameraCineCameraComponent_Statics::NewProp_FilmbackOptions = { "FilmbackOptions", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVirtualCameraCineCameraComponent, FilmbackOptions), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVirtualCameraCineCameraComponent_Statics::NewProp_FilmbackOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualCameraCineCameraComponent_Statics::NewProp_FilmbackOptions_MetaData)) }; // 833749679
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualCameraCineCameraComponent_Statics::NewProp_DesiredFilmbackSettings_MetaData[] = {
		{ "Category", "Current Camera Settings" },
		{ "Comment", "/** The desired filmback settings to be shown in the viewport within Virtual Camera UI window */" },
		{ "ModuleRelativePath", "Public/VirtualCameraCineCameraComponent.h" },
		{ "ToolTip", "The desired filmback settings to be shown in the viewport within Virtual Camera UI window" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVirtualCameraCineCameraComponent_Statics::NewProp_DesiredFilmbackSettings = { "DesiredFilmbackSettings", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVirtualCameraCineCameraComponent, DesiredFilmbackSettings), Z_Construct_UScriptStruct_FCameraFilmbackSettings, METADATA_PARAMS(Z_Construct_UClass_UVirtualCameraCineCameraComponent_Statics::NewProp_DesiredFilmbackSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualCameraCineCameraComponent_Statics::NewProp_DesiredFilmbackSettings_MetaData)) }; // 833749679
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualCameraCineCameraComponent_Statics::NewProp_MatteAspectRatio_MetaData[] = {
		{ "Category", "Current Camera Settings" },
		{ "Comment", "/** The filmback settings to be used for additional letterboxing if desired */" },
		{ "ModuleRelativePath", "Public/VirtualCameraCineCameraComponent.h" },
		{ "ToolTip", "The filmback settings to be used for additional letterboxing if desired" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVirtualCameraCineCameraComponent_Statics::NewProp_MatteAspectRatio = { "MatteAspectRatio", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVirtualCameraCineCameraComponent, MatteAspectRatio), METADATA_PARAMS(Z_Construct_UClass_UVirtualCameraCineCameraComponent_Statics::NewProp_MatteAspectRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualCameraCineCameraComponent_Statics::NewProp_MatteAspectRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualCameraCineCameraComponent_Statics::NewProp_MatteOpacity_MetaData[] = {
		{ "Category", "Current Camera Settings" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** The opacity of the matte in the camera view */" },
		{ "ModuleRelativePath", "Public/VirtualCameraCineCameraComponent.h" },
		{ "ToolTip", "The opacity of the matte in the camera view" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVirtualCameraCineCameraComponent_Statics::NewProp_MatteOpacity = { "MatteOpacity", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVirtualCameraCineCameraComponent, MatteOpacity), METADATA_PARAMS(Z_Construct_UClass_UVirtualCameraCineCameraComponent_Statics::NewProp_MatteOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualCameraCineCameraComponent_Statics::NewProp_MatteOpacity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualCameraCineCameraComponent_Statics::NewProp_ViewSizeRatio_MetaData[] = {
		{ "Category", "Current Camera Settings" },
		{ "Comment", "/** The X and Y ratios of Desired View Size to Actual View Size (calculated as Desired/ Actual) */" },
		{ "ModuleRelativePath", "Public/VirtualCameraCineCameraComponent.h" },
		{ "ToolTip", "The X and Y ratios of Desired View Size to Actual View Size (calculated as Desired/ Actual)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVirtualCameraCineCameraComponent_Statics::NewProp_ViewSizeRatio = { "ViewSizeRatio", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVirtualCameraCineCameraComponent, ViewSizeRatio), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UVirtualCameraCineCameraComponent_Statics::NewProp_ViewSizeRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualCameraCineCameraComponent_Statics::NewProp_ViewSizeRatio_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVirtualCameraCineCameraComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualCameraCineCameraComponent_Statics::NewProp_ApertureOptions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualCameraCineCameraComponent_Statics::NewProp_ApertureOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualCameraCineCameraComponent_Statics::NewProp_FocalLengthOptions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualCameraCineCameraComponent_Statics::NewProp_FocalLengthOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualCameraCineCameraComponent_Statics::NewProp_MatteOptions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualCameraCineCameraComponent_Statics::NewProp_MatteOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualCameraCineCameraComponent_Statics::NewProp_FilmbackOptions_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualCameraCineCameraComponent_Statics::NewProp_FilmbackOptions_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualCameraCineCameraComponent_Statics::NewProp_FilmbackOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualCameraCineCameraComponent_Statics::NewProp_DesiredFilmbackSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualCameraCineCameraComponent_Statics::NewProp_MatteAspectRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualCameraCineCameraComponent_Statics::NewProp_MatteOpacity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualCameraCineCameraComponent_Statics::NewProp_ViewSizeRatio,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVirtualCameraCineCameraComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVirtualCameraCineCameraComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVirtualCameraCineCameraComponent_Statics::ClassParams = {
		&UVirtualCameraCineCameraComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVirtualCameraCineCameraComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualCameraCineCameraComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVirtualCameraCineCameraComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualCameraCineCameraComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVirtualCameraCineCameraComponent()
	{
		if (!Z_Registration_Info_UClass_UVirtualCameraCineCameraComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVirtualCameraCineCameraComponent.OuterSingleton, Z_Construct_UClass_UVirtualCameraCineCameraComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVirtualCameraCineCameraComponent.OuterSingleton;
	}
	template<> VIRTUALCAMERA_API UClass* StaticClass<UVirtualCameraCineCameraComponent>()
	{
		return UVirtualCameraCineCameraComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVirtualCameraCineCameraComponent);
	UVirtualCameraCineCameraComponent::~UVirtualCameraCineCameraComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraCineCameraComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraCineCameraComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVirtualCameraCineCameraComponent, UVirtualCameraCineCameraComponent::StaticClass, TEXT("UVirtualCameraCineCameraComponent"), &Z_Registration_Info_UClass_UVirtualCameraCineCameraComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVirtualCameraCineCameraComponent), 2806737892U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraCineCameraComponent_h_2810622036(TEXT("/Script/VirtualCamera"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraCineCameraComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraCineCameraComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
