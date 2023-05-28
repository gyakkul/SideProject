// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionRuntimeVirtualTextureOutput.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionRuntimeVirtualTextureOutput() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionCustomOutput();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureOutput();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureOutput_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionRuntimeVirtualTextureOutput::StaticRegisterNativesUMaterialExpressionRuntimeVirtualTextureOutput()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionRuntimeVirtualTextureOutput);
	UClass* Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureOutput_NoRegister()
	{
		return UMaterialExpressionRuntimeVirtualTextureOutput::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureOutput_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BaseColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Specular_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Specular;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Roughness_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Roughness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldHeight_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Opacity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Opacity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mask_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Mask;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureOutput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpressionCustomOutput,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureOutput_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Material output expression for writing to a runtime virtual texture. */" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionRuntimeVirtualTextureOutput.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionRuntimeVirtualTextureOutput.h" },
		{ "ToolTip", "Material output expression for writing to a runtime virtual texture." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureOutput_Statics::NewProp_BaseColor_MetaData[] = {
		{ "Comment", "/** Input for Base Color to output to virtual texture. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionRuntimeVirtualTextureOutput.h" },
		{ "ToolTip", "Input for Base Color to output to virtual texture." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureOutput_Statics::NewProp_BaseColor = { "BaseColor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionRuntimeVirtualTextureOutput, BaseColor), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureOutput_Statics::NewProp_BaseColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureOutput_Statics::NewProp_BaseColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureOutput_Statics::NewProp_Specular_MetaData[] = {
		{ "Comment", "/** Input for Specular to output to virtual texture. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionRuntimeVirtualTextureOutput.h" },
		{ "ToolTip", "Input for Specular to output to virtual texture." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureOutput_Statics::NewProp_Specular = { "Specular", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionRuntimeVirtualTextureOutput, Specular), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureOutput_Statics::NewProp_Specular_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureOutput_Statics::NewProp_Specular_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureOutput_Statics::NewProp_Roughness_MetaData[] = {
		{ "Comment", "/** Input for Roughness to output to virtual texture. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionRuntimeVirtualTextureOutput.h" },
		{ "ToolTip", "Input for Roughness to output to virtual texture." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureOutput_Statics::NewProp_Roughness = { "Roughness", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionRuntimeVirtualTextureOutput, Roughness), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureOutput_Statics::NewProp_Roughness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureOutput_Statics::NewProp_Roughness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureOutput_Statics::NewProp_Normal_MetaData[] = {
		{ "Comment", "/** Input for Surface Normal to output to virtual texture. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionRuntimeVirtualTextureOutput.h" },
		{ "ToolTip", "Input for Surface Normal to output to virtual texture." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureOutput_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionRuntimeVirtualTextureOutput, Normal), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureOutput_Statics::NewProp_Normal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureOutput_Statics::NewProp_Normal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureOutput_Statics::NewProp_WorldHeight_MetaData[] = {
		{ "Comment", "/** Input for World Height to output to virtual texture. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionRuntimeVirtualTextureOutput.h" },
		{ "ToolTip", "Input for World Height to output to virtual texture." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureOutput_Statics::NewProp_WorldHeight = { "WorldHeight", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionRuntimeVirtualTextureOutput, WorldHeight), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureOutput_Statics::NewProp_WorldHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureOutput_Statics::NewProp_WorldHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureOutput_Statics::NewProp_Opacity_MetaData[] = {
		{ "Comment", "/** Input for Opacity value used for blending to virtual texture. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionRuntimeVirtualTextureOutput.h" },
		{ "ToolTip", "Input for Opacity value used for blending to virtual texture." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureOutput_Statics::NewProp_Opacity = { "Opacity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionRuntimeVirtualTextureOutput, Opacity), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureOutput_Statics::NewProp_Opacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureOutput_Statics::NewProp_Opacity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureOutput_Statics::NewProp_Mask_MetaData[] = {
		{ "Comment", "/** Input for Mask to output to virtual texture. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionRuntimeVirtualTextureOutput.h" },
		{ "ToolTip", "Input for Mask to output to virtual texture." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureOutput_Statics::NewProp_Mask = { "Mask", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionRuntimeVirtualTextureOutput, Mask), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureOutput_Statics::NewProp_Mask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureOutput_Statics::NewProp_Mask_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureOutput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureOutput_Statics::NewProp_BaseColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureOutput_Statics::NewProp_Specular,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureOutput_Statics::NewProp_Roughness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureOutput_Statics::NewProp_Normal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureOutput_Statics::NewProp_WorldHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureOutput_Statics::NewProp_Opacity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureOutput_Statics::NewProp_Mask,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureOutput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionRuntimeVirtualTextureOutput>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureOutput_Statics::ClassParams = {
		&UMaterialExpressionRuntimeVirtualTextureOutput::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureOutput_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureOutput_Statics::PropPointers),
		0,
		0x000020B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureOutput_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureOutput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureOutput()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionRuntimeVirtualTextureOutput.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionRuntimeVirtualTextureOutput.OuterSingleton, Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureOutput_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionRuntimeVirtualTextureOutput.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionRuntimeVirtualTextureOutput>()
	{
		return UMaterialExpressionRuntimeVirtualTextureOutput::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionRuntimeVirtualTextureOutput);
	UMaterialExpressionRuntimeVirtualTextureOutput::~UMaterialExpressionRuntimeVirtualTextureOutput() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionRuntimeVirtualTextureOutput_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionRuntimeVirtualTextureOutput_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureOutput, UMaterialExpressionRuntimeVirtualTextureOutput::StaticClass, TEXT("UMaterialExpressionRuntimeVirtualTextureOutput"), &Z_Registration_Info_UClass_UMaterialExpressionRuntimeVirtualTextureOutput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionRuntimeVirtualTextureOutput), 2089466821U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionRuntimeVirtualTextureOutput_h_1635547893(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionRuntimeVirtualTextureOutput_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionRuntimeVirtualTextureOutput_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
