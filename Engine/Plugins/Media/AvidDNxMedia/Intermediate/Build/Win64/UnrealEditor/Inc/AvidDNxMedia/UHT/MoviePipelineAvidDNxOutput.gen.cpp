// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/MoviePipelineAvidDNxOutput.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoviePipelineAvidDNxOutput() {}
// Cross Module References
	AVIDDNXMEDIA_API UClass* Z_Construct_UClass_UMoviePipelineAvidDNxOutput();
	AVIDDNXMEDIA_API UClass* Z_Construct_UClass_UMoviePipelineAvidDNxOutput_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineVideoOutputBase();
	UPackage* Z_Construct_UPackage__Script_AvidDNxMedia();
// End Cross Module References
	void UMoviePipelineAvidDNxOutput::StaticRegisterNativesUMoviePipelineAvidDNxOutput()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMoviePipelineAvidDNxOutput);
	UClass* Z_Construct_UClass_UMoviePipelineAvidDNxOutput_NoRegister()
	{
		return UMoviePipelineAvidDNxOutput::StaticClass();
	}
	struct Z_Construct_UClass_UMoviePipelineAvidDNxOutput_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfEncodingThreads_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfEncodingThreads;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoviePipelineAvidDNxOutput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMoviePipelineVideoOutputBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AvidDNxMedia,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineAvidDNxOutput_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Forward Declare\n" },
		{ "IncludePath", "MoviePipelineAvidDNxOutput.h" },
		{ "ModuleRelativePath", "Private/MoviePipelineAvidDNxOutput.h" },
		{ "ToolTip", "Forward Declare" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineAvidDNxOutput_Statics::NewProp_bUseCompression_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Should we use a lossy compression for the output? */" },
		{ "ModuleRelativePath", "Private/MoviePipelineAvidDNxOutput.h" },
		{ "ToolTip", "Should we use a lossy compression for the output?" },
	};
#endif
	void Z_Construct_UClass_UMoviePipelineAvidDNxOutput_Statics::NewProp_bUseCompression_SetBit(void* Obj)
	{
		((UMoviePipelineAvidDNxOutput*)Obj)->bUseCompression = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoviePipelineAvidDNxOutput_Statics::NewProp_bUseCompression = { "bUseCompression", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMoviePipelineAvidDNxOutput), &Z_Construct_UClass_UMoviePipelineAvidDNxOutput_Statics::NewProp_bUseCompression_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineAvidDNxOutput_Statics::NewProp_bUseCompression_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineAvidDNxOutput_Statics::NewProp_bUseCompression_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineAvidDNxOutput_Statics::NewProp_NumberOfEncodingThreads_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "1" },
		{ "Comment", "/** How many threads should the AvidDNx Encoders use to encode frames? */" },
		{ "ModuleRelativePath", "Private/MoviePipelineAvidDNxOutput.h" },
		{ "ToolTip", "How many threads should the AvidDNx Encoders use to encode frames?" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMoviePipelineAvidDNxOutput_Statics::NewProp_NumberOfEncodingThreads = { "NumberOfEncodingThreads", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelineAvidDNxOutput, NumberOfEncodingThreads), METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineAvidDNxOutput_Statics::NewProp_NumberOfEncodingThreads_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineAvidDNxOutput_Statics::NewProp_NumberOfEncodingThreads_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoviePipelineAvidDNxOutput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineAvidDNxOutput_Statics::NewProp_bUseCompression,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineAvidDNxOutput_Statics::NewProp_NumberOfEncodingThreads,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoviePipelineAvidDNxOutput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoviePipelineAvidDNxOutput>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoviePipelineAvidDNxOutput_Statics::ClassParams = {
		&UMoviePipelineAvidDNxOutput::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMoviePipelineAvidDNxOutput_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineAvidDNxOutput_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineAvidDNxOutput_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineAvidDNxOutput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMoviePipelineAvidDNxOutput()
	{
		if (!Z_Registration_Info_UClass_UMoviePipelineAvidDNxOutput.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoviePipelineAvidDNxOutput.OuterSingleton, Z_Construct_UClass_UMoviePipelineAvidDNxOutput_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMoviePipelineAvidDNxOutput.OuterSingleton;
	}
	template<> AVIDDNXMEDIA_API UClass* StaticClass<UMoviePipelineAvidDNxOutput>()
	{
		return UMoviePipelineAvidDNxOutput::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoviePipelineAvidDNxOutput);
	UMoviePipelineAvidDNxOutput::~UMoviePipelineAvidDNxOutput() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AvidDNxMedia_Source_Source_Private_MoviePipelineAvidDNxOutput_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AvidDNxMedia_Source_Source_Private_MoviePipelineAvidDNxOutput_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMoviePipelineAvidDNxOutput, UMoviePipelineAvidDNxOutput::StaticClass, TEXT("UMoviePipelineAvidDNxOutput"), &Z_Registration_Info_UClass_UMoviePipelineAvidDNxOutput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoviePipelineAvidDNxOutput), 979568415U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AvidDNxMedia_Source_Source_Private_MoviePipelineAvidDNxOutput_h_3787289794(TEXT("/Script/AvidDNxMedia"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AvidDNxMedia_Source_Source_Private_MoviePipelineAvidDNxOutput_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AvidDNxMedia_Source_Source_Private_MoviePipelineAvidDNxOutput_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
