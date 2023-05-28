// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NNECoreRuntimeGPU.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNNECoreRuntimeGPU() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	NNECORE_API UClass* Z_Construct_UClass_UNNERuntimeGPU();
	NNECORE_API UClass* Z_Construct_UClass_UNNERuntimeGPU_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NNECore();
// End Cross Module References
	void UNNERuntimeGPU::StaticRegisterNativesUNNERuntimeGPU()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNNERuntimeGPU);
	UClass* Z_Construct_UClass_UNNERuntimeGPU_NoRegister()
	{
		return UNNERuntimeGPU::StaticClass();
	}
	struct Z_Construct_UClass_UNNERuntimeGPU_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNNERuntimeGPU_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_NNECore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNNERuntimeGPU_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NNECoreRuntimeGPU.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNNERuntimeGPU_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<INNERuntimeGPU>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNNERuntimeGPU_Statics::ClassParams = {
		&UNNERuntimeGPU::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNNERuntimeGPU_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNNERuntimeGPU_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNNERuntimeGPU()
	{
		if (!Z_Registration_Info_UClass_UNNERuntimeGPU.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNNERuntimeGPU.OuterSingleton, Z_Construct_UClass_UNNERuntimeGPU_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNNERuntimeGPU.OuterSingleton;
	}
	template<> NNECORE_API UClass* StaticClass<UNNERuntimeGPU>()
	{
		return UNNERuntimeGPU::StaticClass();
	}
	UNNERuntimeGPU::UNNERuntimeGPU(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNNERuntimeGPU);
	UNNERuntimeGPU::~UNNERuntimeGPU() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNE_Source_NNECore_Public_NNECoreRuntimeGPU_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNE_Source_NNECore_Public_NNECoreRuntimeGPU_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNNERuntimeGPU, UNNERuntimeGPU::StaticClass, TEXT("UNNERuntimeGPU"), &Z_Registration_Info_UClass_UNNERuntimeGPU, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNNERuntimeGPU), 1972029654U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNE_Source_NNECore_Public_NNECoreRuntimeGPU_h_850684718(TEXT("/Script/NNECore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNE_Source_NNECore_Public_NNECoreRuntimeGPU_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNE_Source_NNECore_Public_NNECoreRuntimeGPU_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
