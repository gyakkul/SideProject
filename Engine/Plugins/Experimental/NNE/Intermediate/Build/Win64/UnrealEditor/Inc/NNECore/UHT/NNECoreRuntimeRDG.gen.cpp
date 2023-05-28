// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NNECoreRuntimeRDG.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNNECoreRuntimeRDG() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	NNECORE_API UClass* Z_Construct_UClass_UNNERuntimeRDG();
	NNECORE_API UClass* Z_Construct_UClass_UNNERuntimeRDG_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NNECore();
// End Cross Module References
	void UNNERuntimeRDG::StaticRegisterNativesUNNERuntimeRDG()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNNERuntimeRDG);
	UClass* Z_Construct_UClass_UNNERuntimeRDG_NoRegister()
	{
		return UNNERuntimeRDG::StaticClass();
	}
	struct Z_Construct_UClass_UNNERuntimeRDG_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNNERuntimeRDG_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_NNECore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNNERuntimeRDG_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NNECoreRuntimeRDG.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNNERuntimeRDG_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<INNERuntimeRDG>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNNERuntimeRDG_Statics::ClassParams = {
		&UNNERuntimeRDG::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNNERuntimeRDG_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNNERuntimeRDG_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNNERuntimeRDG()
	{
		if (!Z_Registration_Info_UClass_UNNERuntimeRDG.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNNERuntimeRDG.OuterSingleton, Z_Construct_UClass_UNNERuntimeRDG_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNNERuntimeRDG.OuterSingleton;
	}
	template<> NNECORE_API UClass* StaticClass<UNNERuntimeRDG>()
	{
		return UNNERuntimeRDG::StaticClass();
	}
	UNNERuntimeRDG::UNNERuntimeRDG(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNNERuntimeRDG);
	UNNERuntimeRDG::~UNNERuntimeRDG() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNE_Source_NNECore_Public_NNECoreRuntimeRDG_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNE_Source_NNECore_Public_NNECoreRuntimeRDG_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNNERuntimeRDG, UNNERuntimeRDG::StaticClass, TEXT("UNNERuntimeRDG"), &Z_Registration_Info_UClass_UNNERuntimeRDG, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNNERuntimeRDG), 2878698391U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNE_Source_NNECore_Public_NNECoreRuntimeRDG_h_2500606329(TEXT("/Script/NNECore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNE_Source_NNECore_Public_NNECoreRuntimeRDG_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNE_Source_NNECore_Public_NNECoreRuntimeRDG_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
