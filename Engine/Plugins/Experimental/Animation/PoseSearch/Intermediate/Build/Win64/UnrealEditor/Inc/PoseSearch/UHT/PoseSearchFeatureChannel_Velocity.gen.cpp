// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/PoseSearchFeatureChannel_Velocity.h"
#include "../../Source/Runtime/Engine/Public/BoneContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePoseSearchFeatureChannel_Velocity() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	POSESEARCH_API UClass* Z_Construct_UClass_UPoseSearchFeatureChannel();
	POSESEARCH_API UClass* Z_Construct_UClass_UPoseSearchFeatureChannel_Velocity();
	POSESEARCH_API UClass* Z_Construct_UClass_UPoseSearchFeatureChannel_Velocity_NoRegister();
	POSESEARCH_API UEnum* Z_Construct_UEnum_PoseSearch_EInputQueryPose();
	UPackage* Z_Construct_UPackage__Script_PoseSearch();
// End Cross Module References
	void UPoseSearchFeatureChannel_Velocity::StaticRegisterNativesUPoseSearchFeatureChannel_Velocity()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPoseSearchFeatureChannel_Velocity);
	UClass* Z_Construct_UClass_UPoseSearchFeatureChannel_Velocity_NoRegister()
	{
		return UPoseSearchFeatureChannel_Velocity::StaticClass();
	}
	struct Z_Construct_UClass_UPoseSearchFeatureChannel_Velocity_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SampleTimeOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SampleTimeOffset;
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseCharacterSpaceVelocities_MetaData[];
#endif
		static void NewProp_bUseCharacterSpaceVelocities_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCharacterSpaceVelocities;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNormalize_MetaData[];
