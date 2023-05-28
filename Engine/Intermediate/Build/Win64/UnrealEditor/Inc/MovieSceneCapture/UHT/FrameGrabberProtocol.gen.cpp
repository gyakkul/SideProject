// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Protocols/FrameGrabberProtocol.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFrameGrabberProtocol() {}
// Cross Module References
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UFrameGrabberProtocol();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UFrameGrabberProtocol_NoRegister();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UMovieSceneImageCaptureProtocolBase();
	UPackage* Z_Construct_UPackage__Script_MovieSceneCapture();
// End Cross Module References
	void UFrameGrabberProtocol::StaticRegisterNativesUFrameGrabberProtocol()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFrameGrabberProtocol);
	UClass* Z_Construct_UClass_UFrameGrabberProtocol_NoRegister()
	{
		return UFrameGrabberProtocol::StaticClass();
	}
	struct Z_Construct_UClass_UFrameGrabberProtocol_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFrameGrabberProtocol_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneImageCaptureProtocolBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneCapture,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFrameGrabberProtocol_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Protocols/FrameGrabberProtocol.h" },
		{ "ModuleRelativePath", "Public/Protocols/FrameGrabberProtocol.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFrameGrabberProtocol_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFrameGrabberProtocol>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFrameGrabberProtocol_Statics::ClassParams = {
		&UFrameGrabberProtocol::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001004A1u,
		METADATA_PARAMS(Z_Construct_UClass_UFrameGrabberProtocol_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFrameGrabberProtocol_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFrameGrabberProtocol()
	{
		if (!Z_Registration_Info_UClass_UFrameGrabberProtocol.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFrameGrabberProtocol.OuterSingleton, Z_Construct_UClass_UFrameGrabberProtocol_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFrameGrabberProtocol.OuterSingleton;
	}
	template<> MOVIESCENECAPTURE_API UClass* StaticClass<UFrameGrabberProtocol>()
	{
		return UFrameGrabberProtocol::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFrameGrabberProtocol);
	UFrameGrabberProtocol::~UFrameGrabberProtocol() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_FrameGrabberProtocol_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_FrameGrabberProtocol_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFrameGrabberProtocol, UFrameGrabberProtocol::StaticClass, TEXT("UFrameGrabberProtocol"), &Z_Registration_Info_UClass_UFrameGrabberProtocol, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFrameGrabberProtocol), 4184540488U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_FrameGrabberProtocol_h_2197542271(TEXT("/Script/MovieSceneCapture"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_FrameGrabberProtocol_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_FrameGrabberProtocol_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
