// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/MaterialExpressionSpriteTextureSampler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionSpriteTextureSampler() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureSampleParameter2D();
	PAPER2D_API UClass* Z_Construct_UClass_UMaterialExpressionSpriteTextureSampler();
	PAPER2D_API UClass* Z_Construct_UClass_UMaterialExpressionSpriteTextureSampler_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Paper2D();
// End Cross Module References
	void UMaterialExpressionSpriteTextureSampler::StaticRegisterNativesUMaterialExpressionSpriteTextureSampler()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionSpriteTextureSampler);
	UClass* Z_Construct_UClass_UMaterialExpressionSpriteTextureSampler_NoRegister()
	{
		return UMaterialExpressionSpriteTextureSampler::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionSpriteTextureSampler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSampleAdditionalTextures_MetaData[];
#endif
		static void NewProp_bSampleAdditionalTextures_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSampleAdditionalTextures;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalSlotIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AdditionalSlotIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotDisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_SlotDisplayName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionSpriteTextureSampler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpressionTextureSampleParameter2D,
		(UObject* (*)())Z_Construct_UPackage__Script_Paper2D,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSpriteTextureSampler_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// This is a texture sampler 2D with a special automatically defined parameter name. The texture specified here will be replaced by the SourceTexture or an AdditionalSourceTextures entry of a Paper2D sprite if this material is used on a sprite.\n" },
		{ "HideCategories", "MaterialExpressionTextureSampleParameter MaterialExpressionSpriteTextureSampler Object Object Object Object Object" },
		{ "IncludePath", "MaterialExpressionSpriteTextureSampler.h" },
		{ "ModuleRelativePath", "Public/MaterialExpressionSpriteTextureSampler.h" },
		{ "ToolTip", "This is a texture sampler 2D with a special automatically defined parameter name. The texture specified here will be replaced by the SourceTexture or an AdditionalSourceTextures entry of a Paper2D sprite if this material is used on a sprite." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSpriteTextureSampler_Statics::NewProp_bSampleAdditionalTextures_MetaData[] = {
		{ "Category", "Paper2D" },
		{ "Comment", "// Is this a sampler for the default SourceTexture or the AdditionalSourceTextures list?\n" },
		{ "ModuleRelativePath", "Public/MaterialExpressionSpriteTextureSampler.h" },
		{ "ToolTip", "Is this a sampler for the default SourceTexture or the AdditionalSourceTextures list?" },
	};
#endif
	void Z_Construct_UClass_UMaterialExpressionSpriteTextureSampler_Statics::NewProp_bSampleAdditionalTextures_SetBit(void* Obj)
	{
		((UMaterialExpressionSpriteTextureSampler*)Obj)->bSampleAdditionalTextures = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionSpriteTextureSampler_Statics::NewProp_bSampleAdditionalTextures = { "bSampleAdditionalTextures", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMaterialExpressionSpriteTextureSampler), &Z_Construct_UClass_UMaterialExpressionSpriteTextureSampler_Statics::NewProp_bSampleAdditionalTextures_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSpriteTextureSampler_Statics::NewProp_bSampleAdditionalTextures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSpriteTextureSampler_Statics::NewProp_bSampleAdditionalTextures_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSpriteTextureSampler_Statics::NewProp_AdditionalSlotIndex_MetaData[] = {
		{ "Category", "Paper2D" },
		{ "Comment", "// This is the slot index into the AdditionalSourceTextures array\n" },
		{ "EditCondition", "bSampleAdditionalTextures" },
		{ "ModuleRelativePath", "Public/MaterialExpressionSpriteTextureSampler.h" },
		{ "ToolTip", "This is the slot index into the AdditionalSourceTextures array" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMaterialExpressionSpriteTextureSampler_Statics::NewProp_AdditionalSlotIndex = { "AdditionalSlotIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionSpriteTextureSampler, AdditionalSlotIndex), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSpriteTextureSampler_Statics::NewProp_AdditionalSlotIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSpriteTextureSampler_Statics::NewProp_AdditionalSlotIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSpriteTextureSampler_Statics::NewProp_SlotDisplayName_MetaData[] = {
		{ "Category", "Paper2D" },
		{ "Comment", "// Friendly label for the texture slot, displayed in the Sprite Editor if not empty\n" },
		{ "ModuleRelativePath", "Public/MaterialExpressionSpriteTextureSampler.h" },
		{ "ToolTip", "Friendly label for the texture slot, displayed in the Sprite Editor if not empty" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UMaterialExpressionSpriteTextureSampler_Statics::NewProp_SlotDisplayName = { "SlotDisplayName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionSpriteTextureSampler, SlotDisplayName), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSpriteTextureSampler_Statics::NewProp_SlotDisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSpriteTextureSampler_Statics::NewProp_SlotDisplayName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionSpriteTextureSampler_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSpriteTextureSampler_Statics::NewProp_bSampleAdditionalTextures,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSpriteTextureSampler_Statics::NewProp_AdditionalSlotIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSpriteTextureSampler_Statics::NewProp_SlotDisplayName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionSpriteTextureSampler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionSpriteTextureSampler>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionSpriteTextureSampler_Statics::ClassParams = {
		&UMaterialExpressionSpriteTextureSampler::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionSpriteTextureSampler_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSpriteTextureSampler_Statics::PropPointers),
		0,
		0x001020B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSpriteTextureSampler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSpriteTextureSampler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionSpriteTextureSampler()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionSpriteTextureSampler.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionSpriteTextureSampler.OuterSingleton, Z_Construct_UClass_UMaterialExpressionSpriteTextureSampler_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionSpriteTextureSampler.OuterSingleton;
	}
	template<> PAPER2D_API UClass* StaticClass<UMaterialExpressionSpriteTextureSampler>()
	{
		return UMaterialExpressionSpriteTextureSampler::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionSpriteTextureSampler);
	UMaterialExpressionSpriteTextureSampler::~UMaterialExpressionSpriteTextureSampler() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Public_MaterialExpressionSpriteTextureSampler_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Public_MaterialExpressionSpriteTextureSampler_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionSpriteTextureSampler, UMaterialExpressionSpriteTextureSampler::StaticClass, TEXT("UMaterialExpressionSpriteTextureSampler"), &Z_Registration_Info_UClass_UMaterialExpressionSpriteTextureSampler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionSpriteTextureSampler), 1254934818U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Public_MaterialExpressionSpriteTextureSampler_h_3300576585(TEXT("/Script/Paper2D"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Public_MaterialExpressionSpriteTextureSampler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Public_MaterialExpressionSpriteTextureSampler_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
