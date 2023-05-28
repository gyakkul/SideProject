// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/AvidDNxEncoderProtocol.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAvidDNxEncoderProtocol() {}
// Cross Module References
	AVIDDNXMEDIA_API UClass* Z_Construct_UClass_UAvidDNxEncoderProtocol();
	AVIDDNXMEDIA_API UClass* Z_Construct_UClass_UAvidDNxEncoderProtocol_NoRegister();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UFrameGrabberProtocol();
	UPackage* Z_Construct_UPackage__Script_AvidDNxMedia();
// End Cross Module References
	void UAvidDNxEncoderProtocol::StaticRegisterNativesUAvidDNxEncoderProtocol()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAvidDNxEncoderProtocol);
	UClass* Z_Construct_UClass_UAvidDNxEncoderProtocol_NoRegister()
	{
		return UAvidDNxEncoderProtocol::StaticClass();
	}
	struct Z_Construct_UClass_UAvidDNxEncoderProtocol_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUncompressed_MetaData[];
#endif
		static void NewProp_bUncompressed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUncompressed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfEncodingThreads_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_NumberOfEncodingThreads;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAvidDNxEncoderProtocol_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFrameGrabberProtocol,
		(UObject* (*)())Z_Construct_UPackage__Script_AvidDNxMedia,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAvidDNxEncoderProtocol_Statics::Class_MetaDataParams[] = {
		{ "CommandLineID", "AvidDNx" },
		{ "DisplayName", "Avid DNx Encoder (mxf)" },
		{ "IncludePath", "AvidDNxEncoderProtocol.h" },
		{ "ModuleRelativePath", "Private/AvidDNxEncoderProtocol.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAvidDNxEncoderProtocol_Statics::NewProp_bUncompressed_MetaData[] = {
		{ "Category", "Avid DNX Settings" },
		{ "ModuleRelativePath", "Private/AvidDNxEncoderProtocol.h" },
	};
#endif
	void Z_Construct_UClass_UAvidDNxEncoderProtocol_Statics::NewProp_bUncompressed_SetBit(void* Obj)
	{
		((UAvidDNxEncoderProtocol*)Obj)->bUncompressed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAvidDNxEncoderProtocol_Statics::NewProp_bUncompressed = { "bUncompressed", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAvidDNxEncoderProtocol), &Z_Construct_UClass_UAvidDNxEncoderProtocol_Statics::NewProp_bUncompressed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAvidDNxEncoderProtocol_Statics::NewProp_bUncompressed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAvidDNxEncoderProtocol_Statics::NewProp_bUncompressed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAvidDNxEncoderProtocol_Statics::NewProp_NumberOfEncodingThreads_MetaData[] = {
		{ "Category", "Avid DNX Settings" },
		{ "ClampMax", "64" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Private/AvidDNxEncoderProtocol.h" },
		{ "UIMax", "64" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAvidDNxEncoderProtocol_Statics::NewProp_NumberOfEncodingThreads = { "NumberOfEncodingThreads", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAvidDNxEncoderProtocol, NumberOfEncodingThreads), nullptr, METADATA_PARAMS(Z_Construct_UClass_UAvidDNxEncoderProtocol_Statics::NewProp_NumberOfEncodingThreads_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAvidDNxEncoderProtocol_Statics::NewProp_NumberOfEncodingThreads_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAvidDNxEncoderProtocol_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAvidDNxEncoderProtocol_Statics::NewProp_bUncompressed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAvidDNxEncoderProtocol_Statics::NewProp_NumberOfEncodingThreads,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAvidDNxEncoderProtocol_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAvidDNxEncoderProtocol>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAvidDNxEncoderProtocol_Statics::ClassParams = {
		&UAvidDNxEncoderProtocol::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAvidDNxEncoderProtocol_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAvidDNxEncoderProtocol_Statics::PropPointers),
		0,
		0x001004A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAvidDNxEncoderProtocol_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAvidDNxEncoderProtocol_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAvidDNxEncoderProtocol()
	{
		if (!Z_Registration_Info_UClass_UAvidDNxEncoderProtocol.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAvidDNxEncoderProtocol.OuterSingleton, Z_Construct_UClass_UAvidDNxEncoderProtocol_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAvidDNxEncoderProtocol.OuterSingleton;
	}
	template<> AVIDDNXMEDIA_API UClass* StaticClass<UAvidDNxEncoderProtocol>()
	{
		return UAvidDNxEncoderProtocol::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAvidDNxEncoderProtocol);
	UAvidDNxEncoderProtocol::~UAvidDNxEncoderProtocol() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AvidDNxMedia_Source_Source_Private_AvidDNxEncoderProtocol_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AvidDNxMedia_Source_Source_Private_AvidDNxEncoderProtocol_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAvidDNxEncoderProtocol, UAvidDNxEncoderProtocol::StaticClass, TEXT("UAvidDNxEncoderProtocol"), &Z_Registration_Info_UClass_UAvidDNxEncoderProtocol, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAvidDNxEncoderProtocol), 311801228U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AvidDNxMedia_Source_Source_Private_AvidDNxEncoderProtocol_h_550849624(TEXT("/Script/AvidDNxMedia"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AvidDNxMedia_Source_Source_Private_AvidDNxEncoderProtocol_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AvidDNxMedia_Source_Source_Private_AvidDNxEncoderProtocol_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
