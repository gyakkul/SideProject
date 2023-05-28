// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosClothAsset/ClothAssetBuilder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClothAssetBuilder() {}
// Cross Module References
	CHAOSCLOTHASSETENGINE_API UClass* Z_Construct_UClass_UClothAssetBuilder();
	CHAOSCLOTHASSETENGINE_API UClass* Z_Construct_UClass_UClothAssetBuilder_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ChaosClothAssetEngine();
// End Cross Module References
	void UClothAssetBuilder::StaticRegisterNativesUClothAssetBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UClothAssetBuilder);
	UClass* Z_Construct_UClass_UClothAssetBuilder_NoRegister()
	{
		return UClothAssetBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UClothAssetBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClothAssetBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosClothAssetEngine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothAssetBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Modular builder base class. */" },
		{ "IncludePath", "ChaosClothAsset/ClothAssetBuilder.h" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ClothAssetBuilder.h" },
		{ "ToolTip", "Modular builder base class." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClothAssetBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClothAssetBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UClothAssetBuilder_Statics::ClassParams = {
		&UClothAssetBuilder::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UClothAssetBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UClothAssetBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UClothAssetBuilder()
	{
		if (!Z_Registration_Info_UClass_UClothAssetBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UClothAssetBuilder.OuterSingleton, Z_Construct_UClass_UClothAssetBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UClothAssetBuilder.OuterSingleton;
	}
	template<> CHAOSCLOTHASSETENGINE_API UClass* StaticClass<UClothAssetBuilder>()
	{
		return UClothAssetBuilder::StaticClass();
	}
	UClothAssetBuilder::UClothAssetBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClothAssetBuilder);
	UClothAssetBuilder::~UClothAssetBuilder() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_ClothAssetBuilder_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_ClothAssetBuilder_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UClothAssetBuilder, UClothAssetBuilder::StaticClass, TEXT("UClothAssetBuilder"), &Z_Registration_Info_UClass_UClothAssetBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UClothAssetBuilder), 3308808878U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_ClothAssetBuilder_h_2376308553(TEXT("/Script/ChaosClothAssetEngine"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_ClothAssetBuilder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAsset_Source_ChaosClothAssetEngine_Public_ChaosClothAsset_ClothAssetBuilder_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
