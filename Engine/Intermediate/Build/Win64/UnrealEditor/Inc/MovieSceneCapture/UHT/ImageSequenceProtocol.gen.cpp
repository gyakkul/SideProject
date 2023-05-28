// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Protocols/ImageSequenceProtocol.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeImageSequenceProtocol() {}
// Cross Module References
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UCompressedImageSequenceProtocol();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UCompressedImageSequenceProtocol_NoRegister();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UFrameGrabberProtocol();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UImageSequenceProtocol();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UImageSequenceProtocol_BMP();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UImageSequenceProtocol_BMP_NoRegister();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UImageSequenceProtocol_EXR();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UImageSequenceProtocol_EXR_NoRegister();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UImageSequenceProtocol_JPG();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UImageSequenceProtocol_JPG_NoRegister();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UImageSequenceProtocol_NoRegister();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UImageSequenceProtocol_PNG();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UImageSequenceProtocol_PNG_NoRegister();
	MOVIESCENECAPTURE_API UEnum* Z_Construct_UEnum_MovieSceneCapture_EHDRCaptureGamut();
	UPackage* Z_Construct_UPackage__Script_MovieSceneCapture();
// End Cross Module References
	void UImageSequenceProtocol::StaticRegisterNativesUImageSequenceProtocol()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UImageSequenceProtocol);
	UClass* Z_Construct_UClass_UImageSequenceProtocol_NoRegister()
	{
		return UImageSequenceProtocol::StaticClass();
	}
	struct Z_Construct_UClass_UImageSequenceProtocol_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UImageSequenceProtocol_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFrameGrabberProtocol,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneCapture,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImageSequenceProtocol_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Protocols/ImageSequenceProtocol.h" },
		{ "ModuleRelativePath", "Public/Protocols/ImageSequenceProtocol.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UImageSequenceProtocol_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UImageSequenceProtocol>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UImageSequenceProtocol_Statics::ClassParams = {
		&UImageSequenceProtocol::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UImageSequenceProtocol_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UImageSequenceProtocol_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UImageSequenceProtocol()
	{
		if (!Z_Registration_Info_UClass_UImageSequenceProtocol.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UImageSequenceProtocol.OuterSingleton, Z_Construct_UClass_UImageSequenceProtocol_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UImageSequenceProtocol.OuterSingleton;
	}
	template<> MOVIESCENECAPTURE_API UClass* StaticClass<UImageSequenceProtocol>()
	{
		return UImageSequenceProtocol::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UImageSequenceProtocol);
	UImageSequenceProtocol::~UImageSequenceProtocol() {}
	void UCompressedImageSequenceProtocol::StaticRegisterNativesUCompressedImageSequenceProtocol()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCompressedImageSequenceProtocol);
	UClass* Z_Construct_UClass_UCompressedImageSequenceProtocol_NoRegister()
	{
		return UCompressedImageSequenceProtocol::StaticClass();
	}
	struct Z_Construct_UClass_UCompressedImageSequenceProtocol_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompressionQuality_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CompressionQuality;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCompressedImageSequenceProtocol_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UImageSequenceProtocol,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneCapture,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompressedImageSequenceProtocol_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Protocols/ImageSequenceProtocol.h" },
		{ "ModuleRelativePath", "Public/Protocols/ImageSequenceProtocol.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompressedImageSequenceProtocol_Statics::NewProp_CompressionQuality_MetaData[] = {
		{ "Category", "ImageSettings" },
		{ "ClampMax", "100" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Level of compression to apply to the image, between 1 (worst quality, best compression) and 100 (best quality, worst compression)*/" },
		{ "ModuleRelativePath", "Public/Protocols/ImageSequenceProtocol.h" },
		{ "ToolTip", "Level of compression to apply to the image, between 1 (worst quality, best compression) and 100 (best quality, worst compression)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCompressedImageSequenceProtocol_Statics::NewProp_CompressionQuality = { "CompressionQuality", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCompressedImageSequenceProtocol, CompressionQuality), METADATA_PARAMS(Z_Construct_UClass_UCompressedImageSequenceProtocol_Statics::NewProp_CompressionQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCompressedImageSequenceProtocol_Statics::NewProp_CompressionQuality_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCompressedImageSequenceProtocol_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompressedImageSequenceProtocol_Statics::NewProp_CompressionQuality,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCompressedImageSequenceProtocol_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCompressedImageSequenceProtocol>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCompressedImageSequenceProtocol_Statics::ClassParams = {
		&UCompressedImageSequenceProtocol::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCompressedImageSequenceProtocol_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCompressedImageSequenceProtocol_Statics::PropPointers),
		0,
		0x001004A5u,
		METADATA_PARAMS(Z_Construct_UClass_UCompressedImageSequenceProtocol_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCompressedImageSequenceProtocol_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCompressedImageSequenceProtocol()
	{
		if (!Z_Registration_Info_UClass_UCompressedImageSequenceProtocol.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCompressedImageSequenceProtocol.OuterSingleton, Z_Construct_UClass_UCompressedImageSequenceProtocol_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCompressedImageSequenceProtocol.OuterSingleton;
	}
	template<> MOVIESCENECAPTURE_API UClass* StaticClass<UCompressedImageSequenceProtocol>()
	{
		return UCompressedImageSequenceProtocol::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCompressedImageSequenceProtocol);
	UCompressedImageSequenceProtocol::~UCompressedImageSequenceProtocol() {}
	void UImageSequenceProtocol_BMP::StaticRegisterNativesUImageSequenceProtocol_BMP()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UImageSequenceProtocol_BMP);
	UClass* Z_Construct_UClass_UImageSequenceProtocol_BMP_NoRegister()
	{
		return UImageSequenceProtocol_BMP::StaticClass();
	}
	struct Z_Construct_UClass_UImageSequenceProtocol_BMP_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UImageSequenceProtocol_BMP_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UImageSequenceProtocol,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneCapture,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImageSequenceProtocol_BMP_Statics::Class_MetaDataParams[] = {
		{ "CommandLineID", "BMP" },
		{ "DisplayName", "Image Sequence (bmp)" },
		{ "IncludePath", "Protocols/ImageSequenceProtocol.h" },
		{ "ModuleRelativePath", "Public/Protocols/ImageSequenceProtocol.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UImageSequenceProtocol_BMP_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UImageSequenceProtocol_BMP>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UImageSequenceProtocol_BMP_Statics::ClassParams = {
		&UImageSequenceProtocol_BMP::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UImageSequenceProtocol_BMP_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UImageSequenceProtocol_BMP_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UImageSequenceProtocol_BMP()
	{
		if (!Z_Registration_Info_UClass_UImageSequenceProtocol_BMP.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UImageSequenceProtocol_BMP.OuterSingleton, Z_Construct_UClass_UImageSequenceProtocol_BMP_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UImageSequenceProtocol_BMP.OuterSingleton;
	}
	template<> MOVIESCENECAPTURE_API UClass* StaticClass<UImageSequenceProtocol_BMP>()
	{
		return UImageSequenceProtocol_BMP::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UImageSequenceProtocol_BMP);
	UImageSequenceProtocol_BMP::~UImageSequenceProtocol_BMP() {}
	void UImageSequenceProtocol_PNG::StaticRegisterNativesUImageSequenceProtocol_PNG()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UImageSequenceProtocol_PNG);
	UClass* Z_Construct_UClass_UImageSequenceProtocol_PNG_NoRegister()
	{
		return UImageSequenceProtocol_PNG::StaticClass();
	}
	struct Z_Construct_UClass_UImageSequenceProtocol_PNG_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UImageSequenceProtocol_PNG_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCompressedImageSequenceProtocol,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneCapture,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImageSequenceProtocol_PNG_Statics::Class_MetaDataParams[] = {
		{ "CommandLineID", "PNG" },
		{ "DisplayName", "Image Sequence (png)" },
		{ "IncludePath", "Protocols/ImageSequenceProtocol.h" },
		{ "ModuleRelativePath", "Public/Protocols/ImageSequenceProtocol.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UImageSequenceProtocol_PNG_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UImageSequenceProtocol_PNG>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UImageSequenceProtocol_PNG_Statics::ClassParams = {
		&UImageSequenceProtocol_PNG::StaticClass,
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
		0x001004A4u,
		METADATA_PARAMS(Z_Construct_UClass_UImageSequenceProtocol_PNG_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UImageSequenceProtocol_PNG_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UImageSequenceProtocol_PNG()
	{
		if (!Z_Registration_Info_UClass_UImageSequenceProtocol_PNG.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UImageSequenceProtocol_PNG.OuterSingleton, Z_Construct_UClass_UImageSequenceProtocol_PNG_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UImageSequenceProtocol_PNG.OuterSingleton;
	}
	template<> MOVIESCENECAPTURE_API UClass* StaticClass<UImageSequenceProtocol_PNG>()
	{
		return UImageSequenceProtocol_PNG::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UImageSequenceProtocol_PNG);
	UImageSequenceProtocol_PNG::~UImageSequenceProtocol_PNG() {}
	void UImageSequenceProtocol_JPG::StaticRegisterNativesUImageSequenceProtocol_JPG()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UImageSequenceProtocol_JPG);
	UClass* Z_Construct_UClass_UImageSequenceProtocol_JPG_NoRegister()
	{
		return UImageSequenceProtocol_JPG::StaticClass();
	}
	struct Z_Construct_UClass_UImageSequenceProtocol_JPG_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UImageSequenceProtocol_JPG_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCompressedImageSequenceProtocol,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneCapture,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImageSequenceProtocol_JPG_Statics::Class_MetaDataParams[] = {
		{ "CommandLineID", "JPG" },
		{ "DisplayName", "Image Sequence (jpg)" },
		{ "IncludePath", "Protocols/ImageSequenceProtocol.h" },
		{ "ModuleRelativePath", "Public/Protocols/ImageSequenceProtocol.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UImageSequenceProtocol_JPG_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UImageSequenceProtocol_JPG>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UImageSequenceProtocol_JPG_Statics::ClassParams = {
		&UImageSequenceProtocol_JPG::StaticClass,
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
		0x001004A4u,
		METADATA_PARAMS(Z_Construct_UClass_UImageSequenceProtocol_JPG_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UImageSequenceProtocol_JPG_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UImageSequenceProtocol_JPG()
	{
		if (!Z_Registration_Info_UClass_UImageSequenceProtocol_JPG.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UImageSequenceProtocol_JPG.OuterSingleton, Z_Construct_UClass_UImageSequenceProtocol_JPG_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UImageSequenceProtocol_JPG.OuterSingleton;
	}
	template<> MOVIESCENECAPTURE_API UClass* StaticClass<UImageSequenceProtocol_JPG>()
	{
		return UImageSequenceProtocol_JPG::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UImageSequenceProtocol_JPG);
	UImageSequenceProtocol_JPG::~UImageSequenceProtocol_JPG() {}
	void UImageSequenceProtocol_EXR::StaticRegisterNativesUImageSequenceProtocol_EXR()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UImageSequenceProtocol_EXR);
	UClass* Z_Construct_UClass_UImageSequenceProtocol_EXR_NoRegister()
	{
		return UImageSequenceProtocol_EXR::StaticClass();
	}
	struct Z_Construct_UClass_UImageSequenceProtocol_EXR_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCompressed_MetaData[];
#endif
		static void NewProp_bCompressed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCompressed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CaptureGamut_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CaptureGamut;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UImageSequenceProtocol_EXR_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UImageSequenceProtocol,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneCapture,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImageSequenceProtocol_EXR_Statics::Class_MetaDataParams[] = {
		{ "CommandLineID", "EXR" },
		{ "DisplayName", "Image Sequence (exr)" },
		{ "IncludePath", "Protocols/ImageSequenceProtocol.h" },
		{ "ModuleRelativePath", "Public/Protocols/ImageSequenceProtocol.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImageSequenceProtocol_EXR_Statics::NewProp_bCompressed_MetaData[] = {
		{ "Category", "ImageSettings" },
		{ "Comment", "/** Whether to write out compressed or uncompressed EXRs */" },
		{ "ModuleRelativePath", "Public/Protocols/ImageSequenceProtocol.h" },
		{ "ToolTip", "Whether to write out compressed or uncompressed EXRs" },
	};
#endif
	void Z_Construct_UClass_UImageSequenceProtocol_EXR_Statics::NewProp_bCompressed_SetBit(void* Obj)
	{
		((UImageSequenceProtocol_EXR*)Obj)->bCompressed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UImageSequenceProtocol_EXR_Statics::NewProp_bCompressed = { "bCompressed", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UImageSequenceProtocol_EXR), &Z_Construct_UClass_UImageSequenceProtocol_EXR_Statics::NewProp_bCompressed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UImageSequenceProtocol_EXR_Statics::NewProp_bCompressed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UImageSequenceProtocol_EXR_Statics::NewProp_bCompressed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImageSequenceProtocol_EXR_Statics::NewProp_CaptureGamut_MetaData[] = {
		{ "Category", "ImageSettings" },
		{ "Comment", "/** The color gamut to use when storing HDR captured data. */" },
		{ "ModuleRelativePath", "Public/Protocols/ImageSequenceProtocol.h" },
		{ "ToolTip", "The color gamut to use when storing HDR captured data." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UImageSequenceProtocol_EXR_Statics::NewProp_CaptureGamut = { "CaptureGamut", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UImageSequenceProtocol_EXR, CaptureGamut), Z_Construct_UEnum_MovieSceneCapture_EHDRCaptureGamut, METADATA_PARAMS(Z_Construct_UClass_UImageSequenceProtocol_EXR_Statics::NewProp_CaptureGamut_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UImageSequenceProtocol_EXR_Statics::NewProp_CaptureGamut_MetaData)) }; // 2905175880
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UImageSequenceProtocol_EXR_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImageSequenceProtocol_EXR_Statics::NewProp_bCompressed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImageSequenceProtocol_EXR_Statics::NewProp_CaptureGamut,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UImageSequenceProtocol_EXR_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UImageSequenceProtocol_EXR>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UImageSequenceProtocol_EXR_Statics::ClassParams = {
		&UImageSequenceProtocol_EXR::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UImageSequenceProtocol_EXR_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UImageSequenceProtocol_EXR_Statics::PropPointers),
		0,
		0x001004A4u,
		METADATA_PARAMS(Z_Construct_UClass_UImageSequenceProtocol_EXR_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UImageSequenceProtocol_EXR_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UImageSequenceProtocol_EXR()
	{
		if (!Z_Registration_Info_UClass_UImageSequenceProtocol_EXR.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UImageSequenceProtocol_EXR.OuterSingleton, Z_Construct_UClass_UImageSequenceProtocol_EXR_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UImageSequenceProtocol_EXR.OuterSingleton;
	}
	template<> MOVIESCENECAPTURE_API UClass* StaticClass<UImageSequenceProtocol_EXR>()
	{
		return UImageSequenceProtocol_EXR::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UImageSequenceProtocol_EXR);
	UImageSequenceProtocol_EXR::~UImageSequenceProtocol_EXR() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UImageSequenceProtocol, UImageSequenceProtocol::StaticClass, TEXT("UImageSequenceProtocol"), &Z_Registration_Info_UClass_UImageSequenceProtocol, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UImageSequenceProtocol), 3730776514U) },
		{ Z_Construct_UClass_UCompressedImageSequenceProtocol, UCompressedImageSequenceProtocol::StaticClass, TEXT("UCompressedImageSequenceProtocol"), &Z_Registration_Info_UClass_UCompressedImageSequenceProtocol, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCompressedImageSequenceProtocol), 1425331970U) },
		{ Z_Construct_UClass_UImageSequenceProtocol_BMP, UImageSequenceProtocol_BMP::StaticClass, TEXT("UImageSequenceProtocol_BMP"), &Z_Registration_Info_UClass_UImageSequenceProtocol_BMP, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UImageSequenceProtocol_BMP), 3115521954U) },
		{ Z_Construct_UClass_UImageSequenceProtocol_PNG, UImageSequenceProtocol_PNG::StaticClass, TEXT("UImageSequenceProtocol_PNG"), &Z_Registration_Info_UClass_UImageSequenceProtocol_PNG, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UImageSequenceProtocol_PNG), 3154262380U) },
		{ Z_Construct_UClass_UImageSequenceProtocol_JPG, UImageSequenceProtocol_JPG::StaticClass, TEXT("UImageSequenceProtocol_JPG"), &Z_Registration_Info_UClass_UImageSequenceProtocol_JPG, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UImageSequenceProtocol_JPG), 78867172U) },
		{ Z_Construct_UClass_UImageSequenceProtocol_EXR, UImageSequenceProtocol_EXR::StaticClass, TEXT("UImageSequenceProtocol_EXR"), &Z_Registration_Info_UClass_UImageSequenceProtocol_EXR, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UImageSequenceProtocol_EXR), 1243088965U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_3551440378(TEXT("/Script/MovieSceneCapture"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_ImageSequenceProtocol_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
