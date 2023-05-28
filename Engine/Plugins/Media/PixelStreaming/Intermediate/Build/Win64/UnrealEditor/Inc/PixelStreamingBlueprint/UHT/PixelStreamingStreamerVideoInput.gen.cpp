// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PixelStreamingStreamerVideoInput.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePixelStreamingStreamerVideoInput() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	PIXELSTREAMINGBLUEPRINT_API UClass* Z_Construct_UClass_UPixelStreamingStreamerVideoInput();
	PIXELSTREAMINGBLUEPRINT_API UClass* Z_Construct_UClass_UPixelStreamingStreamerVideoInput_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PixelStreamingBlueprint();
// End Cross Module References
	void UPixelStreamingStreamerVideoInput::StaticRegisterNativesUPixelStreamingStreamerVideoInput()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPixelStreamingStreamerVideoInput);
	UClass* Z_Construct_UClass_UPixelStreamingStreamerVideoInput_NoRegister()
	{
		return UPixelStreamingStreamerVideoInput::StaticClass();
	}
	struct Z_Construct_UClass_UPixelStreamingStreamerVideoInput_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPixelStreamingStreamerVideoInput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PixelStreamingBlueprint,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPixelStreamingStreamerVideoInput_Statics::Class_MetaDataParams[] = {
		{ "Category", "PixelStreaming" },
		{ "DisplayName", "Video Input" },
		{ "IncludePath", "PixelStreamingStreamerVideoInput.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/PixelStreamingStreamerVideoInput.h" },
		{ "NotBlueprintType", "true" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPixelStreamingStreamerVideoInput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPixelStreamingStreamerVideoInput>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPixelStreamingStreamerVideoInput_Statics::ClassParams = {
		&UPixelStreamingStreamerVideoInput::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPixelStreamingStreamerVideoInput_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPixelStreamingStreamerVideoInput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPixelStreamingStreamerVideoInput()
	{
		if (!Z_Registration_Info_UClass_UPixelStreamingStreamerVideoInput.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPixelStreamingStreamerVideoInput.OuterSingleton, Z_Construct_UClass_UPixelStreamingStreamerVideoInput_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPixelStreamingStreamerVideoInput.OuterSingleton;
	}
	template<> PIXELSTREAMINGBLUEPRINT_API UClass* StaticClass<UPixelStreamingStreamerVideoInput>()
	{
		return UPixelStreamingStreamerVideoInput::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPixelStreamingStreamerVideoInput);
	UPixelStreamingStreamerVideoInput::~UPixelStreamingStreamerVideoInput() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreamingBlueprint_Public_PixelStreamingStreamerVideoInput_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreamingBlueprint_Public_PixelStreamingStreamerVideoInput_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPixelStreamingStreamerVideoInput, UPixelStreamingStreamerVideoInput::StaticClass, TEXT("UPixelStreamingStreamerVideoInput"), &Z_Registration_Info_UClass_UPixelStreamingStreamerVideoInput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPixelStreamingStreamerVideoInput), 2744768014U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreamingBlueprint_Public_PixelStreamingStreamerVideoInput_h_2132238370(TEXT("/Script/PixelStreamingBlueprint"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreamingBlueprint_Public_PixelStreamingStreamerVideoInput_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreamingBlueprint_Public_PixelStreamingStreamerVideoInput_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
