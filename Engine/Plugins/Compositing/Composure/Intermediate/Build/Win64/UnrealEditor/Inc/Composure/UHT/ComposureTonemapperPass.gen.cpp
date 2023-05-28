// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ComposureTonemapperPass.h"
#include "../../Source/Runtime/Engine/Classes/Engine/Scene.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComposureTonemapperPass() {}
// Cross Module References
	COMPOSURE_API UClass* Z_Construct_UClass_UComposurePostProcessPass();
	COMPOSURE_API UClass* Z_Construct_UClass_UComposurePostProcessPassPolicy();
	COMPOSURE_API UClass* Z_Construct_UClass_UComposureTonemapperPass();
	COMPOSURE_API UClass* Z_Construct_UClass_UComposureTonemapperPass_NoRegister();
	COMPOSURE_API UClass* Z_Construct_UClass_UComposureTonemapperPassPolicy();
	COMPOSURE_API UClass* Z_Construct_UClass_UComposureTonemapperPassPolicy_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FColorGradingSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFilmStockSettings();
	UPackage* Z_Construct_UPackage__Script_Composure();
// End Cross Module References
	DEFINE_FUNCTION(UComposureTonemapperPass::execTonemapToRenderTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TonemapToRenderTarget();
		P_NATIVE_END;
	}
	void UComposureTonemapperPass::StaticRegisterNativesUComposureTonemapperPass()
	{
		UClass* Class = UComposureTonemapperPass::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TonemapToRenderTarget", &UComposureTonemapperPass::execTonemapToRenderTarget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UComposureTonemapperPass_TonemapToRenderTarget_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComposureTonemapperPass_TonemapToRenderTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Outputs" },
		{ "Comment", "/** \n\x09 * Tone map the input into the output.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/ComposureTonemapperPass.h" },
		{ "ToolTip", "Tone map the input into the output." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComposureTonemapperPass_TonemapToRenderTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComposureTonemapperPass, nullptr, "TonemapToRenderTarget", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComposureTonemapperPass_TonemapToRenderTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposureTonemapperPass_TonemapToRenderTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComposureTonemapperPass_TonemapToRenderTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComposureTonemapperPass_TonemapToRenderTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UComposureTonemapperPass);
	UClass* Z_Construct_UClass_UComposureTonemapperPass_NoRegister()
	{
		return UComposureTonemapperPass::StaticClass();
	}
	struct Z_Construct_UClass_UComposureTonemapperPass_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorGradingSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorGradingSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilmStockSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FilmStockSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChromaticAberration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ChromaticAberration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComposureTonemapperPass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UComposurePostProcessPass,
		(UObject* (*)())Z_Construct_UPackage__Script_Composure,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UComposureTonemapperPass_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UComposureTonemapperPass_TonemapToRenderTarget, "TonemapToRenderTarget" }, // 977237903
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComposureTonemapperPass_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Composure" },
		{ "Comment", "/**\n * Tonemapper only pass implemented on top of the in-engine tonemapper.\n */" },
		{ "HideCategories", "Collision Object Physics SceneComponent Transform Trigger PhysicsVolume" },
		{ "IncludePath", "ComposureTonemapperPass.h" },
		{ "ModuleRelativePath", "Classes/ComposureTonemapperPass.h" },
		{ "ToolTip", "Tonemapper only pass implemented on top of the in-engine tonemapper." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComposureTonemapperPass_Statics::NewProp_ColorGradingSettings_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Color grading settings. */" },
		{ "ModuleRelativePath", "Classes/ComposureTonemapperPass.h" },
		{ "ToolTip", "Color grading settings." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UComposureTonemapperPass_Statics::NewProp_ColorGradingSettings = { "ColorGradingSettings", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UComposureTonemapperPass, ColorGradingSettings), Z_Construct_UScriptStruct_FColorGradingSettings, METADATA_PARAMS(Z_Construct_UClass_UComposureTonemapperPass_Statics::NewProp_ColorGradingSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComposureTonemapperPass_Statics::NewProp_ColorGradingSettings_MetaData)) }; // 32815037
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComposureTonemapperPass_Statics::NewProp_FilmStockSettings_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Film stock settings. */" },
		{ "ModuleRelativePath", "Classes/ComposureTonemapperPass.h" },
		{ "ToolTip", "Film stock settings." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UComposureTonemapperPass_Statics::NewProp_FilmStockSettings = { "FilmStockSettings", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UComposureTonemapperPass, FilmStockSettings), Z_Construct_UScriptStruct_FFilmStockSettings, METADATA_PARAMS(Z_Construct_UClass_UComposureTonemapperPass_Statics::NewProp_FilmStockSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComposureTonemapperPass_Statics::NewProp_FilmStockSettings_MetaData)) }; // 2552197186
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComposureTonemapperPass_Statics::NewProp_ChromaticAberration_MetaData[] = {
		{ "Category", "Lens" },
		{ "Comment", "/** in percent, Scene chromatic aberration / color fringe (camera imperfection) to simulate an artifact that happens in real-world lens, mostly visible in the image corners. */" },
		{ "ModuleRelativePath", "Classes/ComposureTonemapperPass.h" },
		{ "ToolTip", "in percent, Scene chromatic aberration / color fringe (camera imperfection) to simulate an artifact that happens in real-world lens, mostly visible in the image corners." },
		{ "UIMax", "5.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UComposureTonemapperPass_Statics::NewProp_ChromaticAberration = { "ChromaticAberration", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UComposureTonemapperPass, ChromaticAberration), METADATA_PARAMS(Z_Construct_UClass_UComposureTonemapperPass_Statics::NewProp_ChromaticAberration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComposureTonemapperPass_Statics::NewProp_ChromaticAberration_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UComposureTonemapperPass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComposureTonemapperPass_Statics::NewProp_ColorGradingSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComposureTonemapperPass_Statics::NewProp_FilmStockSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComposureTonemapperPass_Statics::NewProp_ChromaticAberration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComposureTonemapperPass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComposureTonemapperPass>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UComposureTonemapperPass_Statics::ClassParams = {
		&UComposureTonemapperPass::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UComposureTonemapperPass_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UComposureTonemapperPass_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UComposureTonemapperPass_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UComposureTonemapperPass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UComposureTonemapperPass()
	{
		if (!Z_Registration_Info_UClass_UComposureTonemapperPass.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UComposureTonemapperPass.OuterSingleton, Z_Construct_UClass_UComposureTonemapperPass_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UComposureTonemapperPass.OuterSingleton;
	}
	template<> COMPOSURE_API UClass* StaticClass<UComposureTonemapperPass>()
	{
		return UComposureTonemapperPass::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComposureTonemapperPass);
	UComposureTonemapperPass::~UComposureTonemapperPass() {}
	void UComposureTonemapperPassPolicy::StaticRegisterNativesUComposureTonemapperPassPolicy()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UComposureTonemapperPassPolicy);
	UClass* Z_Construct_UClass_UComposureTonemapperPassPolicy_NoRegister()
	{
		return UComposureTonemapperPassPolicy::StaticClass();
	}
	struct Z_Construct_UClass_UComposureTonemapperPassPolicy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorGradingSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorGradingSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilmStockSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FilmStockSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChromaticAberration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ChromaticAberration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComposureTonemapperPassPolicy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UComposurePostProcessPassPolicy,
		(UObject* (*)())Z_Construct_UPackage__Script_Composure,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComposureTonemapperPassPolicy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Tonemapper only rules used for configuring how UComposurePostProcessingPassProxy executes\n */" },
		{ "DisplayName", "Tonemapper Pass" },
		{ "IncludePath", "ComposureTonemapperPass.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/ComposureTonemapperPass.h" },
		{ "ToolTip", "Tonemapper only rules used for configuring how UComposurePostProcessingPassProxy executes" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComposureTonemapperPassPolicy_Statics::NewProp_ColorGradingSettings_MetaData[] = {
		{ "Category", "Tonemapper Settings" },
		{ "Comment", "/** Color grading settings. */" },
		{ "ModuleRelativePath", "Classes/ComposureTonemapperPass.h" },
		{ "ToolTip", "Color grading settings." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UComposureTonemapperPassPolicy_Statics::NewProp_ColorGradingSettings = { "ColorGradingSettings", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UComposureTonemapperPassPolicy, ColorGradingSettings), Z_Construct_UScriptStruct_FColorGradingSettings, METADATA_PARAMS(Z_Construct_UClass_UComposureTonemapperPassPolicy_Statics::NewProp_ColorGradingSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComposureTonemapperPassPolicy_Statics::NewProp_ColorGradingSettings_MetaData)) }; // 32815037
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComposureTonemapperPassPolicy_Statics::NewProp_FilmStockSettings_MetaData[] = {
		{ "Category", "Tonemapper Settings" },
		{ "Comment", "/** Film stock settings. */" },
		{ "ModuleRelativePath", "Classes/ComposureTonemapperPass.h" },
		{ "ToolTip", "Film stock settings." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UComposureTonemapperPassPolicy_Statics::NewProp_FilmStockSettings = { "FilmStockSettings", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UComposureTonemapperPassPolicy, FilmStockSettings), Z_Construct_UScriptStruct_FFilmStockSettings, METADATA_PARAMS(Z_Construct_UClass_UComposureTonemapperPassPolicy_Statics::NewProp_FilmStockSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComposureTonemapperPassPolicy_Statics::NewProp_FilmStockSettings_MetaData)) }; // 2552197186
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComposureTonemapperPassPolicy_Statics::NewProp_ChromaticAberration_MetaData[] = {
		{ "Category", "Lens Settings" },
		{ "Comment", "/** in percent, Scene chromatic aberration / color fringe (camera imperfection) to simulate an artifact that happens in real-world lens, mostly visible in the image corners. */" },
		{ "ModuleRelativePath", "Classes/ComposureTonemapperPass.h" },
		{ "ToolTip", "in percent, Scene chromatic aberration / color fringe (camera imperfection) to simulate an artifact that happens in real-world lens, mostly visible in the image corners." },
		{ "UIMax", "5.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UComposureTonemapperPassPolicy_Statics::NewProp_ChromaticAberration = { "ChromaticAberration", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UComposureTonemapperPassPolicy, ChromaticAberration), METADATA_PARAMS(Z_Construct_UClass_UComposureTonemapperPassPolicy_Statics::NewProp_ChromaticAberration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComposureTonemapperPassPolicy_Statics::NewProp_ChromaticAberration_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UComposureTonemapperPassPolicy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComposureTonemapperPassPolicy_Statics::NewProp_ColorGradingSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComposureTonemapperPassPolicy_Statics::NewProp_FilmStockSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComposureTonemapperPassPolicy_Statics::NewProp_ChromaticAberration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComposureTonemapperPassPolicy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComposureTonemapperPassPolicy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UComposureTonemapperPassPolicy_Statics::ClassParams = {
		&UComposureTonemapperPassPolicy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UComposureTonemapperPassPolicy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UComposureTonemapperPassPolicy_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UComposureTonemapperPassPolicy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UComposureTonemapperPassPolicy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UComposureTonemapperPassPolicy()
	{
		if (!Z_Registration_Info_UClass_UComposureTonemapperPassPolicy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UComposureTonemapperPassPolicy.OuterSingleton, Z_Construct_UClass_UComposureTonemapperPassPolicy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UComposureTonemapperPassPolicy.OuterSingleton;
	}
	template<> COMPOSURE_API UClass* StaticClass<UComposureTonemapperPassPolicy>()
	{
		return UComposureTonemapperPassPolicy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComposureTonemapperPassPolicy);
	UComposureTonemapperPassPolicy::~UComposureTonemapperPassPolicy() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureTonemapperPass_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureTonemapperPass_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UComposureTonemapperPass, UComposureTonemapperPass::StaticClass, TEXT("UComposureTonemapperPass"), &Z_Registration_Info_UClass_UComposureTonemapperPass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UComposureTonemapperPass), 943895838U) },
		{ Z_Construct_UClass_UComposureTonemapperPassPolicy, UComposureTonemapperPassPolicy::StaticClass, TEXT("UComposureTonemapperPassPolicy"), &Z_Registration_Info_UClass_UComposureTonemapperPassPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UComposureTonemapperPassPolicy), 3564694834U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureTonemapperPass_h_734888923(TEXT("/Script/Composure"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureTonemapperPass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureTonemapperPass_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
