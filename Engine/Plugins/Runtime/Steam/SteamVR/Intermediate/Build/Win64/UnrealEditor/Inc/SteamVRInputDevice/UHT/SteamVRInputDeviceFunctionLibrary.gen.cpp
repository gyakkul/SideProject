// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamVRInputDeviceFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamVRInputDeviceFunctionLibrary() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	STEAMVRINPUTDEVICE_API UClass* Z_Construct_UClass_UDEPRECATED_USteamVRInputDeviceFunctionLibrary();
	STEAMVRINPUTDEVICE_API UClass* Z_Construct_UClass_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_NoRegister();
	STEAMVRINPUTDEVICE_API UEnum* Z_Construct_UEnum_SteamVRInputDevice_EControllerFidelity();
	STEAMVRINPUTDEVICE_API UEnum* Z_Construct_UEnum_SteamVRInputDevice_EHand();
	STEAMVRINPUTDEVICE_API UEnum* Z_Construct_UEnum_SteamVRInputDevice_EHandSkeleton();
	STEAMVRINPUTDEVICE_API UEnum* Z_Construct_UEnum_SteamVRInputDevice_EMotionRange();
	STEAMVRINPUTDEVICE_API UEnum* Z_Construct_UEnum_SteamVRInputDevice_ESkeletalSummaryDataType();
	STEAMVRINPUTDEVICE_API UEnum* Z_Construct_UEnum_SteamVRInputDevice_ESteamVRHand();
	STEAMVRINPUTDEVICE_API UEnum* Z_Construct_UEnum_SteamVRInputDevice_ESteamVRInputStringBits();
	STEAMVRINPUTDEVICE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamVRAction();
	STEAMVRINPUTDEVICE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamVRActionSet();
	STEAMVRINPUTDEVICE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamVRFingerCurls();
	STEAMVRINPUTDEVICE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamVRFingerSplays();
	STEAMVRINPUTDEVICE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamVRInputBindingInfo();
	STEAMVRINPUTDEVICE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamVRInputOriginInfo();
	STEAMVRINPUTDEVICE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamVRSkeletonTransform();
	STEAMVRINPUTDEVICE_API UScriptStruct* Z_Construct_UScriptStruct_FUE4RetargettingRefs();
	UPackage* Z_Construct_UPackage__Script_SteamVRInputDevice();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SteamVRSkeletonTransform;
class UScriptStruct* FSteamVRSkeletonTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SteamVRSkeletonTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SteamVRSkeletonTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform, (UObject*)Z_Construct_UPackage__Script_SteamVRInputDevice(), TEXT("SteamVRSkeletonTransform"));
	}
	return Z_Registration_Info_UScriptStruct_SteamVRSkeletonTransform.OuterSingleton;
}
template<> STEAMVRINPUTDEVICE_API UScriptStruct* StaticStruct<FSteamVRSkeletonTransform>()
{
	return FSteamVRSkeletonTransform::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Root;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Wrist_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Wrist;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Thumb_0_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Thumb_0;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Thumb_1_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Thumb_1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Thumb_2_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Thumb_2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Thumb_3_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Thumb_3;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_0_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Index_0;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_1_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Index_1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_2_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Index_2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_3_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Index_3;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_4_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Index_4;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Middle_0_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Middle_0;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Middle_1_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Middle_1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Middle_2_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Middle_2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Middle_3_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Middle_3;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Middle_4_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Middle_4;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ring_0_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Ring_0;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ring_1_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Ring_1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ring_2_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Ring_2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ring_3_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Ring_3;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ring_4_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Ring_4;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pinky_0_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Pinky_0;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pinky_1_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Pinky_1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pinky_2_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Pinky_2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pinky_3_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Pinky_3;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pinky_4_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Pinky_4;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Aux_Thumb_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Aux_Thumb;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Aux_Index_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Aux_Index;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Aux_Middle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Aux_Middle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Aux_Ring_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Aux_Ring;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Aux_Pinky_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Aux_Pinky;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** UE4 Bone definition of the SteamVR Skeleton */" },
		{ "Deprecated", "5.1" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
		{ "ToolTip", "UE4 Bone definition of the SteamVR Skeleton" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamVRSkeletonTransform>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Root_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSteamVRSkeletonTransform, Root), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Root_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Wrist_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Wrist = { "Wrist", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSteamVRSkeletonTransform, Wrist), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Wrist_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Wrist_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Thumb_0_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Thumb_0 = { "Thumb_0", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSteamVRSkeletonTransform, Thumb_0), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Thumb_0_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Thumb_0_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Thumb_1_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Thumb_1 = { "Thumb_1", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSteamVRSkeletonTransform, Thumb_1), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Thumb_1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Thumb_1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Thumb_2_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Thumb_2 = { "Thumb_2", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSteamVRSkeletonTransform, Thumb_2), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Thumb_2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Thumb_2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Thumb_3_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Thumb_3 = { "Thumb_3", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSteamVRSkeletonTransform, Thumb_3), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Thumb_3_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Thumb_3_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Index_0_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Index_0 = { "Index_0", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSteamVRSkeletonTransform, Index_0), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Index_0_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Index_0_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Index_1_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Index_1 = { "Index_1", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSteamVRSkeletonTransform, Index_1), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Index_1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Index_1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Index_2_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Index_2 = { "Index_2", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSteamVRSkeletonTransform, Index_2), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Index_2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Index_2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Index_3_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Index_3 = { "Index_3", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSteamVRSkeletonTransform, Index_3), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Index_3_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Index_3_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Index_4_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Index_4 = { "Index_4", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSteamVRSkeletonTransform, Index_4), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Index_4_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Index_4_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Middle_0_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Middle_0 = { "Middle_0", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSteamVRSkeletonTransform, Middle_0), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Middle_0_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Middle_0_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Middle_1_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Middle_1 = { "Middle_1", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSteamVRSkeletonTransform, Middle_1), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Middle_1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Middle_1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Middle_2_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Middle_2 = { "Middle_2", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSteamVRSkeletonTransform, Middle_2), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Middle_2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Middle_2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Middle_3_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Middle_3 = { "Middle_3", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSteamVRSkeletonTransform, Middle_3), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Middle_3_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Middle_3_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Middle_4_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Middle_4 = { "Middle_4", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSteamVRSkeletonTransform, Middle_4), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Middle_4_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Middle_4_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Ring_0_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Ring_0 = { "Ring_0", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSteamVRSkeletonTransform, Ring_0), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Ring_0_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Ring_0_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Ring_1_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Ring_1 = { "Ring_1", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSteamVRSkeletonTransform, Ring_1), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Ring_1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Ring_1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Ring_2_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Ring_2 = { "Ring_2", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSteamVRSkeletonTransform, Ring_2), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Ring_2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Ring_2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Ring_3_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Ring_3 = { "Ring_3", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSteamVRSkeletonTransform, Ring_3), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Ring_3_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Ring_3_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Ring_4_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Ring_4 = { "Ring_4", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSteamVRSkeletonTransform, Ring_4), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Ring_4_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Ring_4_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Pinky_0_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Pinky_0 = { "Pinky_0", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSteamVRSkeletonTransform, Pinky_0), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Pinky_0_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Pinky_0_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Pinky_1_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Pinky_1 = { "Pinky_1", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSteamVRSkeletonTransform, Pinky_1), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Pinky_1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Pinky_1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Pinky_2_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Pinky_2 = { "Pinky_2", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSteamVRSkeletonTransform, Pinky_2), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Pinky_2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Pinky_2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Pinky_3_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Pinky_3 = { "Pinky_3", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSteamVRSkeletonTransform, Pinky_3), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Pinky_3_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Pinky_3_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Pinky_4_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Pinky_4 = { "Pinky_4", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSteamVRSkeletonTransform, Pinky_4), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Pinky_4_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Pinky_4_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Aux_Thumb_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Aux_Thumb = { "Aux_Thumb", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSteamVRSkeletonTransform, Aux_Thumb), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Aux_Thumb_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Aux_Thumb_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Aux_Index_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Aux_Index = { "Aux_Index", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSteamVRSkeletonTransform, Aux_Index), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Aux_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Aux_Index_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Aux_Middle_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Aux_Middle = { "Aux_Middle", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSteamVRSkeletonTransform, Aux_Middle), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Aux_Middle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Aux_Middle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Aux_Ring_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Aux_Ring = { "Aux_Ring", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSteamVRSkeletonTransform, Aux_Ring), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Aux_Ring_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Aux_Ring_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Aux_Pinky_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Aux_Pinky = { "Aux_Pinky", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSteamVRSkeletonTransform, Aux_Pinky), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Aux_Pinky_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Aux_Pinky_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Root,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Wrist,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Thumb_0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Thumb_1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Thumb_2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Thumb_3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Index_0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Index_1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Index_2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Index_3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Index_4,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Middle_0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Middle_1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Middle_2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Middle_3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Middle_4,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Ring_0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Ring_1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Ring_2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Ring_3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Ring_4,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Pinky_0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Pinky_1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Pinky_2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Pinky_3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Pinky_4,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Aux_Thumb,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Aux_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Aux_Middle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Aux_Ring,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewProp_Aux_Pinky,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamVRInputDevice,
		nullptr,
		&NewStructOps,
		"SteamVRSkeletonTransform",
		sizeof(FSteamVRSkeletonTransform),
		alignof(FSteamVRSkeletonTransform),
		Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSteamVRSkeletonTransform()
	{
		if (!Z_Registration_Info_UScriptStruct_SteamVRSkeletonTransform.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SteamVRSkeletonTransform.InnerSingleton, Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SteamVRSkeletonTransform.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SteamVRFingerCurls;
class UScriptStruct* FSteamVRFingerCurls::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SteamVRFingerCurls.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SteamVRFingerCurls.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamVRFingerCurls, (UObject*)Z_Construct_UPackage__Script_SteamVRInputDevice(), TEXT("SteamVRFingerCurls"));
	}
	return Z_Registration_Info_UScriptStruct_SteamVRFingerCurls.OuterSingleton;
}
template<> STEAMVRINPUTDEVICE_API UScriptStruct* StaticStruct<FSteamVRFingerCurls>()
{
	return FSteamVRFingerCurls::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSteamVRFingerCurls_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Thumb_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Thumb;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Middle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Middle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ring_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Ring;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pinky_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Pinky;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRFingerCurls_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** SteamVR finger curls */" },
		{ "Deprecated", "5.1" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
		{ "ToolTip", "SteamVR finger curls" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSteamVRFingerCurls_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamVRFingerCurls>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRFingerCurls_Statics::NewProp_Thumb_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSteamVRFingerCurls_Statics::NewProp_Thumb = { "Thumb", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSteamVRFingerCurls, Thumb), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRFingerCurls_Statics::NewProp_Thumb_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRFingerCurls_Statics::NewProp_Thumb_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRFingerCurls_Statics::NewProp_Index_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSteamVRFingerCurls_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSteamVRFingerCurls, Index), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRFingerCurls_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRFingerCurls_Statics::NewProp_Index_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRFingerCurls_Statics::NewProp_Middle_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSteamVRFingerCurls_Statics::NewProp_Middle = { "Middle", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSteamVRFingerCurls, Middle), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRFingerCurls_Statics::NewProp_Middle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRFingerCurls_Statics::NewProp_Middle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRFingerCurls_Statics::NewProp_Ring_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSteamVRFingerCurls_Statics::NewProp_Ring = { "Ring", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSteamVRFingerCurls, Ring), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRFingerCurls_Statics::NewProp_Ring_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRFingerCurls_Statics::NewProp_Ring_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRFingerCurls_Statics::NewProp_Pinky_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSteamVRFingerCurls_Statics::NewProp_Pinky = { "Pinky", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSteamVRFingerCurls, Pinky), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRFingerCurls_Statics::NewProp_Pinky_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRFingerCurls_Statics::NewProp_Pinky_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSteamVRFingerCurls_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRFingerCurls_Statics::NewProp_Thumb,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRFingerCurls_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRFingerCurls_Statics::NewProp_Middle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRFingerCurls_Statics::NewProp_Ring,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRFingerCurls_Statics::NewProp_Pinky,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamVRFingerCurls_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamVRInputDevice,
		nullptr,
		&NewStructOps,
		"SteamVRFingerCurls",
		sizeof(FSteamVRFingerCurls),
		alignof(FSteamVRFingerCurls),
		Z_Construct_UScriptStruct_FSteamVRFingerCurls_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRFingerCurls_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRFingerCurls_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRFingerCurls_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSteamVRFingerCurls()
	{
		if (!Z_Registration_Info_UScriptStruct_SteamVRFingerCurls.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SteamVRFingerCurls.InnerSingleton, Z_Construct_UScriptStruct_FSteamVRFingerCurls_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SteamVRFingerCurls.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SteamVRFingerSplays;
class UScriptStruct* FSteamVRFingerSplays::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SteamVRFingerSplays.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SteamVRFingerSplays.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamVRFingerSplays, (UObject*)Z_Construct_UPackage__Script_SteamVRInputDevice(), TEXT("SteamVRFingerSplays"));
	}
	return Z_Registration_Info_UScriptStruct_SteamVRFingerSplays.OuterSingleton;
}
template<> STEAMVRINPUTDEVICE_API UScriptStruct* StaticStruct<FSteamVRFingerSplays>()
{
	return FSteamVRFingerSplays::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSteamVRFingerSplays_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Thumb_Index_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Thumb_Index;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_Middle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Index_Middle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Middle_Ring_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Middle_Ring;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ring_Pinky_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Ring_Pinky;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRFingerSplays_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** SteamVR finger splays */" },
		{ "Deprecated", "5.1" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
		{ "ToolTip", "SteamVR finger splays" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSteamVRFingerSplays_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamVRFingerSplays>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRFingerSplays_Statics::NewProp_Thumb_Index_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSteamVRFingerSplays_Statics::NewProp_Thumb_Index = { "Thumb_Index", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSteamVRFingerSplays, Thumb_Index), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRFingerSplays_Statics::NewProp_Thumb_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRFingerSplays_Statics::NewProp_Thumb_Index_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRFingerSplays_Statics::NewProp_Index_Middle_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSteamVRFingerSplays_Statics::NewProp_Index_Middle = { "Index_Middle", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSteamVRFingerSplays, Index_Middle), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRFingerSplays_Statics::NewProp_Index_Middle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRFingerSplays_Statics::NewProp_Index_Middle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRFingerSplays_Statics::NewProp_Middle_Ring_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSteamVRFingerSplays_Statics::NewProp_Middle_Ring = { "Middle_Ring", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSteamVRFingerSplays, Middle_Ring), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRFingerSplays_Statics::NewProp_Middle_Ring_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRFingerSplays_Statics::NewProp_Middle_Ring_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRFingerSplays_Statics::NewProp_Ring_Pinky_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSteamVRFingerSplays_Statics::NewProp_Ring_Pinky = { "Ring_Pinky", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSteamVRFingerSplays, Ring_Pinky), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRFingerSplays_Statics::NewProp_Ring_Pinky_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRFingerSplays_Statics::NewProp_Ring_Pinky_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSteamVRFingerSplays_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRFingerSplays_Statics::NewProp_Thumb_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRFingerSplays_Statics::NewProp_Index_Middle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRFingerSplays_Statics::NewProp_Middle_Ring,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRFingerSplays_Statics::NewProp_Ring_Pinky,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamVRFingerSplays_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamVRInputDevice,
		nullptr,
		&NewStructOps,
		"SteamVRFingerSplays",
		sizeof(FSteamVRFingerSplays),
		alignof(FSteamVRFingerSplays),
		Z_Construct_UScriptStruct_FSteamVRFingerSplays_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRFingerSplays_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRFingerSplays_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRFingerSplays_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSteamVRFingerSplays()
	{
		if (!Z_Registration_Info_UScriptStruct_SteamVRFingerSplays.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SteamVRFingerSplays.InnerSingleton, Z_Construct_UScriptStruct_FSteamVRFingerSplays_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SteamVRFingerSplays.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SteamVRAction;
class UScriptStruct* FSteamVRAction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SteamVRAction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SteamVRAction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamVRAction, (UObject*)Z_Construct_UPackage__Script_SteamVRInputDevice(), TEXT("SteamVRAction"));
	}
	return Z_Registration_Info_UScriptStruct_SteamVRAction.OuterSingleton;
}
template<> STEAMVRINPUTDEVICE_API UScriptStruct* StaticStruct<FSteamVRAction>()
{
	return FSteamVRAction::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSteamVRAction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRAction_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** SteamVR actions as defined by the developer */" },
		{ "Deprecated", "5.1" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
		{ "ToolTip", "SteamVR actions as defined by the developer" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSteamVRAction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamVRAction>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRAction_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSteamVRAction_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSteamVRAction, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRAction_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRAction_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRAction_Statics::NewProp_Path_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSteamVRAction_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSteamVRAction, Path), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRAction_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRAction_Statics::NewProp_Path_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSteamVRAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRAction_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRAction_Statics::NewProp_Path,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamVRAction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamVRInputDevice,
		nullptr,
		&NewStructOps,
		"SteamVRAction",
		sizeof(FSteamVRAction),
		alignof(FSteamVRAction),
		Z_Construct_UScriptStruct_FSteamVRAction_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRAction_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRAction_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRAction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSteamVRAction()
	{
		if (!Z_Registration_Info_UScriptStruct_SteamVRAction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SteamVRAction.InnerSingleton, Z_Construct_UScriptStruct_FSteamVRAction_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SteamVRAction.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SteamVRActionSet;
class UScriptStruct* FSteamVRActionSet::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SteamVRActionSet.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SteamVRActionSet.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamVRActionSet, (UObject*)Z_Construct_UPackage__Script_SteamVRInputDevice(), TEXT("SteamVRActionSet"));
	}
	return Z_Registration_Info_UScriptStruct_SteamVRActionSet.OuterSingleton;
}
template<> STEAMVRINPUTDEVICE_API UScriptStruct* StaticStruct<FSteamVRActionSet>()
{
	return FSteamVRActionSet::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSteamVRActionSet_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRActionSet_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** SteamVR action set as defined by the developer */" },
		{ "Deprecated", "5.1" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
		{ "ToolTip", "SteamVR action set as defined by the developer" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSteamVRActionSet_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamVRActionSet>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRActionSet_Statics::NewProp_Path_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSteamVRActionSet_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSteamVRActionSet, Path), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRActionSet_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRActionSet_Statics::NewProp_Path_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSteamVRActionSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRActionSet_Statics::NewProp_Path,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamVRActionSet_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamVRInputDevice,
		nullptr,
		&NewStructOps,
		"SteamVRActionSet",
		sizeof(FSteamVRActionSet),
		alignof(FSteamVRActionSet),
		Z_Construct_UScriptStruct_FSteamVRActionSet_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRActionSet_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRActionSet_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRActionSet_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSteamVRActionSet()
	{
		if (!Z_Registration_Info_UScriptStruct_SteamVRActionSet.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SteamVRActionSet.InnerSingleton, Z_Construct_UScriptStruct_FSteamVRActionSet_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SteamVRActionSet.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SteamVRInputOriginInfo;
class UScriptStruct* FSteamVRInputOriginInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SteamVRInputOriginInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SteamVRInputOriginInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamVRInputOriginInfo, (UObject*)Z_Construct_UPackage__Script_SteamVRInputDevice(), TEXT("SteamVRInputOriginInfo"));
	}
	return Z_Registration_Info_UScriptStruct_SteamVRInputOriginInfo.OuterSingleton;
}
template<> STEAMVRINPUTDEVICE_API UScriptStruct* StaticStruct<FSteamVRInputOriginInfo>()
{
	return FSteamVRInputOriginInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSteamVRInputOriginInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackedDeviceIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TrackedDeviceIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderModelComponentName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RenderModelComponentName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackedDeviceModel_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TrackedDeviceModel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRInputOriginInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Information about the tracked device associated from the input source */" },
		{ "Deprecated", "5.1" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
		{ "ToolTip", "Information about the tracked device associated from the input source" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSteamVRInputOriginInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamVRInputOriginInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRInputOriginInfo_Statics::NewProp_TrackedDeviceIndex_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSteamVRInputOriginInfo_Statics::NewProp_TrackedDeviceIndex = { "TrackedDeviceIndex", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSteamVRInputOriginInfo, TrackedDeviceIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRInputOriginInfo_Statics::NewProp_TrackedDeviceIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRInputOriginInfo_Statics::NewProp_TrackedDeviceIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRInputOriginInfo_Statics::NewProp_RenderModelComponentName_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSteamVRInputOriginInfo_Statics::NewProp_RenderModelComponentName = { "RenderModelComponentName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSteamVRInputOriginInfo, RenderModelComponentName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRInputOriginInfo_Statics::NewProp_RenderModelComponentName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRInputOriginInfo_Statics::NewProp_RenderModelComponentName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRInputOriginInfo_Statics::NewProp_TrackedDeviceModel_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSteamVRInputOriginInfo_Statics::NewProp_TrackedDeviceModel = { "TrackedDeviceModel", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSteamVRInputOriginInfo, TrackedDeviceModel), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRInputOriginInfo_Statics::NewProp_TrackedDeviceModel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRInputOriginInfo_Statics::NewProp_TrackedDeviceModel_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSteamVRInputOriginInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRInputOriginInfo_Statics::NewProp_TrackedDeviceIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRInputOriginInfo_Statics::NewProp_RenderModelComponentName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRInputOriginInfo_Statics::NewProp_TrackedDeviceModel,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamVRInputOriginInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamVRInputDevice,
		nullptr,
		&NewStructOps,
		"SteamVRInputOriginInfo",
		sizeof(FSteamVRInputOriginInfo),
		alignof(FSteamVRInputOriginInfo),
		Z_Construct_UScriptStruct_FSteamVRInputOriginInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRInputOriginInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRInputOriginInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRInputOriginInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSteamVRInputOriginInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_SteamVRInputOriginInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SteamVRInputOriginInfo.InnerSingleton, Z_Construct_UScriptStruct_FSteamVRInputOriginInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SteamVRInputOriginInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UE4RetargettingRefs;
class UScriptStruct* FUE4RetargettingRefs::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UE4RetargettingRefs.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UE4RetargettingRefs.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUE4RetargettingRefs, (UObject*)Z_Construct_UPackage__Script_SteamVRInputDevice(), TEXT("UE4RetargettingRefs"));
	}
	return Z_Registration_Info_UScriptStruct_UE4RetargettingRefs.OuterSingleton;
}
template<> STEAMVRINPUTDEVICE_API UScriptStruct* StaticStruct<FUE4RetargettingRefs>()
{
	return FUE4RetargettingRefs::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUE4RetargettingRefs_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsInitialized_MetaData[];
#endif
		static void NewProp_bIsInitialized_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInitialized;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsRightHanded_MetaData[];
#endif
		static void NewProp_bIsRightHanded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRightHanded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KnuckleAverageMS_UE4_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_KnuckleAverageMS_UE4;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WristSideDirectionLS_UE4_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WristSideDirectionLS_UE4;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WristForwardLS_UE4_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WristForwardLS_UE4;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE4RetargettingRefs_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Retargetting information for the SteamVR skeleton to UE4 stock skeleton */" },
		{ "Deprecated", "5.1" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
		{ "ToolTip", "Retargetting information for the SteamVR skeleton to UE4 stock skeleton" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUE4RetargettingRefs_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUE4RetargettingRefs>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE4RetargettingRefs_Statics::NewProp_bIsInitialized_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FUE4RetargettingRefs_Statics::NewProp_bIsInitialized_SetBit(void* Obj)
	{
		((FUE4RetargettingRefs*)Obj)->bIsInitialized = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUE4RetargettingRefs_Statics::NewProp_bIsInitialized = { "bIsInitialized", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FUE4RetargettingRefs), &Z_Construct_UScriptStruct_FUE4RetargettingRefs_Statics::NewProp_bIsInitialized_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FUE4RetargettingRefs_Statics::NewProp_bIsInitialized_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE4RetargettingRefs_Statics::NewProp_bIsInitialized_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE4RetargettingRefs_Statics::NewProp_bIsRightHanded_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FUE4RetargettingRefs_Statics::NewProp_bIsRightHanded_SetBit(void* Obj)
	{
		((FUE4RetargettingRefs*)Obj)->bIsRightHanded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUE4RetargettingRefs_Statics::NewProp_bIsRightHanded = { "bIsRightHanded", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FUE4RetargettingRefs), &Z_Construct_UScriptStruct_FUE4RetargettingRefs_Statics::NewProp_bIsRightHanded_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FUE4RetargettingRefs_Statics::NewProp_bIsRightHanded_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE4RetargettingRefs_Statics::NewProp_bIsRightHanded_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE4RetargettingRefs_Statics::NewProp_KnuckleAverageMS_UE4_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUE4RetargettingRefs_Statics::NewProp_KnuckleAverageMS_UE4 = { "KnuckleAverageMS_UE4", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUE4RetargettingRefs, KnuckleAverageMS_UE4), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FUE4RetargettingRefs_Statics::NewProp_KnuckleAverageMS_UE4_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE4RetargettingRefs_Statics::NewProp_KnuckleAverageMS_UE4_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE4RetargettingRefs_Statics::NewProp_WristSideDirectionLS_UE4_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUE4RetargettingRefs_Statics::NewProp_WristSideDirectionLS_UE4 = { "WristSideDirectionLS_UE4", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUE4RetargettingRefs, WristSideDirectionLS_UE4), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FUE4RetargettingRefs_Statics::NewProp_WristSideDirectionLS_UE4_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE4RetargettingRefs_Statics::NewProp_WristSideDirectionLS_UE4_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUE4RetargettingRefs_Statics::NewProp_WristForwardLS_UE4_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUE4RetargettingRefs_Statics::NewProp_WristForwardLS_UE4 = { "WristForwardLS_UE4", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUE4RetargettingRefs, WristForwardLS_UE4), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FUE4RetargettingRefs_Statics::NewProp_WristForwardLS_UE4_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE4RetargettingRefs_Statics::NewProp_WristForwardLS_UE4_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUE4RetargettingRefs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE4RetargettingRefs_Statics::NewProp_bIsInitialized,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE4RetargettingRefs_Statics::NewProp_bIsRightHanded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE4RetargettingRefs_Statics::NewProp_KnuckleAverageMS_UE4,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE4RetargettingRefs_Statics::NewProp_WristSideDirectionLS_UE4,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUE4RetargettingRefs_Statics::NewProp_WristForwardLS_UE4,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUE4RetargettingRefs_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamVRInputDevice,
		nullptr,
		&NewStructOps,
		"UE4RetargettingRefs",
		sizeof(FUE4RetargettingRefs),
		alignof(FUE4RetargettingRefs),
		Z_Construct_UScriptStruct_FUE4RetargettingRefs_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE4RetargettingRefs_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUE4RetargettingRefs_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUE4RetargettingRefs_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUE4RetargettingRefs()
	{
		if (!Z_Registration_Info_UScriptStruct_UE4RetargettingRefs.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UE4RetargettingRefs.InnerSingleton, Z_Construct_UScriptStruct_FUE4RetargettingRefs_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UE4RetargettingRefs.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SteamVRInputBindingInfo;
class UScriptStruct* FSteamVRInputBindingInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SteamVRInputBindingInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SteamVRInputBindingInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamVRInputBindingInfo, (UObject*)Z_Construct_UPackage__Script_SteamVRInputDevice(), TEXT("SteamVRInputBindingInfo"));
	}
	return Z_Registration_Info_UScriptStruct_SteamVRInputBindingInfo.OuterSingleton;
}
template<> STEAMVRINPUTDEVICE_API UScriptStruct* StaticStruct<FSteamVRInputBindingInfo>()
{
	return FSteamVRInputBindingInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSteamVRInputBindingInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DevicePathName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DevicePathName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputPathName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InputPathName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModeName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ModeName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SlotName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRInputBindingInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Information about the input bindings for an action on currently active controller (i.e device path, input path, mode, slot)  */" },
		{ "Deprecated", "5.1" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
		{ "ToolTip", "Information about the input bindings for an action on currently active controller (i.e device path, input path, mode, slot)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSteamVRInputBindingInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamVRInputBindingInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRInputBindingInfo_Statics::NewProp_DevicePathName_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSteamVRInputBindingInfo_Statics::NewProp_DevicePathName = { "DevicePathName", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSteamVRInputBindingInfo, DevicePathName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRInputBindingInfo_Statics::NewProp_DevicePathName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRInputBindingInfo_Statics::NewProp_DevicePathName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRInputBindingInfo_Statics::NewProp_InputPathName_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSteamVRInputBindingInfo_Statics::NewProp_InputPathName = { "InputPathName", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSteamVRInputBindingInfo, InputPathName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRInputBindingInfo_Statics::NewProp_InputPathName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRInputBindingInfo_Statics::NewProp_InputPathName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRInputBindingInfo_Statics::NewProp_ModeName_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSteamVRInputBindingInfo_Statics::NewProp_ModeName = { "ModeName", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSteamVRInputBindingInfo, ModeName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRInputBindingInfo_Statics::NewProp_ModeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRInputBindingInfo_Statics::NewProp_ModeName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamVRInputBindingInfo_Statics::NewProp_SlotName_MetaData[] = {
		{ "Category", "SteamVR Input" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSteamVRInputBindingInfo_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSteamVRInputBindingInfo, SlotName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRInputBindingInfo_Statics::NewProp_SlotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRInputBindingInfo_Statics::NewProp_SlotName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSteamVRInputBindingInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRInputBindingInfo_Statics::NewProp_DevicePathName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRInputBindingInfo_Statics::NewProp_InputPathName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRInputBindingInfo_Statics::NewProp_ModeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamVRInputBindingInfo_Statics::NewProp_SlotName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamVRInputBindingInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamVRInputDevice,
		nullptr,
		&NewStructOps,
		"SteamVRInputBindingInfo",
		sizeof(FSteamVRInputBindingInfo),
		alignof(FSteamVRInputBindingInfo),
		Z_Construct_UScriptStruct_FSteamVRInputBindingInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRInputBindingInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamVRInputBindingInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamVRInputBindingInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSteamVRInputBindingInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_SteamVRInputBindingInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SteamVRInputBindingInfo.InnerSingleton, Z_Construct_UScriptStruct_FSteamVRInputBindingInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SteamVRInputBindingInfo.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamVRHand;
	static UEnum* ESteamVRHand_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESteamVRHand.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESteamVRHand.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamVRInputDevice_ESteamVRHand, (UObject*)Z_Construct_UPackage__Script_SteamVRInputDevice(), TEXT("ESteamVRHand"));
		}
		return Z_Registration_Info_UEnum_ESteamVRHand.OuterSingleton;
	}
	template<> STEAMVRINPUTDEVICE_API UEnum* StaticEnum<ESteamVRHand>()
	{
		return ESteamVRHand_StaticEnum();
	}
	struct Z_Construct_UEnum_SteamVRInputDevice_ESteamVRHand_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SteamVRInputDevice_ESteamVRHand_Statics::Enumerators[] = {
		{ "ESteamVRHand::VR_Left", (int64)ESteamVRHand::VR_Left },
		{ "ESteamVRHand::VR_Right", (int64)ESteamVRHand::VR_Right },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SteamVRInputDevice_ESteamVRHand_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Convenience type for SteamVR Hand designation (Left/Right) */" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
		{ "ToolTip", "Convenience type for SteamVR Hand designation (Left/Right)" },
		{ "VR_Left.DisplayName", "Left" },
		{ "VR_Left.Name", "ESteamVRHand::VR_Left" },
		{ "VR_Right.DisplayName", "Right" },
		{ "VR_Right.Name", "ESteamVRHand::VR_Right" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamVRInputDevice_ESteamVRHand_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SteamVRInputDevice,
		nullptr,
		"ESteamVRHand",
		"ESteamVRHand",
		Z_Construct_UEnum_SteamVRInputDevice_ESteamVRHand_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SteamVRInputDevice_ESteamVRHand_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SteamVRInputDevice_ESteamVRHand_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SteamVRInputDevice_ESteamVRHand_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SteamVRInputDevice_ESteamVRHand()
	{
		if (!Z_Registration_Info_UEnum_ESteamVRHand.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamVRHand.InnerSingleton, Z_Construct_UEnum_SteamVRInputDevice_ESteamVRHand_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESteamVRHand.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMotionRange;
	static UEnum* EMotionRange_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMotionRange.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMotionRange.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamVRInputDevice_EMotionRange, (UObject*)Z_Construct_UPackage__Script_SteamVRInputDevice(), TEXT("EMotionRange"));
		}
		return Z_Registration_Info_UEnum_EMotionRange.OuterSingleton;
	}
	template<> STEAMVRINPUTDEVICE_API UEnum* StaticEnum<EMotionRange>()
	{
		return EMotionRange_StaticEnum();
	}
	struct Z_Construct_UEnum_SteamVRInputDevice_EMotionRange_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SteamVRInputDevice_EMotionRange_Statics::Enumerators[] = {
		{ "EMotionRange::VR_WithoutController", (int64)EMotionRange::VR_WithoutController },
		{ "EMotionRange::VR_WithController", (int64)EMotionRange::VR_WithController },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SteamVRInputDevice_EMotionRange_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Valid range of motion for a skeletal animation */" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
		{ "ToolTip", "Valid range of motion for a skeletal animation" },
		{ "VR_WithController.DisplayName", "With Controller" },
		{ "VR_WithController.Name", "EMotionRange::VR_WithController" },
		{ "VR_WithoutController.DisplayName", "Without Controller" },
		{ "VR_WithoutController.Name", "EMotionRange::VR_WithoutController" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamVRInputDevice_EMotionRange_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SteamVRInputDevice,
		nullptr,
		"EMotionRange",
		"EMotionRange",
		Z_Construct_UEnum_SteamVRInputDevice_EMotionRange_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SteamVRInputDevice_EMotionRange_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SteamVRInputDevice_EMotionRange_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SteamVRInputDevice_EMotionRange_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SteamVRInputDevice_EMotionRange()
	{
		if (!Z_Registration_Info_UEnum_EMotionRange.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMotionRange.InnerSingleton, Z_Construct_UEnum_SteamVRInputDevice_EMotionRange_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMotionRange.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHand;
	static UEnum* EHand_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHand.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHand.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamVRInputDevice_EHand, (UObject*)Z_Construct_UPackage__Script_SteamVRInputDevice(), TEXT("EHand"));
		}
		return Z_Registration_Info_UEnum_EHand.OuterSingleton;
	}
	template<> STEAMVRINPUTDEVICE_API UEnum* StaticEnum<EHand>()
	{
		return EHand_StaticEnum();
	}
	struct Z_Construct_UEnum_SteamVRInputDevice_EHand_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SteamVRInputDevice_EHand_Statics::Enumerators[] = {
		{ "EHand::VR_LeftHand", (int64)EHand::VR_LeftHand },
		{ "EHand::VR_RightHand", (int64)EHand::VR_RightHand },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SteamVRInputDevice_EHand_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Valid values for hands thats used for the Skeletal Input System calls */" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
		{ "ToolTip", "Valid values for hands thats used for the Skeletal Input System calls" },
		{ "VR_LeftHand.DisplayName", "Left Hand" },
		{ "VR_LeftHand.Name", "EHand::VR_LeftHand" },
		{ "VR_RightHand.DisplayName", "Right Hand" },
		{ "VR_RightHand.Name", "EHand::VR_RightHand" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamVRInputDevice_EHand_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SteamVRInputDevice,
		nullptr,
		"EHand",
		"EHand",
		Z_Construct_UEnum_SteamVRInputDevice_EHand_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SteamVRInputDevice_EHand_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SteamVRInputDevice_EHand_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SteamVRInputDevice_EHand_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SteamVRInputDevice_EHand()
	{
		if (!Z_Registration_Info_UEnum_EHand.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHand.InnerSingleton, Z_Construct_UEnum_SteamVRInputDevice_EHand_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHand.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHandSkeleton;
	static UEnum* EHandSkeleton_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHandSkeleton.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHandSkeleton.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamVRInputDevice_EHandSkeleton, (UObject*)Z_Construct_UPackage__Script_SteamVRInputDevice(), TEXT("EHandSkeleton"));
		}
		return Z_Registration_Info_UEnum_EHandSkeleton.OuterSingleton;
	}
	template<> STEAMVRINPUTDEVICE_API UEnum* StaticEnum<EHandSkeleton>()
	{
		return EHandSkeleton_StaticEnum();
	}
	struct Z_Construct_UEnum_SteamVRInputDevice_EHandSkeleton_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SteamVRInputDevice_EHandSkeleton_Statics::Enumerators[] = {
		{ "EHandSkeleton::VR_SteamVRHandSkeleton", (int64)EHandSkeleton::VR_SteamVRHandSkeleton },
		{ "EHandSkeleton::VR_UE4HandSkeleton", (int64)EHandSkeleton::VR_UE4HandSkeleton },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SteamVRInputDevice_EHandSkeleton_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Types of known skeletons that this animation node can handle */" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
		{ "ToolTip", "Types of known skeletons that this animation node can handle" },
		{ "VR_SteamVRHandSkeleton.DisplayName", "SteamVR Hand Skeleton" },
		{ "VR_SteamVRHandSkeleton.Name", "EHandSkeleton::VR_SteamVRHandSkeleton" },
		{ "VR_UE4HandSkeleton.DisplayName", "UE4 Hand Skeleton" },
		{ "VR_UE4HandSkeleton.Name", "EHandSkeleton::VR_UE4HandSkeleton" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamVRInputDevice_EHandSkeleton_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SteamVRInputDevice,
		nullptr,
		"EHandSkeleton",
		"EHandSkeleton",
		Z_Construct_UEnum_SteamVRInputDevice_EHandSkeleton_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SteamVRInputDevice_EHandSkeleton_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SteamVRInputDevice_EHandSkeleton_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SteamVRInputDevice_EHandSkeleton_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SteamVRInputDevice_EHandSkeleton()
	{
		if (!Z_Registration_Info_UEnum_EHandSkeleton.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHandSkeleton.InnerSingleton, Z_Construct_UEnum_SteamVRInputDevice_EHandSkeleton_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHandSkeleton.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EControllerFidelity;
	static UEnum* EControllerFidelity_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EControllerFidelity.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EControllerFidelity.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamVRInputDevice_EControllerFidelity, (UObject*)Z_Construct_UPackage__Script_SteamVRInputDevice(), TEXT("EControllerFidelity"));
		}
		return Z_Registration_Info_UEnum_EControllerFidelity.OuterSingleton;
	}
	template<> STEAMVRINPUTDEVICE_API UEnum* StaticEnum<EControllerFidelity>()
	{
		return EControllerFidelity_StaticEnum();
	}
	struct Z_Construct_UEnum_SteamVRInputDevice_EControllerFidelity_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SteamVRInputDevice_EControllerFidelity_Statics::Enumerators[] = {
		{ "EControllerFidelity::VR_ControllerFidelity_Estimated", (int64)EControllerFidelity::VR_ControllerFidelity_Estimated },
		{ "EControllerFidelity::VR_ControllerFidelity_Full", (int64)EControllerFidelity::VR_ControllerFidelity_Full },
		{ "EControllerFidelity::VR_ControllerFidelity_Partial", (int64)EControllerFidelity::VR_ControllerFidelity_Partial },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SteamVRInputDevice_EControllerFidelity_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Skeletal Tracking Level of a controller */" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
		{ "ToolTip", "Skeletal Tracking Level of a controller" },
		{ "VR_ControllerFidelity_Estimated.DisplayName", "Controller Fidelity Estimated" },
		{ "VR_ControllerFidelity_Estimated.Name", "EControllerFidelity::VR_ControllerFidelity_Estimated" },
		{ "VR_ControllerFidelity_Full.DisplayName", "Controller Fidelity Full" },
		{ "VR_ControllerFidelity_Full.Name", "EControllerFidelity::VR_ControllerFidelity_Full" },
		{ "VR_ControllerFidelity_Partial.DisplayName", "Controller Fidelity Partial" },
		{ "VR_ControllerFidelity_Partial.Name", "EControllerFidelity::VR_ControllerFidelity_Partial" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamVRInputDevice_EControllerFidelity_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SteamVRInputDevice,
		nullptr,
		"EControllerFidelity",
		"EControllerFidelity",
		Z_Construct_UEnum_SteamVRInputDevice_EControllerFidelity_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SteamVRInputDevice_EControllerFidelity_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SteamVRInputDevice_EControllerFidelity_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SteamVRInputDevice_EControllerFidelity_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SteamVRInputDevice_EControllerFidelity()
	{
		if (!Z_Registration_Info_UEnum_EControllerFidelity.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EControllerFidelity.InnerSingleton, Z_Construct_UEnum_SteamVRInputDevice_EControllerFidelity_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EControllerFidelity.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamVRInputStringBits;
	static UEnum* ESteamVRInputStringBits_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESteamVRInputStringBits.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESteamVRInputStringBits.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamVRInputDevice_ESteamVRInputStringBits, (UObject*)Z_Construct_UPackage__Script_SteamVRInputDevice(), TEXT("ESteamVRInputStringBits"));
		}
		return Z_Registration_Info_UEnum_ESteamVRInputStringBits.OuterSingleton;
	}
	template<> STEAMVRINPUTDEVICE_API UEnum* StaticEnum<ESteamVRInputStringBits>()
	{
		return ESteamVRInputStringBits_StaticEnum();
	}
	struct Z_Construct_UEnum_SteamVRInputDevice_ESteamVRInputStringBits_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SteamVRInputDevice_ESteamVRInputStringBits_Statics::Enumerators[] = {
		{ "ESteamVRInputStringBits::VR_InputString_Hand", (int64)ESteamVRInputStringBits::VR_InputString_Hand },
		{ "ESteamVRInputStringBits::VR_InputString_ControllerType", (int64)ESteamVRInputStringBits::VR_InputString_ControllerType },
		{ "ESteamVRInputStringBits::VR_InputString_InputSource", (int64)ESteamVRInputStringBits::VR_InputString_InputSource },
		{ "ESteamVRInputStringBits::VR_InputString_All", (int64)ESteamVRInputStringBits::VR_InputString_All },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SteamVRInputDevice_ESteamVRInputStringBits_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Input String Values for querying user hardware */" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
		{ "ToolTip", "Input String Values for querying user hardware" },
		{ "VR_InputString_All.Comment", "// All of the above. (e.g. \"Left Hand Index Controller Trackpad\")\n" },
		{ "VR_InputString_All.DisplayName", "All" },
		{ "VR_InputString_All.Name", "ESteamVRInputStringBits::VR_InputString_All" },
		{ "VR_InputString_All.ToolTip", "All of the above. (e.g. \"Left Hand Index Controller Trackpad\")" },
		{ "VR_InputString_ControllerType.Comment", "// What kind of controller the user has in that hand (e.g. \"Index Controller\")\n" },
		{ "VR_InputString_ControllerType.DisplayName", "Controller Type" },
		{ "VR_InputString_ControllerType.Name", "ESteamVRInputStringBits::VR_InputString_ControllerType" },
		{ "VR_InputString_ControllerType.ToolTip", "What kind of controller the user has in that hand (e.g. \"Index Controller\")" },
		{ "VR_InputString_Hand.Comment", "// Which hand the origin is in (e.g. \"Left Hand\")\n" },
		{ "VR_InputString_Hand.DisplayName", "Hand" },
		{ "VR_InputString_Hand.Name", "ESteamVRInputStringBits::VR_InputString_Hand" },
		{ "VR_InputString_Hand.ToolTip", "Which hand the origin is in (e.g. \"Left Hand\")" },
		{ "VR_InputString_InputSource.Comment", "// What part of that controller is the origin (e.g. \"Trackpad\")\n" },
		{ "VR_InputString_InputSource.DisplayName", "Input Source" },
		{ "VR_InputString_InputSource.Name", "ESteamVRInputStringBits::VR_InputString_InputSource" },
		{ "VR_InputString_InputSource.ToolTip", "What part of that controller is the origin (e.g. \"Trackpad\")" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamVRInputDevice_ESteamVRInputStringBits_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SteamVRInputDevice,
		nullptr,
		"ESteamVRInputStringBits",
		"ESteamVRInputStringBits",
		Z_Construct_UEnum_SteamVRInputDevice_ESteamVRInputStringBits_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SteamVRInputDevice_ESteamVRInputStringBits_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SteamVRInputDevice_ESteamVRInputStringBits_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SteamVRInputDevice_ESteamVRInputStringBits_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SteamVRInputDevice_ESteamVRInputStringBits()
	{
		if (!Z_Registration_Info_UEnum_ESteamVRInputStringBits.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamVRInputStringBits.InnerSingleton, Z_Construct_UEnum_SteamVRInputDevice_ESteamVRInputStringBits_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESteamVRInputStringBits.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESkeletalSummaryDataType;
	static UEnum* ESkeletalSummaryDataType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESkeletalSummaryDataType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESkeletalSummaryDataType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamVRInputDevice_ESkeletalSummaryDataType, (UObject*)Z_Construct_UPackage__Script_SteamVRInputDevice(), TEXT("ESkeletalSummaryDataType"));
		}
		return Z_Registration_Info_UEnum_ESkeletalSummaryDataType.OuterSingleton;
	}
	template<> STEAMVRINPUTDEVICE_API UEnum* StaticEnum<ESkeletalSummaryDataType>()
	{
		return ESkeletalSummaryDataType_StaticEnum();
	}
	struct Z_Construct_UEnum_SteamVRInputDevice_ESkeletalSummaryDataType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SteamVRInputDevice_ESkeletalSummaryDataType_Statics::Enumerators[] = {
		{ "ESkeletalSummaryDataType::VR_SummaryType_FromAnimation", (int64)ESkeletalSummaryDataType::VR_SummaryType_FromAnimation },
		{ "ESkeletalSummaryDataType::VR_SummaryType_FromDevice", (int64)ESkeletalSummaryDataType::VR_SummaryType_FromDevice },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SteamVRInputDevice_ESkeletalSummaryDataType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Input String Values for querying user hardware */" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
		{ "ToolTip", "Input String Values for querying user hardware" },
		{ "VR_SummaryType_FromAnimation.Comment", "// The data should match the animated transforms in the skeleton transforms. This data will probably be smoothed and may be more latent\n" },
		{ "VR_SummaryType_FromAnimation.DisplayName", "From Animation" },
		{ "VR_SummaryType_FromAnimation.Name", "ESkeletalSummaryDataType::VR_SummaryType_FromAnimation" },
		{ "VR_SummaryType_FromAnimation.ToolTip", "The data should match the animated transforms in the skeleton transforms. This data will probably be smoothed and may be more latent" },
		{ "VR_SummaryType_FromDevice.Comment", "// The data should be the unprocessed values from the device when available. This data may include more jitter but may be provided with less latency\n" },
		{ "VR_SummaryType_FromDevice.DisplayName", "From Device" },
		{ "VR_SummaryType_FromDevice.Name", "ESkeletalSummaryDataType::VR_SummaryType_FromDevice" },
		{ "VR_SummaryType_FromDevice.ToolTip", "The data should be the unprocessed values from the device when available. This data may include more jitter but may be provided with less latency" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamVRInputDevice_ESkeletalSummaryDataType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SteamVRInputDevice,
		nullptr,
		"ESkeletalSummaryDataType",
		"ESkeletalSummaryDataType",
		Z_Construct_UEnum_SteamVRInputDevice_ESkeletalSummaryDataType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SteamVRInputDevice_ESkeletalSummaryDataType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SteamVRInputDevice_ESkeletalSummaryDataType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SteamVRInputDevice_ESkeletalSummaryDataType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SteamVRInputDevice_ESkeletalSummaryDataType()
	{
		if (!Z_Registration_Info_UEnum_ESkeletalSummaryDataType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESkeletalSummaryDataType.InnerSingleton, Z_Construct_UEnum_SteamVRInputDevice_ESkeletalSummaryDataType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESkeletalSummaryDataType.InnerSingleton;
	}
	DEFINE_FUNCTION(UDEPRECATED_USteamVRInputDeviceFunctionLibrary::execGetUserIPD)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UDEPRECATED_USteamVRInputDeviceFunctionLibrary::GetUserIPD();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_USteamVRInputDeviceFunctionLibrary::execResetSeatedPosition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDEPRECATED_USteamVRInputDeviceFunctionLibrary::ResetSeatedPosition();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_USteamVRInputDeviceFunctionLibrary::execFindSteamVR_InputBindingInfo)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ActionName);
		P_GET_PROPERTY(FNameProperty,Z_Param_ActionSet);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FSteamVRInputBindingInfo>*)Z_Param__Result=UDEPRECATED_USteamVRInputDeviceFunctionLibrary::FindSteamVR_InputBindingInfo(Z_Param_ActionName,Z_Param_ActionSet);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_USteamVRInputDeviceFunctionLibrary::execGetSteamVR_InputBindingInfo)
	{
		P_GET_STRUCT(FSteamVRAction,Z_Param_SteamVRActionHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FSteamVRInputBindingInfo>*)Z_Param__Result=UDEPRECATED_USteamVRInputDeviceFunctionLibrary::GetSteamVR_InputBindingInfo(Z_Param_SteamVRActionHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_USteamVRInputDeviceFunctionLibrary::execShowAllSteamVR_ActionOrigins)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UDEPRECATED_USteamVRInputDeviceFunctionLibrary::ShowAllSteamVR_ActionOrigins();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_USteamVRInputDeviceFunctionLibrary::execSetSteamVR_GlobalPredictedSecondsFromNow)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UDEPRECATED_USteamVRInputDeviceFunctionLibrary::SetSteamVR_GlobalPredictedSecondsFromNow(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_USteamVRInputDeviceFunctionLibrary::execGetSteamVR_GlobalPredictedSecondsFromNow)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UDEPRECATED_USteamVRInputDeviceFunctionLibrary::GetSteamVR_GlobalPredictedSecondsFromNow();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_USteamVRInputDeviceFunctionLibrary::execGetSteamVR_HandPoseRelativeToNow)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Position);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Orientation);
		P_GET_ENUM(ESteamVRHand,Z_Param_Hand);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PredictedSecondsFromNow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDEPRECATED_USteamVRInputDeviceFunctionLibrary::GetSteamVR_HandPoseRelativeToNow(Z_Param_Out_Position,Z_Param_Out_Orientation,ESteamVRHand(Z_Param_Hand),Z_Param_PredictedSecondsFromNow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_USteamVRInputDeviceFunctionLibrary::execFindSteamVR_ActionOrigin)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ActionName);
		P_GET_PROPERTY(FNameProperty,Z_Param_ActionSet);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDEPRECATED_USteamVRInputDeviceFunctionLibrary::FindSteamVR_ActionOrigin(Z_Param_ActionName,Z_Param_ActionSet);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_USteamVRInputDeviceFunctionLibrary::execShowSteamVR_ActionOrigin)
	{
		P_GET_STRUCT(FSteamVRAction,Z_Param_SteamVRAction);
		P_GET_STRUCT(FSteamVRActionSet,Z_Param_SteamVRActionSet);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDEPRECATED_USteamVRInputDeviceFunctionLibrary::ShowSteamVR_ActionOrigin(Z_Param_SteamVRAction,Z_Param_SteamVRActionSet);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_USteamVRInputDeviceFunctionLibrary::execGetSteamVR_OriginLocalizedName)
	{
		P_GET_STRUCT(FSteamVRAction,Z_Param_SteamVRAction);
		P_GET_TARRAY(ESteamVRInputStringBits,Z_Param_LocalizedParts);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OriginLocalizedName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDEPRECATED_USteamVRInputDeviceFunctionLibrary::GetSteamVR_OriginLocalizedName(Z_Param_SteamVRAction,Z_Param_LocalizedParts,Z_Param_Out_OriginLocalizedName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_USteamVRInputDeviceFunctionLibrary::execFindSteamVR_OriginTrackedDeviceInfo)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ActionName);
		P_GET_UBOOL_REF(Z_Param_Out_bResult);
		P_GET_STRUCT_REF(FSteamVRInputOriginInfo,Z_Param_Out_InputOriginInfo);
		P_GET_PROPERTY(FNameProperty,Z_Param_ActionSet);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDEPRECATED_USteamVRInputDeviceFunctionLibrary::FindSteamVR_OriginTrackedDeviceInfo(Z_Param_ActionName,Z_Param_Out_bResult,Z_Param_Out_InputOriginInfo,Z_Param_ActionSet);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_USteamVRInputDeviceFunctionLibrary::execGetSteamVR_OriginTrackedDeviceInfo)
	{
		P_GET_STRUCT(FSteamVRAction,Z_Param_SteamVRAction);
		P_GET_STRUCT_REF(FSteamVRInputOriginInfo,Z_Param_Out_InputOriginInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDEPRECATED_USteamVRInputDeviceFunctionLibrary::GetSteamVR_OriginTrackedDeviceInfo(Z_Param_SteamVRAction,Z_Param_Out_InputOriginInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_USteamVRInputDeviceFunctionLibrary::execGetSteamVR_ActionSetArray)
	{
		P_GET_TARRAY_REF(FSteamVRActionSet,Z_Param_Out_SteamVRActionSets);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDEPRECATED_USteamVRInputDeviceFunctionLibrary::GetSteamVR_ActionSetArray(Z_Param_Out_SteamVRActionSets);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_USteamVRInputDeviceFunctionLibrary::execFindSteamVR_Action)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ActionName);
		P_GET_UBOOL_REF(Z_Param_Out_bResult);
		P_GET_STRUCT_REF(FSteamVRAction,Z_Param_Out_FoundAction);
		P_GET_STRUCT_REF(FSteamVRActionSet,Z_Param_Out_FoundActionSet);
		P_GET_PROPERTY(FNameProperty,Z_Param_ActionSet);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDEPRECATED_USteamVRInputDeviceFunctionLibrary::FindSteamVR_Action(Z_Param_ActionName,Z_Param_Out_bResult,Z_Param_Out_FoundAction,Z_Param_Out_FoundActionSet,Z_Param_ActionSet);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_USteamVRInputDeviceFunctionLibrary::execGetSteamVR_ActionArray)
	{
		P_GET_TARRAY_REF(FSteamVRAction,Z_Param_Out_SteamVRActions);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDEPRECATED_USteamVRInputDeviceFunctionLibrary::GetSteamVR_ActionArray(Z_Param_Out_SteamVRActions);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_USteamVRInputDeviceFunctionLibrary::execGetRightHandPoseData)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Position);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Orientation);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_AngularVelocity);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Velocity);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDEPRECATED_USteamVRInputDeviceFunctionLibrary::GetRightHandPoseData(Z_Param_Out_Position,Z_Param_Out_Orientation,Z_Param_Out_AngularVelocity,Z_Param_Out_Velocity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_USteamVRInputDeviceFunctionLibrary::execGetLeftHandPoseData)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Position);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Orientation);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_AngularVelocity);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Velocity);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDEPRECATED_USteamVRInputDeviceFunctionLibrary::GetLeftHandPoseData(Z_Param_Out_Position,Z_Param_Out_Orientation,Z_Param_Out_AngularVelocity,Z_Param_Out_Velocity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_USteamVRInputDeviceFunctionLibrary::execGetSkeletalTransform)
	{
		P_GET_STRUCT_REF(FSteamVRSkeletonTransform,Z_Param_Out_LeftHand);
		P_GET_STRUCT_REF(FSteamVRSkeletonTransform,Z_Param_Out_RightHand);
		P_GET_UBOOL(Z_Param_bWithController);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDEPRECATED_USteamVRInputDeviceFunctionLibrary::GetSkeletalTransform(Z_Param_Out_LeftHand,Z_Param_Out_RightHand,Z_Param_bWithController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_USteamVRInputDeviceFunctionLibrary::execSetPoseSource)
	{
		P_GET_UBOOL(Z_Param_bUseSkeletonPose);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDEPRECATED_USteamVRInputDeviceFunctionLibrary::SetPoseSource(Z_Param_bUseSkeletonPose);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_USteamVRInputDeviceFunctionLibrary::execGetPoseSource)
	{
		P_GET_UBOOL_REF(Z_Param_Out_bUsingSkeletonPose);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDEPRECATED_USteamVRInputDeviceFunctionLibrary::GetPoseSource(Z_Param_Out_bUsingSkeletonPose);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_USteamVRInputDeviceFunctionLibrary::execSetCurlsAndSplaysState)
	{
		P_GET_UBOOL(Z_Param_NewLeftHandState);
		P_GET_UBOOL(Z_Param_NewRightHandState);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDEPRECATED_USteamVRInputDeviceFunctionLibrary::SetCurlsAndSplaysState(Z_Param_NewLeftHandState,Z_Param_NewRightHandState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_USteamVRInputDeviceFunctionLibrary::execGetControllerFidelity)
	{
		P_GET_ENUM_REF(EControllerFidelity,Z_Param_Out_LeftControllerFidelity);
		P_GET_ENUM_REF(EControllerFidelity,Z_Param_Out_RightControllerFidelity);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDEPRECATED_USteamVRInputDeviceFunctionLibrary::GetControllerFidelity((EControllerFidelity&)(Z_Param_Out_LeftControllerFidelity),(EControllerFidelity&)(Z_Param_Out_RightControllerFidelity));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_USteamVRInputDeviceFunctionLibrary::execGetSkeletalState)
	{
		P_GET_UBOOL_REF(Z_Param_Out_LeftHandState);
		P_GET_UBOOL_REF(Z_Param_Out_RightHandState);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDEPRECATED_USteamVRInputDeviceFunctionLibrary::GetSkeletalState(Z_Param_Out_LeftHandState,Z_Param_Out_RightHandState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_USteamVRInputDeviceFunctionLibrary::execGetCurlsAndSplaysState)
	{
		P_GET_UBOOL_REF(Z_Param_Out_LeftHandState);
		P_GET_UBOOL_REF(Z_Param_Out_RightHandState);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDEPRECATED_USteamVRInputDeviceFunctionLibrary::GetCurlsAndSplaysState(Z_Param_Out_LeftHandState,Z_Param_Out_RightHandState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_USteamVRInputDeviceFunctionLibrary::execPlaySteamVR_HapticFeedback)
	{
		P_GET_ENUM(ESteamVRHand,Z_Param_Hand);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartSecondsFromNow);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DurationSeconds);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Frequency);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Amplitude);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDEPRECATED_USteamVRInputDeviceFunctionLibrary::PlaySteamVR_HapticFeedback(ESteamVRHand(Z_Param_Hand),Z_Param_StartSecondsFromNow,Z_Param_DurationSeconds,Z_Param_Frequency,Z_Param_Amplitude);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_USteamVRInputDeviceFunctionLibrary::execGetFingerCurlsAndSplays)
	{
		P_GET_ENUM(EHand,Z_Param_Hand);
		P_GET_STRUCT_REF(FSteamVRFingerCurls,Z_Param_Out_FingerCurls);
		P_GET_STRUCT_REF(FSteamVRFingerSplays,Z_Param_Out_FingerSplays);
		P_GET_ENUM(ESkeletalSummaryDataType,Z_Param_SummaryDataType);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDEPRECATED_USteamVRInputDeviceFunctionLibrary::GetFingerCurlsAndSplays(EHand(Z_Param_Hand),Z_Param_Out_FingerCurls,Z_Param_Out_FingerSplays,ESkeletalSummaryDataType(Z_Param_SummaryDataType));
		P_NATIVE_END;
	}
	void UDEPRECATED_USteamVRInputDeviceFunctionLibrary::StaticRegisterNativesUDEPRECATED_USteamVRInputDeviceFunctionLibrary()
	{
		UClass* Class = UDEPRECATED_USteamVRInputDeviceFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindSteamVR_Action", &UDEPRECATED_USteamVRInputDeviceFunctionLibrary::execFindSteamVR_Action },
			{ "FindSteamVR_ActionOrigin", &UDEPRECATED_USteamVRInputDeviceFunctionLibrary::execFindSteamVR_ActionOrigin },
			{ "FindSteamVR_InputBindingInfo", &UDEPRECATED_USteamVRInputDeviceFunctionLibrary::execFindSteamVR_InputBindingInfo },
			{ "FindSteamVR_OriginTrackedDeviceInfo", &UDEPRECATED_USteamVRInputDeviceFunctionLibrary::execFindSteamVR_OriginTrackedDeviceInfo },
			{ "GetControllerFidelity", &UDEPRECATED_USteamVRInputDeviceFunctionLibrary::execGetControllerFidelity },
			{ "GetCurlsAndSplaysState", &UDEPRECATED_USteamVRInputDeviceFunctionLibrary::execGetCurlsAndSplaysState },
			{ "GetFingerCurlsAndSplays", &UDEPRECATED_USteamVRInputDeviceFunctionLibrary::execGetFingerCurlsAndSplays },
			{ "GetLeftHandPoseData", &UDEPRECATED_USteamVRInputDeviceFunctionLibrary::execGetLeftHandPoseData },
			{ "GetPoseSource", &UDEPRECATED_USteamVRInputDeviceFunctionLibrary::execGetPoseSource },
			{ "GetRightHandPoseData", &UDEPRECATED_USteamVRInputDeviceFunctionLibrary::execGetRightHandPoseData },
			{ "GetSkeletalState", &UDEPRECATED_USteamVRInputDeviceFunctionLibrary::execGetSkeletalState },
			{ "GetSkeletalTransform", &UDEPRECATED_USteamVRInputDeviceFunctionLibrary::execGetSkeletalTransform },
			{ "GetSteamVR_ActionArray", &UDEPRECATED_USteamVRInputDeviceFunctionLibrary::execGetSteamVR_ActionArray },
			{ "GetSteamVR_ActionSetArray", &UDEPRECATED_USteamVRInputDeviceFunctionLibrary::execGetSteamVR_ActionSetArray },
			{ "GetSteamVR_GlobalPredictedSecondsFromNow", &UDEPRECATED_USteamVRInputDeviceFunctionLibrary::execGetSteamVR_GlobalPredictedSecondsFromNow },
			{ "GetSteamVR_HandPoseRelativeToNow", &UDEPRECATED_USteamVRInputDeviceFunctionLibrary::execGetSteamVR_HandPoseRelativeToNow },
			{ "GetSteamVR_InputBindingInfo", &UDEPRECATED_USteamVRInputDeviceFunctionLibrary::execGetSteamVR_InputBindingInfo },
			{ "GetSteamVR_OriginLocalizedName", &UDEPRECATED_USteamVRInputDeviceFunctionLibrary::execGetSteamVR_OriginLocalizedName },
			{ "GetSteamVR_OriginTrackedDeviceInfo", &UDEPRECATED_USteamVRInputDeviceFunctionLibrary::execGetSteamVR_OriginTrackedDeviceInfo },
			{ "GetUserIPD", &UDEPRECATED_USteamVRInputDeviceFunctionLibrary::execGetUserIPD },
			{ "PlaySteamVR_HapticFeedback", &UDEPRECATED_USteamVRInputDeviceFunctionLibrary::execPlaySteamVR_HapticFeedback },
			{ "ResetSeatedPosition", &UDEPRECATED_USteamVRInputDeviceFunctionLibrary::execResetSeatedPosition },
			{ "SetCurlsAndSplaysState", &UDEPRECATED_USteamVRInputDeviceFunctionLibrary::execSetCurlsAndSplaysState },
			{ "SetPoseSource", &UDEPRECATED_USteamVRInputDeviceFunctionLibrary::execSetPoseSource },
			{ "SetSteamVR_GlobalPredictedSecondsFromNow", &UDEPRECATED_USteamVRInputDeviceFunctionLibrary::execSetSteamVR_GlobalPredictedSecondsFromNow },
			{ "ShowAllSteamVR_ActionOrigins", &UDEPRECATED_USteamVRInputDeviceFunctionLibrary::execShowAllSteamVR_ActionOrigins },
			{ "ShowSteamVR_ActionOrigin", &UDEPRECATED_USteamVRInputDeviceFunctionLibrary::execShowSteamVR_ActionOrigin },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_FindSteamVR_Action_Statics
	{
		struct USteamVRInputDeviceFunctionLibrary_eventFindSteamVR_Action_Parms
		{
			FName ActionName;
			bool bResult;
			FSteamVRAction FoundAction;
			FSteamVRActionSet FoundActionSet;
			FName ActionSet;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ActionName;
		static void NewProp_bResult_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bResult;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FoundAction;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FoundActionSet;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ActionSet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_FindSteamVR_Action_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamVRInputDeviceFunctionLibrary_eventFindSteamVR_Action_Parms, ActionName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_FindSteamVR_Action_Statics::NewProp_bResult_SetBit(void* Obj)
	{
		((USteamVRInputDeviceFunctionLibrary_eventFindSteamVR_Action_Parms*)Obj)->bResult = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_FindSteamVR_Action_Statics::NewProp_bResult = { "bResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USteamVRInputDeviceFunctionLibrary_eventFindSteamVR_Action_Parms), &Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_FindSteamVR_Action_Statics::NewProp_bResult_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_FindSteamVR_Action_Statics::NewProp_FoundAction = { "FoundAction", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamVRInputDeviceFunctionLibrary_eventFindSteamVR_Action_Parms, FoundAction), Z_Construct_UScriptStruct_FSteamVRAction, METADATA_PARAMS(nullptr, 0) }; // 1725216106
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_FindSteamVR_Action_Statics::NewProp_FoundActionSet = { "FoundActionSet", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamVRInputDeviceFunctionLibrary_eventFindSteamVR_Action_Parms, FoundActionSet), Z_Construct_UScriptStruct_FSteamVRActionSet, METADATA_PARAMS(nullptr, 0) }; // 161041518
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_FindSteamVR_Action_Statics::NewProp_ActionSet = { "ActionSet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamVRInputDeviceFunctionLibrary_eventFindSteamVR_Action_Parms, ActionSet), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_FindSteamVR_Action_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_FindSteamVR_Action_Statics::NewProp_ActionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_FindSteamVR_Action_Statics::NewProp_bResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_FindSteamVR_Action_Statics::NewProp_FoundAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_FindSteamVR_Action_Statics::NewProp_FoundActionSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_FindSteamVR_Action_Statics::NewProp_ActionSet,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_FindSteamVR_Action_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamVR Input" },
		{ "CPP_Default_ActionSet", "main" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The SteamVR plugin is deprecated." },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_FindSteamVR_Action_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_USteamVRInputDeviceFunctionLibrary, nullptr, "FindSteamVR_Action", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_FindSteamVR_Action_Statics::USteamVRInputDeviceFunctionLibrary_eventFindSteamVR_Action_Parms), Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_FindSteamVR_Action_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_FindSteamVR_Action_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_FindSteamVR_Action_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_FindSteamVR_Action_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_FindSteamVR_Action()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_FindSteamVR_Action_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_FindSteamVR_ActionOrigin_Statics
	{
		struct USteamVRInputDeviceFunctionLibrary_eventFindSteamVR_ActionOrigin_Parms
		{
			FName ActionName;
			FName ActionSet;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ActionName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ActionSet;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_FindSteamVR_ActionOrigin_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamVRInputDeviceFunctionLibrary_eventFindSteamVR_ActionOrigin_Parms, ActionName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_FindSteamVR_ActionOrigin_Statics::NewProp_ActionSet = { "ActionSet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamVRInputDeviceFunctionLibrary_eventFindSteamVR_ActionOrigin_Parms, ActionSet), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_FindSteamVR_ActionOrigin_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((USteamVRInputDeviceFunctionLibrary_eventFindSteamVR_ActionOrigin_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_FindSteamVR_ActionOrigin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USteamVRInputDeviceFunctionLibrary_eventFindSteamVR_ActionOrigin_Parms), &Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_FindSteamVR_ActionOrigin_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_FindSteamVR_ActionOrigin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_FindSteamVR_ActionOrigin_Statics::NewProp_ActionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_FindSteamVR_ActionOrigin_Statics::NewProp_ActionSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_FindSteamVR_ActionOrigin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_FindSteamVR_ActionOrigin_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamVR Input" },
		{ "CPP_Default_ActionSet", "main" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The SteamVR plugin is deprecated." },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_FindSteamVR_ActionOrigin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_USteamVRInputDeviceFunctionLibrary, nullptr, "FindSteamVR_ActionOrigin", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_FindSteamVR_ActionOrigin_Statics::USteamVRInputDeviceFunctionLibrary_eventFindSteamVR_ActionOrigin_Parms), Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_FindSteamVR_ActionOrigin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_FindSteamVR_ActionOrigin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_FindSteamVR_ActionOrigin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_FindSteamVR_ActionOrigin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_FindSteamVR_ActionOrigin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_FindSteamVR_ActionOrigin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_FindSteamVR_InputBindingInfo_Statics
	{
		struct USteamVRInputDeviceFunctionLibrary_eventFindSteamVR_InputBindingInfo_Parms
		{
			FName ActionName;
			FName ActionSet;
			TArray<FSteamVRInputBindingInfo> ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ActionName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ActionSet;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_FindSteamVR_InputBindingInfo_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamVRInputDeviceFunctionLibrary_eventFindSteamVR_InputBindingInfo_Parms, ActionName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_FindSteamVR_InputBindingInfo_Statics::NewProp_ActionSet = { "ActionSet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamVRInputDeviceFunctionLibrary_eventFindSteamVR_InputBindingInfo_Parms, ActionSet), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_FindSteamVR_InputBindingInfo_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSteamVRInputBindingInfo, METADATA_PARAMS(nullptr, 0) }; // 521503326
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_FindSteamVR_InputBindingInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamVRInputDeviceFunctionLibrary_eventFindSteamVR_InputBindingInfo_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 521503326
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_FindSteamVR_InputBindingInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_FindSteamVR_InputBindingInfo_Statics::NewProp_ActionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_FindSteamVR_InputBindingInfo_Statics::NewProp_ActionSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_FindSteamVR_InputBindingInfo_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_FindSteamVR_InputBindingInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_FindSteamVR_InputBindingInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamVR Input" },
		{ "CPP_Default_ActionSet", "main" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The SteamVR plugin is deprecated." },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_FindSteamVR_InputBindingInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_USteamVRInputDeviceFunctionLibrary, nullptr, "FindSteamVR_InputBindingInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_FindSteamVR_InputBindingInfo_Statics::USteamVRInputDeviceFunctionLibrary_eventFindSteamVR_InputBindingInfo_Parms), Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_FindSteamVR_InputBindingInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_FindSteamVR_InputBindingInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_FindSteamVR_InputBindingInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_FindSteamVR_InputBindingInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_FindSteamVR_InputBindingInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_FindSteamVR_InputBindingInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_FindSteamVR_OriginTrackedDeviceInfo_Statics
	{
		struct USteamVRInputDeviceFunctionLibrary_eventFindSteamVR_OriginTrackedDeviceInfo_Parms
		{
			FName ActionName;
			bool bResult;
			FSteamVRInputOriginInfo InputOriginInfo;
			FName ActionSet;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ActionName;
		static void NewProp_bResult_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bResult;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputOriginInfo;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ActionSet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_FindSteamVR_OriginTrackedDeviceInfo_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamVRInputDeviceFunctionLibrary_eventFindSteamVR_OriginTrackedDeviceInfo_Parms, ActionName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_FindSteamVR_OriginTrackedDeviceInfo_Statics::NewProp_bResult_SetBit(void* Obj)
	{
		((USteamVRInputDeviceFunctionLibrary_eventFindSteamVR_OriginTrackedDeviceInfo_Parms*)Obj)->bResult = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_FindSteamVR_OriginTrackedDeviceInfo_Statics::NewProp_bResult = { "bResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USteamVRInputDeviceFunctionLibrary_eventFindSteamVR_OriginTrackedDeviceInfo_Parms), &Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_FindSteamVR_OriginTrackedDeviceInfo_Statics::NewProp_bResult_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_FindSteamVR_OriginTrackedDeviceInfo_Statics::NewProp_InputOriginInfo = { "InputOriginInfo", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamVRInputDeviceFunctionLibrary_eventFindSteamVR_OriginTrackedDeviceInfo_Parms, InputOriginInfo), Z_Construct_UScriptStruct_FSteamVRInputOriginInfo, METADATA_PARAMS(nullptr, 0) }; // 1419832955
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_FindSteamVR_OriginTrackedDeviceInfo_Statics::NewProp_ActionSet = { "ActionSet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamVRInputDeviceFunctionLibrary_eventFindSteamVR_OriginTrackedDeviceInfo_Parms, ActionSet), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_FindSteamVR_OriginTrackedDeviceInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_FindSteamVR_OriginTrackedDeviceInfo_Statics::NewProp_ActionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_FindSteamVR_OriginTrackedDeviceInfo_Statics::NewProp_bResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_FindSteamVR_OriginTrackedDeviceInfo_Statics::NewProp_InputOriginInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_FindSteamVR_OriginTrackedDeviceInfo_Statics::NewProp_ActionSet,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_FindSteamVR_OriginTrackedDeviceInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamVR Input" },
		{ "CPP_Default_ActionSet", "main" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The SteamVR plugin is deprecated." },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_FindSteamVR_OriginTrackedDeviceInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_USteamVRInputDeviceFunctionLibrary, nullptr, "FindSteamVR_OriginTrackedDeviceInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_FindSteamVR_OriginTrackedDeviceInfo_Statics::USteamVRInputDeviceFunctionLibrary_eventFindSteamVR_OriginTrackedDeviceInfo_Parms), Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_FindSteamVR_OriginTrackedDeviceInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_FindSteamVR_OriginTrackedDeviceInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_FindSteamVR_OriginTrackedDeviceInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_FindSteamVR_OriginTrackedDeviceInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_FindSteamVR_OriginTrackedDeviceInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_FindSteamVR_OriginTrackedDeviceInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetControllerFidelity_Statics
	{
		struct USteamVRInputDeviceFunctionLibrary_eventGetControllerFidelity_Parms
		{
			EControllerFidelity LeftControllerFidelity;
			EControllerFidelity RightControllerFidelity;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_LeftControllerFidelity_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LeftControllerFidelity;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RightControllerFidelity_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RightControllerFidelity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetControllerFidelity_Statics::NewProp_LeftControllerFidelity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetControllerFidelity_Statics::NewProp_LeftControllerFidelity = { "LeftControllerFidelity", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamVRInputDeviceFunctionLibrary_eventGetControllerFidelity_Parms, LeftControllerFidelity), Z_Construct_UEnum_SteamVRInputDevice_EControllerFidelity, METADATA_PARAMS(nullptr, 0) }; // 4107079202
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetControllerFidelity_Statics::NewProp_RightControllerFidelity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetControllerFidelity_Statics::NewProp_RightControllerFidelity = { "RightControllerFidelity", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamVRInputDeviceFunctionLibrary_eventGetControllerFidelity_Parms, RightControllerFidelity), Z_Construct_UEnum_SteamVRInputDevice_EControllerFidelity, METADATA_PARAMS(nullptr, 0) }; // 4107079202
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetControllerFidelity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetControllerFidelity_Statics::NewProp_LeftControllerFidelity_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetControllerFidelity_Statics::NewProp_LeftControllerFidelity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetControllerFidelity_Statics::NewProp_RightControllerFidelity_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetControllerFidelity_Statics::NewProp_RightControllerFidelity,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetControllerFidelity_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamVR Input" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The SteamVR plugin is deprecated." },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetControllerFidelity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_USteamVRInputDeviceFunctionLibrary, nullptr, "GetControllerFidelity", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetControllerFidelity_Statics::USteamVRInputDeviceFunctionLibrary_eventGetControllerFidelity_Parms), Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetControllerFidelity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetControllerFidelity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetControllerFidelity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetControllerFidelity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetControllerFidelity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetControllerFidelity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetCurlsAndSplaysState_Statics
	{
		struct USteamVRInputDeviceFunctionLibrary_eventGetCurlsAndSplaysState_Parms
		{
			bool LeftHandState;
			bool RightHandState;
		};
		static void NewProp_LeftHandState_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_LeftHandState;
		static void NewProp_RightHandState_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RightHandState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetCurlsAndSplaysState_Statics::NewProp_LeftHandState_SetBit(void* Obj)
	{
		((USteamVRInputDeviceFunctionLibrary_eventGetCurlsAndSplaysState_Parms*)Obj)->LeftHandState = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetCurlsAndSplaysState_Statics::NewProp_LeftHandState = { "LeftHandState", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USteamVRInputDeviceFunctionLibrary_eventGetCurlsAndSplaysState_Parms), &Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetCurlsAndSplaysState_Statics::NewProp_LeftHandState_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetCurlsAndSplaysState_Statics::NewProp_RightHandState_SetBit(void* Obj)
	{
		((USteamVRInputDeviceFunctionLibrary_eventGetCurlsAndSplaysState_Parms*)Obj)->RightHandState = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetCurlsAndSplaysState_Statics::NewProp_RightHandState = { "RightHandState", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USteamVRInputDeviceFunctionLibrary_eventGetCurlsAndSplaysState_Parms), &Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetCurlsAndSplaysState_Statics::NewProp_RightHandState_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetCurlsAndSplaysState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetCurlsAndSplaysState_Statics::NewProp_LeftHandState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetCurlsAndSplaysState_Statics::NewProp_RightHandState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetCurlsAndSplaysState_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamVR Input" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The SteamVR plugin is deprecated." },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetCurlsAndSplaysState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_USteamVRInputDeviceFunctionLibrary, nullptr, "GetCurlsAndSplaysState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetCurlsAndSplaysState_Statics::USteamVRInputDeviceFunctionLibrary_eventGetCurlsAndSplaysState_Parms), Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetCurlsAndSplaysState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetCurlsAndSplaysState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetCurlsAndSplaysState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetCurlsAndSplaysState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetCurlsAndSplaysState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetCurlsAndSplaysState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetFingerCurlsAndSplays_Statics
	{
		struct USteamVRInputDeviceFunctionLibrary_eventGetFingerCurlsAndSplays_Parms
		{
			EHand Hand;
			FSteamVRFingerCurls FingerCurls;
			FSteamVRFingerSplays FingerSplays;
			ESkeletalSummaryDataType SummaryDataType;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Hand;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FingerCurls;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FingerSplays;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SummaryDataType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SummaryDataType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetFingerCurlsAndSplays_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetFingerCurlsAndSplays_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamVRInputDeviceFunctionLibrary_eventGetFingerCurlsAndSplays_Parms, Hand), Z_Construct_UEnum_SteamVRInputDevice_EHand, METADATA_PARAMS(nullptr, 0) }; // 2070071103
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetFingerCurlsAndSplays_Statics::NewProp_FingerCurls = { "FingerCurls", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamVRInputDeviceFunctionLibrary_eventGetFingerCurlsAndSplays_Parms, FingerCurls), Z_Construct_UScriptStruct_FSteamVRFingerCurls, METADATA_PARAMS(nullptr, 0) }; // 908482007
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetFingerCurlsAndSplays_Statics::NewProp_FingerSplays = { "FingerSplays", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamVRInputDeviceFunctionLibrary_eventGetFingerCurlsAndSplays_Parms, FingerSplays), Z_Construct_UScriptStruct_FSteamVRFingerSplays, METADATA_PARAMS(nullptr, 0) }; // 2801273275
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetFingerCurlsAndSplays_Statics::NewProp_SummaryDataType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetFingerCurlsAndSplays_Statics::NewProp_SummaryDataType = { "SummaryDataType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamVRInputDeviceFunctionLibrary_eventGetFingerCurlsAndSplays_Parms, SummaryDataType), Z_Construct_UEnum_SteamVRInputDevice_ESkeletalSummaryDataType, METADATA_PARAMS(nullptr, 0) }; // 716675663
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetFingerCurlsAndSplays_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetFingerCurlsAndSplays_Statics::NewProp_Hand_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetFingerCurlsAndSplays_Statics::NewProp_Hand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetFingerCurlsAndSplays_Statics::NewProp_FingerCurls,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetFingerCurlsAndSplays_Statics::NewProp_FingerSplays,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetFingerCurlsAndSplays_Statics::NewProp_SummaryDataType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetFingerCurlsAndSplays_Statics::NewProp_SummaryDataType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetFingerCurlsAndSplays_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamVR Input" },
		{ "CPP_Default_SummaryDataType", "VR_SummaryType_FromAnimation" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The SteamVR plugin is deprecated." },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetFingerCurlsAndSplays_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_USteamVRInputDeviceFunctionLibrary, nullptr, "GetFingerCurlsAndSplays", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetFingerCurlsAndSplays_Statics::USteamVRInputDeviceFunctionLibrary_eventGetFingerCurlsAndSplays_Parms), Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetFingerCurlsAndSplays_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetFingerCurlsAndSplays_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetFingerCurlsAndSplays_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetFingerCurlsAndSplays_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetFingerCurlsAndSplays()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetFingerCurlsAndSplays_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetLeftHandPoseData_Statics
	{
		struct USteamVRInputDeviceFunctionLibrary_eventGetLeftHandPoseData_Parms
		{
			FVector Position;
			FRotator Orientation;
			FVector AngularVelocity;
			FVector Velocity;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Orientation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AngularVelocity;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetLeftHandPoseData_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamVRInputDeviceFunctionLibrary_eventGetLeftHandPoseData_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetLeftHandPoseData_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamVRInputDeviceFunctionLibrary_eventGetLeftHandPoseData_Parms, Orientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetLeftHandPoseData_Statics::NewProp_AngularVelocity = { "AngularVelocity", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamVRInputDeviceFunctionLibrary_eventGetLeftHandPoseData_Parms, AngularVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetLeftHandPoseData_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamVRInputDeviceFunctionLibrary_eventGetLeftHandPoseData_Parms, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetLeftHandPoseData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetLeftHandPoseData_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetLeftHandPoseData_Statics::NewProp_Orientation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetLeftHandPoseData_Statics::NewProp_AngularVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetLeftHandPoseData_Statics::NewProp_Velocity,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetLeftHandPoseData_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamVR Input" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The SteamVR plugin is deprecated." },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetLeftHandPoseData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_USteamVRInputDeviceFunctionLibrary, nullptr, "GetLeftHandPoseData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetLeftHandPoseData_Statics::USteamVRInputDeviceFunctionLibrary_eventGetLeftHandPoseData_Parms), Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetLeftHandPoseData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetLeftHandPoseData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetLeftHandPoseData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetLeftHandPoseData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetLeftHandPoseData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetLeftHandPoseData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetPoseSource_Statics
	{
		struct USteamVRInputDeviceFunctionLibrary_eventGetPoseSource_Parms
		{
			bool bUsingSkeletonPose;
		};
		static void NewProp_bUsingSkeletonPose_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsingSkeletonPose;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetPoseSource_Statics::NewProp_bUsingSkeletonPose_SetBit(void* Obj)
	{
		((USteamVRInputDeviceFunctionLibrary_eventGetPoseSource_Parms*)Obj)->bUsingSkeletonPose = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetPoseSource_Statics::NewProp_bUsingSkeletonPose = { "bUsingSkeletonPose", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USteamVRInputDeviceFunctionLibrary_eventGetPoseSource_Parms), &Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetPoseSource_Statics::NewProp_bUsingSkeletonPose_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetPoseSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetPoseSource_Statics::NewProp_bUsingSkeletonPose,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetPoseSource_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamVR Input" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The SteamVR plugin is deprecated." },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetPoseSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_USteamVRInputDeviceFunctionLibrary, nullptr, "GetPoseSource", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetPoseSource_Statics::USteamVRInputDeviceFunctionLibrary_eventGetPoseSource_Parms), Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetPoseSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetPoseSource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetPoseSource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetPoseSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetPoseSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetPoseSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetRightHandPoseData_Statics
	{
		struct USteamVRInputDeviceFunctionLibrary_eventGetRightHandPoseData_Parms
		{
			FVector Position;
			FRotator Orientation;
			FVector AngularVelocity;
			FVector Velocity;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Orientation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AngularVelocity;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetRightHandPoseData_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamVRInputDeviceFunctionLibrary_eventGetRightHandPoseData_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetRightHandPoseData_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamVRInputDeviceFunctionLibrary_eventGetRightHandPoseData_Parms, Orientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetRightHandPoseData_Statics::NewProp_AngularVelocity = { "AngularVelocity", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamVRInputDeviceFunctionLibrary_eventGetRightHandPoseData_Parms, AngularVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetRightHandPoseData_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamVRInputDeviceFunctionLibrary_eventGetRightHandPoseData_Parms, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetRightHandPoseData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetRightHandPoseData_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetRightHandPoseData_Statics::NewProp_Orientation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetRightHandPoseData_Statics::NewProp_AngularVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetRightHandPoseData_Statics::NewProp_Velocity,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetRightHandPoseData_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamVR Input" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The SteamVR plugin is deprecated." },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetRightHandPoseData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_USteamVRInputDeviceFunctionLibrary, nullptr, "GetRightHandPoseData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetRightHandPoseData_Statics::USteamVRInputDeviceFunctionLibrary_eventGetRightHandPoseData_Parms), Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetRightHandPoseData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetRightHandPoseData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetRightHandPoseData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetRightHandPoseData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetRightHandPoseData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetRightHandPoseData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSkeletalState_Statics
	{
		struct USteamVRInputDeviceFunctionLibrary_eventGetSkeletalState_Parms
		{
			bool LeftHandState;
			bool RightHandState;
		};
		static void NewProp_LeftHandState_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_LeftHandState;
		static void NewProp_RightHandState_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RightHandState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSkeletalState_Statics::NewProp_LeftHandState_SetBit(void* Obj)
	{
		((USteamVRInputDeviceFunctionLibrary_eventGetSkeletalState_Parms*)Obj)->LeftHandState = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSkeletalState_Statics::NewProp_LeftHandState = { "LeftHandState", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USteamVRInputDeviceFunctionLibrary_eventGetSkeletalState_Parms), &Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSkeletalState_Statics::NewProp_LeftHandState_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSkeletalState_Statics::NewProp_RightHandState_SetBit(void* Obj)
	{
		((USteamVRInputDeviceFunctionLibrary_eventGetSkeletalState_Parms*)Obj)->RightHandState = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSkeletalState_Statics::NewProp_RightHandState = { "RightHandState", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USteamVRInputDeviceFunctionLibrary_eventGetSkeletalState_Parms), &Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSkeletalState_Statics::NewProp_RightHandState_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSkeletalState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSkeletalState_Statics::NewProp_LeftHandState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSkeletalState_Statics::NewProp_RightHandState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSkeletalState_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamVR Input" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The SteamVR plugin is deprecated." },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSkeletalState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_USteamVRInputDeviceFunctionLibrary, nullptr, "GetSkeletalState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSkeletalState_Statics::USteamVRInputDeviceFunctionLibrary_eventGetSkeletalState_Parms), Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSkeletalState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSkeletalState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSkeletalState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSkeletalState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSkeletalState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSkeletalState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSkeletalTransform_Statics
	{
		struct USteamVRInputDeviceFunctionLibrary_eventGetSkeletalTransform_Parms
		{
			FSteamVRSkeletonTransform LeftHand;
			FSteamVRSkeletonTransform RightHand;
			bool bWithController;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_LeftHand;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RightHand;
		static void NewProp_bWithController_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWithController;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSkeletalTransform_Statics::NewProp_LeftHand = { "LeftHand", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamVRInputDeviceFunctionLibrary_eventGetSkeletalTransform_Parms, LeftHand), Z_Construct_UScriptStruct_FSteamVRSkeletonTransform, METADATA_PARAMS(nullptr, 0) }; // 4181772492
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSkeletalTransform_Statics::NewProp_RightHand = { "RightHand", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamVRInputDeviceFunctionLibrary_eventGetSkeletalTransform_Parms, RightHand), Z_Construct_UScriptStruct_FSteamVRSkeletonTransform, METADATA_PARAMS(nullptr, 0) }; // 4181772492
	void Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSkeletalTransform_Statics::NewProp_bWithController_SetBit(void* Obj)
	{
		((USteamVRInputDeviceFunctionLibrary_eventGetSkeletalTransform_Parms*)Obj)->bWithController = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSkeletalTransform_Statics::NewProp_bWithController = { "bWithController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USteamVRInputDeviceFunctionLibrary_eventGetSkeletalTransform_Parms), &Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSkeletalTransform_Statics::NewProp_bWithController_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSkeletalTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSkeletalTransform_Statics::NewProp_LeftHand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSkeletalTransform_Statics::NewProp_RightHand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSkeletalTransform_Statics::NewProp_bWithController,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSkeletalTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamVR Input" },
		{ "CPP_Default_bWithController", "false" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The SteamVR plugin is deprecated." },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSkeletalTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_USteamVRInputDeviceFunctionLibrary, nullptr, "GetSkeletalTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSkeletalTransform_Statics::USteamVRInputDeviceFunctionLibrary_eventGetSkeletalTransform_Parms), Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSkeletalTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSkeletalTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSkeletalTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSkeletalTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSkeletalTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSkeletalTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_ActionArray_Statics
	{
		struct USteamVRInputDeviceFunctionLibrary_eventGetSteamVR_ActionArray_Parms
		{
			TArray<FSteamVRAction> SteamVRActions;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamVRActions_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SteamVRActions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_ActionArray_Statics::NewProp_SteamVRActions_Inner = { "SteamVRActions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSteamVRAction, METADATA_PARAMS(nullptr, 0) }; // 1725216106
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_ActionArray_Statics::NewProp_SteamVRActions = { "SteamVRActions", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamVRInputDeviceFunctionLibrary_eventGetSteamVR_ActionArray_Parms, SteamVRActions), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1725216106
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_ActionArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_ActionArray_Statics::NewProp_SteamVRActions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_ActionArray_Statics::NewProp_SteamVRActions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_ActionArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamVR Input" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The SteamVR plugin is deprecated." },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_ActionArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_USteamVRInputDeviceFunctionLibrary, nullptr, "GetSteamVR_ActionArray", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_ActionArray_Statics::USteamVRInputDeviceFunctionLibrary_eventGetSteamVR_ActionArray_Parms), Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_ActionArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_ActionArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_ActionArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_ActionArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_ActionArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_ActionArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_ActionSetArray_Statics
	{
		struct USteamVRInputDeviceFunctionLibrary_eventGetSteamVR_ActionSetArray_Parms
		{
			TArray<FSteamVRActionSet> SteamVRActionSets;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamVRActionSets_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SteamVRActionSets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_ActionSetArray_Statics::NewProp_SteamVRActionSets_Inner = { "SteamVRActionSets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSteamVRActionSet, METADATA_PARAMS(nullptr, 0) }; // 161041518
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_ActionSetArray_Statics::NewProp_SteamVRActionSets = { "SteamVRActionSets", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamVRInputDeviceFunctionLibrary_eventGetSteamVR_ActionSetArray_Parms, SteamVRActionSets), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 161041518
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_ActionSetArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_ActionSetArray_Statics::NewProp_SteamVRActionSets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_ActionSetArray_Statics::NewProp_SteamVRActionSets,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_ActionSetArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamVR Input" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The SteamVR plugin is deprecated." },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_ActionSetArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_USteamVRInputDeviceFunctionLibrary, nullptr, "GetSteamVR_ActionSetArray", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_ActionSetArray_Statics::USteamVRInputDeviceFunctionLibrary_eventGetSteamVR_ActionSetArray_Parms), Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_ActionSetArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_ActionSetArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_ActionSetArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_ActionSetArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_ActionSetArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_ActionSetArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_GlobalPredictedSecondsFromNow_Statics
	{
		struct USteamVRInputDeviceFunctionLibrary_eventGetSteamVR_GlobalPredictedSecondsFromNow_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_GlobalPredictedSecondsFromNow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamVRInputDeviceFunctionLibrary_eventGetSteamVR_GlobalPredictedSecondsFromNow_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_GlobalPredictedSecondsFromNow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_GlobalPredictedSecondsFromNow_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_GlobalPredictedSecondsFromNow_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamVR Input" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The SteamVR plugin is deprecated." },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_GlobalPredictedSecondsFromNow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_USteamVRInputDeviceFunctionLibrary, nullptr, "GetSteamVR_GlobalPredictedSecondsFromNow", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_GlobalPredictedSecondsFromNow_Statics::USteamVRInputDeviceFunctionLibrary_eventGetSteamVR_GlobalPredictedSecondsFromNow_Parms), Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_GlobalPredictedSecondsFromNow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_GlobalPredictedSecondsFromNow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_GlobalPredictedSecondsFromNow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_GlobalPredictedSecondsFromNow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_GlobalPredictedSecondsFromNow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_GlobalPredictedSecondsFromNow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_HandPoseRelativeToNow_Statics
	{
		struct USteamVRInputDeviceFunctionLibrary_eventGetSteamVR_HandPoseRelativeToNow_Parms
		{
			FVector Position;
			FRotator Orientation;
			ESteamVRHand Hand;
			float PredictedSecondsFromNow;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Orientation;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Hand;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PredictedSecondsFromNow;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_HandPoseRelativeToNow_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamVRInputDeviceFunctionLibrary_eventGetSteamVR_HandPoseRelativeToNow_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_HandPoseRelativeToNow_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamVRInputDeviceFunctionLibrary_eventGetSteamVR_HandPoseRelativeToNow_Parms, Orientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_HandPoseRelativeToNow_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_HandPoseRelativeToNow_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamVRInputDeviceFunctionLibrary_eventGetSteamVR_HandPoseRelativeToNow_Parms, Hand), Z_Construct_UEnum_SteamVRInputDevice_ESteamVRHand, METADATA_PARAMS(nullptr, 0) }; // 2966558932
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_HandPoseRelativeToNow_Statics::NewProp_PredictedSecondsFromNow = { "PredictedSecondsFromNow", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamVRInputDeviceFunctionLibrary_eventGetSteamVR_HandPoseRelativeToNow_Parms, PredictedSecondsFromNow), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_HandPoseRelativeToNow_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((USteamVRInputDeviceFunctionLibrary_eventGetSteamVR_HandPoseRelativeToNow_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_HandPoseRelativeToNow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USteamVRInputDeviceFunctionLibrary_eventGetSteamVR_HandPoseRelativeToNow_Parms), &Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_HandPoseRelativeToNow_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_HandPoseRelativeToNow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_HandPoseRelativeToNow_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_HandPoseRelativeToNow_Statics::NewProp_Orientation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_HandPoseRelativeToNow_Statics::NewProp_Hand_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_HandPoseRelativeToNow_Statics::NewProp_Hand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_HandPoseRelativeToNow_Statics::NewProp_PredictedSecondsFromNow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_HandPoseRelativeToNow_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_HandPoseRelativeToNow_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamVR Input" },
		{ "CPP_Default_Hand", "VR_Left" },
		{ "CPP_Default_PredictedSecondsFromNow", "0.000000" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The SteamVR plugin is deprecated." },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_HandPoseRelativeToNow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_USteamVRInputDeviceFunctionLibrary, nullptr, "GetSteamVR_HandPoseRelativeToNow", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_HandPoseRelativeToNow_Statics::USteamVRInputDeviceFunctionLibrary_eventGetSteamVR_HandPoseRelativeToNow_Parms), Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_HandPoseRelativeToNow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_HandPoseRelativeToNow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_HandPoseRelativeToNow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_HandPoseRelativeToNow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_HandPoseRelativeToNow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_HandPoseRelativeToNow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_InputBindingInfo_Statics
	{
		struct USteamVRInputDeviceFunctionLibrary_eventGetSteamVR_InputBindingInfo_Parms
		{
			FSteamVRAction SteamVRActionHandle;
			TArray<FSteamVRInputBindingInfo> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamVRActionHandle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_InputBindingInfo_Statics::NewProp_SteamVRActionHandle = { "SteamVRActionHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamVRInputDeviceFunctionLibrary_eventGetSteamVR_InputBindingInfo_Parms, SteamVRActionHandle), Z_Construct_UScriptStruct_FSteamVRAction, METADATA_PARAMS(nullptr, 0) }; // 1725216106
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_InputBindingInfo_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSteamVRInputBindingInfo, METADATA_PARAMS(nullptr, 0) }; // 521503326
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_InputBindingInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamVRInputDeviceFunctionLibrary_eventGetSteamVR_InputBindingInfo_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 521503326
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_InputBindingInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_InputBindingInfo_Statics::NewProp_SteamVRActionHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_InputBindingInfo_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_InputBindingInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_InputBindingInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamVR Input" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The SteamVR plugin is deprecated." },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_InputBindingInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_USteamVRInputDeviceFunctionLibrary, nullptr, "GetSteamVR_InputBindingInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_InputBindingInfo_Statics::USteamVRInputDeviceFunctionLibrary_eventGetSteamVR_InputBindingInfo_Parms), Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_InputBindingInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_InputBindingInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_InputBindingInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_InputBindingInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_InputBindingInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_InputBindingInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_OriginLocalizedName_Statics
	{
		struct USteamVRInputDeviceFunctionLibrary_eventGetSteamVR_OriginLocalizedName_Parms
		{
			FSteamVRAction SteamVRAction;
			TArray<ESteamVRInputStringBits> LocalizedParts;
			FString OriginLocalizedName;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamVRAction;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LocalizedParts_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LocalizedParts_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LocalizedParts;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OriginLocalizedName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_OriginLocalizedName_Statics::NewProp_SteamVRAction = { "SteamVRAction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamVRInputDeviceFunctionLibrary_eventGetSteamVR_OriginLocalizedName_Parms, SteamVRAction), Z_Construct_UScriptStruct_FSteamVRAction, METADATA_PARAMS(nullptr, 0) }; // 1725216106
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_OriginLocalizedName_Statics::NewProp_LocalizedParts_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_OriginLocalizedName_Statics::NewProp_LocalizedParts_Inner = { "LocalizedParts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_SteamVRInputDevice_ESteamVRInputStringBits, METADATA_PARAMS(nullptr, 0) }; // 2793967067
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_OriginLocalizedName_Statics::NewProp_LocalizedParts = { "LocalizedParts", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamVRInputDeviceFunctionLibrary_eventGetSteamVR_OriginLocalizedName_Parms, LocalizedParts), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2793967067
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_OriginLocalizedName_Statics::NewProp_OriginLocalizedName = { "OriginLocalizedName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamVRInputDeviceFunctionLibrary_eventGetSteamVR_OriginLocalizedName_Parms, OriginLocalizedName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_OriginLocalizedName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_OriginLocalizedName_Statics::NewProp_SteamVRAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_OriginLocalizedName_Statics::NewProp_LocalizedParts_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_OriginLocalizedName_Statics::NewProp_LocalizedParts_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_OriginLocalizedName_Statics::NewProp_LocalizedParts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_OriginLocalizedName_Statics::NewProp_OriginLocalizedName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_OriginLocalizedName_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamVR Input" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The SteamVR plugin is deprecated." },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_OriginLocalizedName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_USteamVRInputDeviceFunctionLibrary, nullptr, "GetSteamVR_OriginLocalizedName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_OriginLocalizedName_Statics::USteamVRInputDeviceFunctionLibrary_eventGetSteamVR_OriginLocalizedName_Parms), Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_OriginLocalizedName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_OriginLocalizedName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_OriginLocalizedName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_OriginLocalizedName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_OriginLocalizedName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_OriginLocalizedName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_OriginTrackedDeviceInfo_Statics
	{
		struct USteamVRInputDeviceFunctionLibrary_eventGetSteamVR_OriginTrackedDeviceInfo_Parms
		{
			FSteamVRAction SteamVRAction;
			FSteamVRInputOriginInfo InputOriginInfo;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamVRAction;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputOriginInfo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_OriginTrackedDeviceInfo_Statics::NewProp_SteamVRAction = { "SteamVRAction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamVRInputDeviceFunctionLibrary_eventGetSteamVR_OriginTrackedDeviceInfo_Parms, SteamVRAction), Z_Construct_UScriptStruct_FSteamVRAction, METADATA_PARAMS(nullptr, 0) }; // 1725216106
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_OriginTrackedDeviceInfo_Statics::NewProp_InputOriginInfo = { "InputOriginInfo", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamVRInputDeviceFunctionLibrary_eventGetSteamVR_OriginTrackedDeviceInfo_Parms, InputOriginInfo), Z_Construct_UScriptStruct_FSteamVRInputOriginInfo, METADATA_PARAMS(nullptr, 0) }; // 1419832955
	void Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_OriginTrackedDeviceInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((USteamVRInputDeviceFunctionLibrary_eventGetSteamVR_OriginTrackedDeviceInfo_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_OriginTrackedDeviceInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USteamVRInputDeviceFunctionLibrary_eventGetSteamVR_OriginTrackedDeviceInfo_Parms), &Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_OriginTrackedDeviceInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_OriginTrackedDeviceInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_OriginTrackedDeviceInfo_Statics::NewProp_SteamVRAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_OriginTrackedDeviceInfo_Statics::NewProp_InputOriginInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_OriginTrackedDeviceInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_OriginTrackedDeviceInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamVR Input" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The SteamVR plugin is deprecated." },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_OriginTrackedDeviceInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_USteamVRInputDeviceFunctionLibrary, nullptr, "GetSteamVR_OriginTrackedDeviceInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_OriginTrackedDeviceInfo_Statics::USteamVRInputDeviceFunctionLibrary_eventGetSteamVR_OriginTrackedDeviceInfo_Parms), Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_OriginTrackedDeviceInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_OriginTrackedDeviceInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_OriginTrackedDeviceInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_OriginTrackedDeviceInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_OriginTrackedDeviceInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_OriginTrackedDeviceInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetUserIPD_Statics
	{
		struct USteamVRInputDeviceFunctionLibrary_eventGetUserIPD_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetUserIPD_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamVRInputDeviceFunctionLibrary_eventGetUserIPD_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetUserIPD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetUserIPD_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetUserIPD_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamVR Input" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The SteamVR plugin is deprecated." },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetUserIPD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_USteamVRInputDeviceFunctionLibrary, nullptr, "GetUserIPD", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetUserIPD_Statics::USteamVRInputDeviceFunctionLibrary_eventGetUserIPD_Parms), Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetUserIPD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetUserIPD_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetUserIPD_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetUserIPD_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetUserIPD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetUserIPD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_PlaySteamVR_HapticFeedback_Statics
	{
		struct USteamVRInputDeviceFunctionLibrary_eventPlaySteamVR_HapticFeedback_Parms
		{
			ESteamVRHand Hand;
			float StartSecondsFromNow;
			float DurationSeconds;
			float Frequency;
			float Amplitude;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Hand;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartSecondsFromNow;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DurationSeconds;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Frequency;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Amplitude;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_PlaySteamVR_HapticFeedback_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_PlaySteamVR_HapticFeedback_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamVRInputDeviceFunctionLibrary_eventPlaySteamVR_HapticFeedback_Parms, Hand), Z_Construct_UEnum_SteamVRInputDevice_ESteamVRHand, METADATA_PARAMS(nullptr, 0) }; // 2966558932
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_PlaySteamVR_HapticFeedback_Statics::NewProp_StartSecondsFromNow = { "StartSecondsFromNow", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamVRInputDeviceFunctionLibrary_eventPlaySteamVR_HapticFeedback_Parms, StartSecondsFromNow), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_PlaySteamVR_HapticFeedback_Statics::NewProp_DurationSeconds = { "DurationSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamVRInputDeviceFunctionLibrary_eventPlaySteamVR_HapticFeedback_Parms, DurationSeconds), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_PlaySteamVR_HapticFeedback_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamVRInputDeviceFunctionLibrary_eventPlaySteamVR_HapticFeedback_Parms, Frequency), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_PlaySteamVR_HapticFeedback_Statics::NewProp_Amplitude = { "Amplitude", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamVRInputDeviceFunctionLibrary_eventPlaySteamVR_HapticFeedback_Parms, Amplitude), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_PlaySteamVR_HapticFeedback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_PlaySteamVR_HapticFeedback_Statics::NewProp_Hand_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_PlaySteamVR_HapticFeedback_Statics::NewProp_Hand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_PlaySteamVR_HapticFeedback_Statics::NewProp_StartSecondsFromNow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_PlaySteamVR_HapticFeedback_Statics::NewProp_DurationSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_PlaySteamVR_HapticFeedback_Statics::NewProp_Frequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_PlaySteamVR_HapticFeedback_Statics::NewProp_Amplitude,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_PlaySteamVR_HapticFeedback_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamVR Input" },
		{ "CPP_Default_Amplitude", "0.500000" },
		{ "CPP_Default_DurationSeconds", "1.000000" },
		{ "CPP_Default_Frequency", "1.000000" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The SteamVR plugin is deprecated." },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_PlaySteamVR_HapticFeedback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_USteamVRInputDeviceFunctionLibrary, nullptr, "PlaySteamVR_HapticFeedback", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_PlaySteamVR_HapticFeedback_Statics::USteamVRInputDeviceFunctionLibrary_eventPlaySteamVR_HapticFeedback_Parms), Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_PlaySteamVR_HapticFeedback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_PlaySteamVR_HapticFeedback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_PlaySteamVR_HapticFeedback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_PlaySteamVR_HapticFeedback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_PlaySteamVR_HapticFeedback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_PlaySteamVR_HapticFeedback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_ResetSeatedPosition_Statics
	{
		struct USteamVRInputDeviceFunctionLibrary_eventResetSeatedPosition_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_ResetSeatedPosition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((USteamVRInputDeviceFunctionLibrary_eventResetSeatedPosition_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_ResetSeatedPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USteamVRInputDeviceFunctionLibrary_eventResetSeatedPosition_Parms), &Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_ResetSeatedPosition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_ResetSeatedPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_ResetSeatedPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_ResetSeatedPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamVR Input" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The SteamVR plugin is deprecated." },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_ResetSeatedPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_USteamVRInputDeviceFunctionLibrary, nullptr, "ResetSeatedPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_ResetSeatedPosition_Statics::USteamVRInputDeviceFunctionLibrary_eventResetSeatedPosition_Parms), Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_ResetSeatedPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_ResetSeatedPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_ResetSeatedPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_ResetSeatedPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_ResetSeatedPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_ResetSeatedPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_SetCurlsAndSplaysState_Statics
	{
		struct USteamVRInputDeviceFunctionLibrary_eventSetCurlsAndSplaysState_Parms
		{
			bool NewLeftHandState;
			bool NewRightHandState;
		};
		static void NewProp_NewLeftHandState_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_NewLeftHandState;
		static void NewProp_NewRightHandState_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_NewRightHandState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_SetCurlsAndSplaysState_Statics::NewProp_NewLeftHandState_SetBit(void* Obj)
	{
		((USteamVRInputDeviceFunctionLibrary_eventSetCurlsAndSplaysState_Parms*)Obj)->NewLeftHandState = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_SetCurlsAndSplaysState_Statics::NewProp_NewLeftHandState = { "NewLeftHandState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USteamVRInputDeviceFunctionLibrary_eventSetCurlsAndSplaysState_Parms), &Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_SetCurlsAndSplaysState_Statics::NewProp_NewLeftHandState_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_SetCurlsAndSplaysState_Statics::NewProp_NewRightHandState_SetBit(void* Obj)
	{
		((USteamVRInputDeviceFunctionLibrary_eventSetCurlsAndSplaysState_Parms*)Obj)->NewRightHandState = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_SetCurlsAndSplaysState_Statics::NewProp_NewRightHandState = { "NewRightHandState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USteamVRInputDeviceFunctionLibrary_eventSetCurlsAndSplaysState_Parms), &Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_SetCurlsAndSplaysState_Statics::NewProp_NewRightHandState_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_SetCurlsAndSplaysState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_SetCurlsAndSplaysState_Statics::NewProp_NewLeftHandState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_SetCurlsAndSplaysState_Statics::NewProp_NewRightHandState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_SetCurlsAndSplaysState_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamVR Input" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The SteamVR plugin is deprecated." },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_SetCurlsAndSplaysState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_USteamVRInputDeviceFunctionLibrary, nullptr, "SetCurlsAndSplaysState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_SetCurlsAndSplaysState_Statics::USteamVRInputDeviceFunctionLibrary_eventSetCurlsAndSplaysState_Parms), Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_SetCurlsAndSplaysState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_SetCurlsAndSplaysState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_SetCurlsAndSplaysState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_SetCurlsAndSplaysState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_SetCurlsAndSplaysState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_SetCurlsAndSplaysState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_SetPoseSource_Statics
	{
		struct USteamVRInputDeviceFunctionLibrary_eventSetPoseSource_Parms
		{
			bool bUseSkeletonPose;
		};
		static void NewProp_bUseSkeletonPose_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSkeletonPose;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_SetPoseSource_Statics::NewProp_bUseSkeletonPose_SetBit(void* Obj)
	{
		((USteamVRInputDeviceFunctionLibrary_eventSetPoseSource_Parms*)Obj)->bUseSkeletonPose = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_SetPoseSource_Statics::NewProp_bUseSkeletonPose = { "bUseSkeletonPose", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USteamVRInputDeviceFunctionLibrary_eventSetPoseSource_Parms), &Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_SetPoseSource_Statics::NewProp_bUseSkeletonPose_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_SetPoseSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_SetPoseSource_Statics::NewProp_bUseSkeletonPose,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_SetPoseSource_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamVR Input" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The SteamVR plugin is deprecated." },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_SetPoseSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_USteamVRInputDeviceFunctionLibrary, nullptr, "SetPoseSource", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_SetPoseSource_Statics::USteamVRInputDeviceFunctionLibrary_eventSetPoseSource_Parms), Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_SetPoseSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_SetPoseSource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_SetPoseSource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_SetPoseSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_SetPoseSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_SetPoseSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_SetSteamVR_GlobalPredictedSecondsFromNow_Statics
	{
		struct USteamVRInputDeviceFunctionLibrary_eventSetSteamVR_GlobalPredictedSecondsFromNow_Parms
		{
			float NewValue;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_SetSteamVR_GlobalPredictedSecondsFromNow_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamVRInputDeviceFunctionLibrary_eventSetSteamVR_GlobalPredictedSecondsFromNow_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_SetSteamVR_GlobalPredictedSecondsFromNow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamVRInputDeviceFunctionLibrary_eventSetSteamVR_GlobalPredictedSecondsFromNow_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_SetSteamVR_GlobalPredictedSecondsFromNow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_SetSteamVR_GlobalPredictedSecondsFromNow_Statics::NewProp_NewValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_SetSteamVR_GlobalPredictedSecondsFromNow_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_SetSteamVR_GlobalPredictedSecondsFromNow_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamVR Input" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The SteamVR plugin is deprecated." },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_SetSteamVR_GlobalPredictedSecondsFromNow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_USteamVRInputDeviceFunctionLibrary, nullptr, "SetSteamVR_GlobalPredictedSecondsFromNow", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_SetSteamVR_GlobalPredictedSecondsFromNow_Statics::USteamVRInputDeviceFunctionLibrary_eventSetSteamVR_GlobalPredictedSecondsFromNow_Parms), Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_SetSteamVR_GlobalPredictedSecondsFromNow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_SetSteamVR_GlobalPredictedSecondsFromNow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_SetSteamVR_GlobalPredictedSecondsFromNow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_SetSteamVR_GlobalPredictedSecondsFromNow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_SetSteamVR_GlobalPredictedSecondsFromNow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_SetSteamVR_GlobalPredictedSecondsFromNow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_ShowAllSteamVR_ActionOrigins_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_ShowAllSteamVR_ActionOrigins_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamVR Input" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The SteamVR plugin is deprecated." },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_ShowAllSteamVR_ActionOrigins_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_USteamVRInputDeviceFunctionLibrary, nullptr, "ShowAllSteamVR_ActionOrigins", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_ShowAllSteamVR_ActionOrigins_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_ShowAllSteamVR_ActionOrigins_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_ShowAllSteamVR_ActionOrigins()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_ShowAllSteamVR_ActionOrigins_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_ShowSteamVR_ActionOrigin_Statics
	{
		struct USteamVRInputDeviceFunctionLibrary_eventShowSteamVR_ActionOrigin_Parms
		{
			FSteamVRAction SteamVRAction;
			FSteamVRActionSet SteamVRActionSet;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamVRAction;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SteamVRActionSet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_ShowSteamVR_ActionOrigin_Statics::NewProp_SteamVRAction = { "SteamVRAction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamVRInputDeviceFunctionLibrary_eventShowSteamVR_ActionOrigin_Parms, SteamVRAction), Z_Construct_UScriptStruct_FSteamVRAction, METADATA_PARAMS(nullptr, 0) }; // 1725216106
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_ShowSteamVR_ActionOrigin_Statics::NewProp_SteamVRActionSet = { "SteamVRActionSet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamVRInputDeviceFunctionLibrary_eventShowSteamVR_ActionOrigin_Parms, SteamVRActionSet), Z_Construct_UScriptStruct_FSteamVRActionSet, METADATA_PARAMS(nullptr, 0) }; // 161041518
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_ShowSteamVR_ActionOrigin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_ShowSteamVR_ActionOrigin_Statics::NewProp_SteamVRAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_ShowSteamVR_ActionOrigin_Statics::NewProp_SteamVRActionSet,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_ShowSteamVR_ActionOrigin_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamVR Input" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The SteamVR plugin is deprecated." },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_ShowSteamVR_ActionOrigin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_USteamVRInputDeviceFunctionLibrary, nullptr, "ShowSteamVR_ActionOrigin", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_ShowSteamVR_ActionOrigin_Statics::USteamVRInputDeviceFunctionLibrary_eventShowSteamVR_ActionOrigin_Parms), Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_ShowSteamVR_ActionOrigin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_ShowSteamVR_ActionOrigin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_ShowSteamVR_ActionOrigin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_ShowSteamVR_ActionOrigin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_ShowSteamVR_ActionOrigin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_ShowSteamVR_ActionOrigin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDEPRECATED_USteamVRInputDeviceFunctionLibrary);
	UClass* Z_Construct_UClass_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_NoRegister()
	{
		return UDEPRECATED_USteamVRInputDeviceFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamVRInputDevice,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_FindSteamVR_Action, "FindSteamVR_Action" }, // 4255525626
		{ &Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_FindSteamVR_ActionOrigin, "FindSteamVR_ActionOrigin" }, // 1859569252
		{ &Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_FindSteamVR_InputBindingInfo, "FindSteamVR_InputBindingInfo" }, // 3363686347
		{ &Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_FindSteamVR_OriginTrackedDeviceInfo, "FindSteamVR_OriginTrackedDeviceInfo" }, // 2399001346
		{ &Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetControllerFidelity, "GetControllerFidelity" }, // 2478431163
		{ &Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetCurlsAndSplaysState, "GetCurlsAndSplaysState" }, // 1699388101
		{ &Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetFingerCurlsAndSplays, "GetFingerCurlsAndSplays" }, // 2673593051
		{ &Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetLeftHandPoseData, "GetLeftHandPoseData" }, // 2389287473
		{ &Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetPoseSource, "GetPoseSource" }, // 798261527
		{ &Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetRightHandPoseData, "GetRightHandPoseData" }, // 1811504729
		{ &Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSkeletalState, "GetSkeletalState" }, // 995031549
		{ &Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSkeletalTransform, "GetSkeletalTransform" }, // 3800523377
		{ &Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_ActionArray, "GetSteamVR_ActionArray" }, // 4132205183
		{ &Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_ActionSetArray, "GetSteamVR_ActionSetArray" }, // 3842438443
		{ &Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_GlobalPredictedSecondsFromNow, "GetSteamVR_GlobalPredictedSecondsFromNow" }, // 1917654665
		{ &Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_HandPoseRelativeToNow, "GetSteamVR_HandPoseRelativeToNow" }, // 639890000
		{ &Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_InputBindingInfo, "GetSteamVR_InputBindingInfo" }, // 1324814928
		{ &Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_OriginLocalizedName, "GetSteamVR_OriginLocalizedName" }, // 3480271663
		{ &Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetSteamVR_OriginTrackedDeviceInfo, "GetSteamVR_OriginTrackedDeviceInfo" }, // 2837192776
		{ &Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_GetUserIPD, "GetUserIPD" }, // 3510444666
		{ &Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_PlaySteamVR_HapticFeedback, "PlaySteamVR_HapticFeedback" }, // 2740001929
		{ &Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_ResetSeatedPosition, "ResetSeatedPosition" }, // 1099990316
		{ &Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_SetCurlsAndSplaysState, "SetCurlsAndSplaysState" }, // 3094400774
		{ &Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_SetPoseSource, "SetPoseSource" }, // 1550880796
		{ &Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_SetSteamVR_GlobalPredictedSecondsFromNow, "SetSteamVR_GlobalPredictedSecondsFromNow" }, // 639274082
		{ &Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_ShowAllSteamVR_ActionOrigins, "ShowAllSteamVR_ActionOrigins" }, // 2858253648
		{ &Z_Construct_UFunction_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_ShowSteamVR_ActionOrigin, "ShowSteamVR_ActionOrigin" }, // 21791775
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n * SteamVR Input Extended Functions\n * Functions and properties defined here are safe for developer use\n */" },
		{ "DeprecationMessage", "SteamVR plugin is deprecated; please use the OpenXR plugin." },
		{ "IncludePath", "SteamVRInputDeviceFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/SteamVRInputDeviceFunctionLibrary.h" },
		{ "ToolTip", "* SteamVR Input Extended Functions\n* Functions and properties defined here are safe for developer use" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_USteamVRInputDeviceFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_Statics::ClassParams = {
		&UDEPRECATED_USteamVRInputDeviceFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x021002A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDEPRECATED_USteamVRInputDeviceFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UDEPRECATED_USteamVRInputDeviceFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEPRECATED_USteamVRInputDeviceFunctionLibrary.OuterSingleton, Z_Construct_UClass_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDEPRECATED_USteamVRInputDeviceFunctionLibrary.OuterSingleton;
	}
	template<> STEAMVRINPUTDEVICE_API UClass* StaticClass<UDEPRECATED_USteamVRInputDeviceFunctionLibrary>()
	{
		return UDEPRECATED_USteamVRInputDeviceFunctionLibrary::StaticClass();
	}
	UDEPRECATED_USteamVRInputDeviceFunctionLibrary::UDEPRECATED_USteamVRInputDeviceFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_USteamVRInputDeviceFunctionLibrary);
	UDEPRECATED_USteamVRInputDeviceFunctionLibrary::~UDEPRECATED_USteamVRInputDeviceFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRInputDeviceFunctionLibrary_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRInputDeviceFunctionLibrary_h_Statics::EnumInfo[] = {
		{ ESteamVRHand_StaticEnum, TEXT("ESteamVRHand"), &Z_Registration_Info_UEnum_ESteamVRHand, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2966558932U) },
		{ EMotionRange_StaticEnum, TEXT("EMotionRange"), &Z_Registration_Info_UEnum_EMotionRange, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1551573917U) },
		{ EHand_StaticEnum, TEXT("EHand"), &Z_Registration_Info_UEnum_EHand, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2070071103U) },
		{ EHandSkeleton_StaticEnum, TEXT("EHandSkeleton"), &Z_Registration_Info_UEnum_EHandSkeleton, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 235549510U) },
		{ EControllerFidelity_StaticEnum, TEXT("EControllerFidelity"), &Z_Registration_Info_UEnum_EControllerFidelity, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4107079202U) },
		{ ESteamVRInputStringBits_StaticEnum, TEXT("ESteamVRInputStringBits"), &Z_Registration_Info_UEnum_ESteamVRInputStringBits, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2793967067U) },
		{ ESkeletalSummaryDataType_StaticEnum, TEXT("ESkeletalSummaryDataType"), &Z_Registration_Info_UEnum_ESkeletalSummaryDataType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 716675663U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRInputDeviceFunctionLibrary_h_Statics::ScriptStructInfo[] = {
		{ FSteamVRSkeletonTransform::StaticStruct, Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics::NewStructOps, TEXT("SteamVRSkeletonTransform"), &Z_Registration_Info_UScriptStruct_SteamVRSkeletonTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSteamVRSkeletonTransform), 4181772492U) },
		{ FSteamVRFingerCurls::StaticStruct, Z_Construct_UScriptStruct_FSteamVRFingerCurls_Statics::NewStructOps, TEXT("SteamVRFingerCurls"), &Z_Registration_Info_UScriptStruct_SteamVRFingerCurls, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSteamVRFingerCurls), 908482007U) },
		{ FSteamVRFingerSplays::StaticStruct, Z_Construct_UScriptStruct_FSteamVRFingerSplays_Statics::NewStructOps, TEXT("SteamVRFingerSplays"), &Z_Registration_Info_UScriptStruct_SteamVRFingerSplays, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSteamVRFingerSplays), 2801273275U) },
		{ FSteamVRAction::StaticStruct, Z_Construct_UScriptStruct_FSteamVRAction_Statics::NewStructOps, TEXT("SteamVRAction"), &Z_Registration_Info_UScriptStruct_SteamVRAction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSteamVRAction), 1725216106U) },
		{ FSteamVRActionSet::StaticStruct, Z_Construct_UScriptStruct_FSteamVRActionSet_Statics::NewStructOps, TEXT("SteamVRActionSet"), &Z_Registration_Info_UScriptStruct_SteamVRActionSet, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSteamVRActionSet), 161041518U) },
		{ FSteamVRInputOriginInfo::StaticStruct, Z_Construct_UScriptStruct_FSteamVRInputOriginInfo_Statics::NewStructOps, TEXT("SteamVRInputOriginInfo"), &Z_Registration_Info_UScriptStruct_SteamVRInputOriginInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSteamVRInputOriginInfo), 1419832955U) },
		{ FUE4RetargettingRefs::StaticStruct, Z_Construct_UScriptStruct_FUE4RetargettingRefs_Statics::NewStructOps, TEXT("UE4RetargettingRefs"), &Z_Registration_Info_UScriptStruct_UE4RetargettingRefs, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUE4RetargettingRefs), 972219210U) },
		{ FSteamVRInputBindingInfo::StaticStruct, Z_Construct_UScriptStruct_FSteamVRInputBindingInfo_Statics::NewStructOps, TEXT("SteamVRInputBindingInfo"), &Z_Registration_Info_UScriptStruct_SteamVRInputBindingInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSteamVRInputBindingInfo), 521503326U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRInputDeviceFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDEPRECATED_USteamVRInputDeviceFunctionLibrary, UDEPRECATED_USteamVRInputDeviceFunctionLibrary::StaticClass, TEXT("UDEPRECATED_USteamVRInputDeviceFunctionLibrary"), &Z_Registration_Info_UClass_UDEPRECATED_USteamVRInputDeviceFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEPRECATED_USteamVRInputDeviceFunctionLibrary), 1834739520U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRInputDeviceFunctionLibrary_h_3440826099(TEXT("/Script/SteamVRInputDevice"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRInputDeviceFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRInputDeviceFunctionLibrary_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRInputDeviceFunctionLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRInputDeviceFunctionLibrary_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRInputDeviceFunctionLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRInputDeviceFunctionLibrary_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
