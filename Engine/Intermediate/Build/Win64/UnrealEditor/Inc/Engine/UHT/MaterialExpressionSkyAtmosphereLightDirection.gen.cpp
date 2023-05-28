// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionSkyAtmosphereLightDirection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionSkyAtmosphereLightDirection() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDirection();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDirection_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionSkyAtmosphereLightDirection::StaticRegisterNativesUMaterialExpressionSkyAtmosphereLightDirection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionSkyAtmosphereLightDirection);
	UClass* Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDirection_NoRegister()
	{
		return UMaterialExpressionSkyAtmosphereLightDirection::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDirection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LightIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDirection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDirection_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionSkyAtmosphereLightDirection.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSkyAtmosphereLightDirection.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDirection_Statics::NewProp_LightIndex_MetaData[] = {
		{ "Category", "MaterialExpressionTextureCoordinate" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Index of the atmosphere light to sample. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSkyAtmosphereLightDirection.h" },
		{ "ShowAsInputPin", "Primary" },
		{ "ToolTip", "Index of the atmosphere light to sample." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDirection_Statics::NewProp_LightIndex = { "LightIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionSkyAtmosphereLightDirection, LightIndex), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDirection_Statics::NewProp_LightIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDirection_Statics::NewProp_LightIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDirection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDirection_Statics::NewProp_LightIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDirection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionSkyAtmosphereLightDirection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDirection_Statics::ClassParams = {
		&UMaterialExpressionSkyAtmosphereLightDirection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDirection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDirection_Statics::PropPointers),
		0,
		0x000000B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDirection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDirection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDirection()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionSkyAtmosphereLightDirection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionSkyAtmosphereLightDirection.OuterSingleton, Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDirection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionSkyAtmosphereLightDirection.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionSkyAtmosphereLightDirection>()
	{
		return UMaterialExpressionSkyAtmosphereLightDirection::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionSkyAtmosphereLightDirection);
	UMaterialExpressionSkyAtmosphereLightDirection::~UMaterialExpressionSkyAtmosphereLightDirection() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSkyAtmosphereLightDirection_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSkyAtmosphereLightDirection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDirection, UMaterialExpressionSkyAtmosphereLightDirection::StaticClass, TEXT("UMaterialExpressionSkyAtmosphereLightDirection"), &Z_Registration_Info_UClass_UMaterialExpressionSkyAtmosphereLightDirection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionSkyAtmosphereLightDirection), 368491833U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSkyAtmosphereLightDirection_h_3669160156(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSkyAtmosphereLightDirection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSkyAtmosphereLightDirection_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
