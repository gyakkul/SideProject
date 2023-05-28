// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionShaderStageSwitch.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionShaderStageSwitch() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionShaderStageSwitch();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionShaderStageSwitch_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionShaderStageSwitch::StaticRegisterNativesUMaterialExpressionShaderStageSwitch()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionShaderStageSwitch);
	UClass* Z_Construct_UClass_UMaterialExpressionShaderStageSwitch_NoRegister()
	{
		return UMaterialExpressionShaderStageSwitch::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionShaderStageSwitch_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PixelShader_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PixelShader;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexShader_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VertexShader;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionShaderStageSwitch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionShaderStageSwitch_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionShaderStageSwitch.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionShaderStageSwitch.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionShaderStageSwitch_Statics::NewProp_PixelShader_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionShaderStageSwitch.h" },
		{ "RequiredInput", "true" },
		{ "ToolTip", "Input will be used in pixel (or compute) shader stages" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionShaderStageSwitch_Statics::NewProp_PixelShader = { "PixelShader", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionShaderStageSwitch, PixelShader), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionShaderStageSwitch_Statics::NewProp_PixelShader_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionShaderStageSwitch_Statics::NewProp_PixelShader_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionShaderStageSwitch_Statics::NewProp_VertexShader_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionShaderStageSwitch.h" },
		{ "RequiredInput", "true" },
		{ "ToolTip", "Input will be in vertex (or tessellation) shader stages" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionShaderStageSwitch_Statics::NewProp_VertexShader = { "VertexShader", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionShaderStageSwitch, VertexShader), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionShaderStageSwitch_Statics::NewProp_VertexShader_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionShaderStageSwitch_Statics::NewProp_VertexShader_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionShaderStageSwitch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionShaderStageSwitch_Statics::NewProp_PixelShader,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionShaderStageSwitch_Statics::NewProp_VertexShader,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionShaderStageSwitch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionShaderStageSwitch>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionShaderStageSwitch_Statics::ClassParams = {
		&UMaterialExpressionShaderStageSwitch::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionShaderStageSwitch_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionShaderStageSwitch_Statics::PropPointers),
		0,
		0x000820B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionShaderStageSwitch_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionShaderStageSwitch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionShaderStageSwitch()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionShaderStageSwitch.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionShaderStageSwitch.OuterSingleton, Z_Construct_UClass_UMaterialExpressionShaderStageSwitch_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionShaderStageSwitch.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionShaderStageSwitch>()
	{
		return UMaterialExpressionShaderStageSwitch::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionShaderStageSwitch);
	UMaterialExpressionShaderStageSwitch::~UMaterialExpressionShaderStageSwitch() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionShaderStageSwitch_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionShaderStageSwitch_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionShaderStageSwitch, UMaterialExpressionShaderStageSwitch::StaticClass, TEXT("UMaterialExpressionShaderStageSwitch"), &Z_Registration_Info_UClass_UMaterialExpressionShaderStageSwitch, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionShaderStageSwitch), 3283321634U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionShaderStageSwitch_h_367169795(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionShaderStageSwitch_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionShaderStageSwitch_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
