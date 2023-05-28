// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/GoogleARCoreDependencyHandler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGoogleARCoreDependencyHandler() {}
// Cross Module References
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARDependencyHandler();
	GOOGLEARCOREBASE_API UClass* Z_Construct_UClass_UGoogleARCoreDependencyHandler();
	GOOGLEARCOREBASE_API UClass* Z_Construct_UClass_UGoogleARCoreDependencyHandler_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GoogleARCoreBase();
// End Cross Module References
	void UGoogleARCoreDependencyHandler::StaticRegisterNativesUGoogleARCoreDependencyHandler()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGoogleARCoreDependencyHandler);
	UClass* Z_Construct_UClass_UGoogleARCoreDependencyHandler_NoRegister()
	{
		return UGoogleARCoreDependencyHandler::StaticClass();
	}
	struct Z_Construct_UClass_UGoogleARCoreDependencyHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGoogleARCoreDependencyHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UARDependencyHandler,
		(UObject* (*)())Z_Construct_UPackage__Script_GoogleARCoreBase,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGoogleARCoreDependencyHandler_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GoogleARCoreDependencyHandler.h" },
		{ "ModuleRelativePath", "Private/GoogleARCoreDependencyHandler.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGoogleARCoreDependencyHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGoogleARCoreDependencyHandler>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGoogleARCoreDependencyHandler_Statics::ClassParams = {
		&UGoogleARCoreDependencyHandler::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGoogleARCoreDependencyHandler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGoogleARCoreDependencyHandler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGoogleARCoreDependencyHandler()
	{
		if (!Z_Registration_Info_UClass_UGoogleARCoreDependencyHandler.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGoogleARCoreDependencyHandler.OuterSingleton, Z_Construct_UClass_UGoogleARCoreDependencyHandler_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGoogleARCoreDependencyHandler.OuterSingleton;
	}
	template<> GOOGLEARCOREBASE_API UClass* StaticClass<UGoogleARCoreDependencyHandler>()
	{
		return UGoogleARCoreDependencyHandler::StaticClass();
	}
	UGoogleARCoreDependencyHandler::UGoogleARCoreDependencyHandler(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGoogleARCoreDependencyHandler);
	UGoogleARCoreDependencyHandler::~UGoogleARCoreDependencyHandler() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Private_GoogleARCoreDependencyHandler_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Private_GoogleARCoreDependencyHandler_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGoogleARCoreDependencyHandler, UGoogleARCoreDependencyHandler::StaticClass, TEXT("UGoogleARCoreDependencyHandler"), &Z_Registration_Info_UClass_UGoogleARCoreDependencyHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGoogleARCoreDependencyHandler), 2239486190U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Private_GoogleARCoreDependencyHandler_h_371387314(TEXT("/Script/GoogleARCoreBase"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Private_GoogleARCoreDependencyHandler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Private_GoogleARCoreDependencyHandler_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
