// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlackmagicTimecodeProvider.h"
#include "MediaIOCoreDefinitions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlackmagicTimecodeProvider() {}
// Cross Module References
	BLACKMAGICMEDIA_API UClass* Z_Construct_UClass_UBlackmagicTimecodeProvider();
	BLACKMAGICMEDIA_API UClass* Z_Construct_UClass_UBlackmagicTimecodeProvider_NoRegister();
	MEDIAIOCORE_API UEnum* Z_Construct_UEnum_MediaIOCore_EMediaIOTimecodeFormat();
	MEDIAIOCORE_API UScriptStruct* Z_Construct_UScriptStruct_FMediaIOConfiguration();
	MEDIAIOCORE_API UScriptStruct* Z_Construct_UScriptStruct_FMediaIOVideoTimecodeConfiguration();
	TIMEMANAGEMENT_API UClass* Z_Construct_UClass_UGenlockedTimecodeProvider();
	UPackage* Z_Construct_UPackage__Script_BlackmagicMedia();
// End Cross Module References
	void UBlackmagicTimecodeProvider::StaticRegisterNativesUBlackmagicTimecodeProvider()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlackmagicTimecodeProvider);
	UClass* Z_Construct_UClass_UBlackmagicTimecodeProvider_NoRegister()
	{
		return UBlackmagicTimecodeProvider::StaticClass();
	}
	struct Z_Construct_UClass_UBlackmagicTimecodeProvider_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaConfiguration_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MediaConfiguration;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TimecodeFormat_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimecodeFormat_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TimecodeFormat;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimecodeConfiguration_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TimecodeConfiguration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoDetectTimecode_MetaData[];
