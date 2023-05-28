// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/MaterialX/MaterialExpressionRampLeftRight.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionRampLeftRight() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UMaterialExpressionRampLeftRight();
	INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UMaterialExpressionRampLeftRight_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InterchangeImport();
// End Cross Module References
	void UMaterialExpressionRampLeftRight::StaticRegisterNativesUMaterialExpressionRampLeftRight()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionRampLeftRight);
	UClass* Z_Construct_UClass_UMaterialExpressionRampLeftRight_NoRegister()
	{
		return UMaterialExpressionRampLeftRight::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionRampLeftRight_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstCoordinate_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ConstCoordinate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionRampLeftRight_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeImport,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionRampLeftRight_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A material expression that computes a left-to-right bilinear value ramp.\n */" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "MaterialX/MaterialExpressionRampLeftRight.h" },
		{ "ModuleRelativePath", "Private/MaterialX/MaterialExpressionRampLeftRight.h" },
		{ "ToolTip", "A material expression that computes a left-to-right bilinear value ramp." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionRampLeftRight_Statics::NewProp_Coordinates_MetaData[] = {
		{ "ModuleRelativePath", "Private/MaterialX/MaterialExpressionRampLeftRight.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'ConstCoordinate' if not specified" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionRampLeftRight_Statics::NewProp_Coordinates = { "Coordinates", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionRampLeftRight, Coordinates), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionRampLeftRight_Statics::NewProp_Coordinates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionRampLeftRight_Statics::NewProp_Coordinates_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionRampLeftRight_Statics::NewProp_A_MetaData[] = {
		{ "ModuleRelativePath", "Private/MaterialX/MaterialExpressionRampLeftRight.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionRampLeftRight_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionRampLeftRight, A), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionRampLeftRight_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionRampLeftRight_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionRampLeftRight_Statics::NewProp_B_MetaData[] = {
		{ "ModuleRelativePath", "Private/MaterialX/MaterialExpressionRampLeftRight.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionRampLeftRight_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionRampLeftRight, B), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionRampLeftRight_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionRampLeftRight_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionRampLeftRight_Statics::NewProp_ConstCoordinate_MetaData[] = {
		{ "Category", "MaterialExpressionTextureSample" },
		{ "Comment", "/** only used if Coordinates is not hooked up */" },
		{ "ModuleRelativePath", "Private/MaterialX/MaterialExpressionRampLeftRight.h" },
		{ "OverridingInputProperty", "Coordinates" },
		{ "ToolTip", "only used if Coordinates is not hooked up" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionRampLeftRight_Statics::NewProp_ConstCoordinate = { "ConstCoordinate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionRampLeftRight, ConstCoordinate), nullptr, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionRampLeftRight_Statics::NewProp_ConstCoordinate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionRampLeftRight_Statics::NewProp_ConstCoordinate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionRampLeftRight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionRampLeftRight_Statics::NewProp_Coordinates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionRampLeftRight_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionRampLeftRight_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionRampLeftRight_Statics::NewProp_ConstCoordinate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionRampLeftRight_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionRampLeftRight>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionRampLeftRight_Statics::ClassParams = {
		&UMaterialExpressionRampLeftRight::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionRampLeftRight_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionRampLeftRight_Statics::PropPointers),
		0,
		0x000820B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionRampLeftRight_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionRampLeftRight_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionRampLeftRight()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionRampLeftRight.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionRampLeftRight.OuterSingleton, Z_Construct_UClass_UMaterialExpressionRampLeftRight_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionRampLeftRight.OuterSingleton;
	}
	template<> INTERCHANGEIMPORT_API UClass* StaticClass<UMaterialExpressionRampLeftRight>()
	{
		return UMaterialExpressionRampLeftRight::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionRampLeftRight);
	UMaterialExpressionRampLeftRight::~UMaterialExpressionRampLeftRight() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Private_MaterialX_MaterialExpressionRampLeftRight_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Private_MaterialX_MaterialExpressionRampLeftRight_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionRampLeftRight, UMaterialExpressionRampLeftRight::StaticClass, TEXT("UMaterialExpressionRampLeftRight"), &Z_Registration_Info_UClass_UMaterialExpressionRampLeftRight, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionRampLeftRight), 1726721485U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Private_MaterialX_MaterialExpressionRampLeftRight_h_42131991(TEXT("/Script/InterchangeImport"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Private_MaterialX_MaterialExpressionRampLeftRight_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Private_MaterialX_MaterialExpressionRampLeftRight_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
