// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionPower.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionPower() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionPower();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionPower_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionPower::StaticRegisterNativesUMaterialExpressionPower()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionPower);
	UClass* Z_Construct_UClass_UMaterialExpressionPower_NoRegister()
	{
		return UMaterialExpressionPower::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionPower_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Exponent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Exponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstExponent_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ConstExponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionPower_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionPower_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionPower.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPower.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionPower_Statics::NewProp_Base_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPower.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionPower_Statics::NewProp_Base = { "Base", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionPower, Base), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionPower_Statics::NewProp_Base_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPower_Statics::NewProp_Base_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionPower_Statics::NewProp_Exponent_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPower.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'ConstExponent' if not specified" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionPower_Statics::NewProp_Exponent = { "Exponent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionPower, Exponent), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionPower_Statics::NewProp_Exponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPower_Statics::NewProp_Exponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionPower_Statics::NewProp_ConstExponent_MetaData[] = {
		{ "Category", "MaterialExpressionPower" },
		{ "Comment", "/** only used if Exponent is not hooked up */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPower.h" },
		{ "OverridingInputProperty", "Exponent" },
		{ "ToolTip", "only used if Exponent is not hooked up" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionPower_Statics::NewProp_ConstExponent = { "ConstExponent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionPower, ConstExponent), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionPower_Statics::NewProp_ConstExponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPower_Statics::NewProp_ConstExponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionPower_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionPower_Statics::NewProp_Base,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionPower_Statics::NewProp_Exponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionPower_Statics::NewProp_ConstExponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionPower_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionPower>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionPower_Statics::ClassParams = {
		&UMaterialExpressionPower::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionPower_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPower_Statics::PropPointers),
		0,
		0x000820B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionPower_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPower_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionPower()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionPower.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionPower.OuterSingleton, Z_Construct_UClass_UMaterialExpressionPower_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionPower.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionPower>()
	{
		return UMaterialExpressionPower::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionPower);
	UMaterialExpressionPower::~UMaterialExpressionPower() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPower_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPower_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionPower, UMaterialExpressionPower::StaticClass, TEXT("UMaterialExpressionPower"), &Z_Registration_Info_UClass_UMaterialExpressionPower, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionPower), 3209592320U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPower_h_2811059819(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPower_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPower_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
