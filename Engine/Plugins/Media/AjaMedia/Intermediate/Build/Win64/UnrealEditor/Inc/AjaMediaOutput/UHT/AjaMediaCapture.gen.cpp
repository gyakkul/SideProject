// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AjaMediaCapture.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAjaMediaCapture() {}
// Cross Module References
	AJAMEDIAOUTPUT_API UClass* Z_Construct_UClass_UAjaMediaCapture();
	AJAMEDIAOUTPUT_API UClass* Z_Construct_UClass_UAjaMediaCapture_NoRegister();
	MEDIAIOCORE_API UClass* Z_Construct_UClass_UMediaCapture();
	UPackage* Z_Construct_UPackage__Script_AjaMediaOutput();
// End Cross Module References
	void UAjaMediaCapture::StaticRegisterNativesUAjaMediaCapture()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAjaMediaCapture);
	UClass* Z_Construct_UClass_UAjaMediaCapture_NoRegister()
	{
		return UAjaMediaCapture::StaticClass();
	}
	struct Z_Construct_UClass_UAjaMediaCapture_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAjaMediaCapture_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMediaCapture,
		(UObject* (*)())Z_Construct_UPackage__Script_AjaMediaOutput,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAjaMediaCapture_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Output Media for AJA streams.\n * The output format could be any of EAjaMediaOutputPixelFormat.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "AjaMediaCapture.h" },
		{ "ModuleRelativePath", "Public/AjaMediaCapture.h" },
		{ "ToolTip", "Output Media for AJA streams.\nThe output format could be any of EAjaMediaOutputPixelFormat." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAjaMediaCapture_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAjaMediaCapture>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAjaMediaCapture_Statics::ClassParams = {
		&UAjaMediaCapture::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAjaMediaCapture_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAjaMediaCapture_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAjaMediaCapture()
	{
		if (!Z_Registration_Info_UClass_UAjaMediaCapture.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAjaMediaCapture.OuterSingleton, Z_Construct_UClass_UAjaMediaCapture_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAjaMediaCapture.OuterSingleton;
	}
	template<> AJAMEDIAOUTPUT_API UClass* StaticClass<UAjaMediaCapture>()
	{
		return UAjaMediaCapture::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAjaMediaCapture);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AjaMedia_Source_AjaMediaOutput_Public_AjaMediaCapture_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AjaMedia_Source_AjaMediaOutput_Public_AjaMediaCapture_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAjaMediaCapture, UAjaMediaCapture::StaticClass, TEXT("UAjaMediaCapture"), &Z_Registration_Info_UClass_UAjaMediaCapture, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAjaMediaCapture), 1952110893U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AjaMedia_Source_AjaMediaOutput_Public_AjaMediaCapture_h_952595658(TEXT("/Script/AjaMediaOutput"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AjaMedia_Source_AjaMediaOutput_Public_AjaMediaCapture_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AjaMedia_Source_AjaMediaOutput_Public_AjaMediaCapture_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
