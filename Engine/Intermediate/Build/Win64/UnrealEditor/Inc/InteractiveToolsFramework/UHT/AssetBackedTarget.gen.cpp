// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TargetInterfaces/AssetBackedTarget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetBackedTarget() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UAssetBackedTarget();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UAssetBackedTarget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References
	void UAssetBackedTarget::StaticRegisterNativesUAssetBackedTarget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetBackedTarget);
	UClass* Z_Construct_UClass_UAssetBackedTarget_NoRegister()
	{
		return UAssetBackedTarget::StaticClass();
	}
	struct Z_Construct_UClass_UAssetBackedTarget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetBackedTarget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetBackedTarget_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TargetInterfaces/AssetBackedTarget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetBackedTarget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAssetBackedTarget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetBackedTarget_Statics::ClassParams = {
		&UAssetBackedTarget::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAssetBackedTarget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetBackedTarget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetBackedTarget()
	{
		if (!Z_Registration_Info_UClass_UAssetBackedTarget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetBackedTarget.OuterSingleton, Z_Construct_UClass_UAssetBackedTarget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetBackedTarget.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UAssetBackedTarget>()
	{
		return UAssetBackedTarget::StaticClass();
	}
	UAssetBackedTarget::UAssetBackedTarget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetBackedTarget);
	UAssetBackedTarget::~UAssetBackedTarget() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_AssetBackedTarget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_AssetBackedTarget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetBackedTarget, UAssetBackedTarget::StaticClass, TEXT("UAssetBackedTarget"), &Z_Registration_Info_UClass_UAssetBackedTarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetBackedTarget), 2390401059U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_AssetBackedTarget_h_829338080(TEXT("/Script/InteractiveToolsFramework"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_AssetBackedTarget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_AssetBackedTarget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
