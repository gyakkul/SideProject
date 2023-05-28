// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionFresnel.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionFresnel() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionFresnel();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionFresnel_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionFresnel::StaticRegisterNativesUMaterialExpressionFresnel()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionFresnel);
	UClass* Z_Construct_UClass_UMaterialExpressionFresnel_NoRegister()
	{
		return UMaterialExpressionFresnel::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionFresnel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExponentIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExponentIn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Exponent_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Exponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseReflectFractionIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BaseReflectFractionIn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseReflectFraction_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseReflectFraction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionFresnel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionFresnel_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionFresnel.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFresnel.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionFresnel_Statics::NewProp_ExponentIn_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFresnel.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'Exponent' if not specified" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionFresnel_Statics::NewProp_ExponentIn = { "ExponentIn", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionFresnel, ExponentIn), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionFresnel_Statics::NewProp_ExponentIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionFresnel_Statics::NewProp_ExponentIn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionFresnel_Statics::NewProp_Exponent_MetaData[] = {
		{ "Category", "MaterialExpressionFresnel" },
		{ "Comment", "/** The exponent to pass into the pow() function */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFresnel.h" },
		{ "OverridingInputProperty", "ExponentIn" },
		{ "ToolTip", "The exponent to pass into the pow() function" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionFresnel_Statics::NewProp_Exponent = { "Exponent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionFresnel, Exponent), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionFresnel_Statics::NewProp_Exponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionFresnel_Statics::NewProp_Exponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionFresnel_Statics::NewProp_BaseReflectFractionIn_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFresnel.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'BaseReflectFraction' if not specified" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionFresnel_Statics::NewProp_BaseReflectFractionIn = { "BaseReflectFractionIn", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionFresnel, BaseReflectFractionIn), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionFresnel_Statics::NewProp_BaseReflectFractionIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionFresnel_Statics::NewProp_BaseReflectFractionIn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionFresnel_Statics::NewProp_BaseReflectFraction_MetaData[] = {
		{ "Category", "MaterialExpressionFresnel" },
		{ "Comment", "/** \n\x09 * Specifies the fraction of specular reflection when the surfaces is viewed from straight on.\n\x09 * A value of 1 effectively disables Fresnel.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFresnel.h" },
		{ "OverridingInputProperty", "BaseReflectFractionIn" },
		{ "ToolTip", "Specifies the fraction of specular reflection when the surfaces is viewed from straight on.\nA value of 1 effectively disables Fresnel." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionFresnel_Statics::NewProp_BaseReflectFraction = { "BaseReflectFraction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionFresnel, BaseReflectFraction), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionFresnel_Statics::NewProp_BaseReflectFraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionFresnel_Statics::NewProp_BaseReflectFraction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionFresnel_Statics::NewProp_Normal_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFresnel.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to Pixel World Normal if not specified" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionFresnel_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionFresnel, Normal), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionFresnel_Statics::NewProp_Normal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionFresnel_Statics::NewProp_Normal_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionFresnel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionFresnel_Statics::NewProp_ExponentIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionFresnel_Statics::NewProp_Exponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionFresnel_Statics::NewProp_BaseReflectFractionIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionFresnel_Statics::NewProp_BaseReflectFraction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionFresnel_Statics::NewProp_Normal,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionFresnel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionFresnel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionFresnel_Statics::ClassParams = {
		&UMaterialExpressionFresnel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionFresnel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionFresnel_Statics::PropPointers),
		0,
		0x000820B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionFresnel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionFresnel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionFresnel()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionFresnel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionFresnel.OuterSingleton, Z_Construct_UClass_UMaterialExpressionFresnel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionFresnel.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionFresnel>()
	{
		return UMaterialExpressionFresnel::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionFresnel);
	UMaterialExpressionFresnel::~UMaterialExpressionFresnel() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionFresnel_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionFresnel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionFresnel, UMaterialExpressionFresnel::StaticClass, TEXT("UMaterialExpressionFresnel"), &Z_Registration_Info_UClass_UMaterialExpressionFresnel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionFresnel), 175136789U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionFresnel_h_1790855474(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionFresnel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionFresnel_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
