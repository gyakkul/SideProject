// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/PoseSearchFeatureChannel_FilterCrashingLegs.h"
#include "../../Source/Runtime/Engine/Public/BoneContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePoseSearchFeatureChannel_FilterCrashingLegs() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	POSESEARCH_API UClass* Z_Construct_UClass_UPoseSearchFeatureChannel();
	POSESEARCH_API UClass* Z_Construct_UClass_UPoseSearchFeatureChannel_FilterCrashingLegs();
	POSESEARCH_API UClass* Z_Construct_UClass_UPoseSearchFeatureChannel_FilterCrashingLegs_NoRegister();
	POSESEARCH_API UEnum* Z_Construct_UEnum_PoseSearch_EInputQueryPose();
	UPackage* Z_Construct_UPackage__Script_PoseSearch();
// End Cross Module References
	void UPoseSearchFeatureChannel_FilterCrashingLegs::StaticRegisterNativesUPoseSearchFeatureChannel_FilterCrashingLegs()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPoseSearchFeatureChannel_FilterCrashingLegs);
	UClass* Z_Construct_UClass_UPoseSearchFeatureChannel_FilterCrashingLegs_NoRegister()
	{
		return UPoseSearchFeatureChannel_FilterCrashingLegs::StaticClass();
	}
	struct Z_Construct_UClass_UPoseSearchFeatureChannel_FilterCrashingLegs_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftThigh_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LeftThigh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightThigh_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RightThigh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftFoot_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LeftFoot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightFoot_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RightFoot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftThighIdx_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_LeftThighIdx;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightThighIdx_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_RightThighIdx;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftFootIdx_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_LeftFootIdx;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightFootIdx_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_RightFootIdx;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InputQueryPose_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputQueryPose_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InputQueryPose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllowedTolerance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AllowedTolerance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPoseSearchFeatureChannel_FilterCrashingLegs_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPoseSearchFeatureChannel,
		(UObject* (*)())Z_Construct_UPackage__Script_PoseSearch,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchFeatureChannel_FilterCrashingLegs_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// the idea is to calculate the angle between the direction from LeftThigh position to RightThigh position and the direction from LeftFoot position to RightFoot position, and divide it by PI to have values in range [-1,1]\n// the number (called 'CrashingLegsValue' calculated in ComputeCrashingLegsValue) is gonna be\n// 0 if the feet are aligned with the thighs (for example in an idle standing position)\n// 0.5 if the right foot is exactly in front of the left foot (for example when a character is running  following a line)\n// -0.5 if the left foot is exactly in front of the right foot\n// close to 1 or -1 if the feet (and so the legs) are completely crossed\n// at runtime we'll match the CrashingLegsValue and also filter by discarding pose candidates that don't respect the 'AllowedTolerance' between query and database values (happening in IsPoseValid)\n" },
		{ "DisplayName", "CrashingLegs Channel" },
		{ "IncludePath", "PoseSearchFeatureChannel_FilterCrashingLegs.h" },
		{ "ModuleRelativePath", "Private/PoseSearchFeatureChannel_FilterCrashingLegs.h" },
		{ "ToolTip", "the idea is to calculate the angle between the direction from LeftThigh position to RightThigh position and the direction from LeftFoot position to RightFoot position, and divide it by PI to have values in range [-1,1]\nthe number (called 'CrashingLegsValue' calculated in ComputeCrashingLegsValue) is gonna be\n0 if the feet are aligned with the thighs (for example in an idle standing position)\n0.5 if the right foot is exactly in front of the left foot (for example when a character is running  following a line)\n-0.5 if the left foot is exactly in front of the right foot\nclose to 1 or -1 if the feet (and so the legs) are completely crossed\nat runtime we'll match the CrashingLegsValue and also filter by discarding pose candidates that don't respect the 'AllowedTolerance' between query and database values (happening in IsPoseValid)" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchFeatureChannel_FilterCrashingLegs_Statics::NewProp_LeftThigh_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Private/PoseSearchFeatureChannel_FilterCrashingLegs.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPoseSearchFeatureChannel_FilterCrashingLegs_Statics::NewProp_LeftThigh = { "LeftThigh", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseSearchFeatureChannel_FilterCrashingLegs, LeftThigh), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UClass_UPoseSearchFeatureChannel_FilterCrashingLegs_Statics::NewProp_LeftThigh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchFeatureChannel_FilterCrashingLegs_Statics::NewProp_LeftThigh_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchFeatureChannel_FilterCrashingLegs_Statics::NewProp_RightThigh_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Private/PoseSearchFeatureChannel_FilterCrashingLegs.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPoseSearchFeatureChannel_FilterCrashingLegs_Statics::NewProp_RightThigh = { "RightThigh", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseSearchFeatureChannel_FilterCrashingLegs, RightThigh), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UClass_UPoseSearchFeatureChannel_FilterCrashingLegs_Statics::NewProp_RightThigh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchFeatureChannel_FilterCrashingLegs_Statics::NewProp_RightThigh_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchFeatureChannel_FilterCrashingLegs_Statics::NewProp_LeftFoot_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Private/PoseSearchFeatureChannel_FilterCrashingLegs.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPoseSearchFeatureChannel_FilterCrashingLegs_Statics::NewProp_LeftFoot = { "LeftFoot", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseSearchFeatureChannel_FilterCrashingLegs, LeftFoot), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UClass_UPoseSearchFeatureChannel_FilterCrashingLegs_Statics::NewProp_LeftFoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchFeatureChannel_FilterCrashingLegs_Statics::NewProp_LeftFoot_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchFeatureChannel_FilterCrashingLegs_Statics::NewProp_RightFoot_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Private/PoseSearchFeatureChannel_FilterCrashingLegs.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPoseSearchFeatureChannel_FilterCrashingLegs_Statics::NewProp_RightFoot = { "RightFoot", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseSearchFeatureChannel_FilterCrashingLegs, RightFoot), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UClass_UPoseSearchFeatureChannel_FilterCrashingLegs_Statics::NewProp_RightFoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchFeatureChannel_FilterCrashingLegs_Statics::NewProp_RightFoot_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchFeatureChannel_FilterCrashingLegs_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Private/PoseSearchFeatureChannel_FilterCrashingLegs.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPoseSearchFeatureChannel_FilterCrashingLegs_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseSearchFeatureChannel_FilterCrashingLegs, Weight), METADATA_PARAMS(Z_Construct_UClass_UPoseSearchFeatureChannel_FilterCrashingLegs_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchFeatureChannel_FilterCrashingLegs_Statics::NewProp_Weight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchFeatureChannel_FilterCrashingLegs_Statics::NewProp_LeftThighIdx_MetaData[] = {
		{ "ModuleRelativePath", "Private/PoseSearchFeatureChannel_FilterCrashingLegs.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UClass_UPoseSearchFeatureChannel_FilterCrashingLegs_Statics::NewProp_LeftThighIdx = { "LeftThighIdx", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseSearchFeatureChannel_FilterCrashingLegs, LeftThighIdx), METADATA_PARAMS(Z_Construct_UClass_UPoseSearchFeatureChannel_FilterCrashingLegs_Statics::NewProp_LeftThighIdx_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchFeatureChannel_FilterCrashingLegs_Statics::NewProp_LeftThighIdx_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchFeatureChannel_FilterCrashingLegs_Statics::NewProp_RightThighIdx_MetaData[] = {
		{ "ModuleRelativePath", "Private/PoseSearchFeatureChannel_FilterCrashingLegs.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UClass_UPoseSearchFeatureChannel_FilterCrashingLegs_Statics::NewProp_RightThighIdx = { "RightThighIdx", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseSearchFeatureChannel_FilterCrashingLegs, RightThighIdx), METADATA_PARAMS(Z_Construct_UClass_UPoseSearchFeatureChannel_FilterCrashingLegs_Statics::NewProp_RightThighIdx_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchFeatureChannel_FilterCrashingLegs_Statics::NewProp_RightThighIdx_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchFeatureChannel_FilterCrashingLegs_Statics::NewProp_LeftFootIdx_MetaData[] = {
		{ "ModuleRelativePath", "Private/PoseSearchFeatureChannel_FilterCrashingLegs.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UClass_UPoseSearchFeatureChannel_FilterCrashingLegs_Statics::NewProp_LeftFootIdx = { "LeftFootIdx", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseSearchFeatureChannel_FilterCrashingLegs, LeftFootIdx), METADATA_PARAMS(Z_Construct_UClass_UPoseSearchFeatureChannel_FilterCrashingLegs_Statics::NewProp_LeftFootIdx_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchFeatureChannel_FilterCrashingLegs_Statics::NewProp_LeftFootIdx_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchFeatureChannel_FilterCrashingLegs_Statics::NewProp_RightFootIdx_MetaData[] = {
		{ "ModuleRelativePath", "Private/PoseSearchFeatureChannel_FilterCrashingLegs.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UClass_UPoseSearchFeatureChannel_FilterCrashingLegs_Statics::NewProp_RightFootIdx = { "RightFootIdx", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseSearchFeatureChannel_FilterCrashingLegs, RightFootIdx), METADATA_PARAMS(Z_Construct_UClass_UPoseSearchFeatureChannel_FilterCrashingLegs_Statics::NewProp_RightFootIdx_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchFeatureChannel_FilterCrashingLegs_Statics::NewProp_RightFootIdx_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPoseSearchFeatureChannel_FilterCrashingLegs_Statics::NewProp_InputQueryPose_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchFeatureChannel_FilterCrashingLegs_Statics::NewProp_InputQueryPose_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Private/PoseSearchFeatureChannel_FilterCrashingLegs.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPoseSearchFeatureChannel_FilterCrashingLegs_Statics::NewProp_InputQueryPose = { "InputQueryPose", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseSearchFeatureChannel_FilterCrashingLegs, InputQueryPose), Z_Construct_UEnum_PoseSearch_EInputQueryPose, METADATA_PARAMS(Z_Construct_UClass_UPoseSearchFeatureChannel_FilterCrashingLegs_Statics::NewProp_InputQueryPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchFeatureChannel_FilterCrashingLegs_Statics::NewProp_InputQueryPose_MetaData)) }; // 3735429544
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchFeatureChannel_FilterCrashingLegs_Statics::NewProp_AllowedTolerance_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Private/PoseSearchFeatureChannel_FilterCrashingLegs.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPoseSearchFeatureChannel_FilterCrashingLegs_Statics::NewProp_AllowedTolerance = { "AllowedTolerance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseSearchFeatureChannel_FilterCrashingLegs, AllowedTolerance), METADATA_PARAMS(Z_Construct_UClass_UPoseSearchFeatureChannel_FilterCrashingLegs_Statics::NewProp_AllowedTolerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchFeatureChannel_FilterCrashingLegs_Statics::NewProp_AllowedTolerance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPoseSearchFeatureChannel_FilterCrashingLegs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchFeatureChannel_FilterCrashingLegs_Statics::NewProp_LeftThigh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchFeatureChannel_FilterCrashingLegs_Statics::NewProp_RightThigh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchFeatureChannel_FilterCrashingLegs_Statics::NewProp_LeftFoot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchFeatureChannel_FilterCrashingLegs_Statics::NewProp_RightFoot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchFeatureChannel_FilterCrashingLegs_Statics::NewProp_Weight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchFeatureChannel_FilterCrashingLegs_Statics::NewProp_LeftThighIdx,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchFeatureChannel_FilterCrashingLegs_Statics::NewProp_RightThighIdx,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchFeatureChannel_FilterCrashingLegs_Statics::NewProp_LeftFootIdx,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchFeatureChannel_FilterCrashingLegs_Statics::NewProp_RightFootIdx,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchFeatureChannel_FilterCrashingLegs_Statics::NewProp_InputQueryPose_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchFeatureChannel_FilterCrashingLegs_Statics::NewProp_InputQueryPose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchFeatureChannel_FilterCrashingLegs_Statics::NewProp_AllowedTolerance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPoseSearchFeatureChannel_FilterCrashingLegs_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPoseSearchFeatureChannel_FilterCrashingLegs>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPoseSearchFeatureChannel_FilterCrashingLegs_Statics::ClassParams = {
		&UPoseSearchFeatureChannel_FilterCrashingLegs::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPoseSearchFeatureChannel_FilterCrashingLegs_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchFeatureChannel_FilterCrashingLegs_Statics::PropPointers),
		0,
		0x001030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPoseSearchFeatureChannel_FilterCrashingLegs_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchFeatureChannel_FilterCrashingLegs_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPoseSearchFeatureChannel_FilterCrashingLegs()
	{
		if (!Z_Registration_Info_UClass_UPoseSearchFeatureChannel_FilterCrashingLegs.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPoseSearchFeatureChannel_FilterCrashingLegs.OuterSingleton, Z_Construct_UClass_UPoseSearchFeatureChannel_FilterCrashingLegs_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPoseSearchFeatureChannel_FilterCrashingLegs.OuterSingleton;
	}
	template<> POSESEARCH_API UClass* StaticClass<UPoseSearchFeatureChannel_FilterCrashingLegs>()
	{
		return UPoseSearchFeatureChannel_FilterCrashingLegs::StaticClass();
	}
	UPoseSearchFeatureChannel_FilterCrashingLegs::UPoseSearchFeatureChannel_FilterCrashingLegs(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPoseSearchFeatureChannel_FilterCrashingLegs);
	UPoseSearchFeatureChannel_FilterCrashingLegs::~UPoseSearchFeatureChannel_FilterCrashingLegs() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Private_PoseSearchFeatureChannel_FilterCrashingLegs_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Private_PoseSearchFeatureChannel_FilterCrashingLegs_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPoseSearchFeatureChannel_FilterCrashingLegs, UPoseSearchFeatureChannel_FilterCrashingLegs::StaticClass, TEXT("UPoseSearchFeatureChannel_FilterCrashingLegs"), &Z_Registration_Info_UClass_UPoseSearchFeatureChannel_FilterCrashingLegs, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPoseSearchFeatureChannel_FilterCrashingLegs), 1510496768U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Private_PoseSearchFeatureChannel_FilterCrashingLegs_h_353068962(TEXT("/Script/PoseSearch"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Private_PoseSearchFeatureChannel_FilterCrashingLegs_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Private_PoseSearchFeatureChannel_FilterCrashingLegs_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
