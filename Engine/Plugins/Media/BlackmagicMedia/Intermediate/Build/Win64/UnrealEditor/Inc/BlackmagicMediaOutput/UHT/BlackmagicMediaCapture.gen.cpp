// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlackmagicMediaCapture.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlackmagicMediaCapture() {}
// Cross Module References
	BLACKMAGICMEDIAOUTPUT_API UClass* Z_Construct_UClass_UBlackmagicMediaCapture();
	BLACKMAGICMEDIAOUTPUT_API UClass* Z_Construct_UClass_UBlackmagicMediaCapture_NoRegister();
	MEDIAIOCORE_API UClass* Z_Construct_UClass_UMediaCapture();
	UPackage* Z_Construct_UPackage__Script_BlackmagicMediaOutput();
// End Cross Module References
	void UBlackmagicMediaCapture::StaticRegisterNativesUBlackmagicMediaCapture()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlackmagicMediaCapture);
	UClass* Z_Construct_UClass_UBlackmagicMediaCapture_NoRegister()
	{
		return UBlackmagicMediaCapture::StaticClass();
	}
	struct Z_Construct_UClass_UBlackmagicMediaCapture_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlackmagicMediaCapture_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMediaCapture,
		(UObject* (*)())Z_Construct_UPackage__Script_BlackmagicMediaOutput,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlackmagicMediaCapture_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Output Media for Blackmagic streams.\n * The output format could be any of EBlackmagicMediaOutputPixelFormat.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "BlackmagicMediaCapture.h" },
		{ "ModuleRelativePath", "Public/BlackmagicMediaCapture.h" },
		{ "ToolTip", "Output Media for Blackmagic streams.\nThe output format could be any of EBlackmagicMediaOutputPixelFormat." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlackmagicMediaCapture_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlackmagicMediaCapture>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlackmagicMediaCapture_Statics::ClassParams = {
		&UBlackmagicMediaCapture::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBlackmagicMediaCapture_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlackmagicMediaCapture_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlackmagicMediaCapture()
	{
		if (!Z_Registration_Info_UClass_UBlackmagicMediaCapture.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlackmagicMediaCapture.OuterSingleton, Z_Construct_UClass_UBlackmagicMediaCapture_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBlackmagicMediaCapture.OuterSingleton;
	}
	template<> BLACKMAGICMEDIAOUTPUT_API UClass* StaticClass<UBlackmagicMediaCapture>()
	{
		return UBlackmagicMediaCapture::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlackmagicMediaCapture);
	UBlackmagicMediaCapture::~UBlackmagicMediaCapture() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMediaOutput_Public_BlackmagicMediaCapture_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMediaOutput_Public_BlackmagicMediaCapture_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBlackmagicMediaCapture, UBlackmagicMediaCapture::StaticClass, TEXT("UBlackmagicMediaCapture"), &Z_Registration_Info_UClass_UBlackmagicMediaCapture, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlackmagicMediaCapture), 1302482951U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMediaOutput_Public_BlackmagicMediaCapture_h_1713957593(TEXT("/Script/BlackmagicMediaOutput"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMediaOutput_Public_BlackmagicMediaCapture_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMediaOutput_Public_BlackmagicMediaCapture_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
