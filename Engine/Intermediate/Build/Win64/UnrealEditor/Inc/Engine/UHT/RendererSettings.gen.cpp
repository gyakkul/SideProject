// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/RendererSettings.h"
#include "../../Source/Runtime/Engine/Public/PerPlatformProperties.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRendererSettings() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	ENGINE_API UClass* Z_Construct_UClass_URendererOverrideSettings();
	ENGINE_API UClass* Z_Construct_UClass_URendererOverrideSettings_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_URendererSettings();
	ENGINE_API UClass* Z_Construct_UClass_URendererSettings_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAlphaChannelMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAntiAliasingMethod();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAutoExposureMethodUI();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EClearSceneOptions();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECompositingSampleCount();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECustomDepthStencil();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDefaultBackBufferPixelFormat();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDynamicGlobalIlluminationMethod();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEarlyZPass();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EFixedFoveationLevels();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EGBufferFormat();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ELightUnits();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ELumenRayLightingMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ELumenSoftwareTracingMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMobileAntiAliasingMethod();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMobileFloatPrecisionMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMobilePlanarReflectionMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMobileShadingPath();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EReflectionMethod();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EShaderCompressionFormat();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EShadowMapMethod();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESkinCacheDefaultBehavior();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETranslucentSortPolicy();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EVelocityOutputPass();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EVertexDeformationOutputsVelocity();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EWorkingColorSpace();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformBool();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformInt();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EClearSceneOptions;
	static UEnum* EClearSceneOptions_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EClearSceneOptions.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EClearSceneOptions.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EClearSceneOptions, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EClearSceneOptions"));
		}
		return Z_Registration_Info_UEnum_EClearSceneOptions.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EClearSceneOptions::Type>()
	{
		return EClearSceneOptions_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EClearSceneOptions_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EClearSceneOptions_Statics::Enumerators[] = {
		{ "EClearSceneOptions::NoClear", (int64)EClearSceneOptions::NoClear },
		{ "EClearSceneOptions::HardwareClear", (int64)EClearSceneOptions::HardwareClear },
		{ "EClearSceneOptions::QuadAtMaxZ", (int64)EClearSceneOptions::QuadAtMaxZ },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EClearSceneOptions_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Enumerates ways to clear a scene.\n */" },
		{ "HardwareClear.DisplayName", "Hardware clear" },
		{ "HardwareClear.Name", "EClearSceneOptions::HardwareClear" },
		{ "HardwareClear.ToolTip", "Perform a full hardware clear before rendering. Most projects should use this option." },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "NoClear.DisplayName", "Do not clear" },
		{ "NoClear.Name", "EClearSceneOptions::NoClear" },
		{ "NoClear.ToolTip", "This option is fastest but can cause artifacts unless you render to every pixel. Make sure to use a skybox with this option!" },
		{ "QuadAtMaxZ.DisplayName", "Clear at far plane" },
		{ "QuadAtMaxZ.Name", "EClearSceneOptions::QuadAtMaxZ" },
		{ "QuadAtMaxZ.ToolTip", "Draws a quad to perform the clear at the far plane, this is faster than a hardware clear on some GPUs." },
		{ "ToolTip", "Enumerates ways to clear a scene." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EClearSceneOptions_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EClearSceneOptions",
		"EClearSceneOptions::Type",
		Z_Construct_UEnum_Engine_EClearSceneOptions_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EClearSceneOptions_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EClearSceneOptions_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EClearSceneOptions_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EClearSceneOptions()
	{
		if (!Z_Registration_Info_UEnum_EClearSceneOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EClearSceneOptions.InnerSingleton, Z_Construct_UEnum_Engine_EClearSceneOptions_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EClearSceneOptions.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECompositingSampleCount;
	static UEnum* ECompositingSampleCount_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECompositingSampleCount.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECompositingSampleCount.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ECompositingSampleCount, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ECompositingSampleCount"));
		}
		return Z_Registration_Info_UEnum_ECompositingSampleCount.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ECompositingSampleCount::Type>()
	{
		return ECompositingSampleCount_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ECompositingSampleCount_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ECompositingSampleCount_Statics::Enumerators[] = {
		{ "ECompositingSampleCount::One", (int64)ECompositingSampleCount::One },
		{ "ECompositingSampleCount::Two", (int64)ECompositingSampleCount::Two },
		{ "ECompositingSampleCount::Four", (int64)ECompositingSampleCount::Four },
		{ "ECompositingSampleCount::Eight", (int64)ECompositingSampleCount::Eight },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ECompositingSampleCount_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Enumerates available compositing sample counts.\n */" },
		{ "Eight.DisplayName", "8x MSAA" },
		{ "Eight.Name", "ECompositingSampleCount::Eight" },
		{ "Four.DisplayName", "4x MSAA" },
		{ "Four.Name", "ECompositingSampleCount::Four" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "One.DisplayName", "No MSAA" },
		{ "One.Name", "ECompositingSampleCount::One" },
		{ "ToolTip", "Enumerates available compositing sample counts." },
		{ "Two.DisplayName", "2x MSAA" },
		{ "Two.Name", "ECompositingSampleCount::Two" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ECompositingSampleCount_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ECompositingSampleCount",
		"ECompositingSampleCount::Type",
		Z_Construct_UEnum_Engine_ECompositingSampleCount_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ECompositingSampleCount_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ECompositingSampleCount_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ECompositingSampleCount_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ECompositingSampleCount()
	{
		if (!Z_Registration_Info_UEnum_ECompositingSampleCount.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECompositingSampleCount.InnerSingleton, Z_Construct_UEnum_Engine_ECompositingSampleCount_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECompositingSampleCount.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECustomDepthStencil;
	static UEnum* ECustomDepthStencil_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECustomDepthStencil.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECustomDepthStencil.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ECustomDepthStencil, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ECustomDepthStencil"));
		}
		return Z_Registration_Info_UEnum_ECustomDepthStencil.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ECustomDepthStencil::Type>()
	{
		return ECustomDepthStencil_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ECustomDepthStencil_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ECustomDepthStencil_Statics::Enumerators[] = {
		{ "ECustomDepthStencil::Disabled", (int64)ECustomDepthStencil::Disabled },
		{ "ECustomDepthStencil::Enabled", (int64)ECustomDepthStencil::Enabled },
		{ "ECustomDepthStencil::EnabledOnDemand", (int64)ECustomDepthStencil::EnabledOnDemand },
		{ "ECustomDepthStencil::EnabledWithStencil", (int64)ECustomDepthStencil::EnabledWithStencil },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ECustomDepthStencil_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Enumerates available options for custom depth.\n */" },
		{ "Disabled.Name", "ECustomDepthStencil::Disabled" },
		{ "Enabled.Name", "ECustomDepthStencil::Enabled" },
		{ "Enabled.ToolTip", "Depth buffer created immediately. Stencil disabled." },
		{ "EnabledOnDemand.Name", "ECustomDepthStencil::EnabledOnDemand" },
		{ "EnabledOnDemand.ToolTip", "Depth buffer created on first use, can save memory but cause stalls. Stencil disabled." },
		{ "EnabledWithStencil.Name", "ECustomDepthStencil::EnabledWithStencil" },
		{ "EnabledWithStencil.ToolTip", "Depth buffer created immediately. Stencil available for read/write." },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Enumerates available options for custom depth." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ECustomDepthStencil_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ECustomDepthStencil",
		"ECustomDepthStencil::Type",
		Z_Construct_UEnum_Engine_ECustomDepthStencil_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ECustomDepthStencil_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ECustomDepthStencil_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ECustomDepthStencil_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ECustomDepthStencil()
	{
		if (!Z_Registration_Info_UEnum_ECustomDepthStencil.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECustomDepthStencil.InnerSingleton, Z_Construct_UEnum_Engine_ECustomDepthStencil_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECustomDepthStencil.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEarlyZPass;
	static UEnum* EEarlyZPass_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEarlyZPass.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEarlyZPass.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EEarlyZPass, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EEarlyZPass"));
		}
		return Z_Registration_Info_UEnum_EEarlyZPass.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EEarlyZPass::Type>()
	{
		return EEarlyZPass_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EEarlyZPass_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EEarlyZPass_Statics::Enumerators[] = {
		{ "EEarlyZPass::None", (int64)EEarlyZPass::None },
		{ "EEarlyZPass::OpaqueOnly", (int64)EEarlyZPass::OpaqueOnly },
		{ "EEarlyZPass::OpaqueAndMasked", (int64)EEarlyZPass::OpaqueAndMasked },
		{ "EEarlyZPass::Auto", (int64)EEarlyZPass::Auto },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EEarlyZPass_Statics::Enum_MetaDataParams[] = {
		{ "Auto.DisplayName", "Decide automatically" },
		{ "Auto.Name", "EEarlyZPass::Auto" },
		{ "Auto.ToolTip", "Let the engine decide what to render in the early Z pass based on the features being used." },
		{ "Comment", "/**\n * Enumerates available options for early Z-passes.\n */" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EEarlyZPass::None" },
		{ "OpaqueAndMasked.DisplayName", "Opaque and masked meshes" },
		{ "OpaqueAndMasked.Name", "EEarlyZPass::OpaqueAndMasked" },
		{ "OpaqueOnly.DisplayName", "Opaque meshes only" },
		{ "OpaqueOnly.Name", "EEarlyZPass::OpaqueOnly" },
		{ "ToolTip", "Enumerates available options for early Z-passes." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EEarlyZPass_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EEarlyZPass",
		"EEarlyZPass::Type",
		Z_Construct_UEnum_Engine_EEarlyZPass_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EEarlyZPass_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EEarlyZPass_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EEarlyZPass_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EEarlyZPass()
	{
		if (!Z_Registration_Info_UEnum_EEarlyZPass.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEarlyZPass.InnerSingleton, Z_Construct_UEnum_Engine_EEarlyZPass_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEarlyZPass.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVelocityOutputPass;
	static UEnum* EVelocityOutputPass_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVelocityOutputPass.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVelocityOutputPass.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EVelocityOutputPass, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EVelocityOutputPass"));
		}
		return Z_Registration_Info_UEnum_EVelocityOutputPass.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EVelocityOutputPass::Type>()
	{
		return EVelocityOutputPass_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EVelocityOutputPass_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EVelocityOutputPass_Statics::Enumerators[] = {
		{ "EVelocityOutputPass::DepthPass", (int64)EVelocityOutputPass::DepthPass },
		{ "EVelocityOutputPass::BasePass", (int64)EVelocityOutputPass::BasePass },
		{ "EVelocityOutputPass::AfterBasePass", (int64)EVelocityOutputPass::AfterBasePass },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EVelocityOutputPass_Statics::Enum_MetaDataParams[] = {
		{ "AfterBasePass.DisplayName", "Write after base pass" },
		{ "AfterBasePass.Name", "EVelocityOutputPass::AfterBasePass" },
		{ "BasePass.DisplayName", "Write during base pass" },
		{ "BasePass.Name", "EVelocityOutputPass::BasePass" },
		{ "Comment", "/**\n * Enumerates available options for velocity pass.\n */" },
		{ "DepthPass.DisplayName", "Write during depth pass" },
		{ "DepthPass.Name", "EVelocityOutputPass::DepthPass" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Enumerates available options for velocity pass." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EVelocityOutputPass_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EVelocityOutputPass",
		"EVelocityOutputPass::Type",
		Z_Construct_UEnum_Engine_EVelocityOutputPass_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EVelocityOutputPass_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EVelocityOutputPass_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EVelocityOutputPass_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EVelocityOutputPass()
	{
		if (!Z_Registration_Info_UEnum_EVelocityOutputPass.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVelocityOutputPass.InnerSingleton, Z_Construct_UEnum_Engine_EVelocityOutputPass_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVelocityOutputPass.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVertexDeformationOutputsVelocity;
	static UEnum* EVertexDeformationOutputsVelocity_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVertexDeformationOutputsVelocity.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVertexDeformationOutputsVelocity.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EVertexDeformationOutputsVelocity, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EVertexDeformationOutputsVelocity"));
		}
		return Z_Registration_Info_UEnum_EVertexDeformationOutputsVelocity.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EVertexDeformationOutputsVelocity::Type>()
	{
		return EVertexDeformationOutputsVelocity_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EVertexDeformationOutputsVelocity_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EVertexDeformationOutputsVelocity_Statics::Enumerators[] = {
		{ "EVertexDeformationOutputsVelocity::Off", (int64)EVertexDeformationOutputsVelocity::Off },
		{ "EVertexDeformationOutputsVelocity::On", (int64)EVertexDeformationOutputsVelocity::On },
		{ "EVertexDeformationOutputsVelocity::Auto", (int64)EVertexDeformationOutputsVelocity::Auto },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EVertexDeformationOutputsVelocity_Statics::Enum_MetaDataParams[] = {
		{ "Auto.Name", "EVertexDeformationOutputsVelocity::Auto" },
		{ "Auto.ToolTip", "On when the performance cost is low (velocity in depth or base pass)." },
		{ "Comment", "/**\n * Enumerates available options for Vertex Deformation Outputs Velocity.\n */" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "Off.Name", "EVertexDeformationOutputsVelocity::Off" },
		{ "Off.ToolTip", "Always off" },
		{ "On.Name", "EVertexDeformationOutputsVelocity::On" },
		{ "On.ToolTip", "Always on" },
		{ "ToolTip", "Enumerates available options for Vertex Deformation Outputs Velocity." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EVertexDeformationOutputsVelocity_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EVertexDeformationOutputsVelocity",
		"EVertexDeformationOutputsVelocity::Type",
		Z_Construct_UEnum_Engine_EVertexDeformationOutputsVelocity_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EVertexDeformationOutputsVelocity_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EVertexDeformationOutputsVelocity_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EVertexDeformationOutputsVelocity_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EVertexDeformationOutputsVelocity()
	{
		if (!Z_Registration_Info_UEnum_EVertexDeformationOutputsVelocity.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVertexDeformationOutputsVelocity.InnerSingleton, Z_Construct_UEnum_Engine_EVertexDeformationOutputsVelocity_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVertexDeformationOutputsVelocity.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAlphaChannelMode;
	static UEnum* EAlphaChannelMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAlphaChannelMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAlphaChannelMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EAlphaChannelMode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EAlphaChannelMode"));
		}
		return Z_Registration_Info_UEnum_EAlphaChannelMode.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EAlphaChannelMode::Type>()
	{
		return EAlphaChannelMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EAlphaChannelMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EAlphaChannelMode_Statics::Enumerators[] = {
		{ "EAlphaChannelMode::Disabled", (int64)EAlphaChannelMode::Disabled },
		{ "EAlphaChannelMode::LinearColorSpaceOnly", (int64)EAlphaChannelMode::LinearColorSpaceOnly },
		{ "EAlphaChannelMode::AllowThroughTonemapper", (int64)EAlphaChannelMode::AllowThroughTonemapper },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EAlphaChannelMode_Statics::Enum_MetaDataParams[] = {
		{ "AllowThroughTonemapper.Comment", "/** Maintain alpha channel within linear color space, but also pass it through the tonemapper.\n\x09\x09 *\n\x09\x09 * CAUTION: Passing the alpha channel through the tonemapper can unevitably lead to pretty poor compositing quality as\n\x09\x09 * opposed to linear color space compositing, especially on purely additive pixels bloom can generate. This settings is\n\x09\x09 * exclusively targeting broadcast industry in case of hardware unable to do linear color space compositing and\n\x09\x09 * tonemapping.\n\x09\x09 */" },
		{ "AllowThroughTonemapper.DisplayName", "Allow through tonemapper" },
		{ "AllowThroughTonemapper.Name", "EAlphaChannelMode::AllowThroughTonemapper" },
		{ "AllowThroughTonemapper.ToolTip", "Maintain alpha channel within linear color space, but also pass it through the tonemapper.\n\nCAUTION: Passing the alpha channel through the tonemapper can unevitably lead to pretty poor compositing quality as\nopposed to linear color space compositing, especially on purely additive pixels bloom can generate. This settings is\nexclusively targeting broadcast industry in case of hardware unable to do linear color space compositing and\ntonemapping." },
		{ "Comment", "/**\n * Enumerates available options for alpha channel through post processing. The renderer will always generate premultiplied RGBA\n * with alpha as translucency (0 = fully opaque; 1 = fully translucent).\n */" },
		{ "Disabled.Comment", "/** Disabled, reducing GPU cost to the minimum. (default). */" },
		{ "Disabled.DisplayName", "Disabled" },
		{ "Disabled.Name", "EAlphaChannelMode::Disabled" },
		{ "Disabled.ToolTip", "Disabled, reducing GPU cost to the minimum. (default)." },
		{ "LinearColorSpaceOnly.Comment", "/** Maintain alpha channel only within linear color space. Tonemapper won't output alpha channel. */" },
		{ "LinearColorSpaceOnly.DisplayName", "Linear color space only" },
		{ "LinearColorSpaceOnly.Name", "EAlphaChannelMode::LinearColorSpaceOnly" },
		{ "LinearColorSpaceOnly.ToolTip", "Maintain alpha channel only within linear color space. Tonemapper won't output alpha channel." },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Enumerates available options for alpha channel through post processing. The renderer will always generate premultiplied RGBA\nwith alpha as translucency (0 = fully opaque; 1 = fully translucent)." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EAlphaChannelMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EAlphaChannelMode",
		"EAlphaChannelMode::Type",
		Z_Construct_UEnum_Engine_EAlphaChannelMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAlphaChannelMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EAlphaChannelMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAlphaChannelMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EAlphaChannelMode()
	{
		if (!Z_Registration_Info_UEnum_EAlphaChannelMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAlphaChannelMode.InnerSingleton, Z_Construct_UEnum_Engine_EAlphaChannelMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAlphaChannelMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAutoExposureMethodUI;
	static UEnum* EAutoExposureMethodUI_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAutoExposureMethodUI.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAutoExposureMethodUI.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EAutoExposureMethodUI, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EAutoExposureMethodUI"));
		}
		return Z_Registration_Info_UEnum_EAutoExposureMethodUI.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EAutoExposureMethodUI::Type>()
	{
		return EAutoExposureMethodUI_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EAutoExposureMethodUI_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EAutoExposureMethodUI_Statics::Enumerators[] = {
		{ "EAutoExposureMethodUI::AEM_Histogram", (int64)EAutoExposureMethodUI::AEM_Histogram },
		{ "EAutoExposureMethodUI::AEM_Basic", (int64)EAutoExposureMethodUI::AEM_Basic },
		{ "EAutoExposureMethodUI::AEM_Manual", (int64)EAutoExposureMethodUI::AEM_Manual },
		{ "EAutoExposureMethodUI::AEM_MAX", (int64)EAutoExposureMethodUI::AEM_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EAutoExposureMethodUI_Statics::Enum_MetaDataParams[] = {
		{ "AEM_Basic.Comment", "/** faster method that computes single value by downsampling */" },
		{ "AEM_Basic.DisplayName", "Auto Exposure Basic" },
		{ "AEM_Basic.Name", "EAutoExposureMethodUI::AEM_Basic" },
		{ "AEM_Basic.ToolTip", "faster method that computes single value by downsampling" },
		{ "AEM_Histogram.Comment", "/** requires compute shader to construct 64 bin histogram */" },
		{ "AEM_Histogram.DisplayName", "Auto Exposure Histogram" },
		{ "AEM_Histogram.Name", "EAutoExposureMethodUI::AEM_Histogram" },
		{ "AEM_Histogram.ToolTip", "requires compute shader to construct 64 bin histogram" },
		{ "AEM_Manual.Comment", "/** Uses camera settings. */" },
		{ "AEM_Manual.DisplayName", "Manual" },
		{ "AEM_Manual.Name", "EAutoExposureMethodUI::AEM_Manual" },
		{ "AEM_Manual.ToolTip", "Uses camera settings." },
		{ "AEM_MAX.Name", "EAutoExposureMethodUI::AEM_MAX" },
		{ "Comment", "/** used by FPostProcessSettings AutoExposure*/" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "used by FPostProcessSettings AutoExposure" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EAutoExposureMethodUI_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EAutoExposureMethodUI",
		"EAutoExposureMethodUI::Type",
		Z_Construct_UEnum_Engine_EAutoExposureMethodUI_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAutoExposureMethodUI_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EAutoExposureMethodUI_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAutoExposureMethodUI_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EAutoExposureMethodUI()
	{
		if (!Z_Registration_Info_UEnum_EAutoExposureMethodUI.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAutoExposureMethodUI.InnerSingleton, Z_Construct_UEnum_Engine_EAutoExposureMethodUI_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAutoExposureMethodUI.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDefaultBackBufferPixelFormat;
	static UEnum* EDefaultBackBufferPixelFormat_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDefaultBackBufferPixelFormat.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDefaultBackBufferPixelFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EDefaultBackBufferPixelFormat, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EDefaultBackBufferPixelFormat"));
		}
		return Z_Registration_Info_UEnum_EDefaultBackBufferPixelFormat.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EDefaultBackBufferPixelFormat::Type>()
	{
		return EDefaultBackBufferPixelFormat_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EDefaultBackBufferPixelFormat_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EDefaultBackBufferPixelFormat_Statics::Enumerators[] = {
		{ "EDefaultBackBufferPixelFormat::DBBPF_B8G8R8A8", (int64)EDefaultBackBufferPixelFormat::DBBPF_B8G8R8A8 },
		{ "EDefaultBackBufferPixelFormat::DBBPF_A16B16G16R16_DEPRECATED", (int64)EDefaultBackBufferPixelFormat::DBBPF_A16B16G16R16_DEPRECATED },
		{ "EDefaultBackBufferPixelFormat::DBBPF_FloatRGB_DEPRECATED", (int64)EDefaultBackBufferPixelFormat::DBBPF_FloatRGB_DEPRECATED },
		{ "EDefaultBackBufferPixelFormat::DBBPF_FloatRGBA", (int64)EDefaultBackBufferPixelFormat::DBBPF_FloatRGBA },
		{ "EDefaultBackBufferPixelFormat::DBBPF_A2B10G10R10", (int64)EDefaultBackBufferPixelFormat::DBBPF_A2B10G10R10 },
		{ "EDefaultBackBufferPixelFormat::DBBPF_MAX", (int64)EDefaultBackBufferPixelFormat::DBBPF_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EDefaultBackBufferPixelFormat_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** used by GetDefaultBackBufferPixelFormat*/" },
		{ "DBBPF_A16B16G16R16_DEPRECATED.DisplayName", "DEPRECATED - 16bit RGBA" },
		{ "DBBPF_A16B16G16R16_DEPRECATED.Hidden", "" },
		{ "DBBPF_A16B16G16R16_DEPRECATED.Name", "EDefaultBackBufferPixelFormat::DBBPF_A16B16G16R16_DEPRECATED" },
		{ "DBBPF_A2B10G10R10.DisplayName", "10bit RGB, 2bit Alpha" },
		{ "DBBPF_A2B10G10R10.Name", "EDefaultBackBufferPixelFormat::DBBPF_A2B10G10R10" },
		{ "DBBPF_B8G8R8A8.DisplayName", "8bit RGBA" },
		{ "DBBPF_B8G8R8A8.Name", "EDefaultBackBufferPixelFormat::DBBPF_B8G8R8A8" },
		{ "DBBPF_FloatRGB_DEPRECATED.DisplayName", "DEPRECATED - Float RGB" },
		{ "DBBPF_FloatRGB_DEPRECATED.Hidden", "" },
		{ "DBBPF_FloatRGB_DEPRECATED.Name", "EDefaultBackBufferPixelFormat::DBBPF_FloatRGB_DEPRECATED" },
		{ "DBBPF_FloatRGBA.DisplayName", "Float RGBA" },
		{ "DBBPF_FloatRGBA.Name", "EDefaultBackBufferPixelFormat::DBBPF_FloatRGBA" },
		{ "DBBPF_MAX.Name", "EDefaultBackBufferPixelFormat::DBBPF_MAX" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "used by GetDefaultBackBufferPixelFormat" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EDefaultBackBufferPixelFormat_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EDefaultBackBufferPixelFormat",
		"EDefaultBackBufferPixelFormat::Type",
		Z_Construct_UEnum_Engine_EDefaultBackBufferPixelFormat_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EDefaultBackBufferPixelFormat_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EDefaultBackBufferPixelFormat_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EDefaultBackBufferPixelFormat_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EDefaultBackBufferPixelFormat()
	{
		if (!Z_Registration_Info_UEnum_EDefaultBackBufferPixelFormat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDefaultBackBufferPixelFormat.InnerSingleton, Z_Construct_UEnum_Engine_EDefaultBackBufferPixelFormat_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDefaultBackBufferPixelFormat.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFixedFoveationLevels;
	static UEnum* EFixedFoveationLevels_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFixedFoveationLevels.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFixedFoveationLevels.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EFixedFoveationLevels, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EFixedFoveationLevels"));
		}
		return Z_Registration_Info_UEnum_EFixedFoveationLevels.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EFixedFoveationLevels::Type>()
	{
		return EFixedFoveationLevels_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EFixedFoveationLevels_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EFixedFoveationLevels_Statics::Enumerators[] = {
		{ "EFixedFoveationLevels::Disabled", (int64)EFixedFoveationLevels::Disabled },
		{ "EFixedFoveationLevels::Low", (int64)EFixedFoveationLevels::Low },
		{ "EFixedFoveationLevels::Medium", (int64)EFixedFoveationLevels::Medium },
		{ "EFixedFoveationLevels::High", (int64)EFixedFoveationLevels::High },
		{ "EFixedFoveationLevels::HighTop", (int64)EFixedFoveationLevels::HighTop },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EFixedFoveationLevels_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n* Enumerates VRS Fixed-foveation levels\n*/" },
		{ "Disabled.DisplayName", "Disabled" },
		{ "Disabled.Name", "EFixedFoveationLevels::Disabled" },
		{ "High.DisplayName", "High" },
		{ "High.Name", "EFixedFoveationLevels::High" },
		{ "HighTop.DisplayName", "High Top" },
		{ "HighTop.Name", "EFixedFoveationLevels::HighTop" },
		{ "Low.DisplayName", "Low" },
		{ "Low.Name", "EFixedFoveationLevels::Low" },
		{ "Medium.DisplayName", "Medium" },
		{ "Medium.Name", "EFixedFoveationLevels::Medium" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Enumerates VRS Fixed-foveation levels" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EFixedFoveationLevels_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EFixedFoveationLevels",
		"EFixedFoveationLevels::Type",
		Z_Construct_UEnum_Engine_EFixedFoveationLevels_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EFixedFoveationLevels_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EFixedFoveationLevels_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EFixedFoveationLevels_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EFixedFoveationLevels()
	{
		if (!Z_Registration_Info_UEnum_EFixedFoveationLevels.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFixedFoveationLevels.InnerSingleton, Z_Construct_UEnum_Engine_EFixedFoveationLevels_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFixedFoveationLevels.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMobileAntiAliasingMethod;
	static UEnum* EMobileAntiAliasingMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMobileAntiAliasingMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMobileAntiAliasingMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMobileAntiAliasingMethod, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EMobileAntiAliasingMethod"));
		}
		return Z_Registration_Info_UEnum_EMobileAntiAliasingMethod.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EMobileAntiAliasingMethod::Type>()
	{
		return EMobileAntiAliasingMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EMobileAntiAliasingMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EMobileAntiAliasingMethod_Statics::Enumerators[] = {
		{ "EMobileAntiAliasingMethod::None", (int64)EMobileAntiAliasingMethod::None },
		{ "EMobileAntiAliasingMethod::FXAA", (int64)EMobileAntiAliasingMethod::FXAA },
		{ "EMobileAntiAliasingMethod::TemporalAA", (int64)EMobileAntiAliasingMethod::TemporalAA },
		{ "EMobileAntiAliasingMethod::MSAA", (int64)EMobileAntiAliasingMethod::MSAA },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EMobileAntiAliasingMethod_Statics::Enum_MetaDataParams[] = {
		{ "FXAA.DisplayName", "Fast Approximate Anti-Aliasing (FXAA)" },
		{ "FXAA.Name", "EMobileAntiAliasingMethod::FXAA" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "MSAA.Comment", "/** Only supported with forward shading.  MSAA sample count is controlled by r.MSAACount. */" },
		{ "MSAA.DisplayName", "Multisample Anti-Aliasing (MSAA)" },
		{ "MSAA.Name", "EMobileAntiAliasingMethod::MSAA" },
		{ "MSAA.ToolTip", "Only supported with forward shading.  MSAA sample count is controlled by r.MSAACount." },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EMobileAntiAliasingMethod::None" },
		{ "TemporalAA.DisplayName", "Temporal Anti-Aliasing (TAA)" },
		{ "TemporalAA.Name", "EMobileAntiAliasingMethod::TemporalAA" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EMobileAntiAliasingMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EMobileAntiAliasingMethod",
		"EMobileAntiAliasingMethod::Type",
		Z_Construct_UEnum_Engine_EMobileAntiAliasingMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMobileAntiAliasingMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EMobileAntiAliasingMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMobileAntiAliasingMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EMobileAntiAliasingMethod()
	{
		if (!Z_Registration_Info_UEnum_EMobileAntiAliasingMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMobileAntiAliasingMethod.InnerSingleton, Z_Construct_UEnum_Engine_EMobileAntiAliasingMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMobileAntiAliasingMethod.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMobileFloatPrecisionMode;
	static UEnum* EMobileFloatPrecisionMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMobileFloatPrecisionMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMobileFloatPrecisionMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMobileFloatPrecisionMode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EMobileFloatPrecisionMode"));
		}
		return Z_Registration_Info_UEnum_EMobileFloatPrecisionMode.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EMobileFloatPrecisionMode::Type>()
	{
		return EMobileFloatPrecisionMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EMobileFloatPrecisionMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EMobileFloatPrecisionMode_Statics::Enumerators[] = {
		{ "EMobileFloatPrecisionMode::Half", (int64)EMobileFloatPrecisionMode::Half },
		{ "EMobileFloatPrecisionMode::Full_MaterialExpressionOnly", (int64)EMobileFloatPrecisionMode::Full_MaterialExpressionOnly },
		{ "EMobileFloatPrecisionMode::Full", (int64)EMobileFloatPrecisionMode::Full },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EMobileFloatPrecisionMode_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** The default float precision for material's pixel shaders on mobile devices*/" },
		{ "Full.Comment", "/** All the floats are full-precision */" },
		{ "Full.DisplayName", "Use Full-precision for every float" },
		{ "Full.Name", "EMobileFloatPrecisionMode::Full" },
		{ "Full.ToolTip", "All the floats are full-precision" },
		{ "Full_MaterialExpressionOnly.Comment", "/** Half precision, except Full precision for material floats and explicit floats in .ush/.usf*/" },
		{ "Full_MaterialExpressionOnly.DisplayName", "Use Full-precision for MaterialExpressions only" },
		{ "Full_MaterialExpressionOnly.Name", "EMobileFloatPrecisionMode::Full_MaterialExpressionOnly" },
		{ "Full_MaterialExpressionOnly.ToolTip", "Half precision, except Full precision for material floats and explicit floats in .ush/.usf" },
		{ "Half.Comment", "/** Half precision, except explict 'float' in .ush/.usf*/" },
		{ "Half.DisplayName", "Use Half-precision" },
		{ "Half.Name", "EMobileFloatPrecisionMode::Half" },
		{ "Half.ToolTip", "Half precision, except explict 'float' in .ush/.usf" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "The default float precision for material's pixel shaders on mobile devices" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EMobileFloatPrecisionMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EMobileFloatPrecisionMode",
		"EMobileFloatPrecisionMode::Type",
		Z_Construct_UEnum_Engine_EMobileFloatPrecisionMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMobileFloatPrecisionMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EMobileFloatPrecisionMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMobileFloatPrecisionMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EMobileFloatPrecisionMode()
	{
		if (!Z_Registration_Info_UEnum_EMobileFloatPrecisionMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMobileFloatPrecisionMode.InnerSingleton, Z_Construct_UEnum_Engine_EMobileFloatPrecisionMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMobileFloatPrecisionMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMobileShadingPath;
	static UEnum* EMobileShadingPath_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMobileShadingPath.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMobileShadingPath.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMobileShadingPath, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EMobileShadingPath"));
		}
		return Z_Registration_Info_UEnum_EMobileShadingPath.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EMobileShadingPath::Type>()
	{
		return EMobileShadingPath_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EMobileShadingPath_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EMobileShadingPath_Statics::Enumerators[] = {
		{ "EMobileShadingPath::Forward", (int64)EMobileShadingPath::Forward },
		{ "EMobileShadingPath::Deferred", (int64)EMobileShadingPath::Deferred },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EMobileShadingPath_Statics::Enum_MetaDataParams[] = {
		{ "Deferred.Comment", "/** Use deferred shading. This path supports additional features compared to the Forward option but requires more modern devices. Features include: IES light profiles, light functions, lit deferred decals. Does not support MSAA. */" },
		{ "Deferred.DisplayName", "Deferred Shading" },
		{ "Deferred.Name", "EMobileShadingPath::Deferred" },
		{ "Deferred.ToolTip", "Use deferred shading. This path supports additional features compared to the Forward option but requires more modern devices. Features include: IES light profiles, light functions, lit deferred decals. Does not support MSAA." },
		{ "Forward.Comment", "/** The default shading path for mobile, supported on all devices. */" },
		{ "Forward.DisplayName", "Forward Shading" },
		{ "Forward.Name", "EMobileShadingPath::Forward" },
		{ "Forward.ToolTip", "The default shading path for mobile, supported on all devices." },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EMobileShadingPath_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EMobileShadingPath",
		"EMobileShadingPath::Type",
		Z_Construct_UEnum_Engine_EMobileShadingPath_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMobileShadingPath_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EMobileShadingPath_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMobileShadingPath_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EMobileShadingPath()
	{
		if (!Z_Registration_Info_UEnum_EMobileShadingPath.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMobileShadingPath.InnerSingleton, Z_Construct_UEnum_Engine_EMobileShadingPath_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMobileShadingPath.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EShaderCompressionFormat;
	static UEnum* EShaderCompressionFormat_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EShaderCompressionFormat.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EShaderCompressionFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EShaderCompressionFormat, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EShaderCompressionFormat"));
		}
		return Z_Registration_Info_UEnum_EShaderCompressionFormat.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EShaderCompressionFormat::Type>()
	{
		return EShaderCompressionFormat_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EShaderCompressionFormat_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EShaderCompressionFormat_Statics::Enumerators[] = {
		{ "EShaderCompressionFormat::None", (int64)EShaderCompressionFormat::None },
		{ "EShaderCompressionFormat::LZ4", (int64)EShaderCompressionFormat::LZ4 },
		{ "EShaderCompressionFormat::Oodle", (int64)EShaderCompressionFormat::Oodle },
		{ "EShaderCompressionFormat::Zlib", (int64)EShaderCompressionFormat::Zlib },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EShaderCompressionFormat_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Enumerates supported shader compression formats.\n */" },
		{ "LZ4.DisplayName", "LZ4" },
		{ "LZ4.Name", "EShaderCompressionFormat::LZ4" },
		{ "LZ4.ToolTip", "Compressing using LZ4" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "None.DisplayName", "Do not compress" },
		{ "None.Name", "EShaderCompressionFormat::None" },
		{ "None.ToolTip", "Fastest, but disk and memory footprint will be large" },
		{ "Oodle.DisplayName", "Oodle" },
		{ "Oodle.Name", "EShaderCompressionFormat::Oodle" },
		{ "Oodle.ToolTip", "Compressing using Oodle (default)" },
		{ "ToolTip", "Enumerates supported shader compression formats." },
		{ "Zlib.DisplayName", "ZLib" },
		{ "Zlib.Name", "EShaderCompressionFormat::Zlib" },
		{ "Zlib.ToolTip", "Compressing using Zlib" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EShaderCompressionFormat_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EShaderCompressionFormat",
		"EShaderCompressionFormat::Type",
		Z_Construct_UEnum_Engine_EShaderCompressionFormat_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EShaderCompressionFormat_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EShaderCompressionFormat_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EShaderCompressionFormat_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EShaderCompressionFormat()
	{
		if (!Z_Registration_Info_UEnum_EShaderCompressionFormat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EShaderCompressionFormat.InnerSingleton, Z_Construct_UEnum_Engine_EShaderCompressionFormat_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EShaderCompressionFormat.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELumenSoftwareTracingMode;
	static UEnum* ELumenSoftwareTracingMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELumenSoftwareTracingMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELumenSoftwareTracingMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ELumenSoftwareTracingMode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ELumenSoftwareTracingMode"));
		}
		return Z_Registration_Info_UEnum_ELumenSoftwareTracingMode.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ELumenSoftwareTracingMode::Type>()
	{
		return ELumenSoftwareTracingMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ELumenSoftwareTracingMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ELumenSoftwareTracingMode_Statics::Enumerators[] = {
		{ "ELumenSoftwareTracingMode::DetailTracing", (int64)ELumenSoftwareTracingMode::DetailTracing },
		{ "ELumenSoftwareTracingMode::GlobalTracing", (int64)ELumenSoftwareTracingMode::GlobalTracing },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ELumenSoftwareTracingMode_Statics::Enum_MetaDataParams[] = {
		{ "DetailTracing.DisplayName", "Detail Tracing" },
		{ "DetailTracing.Name", "ELumenSoftwareTracingMode::DetailTracing" },
		{ "DetailTracing.ToolTip", "When using Software Ray Tracing, Lumen will trace against individual mesh's Distance Fields for highest quality.  Cost can be high in scenes with many overlapping instances." },
		{ "GlobalTracing.DisplayName", "Global Tracing" },
		{ "GlobalTracing.Name", "ELumenSoftwareTracingMode::GlobalTracing" },
		{ "GlobalTracing.ToolTip", "When using Software Ray Tracing, Lumen will trace against the Global Distance Field for fastest traces." },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ELumenSoftwareTracingMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ELumenSoftwareTracingMode",
		"ELumenSoftwareTracingMode::Type",
		Z_Construct_UEnum_Engine_ELumenSoftwareTracingMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ELumenSoftwareTracingMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ELumenSoftwareTracingMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ELumenSoftwareTracingMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ELumenSoftwareTracingMode()
	{
		if (!Z_Registration_Info_UEnum_ELumenSoftwareTracingMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELumenSoftwareTracingMode.InnerSingleton, Z_Construct_UEnum_Engine_ELumenSoftwareTracingMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELumenSoftwareTracingMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELumenRayLightingMode;
	static UEnum* ELumenRayLightingMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELumenRayLightingMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELumenRayLightingMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ELumenRayLightingMode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ELumenRayLightingMode"));
		}
		return Z_Registration_Info_UEnum_ELumenRayLightingMode.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ELumenRayLightingMode>()
	{
		return ELumenRayLightingMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ELumenRayLightingMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ELumenRayLightingMode_Statics::Enumerators[] = {
		{ "ELumenRayLightingMode::SurfaceCache", (int64)ELumenRayLightingMode::SurfaceCache },
		{ "ELumenRayLightingMode::HitLighting", (int64)ELumenRayLightingMode::HitLighting },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ELumenRayLightingMode_Statics::Enum_MetaDataParams[] = {
		{ "HitLighting.Comment", "/* Calculate lighting at the ray hit point.  This method gives the highest reflection quality, but greatly increases GPU cost, as the material needs to be evaluated and shadow rays traced.  The Surface Cache will still be used for Diffuse Indirect lighting (GI seen in Reflections). */" },
		{ "HitLighting.DisplayName", "Hit Lighting for Reflections" },
		{ "HitLighting.Name", "ELumenRayLightingMode::HitLighting" },
		{ "HitLighting.ToolTip", "Calculate lighting at the ray hit point.  This method gives the highest reflection quality, but greatly increases GPU cost, as the material needs to be evaluated and shadow rays traced.  The Surface Cache will still be used for Diffuse Indirect lighting (GI seen in Reflections)." },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "SurfaceCache.Comment", "/* Use the Lumen Surface Cache to light reflection rays.  This method gives the best reflection performance. */" },
		{ "SurfaceCache.DisplayName", "Surface Cache" },
		{ "SurfaceCache.Name", "ELumenRayLightingMode::SurfaceCache" },
		{ "SurfaceCache.ToolTip", "Use the Lumen Surface Cache to light reflection rays.  This method gives the best reflection performance." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ELumenRayLightingMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ELumenRayLightingMode",
		"ELumenRayLightingMode",
		Z_Construct_UEnum_Engine_ELumenRayLightingMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ELumenRayLightingMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ELumenRayLightingMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ELumenRayLightingMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ELumenRayLightingMode()
	{
		if (!Z_Registration_Info_UEnum_ELumenRayLightingMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELumenRayLightingMode.InnerSingleton, Z_Construct_UEnum_Engine_ELumenRayLightingMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELumenRayLightingMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWorkingColorSpace;
	static UEnum* EWorkingColorSpace_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWorkingColorSpace.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWorkingColorSpace.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EWorkingColorSpace, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EWorkingColorSpace"));
		}
		return Z_Registration_Info_UEnum_EWorkingColorSpace.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EWorkingColorSpace::Type>()
	{
		return EWorkingColorSpace_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EWorkingColorSpace_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EWorkingColorSpace_Statics::Enumerators[] = {
		{ "EWorkingColorSpace::sRGB", (int64)EWorkingColorSpace::sRGB },
		{ "EWorkingColorSpace::Rec2020", (int64)EWorkingColorSpace::Rec2020 },
		{ "EWorkingColorSpace::ACESAP0", (int64)EWorkingColorSpace::ACESAP0 },
		{ "EWorkingColorSpace::ACESAP1", (int64)EWorkingColorSpace::ACESAP1 },
		{ "EWorkingColorSpace::P3DCI", (int64)EWorkingColorSpace::P3DCI },
		{ "EWorkingColorSpace::P3D65", (int64)EWorkingColorSpace::P3D65 },
		{ "EWorkingColorSpace::Custom", (int64)EWorkingColorSpace::Custom },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EWorkingColorSpace_Statics::Enum_MetaDataParams[] = {
		{ "ACESAP0.DIsplayName", "ACES AP0" },
		{ "ACESAP0.Name", "EWorkingColorSpace::ACESAP0" },
		{ "ACESAP0.ToolTip", "ACES AP0 wide gamut primaries, with D60 white point." },
		{ "ACESAP1.DIsplayName", "ACES AP1 / ACEScg" },
		{ "ACESAP1.Name", "EWorkingColorSpace::ACESAP1" },
		{ "ACESAP1.ToolTip", "ACES AP1 / ACEScg wide gamut primaries, with D60 white point." },
		{ "Custom.DisplayName", "Custom" },
		{ "Custom.Name", "EWorkingColorSpace::Custom" },
		{ "Custom.ToolTip", "User defined color space and white point." },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "P3D65.DisplayName", "P3D65" },
		{ "P3D65.Name", "EWorkingColorSpace::P3D65" },
		{ "P3D65.ToolTip", "P3 (Display) primaries, with D65 white point." },
		{ "P3DCI.DisplayName", "P3DCI" },
		{ "P3DCI.Name", "EWorkingColorSpace::P3DCI" },
		{ "P3DCI.ToolTip", "P3 (Theater) primaries, with DCI Calibration white point." },
		{ "Rec2020.DisplayName", "Rec2020" },
		{ "Rec2020.Name", "EWorkingColorSpace::Rec2020" },
		{ "Rec2020.ToolTip", "Rec2020 (BT.2020) primaries with D65 white point." },
		{ "sRGB.DisplayName", "sRGB / Rec709" },
		{ "sRGB.Name", "EWorkingColorSpace::sRGB" },
		{ "sRGB.ToolTip", "sRGB / Rec709 (BT.709) color primaries, with D65 white point." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EWorkingColorSpace_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EWorkingColorSpace",
		"EWorkingColorSpace::Type",
		Z_Construct_UEnum_Engine_EWorkingColorSpace_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EWorkingColorSpace_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EWorkingColorSpace_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EWorkingColorSpace_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EWorkingColorSpace()
	{
		if (!Z_Registration_Info_UEnum_EWorkingColorSpace.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWorkingColorSpace.InnerSingleton, Z_Construct_UEnum_Engine_EWorkingColorSpace_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWorkingColorSpace.InnerSingleton;
	}
	void URendererSettings::StaticRegisterNativesURendererSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URendererSettings);
	UClass* Z_Construct_UClass_URendererSettings_NoRegister()
	{
		return URendererSettings::StaticClass();
	}
	struct Z_Construct_UClass_URendererSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MobileShadingPath_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_MobileShadingPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMobileSupportGPUScene_MetaData[];
#endif
		static void NewProp_bMobileSupportGPUScene_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMobileSupportGPUScene;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MobileAntiAliasing_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_MobileAntiAliasing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MobileFloatPrecisionMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_MobileFloatPrecisionMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMobileAllowDitheredLODTransition_MetaData[];
#endif
		static void NewProp_bMobileAllowDitheredLODTransition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMobileAllowDitheredLODTransition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMobileVirtualTextures_MetaData[];
#endif
		static void NewProp_bMobileVirtualTextures_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMobileVirtualTextures;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDiscardUnusedQualityLevels_MetaData[];
#endif
		static void NewProp_bDiscardUnusedQualityLevels_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDiscardUnusedQualityLevels;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShaderCompressionFormat_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ShaderCompressionFormat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOcclusionCulling_MetaData[];
#endif
		static void NewProp_bOcclusionCulling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOcclusionCulling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinScreenRadiusForLights_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinScreenRadiusForLights;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinScreenRadiusForEarlyZPass_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinScreenRadiusForEarlyZPass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinScreenRadiusForCSMdepth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinScreenRadiusForCSMdepth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPrecomputedVisibilityWarning_MetaData[];
#endif
		static void NewProp_bPrecomputedVisibilityWarning_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrecomputedVisibilityWarning;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTextureStreaming_MetaData[];
#endif
		static void NewProp_bTextureStreaming_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTextureStreaming;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseDXT5NormalMaps_MetaData[];
#endif
		static void NewProp_bUseDXT5NormalMaps_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseDXT5NormalMaps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bVirtualTextures_MetaData[];
#endif
		static void NewProp_bVirtualTextures_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVirtualTextures;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bVirtualTextureEnableAutoImport_MetaData[];
#endif
		static void NewProp_bVirtualTextureEnableAutoImport_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVirtualTextureEnableAutoImport;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bVirtualTexturedLightmaps_MetaData[];
#endif
		static void NewProp_bVirtualTexturedLightmaps_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVirtualTexturedLightmaps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bVirtualTextureAnisotropicFiltering_MetaData[];
#endif
		static void NewProp_bVirtualTextureAnisotropicFiltering_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVirtualTextureAnisotropicFiltering;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableVirtualTextureOpacityMask_MetaData[];
#endif
		static void NewProp_bEnableVirtualTextureOpacityMask_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableVirtualTextureOpacityMask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VirtualTextureTileSize_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_VirtualTextureTileSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VirtualTextureTileBorderSize_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_VirtualTextureTileBorderSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VirtualTextureFeedbackFactor_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_VirtualTextureFeedbackFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorkingColorSpaceChoice_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_WorkingColorSpaceChoice;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RedChromaticityCoordinate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RedChromaticityCoordinate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GreenChromaticityCoordinate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GreenChromaticityCoordinate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlueChromaticityCoordinate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BlueChromaticityCoordinate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WhiteChromaticityCoordinate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WhiteChromaticityCoordinate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bClearCoatEnableSecondNormal_MetaData[];
#endif
		static void NewProp_bClearCoatEnableSecondNormal_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bClearCoatEnableSecondNormal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicGlobalIllumination_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_DynamicGlobalIllumination;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Reflections_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Reflections;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReflectionCaptureResolution_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReflectionCaptureResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReflectionEnvironmentLightmapMixBasedOnRoughness_MetaData[];
#endif
		static void NewProp_ReflectionEnvironmentLightmapMixBasedOnRoughness_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReflectionEnvironmentLightmapMixBasedOnRoughness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseHardwareRayTracingForLumen_MetaData[];
#endif
		static void NewProp_bUseHardwareRayTracingForLumen_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseHardwareRayTracingForLumen;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LumenRayLightingMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LumenRayLightingMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LumenRayLightingMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LumenFrontLayerTranslucencyReflections_MetaData[];
#endif
		static void NewProp_LumenFrontLayerTranslucencyReflections_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_LumenFrontLayerTranslucencyReflections;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LumenSoftwareTracingMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_LumenSoftwareTracingMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShadowMapMethod_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ShadowMapMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableRayTracing_MetaData[];
#endif
		static void NewProp_bEnableRayTracing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableRayTracing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableRayTracingShadows_MetaData[];
#endif
		static void NewProp_bEnableRayTracingShadows_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableRayTracingShadows;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableRayTracingSkylight_MetaData[];
#endif
		static void NewProp_bEnableRayTracingSkylight_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableRayTracingSkylight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableRayTracingTextureLOD_MetaData[];
#endif
		static void NewProp_bEnableRayTracingTextureLOD_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableRayTracingTextureLOD;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnablePathTracing_MetaData[];
#endif
		static void NewProp_bEnablePathTracing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnablePathTracing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateMeshDistanceFields_MetaData[];
#endif
		static void NewProp_bGenerateMeshDistanceFields_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateMeshDistanceFields;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceFieldVoxelDensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceFieldVoxelDensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNanite_MetaData[];
#endif
		static void NewProp_bNanite_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNanite;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowStaticLighting_MetaData[];
#endif
		static void NewProp_bAllowStaticLighting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowStaticLighting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseNormalMapsForStaticLighting_MetaData[];
#endif
		static void NewProp_bUseNormalMapsForStaticLighting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseNormalMapsForStaticLighting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForwardShading_MetaData[];
#endif
		static void NewProp_bForwardShading_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForwardShading;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bVertexFoggingForOpaque_MetaData[];
#endif
		static void NewProp_bVertexFoggingForOpaque_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVertexFoggingForOpaque;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSeparateTranslucency_MetaData[];
#endif
		static void NewProp_bSeparateTranslucency_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSeparateTranslucency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TranslucentSortPolicy_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TranslucentSortPolicy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TranslucentSortAxis_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TranslucentSortAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HMDFixedFoveationLevel_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_HMDFixedFoveationLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHMDFixedFoveationDynamic_MetaData[];
#endif
		static void NewProp_bHMDFixedFoveationDynamic_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHMDFixedFoveationDynamic;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomDepthStencil_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CustomDepthStencil;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCustomDepthTaaJitter_MetaData[];
#endif
		static void NewProp_bCustomDepthTaaJitter_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCustomDepthTaaJitter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableAlphaChannelInPostProcessing_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_bEnableAlphaChannelInPostProcessing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDefaultFeatureBloom_MetaData[];
#endif
		static void NewProp_bDefaultFeatureBloom_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDefaultFeatureBloom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDefaultFeatureAmbientOcclusion_MetaData[];
#endif
		static void NewProp_bDefaultFeatureAmbientOcclusion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDefaultFeatureAmbientOcclusion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDefaultFeatureAmbientOcclusionStaticFraction_MetaData[];
#endif
		static void NewProp_bDefaultFeatureAmbientOcclusionStaticFraction_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDefaultFeatureAmbientOcclusionStaticFraction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDefaultFeatureAutoExposure_MetaData[];
#endif
		static void NewProp_bDefaultFeatureAutoExposure_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDefaultFeatureAutoExposure;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultFeatureAutoExposure_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultFeatureAutoExposure;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultFeatureAutoExposureBias_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultFeatureAutoExposureBias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExtendDefaultLuminanceRangeInAutoExposureSettings_MetaData[];
#endif
		static void NewProp_bExtendDefaultLuminanceRangeInAutoExposureSettings_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExtendDefaultLuminanceRangeInAutoExposureSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDefaultFeatureMotionBlur_MetaData[];
#endif
		static void NewProp_bDefaultFeatureMotionBlur_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDefaultFeatureMotionBlur;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDefaultFeatureLensFlare_MetaData[];
#endif
		static void NewProp_bDefaultFeatureLensFlare_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDefaultFeatureLensFlare;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTemporalUpsampling_MetaData[];
#endif
		static void NewProp_bTemporalUpsampling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTemporalUpsampling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultFeatureAntiAliasing_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultFeatureAntiAliasing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MSAASampleCount_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_MSAASampleCount;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultLightUnits_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultLightUnits_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultLightUnits;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultBackBufferPixelFormat_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultBackBufferPixelFormat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRenderUnbuiltPreviewShadowsInGame_MetaData[];
#endif
		static void NewProp_bRenderUnbuiltPreviewShadowsInGame_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRenderUnbuiltPreviewShadowsInGame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStencilForLODDither_MetaData[];
#endif
		static void NewProp_bStencilForLODDither_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStencilForLODDither;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EarlyZPass_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_EarlyZPass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEarlyZPassOnlyMaterialMasking_MetaData[];
#endif
		static void NewProp_bEarlyZPassOnlyMaterialMasking_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEarlyZPassOnlyMaterialMasking;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableCSMCaching_MetaData[];
#endif
		static void NewProp_bEnableCSMCaching_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableCSMCaching;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDBuffer_MetaData[];
#endif
		static void NewProp_bDBuffer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDBuffer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClearSceneMethod_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ClearSceneMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VelocityPass_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_VelocityPass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexDeformationOutputsVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_VertexDeformationOutputsVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSelectiveBasePassOutputs_MetaData[];
#endif
		static void NewProp_bSelectiveBasePassOutputs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelectiveBasePassOutputs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDefaultParticleCutouts_MetaData[];
#endif
		static void NewProp_bDefaultParticleCutouts_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDefaultParticleCutouts;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GPUSimulationTextureSizeX_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GPUSimulationTextureSizeX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GPUSimulationTextureSizeY_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GPUSimulationTextureSizeY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGlobalClipPlane_MetaData[];
#endif
		static void NewProp_bGlobalClipPlane_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGlobalClipPlane;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GBufferFormat_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_GBufferFormat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseGPUMorphTargets_MetaData[];
#endif
		static void NewProp_bUseGPUMorphTargets_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseGPUMorphTargets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNvidiaAftermathEnabled_MetaData[];
#endif
		static void NewProp_bNvidiaAftermathEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNvidiaAftermathEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMultiView_MetaData[];
#endif
		static void NewProp_bMultiView_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMultiView;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMobilePostProcessing_MetaData[];
#endif
		static void NewProp_bMobilePostProcessing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMobilePostProcessing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMobileMultiView_MetaData[];
#endif
		static void NewProp_bMobileMultiView_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMobileMultiView;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMobileUseHWsRGBEncoding_MetaData[];
#endif
		static void NewProp_bMobileUseHWsRGBEncoding_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMobileUseHWsRGBEncoding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRoundRobinOcclusion_MetaData[];
#endif
		static void NewProp_bRoundRobinOcclusion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRoundRobinOcclusion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMeshStreaming_MetaData[];
#endif
		static void NewProp_bMeshStreaming_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMeshStreaming;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableHeterogeneousVolumes_MetaData[];
#endif
		static void NewProp_bEnableHeterogeneousVolumes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableHeterogeneousVolumes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WireframeCullThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WireframeCullThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSupportStationarySkylight_MetaData[];
#endif
		static void NewProp_bSupportStationarySkylight_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportStationarySkylight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSupportLowQualityLightmaps_MetaData[];
#endif
		static void NewProp_bSupportLowQualityLightmaps_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportLowQualityLightmaps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSupportPointLightWholeSceneShadows_MetaData[];
#endif
		static void NewProp_bSupportPointLightWholeSceneShadows_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportPointLightWholeSceneShadows;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSupportSkyAtmosphere_MetaData[];
#endif
		static void NewProp_bSupportSkyAtmosphere_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportSkyAtmosphere;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSupportSkyAtmosphereAffectsHeightFog_MetaData[];
#endif
		static void NewProp_bSupportSkyAtmosphereAffectsHeightFog_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportSkyAtmosphereAffectsHeightFog;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSupportCloudShadowOnForwardLitTranslucent_MetaData[];
#endif
		static void NewProp_bSupportCloudShadowOnForwardLitTranslucent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportCloudShadowOnForwardLitTranslucent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSupportTranslucentPerObjectShadow_MetaData[];
#endif
		static void NewProp_bSupportTranslucentPerObjectShadow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportTranslucentPerObjectShadow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSupportCloudShadowOnSingleLayerWater_MetaData[];
#endif
		static void NewProp_bSupportCloudShadowOnSingleLayerWater_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportCloudShadowOnSingleLayerWater;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableStrata_MetaData[];
#endif
		static void NewProp_bEnableStrata_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableStrata;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StrataOpaqueMaterialRoughRefraction_MetaData[];
#endif
		static void NewProp_StrataOpaqueMaterialRoughRefraction_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_StrataOpaqueMaterialRoughRefraction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StrataDebugAdvancedVisualizationShaders_MetaData[];
#endif
		static void NewProp_StrataDebugAdvancedVisualizationShaders_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_StrataDebugAdvancedVisualizationShaders;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMaterialRoughDiffuse_MetaData[];
#endif
		static void NewProp_bMaterialRoughDiffuse_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMaterialRoughDiffuse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMaterialEnergyConservation_MetaData[];
#endif
		static void NewProp_bMaterialEnergyConservation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMaterialEnergyConservation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOrderedIndependentTransparencyEnable_MetaData[];
#endif
		static void NewProp_bOrderedIndependentTransparencyEnable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOrderedIndependentTransparencyEnable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSupportSkinCacheShaders_MetaData[];
#endif
		static void NewProp_bSupportSkinCacheShaders_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportSkinCacheShaders;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSkipCompilingGPUSkinVF_MetaData[];
#endif
		static void NewProp_bSkipCompilingGPUSkinVF_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipCompilingGPUSkinVF;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultSkinCacheBehavior_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSkinCacheBehavior_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultSkinCacheBehavior;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkinCacheSceneMemoryLimitInMB_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SkinCacheSceneMemoryLimitInMB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMobileEnableStaticAndCSMShadowReceivers_MetaData[];
#endif
		static void NewProp_bMobileEnableStaticAndCSMShadowReceivers_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMobileEnableStaticAndCSMShadowReceivers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMobileEnableMovableLightCSMShaderCulling_MetaData[];
#endif
		static void NewProp_bMobileEnableMovableLightCSMShaderCulling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMobileEnableMovableLightCSMShaderCulling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMobileForwardEnableLocalLights_MetaData[];
#endif
		static void NewProp_bMobileForwardEnableLocalLights_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMobileForwardEnableLocalLights;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMobileForwardEnableClusteredReflections_MetaData[];
#endif
		static void NewProp_bMobileForwardEnableClusteredReflections_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMobileForwardEnableClusteredReflections;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMobileEnableNoPrecomputedLightingCSMShader_MetaData[];
#endif
		static void NewProp_bMobileEnableNoPrecomputedLightingCSMShader_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMobileEnableNoPrecomputedLightingCSMShader;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMobileAllowDistanceFieldShadows_MetaData[];
#endif
		static void NewProp_bMobileAllowDistanceFieldShadows_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMobileAllowDistanceFieldShadows;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMobileAllowMovableDirectionalLights_MetaData[];
#endif
		static void NewProp_bMobileAllowMovableDirectionalLights_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMobileAllowMovableDirectionalLights;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMobileAllowMovableSpotlightShadows_MetaData[];
#endif
		static void NewProp_bMobileAllowMovableSpotlightShadows_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMobileAllowMovableSpotlightShadows;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSupport16BitBoneIndex_MetaData[];
#endif
		static void NewProp_bSupport16BitBoneIndex_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupport16BitBoneIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGPUSkinLimit2BoneInfluences_MetaData[];
#endif
		static void NewProp_bGPUSkinLimit2BoneInfluences_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGPUSkinLimit2BoneInfluences;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSupportDepthOnlyIndexBuffers_MetaData[];
#endif
		static void NewProp_bSupportDepthOnlyIndexBuffers_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportDepthOnlyIndexBuffers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSupportReversedIndexBuffers_MetaData[];
#endif
		static void NewProp_bSupportReversedIndexBuffers_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportReversedIndexBuffers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMobileAmbientOcclusion_MetaData[];
#endif
		static void NewProp_bMobileAmbientOcclusion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMobileAmbientOcclusion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseUnlimitedBoneInfluences_MetaData[];
#endif
		static void NewProp_bUseUnlimitedBoneInfluences_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseUnlimitedBoneInfluences;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnlimitedBonInfluencesThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_UnlimitedBonInfluencesThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultBoneInfluenceLimit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultBoneInfluenceLimit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxSkinBones_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxSkinBones;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MobilePlanarReflectionMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_MobilePlanarReflectionMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMobileSupportsGen4TAA_MetaData[];
#endif
		static void NewProp_bMobileSupportsGen4TAA_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMobileSupportsGen4TAA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStreamSkeletalMeshLODs_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_bStreamSkeletalMeshLODs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDiscardSkeletalMeshOptionalLODs_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_bDiscardSkeletalMeshOptionalLODs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VisualizeCalibrationColorMaterialPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VisualizeCalibrationColorMaterialPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VisualizeCalibrationCustomMaterialPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VisualizeCalibrationCustomMaterialPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VisualizeCalibrationGrayscaleMaterialPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VisualizeCalibrationGrayscaleMaterialPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URendererSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Rendering settings.\n */" },
		{ "DisplayName", "Rendering" },
		{ "IncludePath", "Engine/RendererSettings.h" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Rendering settings." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_MobileShadingPath_MetaData[] = {
		{ "Category", "Mobile" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.Mobile.ShadingPath" },
		{ "DisplayName", "Mobile Shading" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "The shading path to use on mobile platforms. Changing this setting requires restarting the editor." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_MobileShadingPath = { "MobileShadingPath", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URendererSettings, MobileShadingPath), Z_Construct_UEnum_Engine_EMobileShadingPath, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_MobileShadingPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_MobileShadingPath_MetaData)) }; // 2477976678
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileSupportGPUScene_MetaData[] = {
		{ "Category", "Mobile" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.Mobile.SupportGPUScene" },
		{ "DisplayName", "Enable GPUScene on Mobile" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether to enable GPUScene on mobile. GPUScene is required for mesh auto-instancing. Changing this setting requires restarting the editor." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileSupportGPUScene_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bMobileSupportGPUScene = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileSupportGPUScene = { "bMobileSupportGPUScene", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileSupportGPUScene_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileSupportGPUScene_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileSupportGPUScene_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_MobileAntiAliasing_MetaData[] = {
		{ "Category", "Mobile" },
		{ "ConsoleVariable", "r.Mobile.AntiAliasing" },
		{ "DisplayName", "Mobile Anti-Aliasing Method" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "The mobile default anti-aliasing method." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_MobileAntiAliasing = { "MobileAntiAliasing", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URendererSettings, MobileAntiAliasing), Z_Construct_UEnum_Engine_EMobileAntiAliasingMethod, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_MobileAntiAliasing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_MobileAntiAliasing_MetaData)) }; // 3837580925
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_MobileFloatPrecisionMode_MetaData[] = {
		{ "Category", "Mobile" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.Mobile.FloatPrecisionMode" },
		{ "DisplayName", "Mobile Float Precision Mode" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Project wide mobile float precision mode for shaders and materials. Changing this setting requires restarting the editor." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_MobileFloatPrecisionMode = { "MobileFloatPrecisionMode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URendererSettings, MobileFloatPrecisionMode), Z_Construct_UEnum_Engine_EMobileFloatPrecisionMode, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_MobileFloatPrecisionMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_MobileFloatPrecisionMode_MetaData)) }; // 1481648426
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAllowDitheredLODTransition_MetaData[] = {
		{ "Category", "Mobile" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.Mobile.AllowDitheredLODTransition" },
		{ "DisplayName", "Allow Dithered LOD Transition" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether to support 'Dithered LOD Transition' material option on mobile platforms. Enabling this may degrade performance as rendering will not benefit from Early-Z optimization." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAllowDitheredLODTransition_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bMobileAllowDitheredLODTransition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAllowDitheredLODTransition = { "bMobileAllowDitheredLODTransition", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAllowDitheredLODTransition_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAllowDitheredLODTransition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAllowDitheredLODTransition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileVirtualTextures_MetaData[] = {
		{ "Category", "Mobile" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.Mobile.VirtualTextures" },
		{ "DisplayName", "Enable virtual texture support on Mobile" },
		{ "EditCondition", "bVirtualTextures" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether to support virtual textures on mobile. Requires general virtual texturing option enabled as well. Changing this setting requires restarting the editor." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileVirtualTextures_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bMobileVirtualTextures = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileVirtualTextures = { "bMobileVirtualTextures", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileVirtualTextures_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileVirtualTextures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileVirtualTextures_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bDiscardUnusedQualityLevels_MetaData[] = {
		{ "Category", "Materials" },
		{ "ConsoleVariable", "r.DiscardUnusedQuality" },
		{ "DisplayName", "Game Discards Unused Material Quality Levels" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "When running in game mode, whether to keep shaders for all quality levels in memory or only those needed for the current quality level.\nUnchecked: Keep all quality levels in memory allowing a runtime quality level change. (default)\nChecked: Discard unused quality levels when loading content for the game, saving some memory." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bDiscardUnusedQualityLevels_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bDiscardUnusedQualityLevels = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bDiscardUnusedQualityLevels = { "bDiscardUnusedQualityLevels", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bDiscardUnusedQualityLevels_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bDiscardUnusedQualityLevels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bDiscardUnusedQualityLevels_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_ShaderCompressionFormat_MetaData[] = {
		{ "Category", "Materials" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.Shaders.CompressionFormat" },
		{ "DisplayName", "Shader Compression Format" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Select how the shaders are compressed for storage" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_ShaderCompressionFormat = { "ShaderCompressionFormat", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URendererSettings, ShaderCompressionFormat), Z_Construct_UEnum_Engine_EShaderCompressionFormat, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_ShaderCompressionFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_ShaderCompressionFormat_MetaData)) }; // 2572295485
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bOcclusionCulling_MetaData[] = {
		{ "Category", "Culling" },
		{ "ConsoleVariable", "r.AllowOcclusionQueries" },
		{ "DisplayName", "Occlusion Culling" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Allows occluded meshes to be culled and not rendered." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bOcclusionCulling_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bOcclusionCulling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bOcclusionCulling = { "bOcclusionCulling", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bOcclusionCulling_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bOcclusionCulling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bOcclusionCulling_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_MinScreenRadiusForLights_MetaData[] = {
		{ "Category", "Culling" },
		{ "ConsoleVariable", "r.MinScreenRadiusForLights" },
		{ "DisplayName", "Min Screen Radius for Lights" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Screen radius at which lights are culled. Larger values can improve performance but causes lights to pop off when they affect a small area of the screen." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_MinScreenRadiusForLights = { "MinScreenRadiusForLights", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URendererSettings, MinScreenRadiusForLights), METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_MinScreenRadiusForLights_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_MinScreenRadiusForLights_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_MinScreenRadiusForEarlyZPass_MetaData[] = {
		{ "Category", "Culling" },
		{ "ConsoleVariable", "r.MinScreenRadiusForDepthPrepass" },
		{ "DisplayName", "Min Screen Radius for Early Z Pass" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Screen radius at which objects are culled for the early Z pass. Larger values can improve performance but very large values can degrade performance if large occluders are not rendered." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_MinScreenRadiusForEarlyZPass = { "MinScreenRadiusForEarlyZPass", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URendererSettings, MinScreenRadiusForEarlyZPass), METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_MinScreenRadiusForEarlyZPass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_MinScreenRadiusForEarlyZPass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_MinScreenRadiusForCSMdepth_MetaData[] = {
		{ "Category", "Culling" },
		{ "ConsoleVariable", "r.MinScreenRadiusForCSMDepth" },
		{ "DisplayName", "Min Screen Radius for Cascaded Shadow Maps" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Screen radius at which objects are culled for cascaded shadow map depth passes. Larger values can improve performance but can cause artifacts as objects stop casting shadows." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_MinScreenRadiusForCSMdepth = { "MinScreenRadiusForCSMdepth", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URendererSettings, MinScreenRadiusForCSMdepth), METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_MinScreenRadiusForCSMdepth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_MinScreenRadiusForCSMdepth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bPrecomputedVisibilityWarning_MetaData[] = {
		{ "Category", "Culling" },
		{ "ConsoleVariable", "r.PrecomputedVisibilityWarning" },
		{ "DisplayName", "Warn about no precomputed visibility" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Displays a warning when no precomputed visibility data is available for the current camera location. This can be helpful if you are making a game that relies on precomputed visibility, e.g. a first person mobile game." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bPrecomputedVisibilityWarning_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bPrecomputedVisibilityWarning = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bPrecomputedVisibilityWarning = { "bPrecomputedVisibilityWarning", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bPrecomputedVisibilityWarning_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bPrecomputedVisibilityWarning_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bPrecomputedVisibilityWarning_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bTextureStreaming_MetaData[] = {
		{ "Category", "Textures" },
		{ "ConsoleVariable", "r.TextureStreaming" },
		{ "DisplayName", "Texture Streaming" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "When enabled textures will stream in based on what is visible on screen." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bTextureStreaming_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bTextureStreaming = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bTextureStreaming = { "bTextureStreaming", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bTextureStreaming_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bTextureStreaming_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bTextureStreaming_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bUseDXT5NormalMaps_MetaData[] = {
		{ "Category", "Textures" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "Compat.UseDXT5NormalMaps" },
		{ "DisplayName", "Use DXT5 Normal Maps" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether to use DXT5 for normal maps, otherwise BC5 will be used, which is not supported on all hardware. Changing this setting requires restarting the editor." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bUseDXT5NormalMaps_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bUseDXT5NormalMaps = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bUseDXT5NormalMaps = { "bUseDXT5NormalMaps", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bUseDXT5NormalMaps_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bUseDXT5NormalMaps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bUseDXT5NormalMaps_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bVirtualTextures_MetaData[] = {
		{ "Category", "VirtualTextures" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.VirtualTextures" },
		{ "DisplayName", "Enable virtual texture support" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "When enabled, Textures can be streamed using the virtual texture system. Changing this setting requires restarting the editor." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bVirtualTextures_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bVirtualTextures = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bVirtualTextures = { "bVirtualTextures", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bVirtualTextures_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bVirtualTextures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bVirtualTextures_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bVirtualTextureEnableAutoImport_MetaData[] = {
		{ "Category", "VirtualTextures" },
		{ "ConfigRestartRequired", "FALSE" },
		{ "ConsoleVariable", "r.VT.EnableAutoImport" },
		{ "DisplayName", "Enable virtual texture on texture import" },
		{ "EditCondition", "bVirtualTextures" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Set the 'Virtual Texture Streaming' setting for imported textures based on 'Auto Virtual Texturing Size' in the texture import settings." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bVirtualTextureEnableAutoImport_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bVirtualTextureEnableAutoImport = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bVirtualTextureEnableAutoImport = { "bVirtualTextureEnableAutoImport", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bVirtualTextureEnableAutoImport_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bVirtualTextureEnableAutoImport_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bVirtualTextureEnableAutoImport_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bVirtualTexturedLightmaps_MetaData[] = {
		{ "Category", "VirtualTextures" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.VirtualTexturedLightmaps" },
		{ "DisplayName", "Enable virtual texture lightmaps" },
		{ "EditCondition", "bVirtualTextures" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "When enabled, lightmaps will be streamed using the virtual texture system. Changing this setting requires restarting the editor." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bVirtualTexturedLightmaps_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bVirtualTexturedLightmaps = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bVirtualTexturedLightmaps = { "bVirtualTexturedLightmaps", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bVirtualTexturedLightmaps_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bVirtualTexturedLightmaps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bVirtualTexturedLightmaps_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bVirtualTextureAnisotropicFiltering_MetaData[] = {
		{ "Category", "VirtualTextures" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.VT.AnisotropicFiltering" },
		{ "DisplayName", "Enable virtual texture anisotropic filtering" },
		{ "EditCondition", "bVirtualTextures" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "When enabled, virtual textures will use anisotropic filtering. This adds a cost to all shaders using virtual textures. Changing this setting requires restarting the editor." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bVirtualTextureAnisotropicFiltering_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bVirtualTextureAnisotropicFiltering = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bVirtualTextureAnisotropicFiltering = { "bVirtualTextureAnisotropicFiltering", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bVirtualTextureAnisotropicFiltering_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bVirtualTextureAnisotropicFiltering_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bVirtualTextureAnisotropicFiltering_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableVirtualTextureOpacityMask_MetaData[] = {
		{ "Category", "VirtualTextures" },
		{ "DisplayName", "Enable virtual textures for Opacity Mask" },
		{ "EditCondition", "bVirtualTextures" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Relax restriction on virtual textures contributing to Opacity Mask. In some edge cases this can lead to low resolution shadow edges." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableVirtualTextureOpacityMask_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bEnableVirtualTextureOpacityMask = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableVirtualTextureOpacityMask = { "bEnableVirtualTextureOpacityMask", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableVirtualTextureOpacityMask_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableVirtualTextureOpacityMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableVirtualTextureOpacityMask_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_VirtualTextureTileSize_MetaData[] = {
		{ "Category", "VirtualTextures" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.VT.TileSize" },
		{ "DisplayName", "Tile size" },
		{ "EditCondition", "bVirtualTextures" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Size in pixels for virtual texture tiles, will be rounded to next power-of-2. Changing this setting requires restarting the editor." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_VirtualTextureTileSize = { "VirtualTextureTileSize", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URendererSettings, VirtualTextureTileSize), METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_VirtualTextureTileSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_VirtualTextureTileSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_VirtualTextureTileBorderSize_MetaData[] = {
		{ "Category", "VirtualTextures" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.VT.TileBorderSize" },
		{ "DisplayName", "Tile border size" },
		{ "EditCondition", "bVirtualTextures" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Size in pixels for virtual texture tile borders, will be rounded to next power-of-2. Larger borders allow higher degree of anisotropic filtering, but uses more disk/cache memory. Changing this setting requires restarting the editor." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_VirtualTextureTileBorderSize = { "VirtualTextureTileBorderSize", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URendererSettings, VirtualTextureTileBorderSize), METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_VirtualTextureTileBorderSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_VirtualTextureTileBorderSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_VirtualTextureFeedbackFactor_MetaData[] = {
		{ "Category", "VirtualTextures" },
		{ "ConsoleVariable", "r.vt.FeedbackFactor" },
		{ "DisplayName", "Feedback resolution factor" },
		{ "EditCondition", "bVirtualTextures" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Lower factor will increase virtual texture feedback resolution which increases CPU/GPU overhead, but may decrease streaming latency, especially if materials use many virtual textures." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_VirtualTextureFeedbackFactor = { "VirtualTextureFeedbackFactor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URendererSettings, VirtualTextureFeedbackFactor), METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_VirtualTextureFeedbackFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_VirtualTextureFeedbackFactor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_WorkingColorSpaceChoice_MetaData[] = {
		{ "Category", "WorkingColorSpace" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Working Color Space" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Choose from list of provided working color spaces, or custom to provide user-defined space." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_WorkingColorSpaceChoice = { "WorkingColorSpaceChoice", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URendererSettings, WorkingColorSpaceChoice), Z_Construct_UEnum_Engine_EWorkingColorSpace, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_WorkingColorSpaceChoice_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_WorkingColorSpaceChoice_MetaData)) }; // 135589502
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_RedChromaticityCoordinate_MetaData[] = {
		{ "Category", "WorkingColorSpace" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "EditCondition", "WorkingColorSpaceChoice == EWorkingColorSpace::Custom" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Working color space red chromaticity coordinates." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_RedChromaticityCoordinate = { "RedChromaticityCoordinate", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URendererSettings, RedChromaticityCoordinate), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_RedChromaticityCoordinate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_RedChromaticityCoordinate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_GreenChromaticityCoordinate_MetaData[] = {
		{ "Category", "WorkingColorSpace" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "EditCondition", "WorkingColorSpaceChoice == EWorkingColorSpace::Custom" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Working color space green chromaticity coordinates." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_GreenChromaticityCoordinate = { "GreenChromaticityCoordinate", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URendererSettings, GreenChromaticityCoordinate), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_GreenChromaticityCoordinate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_GreenChromaticityCoordinate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_BlueChromaticityCoordinate_MetaData[] = {
		{ "Category", "WorkingColorSpace" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "EditCondition", "WorkingColorSpaceChoice == EWorkingColorSpace::Custom" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Working color space blue chromaticity coordinates." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_BlueChromaticityCoordinate = { "BlueChromaticityCoordinate", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URendererSettings, BlueChromaticityCoordinate), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_BlueChromaticityCoordinate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_BlueChromaticityCoordinate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_WhiteChromaticityCoordinate_MetaData[] = {
		{ "Category", "WorkingColorSpace" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "EditCondition", "WorkingColorSpaceChoice == EWorkingColorSpace::Custom" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Working color space white chromaticity coordinates." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_WhiteChromaticityCoordinate = { "WhiteChromaticityCoordinate", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URendererSettings, WhiteChromaticityCoordinate), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_WhiteChromaticityCoordinate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_WhiteChromaticityCoordinate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bClearCoatEnableSecondNormal_MetaData[] = {
		{ "Category", "Materials" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.ClearCoatNormal" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Use a separate normal map for the bottom layer of a clear coat material. This is a higher quality feature that is expensive." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bClearCoatEnableSecondNormal_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bClearCoatEnableSecondNormal = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bClearCoatEnableSecondNormal = { "bClearCoatEnableSecondNormal", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bClearCoatEnableSecondNormal_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bClearCoatEnableSecondNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bClearCoatEnableSecondNormal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_DynamicGlobalIllumination_MetaData[] = {
		{ "Category", "GlobalIllumination" },
		{ "ConsoleVariable", "r.DynamicGlobalIlluminationMethod" },
		{ "DisplayName", "Dynamic Global Illumination Method" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Dynamic Global Illumination Method" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_DynamicGlobalIllumination = { "DynamicGlobalIllumination", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URendererSettings, DynamicGlobalIllumination), Z_Construct_UEnum_Engine_EDynamicGlobalIlluminationMethod, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_DynamicGlobalIllumination_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_DynamicGlobalIllumination_MetaData)) }; // 355894124
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_Reflections_MetaData[] = {
		{ "Category", "Reflections" },
		{ "ConsoleVariable", "r.ReflectionMethod" },
		{ "DisplayName", "Reflection Method" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Reflection Method" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_Reflections = { "Reflections", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URendererSettings, Reflections), Z_Construct_UEnum_Engine_EReflectionMethod, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_Reflections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_Reflections_MetaData)) }; // 1089407779
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_ReflectionCaptureResolution_MetaData[] = {
		{ "Category", "Reflections" },
		{ "ConsoleVariable", "r.ReflectionCaptureResolution" },
		{ "DisplayName", "Reflection Capture Resolution" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "The cubemap resolution for all reflection capture probes. Must be power of 2. Note that for very high values the memory and performance impact may be severe." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_ReflectionCaptureResolution = { "ReflectionCaptureResolution", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URendererSettings, ReflectionCaptureResolution), METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_ReflectionCaptureResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_ReflectionCaptureResolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_ReflectionEnvironmentLightmapMixBasedOnRoughness_MetaData[] = {
		{ "Category", "Reflections" },
		{ "ConsoleVariable", "r.ReflectionEnvironmentLightmapMixBasedOnRoughness" },
		{ "DisplayName", "Reduce lightmap mixing on smooth surfaces" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether to reduce lightmap mixing with reflection captures for very smooth surfaces.  This is useful to make sure reflection captures match SSR / planar reflections in brightness." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_ReflectionEnvironmentLightmapMixBasedOnRoughness_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->ReflectionEnvironmentLightmapMixBasedOnRoughness = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_ReflectionEnvironmentLightmapMixBasedOnRoughness = { "ReflectionEnvironmentLightmapMixBasedOnRoughness", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_ReflectionEnvironmentLightmapMixBasedOnRoughness_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_ReflectionEnvironmentLightmapMixBasedOnRoughness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_ReflectionEnvironmentLightmapMixBasedOnRoughness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bUseHardwareRayTracingForLumen_MetaData[] = {
		{ "Category", "Lumen" },
		{ "ConsoleVariable", "r.Lumen.HardwareRayTracing" },
		{ "DisplayName", "Use Hardware Ray Tracing when available" },
		{ "EditCondition", "bEnableRayTracing" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Uses Hardware Ray Tracing for Lumen features, when supported by the video card + RHI + Operating System. Lumen will fall back to Software Ray Tracing otherwise. Note: Hardware ray tracing has significant scene update costs for scenes with more than 100k instances." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bUseHardwareRayTracingForLumen_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bUseHardwareRayTracingForLumen = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bUseHardwareRayTracingForLumen = { "bUseHardwareRayTracingForLumen", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bUseHardwareRayTracingForLumen_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bUseHardwareRayTracingForLumen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bUseHardwareRayTracingForLumen_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_LumenRayLightingMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_LumenRayLightingMode_MetaData[] = {
		{ "Category", "Lumen" },
		{ "ConsoleVariable", "r.Lumen.HardwareRayTracing.LightingMode" },
		{ "DisplayName", "Ray Lighting Mode" },
		{ "EditCondition", "bEnableRayTracing && bUseHardwareRayTracingForLumen" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Controls how Lumen Reflection rays are lit when Lumen is using Hardware Ray Tracing.  By default, Lumen uses the Surface Cache for best performance, but can be set to 'Hit Lighting' for higher quality." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_LumenRayLightingMode = { "LumenRayLightingMode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URendererSettings, LumenRayLightingMode), Z_Construct_UEnum_Engine_ELumenRayLightingMode, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_LumenRayLightingMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_LumenRayLightingMode_MetaData)) }; // 1071933416
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_LumenFrontLayerTranslucencyReflections_MetaData[] = {
		{ "Category", "Lumen" },
		{ "ConsoleVariable", "r.Lumen.TranslucencyReflections.FrontLayer.EnableForProject" },
		{ "DisplayName", "High Quality Translucency Reflections" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether to use high quality mirror reflections on the front layer of translucent surfaces.  Other layers will use the lower quality Radiance Cache method that can only produce glossy reflections.  Increases GPU cost when enabled." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_LumenFrontLayerTranslucencyReflections_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->LumenFrontLayerTranslucencyReflections = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_LumenFrontLayerTranslucencyReflections = { "LumenFrontLayerTranslucencyReflections", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_LumenFrontLayerTranslucencyReflections_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_LumenFrontLayerTranslucencyReflections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_LumenFrontLayerTranslucencyReflections_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_LumenSoftwareTracingMode_MetaData[] = {
		{ "Category", "Lumen" },
		{ "ConsoleVariable", "r.Lumen.TraceMeshSDFs" },
		{ "DisplayName", "Software Ray Tracing Mode" },
		{ "EditCondition", "bGenerateMeshDistanceFields" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Controls which tracing method Lumen uses when using Software Ray Tracing." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_LumenSoftwareTracingMode = { "LumenSoftwareTracingMode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URendererSettings, LumenSoftwareTracingMode), Z_Construct_UEnum_Engine_ELumenSoftwareTracingMode, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_LumenSoftwareTracingMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_LumenSoftwareTracingMode_MetaData)) }; // 1084043483
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_ShadowMapMethod_MetaData[] = {
		{ "Category", "Shadows" },
		{ "ConsoleVariable", "r.Shadow.Virtual.Enable" },
		{ "DisplayName", "Shadow Map Method" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Select the primary shadow mapping method. Automatically uses 'Shadow Maps' when Forward Shading is enabled for the project as Virtual Shadow Maps are not supported." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_ShadowMapMethod = { "ShadowMapMethod", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URendererSettings, ShadowMapMethod), Z_Construct_UEnum_Engine_EShadowMapMethod, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_ShadowMapMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_ShadowMapMethod_MetaData)) }; // 403707474
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableRayTracing_MetaData[] = {
		{ "Category", "HardwareRayTracing" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.RayTracing" },
		{ "DisplayName", "Support Hardware Ray Tracing" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Support Hardware Ray Tracing features.  Requires 'Support Compute Skincache' before project is allowed to set this." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableRayTracing_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bEnableRayTracing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableRayTracing = { "bEnableRayTracing", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableRayTracing_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableRayTracing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableRayTracing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableRayTracingShadows_MetaData[] = {
		{ "Category", "HardwareRayTracing" },
		{ "ConsoleVariable", "r.RayTracing.Shadows" },
		{ "DisplayName", "Ray Traced Shadows" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Controls whether Ray Traced Shadows are used by default. Lights can still override and force Ray Traced shadows on or off. Requires Hardware Ray Tracing to be enabled." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableRayTracingShadows_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bEnableRayTracingShadows = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableRayTracingShadows = { "bEnableRayTracingShadows", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableRayTracingShadows_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableRayTracingShadows_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableRayTracingShadows_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableRayTracingSkylight_MetaData[] = {
		{ "Category", "HardwareRayTracing" },
		{ "ConsoleVariable", "r.RayTracing.Skylight" },
		{ "DisplayName", "Ray Traced Skylight" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Controls whether Ray Traced Skylight is used by default. Skylights can still override and force Ray Traced Skylight on or off. Requires Hardware Ray Tracing to be enabled.  Has no effect when Dynamic Global Illumination Method is set to Lumen." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableRayTracingSkylight_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bEnableRayTracingSkylight = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableRayTracingSkylight = { "bEnableRayTracingSkylight", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableRayTracingSkylight_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableRayTracingSkylight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableRayTracingSkylight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableRayTracingTextureLOD_MetaData[] = {
		{ "Category", "HardwareRayTracing" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.RayTracing.UseTextureLod" },
		{ "DisplayName", "Texture LOD" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Enable automatic texture mip level selection in ray tracing material shaders. Unchecked: highest resolution mip level is used for all texture (default). Checked: texture LOD is approximated based on total ray length, output resolution and texel density at hit point (ray cone method)." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableRayTracingTextureLOD_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bEnableRayTracingTextureLOD = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableRayTracingTextureLOD = { "bEnableRayTracingTextureLOD", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableRayTracingTextureLOD_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableRayTracingTextureLOD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableRayTracingTextureLOD_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnablePathTracing_MetaData[] = {
		{ "Category", "HardwareRayTracing" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.PathTracing" },
		{ "DisplayName", "Path Tracing" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Enables the Path Tracing renderer. This enables additional material permutations. Requires Hardware Ray Tracing to be enabled." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnablePathTracing_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bEnablePathTracing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnablePathTracing = { "bEnablePathTracing", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnablePathTracing_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnablePathTracing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnablePathTracing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bGenerateMeshDistanceFields_MetaData[] = {
		{ "Category", "SoftwareRayTracing" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.GenerateMeshDistanceFields" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether to build distance fields of static meshes, needed for Software Ray Tracing in Lumen, and distance field AO, which is used to implement Movable SkyLight shadows, and ray traced distance field shadows on directional lights.  Enabling will increase the build times, memory usage and disk size of static meshes.  Changing this setting requires restarting the editor." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bGenerateMeshDistanceFields_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bGenerateMeshDistanceFields = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bGenerateMeshDistanceFields = { "bGenerateMeshDistanceFields", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bGenerateMeshDistanceFields_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bGenerateMeshDistanceFields_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bGenerateMeshDistanceFields_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_DistanceFieldVoxelDensity_MetaData[] = {
		{ "Category", "SoftwareRayTracing" },
		{ "ClampMax", ".4" },
		{ "ClampMin", ".05" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.DistanceFields.DefaultVoxelDensity" },
		{ "EditCondition", "bGenerateMeshDistanceFields" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Determines how the default scale of a mesh converts into distance field voxel dimensions. Changing this will cause all distance fields to be rebuilt.  Large values can consume memory very quickly!  Changing this setting requires restarting the editor." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_DistanceFieldVoxelDensity = { "DistanceFieldVoxelDensity", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URendererSettings, DistanceFieldVoxelDensity), METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_DistanceFieldVoxelDensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_DistanceFieldVoxelDensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bNanite_MetaData[] = {
		{ "Category", "Nanite" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.Nanite.ProjectEnabled" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether to enable Nanite rendering." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bNanite_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bNanite = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bNanite = { "bNanite", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bNanite_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bNanite_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bNanite_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bAllowStaticLighting_MetaData[] = {
		{ "Category", "MiscLighting" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.AllowStaticLighting" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether to allow any static lighting to be generated and used, like lightmaps and shadowmaps. Games that only use dynamic lighting should set this to 0 to save some static lighting overhead. Disabling allows Material AO and Material BentNormal to work with Lumen Global Illumination.  Changing this setting requires restarting the editor." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bAllowStaticLighting_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bAllowStaticLighting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bAllowStaticLighting = { "bAllowStaticLighting", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bAllowStaticLighting_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bAllowStaticLighting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bAllowStaticLighting_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bUseNormalMapsForStaticLighting_MetaData[] = {
		{ "Category", "MiscLighting" },
		{ "ConsoleVariable", "r.NormalMapsForStaticLighting" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether to allow any static lighting to use normal maps for lighting computations." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bUseNormalMapsForStaticLighting_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bUseNormalMapsForStaticLighting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bUseNormalMapsForStaticLighting = { "bUseNormalMapsForStaticLighting", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bUseNormalMapsForStaticLighting_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bUseNormalMapsForStaticLighting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bUseNormalMapsForStaticLighting_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bForwardShading_MetaData[] = {
		{ "Category", "ForwardRenderer" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.ForwardShading" },
		{ "DisplayName", "Forward Shading" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether to use forward shading on desktop platforms, requires Shader Model 5 hardware.  Forward shading supports MSAA and has lower default cost, but fewer features supported overall.  Materials have to opt-in to more expensive features like high quality reflections.  Changing this setting requires restarting the editor." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bForwardShading_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bForwardShading = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bForwardShading = { "bForwardShading", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bForwardShading_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bForwardShading_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bForwardShading_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bVertexFoggingForOpaque_MetaData[] = {
		{ "Category", "ForwardRenderer" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.VertexFoggingForOpaque" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Causes opaque materials to use per-vertex fogging, which costs slightly less.  Only supported with forward shading. Changing this setting requires restarting the editor." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bVertexFoggingForOpaque_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bVertexFoggingForOpaque = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bVertexFoggingForOpaque = { "bVertexFoggingForOpaque", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bVertexFoggingForOpaque_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bVertexFoggingForOpaque_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bVertexFoggingForOpaque_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bSeparateTranslucency_MetaData[] = {
		{ "Category", "Translucency" },
		{ "ConsoleVariable", "r.SeparateTranslucency" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Allow translucency to be rendered to a separate render targeted and composited after depth of field. Prevents translucency from appearing out of focus." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bSeparateTranslucency_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bSeparateTranslucency = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bSeparateTranslucency = { "bSeparateTranslucency", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bSeparateTranslucency_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bSeparateTranslucency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bSeparateTranslucency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_TranslucentSortPolicy_MetaData[] = {
		{ "Category", "Translucency" },
		{ "ConsoleVariable", "r.TranslucentSortPolicy" },
		{ "DisplayName", "Translucent Sort Policy" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "The sort mode for translucent primitives, affecting how they are ordered and how they change order as the camera moves. Requires that Separate Translucency (under Postprocessing) is true." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_TranslucentSortPolicy = { "TranslucentSortPolicy", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URendererSettings, TranslucentSortPolicy), Z_Construct_UEnum_Engine_ETranslucentSortPolicy, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_TranslucentSortPolicy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_TranslucentSortPolicy_MetaData)) }; // 426507185
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_TranslucentSortAxis_MetaData[] = {
		{ "Category", "Translucency" },
		{ "DisplayName", "Translucent Sort Axis" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "The axis that sorting will occur along when Translucent Sort Policy is set to SortAlongAxis." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_TranslucentSortAxis = { "TranslucentSortAxis", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URendererSettings, TranslucentSortAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_TranslucentSortAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_TranslucentSortAxis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_HMDFixedFoveationLevel_MetaData[] = {
		{ "Category", "VR" },
		{ "ConsoleVariable", "vr.VRS.HMDFixedFoveationLevel" },
		{ "DisplayName", "HMD Fixed Foveation Level (Experimental)" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Set the level of fixed-foveation to apply when generating the Variable Rate Shading attachment. This feature is currently experimental.\nThis can yield some fairly significant performance benefits on GPUs that support Tier 2 VRS.\nLower settings will result in almost no discernible artifacting on most HMDs; higher settings will show some artifacts towards the edges of the view." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_HMDFixedFoveationLevel = { "HMDFixedFoveationLevel", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URendererSettings, HMDFixedFoveationLevel), Z_Construct_UEnum_Engine_EFixedFoveationLevels, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_HMDFixedFoveationLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_HMDFixedFoveationLevel_MetaData)) }; // 2813404720
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bHMDFixedFoveationDynamic_MetaData[] = {
		{ "Category", "VR" },
		{ "ConsoleVariable", "vr.VRS.HMDFixedFoveationDynamic" },
		{ "DisplayName", "Dynamic Fixed Foveation (Experimental)" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Allows fixed foveation level to adjust dynamically based on GPU utilization.\nLevel will range between none at the minimum, and the currently selected foveation level at the maximum." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bHMDFixedFoveationDynamic_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bHMDFixedFoveationDynamic = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bHMDFixedFoveationDynamic = { "bHMDFixedFoveationDynamic", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bHMDFixedFoveationDynamic_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bHMDFixedFoveationDynamic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bHMDFixedFoveationDynamic_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_CustomDepthStencil_MetaData[] = {
		{ "Category", "Postprocessing" },
		{ "ConsoleVariable", "r.CustomDepth" },
		{ "DisplayName", "Custom Depth-Stencil Pass" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether the custom depth pass for tagging primitives for postprocessing passes is enabled. Enabling it on demand can save memory but may cause a hitch the first time the feature is used." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_CustomDepthStencil = { "CustomDepthStencil", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URendererSettings, CustomDepthStencil), Z_Construct_UEnum_Engine_ECustomDepthStencil, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_CustomDepthStencil_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_CustomDepthStencil_MetaData)) }; // 3987891179
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bCustomDepthTaaJitter_MetaData[] = {
		{ "Category", "Postprocessing" },
		{ "ConsoleVariable", "r.CustomDepthTemporalAAJitter" },
		{ "DisplayName", "Custom Depth with TemporalAA Jitter" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether the custom depth pass has the TemporalAA jitter enabled. Disabling this can be useful when the result of the CustomDepth Pass is used after TAA (e.g. after Tonemapping)" },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bCustomDepthTaaJitter_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bCustomDepthTaaJitter = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bCustomDepthTaaJitter = { "bCustomDepthTaaJitter", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bCustomDepthTaaJitter_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bCustomDepthTaaJitter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bCustomDepthTaaJitter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableAlphaChannelInPostProcessing_MetaData[] = {
		{ "Category", "Postprocessing" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.PostProcessing.PropagateAlpha" },
		{ "DisplayName", "Enable alpha channel support in post processing (experimental)." },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Configures alpha channel support in renderer's post processing chain. Still experimental: works only with Temporal AA, Motion Blur, Circle Depth Of Field. This option also force disable the separate translucency." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableAlphaChannelInPostProcessing = { "bEnableAlphaChannelInPostProcessing", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URendererSettings, bEnableAlphaChannelInPostProcessing), Z_Construct_UEnum_Engine_EAlphaChannelMode, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableAlphaChannelInPostProcessing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableAlphaChannelInPostProcessing_MetaData)) }; // 3097842469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureBloom_MetaData[] = {
		{ "Category", "DefaultSettings" },
		{ "ConsoleVariable", "r.DefaultFeature.Bloom" },
		{ "DisplayName", "Bloom" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether the default for Bloom is enabled or not (postprocess volume/camera/game setting can still override and enable or disable it independently)" },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureBloom_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bDefaultFeatureBloom = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureBloom = { "bDefaultFeatureBloom", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureBloom_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureBloom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureBloom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureAmbientOcclusion_MetaData[] = {
		{ "Category", "DefaultSettings" },
		{ "ConsoleVariable", "r.DefaultFeature.AmbientOcclusion" },
		{ "DisplayName", "Ambient Occlusion" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether the default for AmbientOcclusion is enabled or not (postprocess volume/camera/game setting can still override and enable or disable it independently)" },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureAmbientOcclusion_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bDefaultFeatureAmbientOcclusion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureAmbientOcclusion = { "bDefaultFeatureAmbientOcclusion", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureAmbientOcclusion_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureAmbientOcclusion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureAmbientOcclusion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureAmbientOcclusionStaticFraction_MetaData[] = {
		{ "Category", "DefaultSettings" },
		{ "ConsoleVariable", "r.DefaultFeature.AmbientOcclusionStaticFraction" },
		{ "DisplayName", "Ambient Occlusion Static Fraction (AO for baked lighting)" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether the default for AmbientOcclusionStaticFraction is enabled or not (only useful for baked lighting and if AO is on, allows to have SSAO affect baked lighting as well, costs performance, postprocess volume/camera/game setting can still override and enable or disable it independently)" },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureAmbientOcclusionStaticFraction_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bDefaultFeatureAmbientOcclusionStaticFraction = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureAmbientOcclusionStaticFraction = { "bDefaultFeatureAmbientOcclusionStaticFraction", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureAmbientOcclusionStaticFraction_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureAmbientOcclusionStaticFraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureAmbientOcclusionStaticFraction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureAutoExposure_MetaData[] = {
		{ "Category", "DefaultSettings" },
		{ "ConsoleVariable", "r.DefaultFeature.AutoExposure" },
		{ "DisplayName", "Auto Exposure" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether the default for AutoExposure is enabled or not (postprocess volume/camera/game setting can still override and enable or disable it independently)" },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureAutoExposure_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bDefaultFeatureAutoExposure = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureAutoExposure = { "bDefaultFeatureAutoExposure", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureAutoExposure_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureAutoExposure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureAutoExposure_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultFeatureAutoExposure_MetaData[] = {
		{ "Category", "DefaultSettings" },
		{ "ConsoleVariable", "r.DefaultFeature.AutoExposure.Method" },
		{ "DisplayName", "Auto Exposure" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "The default method for AutoExposure(postprocess volume/camera/game setting can still override and enable or disable it independently)" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultFeatureAutoExposure = { "DefaultFeatureAutoExposure", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URendererSettings, DefaultFeatureAutoExposure), Z_Construct_UEnum_Engine_EAutoExposureMethodUI, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultFeatureAutoExposure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultFeatureAutoExposure_MetaData)) }; // 67444209
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultFeatureAutoExposureBias_MetaData[] = {
		{ "Category", "DefaultSettings" },
		{ "ConsoleVariable", "r.DefaultFeature.AutoExposure.Bias" },
		{ "DisplayName", "Auto Exposure Bias" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Default Value for auto exposure bias." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultFeatureAutoExposureBias = { "DefaultFeatureAutoExposureBias", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URendererSettings, DefaultFeatureAutoExposureBias), METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultFeatureAutoExposureBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultFeatureAutoExposureBias_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bExtendDefaultLuminanceRangeInAutoExposureSettings_MetaData[] = {
		{ "Category", "DefaultSettings" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.DefaultFeature.AutoExposure.ExtendDefaultLuminanceRange" },
		{ "DisplayName", "Extend default luminance range in Auto Exposure settings" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether the default values for AutoExposure should support an extended range of scene luminance. Also changes the exposure settings to be expressed in EV100. Having this setting disabled is deprecated and can only be done manually using r.DefaultFeature.AutoExposure.ExtendDefaultLuminanceRange." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bExtendDefaultLuminanceRangeInAutoExposureSettings_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bExtendDefaultLuminanceRangeInAutoExposureSettings = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bExtendDefaultLuminanceRangeInAutoExposureSettings = { "bExtendDefaultLuminanceRangeInAutoExposureSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bExtendDefaultLuminanceRangeInAutoExposureSettings_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bExtendDefaultLuminanceRangeInAutoExposureSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bExtendDefaultLuminanceRangeInAutoExposureSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureMotionBlur_MetaData[] = {
		{ "Category", "DefaultSettings" },
		{ "ConsoleVariable", "r.DefaultFeature.MotionBlur" },
		{ "DisplayName", "Motion Blur" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether the default for MotionBlur is enabled or not (postprocess volume/camera/game setting can still override and enable or disable it independently)" },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureMotionBlur_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bDefaultFeatureMotionBlur = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureMotionBlur = { "bDefaultFeatureMotionBlur", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureMotionBlur_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureMotionBlur_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureMotionBlur_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureLensFlare_MetaData[] = {
		{ "Category", "DefaultSettings" },
		{ "ConsoleVariable", "r.DefaultFeature.LensFlare" },
		{ "DisplayName", "Lens Flares (Image based)" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether the default for LensFlare is enabled or not (postprocess volume/camera/game setting can still override and enable or disable it independently)" },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureLensFlare_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bDefaultFeatureLensFlare = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureLensFlare = { "bDefaultFeatureLensFlare", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureLensFlare_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureLensFlare_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureLensFlare_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bTemporalUpsampling_MetaData[] = {
		{ "Category", "DefaultSettings" },
		{ "ConsoleVariable", "r.TemporalAA.Upsampling" },
		{ "DisplayName", "Temporal Upsampling" },
		{ "EditCondition", "DefaultFeatureAntiAliasing == EAntiAliasingMethod::AAM_TemporalAA" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether to do primary screen percentage upscale with Temporal AA pass or not." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bTemporalUpsampling_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bTemporalUpsampling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bTemporalUpsampling = { "bTemporalUpsampling", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bTemporalUpsampling_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bTemporalUpsampling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bTemporalUpsampling_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultFeatureAntiAliasing_MetaData[] = {
		{ "Category", "DefaultSettings" },
		{ "ConsoleVariable", "r.AntiAliasingMethod" },
		{ "DisplayName", "Anti-Aliasing Method" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Selects the anti-aliasing method to use." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultFeatureAntiAliasing = { "DefaultFeatureAntiAliasing", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URendererSettings, DefaultFeatureAntiAliasing), Z_Construct_UEnum_Engine_EAntiAliasingMethod, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultFeatureAntiAliasing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultFeatureAntiAliasing_MetaData)) }; // 2228267037
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_MSAASampleCount_MetaData[] = {
		{ "Category", "DefaultSettings" },
		{ "ConsoleVariable", "r.MSAACount" },
		{ "DisplayName", "MSAA Sample Count" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Default number of samples for MSAA." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_MSAASampleCount = { "MSAASampleCount", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URendererSettings, MSAASampleCount), Z_Construct_UEnum_Engine_ECompositingSampleCount, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_MSAASampleCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_MSAASampleCount_MetaData)) }; // 1859475892
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultLightUnits_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultLightUnits_MetaData[] = {
		{ "Category", "DefaultSettings" },
		{ "ConsoleVariable", "r.DefaultFeature.LightUnits" },
		{ "DisplayName", "Light Units" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Which units to use for newly placed point, spot and rect lights" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultLightUnits = { "DefaultLightUnits", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URendererSettings, DefaultLightUnits), Z_Construct_UEnum_Engine_ELightUnits, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultLightUnits_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultLightUnits_MetaData)) }; // 117192790
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultBackBufferPixelFormat_MetaData[] = {
		{ "Category", "DefaultSettings" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.DefaultBackBufferPixelFormat" },
		{ "DisplayName", "Frame Buffer Pixel Format" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Pixel format used for back buffer, when not specified" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultBackBufferPixelFormat = { "DefaultBackBufferPixelFormat", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URendererSettings, DefaultBackBufferPixelFormat), Z_Construct_UEnum_Engine_EDefaultBackBufferPixelFormat, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultBackBufferPixelFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultBackBufferPixelFormat_MetaData)) }; // 2583320590
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bRenderUnbuiltPreviewShadowsInGame_MetaData[] = {
		{ "Category", "Optimizations" },
		{ "ConsoleVariable", "r.Shadow.UnbuiltPreviewInGame" },
		{ "DisplayName", "Render Unbuilt Preview Shadows in game" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether to render unbuilt preview shadows in game.  When enabled and lighting is not built, expensive preview shadows will be rendered in game.  When disabled, lighting in game and editor won't match which can appear to be a bug." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bRenderUnbuiltPreviewShadowsInGame_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bRenderUnbuiltPreviewShadowsInGame = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bRenderUnbuiltPreviewShadowsInGame = { "bRenderUnbuiltPreviewShadowsInGame", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bRenderUnbuiltPreviewShadowsInGame_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bRenderUnbuiltPreviewShadowsInGame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bRenderUnbuiltPreviewShadowsInGame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bStencilForLODDither_MetaData[] = {
		{ "Category", "Optimizations" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.StencilForLODDither" },
		{ "DisplayName", "Use Stencil for LOD Dither Fading" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether to use stencil for LOD dither fading.  This saves GPU time in the base pass for materials with dither fading enabled, but forces a full prepass. Changing this setting requires restarting the editor." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bStencilForLODDither_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bStencilForLODDither = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bStencilForLODDither = { "bStencilForLODDither", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bStencilForLODDither_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bStencilForLODDither_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bStencilForLODDither_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_EarlyZPass_MetaData[] = {
		{ "Category", "Optimizations" },
		{ "ConsoleVariable", "r.EarlyZPass" },
		{ "DisplayName", "Early Z-pass" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether to use a depth only pass to initialize Z culling for the base pass." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_EarlyZPass = { "EarlyZPass", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URendererSettings, EarlyZPass), Z_Construct_UEnum_Engine_EEarlyZPass, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_EarlyZPass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_EarlyZPass_MetaData)) }; // 2969302651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bEarlyZPassOnlyMaterialMasking_MetaData[] = {
		{ "Category", "Optimizations" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.EarlyZPassOnlyMaterialMasking" },
		{ "DisplayName", "Mask material only in early Z-pass" },
		{ "EditCondition", "EarlyZPass == EEarlyZPass::OpaqueAndMasked" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether to compute materials' mask opacity only in early Z pass. Changing this setting requires restarting the editor." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bEarlyZPassOnlyMaterialMasking_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bEarlyZPassOnlyMaterialMasking = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bEarlyZPassOnlyMaterialMasking = { "bEarlyZPassOnlyMaterialMasking", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bEarlyZPassOnlyMaterialMasking_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bEarlyZPassOnlyMaterialMasking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bEarlyZPassOnlyMaterialMasking_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableCSMCaching_MetaData[] = {
		{ "Category", "Optimizations" },
		{ "ConsoleVariable", "r.Shadow.CSMCaching" },
		{ "DisplayName", "Enable CSM Caching" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Enable caching CSM to reduce draw calls for casting CSM and probably improve performance." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableCSMCaching_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bEnableCSMCaching = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableCSMCaching = { "bEnableCSMCaching", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableCSMCaching_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableCSMCaching_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableCSMCaching_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bDBuffer_MetaData[] = {
		{ "Category", "MiscLighting" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.DBuffer" },
		{ "DisplayName", "DBuffer Decals" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether to accumulate decal properties to a buffer before the base pass.  DBuffer decals correctly affect lightmap and sky lighting, unlike regular deferred decals.  DBuffer enabled forces a full prepass.  Changing this setting requires restarting the editor." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bDBuffer_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bDBuffer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bDBuffer = { "bDBuffer", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bDBuffer_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bDBuffer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bDBuffer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_ClearSceneMethod_MetaData[] = {
		{ "Category", "Optimizations" },
		{ "ConsoleVariable", "r.ClearSceneMethod" },
		{ "DisplayName", "Clear Scene" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Select how the g-buffer is cleared in game mode (only affects deferred shading)." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_ClearSceneMethod = { "ClearSceneMethod", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URendererSettings, ClearSceneMethod), Z_Construct_UEnum_Engine_EClearSceneOptions, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_ClearSceneMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_ClearSceneMethod_MetaData)) }; // 1220986792
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_VelocityPass_MetaData[] = {
		{ "Category", "Optimizations" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.VelocityOutputPass" },
		{ "DisplayName", "Velocity Pass" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "When to write velocity buffer. Changing this setting requires restarting the editor." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_VelocityPass = { "VelocityPass", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URendererSettings, VelocityPass), Z_Construct_UEnum_Engine_EVelocityOutputPass, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_VelocityPass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_VelocityPass_MetaData)) }; // 1037317395
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_VertexDeformationOutputsVelocity_MetaData[] = {
		{ "Category", "Optimizations" },
		{ "ConsoleVariable", "r.Velocity.EnableVertexDeformation" },
		{ "DisplayName", "Output velocities due to vertex deformation" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Enables materials with World Position Offset and/or World Displacement to output velocities during the velocity pass even when the actor has not moved. \nIf the VelocityPass is set to 'Write after base pass' this can incur a performance cost due to additional draw calls. \nThat performance cost is higher if many objects are using World Position Offset. A forest of trees for example." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_VertexDeformationOutputsVelocity = { "VertexDeformationOutputsVelocity", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URendererSettings, VertexDeformationOutputsVelocity), Z_Construct_UEnum_Engine_EVertexDeformationOutputsVelocity, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_VertexDeformationOutputsVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_VertexDeformationOutputsVelocity_MetaData)) }; // 2994551258
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bSelectiveBasePassOutputs_MetaData[] = {
		{ "Category", "Optimizations" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.SelectiveBasePassOutputs" },
		{ "DisplayName", "Selectively output to the GBuffer rendertargets" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Enables not exporting to the GBuffer rendertargets that are not relevant. Changing this setting requires restarting the editor." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bSelectiveBasePassOutputs_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bSelectiveBasePassOutputs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bSelectiveBasePassOutputs = { "bSelectiveBasePassOutputs", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bSelectiveBasePassOutputs_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bSelectiveBasePassOutputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bSelectiveBasePassOutputs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultParticleCutouts_MetaData[] = {
		{ "Category", "Optimizations" },
		{ "DisplayName", "Enable Particle Cutouts by default" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "When enabled, after changing the material on a Required particle module a Particle Cutout texture will be chosen automatically from the Opacity Mask texture if it exists, if not the Opacity Texture will be used if it exists." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultParticleCutouts_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bDefaultParticleCutouts = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultParticleCutouts = { "bDefaultParticleCutouts", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultParticleCutouts_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultParticleCutouts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultParticleCutouts_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_GPUSimulationTextureSizeX_MetaData[] = {
		{ "Category", "Optimizations" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "fx.GPUSimulationTextureSizeX" },
		{ "DisplayName", "GPU Particle simulation texture size - X" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "The X size of the GPU simulation texture size. SizeX*SizeY determines the maximum number of GPU simulated particles in an emitter. Potentially overridden by CVar settings in BaseDeviceProfile.ini." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_GPUSimulationTextureSizeX = { "GPUSimulationTextureSizeX", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URendererSettings, GPUSimulationTextureSizeX), METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_GPUSimulationTextureSizeX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_GPUSimulationTextureSizeX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_GPUSimulationTextureSizeY_MetaData[] = {
		{ "Category", "Optimizations" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "fx.GPUSimulationTextureSizeY" },
		{ "DisplayName", "GPU Particle simulation texture size - Y" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "The Y size of the GPU simulation texture size. SizeX*SizeY determines the maximum number of GPU simulated particles in an emitter. Potentially overridden by CVar settings in BaseDeviceProfile.ini." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_GPUSimulationTextureSizeY = { "GPUSimulationTextureSizeY", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URendererSettings, GPUSimulationTextureSizeY), METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_GPUSimulationTextureSizeY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_GPUSimulationTextureSizeY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bGlobalClipPlane_MetaData[] = {
		{ "Category", "Reflections" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.AllowGlobalClipPlane" },
		{ "DisplayName", "Support global clip plane for Planar Reflections" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether to support the global clip plane needed for planar reflections.  Enabling this increases BasePass triangle cost by ~15% regardless of whether planar reflections are active. Changing this setting requires restarting the editor." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bGlobalClipPlane_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bGlobalClipPlane = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bGlobalClipPlane = { "bGlobalClipPlane", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bGlobalClipPlane_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bGlobalClipPlane_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bGlobalClipPlane_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_GBufferFormat_MetaData[] = {
		{ "Category", "Optimizations" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.GBufferFormat" },
		{ "DisplayName", "GBuffer Format" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Selects which GBuffer format should be used. Affects performance primarily via how much GPU memory bandwidth used. This also controls Substrate normal quality and, in this case, a restart is required." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_GBufferFormat = { "GBufferFormat", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URendererSettings, GBufferFormat), Z_Construct_UEnum_Engine_EGBufferFormat, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_GBufferFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_GBufferFormat_MetaData)) }; // 3004847893
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bUseGPUMorphTargets_MetaData[] = {
		{ "Category", "Optimizations" },
		{ "ConsoleVariable", "r.MorphTarget.Mode" },
		{ "DisplayName", "Use GPU for computing morph targets" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether to use original CPU method (loop per morph then by vertex) or use a GPU-based method on Shader Model 5 hardware." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bUseGPUMorphTargets_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bUseGPUMorphTargets = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bUseGPUMorphTargets = { "bUseGPUMorphTargets", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bUseGPUMorphTargets_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bUseGPUMorphTargets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bUseGPUMorphTargets_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bNvidiaAftermathEnabled_MetaData[] = {
		{ "Category", "Debugging" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.GPUCrashDebugging" },
		{ "DisplayName", "Enable vendor specific GPU crash analysis tools" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Enables vendor specific GPU crash analysis tools." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bNvidiaAftermathEnabled_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bNvidiaAftermathEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bNvidiaAftermathEnabled = { "bNvidiaAftermathEnabled", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bNvidiaAftermathEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bNvidiaAftermathEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bNvidiaAftermathEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bMultiView_MetaData[] = {
		{ "Category", "VR" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "vr.InstancedStereo" },
		{ "DisplayName", "Instanced Stereo" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Enable single-pass stereoscopic rendering through view instancing or draw call instancing." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bMultiView_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bMultiView = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bMultiView = { "bMultiView", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bMultiView_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bMultiView_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bMultiView_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobilePostProcessing_MetaData[] = {
		{ "Category", "VR" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.MobileHDR" },
		{ "DisplayName", "Mobile HDR" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "If true, mobile pipelines include a full post-processing pass with tonemapping. Disable this setting for a performance boost and to enable stereoscopic rendering optimizations. Changing this setting requires restarting the editor." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobilePostProcessing_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bMobilePostProcessing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobilePostProcessing = { "bMobilePostProcessing", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobilePostProcessing_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobilePostProcessing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobilePostProcessing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileMultiView_MetaData[] = {
		{ "Category", "VR" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "vr.MobileMultiView" },
		{ "DisplayName", "Mobile Multi-View" },
		{ "EditCondition", "!bMobilePostProcessing" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Enable single-pass stereoscopic rendering on mobile platforms." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileMultiView_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bMobileMultiView = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileMultiView = { "bMobileMultiView", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileMultiView_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileMultiView_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileMultiView_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileUseHWsRGBEncoding_MetaData[] = {
		{ "ConsoleVariable", "r.Mobile.UseHWsRGBEncoding" },
		{ "DisplayName", "Single-pass linear rendering" },
		{ "EditCondition", "!bMobilePostProcessing" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "If true then mobile single-pass (without post-processing) rendering will use HW accelerated sRGB encoding/decoding. Available only on Oculus for now." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileUseHWsRGBEncoding_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bMobileUseHWsRGBEncoding = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileUseHWsRGBEncoding = { "bMobileUseHWsRGBEncoding", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileUseHWsRGBEncoding_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileUseHWsRGBEncoding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileUseHWsRGBEncoding_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bRoundRobinOcclusion_MetaData[] = {
		{ "Category", "VR" },
		{ "ConfigRestartRequired", "FALSE" },
		{ "ConsoleVariable", "vr.RoundRobinOcclusion" },
		{ "DisplayName", "Round Robin Occlusion Queries" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Enable round-robin scheduling of occlusion queries for VR." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bRoundRobinOcclusion_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bRoundRobinOcclusion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bRoundRobinOcclusion = { "bRoundRobinOcclusion", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bRoundRobinOcclusion_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bRoundRobinOcclusion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bRoundRobinOcclusion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bMeshStreaming_MetaData[] = {
		{ "Category", "Experimental" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.MeshStreaming" },
		{ "DisplayName", "Mesh Streaming" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "When enabled mesh will stream in based on what is visible on screen." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bMeshStreaming_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bMeshStreaming = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bMeshStreaming = { "bMeshStreaming", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bMeshStreaming_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bMeshStreaming_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bMeshStreaming_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableHeterogeneousVolumes_MetaData[] = {
		{ "Category", "Experimental" },
		{ "ConfigRestartRequired", "FALSE" },
		{ "ConsoleVariable", "r.HeterogeneousVolumes" },
		{ "DisplayName", "Enable Heterogeneous Volumes" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Enable rendering with the heterogeneous volumes subsystem." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableHeterogeneousVolumes_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bEnableHeterogeneousVolumes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableHeterogeneousVolumes = { "bEnableHeterogeneousVolumes", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableHeterogeneousVolumes_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableHeterogeneousVolumes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableHeterogeneousVolumes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_WireframeCullThreshold_MetaData[] = {
		{ "Category", "Editor" },
		{ "ConsoleVariable", "r.WireframeCullThreshold" },
		{ "DisplayName", "Wireframe Cull Threshold" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Screen radius at which wireframe objects are culled. Larger values can improve performance when viewing a scene in wireframe." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_WireframeCullThreshold = { "WireframeCullThreshold", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URendererSettings, WireframeCullThreshold), METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_WireframeCullThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_WireframeCullThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportStationarySkylight_MetaData[] = {
		{ "Category", "ShaderPermutationReduction" },
		{ "Comment", "/**\n\x09\"Stationary skylight requires permutations of the basepass shaders.  Disabling will reduce the number of shader permutations required per material. Changing this setting requires restarting the editor.\"\n\x09*/" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.SupportStationarySkylight" },
		{ "DisplayName", "Support Stationary Skylight" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "\"Stationary skylight requires permutations of the basepass shaders.  Disabling will reduce the number of shader permutations required per material. Changing this setting requires restarting the editor.\"" },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportStationarySkylight_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bSupportStationarySkylight = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportStationarySkylight = { "bSupportStationarySkylight", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportStationarySkylight_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportStationarySkylight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportStationarySkylight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportLowQualityLightmaps_MetaData[] = {
		{ "Category", "ShaderPermutationReduction" },
		{ "Comment", "/**\n\x09\"Low quality lightmap requires permutations of the lightmap rendering shaders.  Disabling will reduce the number of shader permutations required per material. Note that the mobile renderer requires low quality lightmaps, so disabling this setting is not recommended for mobile titles using static lighting. Changing this setting requires restarting the editor.\"\n\x09*/" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.SupportLowQualityLightmaps" },
		{ "DisplayName", "Support low quality lightmap shader permutations" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "\"Low quality lightmap requires permutations of the lightmap rendering shaders.  Disabling will reduce the number of shader permutations required per material. Note that the mobile renderer requires low quality lightmaps, so disabling this setting is not recommended for mobile titles using static lighting. Changing this setting requires restarting the editor.\"" },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportLowQualityLightmaps_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bSupportLowQualityLightmaps = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportLowQualityLightmaps = { "bSupportLowQualityLightmaps", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportLowQualityLightmaps_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportLowQualityLightmaps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportLowQualityLightmaps_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportPointLightWholeSceneShadows_MetaData[] = {
		{ "Category", "ShaderPermutationReduction" },
		{ "Comment", "/**\n\x09PointLight WholeSceneShadows requires many vertex and geometry shader permutations for cubemap rendering. Disabling will reduce the number of shader permutations required per material. Changing this setting requires restarting the editor.\"\n\x09*/" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.SupportPointLightWholeSceneShadows" },
		{ "DisplayName", "Support PointLight WholeSceneShadows" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "PointLight WholeSceneShadows requires many vertex and geometry shader permutations for cubemap rendering. Disabling will reduce the number of shader permutations required per material. Changing this setting requires restarting the editor.\"" },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportPointLightWholeSceneShadows_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bSupportPointLightWholeSceneShadows = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportPointLightWholeSceneShadows = { "bSupportPointLightWholeSceneShadows", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportPointLightWholeSceneShadows_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportPointLightWholeSceneShadows_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportPointLightWholeSceneShadows_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportSkyAtmosphere_MetaData[] = {
		{ "Category", "ShaderPermutationReduction" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.SupportSkyAtmosphere" },
		{ "DisplayName", "Support Sky Atmosphere" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "The sky atmosphere component requires extra samplers/textures to be bound to apply aerial perspective on transparent surfaces (and all surfaces on mobile via per vertex evaluation)." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportSkyAtmosphere_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bSupportSkyAtmosphere = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportSkyAtmosphere = { "bSupportSkyAtmosphere", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportSkyAtmosphere_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportSkyAtmosphere_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportSkyAtmosphere_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportSkyAtmosphereAffectsHeightFog_MetaData[] = {
		{ "Category", "ShaderPermutationReduction" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.SupportSkyAtmosphereAffectsHeightFog" },
		{ "DisplayName", "Support Sky Atmosphere Affecting Height Fog" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "The sky atmosphere component can light up the height fog but it requires extra samplers/textures to be bound to apply aerial perspective on transparent surfaces (and all surfaces on mobile via per vertex evaluation). It requires r.SupportSkyAtmosphere to be true." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportSkyAtmosphereAffectsHeightFog_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bSupportSkyAtmosphereAffectsHeightFog = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportSkyAtmosphereAffectsHeightFog = { "bSupportSkyAtmosphereAffectsHeightFog", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportSkyAtmosphereAffectsHeightFog_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportSkyAtmosphereAffectsHeightFog_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportSkyAtmosphereAffectsHeightFog_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportCloudShadowOnForwardLitTranslucent_MetaData[] = {
		{ "Category", "ShaderPermutationReduction" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.SupportCloudShadowOnForwardLitTranslucent" },
		{ "DisplayName", "Support Cloud Shadow On Forward Lit Translucent" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Enable cloud shadow on translucent surface not relying on the translucenct lighting volume, e.g. using Forward lighting. This is evaluated per vertex to reduce GPU cost and requires extra samplers/textures to be bound to vertex shaders. This is not implemented on mobile as VolumetricClouds are not available on these platforms." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportCloudShadowOnForwardLitTranslucent_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bSupportCloudShadowOnForwardLitTranslucent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportCloudShadowOnForwardLitTranslucent = { "bSupportCloudShadowOnForwardLitTranslucent", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportCloudShadowOnForwardLitTranslucent_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportCloudShadowOnForwardLitTranslucent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportCloudShadowOnForwardLitTranslucent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportTranslucentPerObjectShadow_MetaData[] = {
		{ "Category", "ShaderPermutationReduction" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.Shadow.TranslucentPerObject.ProjectEnabled" },
		{ "DisplayName", "Support Volumetric Translucent Self Shadowing" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Enable translucent volumetric self-shadow, requires vertex and pixel shader permutations for all tranlucent materials even if not used by any light." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportTranslucentPerObjectShadow_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bSupportTranslucentPerObjectShadow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportTranslucentPerObjectShadow = { "bSupportTranslucentPerObjectShadow", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportTranslucentPerObjectShadow_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportTranslucentPerObjectShadow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportTranslucentPerObjectShadow_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportCloudShadowOnSingleLayerWater_MetaData[] = {
		{ "Category", "ShaderPermutationReduction" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.Water.SingleLayerWater.SupportCloudShadow" },
		{ "DisplayName", "Support Cloud Shadow On SingleLayerWater" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Enable cloud shadow on SingleLayerWater. This is evaluated per vertex to reduce GPU cost and requires extra samplers/textures to be bound to vertex shaders. This is not implemented on mobile as VolumetricClouds are not available on these platforms." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportCloudShadowOnSingleLayerWater_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bSupportCloudShadowOnSingleLayerWater = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportCloudShadowOnSingleLayerWater = { "bSupportCloudShadowOnSingleLayerWater", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportCloudShadowOnSingleLayerWater_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportCloudShadowOnSingleLayerWater_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportCloudShadowOnSingleLayerWater_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableStrata_MetaData[] = {
		{ "Category", "Substrate" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.Substrate" },
		{ "DisplayName", "Substrate materials (Experimental)" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Enable Substrate materials (Experimental)." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableStrata_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bEnableStrata = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableStrata = { "bEnableStrata", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableStrata_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableStrata_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableStrata_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_StrataOpaqueMaterialRoughRefraction_MetaData[] = {
		{ "Category", "Substrate" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.Substrate.OpaqueMaterialRoughRefraction" },
		{ "DisplayName", "Substrate opaque material rough refraction" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Enable Substrate opaque material rough refractions effect from top layers over layers below." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_StrataOpaqueMaterialRoughRefraction_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->StrataOpaqueMaterialRoughRefraction = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_StrataOpaqueMaterialRoughRefraction = { "StrataOpaqueMaterialRoughRefraction", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_StrataOpaqueMaterialRoughRefraction_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_StrataOpaqueMaterialRoughRefraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_StrataOpaqueMaterialRoughRefraction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_StrataDebugAdvancedVisualizationShaders_MetaData[] = {
		{ "Category", "Substrate" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.Substrate.Debug.AdvancedVisualizationShaders" },
		{ "DisplayName", "Substrate advanced visualization shaders" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Enable advanced Substrate material debug visualization shaders. Base pass shaders can output such advanced data." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_StrataDebugAdvancedVisualizationShaders_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->StrataDebugAdvancedVisualizationShaders = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_StrataDebugAdvancedVisualizationShaders = { "StrataDebugAdvancedVisualizationShaders", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_StrataDebugAdvancedVisualizationShaders_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_StrataDebugAdvancedVisualizationShaders_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_StrataDebugAdvancedVisualizationShaders_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bMaterialRoughDiffuse_MetaData[] = {
		{ "Category", "Materials" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.Material.RoughDiffuse" },
		{ "DisplayName", "Enable Rough Diffuse Material" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Enable Rough Diffuse Material." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bMaterialRoughDiffuse_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bMaterialRoughDiffuse = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bMaterialRoughDiffuse = { "bMaterialRoughDiffuse", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bMaterialRoughDiffuse_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bMaterialRoughDiffuse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bMaterialRoughDiffuse_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bMaterialEnergyConservation_MetaData[] = {
		{ "Category", "Materials" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.Material.EnergyConservation" },
		{ "DisplayName", "Enable Energy Conservation on Material" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Enable Energy Conservation on Material. Please note that when Substrate is enabled, energy conservation is forced to enabled." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bMaterialEnergyConservation_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bMaterialEnergyConservation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bMaterialEnergyConservation = { "bMaterialEnergyConservation", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bMaterialEnergyConservation_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bMaterialEnergyConservation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bMaterialEnergyConservation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bOrderedIndependentTransparencyEnable_MetaData[] = {
		{ "Category", "Translucency" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.OIT.SortedPixels" },
		{ "DisplayName", "Enable Order Independent Transparency (Experimental)" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Enable support for Order-Independent-Transparency on translucent surfaces, which remove most of the sorting artifact among translucent surfaces." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bOrderedIndependentTransparencyEnable_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bOrderedIndependentTransparencyEnable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bOrderedIndependentTransparencyEnable = { "bOrderedIndependentTransparencyEnable", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bOrderedIndependentTransparencyEnable_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bOrderedIndependentTransparencyEnable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bOrderedIndependentTransparencyEnable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportSkinCacheShaders_MetaData[] = {
		{ "Category", "Optimizations" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.SkinCache.CompileShaders" },
		{ "DisplayName", "Support Compute Skin Cache" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Cannot be disabled while Ray Tracing is enabled as it is then required." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportSkinCacheShaders_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bSupportSkinCacheShaders = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportSkinCacheShaders = { "bSupportSkinCacheShaders", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportSkinCacheShaders_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportSkinCacheShaders_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportSkinCacheShaders_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bSkipCompilingGPUSkinVF_MetaData[] = {
		{ "Category", "Optimizations" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.SkinCache.SkipCompilingGPUSkinVF" },
		{ "DisplayName", "Reduce GPU Skin Vertex Factory shader permutations" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Cannot be enabled while the skin cache is turned off." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bSkipCompilingGPUSkinVF_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bSkipCompilingGPUSkinVF = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bSkipCompilingGPUSkinVF = { "bSkipCompilingGPUSkinVF", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bSkipCompilingGPUSkinVF_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bSkipCompilingGPUSkinVF_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bSkipCompilingGPUSkinVF_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultSkinCacheBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultSkinCacheBehavior_MetaData[] = {
		{ "Category", "Optimizations" },
		{ "ConsoleVariable", "r.SkinCache.DefaultBehavior" },
		{ "DisplayName", "Default Skin Cache Behavior" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Default behavior if all skeletal meshes are included/excluded from the skin cache. If Support Ray Tracing is enabled on a mesh, the skin cache will be used for Ray Tracing updates on that mesh regardless of this setting." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultSkinCacheBehavior = { "DefaultSkinCacheBehavior", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URendererSettings, DefaultSkinCacheBehavior), Z_Construct_UEnum_Engine_ESkinCacheDefaultBehavior, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultSkinCacheBehavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultSkinCacheBehavior_MetaData)) }; // 321655969
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_SkinCacheSceneMemoryLimitInMB_MetaData[] = {
		{ "Category", "Optimizations" },
		{ "ConsoleVariable", "r.SkinCache.SceneMemoryLimitInMB" },
		{ "DisplayName", "Maximum memory for Compute Skin Cache per world (MB)" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Maximum amount of memory (in MB) per world/scene allowed for the Compute Skin Cache to generate output vertex data and recompute tangents." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_SkinCacheSceneMemoryLimitInMB = { "SkinCacheSceneMemoryLimitInMB", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URendererSettings, SkinCacheSceneMemoryLimitInMB), METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_SkinCacheSceneMemoryLimitInMB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_SkinCacheSceneMemoryLimitInMB_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileEnableStaticAndCSMShadowReceivers_MetaData[] = {
		{ "Category", "MobileShaderPermutationReduction" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.Mobile.EnableStaticAndCSMShadowReceivers" },
		{ "DisplayName", "Support Combined Static and CSM Shadowing" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Allow primitives to receive both static and CSM shadows from a stationary light. Disabling will free a mobile texture sampler and reduce shader permutations. Changing this setting requires restarting the editor." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileEnableStaticAndCSMShadowReceivers_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bMobileEnableStaticAndCSMShadowReceivers = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileEnableStaticAndCSMShadowReceivers = { "bMobileEnableStaticAndCSMShadowReceivers", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileEnableStaticAndCSMShadowReceivers_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileEnableStaticAndCSMShadowReceivers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileEnableStaticAndCSMShadowReceivers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileEnableMovableLightCSMShaderCulling_MetaData[] = {
		{ "Category", "Mobile" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.Mobile.EnableMovableLightCSMShaderCulling" },
		{ "DisplayName", "Support movable light CSM shader culling" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Primitives lit by a movable directional light will render with the CSM shader only when determined to be within CSM range. Changing this setting requires restarting the editor." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileEnableMovableLightCSMShaderCulling_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bMobileEnableMovableLightCSMShaderCulling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileEnableMovableLightCSMShaderCulling = { "bMobileEnableMovableLightCSMShaderCulling", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileEnableMovableLightCSMShaderCulling_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileEnableMovableLightCSMShaderCulling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileEnableMovableLightCSMShaderCulling_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileForwardEnableLocalLights_MetaData[] = {
		{ "Category", "Mobile" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.Mobile.Forward.EnableLocalLights" },
		{ "DisplayName", "Enable local lights support on mobile forward" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Enable local lights support for mobile forward shading (including translucency in deferred). 0 is disabled, 1 is enabled (default). Changing this setting requires restarting the editor." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileForwardEnableLocalLights_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bMobileForwardEnableLocalLights = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileForwardEnableLocalLights = { "bMobileForwardEnableLocalLights", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileForwardEnableLocalLights_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileForwardEnableLocalLights_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileForwardEnableLocalLights_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileForwardEnableClusteredReflections_MetaData[] = {
		{ "Category", "Mobile" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.Mobile.Forward.EnableClusteredReflections" },
		{ "DisplayName", "Enable clustered reflections on mobile forward" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether to enable clustered reflections on mobile forward (including translucency in deferred). Always supported for opaque geometry on mobile deferred. Changing this setting requires restarting the editor." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileForwardEnableClusteredReflections_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bMobileForwardEnableClusteredReflections = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileForwardEnableClusteredReflections = { "bMobileForwardEnableClusteredReflections", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileForwardEnableClusteredReflections_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileForwardEnableClusteredReflections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileForwardEnableClusteredReflections_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileEnableNoPrecomputedLightingCSMShader_MetaData[] = {
		{ "Category", "MobileShaderPermutationReduction" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.Mobile.EnableNoPrecomputedLightingCSMShader" },
		{ "DisplayName", "Support CSM on levels with Force No Precomputed Lighting enabled" },
		{ "EditCondition", "bAllowStaticLighting" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "When Allow Static Lighting is enabled, shaders to support CSM without any precomputed lighting are not normally generated. This setting allows CSM for this case at the cost of extra shader permutations. Changing this setting requires restarting the editor." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileEnableNoPrecomputedLightingCSMShader_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bMobileEnableNoPrecomputedLightingCSMShader = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileEnableNoPrecomputedLightingCSMShader = { "bMobileEnableNoPrecomputedLightingCSMShader", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileEnableNoPrecomputedLightingCSMShader_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileEnableNoPrecomputedLightingCSMShader_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileEnableNoPrecomputedLightingCSMShader_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAllowDistanceFieldShadows_MetaData[] = {
		{ "Category", "MobileShaderPermutationReduction" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.Mobile.AllowDistanceFieldShadows" },
		{ "DisplayName", "Support Pre-baked Distance Field Shadow Maps" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Generate shaders for static primitives render Lightmass-baked distance field shadow maps from stationary directional lights. Changing this setting requires restarting the editor." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAllowDistanceFieldShadows_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bMobileAllowDistanceFieldShadows = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAllowDistanceFieldShadows = { "bMobileAllowDistanceFieldShadows", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAllowDistanceFieldShadows_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAllowDistanceFieldShadows_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAllowDistanceFieldShadows_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAllowMovableDirectionalLights_MetaData[] = {
		{ "Category", "MobileShaderPermutationReduction" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.Mobile.AllowMovableDirectionalLights" },
		{ "DisplayName", "Support Movable Directional Lights" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Generate shaders for primitives to receive movable directional lights. Changing this setting requires restarting the editor." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAllowMovableDirectionalLights_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bMobileAllowMovableDirectionalLights = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAllowMovableDirectionalLights = { "bMobileAllowMovableDirectionalLights", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAllowMovableDirectionalLights_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAllowMovableDirectionalLights_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAllowMovableDirectionalLights_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAllowMovableSpotlightShadows_MetaData[] = {
		{ "Category", "MobileShaderPermutationReduction" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.Mobile.EnableMovableSpotlightsShadow" },
		{ "DisplayName", "Support Movable SpotlightShadows" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Generate shaders for primitives to receive shadow from movable spotlights. Changing this setting requires restarting the editor." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAllowMovableSpotlightShadows_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bMobileAllowMovableSpotlightShadows = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAllowMovableSpotlightShadows = { "bMobileAllowMovableSpotlightShadows", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAllowMovableSpotlightShadows_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAllowMovableSpotlightShadows_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAllowMovableSpotlightShadows_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupport16BitBoneIndex_MetaData[] = {
		{ "Category", "Skinning" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.GPUSkin.Support16BitBoneIndex" },
		{ "DisplayName", "Support 16-bit Bone Index" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "If enabled, a new mesh imported will use 8 bit (if <=256 bones) or 16 bit (if > 256 bones) bone indices for rendering." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupport16BitBoneIndex_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bSupport16BitBoneIndex = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupport16BitBoneIndex = { "bSupport16BitBoneIndex", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupport16BitBoneIndex_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupport16BitBoneIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupport16BitBoneIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bGPUSkinLimit2BoneInfluences_MetaData[] = {
		{ "Category", "Skinning" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.GPUSkin.Limit2BoneInfluences" },
		{ "DisplayName", "Limit GPU skinning to 2 bones influence" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether to use 2 bone influences instead of the default of 4 for GPU skinning. This does not change skeletal mesh assets but reduces the number of instructions required by the GPU skin vertex shaders. Changing this setting requires restarting the editor." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bGPUSkinLimit2BoneInfluences_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bGPUSkinLimit2BoneInfluences = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bGPUSkinLimit2BoneInfluences = { "bGPUSkinLimit2BoneInfluences", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bGPUSkinLimit2BoneInfluences_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bGPUSkinLimit2BoneInfluences_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bGPUSkinLimit2BoneInfluences_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportDepthOnlyIndexBuffers_MetaData[] = {
		{ "Category", "Optimizations" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.SupportDepthOnlyIndexBuffers" },
		{ "DisplayName", "Support depth-only index buffers" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Support depth-only index buffers, which provide a minor rendering speedup at the expense of using twice the index buffer memory." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportDepthOnlyIndexBuffers_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bSupportDepthOnlyIndexBuffers = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportDepthOnlyIndexBuffers = { "bSupportDepthOnlyIndexBuffers", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportDepthOnlyIndexBuffers_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportDepthOnlyIndexBuffers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportDepthOnlyIndexBuffers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportReversedIndexBuffers_MetaData[] = {
		{ "Category", "Optimizations" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.SupportReversedIndexBuffers" },
		{ "DisplayName", "Support reversed index buffers" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Support reversed index buffers, which provide a minor rendering speedup at the expense of using twice the index buffer memory." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportReversedIndexBuffers_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bSupportReversedIndexBuffers = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportReversedIndexBuffers = { "bSupportReversedIndexBuffers", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportReversedIndexBuffers_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportReversedIndexBuffers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportReversedIndexBuffers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAmbientOcclusion_MetaData[] = {
		{ "Category", "Mobile" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.Mobile.AmbientOcclusion" },
		{ "DisplayName", "Mobile Ambient Occlusion" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Mobile Ambient Occlusion. Causion: An extra sampler will be occupied in mobile base pass pixel shader after enable the mobile ambient occlusion. Changing this setting requires restarting the editor." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAmbientOcclusion_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bMobileAmbientOcclusion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAmbientOcclusion = { "bMobileAmbientOcclusion", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAmbientOcclusion_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAmbientOcclusion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAmbientOcclusion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bUseUnlimitedBoneInfluences_MetaData[] = {
		{ "Category", "Skinning" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.GPUSkin.UnlimitedBoneInfluences" },
		{ "DisplayName", "Use Unlimited Bone Influences" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "If enabled, a new mesh imported will use unlimited bone buffer instead of fixed MaxBoneInfluences for rendering." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bUseUnlimitedBoneInfluences_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bUseUnlimitedBoneInfluences = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bUseUnlimitedBoneInfluences = { "bUseUnlimitedBoneInfluences", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bUseUnlimitedBoneInfluences_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bUseUnlimitedBoneInfluences_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bUseUnlimitedBoneInfluences_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_UnlimitedBonInfluencesThreshold_MetaData[] = {
		{ "Category", "Skinning" },
		{ "ConsoleVariable", "r.GPUSkin.UnlimitedBoneInfluencesThreshold" },
		{ "DisplayName", "Unlimited Bone Influences Threshold" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "When Unlimited Bone Influence is enabled, it still uses a fixed bone inflence buffer until the max bone influence of a mesh exceeds this value" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_UnlimitedBonInfluencesThreshold = { "UnlimitedBonInfluencesThreshold", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URendererSettings, UnlimitedBonInfluencesThreshold), METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_UnlimitedBonInfluencesThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_UnlimitedBonInfluencesThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultBoneInfluenceLimit_MetaData[] = {
		{ "Category", "Skinning" },
		{ "ClampMin", "0" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "When BoneInfluenceLimit on a skeletal mesh LOD is set to 0, this setting is used instead. If this setting is 0, no limit will be applied here and the max bone influences will be determined by other project settings. Changing this setting requires restarting the editor." },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultBoneInfluenceLimit = { "DefaultBoneInfluenceLimit", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URendererSettings, DefaultBoneInfluenceLimit), Z_Construct_UScriptStruct_FPerPlatformInt, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultBoneInfluenceLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultBoneInfluenceLimit_MetaData)) }; // 1463691826
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_MaxSkinBones_MetaData[] = {
		{ "Category", "Skinning" },
		{ "ClampMin", "12" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Maximum bones per Sections" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Max number of bones that can be skinned on the GPU in a single draw call. The default value is set by the Compat.MAX_GPUSKIN_BONES consolevariable. Changing this setting requires restarting the editor." },
		{ "UIMin", "12" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_MaxSkinBones = { "MaxSkinBones", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URendererSettings, MaxSkinBones), Z_Construct_UScriptStruct_FPerPlatformInt, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_MaxSkinBones_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_MaxSkinBones_MetaData)) }; // 1463691826
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_MobilePlanarReflectionMode_MetaData[] = {
		{ "Category", "Mobile" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.Mobile.PlanarReflectionMode" },
		{ "DisplayName", "Planar Reflection Mode" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "The PlanarReflection will work differently on different mode on mobile platform, choose the proper mode as expect. Changing this setting requires restarting the editor." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_MobilePlanarReflectionMode = { "MobilePlanarReflectionMode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URendererSettings, MobilePlanarReflectionMode), Z_Construct_UEnum_Engine_EMobilePlanarReflectionMode, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_MobilePlanarReflectionMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_MobilePlanarReflectionMode_MetaData)) }; // 1889635076
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileSupportsGen4TAA_MetaData[] = {
		{ "Category", "Mobile" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.Mobile.SupportsGen4TAA" },
		{ "DisplayName", "Support desktop Gen4 TAA on mobile" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Support desktop Gen4 TAA with mobile rendering. Changing this setting requires restarting the editor." },
	};
#endif
	void Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileSupportsGen4TAA_SetBit(void* Obj)
	{
		((URendererSettings*)Obj)->bMobileSupportsGen4TAA = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileSupportsGen4TAA = { "bMobileSupportsGen4TAA", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileSupportsGen4TAA_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileSupportsGen4TAA_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileSupportsGen4TAA_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bStreamSkeletalMeshLODs_MetaData[] = {
		{ "Category", "Experimental|LOD Streaming|Skeletal Mesh" },
		{ "DisplayName", "Stream LODs by default" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether to stream skeletal mesh LODs by default." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bStreamSkeletalMeshLODs = { "bStreamSkeletalMeshLODs", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URendererSettings, bStreamSkeletalMeshLODs), Z_Construct_UScriptStruct_FPerPlatformBool, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bStreamSkeletalMeshLODs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bStreamSkeletalMeshLODs_MetaData)) }; // 3656766386
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_bDiscardSkeletalMeshOptionalLODs_MetaData[] = {
		{ "Category", "Experimental|LOD Streaming|Skeletal Mesh" },
		{ "DisplayName", "Discard optional LODs" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether to discard skeletal mesh LODs below minimum LOD levels at cook time." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bDiscardSkeletalMeshOptionalLODs = { "bDiscardSkeletalMeshOptionalLODs", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URendererSettings, bDiscardSkeletalMeshOptionalLODs), Z_Construct_UScriptStruct_FPerPlatformBool, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_bDiscardSkeletalMeshOptionalLODs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_bDiscardSkeletalMeshOptionalLODs_MetaData)) }; // 3656766386
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_VisualizeCalibrationColorMaterialPath_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.Material" },
		{ "Category", "PostProcessCalibrationMaterials" },
		{ "ConfigRestartRequired", "FALSE" },
		{ "DisplayName", "Visualize Calibration Color Material Path" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "When the VisualizeCalibrationColor show flag is enabled, this path will be used as the post-process material to render. The post-process material's Blendable Location property must be set to \"After Tonemapping\" for proper calibration display." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_VisualizeCalibrationColorMaterialPath = { "VisualizeCalibrationColorMaterialPath", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URendererSettings, VisualizeCalibrationColorMaterialPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_VisualizeCalibrationColorMaterialPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_VisualizeCalibrationColorMaterialPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_VisualizeCalibrationCustomMaterialPath_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.Material" },
		{ "Category", "PostProcessCalibrationMaterials" },
		{ "ConfigRestartRequired", "FALSE" },
		{ "DisplayName", "Visualize Calibration Custom Material Path" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "When the VisualizeCalibrationCustom show flag is enabled, this path will be used as the post-process material to render. The post-process material's Blendable Location property must be set to \"After Tonemapping\" for proper calibration display." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_VisualizeCalibrationCustomMaterialPath = { "VisualizeCalibrationCustomMaterialPath", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URendererSettings, VisualizeCalibrationCustomMaterialPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_VisualizeCalibrationCustomMaterialPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_VisualizeCalibrationCustomMaterialPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererSettings_Statics::NewProp_VisualizeCalibrationGrayscaleMaterialPath_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.Material" },
		{ "Category", "PostProcessCalibrationMaterials" },
		{ "ConfigRestartRequired", "FALSE" },
		{ "DisplayName", "Visualize Calibration Grayscale Material Path" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "When the VisualizeCalibrationGrayscale show flag is enabled, this path will be used as the post-process material to render. The post-process material's Blendable Location property must be set to \"After Tonemapping\" for proper calibration display." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_VisualizeCalibrationGrayscaleMaterialPath = { "VisualizeCalibrationGrayscaleMaterialPath", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URendererSettings, VisualizeCalibrationGrayscaleMaterialPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::NewProp_VisualizeCalibrationGrayscaleMaterialPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::NewProp_VisualizeCalibrationGrayscaleMaterialPath_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URendererSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_MobileShadingPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileSupportGPUScene,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_MobileAntiAliasing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_MobileFloatPrecisionMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAllowDitheredLODTransition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileVirtualTextures,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bDiscardUnusedQualityLevels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_ShaderCompressionFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bOcclusionCulling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_MinScreenRadiusForLights,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_MinScreenRadiusForEarlyZPass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_MinScreenRadiusForCSMdepth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bPrecomputedVisibilityWarning,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bTextureStreaming,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bUseDXT5NormalMaps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bVirtualTextures,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bVirtualTextureEnableAutoImport,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bVirtualTexturedLightmaps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bVirtualTextureAnisotropicFiltering,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableVirtualTextureOpacityMask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_VirtualTextureTileSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_VirtualTextureTileBorderSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_VirtualTextureFeedbackFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_WorkingColorSpaceChoice,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_RedChromaticityCoordinate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_GreenChromaticityCoordinate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_BlueChromaticityCoordinate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_WhiteChromaticityCoordinate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bClearCoatEnableSecondNormal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_DynamicGlobalIllumination,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_Reflections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_ReflectionCaptureResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_ReflectionEnvironmentLightmapMixBasedOnRoughness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bUseHardwareRayTracingForLumen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_LumenRayLightingMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_LumenRayLightingMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_LumenFrontLayerTranslucencyReflections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_LumenSoftwareTracingMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_ShadowMapMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableRayTracing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableRayTracingShadows,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableRayTracingSkylight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableRayTracingTextureLOD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnablePathTracing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bGenerateMeshDistanceFields,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_DistanceFieldVoxelDensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bNanite,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bAllowStaticLighting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bUseNormalMapsForStaticLighting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bForwardShading,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bVertexFoggingForOpaque,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bSeparateTranslucency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_TranslucentSortPolicy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_TranslucentSortAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_HMDFixedFoveationLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bHMDFixedFoveationDynamic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_CustomDepthStencil,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bCustomDepthTaaJitter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableAlphaChannelInPostProcessing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureBloom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureAmbientOcclusion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureAmbientOcclusionStaticFraction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureAutoExposure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultFeatureAutoExposure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultFeatureAutoExposureBias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bExtendDefaultLuminanceRangeInAutoExposureSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureMotionBlur,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureLensFlare,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bTemporalUpsampling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultFeatureAntiAliasing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_MSAASampleCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultLightUnits_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultLightUnits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultBackBufferPixelFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bRenderUnbuiltPreviewShadowsInGame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bStencilForLODDither,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_EarlyZPass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bEarlyZPassOnlyMaterialMasking,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableCSMCaching,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bDBuffer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_ClearSceneMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_VelocityPass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_VertexDeformationOutputsVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bSelectiveBasePassOutputs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultParticleCutouts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_GPUSimulationTextureSizeX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_GPUSimulationTextureSizeY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bGlobalClipPlane,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_GBufferFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bUseGPUMorphTargets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bNvidiaAftermathEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bMultiView,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobilePostProcessing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileMultiView,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileUseHWsRGBEncoding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bRoundRobinOcclusion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bMeshStreaming,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableHeterogeneousVolumes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_WireframeCullThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportStationarySkylight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportLowQualityLightmaps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportPointLightWholeSceneShadows,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportSkyAtmosphere,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportSkyAtmosphereAffectsHeightFog,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportCloudShadowOnForwardLitTranslucent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportTranslucentPerObjectShadow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportCloudShadowOnSingleLayerWater,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableStrata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_StrataOpaqueMaterialRoughRefraction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_StrataDebugAdvancedVisualizationShaders,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bMaterialRoughDiffuse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bMaterialEnergyConservation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bOrderedIndependentTransparencyEnable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportSkinCacheShaders,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bSkipCompilingGPUSkinVF,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultSkinCacheBehavior_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultSkinCacheBehavior,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_SkinCacheSceneMemoryLimitInMB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileEnableStaticAndCSMShadowReceivers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileEnableMovableLightCSMShaderCulling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileForwardEnableLocalLights,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileForwardEnableClusteredReflections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileEnableNoPrecomputedLightingCSMShader,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAllowDistanceFieldShadows,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAllowMovableDirectionalLights,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAllowMovableSpotlightShadows,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupport16BitBoneIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bGPUSkinLimit2BoneInfluences,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportDepthOnlyIndexBuffers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportReversedIndexBuffers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAmbientOcclusion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bUseUnlimitedBoneInfluences,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_UnlimitedBonInfluencesThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultBoneInfluenceLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_MaxSkinBones,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_MobilePlanarReflectionMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileSupportsGen4TAA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bStreamSkeletalMeshLODs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bDiscardSkeletalMeshOptionalLODs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_VisualizeCalibrationColorMaterialPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_VisualizeCalibrationCustomMaterialPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_VisualizeCalibrationGrayscaleMaterialPath,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URendererSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URendererSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URendererSettings_Statics::ClassParams = {
		&URendererSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URendererSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_URendererSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URendererSettings()
	{
		if (!Z_Registration_Info_UClass_URendererSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URendererSettings.OuterSingleton, Z_Construct_UClass_URendererSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URendererSettings.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<URendererSettings>()
	{
		return URendererSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URendererSettings);
	URendererSettings::~URendererSettings() {}
	void URendererOverrideSettings::StaticRegisterNativesURendererOverrideSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URendererOverrideSettings);
	UClass* Z_Construct_UClass_URendererOverrideSettings_NoRegister()
	{
		return URendererOverrideSettings::StaticClass();
	}
	struct Z_Construct_UClass_URendererOverrideSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSupportAllShaderPermutations_MetaData[];
#endif
		static void NewProp_bSupportAllShaderPermutations_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportAllShaderPermutations;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URendererOverrideSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererOverrideSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Rendering Overrides (Local)" },
		{ "IncludePath", "Engine/RendererSettings.h" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URendererOverrideSettings_Statics::NewProp_bSupportAllShaderPermutations_MetaData[] = {
		{ "Category", "ShaderPermutationReduction" },
		{ "Comment", "/**\n\x09\x09\"Enabling will locally override all ShaderPermutationReduction settings from the Renderer section to be enabled.  Saved to local user config only..\"\n\x09*/" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.SupportAllShaderPermutations" },
		{ "DisplayName", "Force all shader permutation support" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "\"Enabling will locally override all ShaderPermutationReduction settings from the Renderer section to be enabled.  Saved to local user config only..\"" },
	};
#endif
	void Z_Construct_UClass_URendererOverrideSettings_Statics::NewProp_bSupportAllShaderPermutations_SetBit(void* Obj)
	{
		((URendererOverrideSettings*)Obj)->bSupportAllShaderPermutations = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererOverrideSettings_Statics::NewProp_bSupportAllShaderPermutations = { "bSupportAllShaderPermutations", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(URendererOverrideSettings), &Z_Construct_UClass_URendererOverrideSettings_Statics::NewProp_bSupportAllShaderPermutations_SetBit, METADATA_PARAMS(Z_Construct_UClass_URendererOverrideSettings_Statics::NewProp_bSupportAllShaderPermutations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URendererOverrideSettings_Statics::NewProp_bSupportAllShaderPermutations_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URendererOverrideSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererOverrideSettings_Statics::NewProp_bSupportAllShaderPermutations,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URendererOverrideSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URendererOverrideSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URendererOverrideSettings_Statics::ClassParams = {
		&URendererOverrideSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URendererOverrideSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URendererOverrideSettings_Statics::PropPointers),
		0,
		0x001000E4u,
		METADATA_PARAMS(Z_Construct_UClass_URendererOverrideSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URendererOverrideSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URendererOverrideSettings()
	{
		if (!Z_Registration_Info_UClass_URendererOverrideSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URendererOverrideSettings.OuterSingleton, Z_Construct_UClass_URendererOverrideSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URendererOverrideSettings.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<URendererOverrideSettings>()
	{
		return URendererOverrideSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URendererOverrideSettings);
	URendererOverrideSettings::~URendererOverrideSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_RendererSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_RendererSettings_h_Statics::EnumInfo[] = {
		{ EClearSceneOptions_StaticEnum, TEXT("EClearSceneOptions"), &Z_Registration_Info_UEnum_EClearSceneOptions, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1220986792U) },
		{ ECompositingSampleCount_StaticEnum, TEXT("ECompositingSampleCount"), &Z_Registration_Info_UEnum_ECompositingSampleCount, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1859475892U) },
		{ ECustomDepthStencil_StaticEnum, TEXT("ECustomDepthStencil"), &Z_Registration_Info_UEnum_ECustomDepthStencil, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3987891179U) },
		{ EEarlyZPass_StaticEnum, TEXT("EEarlyZPass"), &Z_Registration_Info_UEnum_EEarlyZPass, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2969302651U) },
		{ EVelocityOutputPass_StaticEnum, TEXT("EVelocityOutputPass"), &Z_Registration_Info_UEnum_EVelocityOutputPass, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1037317395U) },
		{ EVertexDeformationOutputsVelocity_StaticEnum, TEXT("EVertexDeformationOutputsVelocity"), &Z_Registration_Info_UEnum_EVertexDeformationOutputsVelocity, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2994551258U) },
		{ EAlphaChannelMode_StaticEnum, TEXT("EAlphaChannelMode"), &Z_Registration_Info_UEnum_EAlphaChannelMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3097842469U) },
		{ EAutoExposureMethodUI_StaticEnum, TEXT("EAutoExposureMethodUI"), &Z_Registration_Info_UEnum_EAutoExposureMethodUI, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 67444209U) },
		{ EDefaultBackBufferPixelFormat_StaticEnum, TEXT("EDefaultBackBufferPixelFormat"), &Z_Registration_Info_UEnum_EDefaultBackBufferPixelFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2583320590U) },
		{ EFixedFoveationLevels_StaticEnum, TEXT("EFixedFoveationLevels"), &Z_Registration_Info_UEnum_EFixedFoveationLevels, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2813404720U) },
		{ EMobileAntiAliasingMethod_StaticEnum, TEXT("EMobileAntiAliasingMethod"), &Z_Registration_Info_UEnum_EMobileAntiAliasingMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3837580925U) },
		{ EMobileFloatPrecisionMode_StaticEnum, TEXT("EMobileFloatPrecisionMode"), &Z_Registration_Info_UEnum_EMobileFloatPrecisionMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1481648426U) },
		{ EMobileShadingPath_StaticEnum, TEXT("EMobileShadingPath"), &Z_Registration_Info_UEnum_EMobileShadingPath, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2477976678U) },
		{ EShaderCompressionFormat_StaticEnum, TEXT("EShaderCompressionFormat"), &Z_Registration_Info_UEnum_EShaderCompressionFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2572295485U) },
		{ ELumenSoftwareTracingMode_StaticEnum, TEXT("ELumenSoftwareTracingMode"), &Z_Registration_Info_UEnum_ELumenSoftwareTracingMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1084043483U) },
		{ ELumenRayLightingMode_StaticEnum, TEXT("ELumenRayLightingMode"), &Z_Registration_Info_UEnum_ELumenRayLightingMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1071933416U) },
		{ EWorkingColorSpace_StaticEnum, TEXT("EWorkingColorSpace"), &Z_Registration_Info_UEnum_EWorkingColorSpace, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 135589502U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_RendererSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URendererSettings, URendererSettings::StaticClass, TEXT("URendererSettings"), &Z_Registration_Info_UClass_URendererSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URendererSettings), 2872681180U) },
		{ Z_Construct_UClass_URendererOverrideSettings, URendererOverrideSettings::StaticClass, TEXT("URendererOverrideSettings"), &Z_Registration_Info_UClass_URendererOverrideSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URendererOverrideSettings), 2844223560U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_RendererSettings_h_4251760909(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_RendererSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_RendererSettings_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_RendererSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_RendererSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
