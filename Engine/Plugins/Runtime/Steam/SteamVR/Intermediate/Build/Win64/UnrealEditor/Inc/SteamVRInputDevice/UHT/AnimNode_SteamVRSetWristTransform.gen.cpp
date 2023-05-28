// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimNode_SteamVRSetWristTransform.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimNodeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_SteamVRSetWristTransform() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
	STEAMVRINPUTDEVICE_API UEnum* Z_Construct_UEnum_SteamVRInputDevice_EHandSkeleton();
	STEAMVRINPUTDEVICE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SteamVRSetWristTransform();
	UPackage* Z_Construct_UPackage__Script_SteamVRInputDevice();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_SteamVRSetWristTransform>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FAnimNode_SteamVRSetWristTransform cannot be polymorphic unless super FAnimNode_Base is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_SteamVRSetWristTransform;
class UScriptStruct* FAnimNode_SteamVRSetWristTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_SteamVRSetWristTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_SteamVRSetWristTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SteamVRSetWristTransform, (UObject*)Z_Construct_UPackage__Script_SteamVRInputDevice(), TEXT("AnimNode_SteamVRSetWristTransform"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_SteamVRSetWristTransform.OuterSingleton;
}
template<> STEAMVRINPUTDEVICE_API UScriptStruct* StaticStruct<FAnimNode_SteamVRSetWristTransform>()
{
	return FAnimNode_SteamVRSetWristTransform::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_SteamVRSetWristTransform_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferencePose_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReferencePose;
		static const UECodeGen_Private::FBytePropertyParams NewProp_HandSkeleton_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandSkeleton_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_HandSkeleton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetPose_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetPose;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SteamVRSetWristTransform_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Custom animation node that sets the wrist transform of a target pose from a reference pose\n*/" },
		{ "Deprecated", "5.1" },
		{ "ModuleRelativePath", "Public/AnimNode_SteamVRSetWristTransform.h" },
		{ "ToolTip", "Custom animation node that sets the wrist transform of a target pose from a reference pose" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_SteamVRSetWristTransform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_SteamVRSetWristTransform>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SteamVRSetWristTransform_Statics::NewProp_ReferencePose_MetaData[] = {
		{ "Category", "Links" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/AnimNode_SteamVRSetWristTransform.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_SteamVRSetWristTransform_Statics::NewProp_ReferencePose = { "ReferencePose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SteamVRSetWristTransform, ReferencePose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SteamVRSetWristTransform_Statics::NewProp_ReferencePose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SteamVRSetWristTransform_Statics::NewProp_ReferencePose_MetaData)) }; // 2393943538
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_SteamVRSetWristTransform_Statics::NewProp_HandSkeleton_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SteamVRSetWristTransform_Statics::NewProp_HandSkeleton_MetaData[] = {
		{ "AlwaysAsPin", "" },
		{ "Category", "Settings" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/AnimNode_SteamVRSetWristTransform.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_SteamVRSetWristTransform_Statics::NewProp_HandSkeleton = { "HandSkeleton", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SteamVRSetWristTransform, HandSkeleton), Z_Construct_UEnum_SteamVRInputDevice_EHandSkeleton, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SteamVRSetWristTransform_Statics::NewProp_HandSkeleton_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SteamVRSetWristTransform_Statics::NewProp_HandSkeleton_MetaData)) }; // 235549510
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SteamVRSetWristTransform_Statics::NewProp_TargetPose_MetaData[] = {
		{ "Category", "Links" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/AnimNode_SteamVRSetWristTransform.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_SteamVRSetWristTransform_Statics::NewProp_TargetPose = { "TargetPose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SteamVRSetWristTransform, TargetPose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SteamVRSetWristTransform_Statics::NewProp_TargetPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SteamVRSetWristTransform_Statics::NewProp_TargetPose_MetaData)) }; // 2393943538
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_SteamVRSetWristTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SteamVRSetWristTransform_Statics::NewProp_ReferencePose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SteamVRSetWristTransform_Statics::NewProp_HandSkeleton_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SteamVRSetWristTransform_Statics::NewProp_HandSkeleton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SteamVRSetWristTransform_Statics::NewProp_TargetPose,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_SteamVRSetWristTransform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamVRInputDevice,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"AnimNode_SteamVRSetWristTransform",
		sizeof(FAnimNode_SteamVRSetWristTransform),
		alignof(FAnimNode_SteamVRSetWristTransform),
		Z_Construct_UScriptStruct_FAnimNode_SteamVRSetWristTransform_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SteamVRSetWristTransform_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SteamVRSetWristTransform_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SteamVRSetWristTransform_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SteamVRSetWristTransform()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_SteamVRSetWristTransform.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_SteamVRSetWristTransform.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_SteamVRSetWristTransform_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_SteamVRSetWristTransform.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_AnimNode_SteamVRSetWristTransform_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_AnimNode_SteamVRSetWristTransform_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_SteamVRSetWristTransform::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_SteamVRSetWristTransform_Statics::NewStructOps, TEXT("AnimNode_SteamVRSetWristTransform"), &Z_Registration_Info_UScriptStruct_AnimNode_SteamVRSetWristTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_SteamVRSetWristTransform), 3721113466U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_AnimNode_SteamVRSetWristTransform_h_4158022520(TEXT("/Script/SteamVRInputDevice"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_AnimNode_SteamVRSetWristTransform_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_AnimNode_SteamVRSetWristTransform_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
