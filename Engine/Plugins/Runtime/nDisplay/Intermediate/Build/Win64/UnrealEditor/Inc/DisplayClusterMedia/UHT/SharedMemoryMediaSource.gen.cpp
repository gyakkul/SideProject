// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SharedMemoryMediaSource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSharedMemoryMediaSource() {}
// Cross Module References
	DISPLAYCLUSTERMEDIA_API UClass* Z_Construct_UClass_USharedMemoryMediaSource();
	DISPLAYCLUSTERMEDIA_API UClass* Z_Construct_UClass_USharedMemoryMediaSource_NoRegister();
	DISPLAYCLUSTERMEDIA_API UEnum* Z_Construct_UEnum_DisplayClusterMedia_ESharedMemoryMediaSourceMode();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaSource();
	UPackage* Z_Construct_UPackage__Script_DisplayClusterMedia();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESharedMemoryMediaSourceMode;
	static UEnum* ESharedMemoryMediaSourceMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESharedMemoryMediaSourceMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESharedMemoryMediaSourceMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DisplayClusterMedia_ESharedMemoryMediaSourceMode, (UObject*)Z_Construct_UPackage__Script_DisplayClusterMedia(), TEXT("ESharedMemoryMediaSourceMode"));
		}
		return Z_Registration_Info_UEnum_ESharedMemoryMediaSourceMode.OuterSingleton;
	}
	template<> DISPLAYCLUSTERMEDIA_API UEnum* StaticEnum<ESharedMemoryMediaSourceMode>()
	{
		return ESharedMemoryMediaSourceMode_StaticEnum();
	}
	struct Z_Construct_UEnum_DisplayClusterMedia_ESharedMemoryMediaSourceMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DisplayClusterMedia_ESharedMemoryMediaSourceMode_Statics::Enumerators[] = {
		{ "ESharedMemoryMediaSourceMode::Framelocked", (int64)ESharedMemoryMediaSourceMode::Framelocked },
		{ "ESharedMemoryMediaSourceMode::Genlocked", (int64)ESharedMemoryMediaSourceMode::Genlocked },
		{ "ESharedMemoryMediaSourceMode::Freerun", (int64)ESharedMemoryMediaSourceMode::Freerun },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DisplayClusterMedia_ESharedMemoryMediaSourceMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n * Mode of operation when receiving data.\n * Framelocked - Matches source and local frame numbers. Always use this mode in nDisplay.\n * Genlocked - It doesn't match frame numbers, but it also doesn't skip frames, so will hold back the sender if it is faster than the receiver.\n * Freerun - It always grabs the latest frame. It may skip frames if they arrive too fast.\n */" },
		{ "Framelocked.Name", "ESharedMemoryMediaSourceMode::Framelocked" },
		{ "Freerun.Comment", "// It doesn't match frame numbers, but it also doesn't skip frames, so will hold back the sender if it is faster than the receiver.\n" },
		{ "Freerun.Name", "ESharedMemoryMediaSourceMode::Freerun" },
		{ "Freerun.ToolTip", "It doesn't match frame numbers, but it also doesn't skip frames, so will hold back the sender if it is faster than the receiver." },
		{ "Genlocked.Comment", "// Matches source and local frame numbers. Always use this mode in nDisplay.\n" },
		{ "Genlocked.Name", "ESharedMemoryMediaSourceMode::Genlocked" },
		{ "Genlocked.ToolTip", "Matches source and local frame numbers. Always use this mode in nDisplay." },
		{ "ModuleRelativePath", "Public/SharedMemoryMediaSource.h" },
		{ "ToolTip", "Mode of operation when receiving data.\nFramelocked - Matches source and local frame numbers. Always use this mode in nDisplay.\nGenlocked - It doesn't match frame numbers, but it also doesn't skip frames, so will hold back the sender if it is faster than the receiver.\nFreerun - It always grabs the latest frame. It may skip frames if they arrive too fast." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DisplayClusterMedia_ESharedMemoryMediaSourceMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DisplayClusterMedia,
		nullptr,
		"ESharedMemoryMediaSourceMode",
		"ESharedMemoryMediaSourceMode",
		Z_Construct_UEnum_DisplayClusterMedia_ESharedMemoryMediaSourceMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DisplayClusterMedia_ESharedMemoryMediaSourceMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DisplayClusterMedia_ESharedMemoryMediaSourceMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DisplayClusterMedia_ESharedMemoryMediaSourceMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DisplayClusterMedia_ESharedMemoryMediaSourceMode()
	{
		if (!Z_Registration_Info_UEnum_ESharedMemoryMediaSourceMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESharedMemoryMediaSourceMode.InnerSingleton, Z_Construct_UEnum_DisplayClusterMedia_ESharedMemoryMediaSourceMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESharedMemoryMediaSourceMode.InnerSingleton;
	}
	void USharedMemoryMediaSource::StaticRegisterNativesUSharedMemoryMediaSource()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USharedMemoryMediaSource);
	UClass* Z_Construct_UClass_USharedMemoryMediaSource_NoRegister()
	{
		return USharedMemoryMediaSource::StaticClass();
	}
	struct Z_Construct_UClass_USharedMemoryMediaSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UniqueName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UniqueName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bZeroLatency_MetaData[];
#endif
		static void NewProp_bZeroLatency_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bZeroLatency;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USharedMemoryMediaSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMediaSource,
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterMedia,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USharedMemoryMediaSource_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Media source for SharedMemory streams.\n */" },
		{ "HideCategories", "Platforms Object Object" },
		{ "IncludePath", "SharedMemoryMediaSource.h" },
		{ "ModuleRelativePath", "Public/SharedMemoryMediaSource.h" },
		{ "ToolTip", "Media source for SharedMemory streams." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USharedMemoryMediaSource_Statics::NewProp_UniqueName_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Shared memory will be found by using this name. Should match the media output setting. */" },
		{ "ModuleRelativePath", "Public/SharedMemoryMediaSource.h" },
		{ "ToolTip", "Shared memory will be found by using this name. Should match the media output setting." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USharedMemoryMediaSource_Statics::NewProp_UniqueName = { "UniqueName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USharedMemoryMediaSource, UniqueName), METADATA_PARAMS(Z_Construct_UClass_USharedMemoryMediaSource_Statics::NewProp_UniqueName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USharedMemoryMediaSource_Statics::NewProp_UniqueName_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USharedMemoryMediaSource_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USharedMemoryMediaSource_Statics::NewProp_Mode_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09 * Mode of operation when receiving data.\n\x09 * Framelocked - Matches source and local frame numbers. Always use this mode in nDisplay.\n\x09 * Genlocked - It doesn't match frame numbers, but it also doesn't skip frames, so will hold back the sender if it is faster than the receiver.\n\x09 * Freerun - It always grabs the latest frame. It may skip frames if they arrive too fast.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SharedMemoryMediaSource.h" },
		{ "ToolTip", "Mode of operation when receiving data.\nFramelocked - Matches source and local frame numbers. Always use this mode in nDisplay.\nGenlocked - It doesn't match frame numbers, but it also doesn't skip frames, so will hold back the sender if it is faster than the receiver.\nFreerun - It always grabs the latest frame. It may skip frames if they arrive too fast." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USharedMemoryMediaSource_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USharedMemoryMediaSource, Mode), Z_Construct_UEnum_DisplayClusterMedia_ESharedMemoryMediaSourceMode, METADATA_PARAMS(Z_Construct_UClass_USharedMemoryMediaSource_Statics::NewProp_Mode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USharedMemoryMediaSource_Statics::NewProp_Mode_MetaData)) }; // 1689623552
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USharedMemoryMediaSource_Statics::NewProp_bZeroLatency_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Zero latency option to wait for the cross gpu texture rendered on the same frame. May adversely affect fps. Only applicable in Framelocked mode. */" },
		{ "ModuleRelativePath", "Public/SharedMemoryMediaSource.h" },
		{ "ToolTip", "Zero latency option to wait for the cross gpu texture rendered on the same frame. May adversely affect fps. Only applicable in Framelocked mode." },
	};
#endif
	void Z_Construct_UClass_USharedMemoryMediaSource_Statics::NewProp_bZeroLatency_SetBit(void* Obj)
	{
		((USharedMemoryMediaSource*)Obj)->bZeroLatency = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USharedMemoryMediaSource_Statics::NewProp_bZeroLatency = { "bZeroLatency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USharedMemoryMediaSource), &Z_Construct_UClass_USharedMemoryMediaSource_Statics::NewProp_bZeroLatency_SetBit, METADATA_PARAMS(Z_Construct_UClass_USharedMemoryMediaSource_Statics::NewProp_bZeroLatency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USharedMemoryMediaSource_Statics::NewProp_bZeroLatency_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USharedMemoryMediaSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USharedMemoryMediaSource_Statics::NewProp_UniqueName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USharedMemoryMediaSource_Statics::NewProp_Mode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USharedMemoryMediaSource_Statics::NewProp_Mode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USharedMemoryMediaSource_Statics::NewProp_bZeroLatency,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USharedMemoryMediaSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USharedMemoryMediaSource>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USharedMemoryMediaSource_Statics::ClassParams = {
		&USharedMemoryMediaSource::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USharedMemoryMediaSource_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USharedMemoryMediaSource_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USharedMemoryMediaSource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USharedMemoryMediaSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USharedMemoryMediaSource()
	{
		if (!Z_Registration_Info_UClass_USharedMemoryMediaSource.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USharedMemoryMediaSource.OuterSingleton, Z_Construct_UClass_USharedMemoryMediaSource_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USharedMemoryMediaSource.OuterSingleton;
	}
	template<> DISPLAYCLUSTERMEDIA_API UClass* StaticClass<USharedMemoryMediaSource>()
	{
		return USharedMemoryMediaSource::StaticClass();
	}
	USharedMemoryMediaSource::USharedMemoryMediaSource(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USharedMemoryMediaSource);
	USharedMemoryMediaSource::~USharedMemoryMediaSource() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterMedia_Public_SharedMemoryMediaSource_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterMedia_Public_SharedMemoryMediaSource_h_Statics::EnumInfo[] = {
		{ ESharedMemoryMediaSourceMode_StaticEnum, TEXT("ESharedMemoryMediaSourceMode"), &Z_Registration_Info_UEnum_ESharedMemoryMediaSourceMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1689623552U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterMedia_Public_SharedMemoryMediaSource_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USharedMemoryMediaSource, USharedMemoryMediaSource::StaticClass, TEXT("USharedMemoryMediaSource"), &Z_Registration_Info_UClass_USharedMemoryMediaSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USharedMemoryMediaSource), 3517189629U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterMedia_Public_SharedMemoryMediaSource_h_432673384(TEXT("/Script/DisplayClusterMedia"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterMedia_Public_SharedMemoryMediaSource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterMedia_Public_SharedMemoryMediaSource_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterMedia_Public_SharedMemoryMediaSource_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterMedia_Public_SharedMemoryMediaSource_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
