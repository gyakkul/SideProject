// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionIf.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionIf() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionIf();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionIf_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionIf::StaticRegisterNativesUMaterialExpressionIf()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionIf);
	UClass* Z_Construct_UClass_UMaterialExpressionIf_NoRegister()
	{
		return UMaterialExpressionIf::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionIf_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AGreaterThanB_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AGreaterThanB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AEqualsB_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AEqualsB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ALessThanB_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ALessThanB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EqualsThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EqualsThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstB_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ConstB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstAEqualsB_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ConstAEqualsB;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionIf_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionIf_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionIf.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionIf.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionIf_Statics::NewProp_A_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionIf.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionIf_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionIf, A), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionIf_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionIf_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionIf_Statics::NewProp_B_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionIf.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'ConstB' if not specified" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionIf_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionIf, B), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionIf_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionIf_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionIf_Statics::NewProp_AGreaterThanB_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionIf.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionIf_Statics::NewProp_AGreaterThanB = { "AGreaterThanB", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionIf, AGreaterThanB), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionIf_Statics::NewProp_AGreaterThanB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionIf_Statics::NewProp_AGreaterThanB_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionIf_Statics::NewProp_AEqualsB_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionIf.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'A > B' if not specified" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionIf_Statics::NewProp_AEqualsB = { "AEqualsB", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionIf, AEqualsB), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionIf_Statics::NewProp_AEqualsB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionIf_Statics::NewProp_AEqualsB_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionIf_Statics::NewProp_ALessThanB_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionIf.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionIf_Statics::NewProp_ALessThanB = { "ALessThanB", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionIf, ALessThanB), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionIf_Statics::NewProp_ALessThanB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionIf_Statics::NewProp_ALessThanB_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionIf_Statics::NewProp_EqualsThreshold_MetaData[] = {
		{ "Category", "MaterialExpressionIf" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionIf.h" },
		{ "ShowAsInputPin", "Advanced" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionIf_Statics::NewProp_EqualsThreshold = { "EqualsThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionIf, EqualsThreshold), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionIf_Statics::NewProp_EqualsThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionIf_Statics::NewProp_EqualsThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionIf_Statics::NewProp_ConstB_MetaData[] = {
		{ "Category", "MaterialExpressionIf" },
		{ "Comment", "/** only used if B is not hooked up */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionIf.h" },
		{ "OverridingInputProperty", "B" },
		{ "ToolTip", "only used if B is not hooked up" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionIf_Statics::NewProp_ConstB = { "ConstB", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionIf, ConstB), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionIf_Statics::NewProp_ConstB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionIf_Statics::NewProp_ConstB_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionIf_Statics::NewProp_ConstAEqualsB_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionIf.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionIf_Statics::NewProp_ConstAEqualsB = { "ConstAEqualsB", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionIf, ConstAEqualsB_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionIf_Statics::NewProp_ConstAEqualsB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionIf_Statics::NewProp_ConstAEqualsB_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionIf_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionIf_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionIf_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionIf_Statics::NewProp_AGreaterThanB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionIf_Statics::NewProp_AEqualsB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionIf_Statics::NewProp_ALessThanB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionIf_Statics::NewProp_EqualsThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionIf_Statics::NewProp_ConstB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionIf_Statics::NewProp_ConstAEqualsB,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionIf_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionIf>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionIf_Statics::ClassParams = {
		&UMaterialExpressionIf::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionIf_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionIf_Statics::PropPointers),
		0,
		0x000820B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionIf_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionIf_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionIf()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionIf.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionIf.OuterSingleton, Z_Construct_UClass_UMaterialExpressionIf_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionIf.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionIf>()
	{
		return UMaterialExpressionIf::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionIf);
	UMaterialExpressionIf::~UMaterialExpressionIf() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionIf_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionIf_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionIf, UMaterialExpressionIf::StaticClass, TEXT("UMaterialExpressionIf"), &Z_Registration_Info_UClass_UMaterialExpressionIf, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionIf), 1356541190U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionIf_h_2025548679(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionIf_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionIf_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
