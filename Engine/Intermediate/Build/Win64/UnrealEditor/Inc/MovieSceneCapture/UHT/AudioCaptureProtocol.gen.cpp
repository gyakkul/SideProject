// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Protocols/AudioCaptureProtocol.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioCaptureProtocol() {}
// Cross Module References
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UMasterAudioSubmixCaptureProtocol();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UMasterAudioSubmixCaptureProtocol_NoRegister();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UMovieSceneAudioCaptureProtocolBase();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UNullAudioCaptureProtocol();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UNullAudioCaptureProtocol_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieSceneCapture();
// End Cross Module References
	void UNullAudioCaptureProtocol::StaticRegisterNativesUNullAudioCaptureProtocol()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNullAudioCaptureProtocol);
	UClass* Z_Construct_UClass_UNullAudioCaptureProtocol_NoRegister()
	{
		return UNullAudioCaptureProtocol::StaticClass();
	}
	struct Z_Construct_UClass_UNullAudioCaptureProtocol_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNullAudioCaptureProtocol_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneAudioCaptureProtocolBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneCapture,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNullAudioCaptureProtocol_Statics::Class_MetaDataParams[] = {
		{ "CommandLineID", "NullAudio" },
		{ "Comment", "/**\n * This is a null audio capture implementation which skips capturing audio. The MovieSceneCapture is explicitly\n * aware of this type and will skip processing an audio pass if this is specified.\n */" },
		{ "DisplayName", "No Audio" },
		{ "IncludePath", "Protocols/AudioCaptureProtocol.h" },
		{ "ModuleRelativePath", "Public/Protocols/AudioCaptureProtocol.h" },
		{ "ToolTip", "This is a null audio capture implementation which skips capturing audio. The MovieSceneCapture is explicitly\naware of this type and will skip processing an audio pass if this is specified." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNullAudioCaptureProtocol_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNullAudioCaptureProtocol>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNullAudioCaptureProtocol_Statics::ClassParams = {
		&UNullAudioCaptureProtocol::StaticClass,
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
		0x001004A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNullAudioCaptureProtocol_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNullAudioCaptureProtocol_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNullAudioCaptureProtocol()
	{
		if (!Z_Registration_Info_UClass_UNullAudioCaptureProtocol.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNullAudioCaptureProtocol.OuterSingleton, Z_Construct_UClass_UNullAudioCaptureProtocol_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNullAudioCaptureProtocol.OuterSingleton;
	}
	template<> MOVIESCENECAPTURE_API UClass* StaticClass<UNullAudioCaptureProtocol>()
	{
		return UNullAudioCaptureProtocol::StaticClass();
	}
	UNullAudioCaptureProtocol::UNullAudioCaptureProtocol(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNullAudioCaptureProtocol);
	UNullAudioCaptureProtocol::~UNullAudioCaptureProtocol() {}
	void UMasterAudioSubmixCaptureProtocol::StaticRegisterNativesUMasterAudioSubmixCaptureProtocol()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMasterAudioSubmixCaptureProtocol);
	UClass* Z_Construct_UClass_UMasterAudioSubmixCaptureProtocol_NoRegister()
	{
		return UMasterAudioSubmixCaptureProtocol::StaticClass();
	}
	struct Z_Construct_UClass_UMasterAudioSubmixCaptureProtocol_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMasterAudioSubmixCaptureProtocol_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneAudioCaptureProtocolBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneCapture,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMasterAudioSubmixCaptureProtocol_Statics::Class_MetaDataParams[] = {
		{ "CommandLineID", "MasterAudioSubmix" },
		{ "Comment", "/**\n* This is an experimental audio capture implementation which captures the final output from the master submix.\n* This requires that your sequence can be played back in real-time (when rendering is disabled). \n* If the sequence evaluation hitches the audio will become desynchronized due to their being more time passed \n* in real time (platform time) than in the sequence itself.\n*/" },
		{ "DisplayName", "Master Audio Submix" },
		{ "IncludePath", "Protocols/AudioCaptureProtocol.h" },
		{ "ModuleRelativePath", "Public/Protocols/AudioCaptureProtocol.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "This is an experimental audio capture implementation which captures the final output from the master submix.\nThis requires that your sequence can be played back in real-time (when rendering is disabled).\nIf the sequence evaluation hitches the audio will become desynchronized due to their being more time passed\nin real time (platform time) than in the sequence itself." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMasterAudioSubmixCaptureProtocol_Statics::NewProp_FileName_MetaData[] = {
		{ "Category", "Audio Options" },
		{ "ModuleRelativePath", "Public/Protocols/AudioCaptureProtocol.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMasterAudioSubmixCaptureProtocol_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0020080000004005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMasterAudioSubmixCaptureProtocol, FileName), METADATA_PARAMS(Z_Construct_UClass_UMasterAudioSubmixCaptureProtocol_Statics::NewProp_FileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMasterAudioSubmixCaptureProtocol_Statics::NewProp_FileName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMasterAudioSubmixCaptureProtocol_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMasterAudioSubmixCaptureProtocol_Statics::NewProp_FileName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMasterAudioSubmixCaptureProtocol_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMasterAudioSubmixCaptureProtocol>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMasterAudioSubmixCaptureProtocol_Statics::ClassParams = {
		&UMasterAudioSubmixCaptureProtocol::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMasterAudioSubmixCaptureProtocol_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMasterAudioSubmixCaptureProtocol_Statics::PropPointers),
		0,
		0x000804A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMasterAudioSubmixCaptureProtocol_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMasterAudioSubmixCaptureProtocol_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMasterAudioSubmixCaptureProtocol()
	{
		if (!Z_Registration_Info_UClass_UMasterAudioSubmixCaptureProtocol.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMasterAudioSubmixCaptureProtocol.OuterSingleton, Z_Construct_UClass_UMasterAudioSubmixCaptureProtocol_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMasterAudioSubmixCaptureProtocol.OuterSingleton;
	}
	template<> MOVIESCENECAPTURE_API UClass* StaticClass<UMasterAudioSubmixCaptureProtocol>()
	{
		return UMasterAudioSubmixCaptureProtocol::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMasterAudioSubmixCaptureProtocol);
	UMasterAudioSubmixCaptureProtocol::~UMasterAudioSubmixCaptureProtocol() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_AudioCaptureProtocol_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_AudioCaptureProtocol_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNullAudioCaptureProtocol, UNullAudioCaptureProtocol::StaticClass, TEXT("UNullAudioCaptureProtocol"), &Z_Registration_Info_UClass_UNullAudioCaptureProtocol, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNullAudioCaptureProtocol), 3468440471U) },
		{ Z_Construct_UClass_UMasterAudioSubmixCaptureProtocol, UMasterAudioSubmixCaptureProtocol::StaticClass, TEXT("UMasterAudioSubmixCaptureProtocol"), &Z_Registration_Info_UClass_UMasterAudioSubmixCaptureProtocol, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMasterAudioSubmixCaptureProtocol), 3902512781U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_AudioCaptureProtocol_h_3268574752(TEXT("/Script/MovieSceneCapture"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_AudioCaptureProtocol_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_AudioCaptureProtocol_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
