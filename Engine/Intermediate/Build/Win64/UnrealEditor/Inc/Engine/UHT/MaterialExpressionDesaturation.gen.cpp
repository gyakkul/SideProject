// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionDesaturation.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionDesaturation() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionDesaturation();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionDesaturation_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionDesaturation::StaticRegisterNativesUMaterialExpressionDesaturation()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionDesaturation);
	UClass* Z_Construct_UClass_UMaterialExpressionDesaturation_NoRegister()
	{
		return UMaterialExpressionDesaturation::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionDesaturation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Fraction_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Fraction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LuminanceFactors_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LuminanceFactors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionDesaturation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionDesaturation_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionDesaturation.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDesaturation.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionDesaturation_Statics::NewProp_Input_MetaData[] = {
		{ "Comment", "// Outputs: Lerp(Input,dot(Input,LuminanceFactors)),Fraction)\n" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDesaturation.h" },
		{ "ToolTip", "Outputs: Lerp(Input,dot(Input,LuminanceFactors)),Fraction)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionDesaturation_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionDesaturation, Input), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionDesaturation_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDesaturation_Statics::NewProp_Input_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionDesaturation_Statics::NewProp_Fraction_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDesaturation.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionDesaturation_Statics::NewProp_Fraction = { "Fraction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionDesaturation, Fraction), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionDesaturation_Statics::NewProp_Fraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDesaturation_Statics::NewProp_Fraction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionDesaturation_Statics::NewProp_LuminanceFactors_MetaData[] = {
		{ "Category", "MaterialExpressionDesaturation" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDesaturation.h" },
		{ "ShowAsInputPin", "Advanced" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionDesaturation_Statics::NewProp_LuminanceFactors = { "LuminanceFactors", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionDesaturation, LuminanceFactors), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionDesaturation_Statics::NewProp_LuminanceFactors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDesaturation_Statics::NewProp_LuminanceFactors_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionDesaturation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionDesaturation_Statics::NewProp_Input,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionDesaturation_Statics::NewProp_Fraction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionDesaturation_Statics::NewProp_LuminanceFactors,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionDesaturation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionDesaturation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionDesaturation_Statics::ClassParams = {
		&UMaterialExpressionDesaturation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionDesaturation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDesaturation_Statics::PropPointers),
		0,
		0x000820B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionDesaturation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDesaturation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionDesaturation()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionDesaturation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionDesaturation.OuterSingleton, Z_Construct_UClass_UMaterialExpressionDesaturation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionDesaturation.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionDesaturation>()
	{
		return UMaterialExpressionDesaturation::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionDesaturation);
	UMaterialExpressionDesaturation::~UMaterialExpressionDesaturation() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDesaturation_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDesaturation_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionDesaturation, UMaterialExpressionDesaturation::StaticClass, TEXT("UMaterialExpressionDesaturation"), &Z_Registration_Info_UClass_UMaterialExpressionDesaturation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionDesaturation), 1115860423U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDesaturation_h_2184721151(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDesaturation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDesaturation_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
