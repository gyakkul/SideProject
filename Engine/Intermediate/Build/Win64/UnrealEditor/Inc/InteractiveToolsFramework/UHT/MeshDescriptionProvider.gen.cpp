// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TargetInterfaces/MeshDescriptionProvider.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshDescriptionProvider() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UMeshDescriptionProvider();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UMeshDescriptionProvider_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References
	void UMeshDescriptionProvider::StaticRegisterNativesUMeshDescriptionProvider()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshDescriptionProvider);
	UClass* Z_Construct_UClass_UMeshDescriptionProvider_NoRegister()
	{
		return UMeshDescriptionProvider::StaticClass();
	}
	struct Z_Construct_UClass_UMeshDescriptionProvider_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeshDescriptionProvider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshDescriptionProvider_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TargetInterfaces/MeshDescriptionProvider.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeshDescriptionProvider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMeshDescriptionProvider>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshDescriptionProvider_Statics::ClassParams = {
		&UMeshDescriptionProvider::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMeshDescriptionProvider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshDescriptionProvider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeshDescriptionProvider()
	{
		if (!Z_Registration_Info_UClass_UMeshDescriptionProvider.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshDescriptionProvider.OuterSingleton, Z_Construct_UClass_UMeshDescriptionProvider_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMeshDescriptionProvider.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UMeshDescriptionProvider>()
	{
		return UMeshDescriptionProvider::StaticClass();
	}
	UMeshDescriptionProvider::UMeshDescriptionProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshDescriptionProvider);
	UMeshDescriptionProvider::~UMeshDescriptionProvider() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_MeshDescriptionProvider_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_MeshDescriptionProvider_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMeshDescriptionProvider, UMeshDescriptionProvider::StaticClass, TEXT("UMeshDescriptionProvider"), &Z_Registration_Info_UClass_UMeshDescriptionProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshDescriptionProvider), 578635468U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_MeshDescriptionProvider_h_1826094796(TEXT("/Script/InteractiveToolsFramework"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_MeshDescriptionProvider_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_MeshDescriptionProvider_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
