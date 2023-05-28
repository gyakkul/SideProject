// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosClothAsset/ClothComponentToolTarget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClothComponentToolTarget() {}
// Cross Module References
	CHAOSCLOTHASSETEDITORTOOLS_API UClass* Z_Construct_UClass_UClothAssetBackedTarget_NoRegister();
	CHAOSCLOTHASSETEDITORTOOLS_API UClass* Z_Construct_UClass_UClothComponentToolTarget();
	CHAOSCLOTHASSETEDITORTOOLS_API UClass* Z_Construct_UClass_UClothComponentToolTarget_NoRegister();
	CHAOSCLOTHASSETEDITORTOOLS_API UClass* Z_Construct_UClass_UClothComponentToolTargetFactory();
	CHAOSCLOTHASSETEDITORTOOLS_API UClass* Z_Construct_UClass_UClothComponentToolTargetFactory_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UPrimitiveComponentToolTarget();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UToolTargetFactory();
	UPackage* Z_Construct_UPackage__Script_ChaosClothAssetEditorTools();
// End Cross Module References
	void UClothComponentToolTarget::StaticRegisterNativesUClothComponentToolTarget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UClothComponentToolTarget);
	UClass* Z_Construct_UClass_UClothComponentToolTarget_NoRegister()
	{
		return UClothComponentToolTarget::StaticClass();
	}
	struct Z_Construct_UClass_UClothComponentToolTarget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClothComponentToolTarget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponentToolTarget,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosClothAssetEditorTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothComponentToolTarget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A tool target backed by a cloth component\n */" },
		{ "IncludePath", "ChaosClothAsset/ClothComponentToolTarget.h" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ClothComponentToolTarget.h" },
		{ "ToolTip", "A tool target backed by a cloth component" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UClothComponentToolTarget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UClothAssetBackedTarget_NoRegister, (int32)VTABLE_OFFSET(UClothComponentToolTarget, IClothAssetBackedTarget), false },  // 1087728419
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClothComponentToolTarget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClothComponentToolTarget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UClothComponentToolTarget_Statics::ClassParams = {
		&UClothComponentToolTarget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UClothComponentToolTarget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UClothComponentToolTarget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UClothComponentToolTarget()
	{
		if (!Z_Registration_Info_UClass_UClothComponentToolTarget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UClothComponentToolTarget.OuterSingleton, Z_Construct_UClass_UClothComponentToolTarget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UClothComponentToolTarget.OuterSingleton;
	}
	template<> CHAOSCLOTHASSETEDITORTOOLS_API UClass* StaticClass<UClothComponentToolTarget>()
	{
		return UClothComponentToolTarget::StaticClass();
	}
	UClothComponentToolTarget::UClothComponentToolTarget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClothComponentToolTarget);
	UClothComponentToolTarget::~UClothComponentToolTarget() {}
	void UClothComponentToolTargetFactory::StaticRegisterNativesUClothComponentToolTargetFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UClothComponentToolTargetFactory);
	UClass* Z_Construct_UClass_UClothComponentToolTargetFactory_NoRegister()
	{
		return UClothComponentToolTargetFactory::StaticClass();
	}
	struct Z_Construct_UClass_UClothComponentToolTargetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClothComponentToolTargetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UToolTargetFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosClothAssetEditorTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothComponentToolTargetFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Factory for UClothComponentToolTarget to be used by the target manager. */" },
		{ "IncludePath", "ChaosClothAsset/ClothComponentToolTarget.h" },
		{ "ModuleRelativePath", "Public/ChaosClothAsset/ClothComponentToolTarget.h" },
		{ "ToolTip", "Factory for UClothComponentToolTarget to be used by the target manager." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClothComponentToolTargetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClothComponentToolTargetFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UClothComponentToolTargetFactory_Statics::ClassParams = {
		&UClothComponentToolTargetFactory::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UClothComponentToolTargetFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UClothComponentToolTargetFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UClothComponentToolTargetFactory()
	{
		if (!Z_Registration_Info_UClass_UClothComponentToolTargetFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UClothComponentToolTargetFactory.OuterSingleton, Z_Construct_UClass_UClothComponentToolTargetFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UClothComponentToolTargetFactory.OuterSingleton;
	}
	template<> CHAOSCLOTHASSETEDITORTOOLS_API UClass* StaticClass<UClothComponentToolTargetFactory>()
	{
		return UClothComponentToolTargetFactory::StaticClass();
	}
	UClothComponentToolTargetFactory::UClothComponentToolTargetFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClothComponentToolTargetFactory);
	UClothComponentToolTargetFactory::~UClothComponentToolTargetFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Public_ChaosClothAsset_ClothComponentToolTarget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Public_ChaosClothAsset_ClothComponentToolTarget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UClothComponentToolTarget, UClothComponentToolTarget::StaticClass, TEXT("UClothComponentToolTarget"), &Z_Registration_Info_UClass_UClothComponentToolTarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UClothComponentToolTarget), 169083381U) },
		{ Z_Construct_UClass_UClothComponentToolTargetFactory, UClothComponentToolTargetFactory::StaticClass, TEXT("UClothComponentToolTargetFactory"), &Z_Registration_Info_UClass_UClothComponentToolTargetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UClothComponentToolTargetFactory), 1742862611U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Public_ChaosClothAsset_ClothComponentToolTarget_h_1029746006(TEXT("/Script/ChaosClothAssetEditorTools"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Public_ChaosClothAsset_ClothComponentToolTarget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetEditorTools_Public_ChaosClothAsset_ClothComponentToolTarget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
