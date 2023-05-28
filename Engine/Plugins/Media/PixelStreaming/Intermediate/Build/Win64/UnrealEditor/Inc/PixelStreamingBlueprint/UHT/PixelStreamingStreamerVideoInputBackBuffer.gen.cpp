// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PixelStreamingStreamerVideoInputBackBuffer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePixelStreamingStreamerVideoInputBackBuffer() {}
// Cross Module References
	PIXELSTREAMINGBLUEPRINT_API UClass* Z_Construct_UClass_UPixelStreamingStreamerVideoInput();
	PIXELSTREAMINGBLUEPRINT_API UClass* Z_Construct_UClass_UPixelStreamingStreamerVideoInputBackBuffer();
	PIXELSTREAMINGBLUEPRINT_API UClass* Z_Construct_UClass_UPixelStreamingStreamerVideoInputBackBuffer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PixelStreamingBlueprint();
// End Cross Module References
	void UPixelStreamingStreamerVideoInputBackBuffer::StaticRegisterNativesUPixelStreamingStreamerVideoInputBackBuffer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPixelStreamingStreamerVideoInputBackBuffer);
	UClass* Z_Construct_UClass_UPixelStreamingStreamerVideoInputBackBuffer_NoRegister()
	{
		return UPixelStreamingStreamerVideoInputBackBuffer::StaticClass();
	}
	struct Z_Construct_UClass_UPixelStreamingStreamerVideoInputBackBuffer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPixelStreamingStreamerVideoInputBackBuffer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPixelStreamingStreamerVideoInput,
		(UObject* (*)())Z_Construct_UPackage__Script_PixelStreamingBlueprint,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPixelStreamingStreamerVideoInputBackBuffer_Statics::Class_MetaDataParams[] = {
		{ "Category", "PixelStreaming" },
		{ "DisplayName", "Back Buffer Streamer Video Input" },
		{ "IncludePath", "PixelStreamingStreamerVideoInputBackBuffer.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/PixelStreamingStreamerVideoInputBackBuffer.h" },
		{ "NotBlueprintType", "true" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPixelStreamingStreamerVideoInputBackBuffer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPixelStreamingStreamerVideoInputBackBuffer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPixelStreamingStreamerVideoInputBackBuffer_Statics::ClassParams = {
		&UPixelStreamingStreamerVideoInputBackBuffer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPixelStreamingStreamerVideoInputBackBuffer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPixelStreamingStreamerVideoInputBackBuffer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPixelStreamingStreamerVideoInputBackBuffer()
	{
		if (!Z_Registration_Info_UClass_UPixelStreamingStreamerVideoInputBackBuffer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPixelStreamingStreamerVideoInputBackBuffer.OuterSingleton, Z_Construct_UClass_UPixelStreamingStreamerVideoInputBackBuffer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPixelStreamingStreamerVideoInputBackBuffer.OuterSingleton;
	}
	template<> PIXELSTREAMINGBLUEPRINT_API UClass* StaticClass<UPixelStreamingStreamerVideoInputBackBuffer>()
	{
		return UPixelStreamingStreamerVideoInputBackBuffer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPixelStreamingStreamerVideoInputBackBuffer);
	UPixelStreamingStreamerVideoInputBackBuffer::~UPixelStreamingStreamerVideoInputBackBuffer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreamingBlueprint_Public_PixelStreamingStreamerVideoInputBackBuffer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreamingBlueprint_Public_PixelStreamingStreamerVideoInputBackBuffer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPixelStreamingStreamerVideoInputBackBuffer, UPixelStreamingStreamerVideoInputBackBuffer::StaticClass, TEXT("UPixelStreamingStreamerVideoInputBackBuffer"), &Z_Registration_Info_UClass_UPixelStreamingStreamerVideoInputBackBuffer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPixelStreamingStreamerVideoInputBackBuffer), 4009498040U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreamingBlueprint_Public_PixelStreamingStreamerVideoInputBackBuffer_h_3919806757(TEXT("/Script/PixelStreamingBlueprint"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreamingBlueprint_Public_PixelStreamingStreamerVideoInputBackBuffer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreamingBlueprint_Public_PixelStreamingStreamerVideoInputBackBuffer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
