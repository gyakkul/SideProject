// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Protocols/VideoCaptureProtocol.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVideoCaptureProtocol() {}
// Cross Module References
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UFrameGrabberProtocol();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UVideoCaptureProtocol();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UVideoCaptureProtocol_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieSceneCapture();
// End Cross Module References
	void UVideoCaptureProtocol::StaticRegisterNativesUVideoCaptureProtocol()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVideoCaptureProtocol);
	UClass* Z_Construct_UClass_UVideoCaptureProtocol_NoRegister()
	{
		return UVideoCaptureProtocol::StaticClass();
	}
	struct Z_Construct_UClass_UVideoCaptureProtocol_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseCompression_MetaData[];
#endif
		static void NewProp_bUseCompression_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCompression;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompressionQuality_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CompressionQuality;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVideoCaptureProtocol_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFrameGrabberProtocol,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneCapture,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVideoCaptureProtocol_Statics::Class_MetaDataParams[] = {
		{ "CommandLineID", "Video" },
		{ "DisplayName", "Video Sequence (avi)" },
		{ "IncludePath", "Protocols/VideoCaptureProtocol.h" },
		{ "ModuleRelativePath", "Public/Protocols/VideoCaptureProtocol.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVideoCaptureProtocol_Statics::NewProp_bUseCompression_MetaData[] = {
		{ "Category", "VideoSettings" },
		{ "ModuleRelativePath", "Public/Protocols/VideoCaptureProtocol.h" },
	};
#endif
	void Z_Construct_UClass_UVideoCaptureProtocol_Statics::NewProp_bUseCompression_SetBit(void* Obj)
	{
		((UVideoCaptureProtocol*)Obj)->bUseCompression = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVideoCaptureProtocol_Statics::NewProp_bUseCompression = { "bUseCompression", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVideoCaptureProtocol), &Z_Construct_UClass_UVideoCaptureProtocol_Statics::NewProp_bUseCompression_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVideoCaptureProtocol_Statics::NewProp_bUseCompression_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVideoCaptureProtocol_Statics::NewProp_bUseCompression_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVideoCaptureProtocol_Statics::NewProp_CompressionQuality_MetaData[] = {
		{ "Category", "VideoSettings" },
		{ "ClampMax", "100" },
		{ "ClampMin", "1" },
		{ "EditCondition", "bUseCompression" },
		{ "ModuleRelativePath", "Public/Protocols/VideoCaptureProtocol.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVideoCaptureProtocol_Statics::NewProp_CompressionQuality = { "CompressionQuality", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVideoCaptureProtocol, CompressionQuality), METADATA_PARAMS(Z_Construct_UClass_UVideoCaptureProtocol_Statics::NewProp_CompressionQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVideoCaptureProtocol_Statics::NewProp_CompressionQuality_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVideoCaptureProtocol_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVideoCaptureProtocol_Statics::NewProp_bUseCompression,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVideoCaptureProtocol_Statics::NewProp_CompressionQuality,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVideoCaptureProtocol_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVideoCaptureProtocol>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVideoCaptureProtocol_Statics::ClassParams = {
		&UVideoCaptureProtocol::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVideoCaptureProtocol_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVideoCaptureProtocol_Statics::PropPointers),
		0,
		0x001004A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVideoCaptureProtocol_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVideoCaptureProtocol_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVideoCaptureProtocol()
	{
		if (!Z_Registration_Info_UClass_UVideoCaptureProtocol.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVideoCaptureProtocol.OuterSingleton, Z_Construct_UClass_UVideoCaptureProtocol_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVideoCaptureProtocol.OuterSingleton;
	}
	template<> MOVIESCENECAPTURE_API UClass* StaticClass<UVideoCaptureProtocol>()
	{
		return UVideoCaptureProtocol::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVideoCaptureProtocol);
	UVideoCaptureProtocol::~UVideoCaptureProtocol() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_VideoCaptureProtocol_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_VideoCaptureProtocol_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVideoCaptureProtocol, UVideoCaptureProtocol::StaticClass, TEXT("UVideoCaptureProtocol"), &Z_Registration_Info_UClass_UVideoCaptureProtocol, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVideoCaptureProtocol), 632977107U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_VideoCaptureProtocol_h_3482567801(TEXT("/Script/MovieSceneCapture"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_VideoCaptureProtocol_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_VideoCaptureProtocol_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
