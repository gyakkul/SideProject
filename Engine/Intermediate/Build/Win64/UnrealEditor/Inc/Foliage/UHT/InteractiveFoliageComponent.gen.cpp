// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/InteractiveFoliageComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractiveFoliageComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
	FOLIAGE_API UClass* Z_Construct_UClass_UInteractiveFoliageComponent();
	FOLIAGE_API UClass* Z_Construct_UClass_UInteractiveFoliageComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Foliage();
// End Cross Module References
	void UInteractiveFoliageComponent::StaticRegisterNativesUInteractiveFoliageComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractiveFoliageComponent);
	UClass* Z_Construct_UClass_UInteractiveFoliageComponent_NoRegister()
	{
		return UInteractiveFoliageComponent::StaticClass();
	}
	struct Z_Construct_UClass_UInteractiveFoliageComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractiveFoliageComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Foliage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractiveFoliageComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object Activation Components|Activation Trigger" },
		{ "IncludePath", "InteractiveFoliageComponent.h" },
		{ "ModuleRelativePath", "Private/InteractiveFoliageComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractiveFoliageComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractiveFoliageComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractiveFoliageComponent_Statics::ClassParams = {
		&UInteractiveFoliageComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UInteractiveFoliageComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveFoliageComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteractiveFoliageComponent()
	{
		if (!Z_Registration_Info_UClass_UInteractiveFoliageComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractiveFoliageComponent.OuterSingleton, Z_Construct_UClass_UInteractiveFoliageComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInteractiveFoliageComponent.OuterSingleton;
	}
	template<> FOLIAGE_API UClass* StaticClass<UInteractiveFoliageComponent>()
	{
		return UInteractiveFoliageComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractiveFoliageComponent);
	UInteractiveFoliageComponent::~UInteractiveFoliageComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Private_InteractiveFoliageComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Private_InteractiveFoliageComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInteractiveFoliageComponent, UInteractiveFoliageComponent::StaticClass, TEXT("UInteractiveFoliageComponent"), &Z_Registration_Info_UClass_UInteractiveFoliageComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractiveFoliageComponent), 3748623553U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Private_InteractiveFoliageComponent_h_1744799589(TEXT("/Script/Foliage"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Private_InteractiveFoliageComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Private_InteractiveFoliageComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
