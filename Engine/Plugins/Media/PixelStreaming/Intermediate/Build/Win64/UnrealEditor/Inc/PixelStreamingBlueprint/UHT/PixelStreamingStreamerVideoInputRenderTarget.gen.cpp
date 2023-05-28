// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PixelStreamingStreamerVideoInputRenderTarget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePixelStreamingStreamerVideoInputRenderTarget() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	PIXELSTREAMINGBLUEPRINT_API UClass* Z_Construct_UClass_UPixelStreamingStreamerVideoInput();
	PIXELSTREAMINGBLUEPRINT_API UClass* Z_Construct_UClass_UPixelStreamingStreamerVideoInputRenderTarget();
	PIXELSTREAMINGBLUEPRINT_API UClass* Z_Construct_UClass_UPixelStreamingStreamerVideoInputRenderTarget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PixelStreamingBlueprint();
// End Cross Module References
	void UPixelStreamingStreamerVideoInputRenderTarget::StaticRegisterNativesUPixelStreamingStreamerVideoInputRenderTarget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPixelStreamingStreamerVideoInputRenderTarget);
	UClass* Z_Construct_UClass_UPixelStreamingStreamerVideoInputRenderTarget_NoRegister()
	{
		return UPixelStreamingStreamerVideoInputRenderTarget::StaticClass();
	}
	struct Z_Construct_UClass_UPixelStreamingStreamerVideoInputRenderTarget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Target;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPixelStreamingStreamerVideoInputRenderTarget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPixelStreamingStreamerVideoInput,
		(UObject* (*)())Z_Construct_UPackage__Script_PixelStreamingBlueprint,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPixelStreamingStreamerVideoInputRenderTarget_Statics::Class_MetaDataParams[] = {
		{ "Category", "PixelStreaming" },
		{ "DisplayName", "Render Target Streamer Video Input" },
		{ "IncludePath", "PixelStreamingStreamerVideoInputRenderTarget.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/PixelStreamingStreamerVideoInputRenderTarget.h" },
		{ "NotBlueprintType", "true" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPixelStreamingStreamerVideoInputRenderTarget_Statics::NewProp_Target_MetaData[] = {
		{ "Category", "Video" },
		{ "ModuleRelativePath", "Public/PixelStreamingStreamerVideoInputRenderTarget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPixelStreamingStreamerVideoInputRenderTarget_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0014010000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPixelStreamingStreamerVideoInputRenderTarget, Target), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPixelStreamingStreamerVideoInputRenderTarget_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPixelStreamingStreamerVideoInputRenderTarget_Statics::NewProp_Target_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPixelStreamingStreamerVideoInputRenderTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPixelStreamingStreamerVideoInputRenderTarget_Statics::NewProp_Target,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPixelStreamingStreamerVideoInputRenderTarget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPixelStreamingStreamerVideoInputRenderTarget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPixelStreamingStreamerVideoInputRenderTarget_Statics::ClassParams = {
		&UPixelStreamingStreamerVideoInputRenderTarget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPixelStreamingStreamerVideoInputRenderTarget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPixelStreamingStreamerVideoInputRenderTarget_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPixelStreamingStreamerVideoInputRenderTarget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPixelStreamingStreamerVideoInputRenderTarget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPixelStreamingStreamerVideoInputRenderTarget()
	{
		if (!Z_Registration_Info_UClass_UPixelStreamingStreamerVideoInputRenderTarget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPixelStreamingStreamerVideoInputRenderTarget.OuterSingleton, Z_Construct_UClass_UPixelStreamingStreamerVideoInputRenderTarget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPixelStreamingStreamerVideoInputRenderTarget.OuterSingleton;
	}
	template<> PIXELSTREAMINGBLUEPRINT_API UClass* StaticClass<UPixelStreamingStreamerVideoInputRenderTarget>()
	{
		return UPixelStreamingStreamerVideoInputRenderTarget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPixelStreamingStreamerVideoInputRenderTarget);
	UPixelStreamingStreamerVideoInputRenderTarget::~UPixelStreamingStreamerVideoInputRenderTarget() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreamingBlueprint_Public_PixelStreamingStreamerVideoInputRenderTarget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreamingBlueprint_Public_PixelStreamingStreamerVideoInputRenderTarget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPixelStreamingStreamerVideoInputRenderTarget, UPixelStreamingStreamerVideoInputRenderTarget::StaticClass, TEXT("UPixelStreamingStreamerVideoInputRenderTarget"), &Z_Registration_Info_UClass_UPixelStreamingStreamerVideoInputRenderTarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPixelStreamingStreamerVideoInputRenderTarget), 2892356250U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreamingBlueprint_Public_PixelStreamingStreamerVideoInputRenderTarget_h_2623696517(TEXT("/Script/PixelStreamingBlueprint"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreamingBlueprint_Public_PixelStreamingStreamerVideoInputRenderTarget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreamingBlueprint_Public_PixelStreamingStreamerVideoInputRenderTarget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
