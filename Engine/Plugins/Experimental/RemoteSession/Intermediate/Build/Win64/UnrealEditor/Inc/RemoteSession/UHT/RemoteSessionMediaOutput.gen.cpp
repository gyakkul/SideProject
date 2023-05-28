// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ImageProviders/RemoteSessionMediaOutput.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRemoteSessionMediaOutput() {}
// Cross Module References
	MEDIAIOCORE_API UClass* Z_Construct_UClass_UMediaCapture();
	MEDIAIOCORE_API UClass* Z_Construct_UClass_UMediaOutput();
	REMOTESESSION_API UClass* Z_Construct_UClass_URemoteSessionMediaCapture();
	REMOTESESSION_API UClass* Z_Construct_UClass_URemoteSessionMediaCapture_NoRegister();
	REMOTESESSION_API UClass* Z_Construct_UClass_URemoteSessionMediaOutput();
	REMOTESESSION_API UClass* Z_Construct_UClass_URemoteSessionMediaOutput_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RemoteSession();
// End Cross Module References
	void URemoteSessionMediaOutput::StaticRegisterNativesURemoteSessionMediaOutput()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URemoteSessionMediaOutput);
	UClass* Z_Construct_UClass_URemoteSessionMediaOutput_NoRegister()
	{
		return URemoteSessionMediaOutput::StaticClass();
	}
	struct Z_Construct_UClass_URemoteSessionMediaOutput_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URemoteSessionMediaOutput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMediaOutput,
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteSession,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteSessionMediaOutput_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "ImageProviders/RemoteSessionMediaOutput.h" },
		{ "ModuleRelativePath", "Public/ImageProviders/RemoteSessionMediaOutput.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URemoteSessionMediaOutput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URemoteSessionMediaOutput>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URemoteSessionMediaOutput_Statics::ClassParams = {
		&URemoteSessionMediaOutput::StaticClass,
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
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_URemoteSessionMediaOutput_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteSessionMediaOutput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URemoteSessionMediaOutput()
	{
		if (!Z_Registration_Info_UClass_URemoteSessionMediaOutput.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URemoteSessionMediaOutput.OuterSingleton, Z_Construct_UClass_URemoteSessionMediaOutput_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URemoteSessionMediaOutput.OuterSingleton;
	}
	template<> REMOTESESSION_API UClass* StaticClass<URemoteSessionMediaOutput>()
	{
		return URemoteSessionMediaOutput::StaticClass();
	}
	URemoteSessionMediaOutput::URemoteSessionMediaOutput(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URemoteSessionMediaOutput);
	URemoteSessionMediaOutput::~URemoteSessionMediaOutput() {}
	void URemoteSessionMediaCapture::StaticRegisterNativesURemoteSessionMediaCapture()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URemoteSessionMediaCapture);
	UClass* Z_Construct_UClass_URemoteSessionMediaCapture_NoRegister()
	{
		return URemoteSessionMediaCapture::StaticClass();
	}
	struct Z_Construct_UClass_URemoteSessionMediaCapture_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URemoteSessionMediaCapture_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMediaCapture,
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteSession,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteSessionMediaCapture_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "ImageProviders/RemoteSessionMediaOutput.h" },
		{ "ModuleRelativePath", "Public/ImageProviders/RemoteSessionMediaOutput.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URemoteSessionMediaCapture_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URemoteSessionMediaCapture>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URemoteSessionMediaCapture_Statics::ClassParams = {
		&URemoteSessionMediaCapture::StaticClass,
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
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_URemoteSessionMediaCapture_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteSessionMediaCapture_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URemoteSessionMediaCapture()
	{
		if (!Z_Registration_Info_UClass_URemoteSessionMediaCapture.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URemoteSessionMediaCapture.OuterSingleton, Z_Construct_UClass_URemoteSessionMediaCapture_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URemoteSessionMediaCapture.OuterSingleton;
	}
	template<> REMOTESESSION_API UClass* StaticClass<URemoteSessionMediaCapture>()
	{
		return URemoteSessionMediaCapture::StaticClass();
	}
	URemoteSessionMediaCapture::URemoteSessionMediaCapture() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URemoteSessionMediaCapture);
	URemoteSessionMediaCapture::~URemoteSessionMediaCapture() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_RemoteSession_Source_RemoteSession_Public_ImageProviders_RemoteSessionMediaOutput_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_RemoteSession_Source_RemoteSession_Public_ImageProviders_RemoteSessionMediaOutput_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URemoteSessionMediaOutput, URemoteSessionMediaOutput::StaticClass, TEXT("URemoteSessionMediaOutput"), &Z_Registration_Info_UClass_URemoteSessionMediaOutput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URemoteSessionMediaOutput), 1456502282U) },
		{ Z_Construct_UClass_URemoteSessionMediaCapture, URemoteSessionMediaCapture::StaticClass, TEXT("URemoteSessionMediaCapture"), &Z_Registration_Info_UClass_URemoteSessionMediaCapture, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URemoteSessionMediaCapture), 4189690953U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_RemoteSession_Source_RemoteSession_Public_ImageProviders_RemoteSessionMediaOutput_h_4291518094(TEXT("/Script/RemoteSession"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_RemoteSession_Source_RemoteSession_Public_ImageProviders_RemoteSessionMediaOutput_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_RemoteSession_Source_RemoteSession_Public_ImageProviders_RemoteSessionMediaOutput_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
