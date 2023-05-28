// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AjaTimecodeProvider.h"
#include "AjaDeviceProvider.h"
#include "MediaIOCoreDefinitions.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAjaTimecodeProvider() {}
// Cross Module References
	AJAMEDIA_API UClass* Z_Construct_UClass_UAjaTimecodeProvider();
	AJAMEDIA_API UClass* Z_Construct_UClass_UAjaTimecodeProvider_NoRegister();
	AJAMEDIA_API UScriptStruct* Z_Construct_UScriptStruct_FAjaMediaTimecodeConfiguration();
	AJAMEDIA_API UScriptStruct* Z_Construct_UScriptStruct_FAjaMediaTimecodeReference();
	ENGINE_API UClass* Z_Construct_UClass_UEngine_NoRegister();
	MEDIAIOCORE_API UScriptStruct* Z_Construct_UScriptStruct_FMediaIOVideoTimecodeConfiguration();
	TIMEMANAGEMENT_API UClass* Z_Construct_UClass_UGenlockedTimecodeProvider();
	UPackage* Z_Construct_UPackage__Script_AjaMedia();
// End Cross Module References
	void UAjaTimecodeProvider::StaticRegisterNativesUAjaTimecodeProvider()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAjaTimecodeProvider);
	UClass* Z_Construct_UClass_UAjaTimecodeProvider_NoRegister()
	{
		return UAjaTimecodeProvider::StaticClass();
	}
	struct Z_Construct_UClass_UAjaTimecodeProvider_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseDedicatedPin_MetaData[];
#endif
		static void NewProp_bUseDedicatedPin_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseDedicatedPin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseReferenceIn_MetaData[];
