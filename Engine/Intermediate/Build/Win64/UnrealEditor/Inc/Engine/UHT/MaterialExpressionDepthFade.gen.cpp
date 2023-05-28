// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionDepthFade.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionDepthFade() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionDepthFade();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionDepthFade_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionDepthFade::StaticRegisterNativesUMaterialExpressionDepthFade()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionDepthFade);
	UClass* Z_Construct_UClass_UMaterialExpressionDepthFade_NoRegister()
	{
		return UMaterialExpressionDepthFade::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionDepthFade_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InOpacity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InOpacity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FadeDistance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FadeDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OpacityDefault_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OpacityDefault;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FadeDistanceDefault_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeDistanceDefault;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionDepthFade_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionDepthFade_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionDepthFade.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDepthFade.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionDepthFade_Statics::NewProp_InOpacity_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDepthFade.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'OpacityDefault' if not specified" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionDepthFade_Statics::NewProp_InOpacity = { "InOpacity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionDepthFade, InOpacity), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionDepthFade_Statics::NewProp_InOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDepthFade_Statics::NewProp_InOpacity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionDepthFade_Statics::NewProp_FadeDistance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDepthFade.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'FadeDistanceDefault' if not specified" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionDepthFade_Statics::NewProp_FadeDistance = { "FadeDistance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionDepthFade, FadeDistance), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionDepthFade_Statics::NewProp_FadeDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDepthFade_Statics::NewProp_FadeDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionDepthFade_Statics::NewProp_OpacityDefault_MetaData[] = {
		{ "Category", "MaterialExpressionDepthFade" },
		{ "Comment", "/** Opacity which will be scaled by the result of the fade.  This is used when InOpacity is unconnected. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDepthFade.h" },
		{ "OverridingInputProperty", "InOpacity" },
		{ "ToolTip", "Opacity which will be scaled by the result of the fade.  This is used when InOpacity is unconnected." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionDepthFade_Statics::NewProp_OpacityDefault = { "OpacityDefault", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionDepthFade, OpacityDefault), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionDepthFade_Statics::NewProp_OpacityDefault_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDepthFade_Statics::NewProp_OpacityDefault_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionDepthFade_Statics::NewProp_FadeDistanceDefault_MetaData[] = {
		{ "Category", "MaterialExpressionDepthFade" },
		{ "Comment", "/** World space distance over which the fade should take place.  This is used when FadeDistance is unconnected. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDepthFade.h" },
		{ "OverridingInputProperty", "FadeDistance" },
		{ "ToolTip", "World space distance over which the fade should take place.  This is used when FadeDistance is unconnected." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionDepthFade_Statics::NewProp_FadeDistanceDefault = { "FadeDistanceDefault", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionDepthFade, FadeDistanceDefault), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionDepthFade_Statics::NewProp_FadeDistanceDefault_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDepthFade_Statics::NewProp_FadeDistanceDefault_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionDepthFade_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionDepthFade_Statics::NewProp_InOpacity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionDepthFade_Statics::NewProp_FadeDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionDepthFade_Statics::NewProp_OpacityDefault,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionDepthFade_Statics::NewProp_FadeDistanceDefault,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionDepthFade_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionDepthFade>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionDepthFade_Statics::ClassParams = {
		&UMaterialExpressionDepthFade::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionDepthFade_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDepthFade_Statics::PropPointers),
		0,
		0x000020B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionDepthFade_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDepthFade_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionDepthFade()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionDepthFade.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionDepthFade.OuterSingleton, Z_Construct_UClass_UMaterialExpressionDepthFade_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionDepthFade.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionDepthFade>()
	{
		return UMaterialExpressionDepthFade::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionDepthFade);
	UMaterialExpressionDepthFade::~UMaterialExpressionDepthFade() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDepthFade_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDepthFade_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionDepthFade, UMaterialExpressionDepthFade::StaticClass, TEXT("UMaterialExpressionDepthFade"), &Z_Registration_Info_UClass_UMaterialExpressionDepthFade, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionDepthFade), 341650760U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDepthFade_h_3253551636(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDepthFade_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDepthFade_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
