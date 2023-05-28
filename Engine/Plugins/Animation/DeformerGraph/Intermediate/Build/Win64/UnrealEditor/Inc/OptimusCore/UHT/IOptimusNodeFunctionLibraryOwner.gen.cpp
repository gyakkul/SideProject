// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IOptimusNodeFunctionLibraryOwner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIOptimusNodeFunctionLibraryOwner() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNodeFunctionLibraryOwner();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNodeFunctionLibraryOwner_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References
	void UOptimusNodeFunctionLibraryOwner::StaticRegisterNativesUOptimusNodeFunctionLibraryOwner()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusNodeFunctionLibraryOwner);
	UClass* Z_Construct_UClass_UOptimusNodeFunctionLibraryOwner_NoRegister()
	{
		return UOptimusNodeFunctionLibraryOwner::StaticClass();
	}
	struct Z_Construct_UClass_UOptimusNodeFunctionLibraryOwner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOptimusNodeFunctionLibraryOwner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusNodeFunctionLibraryOwner_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IOptimusNodeFunctionLibraryOwner.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOptimusNodeFunctionLibraryOwner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IOptimusNodeFunctionLibraryOwner>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusNodeFunctionLibraryOwner_Statics::ClassParams = {
		&UOptimusNodeFunctionLibraryOwner::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOptimusNodeFunctionLibraryOwner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNodeFunctionLibraryOwner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOptimusNodeFunctionLibraryOwner()
	{
		if (!Z_Registration_Info_UClass_UOptimusNodeFunctionLibraryOwner.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusNodeFunctionLibraryOwner.OuterSingleton, Z_Construct_UClass_UOptimusNodeFunctionLibraryOwner_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOptimusNodeFunctionLibraryOwner.OuterSingleton;
	}
	template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusNodeFunctionLibraryOwner>()
	{
		return UOptimusNodeFunctionLibraryOwner::StaticClass();
	}
	UOptimusNodeFunctionLibraryOwner::UOptimusNodeFunctionLibraryOwner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusNodeFunctionLibraryOwner);
	UOptimusNodeFunctionLibraryOwner::~UOptimusNodeFunctionLibraryOwner() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNodeFunctionLibraryOwner_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNodeFunctionLibraryOwner_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusNodeFunctionLibraryOwner, UOptimusNodeFunctionLibraryOwner::StaticClass, TEXT("UOptimusNodeFunctionLibraryOwner"), &Z_Registration_Info_UClass_UOptimusNodeFunctionLibraryOwner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusNodeFunctionLibraryOwner), 347496708U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNodeFunctionLibraryOwner_h_2484857601(TEXT("/Script/OptimusCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNodeFunctionLibraryOwner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNodeFunctionLibraryOwner_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
