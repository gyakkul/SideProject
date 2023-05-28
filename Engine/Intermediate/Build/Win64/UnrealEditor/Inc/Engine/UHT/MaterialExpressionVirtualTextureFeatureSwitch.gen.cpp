// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionVirtualTextureFeatureSwitch.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionVirtualTextureFeatureSwitch() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionVirtualTextureFeatureSwitch();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionVirtualTextureFeatureSwitch_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionVirtualTextureFeatureSwitch::StaticRegisterNativesUMaterialExpressionVirtualTextureFeatureSwitch()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionVirtualTextureFeatureSwitch);
	UClass* Z_Construct_UClass_UMaterialExpressionVirtualTextureFeatureSwitch_NoRegister()
	{
		return UMaterialExpressionVirtualTextureFeatureSwitch::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionVirtualTextureFeatureSwitch_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_No_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_No;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Yes_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Yes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionVirtualTextureFeatureSwitch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionVirtualTextureFeatureSwitch_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Material output expression to switch logic according to whether virtual texturing is supported on this project, platform and feature level. */" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionVirtualTextureFeatureSwitch.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionVirtualTextureFeatureSwitch.h" },
		{ "ToolTip", "Material output expression to switch logic according to whether virtual texturing is supported on this project, platform and feature level." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionVirtualTextureFeatureSwitch_Statics::NewProp_No_MetaData[] = {
		{ "Comment", "/** Used if virtual texture is not supported. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionVirtualTextureFeatureSwitch.h" },
		{ "ToolTip", "Used if virtual texture is not supported." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionVirtualTextureFeatureSwitch_Statics::NewProp_No = { "No", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionVirtualTextureFeatureSwitch, No), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionVirtualTextureFeatureSwitch_Statics::NewProp_No_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionVirtualTextureFeatureSwitch_Statics::NewProp_No_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionVirtualTextureFeatureSwitch_Statics::NewProp_Yes_MetaData[] = {
		{ "Comment", "/** Used if virtual texture is supported. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionVirtualTextureFeatureSwitch.h" },
		{ "ToolTip", "Used if virtual texture is supported." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionVirtualTextureFeatureSwitch_Statics::NewProp_Yes = { "Yes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionVirtualTextureFeatureSwitch, Yes), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionVirtualTextureFeatureSwitch_Statics::NewProp_Yes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionVirtualTextureFeatureSwitch_Statics::NewProp_Yes_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionVirtualTextureFeatureSwitch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionVirtualTextureFeatureSwitch_Statics::NewProp_No,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionVirtualTextureFeatureSwitch_Statics::NewProp_Yes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionVirtualTextureFeatureSwitch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionVirtualTextureFeatureSwitch>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionVirtualTextureFeatureSwitch_Statics::ClassParams = {
		&UMaterialExpressionVirtualTextureFeatureSwitch::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionVirtualTextureFeatureSwitch_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionVirtualTextureFeatureSwitch_Statics::PropPointers),
		0,
		0x000020B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionVirtualTextureFeatureSwitch_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionVirtualTextureFeatureSwitch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionVirtualTextureFeatureSwitch()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionVirtualTextureFeatureSwitch.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionVirtualTextureFeatureSwitch.OuterSingleton, Z_Construct_UClass_UMaterialExpressionVirtualTextureFeatureSwitch_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionVirtualTextureFeatureSwitch.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionVirtualTextureFeatureSwitch>()
	{
		return UMaterialExpressionVirtualTextureFeatureSwitch::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionVirtualTextureFeatureSwitch);
	UMaterialExpressionVirtualTextureFeatureSwitch::~UMaterialExpressionVirtualTextureFeatureSwitch() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionVirtualTextureFeatureSwitch_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionVirtualTextureFeatureSwitch_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionVirtualTextureFeatureSwitch, UMaterialExpressionVirtualTextureFeatureSwitch::StaticClass, TEXT("UMaterialExpressionVirtualTextureFeatureSwitch"), &Z_Registration_Info_UClass_UMaterialExpressionVirtualTextureFeatureSwitch, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionVirtualTextureFeatureSwitch), 3168528966U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionVirtualTextureFeatureSwitch_h_2231509470(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionVirtualTextureFeatureSwitch_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionVirtualTextureFeatureSwitch_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
