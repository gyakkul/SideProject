// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Iris/ReplicationSystem/Prioritization/LocationBasedNetObjectPrioritizer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLocationBasedNetObjectPrioritizer() {}
// Cross Module References
	IRISCORE_API UClass* Z_Construct_UClass_ULocationBasedNetObjectPrioritizer();
	IRISCORE_API UClass* Z_Construct_UClass_ULocationBasedNetObjectPrioritizer_NoRegister();
	IRISCORE_API UClass* Z_Construct_UClass_UNetObjectPrioritizer();
	UPackage* Z_Construct_UPackage__Script_IrisCore();
// End Cross Module References
	void ULocationBasedNetObjectPrioritizer::StaticRegisterNativesULocationBasedNetObjectPrioritizer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULocationBasedNetObjectPrioritizer);
	UClass* Z_Construct_UClass_ULocationBasedNetObjectPrioritizer_NoRegister()
	{
		return ULocationBasedNetObjectPrioritizer::StaticClass();
	}
	struct Z_Construct_UClass_ULocationBasedNetObjectPrioritizer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULocationBasedNetObjectPrioritizer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNetObjectPrioritizer,
		(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocationBasedNetObjectPrioritizer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Iris/ReplicationSystem/Prioritization/LocationBasedNetObjectPrioritizer.h" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Prioritization/LocationBasedNetObjectPrioritizer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULocationBasedNetObjectPrioritizer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULocationBasedNetObjectPrioritizer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULocationBasedNetObjectPrioritizer_Statics::ClassParams = {
		&ULocationBasedNetObjectPrioritizer::StaticClass,
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
		0x000800A9u,
		METADATA_PARAMS(Z_Construct_UClass_ULocationBasedNetObjectPrioritizer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULocationBasedNetObjectPrioritizer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULocationBasedNetObjectPrioritizer()
	{
		if (!Z_Registration_Info_UClass_ULocationBasedNetObjectPrioritizer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULocationBasedNetObjectPrioritizer.OuterSingleton, Z_Construct_UClass_ULocationBasedNetObjectPrioritizer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULocationBasedNetObjectPrioritizer.OuterSingleton;
	}
	template<> IRISCORE_API UClass* StaticClass<ULocationBasedNetObjectPrioritizer>()
	{
		return ULocationBasedNetObjectPrioritizer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULocationBasedNetObjectPrioritizer);
	ULocationBasedNetObjectPrioritizer::~ULocationBasedNetObjectPrioritizer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Prioritization_LocationBasedNetObjectPrioritizer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Prioritization_LocationBasedNetObjectPrioritizer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULocationBasedNetObjectPrioritizer, ULocationBasedNetObjectPrioritizer::StaticClass, TEXT("ULocationBasedNetObjectPrioritizer"), &Z_Registration_Info_UClass_ULocationBasedNetObjectPrioritizer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULocationBasedNetObjectPrioritizer), 3212934275U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Prioritization_LocationBasedNetObjectPrioritizer_h_3012585684(TEXT("/Script/IrisCore"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Prioritization_LocationBasedNetObjectPrioritizer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Prioritization_LocationBasedNetObjectPrioritizer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
