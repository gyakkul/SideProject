// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkTimecodeProvider.h"
#include "LiveLinkTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkTimecodeProvider() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
	ENGINE_API UClass* Z_Construct_UClass_UTimecodeProvider();
	LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkTimecodeProvider();
	LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkTimecodeProvider_NoRegister();
	LIVELINK_API UEnum* Z_Construct_UEnum_LiveLink_ELiveLinkTimecodeProviderEvaluationType();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubjectKey();
	UPackage* Z_Construct_UPackage__Script_LiveLink();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELiveLinkTimecodeProviderEvaluationType;
	static UEnum* ELiveLinkTimecodeProviderEvaluationType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELiveLinkTimecodeProviderEvaluationType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELiveLinkTimecodeProviderEvaluationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LiveLink_ELiveLinkTimecodeProviderEvaluationType, (UObject*)Z_Construct_UPackage__Script_LiveLink(), TEXT("ELiveLinkTimecodeProviderEvaluationType"));
		}
		return Z_Registration_Info_UEnum_ELiveLinkTimecodeProviderEvaluationType.OuterSingleton;
	}
	template<> LIVELINK_API UEnum* StaticEnum<ELiveLinkTimecodeProviderEvaluationType>()
	{
		return ELiveLinkTimecodeProviderEvaluationType_StaticEnum();
	}
	struct Z_Construct_UEnum_LiveLink_ELiveLinkTimecodeProviderEvaluationType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LiveLink_ELiveLinkTimecodeProviderEvaluationType_Statics::Enumerators[] = {
		{ "ELiveLinkTimecodeProviderEvaluationType::Lerp", (int64)ELiveLinkTimecodeProviderEvaluationType::Lerp },
		{ "ELiveLinkTimecodeProviderEvaluationType::Nearest", (int64)ELiveLinkTimecodeProviderEvaluationType::Nearest },
		{ "ELiveLinkTimecodeProviderEvaluationType::Latest", (int64)ELiveLinkTimecodeProviderEvaluationType::Latest },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LiveLink_ELiveLinkTimecodeProviderEvaluationType_Statics::Enum_MetaDataParams[] = {
		{ "Latest.Comment", "/** Use the newest frame that was received. */" },
		{ "Latest.Name", "ELiveLinkTimecodeProviderEvaluationType::Latest" },
		{ "Latest.ToolTip", "Use the newest frame that was received." },
		{ "Lerp.Comment", "/** Interpolate, or extrapolate, between the 2 frames that are the closest to evaluation. */" },
		{ "Lerp.Name", "ELiveLinkTimecodeProviderEvaluationType::Lerp" },
		{ "Lerp.ToolTip", "Interpolate, or extrapolate, between the 2 frames that are the closest to evaluation." },
		{ "ModuleRelativePath", "Public/LiveLinkTimecodeProvider.h" },
		{ "Nearest.Comment", "/** Use the frame that is closest to evaluation. */" },
		{ "Nearest.Name", "ELiveLinkTimecodeProviderEvaluationType::Nearest" },
		{ "Nearest.ToolTip", "Use the frame that is closest to evaluation." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LiveLink_ELiveLinkTimecodeProviderEvaluationType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LiveLink,
		nullptr,
		"ELiveLinkTimecodeProviderEvaluationType",
		"ELiveLinkTimecodeProviderEvaluationType",
		Z_Construct_UEnum_LiveLink_ELiveLinkTimecodeProviderEvaluationType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LiveLink_ELiveLinkTimecodeProviderEvaluationType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_LiveLink_ELiveLinkTimecodeProviderEvaluationType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_LiveLink_ELiveLinkTimecodeProviderEvaluationType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_LiveLink_ELiveLinkTimecodeProviderEvaluationType()
	{
		if (!Z_Registration_Info_UEnum_ELiveLinkTimecodeProviderEvaluationType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELiveLinkTimecodeProviderEvaluationType.InnerSingleton, Z_Construct_UEnum_LiveLink_ELiveLinkTimecodeProviderEvaluationType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELiveLinkTimecodeProviderEvaluationType.InnerSingleton;
	}
	void ULiveLinkTimecodeProvider::StaticRegisterNativesULiveLinkTimecodeProvider()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkTimecodeProvider);
	UClass* Z_Construct_UClass_ULiveLinkTimecodeProvider_NoRegister()
	{
		return ULiveLinkTimecodeProvider::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubjectKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SubjectKey;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Evaluation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Evaluation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Evaluation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideFrameRate_MetaData[];
#endif
		static void NewProp_bOverrideFrameRate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideFrameRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideFrameRate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OverrideFrameRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BufferSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BufferSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTimecodeProvider,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLink,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Fetch the latest frames from the LiveLink subject and create a Timecode from it.\n */" },
		{ "IncludePath", "LiveLinkTimecodeProvider.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LiveLinkTimecodeProvider.h" },
		{ "ToolTip", "Fetch the latest frames from the LiveLink subject and create a Timecode from it." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::NewProp_SubjectKey_MetaData[] = {
		{ "Category", "Timecode" },
		{ "Comment", "/** The specific subject that we listen to. */" },
		{ "ModuleRelativePath", "Public/LiveLinkTimecodeProvider.h" },
		{ "ToolTip", "The specific subject that we listen to." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::NewProp_SubjectKey = { "SubjectKey", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULiveLinkTimecodeProvider, SubjectKey), Z_Construct_UScriptStruct_FLiveLinkSubjectKey, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::NewProp_SubjectKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::NewProp_SubjectKey_MetaData)) }; // 1829525393
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::NewProp_Evaluation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::NewProp_Evaluation_MetaData[] = {
		{ "Category", "Timecode" },
		{ "Comment", "/** How to evaluate the timecode. */" },
		{ "ModuleRelativePath", "Public/LiveLinkTimecodeProvider.h" },
		{ "ToolTip", "How to evaluate the timecode." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::NewProp_Evaluation = { "Evaluation", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULiveLinkTimecodeProvider, Evaluation), Z_Construct_UEnum_LiveLink_ELiveLinkTimecodeProviderEvaluationType, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::NewProp_Evaluation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::NewProp_Evaluation_MetaData)) }; // 1651194854
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::NewProp_bOverrideFrameRate_MetaData[] = {
		{ "Category", "Timecode" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/LiveLinkTimecodeProvider.h" },
	};
#endif
	void Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::NewProp_bOverrideFrameRate_SetBit(void* Obj)
	{
		((ULiveLinkTimecodeProvider*)Obj)->bOverrideFrameRate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::NewProp_bOverrideFrameRate = { "bOverrideFrameRate", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULiveLinkTimecodeProvider), &Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::NewProp_bOverrideFrameRate_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::NewProp_bOverrideFrameRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::NewProp_bOverrideFrameRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::NewProp_OverrideFrameRate_MetaData[] = {
		{ "Category", "Timecode" },
		{ "Comment", "/**\n\x09 * Override the frame rate at which this timecode provider will create its timecode value.\n\x09 * By default, we use the subject frame rate.\n\x09 */" },
		{ "EditCondition", "bOverrideFrameRate" },
		{ "ModuleRelativePath", "Public/LiveLinkTimecodeProvider.h" },
		{ "ToolTip", "Override the frame rate at which this timecode provider will create its timecode value.\nBy default, we use the subject frame rate." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::NewProp_OverrideFrameRate = { "OverrideFrameRate", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULiveLinkTimecodeProvider, OverrideFrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::NewProp_OverrideFrameRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::NewProp_OverrideFrameRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::NewProp_BufferSize_MetaData[] = {
		{ "Category", "Timecode" },
		{ "ClampMax", "10" },
		{ "ClampMin", "2" },
		{ "Comment", "/** The number of frame to keep in memory. The provider will not be synchronized until the buffer is full at least once. */" },
		{ "ModuleRelativePath", "Public/LiveLinkTimecodeProvider.h" },
		{ "ToolTip", "The number of frame to keep in memory. The provider will not be synchronized until the buffer is full at least once." },
		{ "UIMax", "10" },
		{ "UIMin", "2" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::NewProp_BufferSize = { "BufferSize", nullptr, (EPropertyFlags)0x0040040000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULiveLinkTimecodeProvider, BufferSize), METADATA_PARAMS(Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::NewProp_BufferSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::NewProp_BufferSize_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::NewProp_SubjectKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::NewProp_Evaluation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::NewProp_Evaluation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::NewProp_bOverrideFrameRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::NewProp_OverrideFrameRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::NewProp_BufferSize,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkTimecodeProvider>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::ClassParams = {
		&ULiveLinkTimecodeProvider::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveLinkTimecodeProvider()
	{
		if (!Z_Registration_Info_UClass_ULiveLinkTimecodeProvider.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkTimecodeProvider.OuterSingleton, Z_Construct_UClass_ULiveLinkTimecodeProvider_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULiveLinkTimecodeProvider.OuterSingleton;
	}
	template<> LIVELINK_API UClass* StaticClass<ULiveLinkTimecodeProvider>()
	{
		return ULiveLinkTimecodeProvider::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkTimecodeProvider);
	ULiveLinkTimecodeProvider::~ULiveLinkTimecodeProvider() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkTimecodeProvider_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkTimecodeProvider_h_Statics::EnumInfo[] = {
		{ ELiveLinkTimecodeProviderEvaluationType_StaticEnum, TEXT("ELiveLinkTimecodeProviderEvaluationType"), &Z_Registration_Info_UEnum_ELiveLinkTimecodeProviderEvaluationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1651194854U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkTimecodeProvider_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkTimecodeProvider, ULiveLinkTimecodeProvider::StaticClass, TEXT("ULiveLinkTimecodeProvider"), &Z_Registration_Info_UClass_ULiveLinkTimecodeProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkTimecodeProvider), 1110503295U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkTimecodeProvider_h_96250022(TEXT("/Script/LiveLink"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkTimecodeProvider_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkTimecodeProvider_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkTimecodeProvider_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkTimecodeProvider_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