#endif
		static void NewProp_bAutoDetectTimecode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoDetectTimecode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlackmagicTimecodeProvider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGenlockedTimecodeProvider,
		(UObject* (*)())Z_Construct_UPackage__Script_BlackmagicMedia,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlackmagicTimecodeProvider_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Class to fetch a timecode via a Blackmagic Design card.\n */" },
		{ "DisplayName", "Blackmagic SDI Input" },
		{ "IncludePath", "BlackmagicTimecodeProvider.h" },
		{ "IsBlueprintBase", "true" },
		{ "MediaIOCustomLayout", "Blackmagic" },
		{ "ModuleRelativePath", "Public/BlackmagicTimecodeProvider.h" },
		{ "ToolTip", "Class to fetch a timecode via a Blackmagic Design card." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlackmagicTimecodeProvider_Statics::NewProp_MediaConfiguration_MetaData[] = {
		{ "Comment", "/** The device, port and video settings that correspond to the input. */" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/BlackmagicTimecodeProvider.h" },
		{ "ToolTip", "The device, port and video settings that correspond to the input." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlackmagicTimecodeProvider_Statics::NewProp_MediaConfiguration = { "MediaConfiguration", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlackmagicTimecodeProvider, MediaConfiguration_DEPRECATED), Z_Construct_UScriptStruct_FMediaIOConfiguration, METADATA_PARAMS(Z_Construct_UClass_UBlackmagicTimecodeProvider_Statics::NewProp_MediaConfiguration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlackmagicTimecodeProvider_Statics::NewProp_MediaConfiguration_MetaData)) }; // 4044872615
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UBlackmagicTimecodeProvider_Statics::NewProp_TimecodeFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlackmagicTimecodeProvider_Statics::NewProp_TimecodeFormat_MetaData[] = {
		{ "Comment", "/** Timecode format to read from a video signal. */" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/BlackmagicTimecodeProvider.h" },
		{ "ToolTip", "Timecode format to read from a video signal." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBlackmagicTimecodeProvider_Statics::NewProp_TimecodeFormat = { "TimecodeFormat", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlackmagicTimecodeProvider, TimecodeFormat_DEPRECATED), Z_Construct_UEnum_MediaIOCore_EMediaIOTimecodeFormat, METADATA_PARAMS(Z_Construct_UClass_UBlackmagicTimecodeProvider_Statics::NewProp_TimecodeFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlackmagicTimecodeProvider_Statics::NewProp_TimecodeFormat_MetaData)) }; // 1430363538
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlackmagicTimecodeProvider_Statics::NewProp_TimecodeConfiguration_MetaData[] = {
		{ "Category", "Blackmagic" },
		{ "Comment", "/** Timecode format to read from a video signal. */" },
		{ "ModuleRelativePath", "Public/BlackmagicTimecodeProvider.h" },
		{ "ToolTip", "Timecode format to read from a video signal." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlackmagicTimecodeProvider_Statics::NewProp_TimecodeConfiguration = { "TimecodeConfiguration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlackmagicTimecodeProvider, TimecodeConfiguration), Z_Construct_UScriptStruct_FMediaIOVideoTimecodeConfiguration, METADATA_PARAMS(Z_Construct_UClass_UBlackmagicTimecodeProvider_Statics::NewProp_TimecodeConfiguration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlackmagicTimecodeProvider_Statics::NewProp_TimecodeConfiguration_MetaData)) }; // 3209305699
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlackmagicTimecodeProvider_Statics::NewProp_bAutoDetectTimecode_MetaData[] = {
		{ "ModuleRelativePath", "Public/BlackmagicTimecodeProvider.h" },
	};
#endif
	void Z_Construct_UClass_UBlackmagicTimecodeProvider_Statics::NewProp_bAutoDetectTimecode_SetBit(void* Obj)
	{
		((UBlackmagicTimecodeProvider*)Obj)->bAutoDetectTimecode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlackmagicTimecodeProvider_Statics::NewProp_bAutoDetectTimecode = { "bAutoDetectTimecode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBlackmagicTimecodeProvider), &Z_Construct_UClass_UBlackmagicTimecodeProvider_Statics::NewProp_bAutoDetectTimecode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlackmagicTimecodeProvider_Statics::NewProp_bAutoDetectTimecode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlackmagicTimecodeProvider_Statics::NewProp_bAutoDetectTimecode_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlackmagicTimecodeProvider_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackmagicTimecodeProvider_Statics::NewProp_MediaConfiguration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackmagicTimecodeProvider_Statics::NewProp_TimecodeFormat_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackmagicTimecodeProvider_Statics::NewProp_TimecodeFormat,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackmagicTimecodeProvider_Statics::NewProp_TimecodeConfiguration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackmagicTimecodeProvider_Statics::NewProp_bAutoDetectTimecode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlackmagicTimecodeProvider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlackmagicTimecodeProvider>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlackmagicTimecodeProvider_Statics::ClassParams = {
		&UBlackmagicTimecodeProvider::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBlackmagicTimecodeProvider_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBlackmagicTimecodeProvider_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBlackmagicTimecodeProvider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlackmagicTimecodeProvider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlackmagicTimecodeProvider()
	{
		if (!Z_Registration_Info_UClass_UBlackmagicTimecodeProvider.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlackmagicTimecodeProvider.OuterSingleton, Z_Construct_UClass_UBlackmagicTimecodeProvider_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBlackmagicTimecodeProvider.OuterSingleton;
	}
	template<> BLACKMAGICMEDIA_API UClass* StaticClass<UBlackmagicTimecodeProvider>()
	{
		return UBlackmagicTimecodeProvider::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlackmagicTimecodeProvider);
	UBlackmagicTimecodeProvider::~UBlackmagicTimecodeProvider() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMedia_Public_BlackmagicTimecodeProvider_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMedia_Public_BlackmagicTimecodeProvider_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBlackmagicTimecodeProvider, UBlackmagicTimecodeProvider::StaticClass, TEXT("UBlackmagicTimecodeProvider"), &Z_Registration_Info_UClass_UBlackmagicTimecodeProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlackmagicTimecodeProvider), 4256812501U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMedia_Public_BlackmagicTimecodeProvider_h_377035017(TEXT("/Script/BlackmagicMedia"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMedia_Public_BlackmagicTimecodeProvider_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMedia_Public_BlackmagicTimecodeProvider_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
