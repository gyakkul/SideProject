// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionDecalMipmapLevel.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionDecalMipmapLevel() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionDecalMipmapLevel();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionDecalMipmapLevel_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionDecalMipmapLevel::StaticRegisterNativesUMaterialExpressionDecalMipmapLevel()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionDecalMipmapLevel);
	UClass* Z_Construct_UClass_UMaterialExpressionDecalMipmapLevel_NoRegister()
	{
		return UMaterialExpressionDecalMipmapLevel::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionDecalMipmapLevel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TextureSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ConstWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ConstHeight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionDecalMipmapLevel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionDecalMipmapLevel_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionDecalMipmapLevel.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDecalMipmapLevel.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionDecalMipmapLevel_Statics::NewProp_TextureSize_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDecalMipmapLevel.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to '(Const Width, Const Height)' if not specified" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionDecalMipmapLevel_Statics::NewProp_TextureSize = { "TextureSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionDecalMipmapLevel, TextureSize), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionDecalMipmapLevel_Statics::NewProp_TextureSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDecalMipmapLevel_Statics::NewProp_TextureSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionDecalMipmapLevel_Statics::NewProp_ConstWidth_MetaData[] = {
		{ "Category", "MaterialExpressionDecalMipmapLevel" },
		{ "Comment", "/** only used if TextureSize is not hooked up */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDecalMipmapLevel.h" },
		{ "OverridingInputProperty", "TextureSize" },
		{ "ToolTip", "only used if TextureSize is not hooked up" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionDecalMipmapLevel_Statics::NewProp_ConstWidth = { "ConstWidth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionDecalMipmapLevel, ConstWidth), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionDecalMipmapLevel_Statics::NewProp_ConstWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDecalMipmapLevel_Statics::NewProp_ConstWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionDecalMipmapLevel_Statics::NewProp_ConstHeight_MetaData[] = {
		{ "Category", "MaterialExpressionDecalMipmapLevel" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDecalMipmapLevel.h" },
		{ "OverridingInputProperty", "TextureSize" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionDecalMipmapLevel_Statics::NewProp_ConstHeight = { "ConstHeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionDecalMipmapLevel, ConstHeight), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionDecalMipmapLevel_Statics::NewProp_ConstHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDecalMipmapLevel_Statics::NewProp_ConstHeight_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionDecalMipmapLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionDecalMipmapLevel_Statics::NewProp_TextureSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionDecalMipmapLevel_Statics::NewProp_ConstWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionDecalMipmapLevel_Statics::NewProp_ConstHeight,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionDecalMipmapLevel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionDecalMipmapLevel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionDecalMipmapLevel_Statics::ClassParams = {
		&UMaterialExpressionDecalMipmapLevel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionDecalMipmapLevel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDecalMipmapLevel_Statics::PropPointers),
		0,
		0x000020B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionDecalMipmapLevel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDecalMipmapLevel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionDecalMipmapLevel()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionDecalMipmapLevel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionDecalMipmapLevel.OuterSingleton, Z_Construct_UClass_UMaterialExpressionDecalMipmapLevel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionDecalMipmapLevel.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionDecalMipmapLevel>()
	{
		return UMaterialExpressionDecalMipmapLevel::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionDecalMipmapLevel);
	UMaterialExpressionDecalMipmapLevel::~UMaterialExpressionDecalMipmapLevel() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDecalMipmapLevel_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDecalMipmapLevel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionDecalMipmapLevel, UMaterialExpressionDecalMipmapLevel::StaticClass, TEXT("UMaterialExpressionDecalMipmapLevel"), &Z_Registration_Info_UClass_UMaterialExpressionDecalMipmapLevel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionDecalMipmapLevel), 2022509658U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDecalMipmapLevel_h_1481487176(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDecalMipmapLevel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDecalMipmapLevel_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
