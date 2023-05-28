// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ComposureLensBloomPass.h"
#include "../../Source/Runtime/Engine/Classes/Engine/Scene.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComposureLensBloomPass() {}
// Cross Module References
	COMPOSURE_API UClass* Z_Construct_UClass_UComposureLensBloomPass();
	COMPOSURE_API UClass* Z_Construct_UClass_UComposureLensBloomPass_NoRegister();
	COMPOSURE_API UClass* Z_Construct_UClass_UComposureLensBloomPassPolicy();
	COMPOSURE_API UClass* Z_Construct_UClass_UComposureLensBloomPassPolicy_NoRegister();
	COMPOSURE_API UClass* Z_Construct_UClass_UComposurePostProcessPass();
	COMPOSURE_API UClass* Z_Construct_UClass_UComposurePostProcessPassPolicy();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLensBloomSettings();
	UPackage* Z_Construct_UPackage__Script_Composure();
// End Cross Module References
	DEFINE_FUNCTION(UComposureLensBloomPass::execBloomToRenderTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BloomToRenderTarget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComposureLensBloomPass::execSetTonemapperReplacingMaterial)
	{
		P_GET_OBJECT(UMaterialInstanceDynamic,Z_Param_Material);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTonemapperReplacingMaterial(Z_Param_Material);
		P_NATIVE_END;
	}
	void UComposureLensBloomPass::StaticRegisterNativesUComposureLensBloomPass()
	{
		UClass* Class = UComposureLensBloomPass::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BloomToRenderTarget", &UComposureLensBloomPass::execBloomToRenderTarget },
			{ "SetTonemapperReplacingMaterial", &UComposureLensBloomPass::execSetTonemapperReplacingMaterial },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UComposureLensBloomPass_BloomToRenderTarget_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComposureLensBloomPass_BloomToRenderTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Outputs" },
		{ "Comment", "/** \n\x09 * Blurs the input into the output.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/ComposureLensBloomPass.h" },
		{ "ToolTip", "Blurs the input into the output." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComposureLensBloomPass_BloomToRenderTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComposureLensBloomPass, nullptr, "BloomToRenderTarget", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComposureLensBloomPass_BloomToRenderTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposureLensBloomPass_BloomToRenderTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComposureLensBloomPass_BloomToRenderTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComposureLensBloomPass_BloomToRenderTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComposureLensBloomPass_SetTonemapperReplacingMaterial_Statics
	{
		struct ComposureLensBloomPass_eventSetTonemapperReplacingMaterial_Parms
		{
			UMaterialInstanceDynamic* Material;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComposureLensBloomPass_SetTonemapperReplacingMaterial_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ComposureLensBloomPass_eventSetTonemapperReplacingMaterial_Parms, Material), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComposureLensBloomPass_SetTonemapperReplacingMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposureLensBloomPass_SetTonemapperReplacingMaterial_Statics::NewProp_Material,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComposureLensBloomPass_SetTonemapperReplacingMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lens Bloom Settings" },
		{ "Comment", "/** Sets a custom tonemapper replacing material instance. */" },
		{ "ModuleRelativePath", "Classes/ComposureLensBloomPass.h" },
		{ "ToolTip", "Sets a custom tonemapper replacing material instance." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComposureLensBloomPass_SetTonemapperReplacingMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComposureLensBloomPass, nullptr, "SetTonemapperReplacingMaterial", nullptr, nullptr, sizeof(Z_Construct_UFunction_UComposureLensBloomPass_SetTonemapperReplacingMaterial_Statics::ComposureLensBloomPass_eventSetTonemapperReplacingMaterial_Parms), Z_Construct_UFunction_UComposureLensBloomPass_SetTonemapperReplacingMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposureLensBloomPass_SetTonemapperReplacingMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComposureLensBloomPass_SetTonemapperReplacingMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposureLensBloomPass_SetTonemapperReplacingMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComposureLensBloomPass_SetTonemapperReplacingMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComposureLensBloomPass_SetTonemapperReplacingMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UComposureLensBloomPass);
	UClass* Z_Construct_UClass_UComposureLensBloomPass_NoRegister()
	{
		return UComposureLensBloomPass::StaticClass();
	}
	struct Z_Construct_UClass_UComposureLensBloomPass_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TonemapperReplacingMID_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TonemapperReplacingMID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComposureLensBloomPass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UComposurePostProcessPass,
		(UObject* (*)())Z_Construct_UPackage__Script_Composure,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UComposureLensBloomPass_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UComposureLensBloomPass_BloomToRenderTarget, "BloomToRenderTarget" }, // 1617143519
		{ &Z_Construct_UFunction_UComposureLensBloomPass_SetTonemapperReplacingMaterial, "SetTonemapperReplacingMaterial" }, // 4252185890
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComposureLensBloomPass_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Composure" },
		{ "Comment", "/**\n * Bloom only pass implemented on top of the in-engine bloom.\n */" },
		{ "HideCategories", "Collision Object Physics SceneComponent Transform Trigger PhysicsVolume" },
		{ "IncludePath", "ComposureLensBloomPass.h" },
		{ "ModuleRelativePath", "Classes/ComposureLensBloomPass.h" },
		{ "ToolTip", "Bloom only pass implemented on top of the in-engine bloom." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComposureLensBloomPass_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "Lens Bloom Settings" },
		{ "Comment", "/** Bloom settings. */" },
		{ "ModuleRelativePath", "Classes/ComposureLensBloomPass.h" },
		{ "ToolTip", "Bloom settings." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UComposureLensBloomPass_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UComposureLensBloomPass, Settings), Z_Construct_UScriptStruct_FLensBloomSettings, METADATA_PARAMS(Z_Construct_UClass_UComposureLensBloomPass_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComposureLensBloomPass_Statics::NewProp_Settings_MetaData)) }; // 1102273861
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComposureLensBloomPass_Statics::NewProp_TonemapperReplacingMID_MetaData[] = {
		{ "ModuleRelativePath", "Classes/ComposureLensBloomPass.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UComposureLensBloomPass_Statics::NewProp_TonemapperReplacingMID = { "TonemapperReplacingMID", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UComposureLensBloomPass, TonemapperReplacingMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UComposureLensBloomPass_Statics::NewProp_TonemapperReplacingMID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComposureLensBloomPass_Statics::NewProp_TonemapperReplacingMID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UComposureLensBloomPass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComposureLensBloomPass_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComposureLensBloomPass_Statics::NewProp_TonemapperReplacingMID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComposureLensBloomPass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComposureLensBloomPass>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UComposureLensBloomPass_Statics::ClassParams = {
		&UComposureLensBloomPass::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UComposureLensBloomPass_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UComposureLensBloomPass_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UComposureLensBloomPass_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UComposureLensBloomPass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UComposureLensBloomPass()
	{
		if (!Z_Registration_Info_UClass_UComposureLensBloomPass.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UComposureLensBloomPass.OuterSingleton, Z_Construct_UClass_UComposureLensBloomPass_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UComposureLensBloomPass.OuterSingleton;
	}
	template<> COMPOSURE_API UClass* StaticClass<UComposureLensBloomPass>()
	{
		return UComposureLensBloomPass::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComposureLensBloomPass);
	UComposureLensBloomPass::~UComposureLensBloomPass() {}
	void UComposureLensBloomPassPolicy::StaticRegisterNativesUComposureLensBloomPassPolicy()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UComposureLensBloomPassPolicy);
	UClass* Z_Construct_UClass_UComposureLensBloomPassPolicy_NoRegister()
	{
		return UComposureLensBloomPassPolicy::StaticClass();
	}
	struct Z_Construct_UClass_UComposureLensBloomPassPolicy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplacementMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ReplacementMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BloomIntensityParamName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BloomIntensityParamName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TonemapperReplacmentMID_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TonemapperReplacmentMID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComposureLensBloomPassPolicy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UComposurePostProcessPassPolicy,
		(UObject* (*)())Z_Construct_UPackage__Script_Composure,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComposureLensBloomPassPolicy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Bloom only rules used for configuring how UComposurePostProcessingPassProxy executes\n */" },
		{ "DisplayName", "Lens Bloom Pass" },
		{ "IncludePath", "ComposureLensBloomPass.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/ComposureLensBloomPass.h" },
		{ "ToolTip", "Bloom only rules used for configuring how UComposurePostProcessingPassProxy executes" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComposureLensBloomPassPolicy_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "Lens Bloom Settings" },
		{ "Comment", "/** Bloom settings. */" },
		{ "ModuleRelativePath", "Classes/ComposureLensBloomPass.h" },
		{ "ToolTip", "Bloom settings." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UComposureLensBloomPassPolicy_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UComposureLensBloomPassPolicy, Settings), Z_Construct_UScriptStruct_FLensBloomSettings, METADATA_PARAMS(Z_Construct_UClass_UComposureLensBloomPassPolicy_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComposureLensBloomPassPolicy_Statics::NewProp_Settings_MetaData)) }; // 1102273861
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComposureLensBloomPassPolicy_Statics::NewProp_ReplacementMaterial_MetaData[] = {
		{ "Category", "Tonemapper Settings" },
		{ "ModuleRelativePath", "Classes/ComposureLensBloomPass.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UComposureLensBloomPassPolicy_Statics::NewProp_ReplacementMaterial = { "ReplacementMaterial", nullptr, (EPropertyFlags)0x0014040000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UComposureLensBloomPassPolicy, ReplacementMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UComposureLensBloomPassPolicy_Statics::NewProp_ReplacementMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComposureLensBloomPassPolicy_Statics::NewProp_ReplacementMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComposureLensBloomPassPolicy_Statics::NewProp_BloomIntensityParamName_MetaData[] = {
		{ "Category", "Tonemapper Settings" },
		{ "ModuleRelativePath", "Classes/ComposureLensBloomPass.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UComposureLensBloomPassPolicy_Statics::NewProp_BloomIntensityParamName = { "BloomIntensityParamName", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UComposureLensBloomPassPolicy, BloomIntensityParamName), METADATA_PARAMS(Z_Construct_UClass_UComposureLensBloomPassPolicy_Statics::NewProp_BloomIntensityParamName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComposureLensBloomPassPolicy_Statics::NewProp_BloomIntensityParamName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComposureLensBloomPassPolicy_Statics::NewProp_TonemapperReplacmentMID_MetaData[] = {
		{ "ModuleRelativePath", "Classes/ComposureLensBloomPass.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UComposureLensBloomPassPolicy_Statics::NewProp_TonemapperReplacmentMID = { "TonemapperReplacmentMID", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UComposureLensBloomPassPolicy, TonemapperReplacmentMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UComposureLensBloomPassPolicy_Statics::NewProp_TonemapperReplacmentMID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComposureLensBloomPassPolicy_Statics::NewProp_TonemapperReplacmentMID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UComposureLensBloomPassPolicy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComposureLensBloomPassPolicy_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComposureLensBloomPassPolicy_Statics::NewProp_ReplacementMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComposureLensBloomPassPolicy_Statics::NewProp_BloomIntensityParamName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComposureLensBloomPassPolicy_Statics::NewProp_TonemapperReplacmentMID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComposureLensBloomPassPolicy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComposureLensBloomPassPolicy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UComposureLensBloomPassPolicy_Statics::ClassParams = {
		&UComposureLensBloomPassPolicy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UComposureLensBloomPassPolicy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UComposureLensBloomPassPolicy_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UComposureLensBloomPassPolicy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UComposureLensBloomPassPolicy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UComposureLensBloomPassPolicy()
	{
		if (!Z_Registration_Info_UClass_UComposureLensBloomPassPolicy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UComposureLensBloomPassPolicy.OuterSingleton, Z_Construct_UClass_UComposureLensBloomPassPolicy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UComposureLensBloomPassPolicy.OuterSingleton;
	}
	template<> COMPOSURE_API UClass* StaticClass<UComposureLensBloomPassPolicy>()
	{
		return UComposureLensBloomPassPolicy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComposureLensBloomPassPolicy);
	UComposureLensBloomPassPolicy::~UComposureLensBloomPassPolicy() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureLensBloomPass_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureLensBloomPass_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UComposureLensBloomPass, UComposureLensBloomPass::StaticClass, TEXT("UComposureLensBloomPass"), &Z_Registration_Info_UClass_UComposureLensBloomPass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UComposureLensBloomPass), 1019958476U) },
		{ Z_Construct_UClass_UComposureLensBloomPassPolicy, UComposureLensBloomPassPolicy::StaticClass, TEXT("UComposureLensBloomPassPolicy"), &Z_Registration_Info_UClass_UComposureLensBloomPassPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UComposureLensBloomPassPolicy), 2233641350U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureLensBloomPass_h_2177772846(TEXT("/Script/Composure"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureLensBloomPass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureLensBloomPass_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
