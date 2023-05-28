// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionCurveAtlasRowParameter.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionCurveAtlasRowParameter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCurveLinearColor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveLinearColorAtlas_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionCurveAtlasRowParameter();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionCurveAtlasRowParameter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionScalarParameter();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionCurveAtlasRowParameter::StaticRegisterNativesUMaterialExpressionCurveAtlasRowParameter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionCurveAtlasRowParameter);
	UClass* Z_Construct_UClass_UMaterialExpressionCurveAtlasRowParameter_NoRegister()
	{
		return UMaterialExpressionCurveAtlasRowParameter::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionCurveAtlasRowParameter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Curve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Curve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Atlas_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Atlas;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputTime_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionCurveAtlasRowParameter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpressionScalarParameter,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionCurveAtlasRowParameter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object MaterialExpressionScalarParameter Object Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionCurveAtlasRowParameter.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionCurveAtlasRowParameter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionCurveAtlasRowParameter_Statics::NewProp_Curve_MetaData[] = {
		{ "Category", "MaterialExpressionCurveAtlasRowParameter" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionCurveAtlasRowParameter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMaterialExpressionCurveAtlasRowParameter_Statics::NewProp_Curve = { "Curve", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionCurveAtlasRowParameter, Curve), Z_Construct_UClass_UCurveLinearColor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionCurveAtlasRowParameter_Statics::NewProp_Curve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionCurveAtlasRowParameter_Statics::NewProp_Curve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionCurveAtlasRowParameter_Statics::NewProp_Atlas_MetaData[] = {
		{ "Category", "MaterialExpressionCurveAtlasRowParameter" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionCurveAtlasRowParameter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMaterialExpressionCurveAtlasRowParameter_Statics::NewProp_Atlas = { "Atlas", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionCurveAtlasRowParameter, Atlas), Z_Construct_UClass_UCurveLinearColorAtlas_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionCurveAtlasRowParameter_Statics::NewProp_Atlas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionCurveAtlasRowParameter_Statics::NewProp_Atlas_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionCurveAtlasRowParameter_Statics::NewProp_InputTime_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionCurveAtlasRowParameter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionCurveAtlasRowParameter_Statics::NewProp_InputTime = { "InputTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionCurveAtlasRowParameter, InputTime), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionCurveAtlasRowParameter_Statics::NewProp_InputTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionCurveAtlasRowParameter_Statics::NewProp_InputTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionCurveAtlasRowParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionCurveAtlasRowParameter_Statics::NewProp_Curve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionCurveAtlasRowParameter_Statics::NewProp_Atlas,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionCurveAtlasRowParameter_Statics::NewProp_InputTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionCurveAtlasRowParameter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionCurveAtlasRowParameter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionCurveAtlasRowParameter_Statics::ClassParams = {
		&UMaterialExpressionCurveAtlasRowParameter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionCurveAtlasRowParameter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionCurveAtlasRowParameter_Statics::PropPointers),
		0,
		0x000820B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionCurveAtlasRowParameter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionCurveAtlasRowParameter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionCurveAtlasRowParameter()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionCurveAtlasRowParameter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionCurveAtlasRowParameter.OuterSingleton, Z_Construct_UClass_UMaterialExpressionCurveAtlasRowParameter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionCurveAtlasRowParameter.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionCurveAtlasRowParameter>()
	{
		return UMaterialExpressionCurveAtlasRowParameter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionCurveAtlasRowParameter);
	UMaterialExpressionCurveAtlasRowParameter::~UMaterialExpressionCurveAtlasRowParameter() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionCurveAtlasRowParameter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionCurveAtlasRowParameter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionCurveAtlasRowParameter, UMaterialExpressionCurveAtlasRowParameter::StaticClass, TEXT("UMaterialExpressionCurveAtlasRowParameter"), &Z_Registration_Info_UClass_UMaterialExpressionCurveAtlasRowParameter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionCurveAtlasRowParameter), 1770432969U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionCurveAtlasRowParameter_h_1079466264(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionCurveAtlasRowParameter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionCurveAtlasRowParameter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
