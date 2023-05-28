// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/PoseSearchFeatureChannel_Phase.h"
#include "../../Source/Runtime/Engine/Public/BoneContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePoseSearchFeatureChannel_Phase() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	POSESEARCH_API UClass* Z_Construct_UClass_UPoseSearchFeatureChannel();
	POSESEARCH_API UClass* Z_Construct_UClass_UPoseSearchFeatureChannel_Phase();
	POSESEARCH_API UClass* Z_Construct_UClass_UPoseSearchFeatureChannel_Phase_NoRegister();
	POSESEARCH_API UEnum* Z_Construct_UEnum_PoseSearch_EInputQueryPose();
	UPackage* Z_Construct_UPackage__Script_PoseSearch();
// End Cross Module References
	void UPoseSearchFeatureChannel_Phase::StaticRegisterNativesUPoseSearchFeatureChannel_Phase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPoseSearchFeatureChannel_Phase);
	UClass* Z_Construct_UClass_UPoseSearchFeatureChannel_Phase_NoRegister()
	{
		return UPoseSearchFeatureChannel_Phase::StaticClass();
	}
	struct Z_Construct_UClass_UPoseSearchFeatureChannel_Phase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bone_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SchemaBoneIdx_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_SchemaBoneIdx;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorPresetIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ColorPresetIndex;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InputQueryPose_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputQueryPose_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InputQueryPose;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPoseSearchFeatureChannel_Phase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPoseSearchFeatureChannel,
		(UObject* (*)())Z_Construct_UPackage__Script_PoseSearch,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchFeatureChannel_Phase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Phase Channel" },
		{ "IncludePath", "PoseSearchFeatureChannel_Phase.h" },
		{ "ModuleRelativePath", "Private/PoseSearchFeatureChannel_Phase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchFeatureChannel_Phase_Statics::NewProp_Bone_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Private/PoseSearchFeatureChannel_Phase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPoseSearchFeatureChannel_Phase_Statics::NewProp_Bone = { "Bone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseSearchFeatureChannel_Phase, Bone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UClass_UPoseSearchFeatureChannel_Phase_Statics::NewProp_Bone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchFeatureChannel_Phase_Statics::NewProp_Bone_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchFeatureChannel_Phase_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Private/PoseSearchFeatureChannel_Phase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPoseSearchFeatureChannel_Phase_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseSearchFeatureChannel_Phase, Weight), METADATA_PARAMS(Z_Construct_UClass_UPoseSearchFeatureChannel_Phase_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchFeatureChannel_Phase_Statics::NewProp_Weight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchFeatureChannel_Phase_Statics::NewProp_SchemaBoneIdx_MetaData[] = {
		{ "ModuleRelativePath", "Private/PoseSearchFeatureChannel_Phase.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UClass_UPoseSearchFeatureChannel_Phase_Statics::NewProp_SchemaBoneIdx = { "SchemaBoneIdx", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseSearchFeatureChannel_Phase, SchemaBoneIdx), METADATA_PARAMS(Z_Construct_UClass_UPoseSearchFeatureChannel_Phase_Statics::NewProp_SchemaBoneIdx_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchFeatureChannel_Phase_Statics::NewProp_SchemaBoneIdx_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchFeatureChannel_Phase_Statics::NewProp_ColorPresetIndex_MetaData[] = {
		{ "Category", "Settings" },
		{ "ExcludeFromHash", "" },
		{ "ModuleRelativePath", "Private/PoseSearchFeatureChannel_Phase.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPoseSearchFeatureChannel_Phase_Statics::NewProp_ColorPresetIndex = { "ColorPresetIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseSearchFeatureChannel_Phase, ColorPresetIndex), METADATA_PARAMS(Z_Construct_UClass_UPoseSearchFeatureChannel_Phase_Statics::NewProp_ColorPresetIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchFeatureChannel_Phase_Statics::NewProp_ColorPresetIndex_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPoseSearchFeatureChannel_Phase_Statics::NewProp_InputQueryPose_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchFeatureChannel_Phase_Statics::NewProp_InputQueryPose_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Private/PoseSearchFeatureChannel_Phase.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPoseSearchFeatureChannel_Phase_Statics::NewProp_InputQueryPose = { "InputQueryPose", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseSearchFeatureChannel_Phase, InputQueryPose), Z_Construct_UEnum_PoseSearch_EInputQueryPose, METADATA_PARAMS(Z_Construct_UClass_UPoseSearchFeatureChannel_Phase_Statics::NewProp_InputQueryPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchFeatureChannel_Phase_Statics::NewProp_InputQueryPose_MetaData)) }; // 3735429544
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPoseSearchFeatureChannel_Phase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchFeatureChannel_Phase_Statics::NewProp_Bone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchFeatureChannel_Phase_Statics::NewProp_Weight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchFeatureChannel_Phase_Statics::NewProp_SchemaBoneIdx,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchFeatureChannel_Phase_Statics::NewProp_ColorPresetIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchFeatureChannel_Phase_Statics::NewProp_InputQueryPose_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchFeatureChannel_Phase_Statics::NewProp_InputQueryPose,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPoseSearchFeatureChannel_Phase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPoseSearchFeatureChannel_Phase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPoseSearchFeatureChannel_Phase_Statics::ClassParams = {
		&UPoseSearchFeatureChannel_Phase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPoseSearchFeatureChannel_Phase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchFeatureChannel_Phase_Statics::PropPointers),
		0,
		0x001030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPoseSearchFeatureChannel_Phase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchFeatureChannel_Phase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPoseSearchFeatureChannel_Phase()
	{
		if (!Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Phase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Phase.OuterSingleton, Z_Construct_UClass_UPoseSearchFeatureChannel_Phase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Phase.OuterSingleton;
	}
	template<> POSESEARCH_API UClass* StaticClass<UPoseSearchFeatureChannel_Phase>()
	{
		return UPoseSearchFeatureChannel_Phase::StaticClass();
	}
	UPoseSearchFeatureChannel_Phase::UPoseSearchFeatureChannel_Phase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPoseSearchFeatureChannel_Phase);
	UPoseSearchFeatureChannel_Phase::~UPoseSearchFeatureChannel_Phase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Private_PoseSearchFeatureChannel_Phase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Private_PoseSearchFeatureChannel_Phase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPoseSearchFeatureChannel_Phase, UPoseSearchFeatureChannel_Phase::StaticClass, TEXT("UPoseSearchFeatureChannel_Phase"), &Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Phase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPoseSearchFeatureChannel_Phase), 3102758254U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Private_PoseSearchFeatureChannel_Phase_h_1250894006(TEXT("/Script/PoseSearch"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Private_PoseSearchFeatureChannel_Phase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Private_PoseSearchFeatureChannel_Phase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
