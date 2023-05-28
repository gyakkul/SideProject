// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TargetInterfaces/MaterialProvider.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialProvider() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UMaterialProvider();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UMaterialProvider_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References
	void UMaterialProvider::StaticRegisterNativesUMaterialProvider()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialProvider);
	UClass* Z_Construct_UClass_UMaterialProvider_NoRegister()
	{
		return UMaterialProvider::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialProvider_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialProvider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialProvider_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TargetInterfaces/MaterialProvider.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialProvider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMaterialProvider>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialProvider_Statics::ClassParams = {
		&UMaterialProvider::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMaterialProvider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialProvider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialProvider()
	{
		if (!Z_Registration_Info_UClass_UMaterialProvider.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialProvider.OuterSingleton, Z_Construct_UClass_UMaterialProvider_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialProvider.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UMaterialProvider>()
	{
		return UMaterialProvider::StaticClass();
	}
	UMaterialProvider::UMaterialProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialProvider);
	UMaterialProvider::~UMaterialProvider() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_MaterialProvider_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_MaterialProvider_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialProvider, UMaterialProvider::StaticClass, TEXT("UMaterialProvider"), &Z_Registration_Info_UClass_UMaterialProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialProvider), 2807395048U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_MaterialProvider_h_3243180382(TEXT("/Script/InteractiveToolsFramework"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_MaterialProvider_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_MaterialProvider_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
