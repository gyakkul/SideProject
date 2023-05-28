// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/AppleARKitTrackable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAppleARKitTrackable() {}
// Cross Module References
	APPLEARKIT_API UClass* Z_Construct_UClass_UAppleARKitEnvironmentCaptureProbe();
	APPLEARKIT_API UClass* Z_Construct_UClass_UAppleARKitEnvironmentCaptureProbe_NoRegister();
	APPLEARKIT_API UClass* Z_Construct_UClass_UAppleARKitEnvironmentCaptureProbeTexture_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UAREnvironmentCaptureProbe();
	UPackage* Z_Construct_UPackage__Script_AppleARKit();
// End Cross Module References
	void UAppleARKitEnvironmentCaptureProbe::StaticRegisterNativesUAppleARKitEnvironmentCaptureProbe()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAppleARKitEnvironmentCaptureProbe);
	UClass* Z_Construct_UClass_UAppleARKitEnvironmentCaptureProbe_NoRegister()
	{
		return UAppleARKitEnvironmentCaptureProbe::StaticClass();
	}
	struct Z_Construct_UClass_UAppleARKitEnvironmentCaptureProbe_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ARKitEnvironmentTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ARKitEnvironmentTexture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAppleARKitEnvironmentCaptureProbe_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAREnvironmentCaptureProbe,
		(UObject* (*)())Z_Construct_UPackage__Script_AppleARKit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAppleARKitEnvironmentCaptureProbe_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AppleARKitTrackable.h" },
		{ "ModuleRelativePath", "Private/AppleARKitTrackable.h" },
		{ "NotBlueprintType", "true" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAppleARKitEnvironmentCaptureProbe_Statics::NewProp_ARKitEnvironmentTexture_MetaData[] = {
		{ "Comment", "/** The cube map of the reflected environment */" },
		{ "ModuleRelativePath", "Private/AppleARKitTrackable.h" },
		{ "ToolTip", "The cube map of the reflected environment" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAppleARKitEnvironmentCaptureProbe_Statics::NewProp_ARKitEnvironmentTexture = { "ARKitEnvironmentTexture", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAppleARKitEnvironmentCaptureProbe, ARKitEnvironmentTexture), Z_Construct_UClass_UAppleARKitEnvironmentCaptureProbeTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAppleARKitEnvironmentCaptureProbe_Statics::NewProp_ARKitEnvironmentTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAppleARKitEnvironmentCaptureProbe_Statics::NewProp_ARKitEnvironmentTexture_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAppleARKitEnvironmentCaptureProbe_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAppleARKitEnvironmentCaptureProbe_Statics::NewProp_ARKitEnvironmentTexture,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAppleARKitEnvironmentCaptureProbe_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAppleARKitEnvironmentCaptureProbe>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAppleARKitEnvironmentCaptureProbe_Statics::ClassParams = {
		&UAppleARKitEnvironmentCaptureProbe::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAppleARKitEnvironmentCaptureProbe_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAppleARKitEnvironmentCaptureProbe_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAppleARKitEnvironmentCaptureProbe_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAppleARKitEnvironmentCaptureProbe_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAppleARKitEnvironmentCaptureProbe()
	{
		if (!Z_Registration_Info_UClass_UAppleARKitEnvironmentCaptureProbe.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAppleARKitEnvironmentCaptureProbe.OuterSingleton, Z_Construct_UClass_UAppleARKitEnvironmentCaptureProbe_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAppleARKitEnvironmentCaptureProbe.OuterSingleton;
	}
	template<> APPLEARKIT_API UClass* StaticClass<UAppleARKitEnvironmentCaptureProbe>()
	{
		return UAppleARKitEnvironmentCaptureProbe::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAppleARKitEnvironmentCaptureProbe);
	UAppleARKitEnvironmentCaptureProbe::~UAppleARKitEnvironmentCaptureProbe() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Private_AppleARKitTrackable_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Private_AppleARKitTrackable_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAppleARKitEnvironmentCaptureProbe, UAppleARKitEnvironmentCaptureProbe::StaticClass, TEXT("UAppleARKitEnvironmentCaptureProbe"), &Z_Registration_Info_UClass_UAppleARKitEnvironmentCaptureProbe, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAppleARKitEnvironmentCaptureProbe), 2801852292U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Private_AppleARKitTrackable_h_430006795(TEXT("/Script/AppleARKit"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Private_AppleARKitTrackable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Private_AppleARKitTrackable_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
