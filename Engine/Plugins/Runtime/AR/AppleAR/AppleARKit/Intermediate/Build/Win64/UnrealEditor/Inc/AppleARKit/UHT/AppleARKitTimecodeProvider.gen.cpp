// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/AppleARKitTimecodeProvider.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAppleARKitTimecodeProvider() {}
// Cross Module References
	APPLEARKIT_API UClass* Z_Construct_UClass_UAppleARKitTimecodeProvider();
	APPLEARKIT_API UClass* Z_Construct_UClass_UAppleARKitTimecodeProvider_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTimecodeProvider();
	UPackage* Z_Construct_UPackage__Script_AppleARKit();
// End Cross Module References
	void UAppleARKitTimecodeProvider::StaticRegisterNativesUAppleARKitTimecodeProvider()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAppleARKitTimecodeProvider);
	UClass* Z_Construct_UClass_UAppleARKitTimecodeProvider_NoRegister()
	{
		return UAppleARKitTimecodeProvider::StaticClass();
	}
	struct Z_Construct_UClass_UAppleARKitTimecodeProvider_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAppleARKitTimecodeProvider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTimecodeProvider,
		(UObject* (*)())Z_Construct_UPackage__Script_AppleARKit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAppleARKitTimecodeProvider_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * This class is an implementation of the ITimecodeProvider and is used to abstract\n * out the calculation of the frame & time for an update\n */" },
		{ "IncludePath", "AppleARKitTimecodeProvider.h" },
		{ "ModuleRelativePath", "Private/AppleARKitTimecodeProvider.h" },
		{ "ToolTip", "This class is an implementation of the ITimecodeProvider and is used to abstract\nout the calculation of the frame & time for an update" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAppleARKitTimecodeProvider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAppleARKitTimecodeProvider>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAppleARKitTimecodeProvider_Statics::ClassParams = {
		&UAppleARKitTimecodeProvider::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAppleARKitTimecodeProvider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAppleARKitTimecodeProvider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAppleARKitTimecodeProvider()
	{
		if (!Z_Registration_Info_UClass_UAppleARKitTimecodeProvider.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAppleARKitTimecodeProvider.OuterSingleton, Z_Construct_UClass_UAppleARKitTimecodeProvider_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAppleARKitTimecodeProvider.OuterSingleton;
	}
	template<> APPLEARKIT_API UClass* StaticClass<UAppleARKitTimecodeProvider>()
	{
		return UAppleARKitTimecodeProvider::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAppleARKitTimecodeProvider);
	UAppleARKitTimecodeProvider::~UAppleARKitTimecodeProvider() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Private_AppleARKitTimecodeProvider_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Private_AppleARKitTimecodeProvider_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAppleARKitTimecodeProvider, UAppleARKitTimecodeProvider::StaticClass, TEXT("UAppleARKitTimecodeProvider"), &Z_Registration_Info_UClass_UAppleARKitTimecodeProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAppleARKitTimecodeProvider), 1744446408U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Private_AppleARKitTimecodeProvider_h_1805026301(TEXT("/Script/AppleARKit"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Private_AppleARKitTimecodeProvider_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Private_AppleARKitTimecodeProvider_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
