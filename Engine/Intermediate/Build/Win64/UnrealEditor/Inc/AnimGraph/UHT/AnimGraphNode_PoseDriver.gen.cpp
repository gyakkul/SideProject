// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraphNode_PoseDriver.h"
#include "AnimNodes/AnimNode_PoseDriver.h"
#include "RBF/RBFSolver.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_PoseDriver() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_PoseDriver();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_PoseDriver_NoRegister();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_PoseHandler();
	ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_EPoseDriverOutput();
	ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_EPoseDriverSource();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_PoseDriver();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FRBFParams();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AnimGraph();
// End Cross Module References
	DEFINE_FUNCTION(UAnimGraphNode_PoseDriver::execGetOnlyDriveSelectedBones)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetOnlyDriveSelectedBones();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimGraphNode_PoseDriver::execSetOnlyDriveSelectedBones)
	{
		P_GET_UBOOL(Z_Param_bOnlyDriveSelectedBones);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOnlyDriveSelectedBones(Z_Param_bOnlyDriveSelectedBones);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimGraphNode_PoseDriver::execGetPoseDriverOutput)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EPoseDriverOutput*)Z_Param__Result=P_THIS->GetPoseDriverOutput();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimGraphNode_PoseDriver::execSetPoseDriverOutput)
	{
		P_GET_ENUM(EPoseDriverOutput,Z_Param_DriverOutput);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPoseDriverOutput(EPoseDriverOutput(Z_Param_DriverOutput));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimGraphNode_PoseDriver::execGetPoseDriverSource)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EPoseDriverSource*)Z_Param__Result=P_THIS->GetPoseDriverSource();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimGraphNode_PoseDriver::execSetPoseDriverSource)
	{
		P_GET_ENUM(EPoseDriverSource,Z_Param_DriverSource);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPoseDriverSource(EPoseDriverSource(Z_Param_DriverSource));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimGraphNode_PoseDriver::execGetRBFParameters)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRBFParams*)Z_Param__Result=P_THIS->GetRBFParameters();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimGraphNode_PoseDriver::execSetRBFParameters)
	{
		P_GET_STRUCT(FRBFParams,Z_Param_Parameters);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRBFParameters(Z_Param_Parameters);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimGraphNode_PoseDriver::execGetDrivingBoneNames)
	{
		P_GET_TARRAY_REF(FName,Z_Param_Out_BoneNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetDrivingBoneNames(Z_Param_Out_BoneNames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimGraphNode_PoseDriver::execSetDrivingBones)
	{
		P_GET_TARRAY_REF(FName,Z_Param_Out_BoneNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDrivingBones(Z_Param_Out_BoneNames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimGraphNode_PoseDriver::execGetSourceBoneNames)
	{
		P_GET_TARRAY_REF(FName,Z_Param_Out_BoneNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetSourceBoneNames(Z_Param_Out_BoneNames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimGraphNode_PoseDriver::execSetSourceBones)
	{
		P_GET_TARRAY_REF(FName,Z_Param_Out_BoneNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSourceBones(Z_Param_Out_BoneNames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimGraphNode_PoseDriver::execCopyTargetsFromPoseAsset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CopyTargetsFromPoseAsset();
		P_NATIVE_END;
	}
	void UAnimGraphNode_PoseDriver::StaticRegisterNativesUAnimGraphNode_PoseDriver()
	{
		UClass* Class = UAnimGraphNode_PoseDriver::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CopyTargetsFromPoseAsset", &UAnimGraphNode_PoseDriver::execCopyTargetsFromPoseAsset },
			{ "GetDrivingBoneNames", &UAnimGraphNode_PoseDriver::execGetDrivingBoneNames },
			{ "GetOnlyDriveSelectedBones", &UAnimGraphNode_PoseDriver::execGetOnlyDriveSelectedBones },
			{ "GetPoseDriverOutput", &UAnimGraphNode_PoseDriver::execGetPoseDriverOutput },
			{ "GetPoseDriverSource", &UAnimGraphNode_PoseDriver::execGetPoseDriverSource },
			{ "GetRBFParameters", &UAnimGraphNode_PoseDriver::execGetRBFParameters },
			{ "GetSourceBoneNames", &UAnimGraphNode_PoseDriver::execGetSourceBoneNames },
			{ "SetDrivingBones", &UAnimGraphNode_PoseDriver::execSetDrivingBones },
			{ "SetOnlyDriveSelectedBones", &UAnimGraphNode_PoseDriver::execSetOnlyDriveSelectedBones },
			{ "SetPoseDriverOutput", &UAnimGraphNode_PoseDriver::execSetPoseDriverOutput },
			{ "SetPoseDriverSource", &UAnimGraphNode_PoseDriver::execSetPoseDriverSource },
			{ "SetRBFParameters", &UAnimGraphNode_PoseDriver::execSetRBFParameters },
			{ "SetSourceBones", &UAnimGraphNode_PoseDriver::execSetSourceBones },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAnimGraphNode_PoseDriver_CopyTargetsFromPoseAsset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimGraphNode_PoseDriver_CopyTargetsFromPoseAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "PoseDriver" },
		{ "Comment", "/** Util to replace current contents of PoseTargets with info from assigned PoseAsset */" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_PoseDriver.h" },
		{ "ToolTip", "Util to replace current contents of PoseTargets with info from assigned PoseAsset" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimGraphNode_PoseDriver_CopyTargetsFromPoseAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimGraphNode_PoseDriver, nullptr, "CopyTargetsFromPoseAsset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimGraphNode_PoseDriver_CopyTargetsFromPoseAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimGraphNode_PoseDriver_CopyTargetsFromPoseAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimGraphNode_PoseDriver_CopyTargetsFromPoseAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimGraphNode_PoseDriver_CopyTargetsFromPoseAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimGraphNode_PoseDriver_GetDrivingBoneNames_Statics
	{
		struct AnimGraphNode_PoseDriver_eventGetDrivingBoneNames_Parms
		{
			TArray<FName> BoneNames;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneNames_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimGraphNode_PoseDriver_GetDrivingBoneNames_Statics::NewProp_BoneNames_Inner = { "BoneNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimGraphNode_PoseDriver_GetDrivingBoneNames_Statics::NewProp_BoneNames = { "BoneNames", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimGraphNode_PoseDriver_eventGetDrivingBoneNames_Parms, BoneNames), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimGraphNode_PoseDriver_GetDrivingBoneNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimGraphNode_PoseDriver_GetDrivingBoneNames_Statics::NewProp_BoneNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimGraphNode_PoseDriver_GetDrivingBoneNames_Statics::NewProp_BoneNames,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimGraphNode_PoseDriver_GetDrivingBoneNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "PoseDriver" },
		{ "Comment", "/** Returns the pose-driver its driven bones by name */" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_PoseDriver.h" },
		{ "ToolTip", "Returns the pose-driver its driven bones by name" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimGraphNode_PoseDriver_GetDrivingBoneNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimGraphNode_PoseDriver, nullptr, "GetDrivingBoneNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimGraphNode_PoseDriver_GetDrivingBoneNames_Statics::AnimGraphNode_PoseDriver_eventGetDrivingBoneNames_Parms), Z_Construct_UFunction_UAnimGraphNode_PoseDriver_GetDrivingBoneNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimGraphNode_PoseDriver_GetDrivingBoneNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimGraphNode_PoseDriver_GetDrivingBoneNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimGraphNode_PoseDriver_GetDrivingBoneNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimGraphNode_PoseDriver_GetDrivingBoneNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimGraphNode_PoseDriver_GetDrivingBoneNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimGraphNode_PoseDriver_GetOnlyDriveSelectedBones_Statics
	{
		struct AnimGraphNode_PoseDriver_eventGetOnlyDriveSelectedBones_Parms
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
	void Z_Construct_UFunction_UAnimGraphNode_PoseDriver_GetOnlyDriveSelectedBones_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimGraphNode_PoseDriver_eventGetOnlyDriveSelectedBones_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimGraphNode_PoseDriver_GetOnlyDriveSelectedBones_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimGraphNode_PoseDriver_eventGetOnlyDriveSelectedBones_Parms), &Z_Construct_UFunction_UAnimGraphNode_PoseDriver_GetOnlyDriveSelectedBones_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimGraphNode_PoseDriver_GetOnlyDriveSelectedBones_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimGraphNode_PoseDriver_GetOnlyDriveSelectedBones_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimGraphNode_PoseDriver_GetOnlyDriveSelectedBones_Statics::Function_MetaDataParams[] = {
		{ "Category", "PoseDriver" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_PoseDriver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimGraphNode_PoseDriver_GetOnlyDriveSelectedBones_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimGraphNode_PoseDriver, nullptr, "GetOnlyDriveSelectedBones", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimGraphNode_PoseDriver_GetOnlyDriveSelectedBones_Statics::AnimGraphNode_PoseDriver_eventGetOnlyDriveSelectedBones_Parms), Z_Construct_UFunction_UAnimGraphNode_PoseDriver_GetOnlyDriveSelectedBones_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimGraphNode_PoseDriver_GetOnlyDriveSelectedBones_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimGraphNode_PoseDriver_GetOnlyDriveSelectedBones_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimGraphNode_PoseDriver_GetOnlyDriveSelectedBones_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimGraphNode_PoseDriver_GetOnlyDriveSelectedBones()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimGraphNode_PoseDriver_GetOnlyDriveSelectedBones_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimGraphNode_PoseDriver_GetPoseDriverOutput_Statics
	{
		struct AnimGraphNode_PoseDriver_eventGetPoseDriverOutput_Parms
		{
			EPoseDriverOutput ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAnimGraphNode_PoseDriver_GetPoseDriverOutput_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAnimGraphNode_PoseDriver_GetPoseDriverOutput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimGraphNode_PoseDriver_eventGetPoseDriverOutput_Parms, ReturnValue), Z_Construct_UEnum_AnimGraphRuntime_EPoseDriverOutput, METADATA_PARAMS(nullptr, 0) }; // 1333837059
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimGraphNode_PoseDriver_GetPoseDriverOutput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimGraphNode_PoseDriver_GetPoseDriverOutput_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimGraphNode_PoseDriver_GetPoseDriverOutput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimGraphNode_PoseDriver_GetPoseDriverOutput_Statics::Function_MetaDataParams[] = {
		{ "Category", "PoseDriver" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_PoseDriver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimGraphNode_PoseDriver_GetPoseDriverOutput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimGraphNode_PoseDriver, nullptr, "GetPoseDriverOutput", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimGraphNode_PoseDriver_GetPoseDriverOutput_Statics::AnimGraphNode_PoseDriver_eventGetPoseDriverOutput_Parms), Z_Construct_UFunction_UAnimGraphNode_PoseDriver_GetPoseDriverOutput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimGraphNode_PoseDriver_GetPoseDriverOutput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimGraphNode_PoseDriver_GetPoseDriverOutput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimGraphNode_PoseDriver_GetPoseDriverOutput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimGraphNode_PoseDriver_GetPoseDriverOutput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimGraphNode_PoseDriver_GetPoseDriverOutput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimGraphNode_PoseDriver_GetPoseDriverSource_Statics
	{
		struct AnimGraphNode_PoseDriver_eventGetPoseDriverSource_Parms
		{
			EPoseDriverSource ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAnimGraphNode_PoseDriver_GetPoseDriverSource_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAnimGraphNode_PoseDriver_GetPoseDriverSource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimGraphNode_PoseDriver_eventGetPoseDriverSource_Parms, ReturnValue), Z_Construct_UEnum_AnimGraphRuntime_EPoseDriverSource, METADATA_PARAMS(nullptr, 0) }; // 1408224931
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimGraphNode_PoseDriver_GetPoseDriverSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimGraphNode_PoseDriver_GetPoseDriverSource_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimGraphNode_PoseDriver_GetPoseDriverSource_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimGraphNode_PoseDriver_GetPoseDriverSource_Statics::Function_MetaDataParams[] = {
		{ "Category", "PoseDriver" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_PoseDriver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimGraphNode_PoseDriver_GetPoseDriverSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimGraphNode_PoseDriver, nullptr, "GetPoseDriverSource", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimGraphNode_PoseDriver_GetPoseDriverSource_Statics::AnimGraphNode_PoseDriver_eventGetPoseDriverSource_Parms), Z_Construct_UFunction_UAnimGraphNode_PoseDriver_GetPoseDriverSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimGraphNode_PoseDriver_GetPoseDriverSource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimGraphNode_PoseDriver_GetPoseDriverSource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimGraphNode_PoseDriver_GetPoseDriverSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimGraphNode_PoseDriver_GetPoseDriverSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimGraphNode_PoseDriver_GetPoseDriverSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimGraphNode_PoseDriver_GetRBFParameters_Statics
	{
		struct AnimGraphNode_PoseDriver_eventGetRBFParameters_Parms
		{
			FRBFParams ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimGraphNode_PoseDriver_GetRBFParameters_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimGraphNode_PoseDriver_eventGetRBFParameters_Parms, ReturnValue), Z_Construct_UScriptStruct_FRBFParams, METADATA_PARAMS(nullptr, 0) }; // 637132977
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimGraphNode_PoseDriver_GetRBFParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimGraphNode_PoseDriver_GetRBFParameters_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimGraphNode_PoseDriver_GetRBFParameters_Statics::Function_MetaDataParams[] = {
		{ "Category", "PoseDriver" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_PoseDriver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimGraphNode_PoseDriver_GetRBFParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimGraphNode_PoseDriver, nullptr, "GetRBFParameters", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimGraphNode_PoseDriver_GetRBFParameters_Statics::AnimGraphNode_PoseDriver_eventGetRBFParameters_Parms), Z_Construct_UFunction_UAnimGraphNode_PoseDriver_GetRBFParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimGraphNode_PoseDriver_GetRBFParameters_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimGraphNode_PoseDriver_GetRBFParameters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimGraphNode_PoseDriver_GetRBFParameters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimGraphNode_PoseDriver_GetRBFParameters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimGraphNode_PoseDriver_GetRBFParameters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimGraphNode_PoseDriver_GetSourceBoneNames_Statics
	{
		struct AnimGraphNode_PoseDriver_eventGetSourceBoneNames_Parms
		{
			TArray<FName> BoneNames;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneNames_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimGraphNode_PoseDriver_GetSourceBoneNames_Statics::NewProp_BoneNames_Inner = { "BoneNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimGraphNode_PoseDriver_GetSourceBoneNames_Statics::NewProp_BoneNames = { "BoneNames", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimGraphNode_PoseDriver_eventGetSourceBoneNames_Parms, BoneNames), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimGraphNode_PoseDriver_GetSourceBoneNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimGraphNode_PoseDriver_GetSourceBoneNames_Statics::NewProp_BoneNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimGraphNode_PoseDriver_GetSourceBoneNames_Statics::NewProp_BoneNames,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimGraphNode_PoseDriver_GetSourceBoneNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "PoseDriver" },
		{ "Comment", "/** Returns the pose-driver its source bones by name */" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_PoseDriver.h" },
		{ "ToolTip", "Returns the pose-driver its source bones by name" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimGraphNode_PoseDriver_GetSourceBoneNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimGraphNode_PoseDriver, nullptr, "GetSourceBoneNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimGraphNode_PoseDriver_GetSourceBoneNames_Statics::AnimGraphNode_PoseDriver_eventGetSourceBoneNames_Parms), Z_Construct_UFunction_UAnimGraphNode_PoseDriver_GetSourceBoneNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimGraphNode_PoseDriver_GetSourceBoneNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimGraphNode_PoseDriver_GetSourceBoneNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimGraphNode_PoseDriver_GetSourceBoneNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimGraphNode_PoseDriver_GetSourceBoneNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimGraphNode_PoseDriver_GetSourceBoneNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetDrivingBones_Statics
	{
		struct AnimGraphNode_PoseDriver_eventSetDrivingBones_Parms
		{
			TArray<FName> BoneNames;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetDrivingBones_Statics::NewProp_BoneNames_Inner = { "BoneNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetDrivingBones_Statics::NewProp_BoneNames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetDrivingBones_Statics::NewProp_BoneNames = { "BoneNames", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimGraphNode_PoseDriver_eventSetDrivingBones_Parms, BoneNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetDrivingBones_Statics::NewProp_BoneNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetDrivingBones_Statics::NewProp_BoneNames_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetDrivingBones_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetDrivingBones_Statics::NewProp_BoneNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetDrivingBones_Statics::NewProp_BoneNames,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetDrivingBones_Statics::Function_MetaDataParams[] = {
		{ "Category", "PoseDriver" },
		{ "Comment", "/** Set the pose-driver its driven bones by name */" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_PoseDriver.h" },
		{ "ToolTip", "Set the pose-driver its driven bones by name" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetDrivingBones_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimGraphNode_PoseDriver, nullptr, "SetDrivingBones", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetDrivingBones_Statics::AnimGraphNode_PoseDriver_eventSetDrivingBones_Parms), Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetDrivingBones_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetDrivingBones_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetDrivingBones_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetDrivingBones_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetDrivingBones()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetDrivingBones_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetOnlyDriveSelectedBones_Statics
	{
		struct AnimGraphNode_PoseDriver_eventSetOnlyDriveSelectedBones_Parms
		{
			bool bOnlyDriveSelectedBones;
		};
		static void NewProp_bOnlyDriveSelectedBones_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyDriveSelectedBones;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetOnlyDriveSelectedBones_Statics::NewProp_bOnlyDriveSelectedBones_SetBit(void* Obj)
	{
		((AnimGraphNode_PoseDriver_eventSetOnlyDriveSelectedBones_Parms*)Obj)->bOnlyDriveSelectedBones = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetOnlyDriveSelectedBones_Statics::NewProp_bOnlyDriveSelectedBones = { "bOnlyDriveSelectedBones", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimGraphNode_PoseDriver_eventSetOnlyDriveSelectedBones_Parms), &Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetOnlyDriveSelectedBones_Statics::NewProp_bOnlyDriveSelectedBones_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetOnlyDriveSelectedBones_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetOnlyDriveSelectedBones_Statics::NewProp_bOnlyDriveSelectedBones,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetOnlyDriveSelectedBones_Statics::Function_MetaDataParams[] = {
		{ "Category", "PoseDriver" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_PoseDriver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetOnlyDriveSelectedBones_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimGraphNode_PoseDriver, nullptr, "SetOnlyDriveSelectedBones", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetOnlyDriveSelectedBones_Statics::AnimGraphNode_PoseDriver_eventSetOnlyDriveSelectedBones_Parms), Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetOnlyDriveSelectedBones_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetOnlyDriveSelectedBones_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetOnlyDriveSelectedBones_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetOnlyDriveSelectedBones_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetOnlyDriveSelectedBones()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetOnlyDriveSelectedBones_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetPoseDriverOutput_Statics
	{
		struct AnimGraphNode_PoseDriver_eventSetPoseDriverOutput_Parms
		{
			EPoseDriverOutput DriverOutput;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_DriverOutput_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DriverOutput;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetPoseDriverOutput_Statics::NewProp_DriverOutput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetPoseDriverOutput_Statics::NewProp_DriverOutput = { "DriverOutput", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimGraphNode_PoseDriver_eventSetPoseDriverOutput_Parms, DriverOutput), Z_Construct_UEnum_AnimGraphRuntime_EPoseDriverOutput, METADATA_PARAMS(nullptr, 0) }; // 1333837059
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetPoseDriverOutput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetPoseDriverOutput_Statics::NewProp_DriverOutput_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetPoseDriverOutput_Statics::NewProp_DriverOutput,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetPoseDriverOutput_Statics::Function_MetaDataParams[] = {
		{ "Category", "PoseDriver" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_PoseDriver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetPoseDriverOutput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimGraphNode_PoseDriver, nullptr, "SetPoseDriverOutput", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetPoseDriverOutput_Statics::AnimGraphNode_PoseDriver_eventSetPoseDriverOutput_Parms), Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetPoseDriverOutput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetPoseDriverOutput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetPoseDriverOutput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetPoseDriverOutput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetPoseDriverOutput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetPoseDriverOutput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetPoseDriverSource_Statics
	{
		struct AnimGraphNode_PoseDriver_eventSetPoseDriverSource_Parms
		{
			EPoseDriverSource DriverSource;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_DriverSource_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DriverSource;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetPoseDriverSource_Statics::NewProp_DriverSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetPoseDriverSource_Statics::NewProp_DriverSource = { "DriverSource", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimGraphNode_PoseDriver_eventSetPoseDriverSource_Parms, DriverSource), Z_Construct_UEnum_AnimGraphRuntime_EPoseDriverSource, METADATA_PARAMS(nullptr, 0) }; // 1408224931
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetPoseDriverSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetPoseDriverSource_Statics::NewProp_DriverSource_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetPoseDriverSource_Statics::NewProp_DriverSource,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetPoseDriverSource_Statics::Function_MetaDataParams[] = {
		{ "Category", "PoseDriver" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_PoseDriver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetPoseDriverSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimGraphNode_PoseDriver, nullptr, "SetPoseDriverSource", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetPoseDriverSource_Statics::AnimGraphNode_PoseDriver_eventSetPoseDriverSource_Parms), Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetPoseDriverSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetPoseDriverSource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetPoseDriverSource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetPoseDriverSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetPoseDriverSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetPoseDriverSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetRBFParameters_Statics
	{
		struct AnimGraphNode_PoseDriver_eventSetRBFParameters_Parms
		{
			FRBFParams Parameters;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetRBFParameters_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimGraphNode_PoseDriver_eventSetRBFParameters_Parms, Parameters), Z_Construct_UScriptStruct_FRBFParams, METADATA_PARAMS(nullptr, 0) }; // 637132977
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetRBFParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetRBFParameters_Statics::NewProp_Parameters,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetRBFParameters_Statics::Function_MetaDataParams[] = {
		{ "Category", "PoseDriver" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_PoseDriver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetRBFParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimGraphNode_PoseDriver, nullptr, "SetRBFParameters", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetRBFParameters_Statics::AnimGraphNode_PoseDriver_eventSetRBFParameters_Parms), Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetRBFParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetRBFParameters_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetRBFParameters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetRBFParameters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetRBFParameters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetRBFParameters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetSourceBones_Statics
	{
		struct AnimGraphNode_PoseDriver_eventSetSourceBones_Parms
		{
			TArray<FName> BoneNames;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetSourceBones_Statics::NewProp_BoneNames_Inner = { "BoneNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetSourceBones_Statics::NewProp_BoneNames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetSourceBones_Statics::NewProp_BoneNames = { "BoneNames", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimGraphNode_PoseDriver_eventSetSourceBones_Parms, BoneNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetSourceBones_Statics::NewProp_BoneNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetSourceBones_Statics::NewProp_BoneNames_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetSourceBones_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetSourceBones_Statics::NewProp_BoneNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetSourceBones_Statics::NewProp_BoneNames,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetSourceBones_Statics::Function_MetaDataParams[] = {
		{ "Category", "PoseDriver" },
		{ "Comment", "/** Sets the pose-driver its source bones by name */" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_PoseDriver.h" },
		{ "ToolTip", "Sets the pose-driver its source bones by name" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetSourceBones_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimGraphNode_PoseDriver, nullptr, "SetSourceBones", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetSourceBones_Statics::AnimGraphNode_PoseDriver_eventSetSourceBones_Parms), Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetSourceBones_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetSourceBones_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetSourceBones_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetSourceBones_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetSourceBones()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetSourceBones_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimGraphNode_PoseDriver);
	UClass* Z_Construct_UClass_UAnimGraphNode_PoseDriver_NoRegister()
	{
		return UAnimGraphNode_PoseDriver::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_PoseDriver_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AxisLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AxisLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConeSubdivision_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ConeSubdivision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDebugCones_MetaData[];
#endif
		static void NewProp_bDrawDebugCones_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDebugCones;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastPreviewComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LastPreviewComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_PoseDriver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_PoseHandler,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAnimGraphNode_PoseDriver_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimGraphNode_PoseDriver_CopyTargetsFromPoseAsset, "CopyTargetsFromPoseAsset" }, // 3000698603
		{ &Z_Construct_UFunction_UAnimGraphNode_PoseDriver_GetDrivingBoneNames, "GetDrivingBoneNames" }, // 3754109826
		{ &Z_Construct_UFunction_UAnimGraphNode_PoseDriver_GetOnlyDriveSelectedBones, "GetOnlyDriveSelectedBones" }, // 1947572181
		{ &Z_Construct_UFunction_UAnimGraphNode_PoseDriver_GetPoseDriverOutput, "GetPoseDriverOutput" }, // 20832154
		{ &Z_Construct_UFunction_UAnimGraphNode_PoseDriver_GetPoseDriverSource, "GetPoseDriverSource" }, // 340710514
		{ &Z_Construct_UFunction_UAnimGraphNode_PoseDriver_GetRBFParameters, "GetRBFParameters" }, // 2017384439
		{ &Z_Construct_UFunction_UAnimGraphNode_PoseDriver_GetSourceBoneNames, "GetSourceBoneNames" }, // 3409613766
		{ &Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetDrivingBones, "SetDrivingBones" }, // 806180390
		{ &Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetOnlyDriveSelectedBones, "SetOnlyDriveSelectedBones" }, // 326077524
		{ &Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetPoseDriverOutput, "SetPoseDriverOutput" }, // 3450094120
		{ &Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetPoseDriverSource, "SetPoseDriverSource" }, // 2366786146
		{ &Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetRBFParameters, "SetRBFParameters" }, // 1075087938
		{ &Z_Construct_UFunction_UAnimGraphNode_PoseDriver_SetSourceBones, "SetSourceBones" }, // 2592649927
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_PoseDriver_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AnimGraphNode_PoseDriver.h" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_PoseDriver.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_PoseDriver_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_PoseDriver.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_PoseDriver_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimGraphNode_PoseDriver, Node), Z_Construct_UScriptStruct_FAnimNode_PoseDriver, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_PoseDriver_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_PoseDriver_Statics::NewProp_Node_MetaData)) }; // 1501948622
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_PoseDriver_Statics::NewProp_AxisLength_MetaData[] = {
		{ "Category", "Debugging" },
		{ "Comment", "/** Length of axis in world units used for debug drawing */" },
		{ "DefaultValue", "20.0" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_PoseDriver.h" },
		{ "ToolTip", "Length of axis in world units used for debug drawing" },
		{ "UIMax", "100.0" },
		{ "UIMin", "1.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimGraphNode_PoseDriver_Statics::NewProp_AxisLength = { "AxisLength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimGraphNode_PoseDriver, AxisLength), METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_PoseDriver_Statics::NewProp_AxisLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_PoseDriver_Statics::NewProp_AxisLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_PoseDriver_Statics::NewProp_ConeSubdivision_MetaData[] = {
		{ "Category", "Debugging" },
		{ "Comment", "/** Number of subdivisions / lines used when debug drawing a cone */" },
		{ "DefaultValue", "32" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_PoseDriver.h" },
		{ "ToolTip", "Number of subdivisions / lines used when debug drawing a cone" },
		{ "UIMax", "128" },
		{ "UIMin", "6" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAnimGraphNode_PoseDriver_Statics::NewProp_ConeSubdivision = { "ConeSubdivision", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimGraphNode_PoseDriver, ConeSubdivision), METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_PoseDriver_Statics::NewProp_ConeSubdivision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_PoseDriver_Statics::NewProp_ConeSubdivision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_PoseDriver_Statics::NewProp_bDrawDebugCones_MetaData[] = {
		{ "Category", "Debugging" },
		{ "Comment", "/** If checked the cones will be drawn in 3d for debugging */" },
		{ "DefaultValue", "True" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_PoseDriver.h" },
		{ "ToolTip", "If checked the cones will be drawn in 3d for debugging" },
	};
#endif
	void Z_Construct_UClass_UAnimGraphNode_PoseDriver_Statics::NewProp_bDrawDebugCones_SetBit(void* Obj)
	{
		((UAnimGraphNode_PoseDriver*)Obj)->bDrawDebugCones = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimGraphNode_PoseDriver_Statics::NewProp_bDrawDebugCones = { "bDrawDebugCones", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAnimGraphNode_PoseDriver), &Z_Construct_UClass_UAnimGraphNode_PoseDriver_Statics::NewProp_bDrawDebugCones_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_PoseDriver_Statics::NewProp_bDrawDebugCones_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_PoseDriver_Statics::NewProp_bDrawDebugCones_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_PoseDriver_Statics::NewProp_LastPreviewComponent_MetaData[] = {
		{ "Comment", "/** Used to refer back to preview instance in anim tools */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_PoseDriver.h" },
		{ "ToolTip", "Used to refer back to preview instance in anim tools" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimGraphNode_PoseDriver_Statics::NewProp_LastPreviewComponent = { "LastPreviewComponent", nullptr, (EPropertyFlags)0x0014000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimGraphNode_PoseDriver, LastPreviewComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_PoseDriver_Statics::NewProp_LastPreviewComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_PoseDriver_Statics::NewProp_LastPreviewComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_PoseDriver_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_PoseDriver_Statics::NewProp_Node,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_PoseDriver_Statics::NewProp_AxisLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_PoseDriver_Statics::NewProp_ConeSubdivision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_PoseDriver_Statics::NewProp_bDrawDebugCones,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_PoseDriver_Statics::NewProp_LastPreviewComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_PoseDriver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_PoseDriver>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_PoseDriver_Statics::ClassParams = {
		&UAnimGraphNode_PoseDriver::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAnimGraphNode_PoseDriver_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_PoseDriver_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_PoseDriver_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_PoseDriver_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimGraphNode_PoseDriver()
	{
		if (!Z_Registration_Info_UClass_UAnimGraphNode_PoseDriver.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimGraphNode_PoseDriver.OuterSingleton, Z_Construct_UClass_UAnimGraphNode_PoseDriver_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimGraphNode_PoseDriver.OuterSingleton;
	}
	template<> ANIMGRAPH_API UClass* StaticClass<UAnimGraphNode_PoseDriver>()
	{
		return UAnimGraphNode_PoseDriver::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_PoseDriver);
	UAnimGraphNode_PoseDriver::~UAnimGraphNode_PoseDriver() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimGraphNode_PoseDriver)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_PoseDriver_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_PoseDriver_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimGraphNode_PoseDriver, UAnimGraphNode_PoseDriver::StaticClass, TEXT("UAnimGraphNode_PoseDriver"), &Z_Registration_Info_UClass_UAnimGraphNode_PoseDriver, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimGraphNode_PoseDriver), 1885160153U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_PoseDriver_h_1872209209(TEXT("/Script/AnimGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_PoseDriver_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_PoseDriver_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
