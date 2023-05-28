// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/AssetDefinition_TextureRenderTarget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetDefinition_TextureRenderTarget() {}
// Cross Module References
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_Texture();
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_TextureRenderTarget();
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_TextureRenderTarget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EngineAssetDefinitions();
// End Cross Module References
	void UAssetDefinition_TextureRenderTarget::StaticRegisterNativesUAssetDefinition_TextureRenderTarget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetDefinition_TextureRenderTarget);
	UClass* Z_Construct_UClass_UAssetDefinition_TextureRenderTarget_NoRegister()
	{
		return UAssetDefinition_TextureRenderTarget::StaticClass();
	}
	struct Z_Construct_UClass_UAssetDefinition_TextureRenderTarget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetDefinition_TextureRenderTarget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetDefinition_Texture,
		(UObject* (*)())Z_Construct_UPackage__Script_EngineAssetDefinitions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetDefinition_TextureRenderTarget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AssetDefinition_TextureRenderTarget.h" },
		{ "ModuleRelativePath", "Private/AssetDefinition_TextureRenderTarget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetDefinition_TextureRenderTarget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDefinition_TextureRenderTarget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetDefinition_TextureRenderTarget_Statics::ClassParams = {
		&UAssetDefinition_TextureRenderTarget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAssetDefinition_TextureRenderTarget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_TextureRenderTarget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetDefinition_TextureRenderTarget()
	{
		if (!Z_Registration_Info_UClass_UAssetDefinition_TextureRenderTarget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetDefinition_TextureRenderTarget.OuterSingleton, Z_Construct_UClass_UAssetDefinition_TextureRenderTarget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetDefinition_TextureRenderTarget.OuterSingleton;
	}
	template<> ENGINEASSETDEFINITIONS_API UClass* StaticClass<UAssetDefinition_TextureRenderTarget>()
	{
		return UAssetDefinition_TextureRenderTarget::StaticClass();
	}
	UAssetDefinition_TextureRenderTarget::UAssetDefinition_TextureRenderTarget() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDefinition_TextureRenderTarget);
	UAssetDefinition_TextureRenderTarget::~UAssetDefinition_TextureRenderTarget() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_TextureRenderTarget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_TextureRenderTarget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetDefinition_TextureRenderTarget, UAssetDefinition_TextureRenderTarget::StaticClass, TEXT("UAssetDefinition_TextureRenderTarget"), &Z_Registration_Info_UClass_UAssetDefinition_TextureRenderTarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetDefinition_TextureRenderTarget), 4173765359U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_TextureRenderTarget_h_242846575(TEXT("/Script/EngineAssetDefinitions"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_TextureRenderTarget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_TextureRenderTarget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
