// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TimeSynchronizableMediaSource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTimeSynchronizableMediaSource() {}
// Cross Module References
	MEDIAASSETS_API UClass* Z_Construct_UClass_UBaseMediaSource();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UTimeSynchronizableMediaSource();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UTimeSynchronizableMediaSource_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MediaAssets();
// End Cross Module References
	void UTimeSynchronizableMediaSource::StaticRegisterNativesUTimeSynchronizableMediaSource()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTimeSynchronizableMediaSource);
	UClass* Z_Construct_UClass_UTimeSynchronizableMediaSource_NoRegister()
	{
		return UTimeSynchronizableMediaSource::StaticClass();
	}
	struct Z_Construct_UClass_UTimeSynchronizableMediaSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseTimeSynchronization_MetaData[];
#endif
		static void NewProp_bUseTimeSynchronization_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseTimeSynchronization;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameDelay_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FrameDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeDelay_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_TimeDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoDetectInput_MetaData[];
#endif
		static void NewProp_bAutoDetectInput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoDetectInput;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTimeSynchronizableMediaSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseMediaSource,
		(UObject* (*)())Z_Construct_UPackage__Script_MediaAssets,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimeSynchronizableMediaSource_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for media sources that can be synchronized with the engine's timecode.\n */" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "TimeSynchronizableMediaSource.h" },
		{ "ModuleRelativePath", "Public/TimeSynchronizableMediaSource.h" },
		{ "ToolTip", "Base class for media sources that can be synchronized with the engine's timecode." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimeSynchronizableMediaSource_Statics::NewProp_bUseTimeSynchronization_MetaData[] = {
		{ "Category", "Synchronization" },
		{ "Comment", "/**\n\x09 * Synchronize the media with the engine's timecode.\n\x09 * The media player has be able to read timecode.\n\x09 * The media player will try to play the corresponding frame, base on the frame's timecode value.\n\x09 */" },
		{ "DisplayName", "Synchronize with Engine's Timecode" },
		{ "ModuleRelativePath", "Public/TimeSynchronizableMediaSource.h" },
		{ "ToolTip", "Synchronize the media with the engine's timecode.\nThe media player has be able to read timecode.\nThe media player will try to play the corresponding frame, base on the frame's timecode value." },
	};
#endif
	void Z_Construct_UClass_UTimeSynchronizableMediaSource_Statics::NewProp_bUseTimeSynchronization_SetBit(void* Obj)
	{
		((UTimeSynchronizableMediaSource*)Obj)->bUseTimeSynchronization = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTimeSynchronizableMediaSource_Statics::NewProp_bUseTimeSynchronization = { "bUseTimeSynchronization", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTimeSynchronizableMediaSource), &Z_Construct_UClass_UTimeSynchronizableMediaSource_Statics::NewProp_bUseTimeSynchronization_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTimeSynchronizableMediaSource_Statics::NewProp_bUseTimeSynchronization_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTimeSynchronizableMediaSource_Statics::NewProp_bUseTimeSynchronization_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimeSynchronizableMediaSource_Statics::NewProp_FrameDelay_MetaData[] = {
		{ "Category", "Synchronization" },
		{ "Comment", "/** When using Time Synchronization, how many frame back should it read. */" },
		{ "EditCondition", "bUseTimeSynchronization" },
		{ "ModuleRelativePath", "Public/TimeSynchronizableMediaSource.h" },
		{ "ToolTip", "When using Time Synchronization, how many frame back should it read." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTimeSynchronizableMediaSource_Statics::NewProp_FrameDelay = { "FrameDelay", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTimeSynchronizableMediaSource, FrameDelay), METADATA_PARAMS(Z_Construct_UClass_UTimeSynchronizableMediaSource_Statics::NewProp_FrameDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTimeSynchronizableMediaSource_Statics::NewProp_FrameDelay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimeSynchronizableMediaSource_Statics::NewProp_TimeDelay_MetaData[] = {
		{ "Category", "Synchronization" },
		{ "Comment", "/** When not using Time Synchronization, how far back it time should it read. */" },
		{ "EditCondition", "!bUseTimeSynchronization" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Public/TimeSynchronizableMediaSource.h" },
		{ "ToolTip", "When not using Time Synchronization, how far back it time should it read." },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UTimeSynchronizableMediaSource_Statics::NewProp_TimeDelay = { "TimeDelay", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTimeSynchronizableMediaSource, TimeDelay), METADATA_PARAMS(Z_Construct_UClass_UTimeSynchronizableMediaSource_Statics::NewProp_TimeDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTimeSynchronizableMediaSource_Statics::NewProp_TimeDelay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimeSynchronizableMediaSource_Statics::NewProp_bAutoDetectInput_MetaData[] = {
		{ "Comment", "/** Whether to autodetect the input or not. */" },
		{ "ModuleRelativePath", "Public/TimeSynchronizableMediaSource.h" },
		{ "ToolTip", "Whether to autodetect the input or not." },
	};
#endif
	void Z_Construct_UClass_UTimeSynchronizableMediaSource_Statics::NewProp_bAutoDetectInput_SetBit(void* Obj)
	{
		((UTimeSynchronizableMediaSource*)Obj)->bAutoDetectInput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTimeSynchronizableMediaSource_Statics::NewProp_bAutoDetectInput = { "bAutoDetectInput", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTimeSynchronizableMediaSource), &Z_Construct_UClass_UTimeSynchronizableMediaSource_Statics::NewProp_bAutoDetectInput_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTimeSynchronizableMediaSource_Statics::NewProp_bAutoDetectInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTimeSynchronizableMediaSource_Statics::NewProp_bAutoDetectInput_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTimeSynchronizableMediaSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimeSynchronizableMediaSource_Statics::NewProp_bUseTimeSynchronization,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimeSynchronizableMediaSource_Statics::NewProp_FrameDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimeSynchronizableMediaSource_Statics::NewProp_TimeDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimeSynchronizableMediaSource_Statics::NewProp_bAutoDetectInput,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTimeSynchronizableMediaSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTimeSynchronizableMediaSource>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTimeSynchronizableMediaSource_Statics::ClassParams = {
		&UTimeSynchronizableMediaSource::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTimeSynchronizableMediaSource_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTimeSynchronizableMediaSource_Statics::PropPointers),
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UTimeSynchronizableMediaSource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTimeSynchronizableMediaSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTimeSynchronizableMediaSource()
	{
		if (!Z_Registration_Info_UClass_UTimeSynchronizableMediaSource.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTimeSynchronizableMediaSource.OuterSingleton, Z_Construct_UClass_UTimeSynchronizableMediaSource_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTimeSynchronizableMediaSource.OuterSingleton;
	}
	template<> MEDIAASSETS_API UClass* StaticClass<UTimeSynchronizableMediaSource>()
	{
		return UTimeSynchronizableMediaSource::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTimeSynchronizableMediaSource);
	UTimeSynchronizableMediaSource::~UTimeSynchronizableMediaSource() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_TimeSynchronizableMediaSource_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_TimeSynchronizableMediaSource_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTimeSynchronizableMediaSource, UTimeSynchronizableMediaSource::StaticClass, TEXT("UTimeSynchronizableMediaSource"), &Z_Registration_Info_UClass_UTimeSynchronizableMediaSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTimeSynchronizableMediaSource), 1271118973U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_TimeSynchronizableMediaSource_h_1279519319(TEXT("/Script/MediaAssets"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_TimeSynchronizableMediaSource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_TimeSynchronizableMediaSource_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
