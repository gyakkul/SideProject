// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/MaterialX/MaterialExpressionSplitTopBottom.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionSplitTopBottom() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UMaterialExpressionSplitTopBottom();
	INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UMaterialExpressionSplitTopBottom_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InterchangeImport();
// End Cross Module References
	void UMaterialExpressionSplitTopBottom::StaticRegisterNativesUMaterialExpressionSplitTopBottom()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionSplitTopBottom);
	UClass* Z_Construct_UClass_UMaterialExpressionSplitTopBottom_NoRegister()
	{
		return UMaterialExpressionSplitTopBottom::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionSplitTopBottom_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Coordinates_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Coordinates;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstCenter_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ConstCenter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstCoordinate_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ConstCoordinate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionSplitTopBottom_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeImport,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSplitTopBottom_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A material expression that computes a top-bottom split matte, split at a specified v value.\n */" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "MaterialX/MaterialExpressionSplitTopBottom.h" },
		{ "ModuleRelativePath", "Private/MaterialX/MaterialExpressionSplitTopBottom.h" },
		{ "ToolTip", "A material expression that computes a top-bottom split matte, split at a specified v value." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSplitTopBottom_Statics::NewProp_Coordinates_MetaData[] = {
		{ "ModuleRelativePath", "Private/MaterialX/MaterialExpressionSplitTopBottom.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'ConstCoordinate' if not specified" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionSplitTopBottom_Statics::NewProp_Coordinates = { "Coordinates", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionSplitTopBottom, Coordinates), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSplitTopBottom_Statics::NewProp_Coordinates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSplitTopBottom_Statics::NewProp_Coordinates_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSplitTopBottom_Statics::NewProp_A_MetaData[] = {
		{ "ModuleRelativePath", "Private/MaterialX/MaterialExpressionSplitTopBottom.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionSplitTopBottom_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionSplitTopBottom, A), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSplitTopBottom_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSplitTopBottom_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSplitTopBottom_Statics::NewProp_B_MetaData[] = {
		{ "ModuleRelativePath", "Private/MaterialX/MaterialExpressionSplitTopBottom.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionSplitTopBottom_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionSplitTopBottom, B), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSplitTopBottom_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSplitTopBottom_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSplitTopBottom_Statics::NewProp_Center_MetaData[] = {
		{ "ModuleRelativePath", "Private/MaterialX/MaterialExpressionSplitTopBottom.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'ConstCenter' if not specified" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionSplitTopBottom_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionSplitTopBottom, Center), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSplitTopBottom_Statics::NewProp_Center_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSplitTopBottom_Statics::NewProp_Center_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSplitTopBottom_Statics::NewProp_ConstCenter_MetaData[] = {
		{ "Category", "MaterialExpressionMultiply" },
		{ "Comment", "/** only used if A is not hooked up */" },
		{ "ModuleRelativePath", "Private/MaterialX/MaterialExpressionSplitTopBottom.h" },
		{ "OverridingInputProperty", "Center" },
		{ "ToolTip", "only used if A is not hooked up" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionSplitTopBottom_Statics::NewProp_ConstCenter = { "ConstCenter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionSplitTopBottom, ConstCenter), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSplitTopBottom_Statics::NewProp_ConstCenter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSplitTopBottom_Statics::NewProp_ConstCenter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSplitTopBottom_Statics::NewProp_ConstCoordinate_MetaData[] = {
		{ "Category", "MaterialExpressionTextureSample" },
		{ "Comment", "/** only used if Coordinates is not hooked up */" },
		{ "ModuleRelativePath", "Private/MaterialX/MaterialExpressionSplitTopBottom.h" },
		{ "OverridingInputProperty", "Coordinates" },
		{ "ToolTip", "only used if Coordinates is not hooked up" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionSplitTopBottom_Statics::NewProp_ConstCoordinate = { "ConstCoordinate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionSplitTopBottom, ConstCoordinate), nullptr, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSplitTopBottom_Statics::NewProp_ConstCoordinate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSplitTopBottom_Statics::NewProp_ConstCoordinate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionSplitTopBottom_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSplitTopBottom_Statics::NewProp_Coordinates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSplitTopBottom_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSplitTopBottom_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSplitTopBottom_Statics::NewProp_Center,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSplitTopBottom_Statics::NewProp_ConstCenter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSplitTopBottom_Statics::NewProp_ConstCoordinate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionSplitTopBottom_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionSplitTopBottom>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionSplitTopBottom_Statics::ClassParams = {
		&UMaterialExpressionSplitTopBottom::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionSplitTopBottom_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSplitTopBottom_Statics::PropPointers),
		0,
		0x000820B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSplitTopBottom_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSplitTopBottom_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionSplitTopBottom()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionSplitTopBottom.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionSplitTopBottom.OuterSingleton, Z_Construct_UClass_UMaterialExpressionSplitTopBottom_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionSplitTopBottom.OuterSingleton;
	}
	template<> INTERCHANGEIMPORT_API UClass* StaticClass<UMaterialExpressionSplitTopBottom>()
	{
		return UMaterialExpressionSplitTopBottom::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionSplitTopBottom);
	UMaterialExpressionSplitTopBottom::~UMaterialExpressionSplitTopBottom() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Private_MaterialX_MaterialExpressionSplitTopBottom_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Private_MaterialX_MaterialExpressionSplitTopBottom_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionSplitTopBottom, UMaterialExpressionSplitTopBottom::StaticClass, TEXT("UMaterialExpressionSplitTopBottom"), &Z_Registration_Info_UClass_UMaterialExpressionSplitTopBottom, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionSplitTopBottom), 2564782494U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Private_MaterialX_MaterialExpressionSplitTopBottom_h_4091044261(TEXT("/Script/InterchangeImport"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Private_MaterialX_MaterialExpressionSplitTopBottom_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Private_MaterialX_MaterialExpressionSplitTopBottom_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
