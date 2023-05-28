// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioCaptureComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioCaptureComponent() {}
// Cross Module References
	AUDIOCAPTURE_API UClass* Z_Construct_UClass_UAudioCaptureComponent();
	AUDIOCAPTURE_API UClass* Z_Construct_UClass_UAudioCaptureComponent_NoRegister();
	AUDIOMIXER_API UClass* Z_Construct_UClass_USynthComponent();
	UPackage* Z_Construct_UPackage__Script_AudioCapture();
// End Cross Module References
	void UAudioCaptureComponent::StaticRegisterNativesUAudioCaptureComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioCaptureComponent);
	UClass* Z_Construct_UClass_UAudioCaptureComponent_NoRegister()
	{
		return UAudioCaptureComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAudioCaptureComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JitterLatencyFrames_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_JitterLatencyFrames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAudioCaptureComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USynthComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioCapture,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioCaptureComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Synth" },
		{ "HideCategories", "Object ActorComponent Physics Rendering Mobility LOD Trigger PhysicsVolume" },
		{ "IncludePath", "AudioCaptureComponent.h" },
		{ "ModuleRelativePath", "Public/AudioCaptureComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioCaptureComponent_Statics::NewProp_JitterLatencyFrames_MetaData[] = {
		{ "Category", "Latency" },
		{ "ClampMax", "1024" },
		{ "ClampMin", "0" },
		{ "Comment", "/** \n\x09*   Induced latency in audio frames to use to account for jitter between mic capture hardware and audio render hardware. \n\x09 *\x09Increasing this number will increase latency but reduce potential for underruns.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AudioCaptureComponent.h" },
		{ "ToolTip", "Induced latency in audio frames to use to account for jitter between mic capture hardware and audio render hardware.\n   Increasing this number will increase latency but reduce potential for underruns." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAudioCaptureComponent_Statics::NewProp_JitterLatencyFrames = { "JitterLatencyFrames", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioCaptureComponent, JitterLatencyFrames), METADATA_PARAMS(Z_Construct_UClass_UAudioCaptureComponent_Statics::NewProp_JitterLatencyFrames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioCaptureComponent_Statics::NewProp_JitterLatencyFrames_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAudioCaptureComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioCaptureComponent_Statics::NewProp_JitterLatencyFrames,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAudioCaptureComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioCaptureComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioCaptureComponent_Statics::ClassParams = {
		&UAudioCaptureComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAudioCaptureComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAudioCaptureComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAudioCaptureComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioCaptureComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAudioCaptureComponent()
	{
		if (!Z_Registration_Info_UClass_UAudioCaptureComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioCaptureComponent.OuterSingleton, Z_Construct_UClass_UAudioCaptureComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAudioCaptureComponent.OuterSingleton;
	}
	template<> AUDIOCAPTURE_API UClass* StaticClass<UAudioCaptureComponent>()
	{
		return UAudioCaptureComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioCaptureComponent);
	UAudioCaptureComponent::~UAudioCaptureComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCaptureComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCaptureComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAudioCaptureComponent, UAudioCaptureComponent::StaticClass, TEXT("UAudioCaptureComponent"), &Z_Registration_Info_UClass_UAudioCaptureComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioCaptureComponent), 2614204867U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCaptureComponent_h_1047035443(TEXT("/Script/AudioCapture"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCaptureComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioCapture_Source_AudioCapture_Public_AudioCaptureComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
