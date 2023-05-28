// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NNECoreRuntime.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNNECoreRuntime() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	NNECORE_API UClass* Z_Construct_UClass_UNNERuntime();
	NNECORE_API UClass* Z_Construct_UClass_UNNERuntime_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NNECore();
// End Cross Module References
	void UNNERuntime::StaticRegisterNativesUNNERuntime()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNNERuntime);
	UClass* Z_Construct_UClass_UNNERuntime_NoRegister()
	{
		return UNNERuntime::StaticClass();
	}
	struct Z_Construct_UClass_UNNERuntime_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNNERuntime_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_NNECore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNNERuntime_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NNECoreRuntime.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNNERuntime_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<INNERuntime>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNNERuntime_Statics::ClassParams = {
		&UNNERuntime::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNNERuntime_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNNERuntime_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNNERuntime()
	{
		if (!Z_Registration_Info_UClass_UNNERuntime.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNNERuntime.OuterSingleton, Z_Construct_UClass_UNNERuntime_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNNERuntime.OuterSingleton;
	}
	template<> NNECORE_API UClass* StaticClass<UNNERuntime>()
	{
		return UNNERuntime::StaticClass();
	}
	UNNERuntime::UNNERuntime(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNNERuntime);
	UNNERuntime::~UNNERuntime() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNE_Source_NNECore_Public_NNECoreRuntime_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNE_Source_NNECore_Public_NNECoreRuntime_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNNERuntime, UNNERuntime::StaticClass, TEXT("UNNERuntime"), &Z_Registration_Info_UClass_UNNERuntime, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNNERuntime), 3543825881U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNE_Source_NNECore_Public_NNECoreRuntime_h_2704638633(TEXT("/Script/NNECore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNE_Source_NNECore_Public_NNECoreRuntime_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNE_Source_NNECore_Public_NNECoreRuntime_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
