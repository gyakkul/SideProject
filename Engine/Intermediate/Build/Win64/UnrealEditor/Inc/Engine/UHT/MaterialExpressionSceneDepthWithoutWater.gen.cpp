// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionSceneDepthWithoutWater.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionSceneDepthWithoutWater() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSceneDepthWithoutWater();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSceneDepthWithoutWater_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialSceneAttributeInputMode();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionSceneDepthWithoutWater::StaticRegisterNativesUMaterialExpressionSceneDepthWithoutWater()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionSceneDepthWithoutWater);
	UClass* Z_Construct_UClass_UMaterialExpressionSceneDepthWithoutWater_NoRegister()
	{
		return UMaterialExpressionSceneDepthWithoutWater::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionSceneDepthWithoutWater_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_InputMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstInput_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConstInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FallbackDepth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FallbackDepth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionSceneDepthWithoutWater_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSceneDepthWithoutWater_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionSceneDepthWithoutWater.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSceneDepthWithoutWater.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSceneDepthWithoutWater_Statics::NewProp_InputMode_MetaData[] = {
		{ "Category", "MaterialExpressionSceneDepthWithoutWater" },
		{ "Comment", "/**\n\x09* Coordinates - UV coordinates to apply to the scene depth lookup.\n\x09* OffsetFraction - An offset to apply to the scene depth lookup in a 2d fraction of the screen.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSceneDepthWithoutWater.h" },
		{ "ShowAsInputPin", "Advanced" },
		{ "ToolTip", "Coordinates - UV coordinates to apply to the scene depth lookup.\nOffsetFraction - An offset to apply to the scene depth lookup in a 2d fraction of the screen." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionSceneDepthWithoutWater_Statics::NewProp_InputMode = { "InputMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionSceneDepthWithoutWater, InputMode), Z_Construct_UEnum_Engine_EMaterialSceneAttributeInputMode, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSceneDepthWithoutWater_Statics::NewProp_InputMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSceneDepthWithoutWater_Statics::NewProp_InputMode_MetaData)) }; // 2971743664
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSceneDepthWithoutWater_Statics::NewProp_Input_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSceneDepthWithoutWater.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'ConstInput' if not specified" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionSceneDepthWithoutWater_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionSceneDepthWithoutWater, Input), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSceneDepthWithoutWater_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSceneDepthWithoutWater_Statics::NewProp_Input_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSceneDepthWithoutWater_Statics::NewProp_ConstInput_MetaData[] = {
		{ "Category", "MaterialExpressionSceneDepthWithoutWater" },
		{ "Comment", "/** only used if Input is not hooked up */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSceneDepthWithoutWater.h" },
		{ "OverridingInputProperty", "Input" },
		{ "ToolTip", "only used if Input is not hooked up" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionSceneDepthWithoutWater_Statics::NewProp_ConstInput = { "ConstInput", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionSceneDepthWithoutWater, ConstInput), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSceneDepthWithoutWater_Statics::NewProp_ConstInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSceneDepthWithoutWater_Statics::NewProp_ConstInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSceneDepthWithoutWater_Statics::NewProp_FallbackDepth_MetaData[] = {
		{ "Category", "MaterialExpressionSceneDepthWithoutWater" },
		{ "Comment", "/** Depth to fall back to in case the needed texture isn't available on a particular platform or configuration */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSceneDepthWithoutWater.h" },
		{ "ShowAsInputPin", "Advanced" },
		{ "ToolTip", "Depth to fall back to in case the needed texture isn't available on a particular platform or configuration" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionSceneDepthWithoutWater_Statics::NewProp_FallbackDepth = { "FallbackDepth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionSceneDepthWithoutWater, FallbackDepth), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSceneDepthWithoutWater_Statics::NewProp_FallbackDepth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSceneDepthWithoutWater_Statics::NewProp_FallbackDepth_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionSceneDepthWithoutWater_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSceneDepthWithoutWater_Statics::NewProp_InputMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSceneDepthWithoutWater_Statics::NewProp_Input,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSceneDepthWithoutWater_Statics::NewProp_ConstInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSceneDepthWithoutWater_Statics::NewProp_FallbackDepth,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionSceneDepthWithoutWater_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionSceneDepthWithoutWater>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionSceneDepthWithoutWater_Statics::ClassParams = {
		&UMaterialExpressionSceneDepthWithoutWater::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionSceneDepthWithoutWater_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSceneDepthWithoutWater_Statics::PropPointers),
		0,
		0x000020B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSceneDepthWithoutWater_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSceneDepthWithoutWater_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionSceneDepthWithoutWater()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionSceneDepthWithoutWater.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionSceneDepthWithoutWater.OuterSingleton, Z_Construct_UClass_UMaterialExpressionSceneDepthWithoutWater_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionSceneDepthWithoutWater.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionSceneDepthWithoutWater>()
	{
		return UMaterialExpressionSceneDepthWithoutWater::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionSceneDepthWithoutWater);
	UMaterialExpressionSceneDepthWithoutWater::~UMaterialExpressionSceneDepthWithoutWater() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneDepthWithoutWater_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneDepthWithoutWater_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionSceneDepthWithoutWater, UMaterialExpressionSceneDepthWithoutWater::StaticClass, TEXT("UMaterialExpressionSceneDepthWithoutWater"), &Z_Registration_Info_UClass_UMaterialExpressionSceneDepthWithoutWater, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionSceneDepthWithoutWater), 1338725471U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneDepthWithoutWater_h_3576909870(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneDepthWithoutWater_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneDepthWithoutWater_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
