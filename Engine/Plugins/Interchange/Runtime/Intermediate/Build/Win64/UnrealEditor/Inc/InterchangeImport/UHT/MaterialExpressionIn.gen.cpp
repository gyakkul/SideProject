// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/MaterialX/MaterialExpressionIn.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionIn() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UMaterialExpressionIn();
	INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UMaterialExpressionIn_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InterchangeImport();
// End Cross Module References
	void UMaterialExpressionIn::StaticRegisterNativesUMaterialExpressionIn()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionIn);
	UClass* Z_Construct_UClass_UMaterialExpressionIn_NoRegister()
	{
		return UMaterialExpressionIn::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionIn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Alpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ConstAlpha;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionIn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeImport,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionIn_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Merge nodes take two 4-channel (color4) inputs and use the built-in alpha channel(s) to control the\n * compositing of the A and B inputs. \"A\" and \"B\" refer to the non-alpha channels of the A and B inputs respectively,\n * and \"a\" and \"b\" refer to the alpha channels of the A and B inputs.\n * Merge nodes are only defined for float4 inputs\n * Merge nodes support an optional float input Alpha , which can be used to mix the\n * original B value with the result of the blend operation.\n *\n * Operation: Ab\n * Result: Lerp(B, Ab, Alpha)\n */" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "MaterialX/MaterialExpressionIn.h" },
		{ "ModuleRelativePath", "Private/MaterialX/MaterialExpressionIn.h" },
		{ "ToolTip", "Merge nodes take two 4-channel (color4) inputs and use the built-in alpha channel(s) to control the\ncompositing of the A and B inputs. \"A\" and \"B\" refer to the non-alpha channels of the A and B inputs respectively,\nand \"a\" and \"b\" refer to the alpha channels of the A and B inputs.\nMerge nodes are only defined for float4 inputs\nMerge nodes support an optional float input Alpha , which can be used to mix the\noriginal B value with the result of the blend operation.\n\nOperation: Ab\nResult: Lerp(B, Ab, Alpha)" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionIn_Statics::NewProp_A_MetaData[] = {
		{ "ModuleRelativePath", "Private/MaterialX/MaterialExpressionIn.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionIn_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionIn, A), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionIn_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionIn_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionIn_Statics::NewProp_B_MetaData[] = {
		{ "ModuleRelativePath", "Private/MaterialX/MaterialExpressionIn.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionIn_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionIn, B), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionIn_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionIn_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionIn_Statics::NewProp_Alpha_MetaData[] = {
		{ "ModuleRelativePath", "Private/MaterialX/MaterialExpressionIn.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'ConstAlpha' if not specified" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionIn_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionIn, Alpha), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionIn_Statics::NewProp_Alpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionIn_Statics::NewProp_Alpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionIn_Statics::NewProp_ConstAlpha_MetaData[] = {
		{ "Category", "MaterialExpressionLinearInterpolate" },
		{ "Comment", "/** only used if Alpha is not hooked up */" },
		{ "ModuleRelativePath", "Private/MaterialX/MaterialExpressionIn.h" },
		{ "OverridingInputProperty", "Alpha" },
		{ "ToolTip", "only used if Alpha is not hooked up" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionIn_Statics::NewProp_ConstAlpha = { "ConstAlpha", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionIn, ConstAlpha), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionIn_Statics::NewProp_ConstAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionIn_Statics::NewProp_ConstAlpha_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionIn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionIn_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionIn_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionIn_Statics::NewProp_Alpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionIn_Statics::NewProp_ConstAlpha,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionIn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionIn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionIn_Statics::ClassParams = {
		&UMaterialExpressionIn::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionIn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionIn_Statics::PropPointers),
		0,
		0x000820B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionIn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionIn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionIn()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionIn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionIn.OuterSingleton, Z_Construct_UClass_UMaterialExpressionIn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionIn.OuterSingleton;
	}
	template<> INTERCHANGEIMPORT_API UClass* StaticClass<UMaterialExpressionIn>()
	{
		return UMaterialExpressionIn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionIn);
	UMaterialExpressionIn::~UMaterialExpressionIn() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Private_MaterialX_MaterialExpressionIn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Private_MaterialX_MaterialExpressionIn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionIn, UMaterialExpressionIn::StaticClass, TEXT("UMaterialExpressionIn"), &Z_Registration_Info_UClass_UMaterialExpressionIn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionIn), 671398588U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Private_MaterialX_MaterialExpressionIn_h_3274206946(TEXT("/Script/InterchangeImport"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Private_MaterialX_MaterialExpressionIn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Private_MaterialX_MaterialExpressionIn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
