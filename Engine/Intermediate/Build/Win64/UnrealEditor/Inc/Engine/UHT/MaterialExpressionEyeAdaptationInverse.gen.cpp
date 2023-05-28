// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionEyeAdaptationInverse.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionEyeAdaptationInverse() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionEyeAdaptationInverse();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionEyeAdaptationInverse_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionEyeAdaptationInverse::StaticRegisterNativesUMaterialExpressionEyeAdaptationInverse()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionEyeAdaptationInverse);
	UClass* Z_Construct_UClass_UMaterialExpressionEyeAdaptationInverse_NoRegister()
	{
		return UMaterialExpressionEyeAdaptationInverse::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionEyeAdaptationInverse_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightValueInput_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LightValueInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlphaInput_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AlphaInput;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionEyeAdaptationInverse_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionEyeAdaptationInverse_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Provides access to the EyeAdaptation render target.\n */" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionEyeAdaptationInverse.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionEyeAdaptationInverse.h" },
		{ "ToolTip", "Provides access to the EyeAdaptation render target." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionEyeAdaptationInverse_Statics::NewProp_LightValueInput_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionEyeAdaptationInverse.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Value to apply EyeAdaptation inverse" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionEyeAdaptationInverse_Statics::NewProp_LightValueInput = { "LightValueInput", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionEyeAdaptationInverse, LightValueInput), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionEyeAdaptationInverse_Statics::NewProp_LightValueInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionEyeAdaptationInverse_Statics::NewProp_LightValueInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionEyeAdaptationInverse_Statics::NewProp_AlphaInput_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionEyeAdaptationInverse.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Weight of the conversion. 1.0 means full conversion, 0.0 means no change." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionEyeAdaptationInverse_Statics::NewProp_AlphaInput = { "AlphaInput", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionEyeAdaptationInverse, AlphaInput), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionEyeAdaptationInverse_Statics::NewProp_AlphaInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionEyeAdaptationInverse_Statics::NewProp_AlphaInput_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionEyeAdaptationInverse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionEyeAdaptationInverse_Statics::NewProp_LightValueInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionEyeAdaptationInverse_Statics::NewProp_AlphaInput,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionEyeAdaptationInverse_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionEyeAdaptationInverse>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionEyeAdaptationInverse_Statics::ClassParams = {
		&UMaterialExpressionEyeAdaptationInverse::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionEyeAdaptationInverse_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionEyeAdaptationInverse_Statics::PropPointers),
		0,
		0x000020B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionEyeAdaptationInverse_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionEyeAdaptationInverse_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionEyeAdaptationInverse()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionEyeAdaptationInverse.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionEyeAdaptationInverse.OuterSingleton, Z_Construct_UClass_UMaterialExpressionEyeAdaptationInverse_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionEyeAdaptationInverse.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionEyeAdaptationInverse>()
	{
		return UMaterialExpressionEyeAdaptationInverse::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionEyeAdaptationInverse);
	UMaterialExpressionEyeAdaptationInverse::~UMaterialExpressionEyeAdaptationInverse() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionEyeAdaptationInverse_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionEyeAdaptationInverse_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionEyeAdaptationInverse, UMaterialExpressionEyeAdaptationInverse::StaticClass, TEXT("UMaterialExpressionEyeAdaptationInverse"), &Z_Registration_Info_UClass_UMaterialExpressionEyeAdaptationInverse, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionEyeAdaptationInverse), 3110643974U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionEyeAdaptationInverse_h_3994456338(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionEyeAdaptationInverse_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionEyeAdaptationInverse_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