#endif
		static void NewProp_bUseReferenceIn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseReferenceIn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LTCConfiguration_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LTCConfiguration;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VideoConfiguration_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VideoConfiguration;
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
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitializedEngine_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InitializedEngine;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAjaTimecodeProvider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGenlockedTimecodeProvider,
		(UObject* (*)())Z_Construct_UPackage__Script_AjaMedia,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAjaTimecodeProvider_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Class to fetch a timecode via an AJA card.\n * When the signal is lost in the editor (not in PIE), the TimecodeProvider will try to re-synchronize every second.\n */" },
		{ "DisplayName", "AJA SDI Input" },
		{ "IncludePath", "AjaTimecodeProvider.h" },
		{ "IsBlueprintBase", "true" },
		{ "MediaIOCustomLayout", "AJA" },
		{ "ModuleRelativePath", "Public/AjaTimecodeProvider.h" },
		{ "ToolTip", "Class to fetch a timecode via an AJA card.\nWhen the signal is lost in the editor (not in PIE), the TimecodeProvider will try to re-synchronize every second." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAjaTimecodeProvider_Statics::NewProp_bUseDedicatedPin_MetaData[] = {
		{ "Category", "Timecode" },
		{ "Comment", "/**\n\x09 * Should we read the timecode from a dedicated LTC pin or an SDI input.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AjaTimecodeProvider.h" },
		{ "ToolTip", "Should we read the timecode from a dedicated LTC pin or an SDI input." },
	};
#endif
	void Z_Construct_UClass_UAjaTimecodeProvider_Statics::NewProp_bUseDedicatedPin_SetBit(void* Obj)
	{
		((UAjaTimecodeProvider*)Obj)->bUseDedicatedPin = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAjaTimecodeProvider_Statics::NewProp_bUseDedicatedPin = { "bUseDedicatedPin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAjaTimecodeProvider), &Z_Construct_UClass_UAjaTimecodeProvider_Statics::NewProp_bUseDedicatedPin_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAjaTimecodeProvider_Statics::NewProp_bUseDedicatedPin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAjaTimecodeProvider_Statics::NewProp_bUseDedicatedPin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAjaTimecodeProvider_Statics::NewProp_bUseReferenceIn_MetaData[] = {
		{ "Category", "Timecode" },
		{ "Comment", "/**\n\x09 * Read LTC timecode from reference pin. Will fail if device doesn't support that feature.\n\x09 */" },
		{ "EditCondition", "bUseDedicatedPin" },
		{ "ModuleRelativePath", "Public/AjaTimecodeProvider.h" },
		{ "ToolTip", "Read LTC timecode from reference pin. Will fail if device doesn't support that feature." },
	};
#endif
	void Z_Construct_UClass_UAjaTimecodeProvider_Statics::NewProp_bUseReferenceIn_SetBit(void* Obj)
	{
		((UAjaTimecodeProvider*)Obj)->bUseReferenceIn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAjaTimecodeProvider_Statics::NewProp_bUseReferenceIn = { "bUseReferenceIn", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAjaTimecodeProvider), &Z_Construct_UClass_UAjaTimecodeProvider_Statics::NewProp_bUseReferenceIn_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAjaTimecodeProvider_Statics::NewProp_bUseReferenceIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAjaTimecodeProvider_Statics::NewProp_bUseReferenceIn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAjaTimecodeProvider_Statics::NewProp_LTCConfiguration_MetaData[] = {
		{ "Category", "Timecode" },
		{ "Comment", "/**\n\x09 * Where to read LTC timecode from with which FrameRate expected\n\x09 */" },
		{ "EditCondition", "bUseDedicatedPin" },
		{ "ModuleRelativePath", "Public/AjaTimecodeProvider.h" },
		{ "ToolTip", "Where to read LTC timecode from with which FrameRate expected" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAjaTimecodeProvider_Statics::NewProp_LTCConfiguration = { "LTCConfiguration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAjaTimecodeProvider, LTCConfiguration), Z_Construct_UScriptStruct_FAjaMediaTimecodeReference, METADATA_PARAMS(Z_Construct_UClass_UAjaTimecodeProvider_Statics::NewProp_LTCConfiguration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAjaTimecodeProvider_Statics::NewProp_LTCConfiguration_MetaData)) }; // 2231270216
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAjaTimecodeProvider_Statics::NewProp_VideoConfiguration_MetaData[] = {
		{ "Comment", "/**\n     * It read the timecode from an input source.\n\x09 */" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/AjaTimecodeProvider.h" },
		{ "ToolTip", "It read the timecode from an input source." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAjaTimecodeProvider_Statics::NewProp_VideoConfiguration = { "VideoConfiguration", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAjaTimecodeProvider, VideoConfiguration_DEPRECATED), Z_Construct_UScriptStruct_FAjaMediaTimecodeConfiguration, METADATA_PARAMS(Z_Construct_UClass_UAjaTimecodeProvider_Statics::NewProp_VideoConfiguration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAjaTimecodeProvider_Statics::NewProp_VideoConfiguration_MetaData)) }; // 2981249845
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAjaTimecodeProvider_Statics::NewProp_TimecodeConfiguration_MetaData[] = {
		{ "Category", "Timecode" },
		{ "Comment", "/** Timecode format to read from a video signal. */" },
		{ "EditCondition", "!bUseDedicatedPin" },
		{ "ModuleRelativePath", "Public/AjaTimecodeProvider.h" },
		{ "ToolTip", "Timecode format to read from a video signal." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAjaTimecodeProvider_Statics::NewProp_TimecodeConfiguration = { "TimecodeConfiguration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAjaTimecodeProvider, TimecodeConfiguration), Z_Construct_UScriptStruct_FMediaIOVideoTimecodeConfiguration, METADATA_PARAMS(Z_Construct_UClass_UAjaTimecodeProvider_Statics::NewProp_TimecodeConfiguration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAjaTimecodeProvider_Statics::NewProp_TimecodeConfiguration_MetaData)) }; // 3209305699
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAjaTimecodeProvider_Statics::NewProp_bAutoDetectTimecode_MetaData[] = {
		{ "ModuleRelativePath", "Public/AjaTimecodeProvider.h" },
	};
#endif
	void Z_Construct_UClass_UAjaTimecodeProvider_Statics::NewProp_bAutoDetectTimecode_SetBit(void* Obj)
	{
		((UAjaTimecodeProvider*)Obj)->bAutoDetectTimecode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAjaTimecodeProvider_Statics::NewProp_bAutoDetectTimecode = { "bAutoDetectTimecode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAjaTimecodeProvider), &Z_Construct_UClass_UAjaTimecodeProvider_Statics::NewProp_bAutoDetectTimecode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAjaTimecodeProvider_Statics::NewProp_bAutoDetectTimecode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAjaTimecodeProvider_Statics::NewProp_bAutoDetectTimecode_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAjaTimecodeProvider_Statics::NewProp_InitializedEngine_MetaData[] = {
		{ "Comment", "/** Engine used to initialize the Provider */" },
		{ "ModuleRelativePath", "Public/AjaTimecodeProvider.h" },
		{ "ToolTip", "Engine used to initialize the Provider" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAjaTimecodeProvider_Statics::NewProp_InitializedEngine = { "InitializedEngine", nullptr, (EPropertyFlags)0x0044000800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAjaTimecodeProvider, InitializedEngine), Z_Construct_UClass_UEngine_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAjaTimecodeProvider_Statics::NewProp_InitializedEngine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAjaTimecodeProvider_Statics::NewProp_InitializedEngine_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAjaTimecodeProvider_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAjaTimecodeProvider_Statics::NewProp_bUseDedicatedPin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAjaTimecodeProvider_Statics::NewProp_bUseReferenceIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAjaTimecodeProvider_Statics::NewProp_LTCConfiguration,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAjaTimecodeProvider_Statics::NewProp_VideoConfiguration,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAjaTimecodeProvider_Statics::NewProp_TimecodeConfiguration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAjaTimecodeProvider_Statics::NewProp_bAutoDetectTimecode,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAjaTimecodeProvider_Statics::NewProp_InitializedEngine,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAjaTimecodeProvider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAjaTimecodeProvider>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAjaTimecodeProvider_Statics::ClassParams = {
		&UAjaTimecodeProvider::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAjaTimecodeProvider_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAjaTimecodeProvider_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAjaTimecodeProvider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAjaTimecodeProvider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAjaTimecodeProvider()
	{
		if (!Z_Registration_Info_UClass_UAjaTimecodeProvider.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAjaTimecodeProvider.OuterSingleton, Z_Construct_UClass_UAjaTimecodeProvider_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAjaTimecodeProvider.OuterSingleton;
	}
	template<> AJAMEDIA_API UClass* StaticClass<UAjaTimecodeProvider>()
	{
		return UAjaTimecodeProvider::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAjaTimecodeProvider);
	UAjaTimecodeProvider::~UAjaTimecodeProvider() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAjaTimecodeProvider)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AjaMedia_Source_AjaMedia_Public_AjaTimecodeProvider_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AjaMedia_Source_AjaMedia_Public_AjaTimecodeProvider_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAjaTimecodeProvider, UAjaTimecodeProvider::StaticClass, TEXT("UAjaTimecodeProvider"), &Z_Registration_Info_UClass_UAjaTimecodeProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAjaTimecodeProvider), 1102884943U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AjaMedia_Source_AjaMedia_Public_AjaTimecodeProvider_h_2476681806(TEXT("/Script/AjaMedia"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AjaMedia_Source_AjaMedia_Public_AjaTimecodeProvider_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AjaMedia_Source_AjaMedia_Public_AjaTimecodeProvider_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