#endif
		static void NewProp_bNormalize_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNormalize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPoseSearchFeatureChannel_Velocity_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPoseSearchFeatureChannel,
		(UObject* (*)())Z_Construct_UPackage__Script_PoseSearch,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchFeatureChannel_Velocity_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Velocity Channel" },
		{ "IncludePath", "PoseSearchFeatureChannel_Velocity.h" },
		{ "ModuleRelativePath", "Private/PoseSearchFeatureChannel_Velocity.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchFeatureChannel_Velocity_Statics::NewProp_Bone_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Private/PoseSearchFeatureChannel_Velocity.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPoseSearchFeatureChannel_Velocity_Statics::NewProp_Bone = { "Bone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseSearchFeatureChannel_Velocity, Bone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UClass_UPoseSearchFeatureChannel_Velocity_Statics::NewProp_Bone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchFeatureChannel_Velocity_Statics::NewProp_Bone_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchFeatureChannel_Velocity_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Private/PoseSearchFeatureChannel_Velocity.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPoseSearchFeatureChannel_Velocity_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseSearchFeatureChannel_Velocity, Weight), METADATA_PARAMS(Z_Construct_UClass_UPoseSearchFeatureChannel_Velocity_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchFeatureChannel_Velocity_Statics::NewProp_Weight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchFeatureChannel_Velocity_Statics::NewProp_SampleTimeOffset_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Private/PoseSearchFeatureChannel_Velocity.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPoseSearchFeatureChannel_Velocity_Statics::NewProp_SampleTimeOffset = { "SampleTimeOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseSearchFeatureChannel_Velocity, SampleTimeOffset), METADATA_PARAMS(Z_Construct_UClass_UPoseSearchFeatureChannel_Velocity_Statics::NewProp_SampleTimeOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchFeatureChannel_Velocity_Statics::NewProp_SampleTimeOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchFeatureChannel_Velocity_Statics::NewProp_SchemaBoneIdx_MetaData[] = {
		{ "ExcludeFromHash", "" },
		{ "ModuleRelativePath", "Private/PoseSearchFeatureChannel_Velocity.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UClass_UPoseSearchFeatureChannel_Velocity_Statics::NewProp_SchemaBoneIdx = { "SchemaBoneIdx", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseSearchFeatureChannel_Velocity, SchemaBoneIdx), METADATA_PARAMS(Z_Construct_UClass_UPoseSearchFeatureChannel_Velocity_Statics::NewProp_SchemaBoneIdx_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchFeatureChannel_Velocity_Statics::NewProp_SchemaBoneIdx_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchFeatureChannel_Velocity_Statics::NewProp_ColorPresetIndex_MetaData[] = {
		{ "Category", "Settings" },
		{ "ExcludeFromHash", "" },
		{ "ModuleRelativePath", "Private/PoseSearchFeatureChannel_Velocity.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPoseSearchFeatureChannel_Velocity_Statics::NewProp_ColorPresetIndex = { "ColorPresetIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseSearchFeatureChannel_Velocity, ColorPresetIndex), METADATA_PARAMS(Z_Construct_UClass_UPoseSearchFeatureChannel_Velocity_Statics::NewProp_ColorPresetIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchFeatureChannel_Velocity_Statics::NewProp_ColorPresetIndex_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPoseSearchFeatureChannel_Velocity_Statics::NewProp_InputQueryPose_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchFeatureChannel_Velocity_Statics::NewProp_InputQueryPose_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Private/PoseSearchFeatureChannel_Velocity.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPoseSearchFeatureChannel_Velocity_Statics::NewProp_InputQueryPose = { "InputQueryPose", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseSearchFeatureChannel_Velocity, InputQueryPose), Z_Construct_UEnum_PoseSearch_EInputQueryPose, METADATA_PARAMS(Z_Construct_UClass_UPoseSearchFeatureChannel_Velocity_Statics::NewProp_InputQueryPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchFeatureChannel_Velocity_Statics::NewProp_InputQueryPose_MetaData)) }; // 3735429544
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchFeatureChannel_Velocity_Statics::NewProp_bUseCharacterSpaceVelocities_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// if bUseCharacterSpaceVelocities is true, velocities will be calculated from the positions in character space, otherwise they will be calculated using global space positions\n" },
		{ "ModuleRelativePath", "Private/PoseSearchFeatureChannel_Velocity.h" },
		{ "ToolTip", "if bUseCharacterSpaceVelocities is true, velocities will be calculated from the positions in character space, otherwise they will be calculated using global space positions" },
	};
#endif
	void Z_Construct_UClass_UPoseSearchFeatureChannel_Velocity_Statics::NewProp_bUseCharacterSpaceVelocities_SetBit(void* Obj)
	{
		((UPoseSearchFeatureChannel_Velocity*)Obj)->bUseCharacterSpaceVelocities = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPoseSearchFeatureChannel_Velocity_Statics::NewProp_bUseCharacterSpaceVelocities = { "bUseCharacterSpaceVelocities", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPoseSearchFeatureChannel_Velocity), &Z_Construct_UClass_UPoseSearchFeatureChannel_Velocity_Statics::NewProp_bUseCharacterSpaceVelocities_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPoseSearchFeatureChannel_Velocity_Statics::NewProp_bUseCharacterSpaceVelocities_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchFeatureChannel_Velocity_Statics::NewProp_bUseCharacterSpaceVelocities_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchFeatureChannel_Velocity_Statics::NewProp_bNormalize_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// if bNormalize is true, velocity will be clamped to a maximum size of one (UPoseSearchFeatureChannel_Velocity will be matching the \"direction\" of the velocity)\n" },
		{ "ModuleRelativePath", "Private/PoseSearchFeatureChannel_Velocity.h" },
		{ "ToolTip", "if bNormalize is true, velocity will be clamped to a maximum size of one (UPoseSearchFeatureChannel_Velocity will be matching the \"direction\" of the velocity)" },
	};
#endif
	void Z_Construct_UClass_UPoseSearchFeatureChannel_Velocity_Statics::NewProp_bNormalize_SetBit(void* Obj)
	{
		((UPoseSearchFeatureChannel_Velocity*)Obj)->bNormalize = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPoseSearchFeatureChannel_Velocity_Statics::NewProp_bNormalize = { "bNormalize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPoseSearchFeatureChannel_Velocity), &Z_Construct_UClass_UPoseSearchFeatureChannel_Velocity_Statics::NewProp_bNormalize_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPoseSearchFeatureChannel_Velocity_Statics::NewProp_bNormalize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchFeatureChannel_Velocity_Statics::NewProp_bNormalize_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPoseSearchFeatureChannel_Velocity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchFeatureChannel_Velocity_Statics::NewProp_Bone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchFeatureChannel_Velocity_Statics::NewProp_Weight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchFeatureChannel_Velocity_Statics::NewProp_SampleTimeOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchFeatureChannel_Velocity_Statics::NewProp_SchemaBoneIdx,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchFeatureChannel_Velocity_Statics::NewProp_ColorPresetIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchFeatureChannel_Velocity_Statics::NewProp_InputQueryPose_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchFeatureChannel_Velocity_Statics::NewProp_InputQueryPose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchFeatureChannel_Velocity_Statics::NewProp_bUseCharacterSpaceVelocities,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchFeatureChannel_Velocity_Statics::NewProp_bNormalize,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPoseSearchFeatureChannel_Velocity_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPoseSearchFeatureChannel_Velocity>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPoseSearchFeatureChannel_Velocity_Statics::ClassParams = {
		&UPoseSearchFeatureChannel_Velocity::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPoseSearchFeatureChannel_Velocity_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchFeatureChannel_Velocity_Statics::PropPointers),
		0,
		0x001030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPoseSearchFeatureChannel_Velocity_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchFeatureChannel_Velocity_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPoseSearchFeatureChannel_Velocity()
	{
		if (!Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Velocity.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Velocity.OuterSingleton, Z_Construct_UClass_UPoseSearchFeatureChannel_Velocity_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Velocity.OuterSingleton;
	}
	template<> POSESEARCH_API UClass* StaticClass<UPoseSearchFeatureChannel_Velocity>()
	{
		return UPoseSearchFeatureChannel_Velocity::StaticClass();
	}
	UPoseSearchFeatureChannel_Velocity::UPoseSearchFeatureChannel_Velocity(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPoseSearchFeatureChannel_Velocity);
	UPoseSearchFeatureChannel_Velocity::~UPoseSearchFeatureChannel_Velocity() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Private_PoseSearchFeatureChannel_Velocity_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Private_PoseSearchFeatureChannel_Velocity_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPoseSearchFeatureChannel_Velocity, UPoseSearchFeatureChannel_Velocity::StaticClass, TEXT("UPoseSearchFeatureChannel_Velocity"), &Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Velocity, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPoseSearchFeatureChannel_Velocity), 2648423179U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Private_PoseSearchFeatureChannel_Velocity_h_706173425(TEXT("/Script/PoseSearch"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Private_PoseSearchFeatureChannel_Velocity_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Private_PoseSearchFeatureChannel_Velocity_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
