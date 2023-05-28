// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IOptimusNodePinRouter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIOptimusNodePinRouter() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNodePinRouter();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNodePinRouter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References
	void UOptimusNodePinRouter::StaticRegisterNativesUOptimusNodePinRouter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusNodePinRouter);
	UClass* Z_Construct_UClass_UOptimusNodePinRouter_NoRegister()
	{
		return UOptimusNodePinRouter::StaticClass();
	}
	struct Z_Construct_UClass_UOptimusNodePinRouter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOptimusNodePinRouter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusNodePinRouter_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IOptimusNodePinRouter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOptimusNodePinRouter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IOptimusNodePinRouter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusNodePinRouter_Statics::ClassParams = {
		&UOptimusNodePinRouter::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOptimusNodePinRouter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNodePinRouter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOptimusNodePinRouter()
	{
		if (!Z_Registration_Info_UClass_UOptimusNodePinRouter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusNodePinRouter.OuterSingleton, Z_Construct_UClass_UOptimusNodePinRouter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOptimusNodePinRouter.OuterSingleton;
	}
	template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusNodePinRouter>()
	{
		return UOptimusNodePinRouter::StaticClass();
	}
	UOptimusNodePinRouter::UOptimusNodePinRouter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusNodePinRouter);
	UOptimusNodePinRouter::~UOptimusNodePinRouter() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNodePinRouter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNodePinRouter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusNodePinRouter, UOptimusNodePinRouter::StaticClass, TEXT("UOptimusNodePinRouter"), &Z_Registration_Info_UClass_UOptimusNodePinRouter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusNodePinRouter), 162175867U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNodePinRouter_h_3131584217(TEXT("/Script/OptimusCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNodePinRouter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_IOptimusNodePinRouter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
