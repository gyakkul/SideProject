// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NNECoreRuntimeCPU.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNNECoreRuntimeCPU() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	NNECORE_API UClass* Z_Construct_UClass_UNNERuntimeCPU();
	NNECORE_API UClass* Z_Construct_UClass_UNNERuntimeCPU_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NNECore();
// End Cross Module References
	void UNNERuntimeCPU::StaticRegisterNativesUNNERuntimeCPU()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNNERuntimeCPU);
	UClass* Z_Construct_UClass_UNNERuntimeCPU_NoRegister()
	{
		return UNNERuntimeCPU::StaticClass();
	}
	struct Z_Construct_UClass_UNNERuntimeCPU_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNNERuntimeCPU_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_NNECore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNNERuntimeCPU_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NNECoreRuntimeCPU.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNNERuntimeCPU_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<INNERuntimeCPU>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNNERuntimeCPU_Statics::ClassParams = {
		&UNNERuntimeCPU::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNNERuntimeCPU_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNNERuntimeCPU_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNNERuntimeCPU()
	{
		if (!Z_Registration_Info_UClass_UNNERuntimeCPU.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNNERuntimeCPU.OuterSingleton, Z_Construct_UClass_UNNERuntimeCPU_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNNERuntimeCPU.OuterSingleton;
	}
	template<> NNECORE_API UClass* StaticClass<UNNERuntimeCPU>()
	{
		return UNNERuntimeCPU::StaticClass();
	}
	UNNERuntimeCPU::UNNERuntimeCPU(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNNERuntimeCPU);
	UNNERuntimeCPU::~UNNERuntimeCPU() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNE_Source_NNECore_Public_NNECoreRuntimeCPU_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNE_Source_NNECore_Public_NNECoreRuntimeCPU_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNNERuntimeCPU, UNNERuntimeCPU::StaticClass, TEXT("UNNERuntimeCPU"), &Z_Registration_Info_UClass_UNNERuntimeCPU, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNNERuntimeCPU), 2232078154U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNE_Source_NNECore_Public_NNECoreRuntimeCPU_h_578272321(TEXT("/Script/NNECore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNE_Source_NNECore_Public_NNECoreRuntimeCPU_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNE_Source_NNECore_Public_NNECoreRuntimeCPU_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
