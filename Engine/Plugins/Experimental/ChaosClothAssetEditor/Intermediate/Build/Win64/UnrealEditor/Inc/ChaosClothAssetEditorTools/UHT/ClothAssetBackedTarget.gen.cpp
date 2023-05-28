// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosClothAsset/ClothAssetBackedTarget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClothAssetBackedTarget() {}
// Cross Module References
	CHAOSCLOTHASSETEDITORTOOLS_API UClass* Z_Construct_UClass_UClothAssetBackedTarget();
	CHAOSCLOTHASSETEDITORTOOLS_API UClass* Z_Construct_UClass_UClothAssetBackedTarget_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UAssetBackedTarget();
	UPackage* Z_Construct_UPackage__Script_ChaosClothAssetEditorTools();
// End Cross Module References
	void UClothAssetBackedTarget::StaticRegisterNativesUClothAssetBackedTarget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UClothAssetBackedTarget);
	UClass* Z_Construct_UClass_UClothAssetBackedTarget_NoRegister()
	{
		return UClothAssetBackedTarget::StaticClass();
	}
	struct Z_Construct_UClass_UClothAssetBackedTarget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClothAssetBackedTarget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetBackedTarget,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosClothAssetEditorTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothAssetBackedTarget_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ClothAssetBackedTarget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClothAssetBackedTarget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IClothAssetBackedTarget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UClothAssetBackedTarget_Statics::ClassParams = {
		&UClothAssetBackedTarget::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UClothAssetBackedTarget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UClothAssetBackedTarget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UClothAssetBackedTarget()
	{
		if (!Z_Registration_Info_UClass_UClothAssetBackedTarget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UClothAssetBackedTarget.OuterSingleton, Z_Construct_UClass_UClothAssetBackedTarget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UClothAssetBackedTarget.OuterSingleton;
	}
	template<> CHAOSCLOTHASSETEDITORTOOLS_API UClass* StaticClass<UClothAssetBackedTarget>()
	{
		return UClothAssetBackedTarget::StaticClass();
	}
	UClothAssetBackedTarget::UClothAssetBackedTarget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClothAssetBackedTarget);
	UClothAssetBackedTarget::~UClothAssetBackedTarget() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Public_ChaosClothAsset_ClothAssetBackedTarget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Public_ChaosClothAsset_ClothAssetBackedTarget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UClothAssetBackedTarget, UClothAssetBackedTarget::StaticClass, TEXT("UClothAssetBackedTarget"), &Z_Registration_Info_UClass_UClothAssetBackedTarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UClothAssetBackedTarget), 1087728419U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Public_ChaosClothAsset_ClothAssetBackedTarget_h_1791203931(TEXT("/Script/ChaosClothAssetEditorTools"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Public_ChaosClothAsset_ClothAssetBackedTarget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Public_ChaosClothAsset_ClothAssetBackedTarget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
