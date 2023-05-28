// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleAV.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleAV() {}
// Cross Module References
	AVCODECSCORERHI_API UClass* Z_Construct_UClass_USimpleAVHelper();
	AVCODECSCORERHI_API UClass* Z_Construct_UClass_USimpleAVHelper_NoRegister();
	AVCODECSCORERHI_API UEnum* Z_Construct_UEnum_AVCodecsCoreRHI_ESimpleAVPreset();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AVCodecsCoreRHI();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESimpleAVPreset;
	static UEnum* ESimpleAVPreset_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESimpleAVPreset.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESimpleAVPreset.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AVCodecsCoreRHI_ESimpleAVPreset, (UObject*)Z_Construct_UPackage__Script_AVCodecsCoreRHI(), TEXT("ESimpleAVPreset"));
		}
		return Z_Registration_Info_UEnum_ESimpleAVPreset.OuterSingleton;
	}
	template<> AVCODECSCORERHI_API UEnum* StaticEnum<ESimpleAVPreset>()
	{
		return ESimpleAVPreset_StaticEnum();
	}
	struct Z_Construct_UEnum_AVCodecsCoreRHI_ESimpleAVPreset_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AVCodecsCoreRHI_ESimpleAVPreset_Statics::Enumerators[] = {
		{ "ESimpleAVPreset::Default", (int64)ESimpleAVPreset::Default },
		{ "ESimpleAVPreset::UltraLowQuality", (int64)ESimpleAVPreset::UltraLowQuality },
		{ "ESimpleAVPreset::LowQuality", (int64)ESimpleAVPreset::LowQuality },
		{ "ESimpleAVPreset::HighQuality", (int64)ESimpleAVPreset::HighQuality },
		{ "ESimpleAVPreset::Lossless", (int64)ESimpleAVPreset::Lossless },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AVCodecsCoreRHI_ESimpleAVPreset_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Default.Name", "ESimpleAVPreset::Default" },
		{ "HighQuality.Name", "ESimpleAVPreset::HighQuality" },
		{ "Lossless.Name", "ESimpleAVPreset::Lossless" },
		{ "LowQuality.Name", "ESimpleAVPreset::LowQuality" },
		{ "ModuleRelativePath", "Public/SimpleAV.h" },
		{ "UltraLowQuality.Name", "ESimpleAVPreset::UltraLowQuality" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AVCodecsCoreRHI_ESimpleAVPreset_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AVCodecsCoreRHI,
		nullptr,
		"ESimpleAVPreset",
		"ESimpleAVPreset",
		Z_Construct_UEnum_AVCodecsCoreRHI_ESimpleAVPreset_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AVCodecsCoreRHI_ESimpleAVPreset_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AVCodecsCoreRHI_ESimpleAVPreset_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AVCodecsCoreRHI_ESimpleAVPreset_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AVCodecsCoreRHI_ESimpleAVPreset()
	{
		if (!Z_Registration_Info_UEnum_ESimpleAVPreset.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESimpleAVPreset.InnerSingleton, Z_Construct_UEnum_AVCodecsCoreRHI_ESimpleAVPreset_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESimpleAVPreset.InnerSingleton;
	}
	void USimpleAVHelper::StaticRegisterNativesUSimpleAVHelper()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleAVHelper);
	UClass* Z_Construct_UClass_USimpleAVHelper_NoRegister()
	{
		return USimpleAVHelper::StaticClass();
	}
	struct Z_Construct_UClass_USimpleAVHelper_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USimpleAVHelper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AVCodecsCoreRHI,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleAVHelper_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SimpleAV.h" },
		{ "ModuleRelativePath", "Public/SimpleAV.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimpleAVHelper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleAVHelper>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleAVHelper_Statics::ClassParams = {
		&USimpleAVHelper::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_USimpleAVHelper_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USimpleAVHelper_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USimpleAVHelper()
	{
		if (!Z_Registration_Info_UClass_USimpleAVHelper.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleAVHelper.OuterSingleton, Z_Construct_UClass_USimpleAVHelper_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USimpleAVHelper.OuterSingleton;
	}
	template<> AVCODECSCORERHI_API UClass* StaticClass<USimpleAVHelper>()
	{
		return USimpleAVHelper::StaticClass();
	}
	USimpleAVHelper::USimpleAVHelper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleAVHelper);
	USimpleAVHelper::~USimpleAVHelper() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_SimpleAV_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_SimpleAV_h_Statics::EnumInfo[] = {
		{ ESimpleAVPreset_StaticEnum, TEXT("ESimpleAVPreset"), &Z_Registration_Info_UEnum_ESimpleAVPreset, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1327610746U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_SimpleAV_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USimpleAVHelper, USimpleAVHelper::StaticClass, TEXT("USimpleAVHelper"), &Z_Registration_Info_UClass_USimpleAVHelper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleAVHelper), 1779602299U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_SimpleAV_h_2711484378(TEXT("/Script/AVCodecsCoreRHI"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_SimpleAV_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_SimpleAV_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_SimpleAV_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_SimpleAV_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
