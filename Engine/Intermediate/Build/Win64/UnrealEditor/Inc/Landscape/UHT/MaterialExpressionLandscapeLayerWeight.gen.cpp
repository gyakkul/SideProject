// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Materials/MaterialExpressionLandscapeLayerWeight.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionLandscapeLayerWeight() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	LANDSCAPE_API UClass* Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight();
	LANDSCAPE_API UClass* Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Landscape();
// End Cross Module References
	void UMaterialExpressionLandscapeLayerWeight::StaticRegisterNativesUMaterialExpressionLandscapeLayerWeight()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionLandscapeLayerWeight);
	UClass* Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight_NoRegister()
	{
		return UMaterialExpressionLandscapeLayerWeight::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Base_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Base;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Layer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Layer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PreviewWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstBase_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConstBase;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionLandscapeLayerWeight.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerWeight.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight_Statics::NewProp_Base_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerWeight.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'ConstBase' if not specified" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight_Statics::NewProp_Base = { "Base", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionLandscapeLayerWeight, Base), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight_Statics::NewProp_Base_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight_Statics::NewProp_Base_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight_Statics::NewProp_Layer_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerWeight.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Ignored if not specified" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight_Statics::NewProp_Layer = { "Layer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionLandscapeLayerWeight, Layer), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight_Statics::NewProp_Layer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight_Statics::NewProp_Layer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight_Statics::NewProp_ParameterName_MetaData[] = {
		{ "Category", "MaterialExpressionLandscapeLayerWeight" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerWeight.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionLandscapeLayerWeight, ParameterName), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight_Statics::NewProp_ParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight_Statics::NewProp_ParameterName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight_Statics::NewProp_PreviewWeight_MetaData[] = {
		{ "Category", "MaterialExpressionLandscapeLayerWeight" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerWeight.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight_Statics::NewProp_PreviewWeight = { "PreviewWeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionLandscapeLayerWeight, PreviewWeight), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight_Statics::NewProp_PreviewWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight_Statics::NewProp_PreviewWeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight_Statics::NewProp_ConstBase_MetaData[] = {
		{ "Category", "MaterialExpressionLandscapeLayerWeight" },
		{ "Comment", "/** only used if Base is not hooked up */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerWeight.h" },
		{ "OverridingInputProperty", "Base" },
		{ "ToolTip", "only used if Base is not hooked up" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight_Statics::NewProp_ConstBase = { "ConstBase", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionLandscapeLayerWeight, ConstBase), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight_Statics::NewProp_ConstBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight_Statics::NewProp_ConstBase_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight_Statics::NewProp_Base,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight_Statics::NewProp_Layer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight_Statics::NewProp_PreviewWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight_Statics::NewProp_ConstBase,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionLandscapeLayerWeight>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight_Statics::ClassParams = {
		&UMaterialExpressionLandscapeLayerWeight::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight_Statics::PropPointers),
		0,
		0x001020B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionLandscapeLayerWeight.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionLandscapeLayerWeight.OuterSingleton, Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionLandscapeLayerWeight.OuterSingleton;
	}
	template<> LANDSCAPE_API UClass* StaticClass<UMaterialExpressionLandscapeLayerWeight>()
	{
		return UMaterialExpressionLandscapeLayerWeight::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionLandscapeLayerWeight);
	UMaterialExpressionLandscapeLayerWeight::~UMaterialExpressionLandscapeLayerWeight() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerWeight_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerWeight_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionLandscapeLayerWeight, UMaterialExpressionLandscapeLayerWeight::StaticClass, TEXT("UMaterialExpressionLandscapeLayerWeight"), &Z_Registration_Info_UClass_UMaterialExpressionLandscapeLayerWeight, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionLandscapeLayerWeight), 2846444567U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerWeight_h_3309954414(TEXT("/Script/Landscape"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerWeight_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerWeight_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
