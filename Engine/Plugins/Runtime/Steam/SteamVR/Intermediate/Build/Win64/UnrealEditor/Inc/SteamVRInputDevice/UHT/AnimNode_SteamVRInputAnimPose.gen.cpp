// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimNode_SteamVRInputAnimPose.h"
#include "SteamVRInputDeviceFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_SteamVRInputAnimPose() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	STEAMVRINPUTDEVICE_API UEnum* Z_Construct_UEnum_SteamVRInputDevice_EHand();
	STEAMVRINPUTDEVICE_API UEnum* Z_Construct_UEnum_SteamVRInputDevice_EHandSkeleton();
	STEAMVRINPUTDEVICE_API UEnum* Z_Construct_UEnum_SteamVRInputDevice_EMotionRange();
	STEAMVRINPUTDEVICE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose();
	STEAMVRINPUTDEVICE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamVRSkeletonTransform();
	STEAMVRINPUTDEVICE_API UScriptStruct* Z_Construct_UScriptStruct_FUE4RetargettingRefs();
	UPackage* Z_Construct_UPackage__Script_SteamVRInputDevice();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_SteamVRInputAnimPose>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FAnimNode_SteamVRInputAnimPose cannot be polymorphic unless super FAnimNode_Base is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_SteamVRInputAnimPose;
class UScriptStruct* FAnimNode_SteamVRInputAnimPose::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_SteamVRInputAnimPose.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_SteamVRInputAnimPose.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose, (UObject*)Z_Construct_UPackage__Script_SteamVRInputDevice(), TEXT("AnimNode_SteamVRInputAnimPose"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_SteamVRInputAnimPose.OuterSingleton;
}
template<> STEAMVRINPUTDEVICE_API UScriptStruct* StaticStruct<FAnimNode_SteamVRInputAnimPose>()
{
	return FAnimNode_SteamVRInputAnimPose::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_MotionRange_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MotionRange_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MotionRange;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hand_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Hand;
		static const UECodeGen_Private::FBytePropertyParams NewProp_HandSkeleton_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandSkeleton_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_HandSkeleton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mirror_MetaData[];
#endif
		static void NewProp_Mirror_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Mirror;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SteamVRSkeletalTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamVRSkeletalTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UE4RetargettingRefs_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UE4RetargettingRefs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Custom animation node to retrieve poses from the Skeletal Input System\n*/" },
		{ "Deprecated", "5.1" },
		{ "ModuleRelativePath", "Public/AnimNode_SteamVRInputAnimPose.h" },
		{ "ToolTip", "Custom animation node to retrieve poses from the Skeletal Input System" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_SteamVRInputAnimPose>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Statics::NewProp_MotionRange_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Statics::NewProp_MotionRange_MetaData[] = {
		{ "AlwaysAsPin", "" },
		{ "Category", "Settings" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/AnimNode_SteamVRInputAnimPose.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Statics::NewProp_MotionRange = { "MotionRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SteamVRInputAnimPose, MotionRange), Z_Construct_UEnum_SteamVRInputDevice_EMotionRange, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Statics::NewProp_MotionRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Statics::NewProp_MotionRange_MetaData)) }; // 1551573917
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Statics::NewProp_Hand_MetaData[] = {
		{ "AlwaysAsPin", "" },
		{ "Category", "Settings" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/AnimNode_SteamVRInputAnimPose.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SteamVRInputAnimPose, Hand), Z_Construct_UEnum_SteamVRInputDevice_EHand, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Statics::NewProp_Hand_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Statics::NewProp_Hand_MetaData)) }; // 2070071103
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Statics::NewProp_HandSkeleton_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Statics::NewProp_HandSkeleton_MetaData[] = {
		{ "AlwaysAsPin", "" },
		{ "Category", "Settings" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/AnimNode_SteamVRInputAnimPose.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Statics::NewProp_HandSkeleton = { "HandSkeleton", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SteamVRInputAnimPose, HandSkeleton), Z_Construct_UEnum_SteamVRInputDevice_EHandSkeleton, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Statics::NewProp_HandSkeleton_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Statics::NewProp_HandSkeleton_MetaData)) }; // 235549510
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Statics::NewProp_Mirror_MetaData[] = {
		{ "AlwaysAsPin", "" },
		{ "Category", "Settings" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/AnimNode_SteamVRInputAnimPose.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Statics::NewProp_Mirror_SetBit(void* Obj)
	{
		((FAnimNode_SteamVRInputAnimPose*)Obj)->Mirror = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Statics::NewProp_Mirror = { "Mirror", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_SteamVRInputAnimPose), &Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Statics::NewProp_Mirror_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Statics::NewProp_Mirror_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Statics::NewProp_Mirror_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Statics::NewProp_SteamVRSkeletalTransform_MetaData[] = {
		{ "Category", "SteamVRInput" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/AnimNode_SteamVRInputAnimPose.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Statics::NewProp_SteamVRSkeletalTransform = { "SteamVRSkeletalTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SteamVRInputAnimPose, SteamVRSkeletalTransform), Z_Construct_UScriptStruct_FSteamVRSkeletonTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Statics::NewProp_SteamVRSkeletalTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Statics::NewProp_SteamVRSkeletalTransform_MetaData)) }; // 4181772492
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Statics::NewProp_UE4RetargettingRefs_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/AnimNode_SteamVRInputAnimPose.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Statics::NewProp_UE4RetargettingRefs = { "UE4RetargettingRefs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SteamVRInputAnimPose, UE4RetargettingRefs), Z_Construct_UScriptStruct_FUE4RetargettingRefs, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Statics::NewProp_UE4RetargettingRefs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Statics::NewProp_UE4RetargettingRefs_MetaData)) }; // 972219210
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Statics::NewProp_MotionRange_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Statics::NewProp_MotionRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Statics::NewProp_Hand_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Statics::NewProp_Hand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Statics::NewProp_HandSkeleton_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Statics::NewProp_HandSkeleton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Statics::NewProp_Mirror,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Statics::NewProp_SteamVRSkeletalTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Statics::NewProp_UE4RetargettingRefs,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamVRInputDevice,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"AnimNode_SteamVRInputAnimPose",
		sizeof(FAnimNode_SteamVRInputAnimPose),
		alignof(FAnimNode_SteamVRInputAnimPose),
		Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_SteamVRInputAnimPose.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_SteamVRInputAnimPose.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_SteamVRInputAnimPose.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_AnimNode_SteamVRInputAnimPose_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_AnimNode_SteamVRInputAnimPose_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_SteamVRInputAnimPose::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_SteamVRInputAnimPose_Statics::NewStructOps, TEXT("AnimNode_SteamVRInputAnimPose"), &Z_Registration_Info_UScriptStruct_AnimNode_SteamVRInputAnimPose, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_SteamVRInputAnimPose), 2970973854U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_AnimNode_SteamVRInputAnimPose_h_4224466761(TEXT("/Script/SteamVRInputDevice"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_AnimNode_SteamVRInputAnimPose_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_AnimNode_SteamVRInputAnimPose_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
