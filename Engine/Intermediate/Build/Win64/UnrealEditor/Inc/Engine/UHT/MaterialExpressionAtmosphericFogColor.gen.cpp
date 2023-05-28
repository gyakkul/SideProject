// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionAtmosphericFogColor.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionAtmosphericFogColor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionAtmosphericFogColor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionAtmosphericFogColor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionAtmosphericFogColor::StaticRegisterNativesUMaterialExpressionAtmosphericFogColor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionAtmosphericFogColor);
	UClass* Z_Construct_UClass_UMaterialExpressionAtmosphericFogColor_NoRegister()
	{
		return UMaterialExpressionAtmosphericFogColor::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionAtmosphericFogColor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldPosition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionAtmosphericFogColor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionAtmosphericFogColor_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Atmospheric Fog Color (deprecated)" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionAtmosphericFogColor.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionAtmosphericFogColor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionAtmosphericFogColor_Statics::NewProp_WorldPosition_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionAtmosphericFogColor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionAtmosphericFogColor_Statics::NewProp_WorldPosition = { "WorldPosition", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionAtmosphericFogColor, WorldPosition), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionAtmosphericFogColor_Statics::NewProp_WorldPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionAtmosphericFogColor_Statics::NewProp_WorldPosition_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionAtmosphericFogColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionAtmosphericFogColor_Statics::NewProp_WorldPosition,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionAtmosphericFogColor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionAtmosphericFogColor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionAtmosphericFogColor_Statics::ClassParams = {
		&UMaterialExpressionAtmosphericFogColor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionAtmosphericFogColor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionAtmosphericFogColor_Statics::PropPointers),
		0,
		0x000020B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionAtmosphericFogColor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionAtmosphericFogColor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionAtmosphericFogColor()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionAtmosphericFogColor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionAtmosphericFogColor.OuterSingleton, Z_Construct_UClass_UMaterialExpressionAtmosphericFogColor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionAtmosphericFogColor.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionAtmosphericFogColor>()
	{
		return UMaterialExpressionAtmosphericFogColor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionAtmosphericFogColor);
	UMaterialExpressionAtmosphericFogColor::~UMaterialExpressionAtmosphericFogColor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionAtmosphericFogColor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionAtmosphericFogColor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionAtmosphericFogColor, UMaterialExpressionAtmosphericFogColor::StaticClass, TEXT("UMaterialExpressionAtmosphericFogColor"), &Z_Registration_Info_UClass_UMaterialExpressionAtmosphericFogColor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionAtmosphericFogColor), 2178686797U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionAtmosphericFogColor_h_2020946664(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionAtmosphericFogColor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionAtmosphericFogColor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
