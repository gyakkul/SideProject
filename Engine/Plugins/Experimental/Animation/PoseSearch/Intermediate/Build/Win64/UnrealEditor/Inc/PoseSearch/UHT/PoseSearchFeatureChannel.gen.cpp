// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PoseSearch/PoseSearchFeatureChannel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePoseSearchFeatureChannel() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UBoneReferenceSkeletonProvider_NoRegister();
	POSESEARCH_API UClass* Z_Construct_UClass_UPoseSearchFeatureChannel();
	POSESEARCH_API UClass* Z_Construct_UClass_UPoseSearchFeatureChannel_NoRegister();
	POSESEARCH_API UEnum* Z_Construct_UEnum_PoseSearch_EInputQueryPose();
	UPackage* Z_Construct_UPackage__Script_PoseSearch();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInputQueryPose;
	static UEnum* EInputQueryPose_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EInputQueryPose.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EInputQueryPose.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PoseSearch_EInputQueryPose, (UObject*)Z_Construct_UPackage__Script_PoseSearch(), TEXT("EInputQueryPose"));
		}
		return Z_Registration_Info_UEnum_EInputQueryPose.OuterSingleton;
	}
	template<> POSESEARCH_API UEnum* StaticEnum<EInputQueryPose>()
	{
		return EInputQueryPose_StaticEnum();
	}
	struct Z_Construct_UEnum_PoseSearch_EInputQueryPose_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PoseSearch_EInputQueryPose_Statics::Enumerators[] = {
		{ "EInputQueryPose::UseCharacterPose", (int64)EInputQueryPose::UseCharacterPose },
		{ "EInputQueryPose::UseContinuingPose", (int64)EInputQueryPose::UseContinuingPose },
		{ "EInputQueryPose::UseInterpolatedContinuingPose", (int64)EInputQueryPose::UseInterpolatedContinuingPose },
		{ "EInputQueryPose::Num", (int64)EInputQueryPose::Num },
		{ "EInputQueryPose::Invalid", (int64)EInputQueryPose::Invalid },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PoseSearch_EInputQueryPose_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Invalid.Hidden", "" },
		{ "Invalid.Name", "EInputQueryPose::Invalid" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchFeatureChannel.h" },
		{ "Num.Hidden", "" },
		{ "Num.Name", "EInputQueryPose::Num" },
		{ "UseCharacterPose.Comment", "// use character pose to compose the query\n" },
		{ "UseCharacterPose.Name", "EInputQueryPose::UseCharacterPose" },
		{ "UseCharacterPose.ToolTip", "use character pose to compose the query" },
		{ "UseContinuingPose.Comment", "// if available reuse continuing pose from the database to compose the query or else UseCharacterPose\n" },
		{ "UseContinuingPose.Name", "EInputQueryPose::UseContinuingPose" },
		{ "UseContinuingPose.ToolTip", "if available reuse continuing pose from the database to compose the query or else UseCharacterPose" },
		{ "UseInterpolatedContinuingPose.Comment", "// if available reuse and interpolate continuing pose from the database to compose the query or else UseCharacterPose\n" },
		{ "UseInterpolatedContinuingPose.Name", "EInputQueryPose::UseInterpolatedContinuingPose" },
		{ "UseInterpolatedContinuingPose.ToolTip", "if available reuse and interpolate continuing pose from the database to compose the query or else UseCharacterPose" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PoseSearch_EInputQueryPose_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PoseSearch,
		nullptr,
		"EInputQueryPose",
		"EInputQueryPose",
		Z_Construct_UEnum_PoseSearch_EInputQueryPose_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PoseSearch_EInputQueryPose_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PoseSearch_EInputQueryPose_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PoseSearch_EInputQueryPose_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PoseSearch_EInputQueryPose()
	{
		if (!Z_Registration_Info_UEnum_EInputQueryPose.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInputQueryPose.InnerSingleton, Z_Construct_UEnum_PoseSearch_EInputQueryPose_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EInputQueryPose.InnerSingleton;
	}
	void UPoseSearchFeatureChannel::StaticRegisterNativesUPoseSearchFeatureChannel()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPoseSearchFeatureChannel);
	UClass* Z_Construct_UClass_UPoseSearchFeatureChannel_NoRegister()
	{
		return UPoseSearchFeatureChannel::StaticClass();
	}
	struct Z_Construct_UClass_UPoseSearchFeatureChannel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChannelDataOffset_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ChannelDataOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChannelCardinality_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ChannelCardinality;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPoseSearchFeatureChannel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PoseSearch,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchFeatureChannel_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//////////////////////////////////////////////////////////////////////////\n// Feature channels interface\n" },
		{ "IncludePath", "PoseSearch/PoseSearchFeatureChannel.h" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchFeatureChannel.h" },
		{ "ToolTip", "Feature channels interface" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchFeatureChannel_Statics::NewProp_ChannelDataOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchFeatureChannel.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPoseSearchFeatureChannel_Statics::NewProp_ChannelDataOffset = { "ChannelDataOffset", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseSearchFeatureChannel, ChannelDataOffset), METADATA_PARAMS(Z_Construct_UClass_UPoseSearchFeatureChannel_Statics::NewProp_ChannelDataOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchFeatureChannel_Statics::NewProp_ChannelDataOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchFeatureChannel_Statics::NewProp_ChannelCardinality_MetaData[] = {
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchFeatureChannel.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPoseSearchFeatureChannel_Statics::NewProp_ChannelCardinality = { "ChannelCardinality", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseSearchFeatureChannel, ChannelCardinality), METADATA_PARAMS(Z_Construct_UClass_UPoseSearchFeatureChannel_Statics::NewProp_ChannelCardinality_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchFeatureChannel_Statics::NewProp_ChannelCardinality_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPoseSearchFeatureChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchFeatureChannel_Statics::NewProp_ChannelDataOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchFeatureChannel_Statics::NewProp_ChannelCardinality,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UPoseSearchFeatureChannel_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UBoneReferenceSkeletonProvider_NoRegister, (int32)VTABLE_OFFSET(UPoseSearchFeatureChannel, IBoneReferenceSkeletonProvider), false },  // 3827725125
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPoseSearchFeatureChannel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPoseSearchFeatureChannel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPoseSearchFeatureChannel_Statics::ClassParams = {
		&UPoseSearchFeatureChannel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPoseSearchFeatureChannel_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchFeatureChannel_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPoseSearchFeatureChannel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchFeatureChannel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPoseSearchFeatureChannel()
	{
		if (!Z_Registration_Info_UClass_UPoseSearchFeatureChannel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPoseSearchFeatureChannel.OuterSingleton, Z_Construct_UClass_UPoseSearchFeatureChannel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPoseSearchFeatureChannel.OuterSingleton;
	}
	template<> POSESEARCH_API UClass* StaticClass<UPoseSearchFeatureChannel>()
	{
		return UPoseSearchFeatureChannel::StaticClass();
	}
	UPoseSearchFeatureChannel::UPoseSearchFeatureChannel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPoseSearchFeatureChannel);
	UPoseSearchFeatureChannel::~UPoseSearchFeatureChannel() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_h_Statics::EnumInfo[] = {
		{ EInputQueryPose_StaticEnum, TEXT("EInputQueryPose"), &Z_Registration_Info_UEnum_EInputQueryPose, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3735429544U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPoseSearchFeatureChannel, UPoseSearchFeatureChannel::StaticClass, TEXT("UPoseSearchFeatureChannel"), &Z_Registration_Info_UClass_UPoseSearchFeatureChannel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPoseSearchFeatureChannel), 4118352563U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_h_2103998037(TEXT("/Script/PoseSearch"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
