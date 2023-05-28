// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Interfaces/Interface_BoneReferenceSkeletonProvider.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterface_BoneReferenceSkeletonProvider() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	ENGINE_API UClass* Z_Construct_UClass_UBoneReferenceSkeletonProvider();
	ENGINE_API UClass* Z_Construct_UClass_UBoneReferenceSkeletonProvider_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UBoneReferenceSkeletonProvider::StaticRegisterNativesUBoneReferenceSkeletonProvider()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBoneReferenceSkeletonProvider);
	UClass* Z_Construct_UClass_UBoneReferenceSkeletonProvider_NoRegister()
	{
		return UBoneReferenceSkeletonProvider::StaticClass();
	}
	struct Z_Construct_UClass_UBoneReferenceSkeletonProvider_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBoneReferenceSkeletonProvider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoneReferenceSkeletonProvider_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Interfaces/Interface_BoneReferenceSkeletonProvider.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBoneReferenceSkeletonProvider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IBoneReferenceSkeletonProvider>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBoneReferenceSkeletonProvider_Statics::ClassParams = {
		&UBoneReferenceSkeletonProvider::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBoneReferenceSkeletonProvider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBoneReferenceSkeletonProvider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBoneReferenceSkeletonProvider()
	{
		if (!Z_Registration_Info_UClass_UBoneReferenceSkeletonProvider.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBoneReferenceSkeletonProvider.OuterSingleton, Z_Construct_UClass_UBoneReferenceSkeletonProvider_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBoneReferenceSkeletonProvider.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UBoneReferenceSkeletonProvider>()
	{
		return UBoneReferenceSkeletonProvider::StaticClass();
	}
	UBoneReferenceSkeletonProvider::UBoneReferenceSkeletonProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBoneReferenceSkeletonProvider);
	UBoneReferenceSkeletonProvider::~UBoneReferenceSkeletonProvider() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_BoneReferenceSkeletonProvider_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_BoneReferenceSkeletonProvider_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBoneReferenceSkeletonProvider, UBoneReferenceSkeletonProvider::StaticClass, TEXT("UBoneReferenceSkeletonProvider"), &Z_Registration_Info_UClass_UBoneReferenceSkeletonProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBoneReferenceSkeletonProvider), 3827725125U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_BoneReferenceSkeletonProvider_h_2990360955(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_BoneReferenceSkeletonProvider_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_BoneReferenceSkeletonProvider_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
