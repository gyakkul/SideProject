// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionFontSample.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionFontSample() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UFont_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionFontSample();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionFontSample_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionFontSample::StaticRegisterNativesUMaterialExpressionFontSample()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionFontSample);
	UClass* Z_Construct_UClass_UMaterialExpressionFontSample_NoRegister()
	{
		return UMaterialExpressionFontSample::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionFontSample_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Font_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Font;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FontTexturePage_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FontTexturePage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionFontSample_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionFontSample_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionFontSample.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFontSample.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionFontSample_Statics::NewProp_Font_MetaData[] = {
		{ "Category", "MaterialExpressionFontSample" },
		{ "Comment", "/** font resource that will be sampled */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFontSample.h" },
		{ "ToolTip", "font resource that will be sampled" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMaterialExpressionFontSample_Statics::NewProp_Font = { "Font", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionFontSample, Font), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionFontSample_Statics::NewProp_Font_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionFontSample_Statics::NewProp_Font_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionFontSample_Statics::NewProp_FontTexturePage_MetaData[] = {
		{ "Category", "MaterialExpressionFontSample" },
		{ "Comment", "/** allow access to the various font pages */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFontSample.h" },
		{ "ToolTip", "allow access to the various font pages" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMaterialExpressionFontSample_Statics::NewProp_FontTexturePage = { "FontTexturePage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionFontSample, FontTexturePage), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionFontSample_Statics::NewProp_FontTexturePage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionFontSample_Statics::NewProp_FontTexturePage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionFontSample_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionFontSample_Statics::NewProp_Font,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionFontSample_Statics::NewProp_FontTexturePage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionFontSample_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionFontSample>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionFontSample_Statics::ClassParams = {
		&UMaterialExpressionFontSample::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionFontSample_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionFontSample_Statics::PropPointers),
		0,
		0x000820B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionFontSample_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionFontSample_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionFontSample()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionFontSample.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionFontSample.OuterSingleton, Z_Construct_UClass_UMaterialExpressionFontSample_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionFontSample.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionFontSample>()
	{
		return UMaterialExpressionFontSample::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionFontSample);
	UMaterialExpressionFontSample::~UMaterialExpressionFontSample() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionFontSample_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionFontSample_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionFontSample, UMaterialExpressionFontSample::StaticClass, TEXT("UMaterialExpressionFontSample"), &Z_Registration_Info_UClass_UMaterialExpressionFontSample, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionFontSample), 2890868601U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionFontSample_h_2265063059(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionFontSample_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionFontSample_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
