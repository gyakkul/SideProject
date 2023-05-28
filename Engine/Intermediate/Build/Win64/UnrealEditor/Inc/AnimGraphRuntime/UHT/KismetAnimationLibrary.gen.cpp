// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KismetAnimationLibrary.h"
#include "../../Source/Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "KismetAnimationTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKismetAnimationLibrary() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UClass* Z_Construct_UClass_UKismetAnimationLibrary();
	ANIMGRAPHRUNTIME_API UClass* Z_Construct_UClass_UKismetAnimationLibrary_NoRegister();
	ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_EEasingFuncType();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPositionHistory();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERelativeTransformSpace();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References
	DEFINE_FUNCTION(UKismetAnimationLibrary::execCalculateDirection)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Velocity);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_BaseRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UKismetAnimationLibrary::CalculateDirection(Z_Param_Out_Velocity,Z_Param_Out_BaseRotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetAnimationLibrary::execK2_EndProfilingTimer)
	{
		P_GET_UBOOL(Z_Param_bLog);
		P_GET_PROPERTY(FStrProperty,Z_Param_LogPrefix);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UKismetAnimationLibrary::K2_EndProfilingTimer(Z_Param_bLog,Z_Param_LogPrefix);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetAnimationLibrary::execK2_StartProfilingTimer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UKismetAnimationLibrary::K2_StartProfilingTimer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetAnimationLibrary::execK2_CalculateVelocityFromSockets)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaSeconds);
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_Component);
		P_GET_PROPERTY(FNameProperty,Z_Param_SocketOrBoneName);
		P_GET_PROPERTY(FNameProperty,Z_Param_ReferenceSocketOrBone);
		P_GET_PROPERTY(FByteProperty,Z_Param_SocketSpace);
		P_GET_STRUCT(FVector,Z_Param_OffsetInBoneSpace);
		P_GET_STRUCT_REF(FPositionHistory,Z_Param_Out_History);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumberOfSamples);
		P_GET_PROPERTY(FFloatProperty,Z_Param_VelocityMin);
		P_GET_PROPERTY(FFloatProperty,Z_Param_VelocityMax);
		P_GET_ENUM(EEasingFuncType,Z_Param_EasingType);
		P_GET_STRUCT_REF(FRuntimeFloatCurve,Z_Param_Out_CustomCurve);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UKismetAnimationLibrary::K2_CalculateVelocityFromSockets(Z_Param_DeltaSeconds,Z_Param_Component,Z_Param_SocketOrBoneName,Z_Param_ReferenceSocketOrBone,ERelativeTransformSpace(Z_Param_SocketSpace),Z_Param_OffsetInBoneSpace,Z_Param_Out_History,Z_Param_NumberOfSamples,Z_Param_VelocityMin,Z_Param_VelocityMax,EEasingFuncType(Z_Param_EasingType),Z_Param_Out_CustomCurve);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetAnimationLibrary::execK2_CalculateVelocityFromPositionHistory)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaSeconds);
		P_GET_STRUCT(FVector,Z_Param_Position);
		P_GET_STRUCT_REF(FPositionHistory,Z_Param_Out_History);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumberOfSamples);
		P_GET_PROPERTY(FFloatProperty,Z_Param_VelocityMin);
		P_GET_PROPERTY(FFloatProperty,Z_Param_VelocityMax);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UKismetAnimationLibrary::K2_CalculateVelocityFromPositionHistory(Z_Param_DeltaSeconds,Z_Param_Position,Z_Param_Out_History,Z_Param_NumberOfSamples,Z_Param_VelocityMin,Z_Param_VelocityMax);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetAnimationLibrary::execK2_MakePerlinNoiseAndRemap)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_GET_PROPERTY(FFloatProperty,Z_Param_RangeOutMin);
		P_GET_PROPERTY(FFloatProperty,Z_Param_RangeOutMax);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UKismetAnimationLibrary::K2_MakePerlinNoiseAndRemap(Z_Param_Value,Z_Param_RangeOutMin,Z_Param_RangeOutMax);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetAnimationLibrary::execK2_MakePerlinNoiseVectorAndRemap)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_X);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Y);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Z);
		P_GET_PROPERTY(FFloatProperty,Z_Param_RangeOutMinX);
		P_GET_PROPERTY(FFloatProperty,Z_Param_RangeOutMaxX);
		P_GET_PROPERTY(FFloatProperty,Z_Param_RangeOutMinY);
		P_GET_PROPERTY(FFloatProperty,Z_Param_RangeOutMaxY);
		P_GET_PROPERTY(FFloatProperty,Z_Param_RangeOutMinZ);
		P_GET_PROPERTY(FFloatProperty,Z_Param_RangeOutMaxZ);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UKismetAnimationLibrary::K2_MakePerlinNoiseVectorAndRemap(Z_Param_X,Z_Param_Y,Z_Param_Z,Z_Param_RangeOutMinX,Z_Param_RangeOutMaxX,Z_Param_RangeOutMinY,Z_Param_RangeOutMaxY,Z_Param_RangeOutMinZ,Z_Param_RangeOutMaxZ);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetAnimationLibrary::execK2_DirectionBetweenSockets)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_Component);
		P_GET_PROPERTY(FNameProperty,Z_Param_SocketOrBoneNameFrom);
		P_GET_PROPERTY(FNameProperty,Z_Param_SocketOrBoneNameTo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UKismetAnimationLibrary::K2_DirectionBetweenSockets(Z_Param_Component,Z_Param_SocketOrBoneNameFrom,Z_Param_SocketOrBoneNameTo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetAnimationLibrary::execK2_DistanceBetweenTwoSocketsAndMapRange)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_Component);
		P_GET_PROPERTY(FNameProperty,Z_Param_SocketOrBoneNameA);
		P_GET_PROPERTY(FByteProperty,Z_Param_SocketSpaceA);
		P_GET_PROPERTY(FNameProperty,Z_Param_SocketOrBoneNameB);
		P_GET_PROPERTY(FByteProperty,Z_Param_SocketSpaceB);
		P_GET_UBOOL(Z_Param_bRemapRange);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InRangeMin);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InRangeMax);
		P_GET_PROPERTY(FFloatProperty,Z_Param_OutRangeMin);
		P_GET_PROPERTY(FFloatProperty,Z_Param_OutRangeMax);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UKismetAnimationLibrary::K2_DistanceBetweenTwoSocketsAndMapRange(Z_Param_Component,Z_Param_SocketOrBoneNameA,ERelativeTransformSpace(Z_Param_SocketSpaceA),Z_Param_SocketOrBoneNameB,ERelativeTransformSpace(Z_Param_SocketSpaceB),Z_Param_bRemapRange,Z_Param_InRangeMin,Z_Param_InRangeMax,Z_Param_OutRangeMin,Z_Param_OutRangeMax);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetAnimationLibrary::execK2_LookAt)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_CurrentTransform);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_TargetPosition);
		P_GET_STRUCT(FVector,Z_Param_LookAtVector);
		P_GET_UBOOL(Z_Param_bUseUpVector);
		P_GET_STRUCT(FVector,Z_Param_UpVector);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ClampConeInDegree);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=UKismetAnimationLibrary::K2_LookAt(Z_Param_Out_CurrentTransform,Z_Param_Out_TargetPosition,Z_Param_LookAtVector,Z_Param_bUseUpVector,Z_Param_UpVector,Z_Param_ClampConeInDegree);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetAnimationLibrary::execK2_TwoBoneIK)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_RootPos);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_JointPos);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_EndPos);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_JointTarget);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Effector);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutJointPos);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutEndPos);
		P_GET_UBOOL(Z_Param_bAllowStretching);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartStretchRatio);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxStretchScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		UKismetAnimationLibrary::K2_TwoBoneIK(Z_Param_Out_RootPos,Z_Param_Out_JointPos,Z_Param_Out_EndPos,Z_Param_Out_JointTarget,Z_Param_Out_Effector,Z_Param_Out_OutJointPos,Z_Param_Out_OutEndPos,Z_Param_bAllowStretching,Z_Param_StartStretchRatio,Z_Param_MaxStretchScale);
		P_NATIVE_END;
	}
	void UKismetAnimationLibrary::StaticRegisterNativesUKismetAnimationLibrary()
	{
		UClass* Class = UKismetAnimationLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CalculateDirection", &UKismetAnimationLibrary::execCalculateDirection },
			{ "K2_CalculateVelocityFromPositionHistory", &UKismetAnimationLibrary::execK2_CalculateVelocityFromPositionHistory },
			{ "K2_CalculateVelocityFromSockets", &UKismetAnimationLibrary::execK2_CalculateVelocityFromSockets },
			{ "K2_DirectionBetweenSockets", &UKismetAnimationLibrary::execK2_DirectionBetweenSockets },
			{ "K2_DistanceBetweenTwoSocketsAndMapRange", &UKismetAnimationLibrary::execK2_DistanceBetweenTwoSocketsAndMapRange },
			{ "K2_EndProfilingTimer", &UKismetAnimationLibrary::execK2_EndProfilingTimer },
			{ "K2_LookAt", &UKismetAnimationLibrary::execK2_LookAt },
			{ "K2_MakePerlinNoiseAndRemap", &UKismetAnimationLibrary::execK2_MakePerlinNoiseAndRemap },
			{ "K2_MakePerlinNoiseVectorAndRemap", &UKismetAnimationLibrary::execK2_MakePerlinNoiseVectorAndRemap },
			{ "K2_StartProfilingTimer", &UKismetAnimationLibrary::execK2_StartProfilingTimer },
			{ "K2_TwoBoneIK", &UKismetAnimationLibrary::execK2_TwoBoneIK },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UKismetAnimationLibrary_CalculateDirection_Statics
	{
		struct KismetAnimationLibrary_eventCalculateDirection_Parms
		{
			FVector Velocity;
			FRotator BaseRotation;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BaseRotation;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetAnimationLibrary_CalculateDirection_Statics::NewProp_Velocity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_CalculateDirection_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventCalculateDirection_Parms, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UKismetAnimationLibrary_CalculateDirection_Statics::NewProp_Velocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_CalculateDirection_Statics::NewProp_Velocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetAnimationLibrary_CalculateDirection_Statics::NewProp_BaseRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_CalculateDirection_Statics::NewProp_BaseRotation = { "BaseRotation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventCalculateDirection_Parms, BaseRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_UKismetAnimationLibrary_CalculateDirection_Statics::NewProp_BaseRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_CalculateDirection_Statics::NewProp_BaseRotation_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_CalculateDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventCalculateDirection_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetAnimationLibrary_CalculateDirection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_CalculateDirection_Statics::NewProp_Velocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_CalculateDirection_Statics::NewProp_BaseRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_CalculateDirection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetAnimationLibrary_CalculateDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation|Utilities" },
		{ "Comment", "/** \n\x09 * Returns degree of the angle between Velocity and Rotation forward vector\n\x09 * The range of return will be from [-180, 180]. Useful for feeding directional blendspaces.\n\x09 * @param\x09Velocity\x09\x09The velocity to use as direction relative to BaseRotation\n\x09 * @param\x09""BaseRotation\x09The base rotation, e.g. of a pawn\n\x09 */" },
		{ "ModuleRelativePath", "Public/KismetAnimationLibrary.h" },
		{ "ToolTip", "Returns degree of the angle between Velocity and Rotation forward vector\nThe range of return will be from [-180, 180]. Useful for feeding directional blendspaces.\n@param       Velocity                The velocity to use as direction relative to BaseRotation\n@param       BaseRotation    The base rotation, e.g. of a pawn" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetAnimationLibrary_CalculateDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetAnimationLibrary, nullptr, "CalculateDirection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetAnimationLibrary_CalculateDirection_Statics::KismetAnimationLibrary_eventCalculateDirection_Parms), Z_Construct_UFunction_UKismetAnimationLibrary_CalculateDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_CalculateDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetAnimationLibrary_CalculateDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_CalculateDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetAnimationLibrary_CalculateDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetAnimationLibrary_CalculateDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromPositionHistory_Statics
	{
		struct KismetAnimationLibrary_eventK2_CalculateVelocityFromPositionHistory_Parms
		{
			float DeltaSeconds;
			FVector Position;
			FPositionHistory History;
			int32 NumberOfSamples;
			float VelocityMin;
			float VelocityMax;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UECodeGen_Private::FStructPropertyParams NewProp_History;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfSamples;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VelocityMin;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VelocityMax;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromPositionHistory_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_CalculateVelocityFromPositionHistory_Parms, DeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromPositionHistory_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_CalculateVelocityFromPositionHistory_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromPositionHistory_Statics::NewProp_History = { "History", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_CalculateVelocityFromPositionHistory_Parms, History), Z_Construct_UScriptStruct_FPositionHistory, METADATA_PARAMS(nullptr, 0) }; // 1859106238
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromPositionHistory_Statics::NewProp_NumberOfSamples = { "NumberOfSamples", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_CalculateVelocityFromPositionHistory_Parms, NumberOfSamples), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromPositionHistory_Statics::NewProp_VelocityMin = { "VelocityMin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_CalculateVelocityFromPositionHistory_Parms, VelocityMin), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromPositionHistory_Statics::NewProp_VelocityMax = { "VelocityMax", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_CalculateVelocityFromPositionHistory_Parms, VelocityMax), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromPositionHistory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_CalculateVelocityFromPositionHistory_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromPositionHistory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromPositionHistory_Statics::NewProp_DeltaSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromPositionHistory_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromPositionHistory_Statics::NewProp_History,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromPositionHistory_Statics::NewProp_NumberOfSamples,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromPositionHistory_Statics::NewProp_VelocityMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromPositionHistory_Statics::NewProp_VelocityMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromPositionHistory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromPositionHistory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation|Utilities" },
		{ "Comment", "/** \n\x09 *\x09This function calculates the velocity of a position changing over time.\n\x09 *\x09You need to hook up a valid PositionHistory variable to this for storage.\n\x09 *\n\x09 *\x09@param DeltaSeconds The time passed in seconds\n\x09 *\x09@param Position The position to track over time.\n\x09 *\x09@param History The history to use for storage.\n\x09 *\x09@param NumberOfSamples The number of samples to use for the history. The higher the number of samples - the smoother the velocity changes.\n\x09 *\x09@param VelocityMin The minimum velocity to use for normalization (if both min and max are set to 0, normalization is turned off)\n\x09 *\x09@param VelocityMax The maximum velocity to use for normalization (if both min and max are set to 0, normalization is turned off)\n\x09 */" },
		{ "DisplayName", "Calculate Velocity From Position History" },
		{ "ModuleRelativePath", "Public/KismetAnimationLibrary.h" },
		{ "NumberOfSamples", "16" },
		{ "ScriptName", "CalculateVelocityFromPositionHistory" },
		{ "ToolTip", "This function calculates the velocity of a position changing over time.\nYou need to hook up a valid PositionHistory variable to this for storage.\n\n@param DeltaSeconds The time passed in seconds\n@param Position The position to track over time.\n@param History The history to use for storage.\n@param NumberOfSamples The number of samples to use for the history. The higher the number of samples - the smoother the velocity changes.\n@param VelocityMin The minimum velocity to use for normalization (if both min and max are set to 0, normalization is turned off)\n@param VelocityMax The maximum velocity to use for normalization (if both min and max are set to 0, normalization is turned off)" },
		{ "VelocityMax", "128.f" },
		{ "VelocityMin", "0.f" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromPositionHistory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetAnimationLibrary, nullptr, "K2_CalculateVelocityFromPositionHistory", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromPositionHistory_Statics::KismetAnimationLibrary_eventK2_CalculateVelocityFromPositionHistory_Parms), Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromPositionHistory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromPositionHistory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromPositionHistory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromPositionHistory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromPositionHistory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromPositionHistory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Statics
	{
		struct KismetAnimationLibrary_eventK2_CalculateVelocityFromSockets_Parms
		{
			float DeltaSeconds;
			USkeletalMeshComponent* Component;
			FName SocketOrBoneName;
			FName ReferenceSocketOrBone;
			TEnumAsByte<ERelativeTransformSpace> SocketSpace;
			FVector OffsetInBoneSpace;
			FPositionHistory History;
			int32 NumberOfSamples;
			float VelocityMin;
			float VelocityMax;
			EEasingFuncType EasingType;
			FRuntimeFloatCurve CustomCurve;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SocketOrBoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SocketOrBoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferenceSocketOrBone_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReferenceSocketOrBone;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SocketSpace;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OffsetInBoneSpace;
		static const UECodeGen_Private::FStructPropertyParams NewProp_History;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfSamples;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VelocityMin;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VelocityMax;
		static const UECodeGen_Private::FBytePropertyParams NewProp_EasingType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_EasingType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CustomCurve;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_CalculateVelocityFromSockets_Parms, DeltaSeconds), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_CalculateVelocityFromSockets_Parms, Component), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Statics::NewProp_Component_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Statics::NewProp_SocketOrBoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Statics::NewProp_SocketOrBoneName = { "SocketOrBoneName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_CalculateVelocityFromSockets_Parms, SocketOrBoneName), METADATA_PARAMS(Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Statics::NewProp_SocketOrBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Statics::NewProp_SocketOrBoneName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Statics::NewProp_ReferenceSocketOrBone_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Statics::NewProp_ReferenceSocketOrBone = { "ReferenceSocketOrBone", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_CalculateVelocityFromSockets_Parms, ReferenceSocketOrBone), METADATA_PARAMS(Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Statics::NewProp_ReferenceSocketOrBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Statics::NewProp_ReferenceSocketOrBone_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Statics::NewProp_SocketSpace = { "SocketSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_CalculateVelocityFromSockets_Parms, SocketSpace), Z_Construct_UEnum_Engine_ERelativeTransformSpace, METADATA_PARAMS(nullptr, 0) }; // 3685529446
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Statics::NewProp_OffsetInBoneSpace = { "OffsetInBoneSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_CalculateVelocityFromSockets_Parms, OffsetInBoneSpace), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Statics::NewProp_History = { "History", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_CalculateVelocityFromSockets_Parms, History), Z_Construct_UScriptStruct_FPositionHistory, METADATA_PARAMS(nullptr, 0) }; // 1859106238
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Statics::NewProp_NumberOfSamples = { "NumberOfSamples", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_CalculateVelocityFromSockets_Parms, NumberOfSamples), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Statics::NewProp_VelocityMin = { "VelocityMin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_CalculateVelocityFromSockets_Parms, VelocityMin), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Statics::NewProp_VelocityMax = { "VelocityMax", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_CalculateVelocityFromSockets_Parms, VelocityMax), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Statics::NewProp_EasingType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Statics::NewProp_EasingType = { "EasingType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_CalculateVelocityFromSockets_Parms, EasingType), Z_Construct_UEnum_AnimGraphRuntime_EEasingFuncType, METADATA_PARAMS(nullptr, 0) }; // 4027758664
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Statics::NewProp_CustomCurve_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Statics::NewProp_CustomCurve = { "CustomCurve", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_CalculateVelocityFromSockets_Parms, CustomCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Statics::NewProp_CustomCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Statics::NewProp_CustomCurve_MetaData)) }; // 1477693291
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_CalculateVelocityFromSockets_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Statics::NewProp_DeltaSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Statics::NewProp_Component,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Statics::NewProp_SocketOrBoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Statics::NewProp_ReferenceSocketOrBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Statics::NewProp_SocketSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Statics::NewProp_OffsetInBoneSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Statics::NewProp_History,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Statics::NewProp_NumberOfSamples,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Statics::NewProp_VelocityMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Statics::NewProp_VelocityMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Statics::NewProp_EasingType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Statics::NewProp_EasingType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Statics::NewProp_CustomCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation|Utilities" },
		{ "Comment", "/** \n\x09 *\x09This function calculates the velocity of an offset position on a bone / socket over time.\n\x09 *\x09The bone's / socket's motion can be expressed within a reference frame (another bone / socket). \n\x09 *\x09You need to hook up a valid PositionHistory variable to this for storage.\n\x09 *\n\x09 *\x09@param DeltaSeconds The time passed in seconds\n\x09 *\x09@param Component The skeletal component to look for the bones / sockets\n\x09 *\x09@param SocketOrBoneName The name of the bone / socket to track.\n\x09 *\x09@param ReferenceSocketOrBone The name of the bone / socket to use as a frame of reference (or None if no frame of reference == world space).\n\x09 *\x09@param SocketSpace The space to use for the two sockets / bones\n\x09 *\x09@param OffsetInBoneSpace The relative position in the space of the bone / socket to track over time.\n\x09 *\x09@param History The history to use for storage.\n\x09 *\x09@param NumberOfSamples The number of samples to use for the history. The higher the number of samples - the smoother the velocity changes.\n\x09 *\x09@param VelocityMin The minimum velocity to use for normalization (if both min and max are set to 0, normalization is turned off)\n\x09 *\x09@param VelocityMax The maximum velocity to use for normalization (if both min and max are set to 0, normalization is turned off)\n\x09 *\x09@param EasingType The easing function to use\n\x09 *\x09@param CustomCurve The curve to use if the easing type is \"Custom\"\n\x09 */" },
		{ "DisplayName", "Calculate Velocity From Sockets" },
		{ "ModuleRelativePath", "Public/KismetAnimationLibrary.h" },
		{ "NotBlueprintThreadSafe", "" },
		{ "NumberOfSamples", "16" },
		{ "ScriptName", "CalculateVelocityFromSockets" },
		{ "ToolTip", "This function calculates the velocity of an offset position on a bone / socket over time.\nThe bone's / socket's motion can be expressed within a reference frame (another bone / socket).\nYou need to hook up a valid PositionHistory variable to this for storage.\n\n@param DeltaSeconds The time passed in seconds\n@param Component The skeletal component to look for the bones / sockets\n@param SocketOrBoneName The name of the bone / socket to track.\n@param ReferenceSocketOrBone The name of the bone / socket to use as a frame of reference (or None if no frame of reference == world space).\n@param SocketSpace The space to use for the two sockets / bones\n@param OffsetInBoneSpace The relative position in the space of the bone / socket to track over time.\n@param History The history to use for storage.\n@param NumberOfSamples The number of samples to use for the history. The higher the number of samples - the smoother the velocity changes.\n@param VelocityMin The minimum velocity to use for normalization (if both min and max are set to 0, normalization is turned off)\n@param VelocityMax The maximum velocity to use for normalization (if both min and max are set to 0, normalization is turned off)\n@param EasingType The easing function to use\n@param CustomCurve The curve to use if the easing type is \"Custom\"" },
		{ "VelocityMax", "128.f" },
		{ "VelocityMin", "0.f" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetAnimationLibrary, nullptr, "K2_CalculateVelocityFromSockets", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Statics::KismetAnimationLibrary_eventK2_CalculateVelocityFromSockets_Parms), Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetAnimationLibrary_K2_DirectionBetweenSockets_Statics
	{
		struct KismetAnimationLibrary_eventK2_DirectionBetweenSockets_Parms
		{
			const USkeletalMeshComponent* Component;
			FName SocketOrBoneNameFrom;
			FName SocketOrBoneNameTo;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SocketOrBoneNameFrom_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SocketOrBoneNameFrom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SocketOrBoneNameTo_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SocketOrBoneNameTo;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetAnimationLibrary_K2_DirectionBetweenSockets_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_DirectionBetweenSockets_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_DirectionBetweenSockets_Parms, Component), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UKismetAnimationLibrary_K2_DirectionBetweenSockets_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_K2_DirectionBetweenSockets_Statics::NewProp_Component_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetAnimationLibrary_K2_DirectionBetweenSockets_Statics::NewProp_SocketOrBoneNameFrom_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_DirectionBetweenSockets_Statics::NewProp_SocketOrBoneNameFrom = { "SocketOrBoneNameFrom", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_DirectionBetweenSockets_Parms, SocketOrBoneNameFrom), METADATA_PARAMS(Z_Construct_UFunction_UKismetAnimationLibrary_K2_DirectionBetweenSockets_Statics::NewProp_SocketOrBoneNameFrom_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_K2_DirectionBetweenSockets_Statics::NewProp_SocketOrBoneNameFrom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetAnimationLibrary_K2_DirectionBetweenSockets_Statics::NewProp_SocketOrBoneNameTo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_DirectionBetweenSockets_Statics::NewProp_SocketOrBoneNameTo = { "SocketOrBoneNameTo", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_DirectionBetweenSockets_Parms, SocketOrBoneNameTo), METADATA_PARAMS(Z_Construct_UFunction_UKismetAnimationLibrary_K2_DirectionBetweenSockets_Statics::NewProp_SocketOrBoneNameTo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_K2_DirectionBetweenSockets_Statics::NewProp_SocketOrBoneNameTo_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_DirectionBetweenSockets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_DirectionBetweenSockets_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetAnimationLibrary_K2_DirectionBetweenSockets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_DirectionBetweenSockets_Statics::NewProp_Component,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_DirectionBetweenSockets_Statics::NewProp_SocketOrBoneNameFrom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_DirectionBetweenSockets_Statics::NewProp_SocketOrBoneNameTo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_DirectionBetweenSockets_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetAnimationLibrary_K2_DirectionBetweenSockets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation|Utilities" },
		{ "Comment", "/**\n\x09 *\x09""Computes the direction between two bones / sockets.\n\x09 *\n\x09 *\x09@param Component The skeletal component to look for the sockets / bones within\n\x09 *\x09@param SocketOrBoneNameFrom The name of the first socket / bone\n\x09 *\x09@param SocketOrBoneNameTo The name of the second socket / bone\n\x09 */" },
		{ "DisplayName", "Get Direction Between Sockets" },
		{ "ModuleRelativePath", "Public/KismetAnimationLibrary.h" },
		{ "NotBlueprintThreadSafe", "" },
		{ "ScriptName", "DirectionBetweenSockets" },
		{ "ToolTip", "Computes the direction between two bones / sockets.\n\n@param Component The skeletal component to look for the sockets / bones within\n@param SocketOrBoneNameFrom The name of the first socket / bone\n@param SocketOrBoneNameTo The name of the second socket / bone" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_DirectionBetweenSockets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetAnimationLibrary, nullptr, "K2_DirectionBetweenSockets", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetAnimationLibrary_K2_DirectionBetweenSockets_Statics::KismetAnimationLibrary_eventK2_DirectionBetweenSockets_Parms), Z_Construct_UFunction_UKismetAnimationLibrary_K2_DirectionBetweenSockets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_K2_DirectionBetweenSockets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetAnimationLibrary_K2_DirectionBetweenSockets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_K2_DirectionBetweenSockets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetAnimationLibrary_K2_DirectionBetweenSockets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetAnimationLibrary_K2_DirectionBetweenSockets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics
	{
		struct KismetAnimationLibrary_eventK2_DistanceBetweenTwoSocketsAndMapRange_Parms
		{
			const USkeletalMeshComponent* Component;
			FName SocketOrBoneNameA;
			TEnumAsByte<ERelativeTransformSpace> SocketSpaceA;
			FName SocketOrBoneNameB;
			TEnumAsByte<ERelativeTransformSpace> SocketSpaceB;
			bool bRemapRange;
			float InRangeMin;
			float InRangeMax;
			float OutRangeMin;
			float OutRangeMax;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SocketOrBoneNameA_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SocketOrBoneNameA;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SocketSpaceA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SocketOrBoneNameB_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SocketOrBoneNameB;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SocketSpaceB;
		static void NewProp_bRemapRange_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemapRange;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InRangeMin;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InRangeMax;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutRangeMin;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutRangeMax;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_DistanceBetweenTwoSocketsAndMapRange_Parms, Component), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::NewProp_Component_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::NewProp_SocketOrBoneNameA_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::NewProp_SocketOrBoneNameA = { "SocketOrBoneNameA", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_DistanceBetweenTwoSocketsAndMapRange_Parms, SocketOrBoneNameA), METADATA_PARAMS(Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::NewProp_SocketOrBoneNameA_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::NewProp_SocketOrBoneNameA_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::NewProp_SocketSpaceA = { "SocketSpaceA", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_DistanceBetweenTwoSocketsAndMapRange_Parms, SocketSpaceA), Z_Construct_UEnum_Engine_ERelativeTransformSpace, METADATA_PARAMS(nullptr, 0) }; // 3685529446
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::NewProp_SocketOrBoneNameB_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::NewProp_SocketOrBoneNameB = { "SocketOrBoneNameB", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_DistanceBetweenTwoSocketsAndMapRange_Parms, SocketOrBoneNameB), METADATA_PARAMS(Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::NewProp_SocketOrBoneNameB_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::NewProp_SocketOrBoneNameB_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::NewProp_SocketSpaceB = { "SocketSpaceB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_DistanceBetweenTwoSocketsAndMapRange_Parms, SocketSpaceB), Z_Construct_UEnum_Engine_ERelativeTransformSpace, METADATA_PARAMS(nullptr, 0) }; // 3685529446
	void Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::NewProp_bRemapRange_SetBit(void* Obj)
	{
		((KismetAnimationLibrary_eventK2_DistanceBetweenTwoSocketsAndMapRange_Parms*)Obj)->bRemapRange = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::NewProp_bRemapRange = { "bRemapRange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KismetAnimationLibrary_eventK2_DistanceBetweenTwoSocketsAndMapRange_Parms), &Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::NewProp_bRemapRange_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::NewProp_InRangeMin = { "InRangeMin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_DistanceBetweenTwoSocketsAndMapRange_Parms, InRangeMin), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::NewProp_InRangeMax = { "InRangeMax", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_DistanceBetweenTwoSocketsAndMapRange_Parms, InRangeMax), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::NewProp_OutRangeMin = { "OutRangeMin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_DistanceBetweenTwoSocketsAndMapRange_Parms, OutRangeMin), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::NewProp_OutRangeMax = { "OutRangeMax", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_DistanceBetweenTwoSocketsAndMapRange_Parms, OutRangeMax), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_DistanceBetweenTwoSocketsAndMapRange_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::NewProp_Component,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::NewProp_SocketOrBoneNameA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::NewProp_SocketSpaceA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::NewProp_SocketOrBoneNameB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::NewProp_SocketSpaceB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::NewProp_bRemapRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::NewProp_InRangeMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::NewProp_InRangeMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::NewProp_OutRangeMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::NewProp_OutRangeMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::Function_MetaDataParams[] = {
		{ "bRemapRange", "false" },
		{ "Category", "Animation|Utilities" },
		{ "Comment", "/**\n\x09 *\x09""Computes the distance between two bones / sockets and can remap the range.\n\x09 *\n\x09 *\x09@param Component The skeletal component to look for the sockets / bones within\n\x09 *\x09@param SocketOrBoneNameA The name of the first socket / bone\n\x09 *\x09@param SocketSpaceA The space for the first socket / bone\n\x09 *\x09@param SocketOrBoneNameB The name of the second socket / bone\n\x09 *\x09@param SocketSpaceB The space for the second socket / bone\n\x09 *\x09@param bRemapRange If set to true, the distance will be remapped using the range parameters\n\x09 *\x09@param InRangeMin The minimum for the input range (commonly == 0.0)\n\x09 *\x09@param InRangeMax The maximum for the input range (the max expected distance)\n\x09 *\x09@param OutRangeMin The minimum for the output range (commonly == 0.0)\n\x09 *\x09@param OutRangeMax The maximum for the output range (commonly == 1.0)\n\x09 */" },
		{ "DisplayName", "Get Distance Between Two Sockets" },
		{ "ModuleRelativePath", "Public/KismetAnimationLibrary.h" },
		{ "NotBlueprintThreadSafe", "" },
		{ "ScriptName", "DistanceBetweenSockets" },
		{ "ToolTip", "Computes the distance between two bones / sockets and can remap the range.\n\n@param Component The skeletal component to look for the sockets / bones within\n@param SocketOrBoneNameA The name of the first socket / bone\n@param SocketSpaceA The space for the first socket / bone\n@param SocketOrBoneNameB The name of the second socket / bone\n@param SocketSpaceB The space for the second socket / bone\n@param bRemapRange If set to true, the distance will be remapped using the range parameters\n@param InRangeMin The minimum for the input range (commonly == 0.0)\n@param InRangeMax The maximum for the input range (the max expected distance)\n@param OutRangeMin The minimum for the output range (commonly == 0.0)\n@param OutRangeMax The maximum for the output range (commonly == 1.0)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetAnimationLibrary, nullptr, "K2_DistanceBetweenTwoSocketsAndMapRange", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::KismetAnimationLibrary_eventK2_DistanceBetweenTwoSocketsAndMapRange_Parms), Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetAnimationLibrary_K2_EndProfilingTimer_Statics
	{
		struct KismetAnimationLibrary_eventK2_EndProfilingTimer_Parms
		{
			bool bLog;
			FString LogPrefix;
			float ReturnValue;
		};
		static void NewProp_bLog_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLog;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LogPrefix_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LogPrefix;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UKismetAnimationLibrary_K2_EndProfilingTimer_Statics::NewProp_bLog_SetBit(void* Obj)
	{
		((KismetAnimationLibrary_eventK2_EndProfilingTimer_Parms*)Obj)->bLog = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_EndProfilingTimer_Statics::NewProp_bLog = { "bLog", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KismetAnimationLibrary_eventK2_EndProfilingTimer_Parms), &Z_Construct_UFunction_UKismetAnimationLibrary_K2_EndProfilingTimer_Statics::NewProp_bLog_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetAnimationLibrary_K2_EndProfilingTimer_Statics::NewProp_LogPrefix_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_EndProfilingTimer_Statics::NewProp_LogPrefix = { "LogPrefix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_EndProfilingTimer_Parms, LogPrefix), METADATA_PARAMS(Z_Construct_UFunction_UKismetAnimationLibrary_K2_EndProfilingTimer_Statics::NewProp_LogPrefix_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_K2_EndProfilingTimer_Statics::NewProp_LogPrefix_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_EndProfilingTimer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_EndProfilingTimer_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetAnimationLibrary_K2_EndProfilingTimer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_EndProfilingTimer_Statics::NewProp_bLog,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_EndProfilingTimer_Statics::NewProp_LogPrefix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_EndProfilingTimer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetAnimationLibrary_K2_EndProfilingTimer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation|Utilities" },
		{ "Comment", "/**\n\x09 *\x09This function ends measuring a profiling bracket and optionally logs the result\n\x09 *\n\x09 *  @param bLog If set to true the result is logged to the OutputLog\n\x09 *  @param LogPrefix A prefix to use for the log\n\x09 *  @result The time spent in milliseconds\n\x09 */" },
		{ "CPP_Default_bLog", "true" },
		{ "CPP_Default_LogPrefix", "" },
		{ "DisplayName", "End Profiling Timer" },
		{ "ModuleRelativePath", "Public/KismetAnimationLibrary.h" },
		{ "ToolTip", "This function ends measuring a profiling bracket and optionally logs the result\n\n@param bLog If set to true the result is logged to the OutputLog\n@param LogPrefix A prefix to use for the log\n@result The time spent in milliseconds" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_EndProfilingTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetAnimationLibrary, nullptr, "K2_EndProfilingTimer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetAnimationLibrary_K2_EndProfilingTimer_Statics::KismetAnimationLibrary_eventK2_EndProfilingTimer_Parms), Z_Construct_UFunction_UKismetAnimationLibrary_K2_EndProfilingTimer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_K2_EndProfilingTimer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetAnimationLibrary_K2_EndProfilingTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_K2_EndProfilingTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetAnimationLibrary_K2_EndProfilingTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetAnimationLibrary_K2_EndProfilingTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt_Statics
	{
		struct KismetAnimationLibrary_eventK2_LookAt_Parms
		{
			FTransform CurrentTransform;
			FVector TargetPosition;
			FVector LookAtVector;
			bool bUseUpVector;
			FVector UpVector;
			float ClampConeInDegree;
			FTransform ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetPosition;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LookAtVector;
		static void NewProp_bUseUpVector_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseUpVector;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UpVector;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ClampConeInDegree;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt_Statics::NewProp_CurrentTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt_Statics::NewProp_CurrentTransform = { "CurrentTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_LookAt_Parms, CurrentTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt_Statics::NewProp_CurrentTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt_Statics::NewProp_CurrentTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt_Statics::NewProp_TargetPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt_Statics::NewProp_TargetPosition = { "TargetPosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_LookAt_Parms, TargetPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt_Statics::NewProp_TargetPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt_Statics::NewProp_TargetPosition_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt_Statics::NewProp_LookAtVector = { "LookAtVector", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_LookAt_Parms, LookAtVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt_Statics::NewProp_bUseUpVector_SetBit(void* Obj)
	{
		((KismetAnimationLibrary_eventK2_LookAt_Parms*)Obj)->bUseUpVector = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt_Statics::NewProp_bUseUpVector = { "bUseUpVector", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KismetAnimationLibrary_eventK2_LookAt_Parms), &Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt_Statics::NewProp_bUseUpVector_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt_Statics::NewProp_UpVector = { "UpVector", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_LookAt_Parms, UpVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt_Statics::NewProp_ClampConeInDegree = { "ClampConeInDegree", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_LookAt_Parms, ClampConeInDegree), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_LookAt_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt_Statics::NewProp_CurrentTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt_Statics::NewProp_TargetPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt_Statics::NewProp_LookAtVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt_Statics::NewProp_bUseUpVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt_Statics::NewProp_UpVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt_Statics::NewProp_ClampConeInDegree,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt_Statics::Function_MetaDataParams[] = {
		{ "bUseUpVector", "false" },
		{ "Category", "Animation|Utilities" },
		{ "Comment", "/**\n\x09 *\x09""Computes the transform which is \"looking\" at target position with a local axis.\n\x09 *\n\x09 *\x09@param CurrentTransform The input transform to modify\n\x09 *\x09@param TargetPosition The position this transform should look at\n\x09 *\x09@param LookAtVector The local vector to align with the target\n\x09 *\x09@param bUseUpVector If set to true the lookat will also perform a twist rotation\n\x09 *\x09@param UpVector The position to use for the upvector target (only used is bUseUpVector is turned on)\n\x09 *\x09@param ClampConeInDegree A limit for only allowing the lookat to rotate as much as defined by the float value\n\x09 */" },
		{ "DisplayName", "Look At Function" },
		{ "ModuleRelativePath", "Public/KismetAnimationLibrary.h" },
		{ "ScriptName", "LookAt" },
		{ "ToolTip", "Computes the transform which is \"looking\" at target position with a local axis.\n\n@param CurrentTransform The input transform to modify\n@param TargetPosition The position this transform should look at\n@param LookAtVector The local vector to align with the target\n@param bUseUpVector If set to true the lookat will also perform a twist rotation\n@param UpVector The position to use for the upvector target (only used is bUseUpVector is turned on)\n@param ClampConeInDegree A limit for only allowing the lookat to rotate as much as defined by the float value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetAnimationLibrary, nullptr, "K2_LookAt", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt_Statics::KismetAnimationLibrary_eventK2_LookAt_Parms), Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseAndRemap_Statics
	{
		struct KismetAnimationLibrary_eventK2_MakePerlinNoiseAndRemap_Parms
		{
			float Value;
			float RangeOutMin;
			float RangeOutMax;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RangeOutMin;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RangeOutMax;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseAndRemap_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_MakePerlinNoiseAndRemap_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseAndRemap_Statics::NewProp_RangeOutMin = { "RangeOutMin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_MakePerlinNoiseAndRemap_Parms, RangeOutMin), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseAndRemap_Statics::NewProp_RangeOutMax = { "RangeOutMax", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_MakePerlinNoiseAndRemap_Parms, RangeOutMax), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseAndRemap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_MakePerlinNoiseAndRemap_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseAndRemap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseAndRemap_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseAndRemap_Statics::NewProp_RangeOutMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseAndRemap_Statics::NewProp_RangeOutMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseAndRemap_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseAndRemap_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation|Utilities" },
		{ "Comment", "/**\n\x09 *\x09This function creates perlin noise for a single float and then range map to RangeOut\n\x09 *\n\x09 *\x09@param Value The input value for the noise function\n\x09 *\x09@param RangeOutMin The minimum for the output range\n\x09 *\x09@param RangeOutMax The maximum for the output range\n\x09 */" },
		{ "DisplayName", "Make Perlin Noise and Remap" },
		{ "ModuleRelativePath", "Public/KismetAnimationLibrary.h" },
		{ "RangeOutMaxX", "1.f" },
		{ "RangeOutMaxY", "1.f" },
		{ "RangeOutMaxZ", "1.f" },
		{ "RangeOutMinX", "-1.f" },
		{ "RangeOutMinY", "-1.f" },
		{ "RangeOutMinZ", "-1.f" },
		{ "ScriptName", "MakeFloatFromPerlinNoise" },
		{ "ToolTip", "This function creates perlin noise for a single float and then range map to RangeOut\n\n@param Value The input value for the noise function\n@param RangeOutMin The minimum for the output range\n@param RangeOutMax The maximum for the output range" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseAndRemap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetAnimationLibrary, nullptr, "K2_MakePerlinNoiseAndRemap", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseAndRemap_Statics::KismetAnimationLibrary_eventK2_MakePerlinNoiseAndRemap_Parms), Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseAndRemap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseAndRemap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseAndRemap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseAndRemap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseAndRemap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseAndRemap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Statics
	{
		struct KismetAnimationLibrary_eventK2_MakePerlinNoiseVectorAndRemap_Parms
		{
			float X;
			float Y;
			float Z;
			float RangeOutMinX;
			float RangeOutMaxX;
			float RangeOutMinY;
			float RangeOutMaxY;
			float RangeOutMinZ;
			float RangeOutMaxZ;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_X;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Y;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Z;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RangeOutMinX;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RangeOutMaxX;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RangeOutMinY;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RangeOutMaxY;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RangeOutMinZ;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RangeOutMaxZ;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_MakePerlinNoiseVectorAndRemap_Parms, X), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_MakePerlinNoiseVectorAndRemap_Parms, Y), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_MakePerlinNoiseVectorAndRemap_Parms, Z), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Statics::NewProp_RangeOutMinX = { "RangeOutMinX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_MakePerlinNoiseVectorAndRemap_Parms, RangeOutMinX), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Statics::NewProp_RangeOutMaxX = { "RangeOutMaxX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_MakePerlinNoiseVectorAndRemap_Parms, RangeOutMaxX), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Statics::NewProp_RangeOutMinY = { "RangeOutMinY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_MakePerlinNoiseVectorAndRemap_Parms, RangeOutMinY), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Statics::NewProp_RangeOutMaxY = { "RangeOutMaxY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_MakePerlinNoiseVectorAndRemap_Parms, RangeOutMaxY), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Statics::NewProp_RangeOutMinZ = { "RangeOutMinZ", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_MakePerlinNoiseVectorAndRemap_Parms, RangeOutMinZ), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Statics::NewProp_RangeOutMaxZ = { "RangeOutMaxZ", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_MakePerlinNoiseVectorAndRemap_Parms, RangeOutMaxZ), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_MakePerlinNoiseVectorAndRemap_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Statics::NewProp_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Statics::NewProp_Z,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Statics::NewProp_RangeOutMinX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Statics::NewProp_RangeOutMaxX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Statics::NewProp_RangeOutMinY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Statics::NewProp_RangeOutMaxY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Statics::NewProp_RangeOutMinZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Statics::NewProp_RangeOutMaxZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation|Utilities" },
		{ "Comment", "/** \n\x09 *\x09This function creates perlin noise from input X, Y, Z, and then range map to RangeOut, and out put to OutX, OutY, OutZ\n\x09 *\n\x09 *\x09@param X The x component for the input position of the noise\n\x09 *\x09@param Y The y component for the input position of the noise\n\x09 *\x09@param Z The z component for the input position of the noise\n\x09 *\x09@param RangeOutMinX The minimum for the output range for the x component\n\x09 *\x09@param RangeOutMaxX The maximum for the output range for the x component\n\x09 *\x09@param RangeOutMinY The minimum for the output range for the y component\n\x09 *\x09@param RangeOutMaxY The maximum for the output range for the y component\n\x09 *\x09@param RangeOutMinZ The minimum for the output range for the z component\n\x09 *\x09@param RangeOutMaxZ The maximum for the output range for the z component\n\x09 */" },
		{ "DisplayName", "Make Perlin Noise Vector and Remap" },
		{ "ModuleRelativePath", "Public/KismetAnimationLibrary.h" },
		{ "RangeOutMaxX", "1.f" },
		{ "RangeOutMaxY", "1.f" },
		{ "RangeOutMaxZ", "1.f" },
		{ "RangeOutMinX", "-1.f" },
		{ "RangeOutMinY", "-1.f" },
		{ "RangeOutMinZ", "-1.f" },
		{ "ScriptName", "MakeVectorFromPerlinNoise" },
		{ "ToolTip", "This function creates perlin noise from input X, Y, Z, and then range map to RangeOut, and out put to OutX, OutY, OutZ\n\n@param X The x component for the input position of the noise\n@param Y The y component for the input position of the noise\n@param Z The z component for the input position of the noise\n@param RangeOutMinX The minimum for the output range for the x component\n@param RangeOutMaxX The maximum for the output range for the x component\n@param RangeOutMinY The minimum for the output range for the y component\n@param RangeOutMaxY The maximum for the output range for the y component\n@param RangeOutMinZ The minimum for the output range for the z component\n@param RangeOutMaxZ The maximum for the output range for the z component" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetAnimationLibrary, nullptr, "K2_MakePerlinNoiseVectorAndRemap", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Statics::KismetAnimationLibrary_eventK2_MakePerlinNoiseVectorAndRemap_Parms), Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetAnimationLibrary_K2_StartProfilingTimer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetAnimationLibrary_K2_StartProfilingTimer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation|Utilities" },
		{ "Comment", "/**\n\x09 *\x09This function starts measuring the time for a profiling bracket\n\x09 */" },
		{ "DisplayName", "Start Profiling Timer" },
		{ "ModuleRelativePath", "Public/KismetAnimationLibrary.h" },
		{ "ToolTip", "This function starts measuring the time for a profiling bracket" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_StartProfilingTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetAnimationLibrary, nullptr, "K2_StartProfilingTimer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetAnimationLibrary_K2_StartProfilingTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_K2_StartProfilingTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetAnimationLibrary_K2_StartProfilingTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetAnimationLibrary_K2_StartProfilingTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics
	{
		struct KismetAnimationLibrary_eventK2_TwoBoneIK_Parms
		{
			FVector RootPos;
			FVector JointPos;
			FVector EndPos;
			FVector JointTarget;
			FVector Effector;
			FVector OutJointPos;
			FVector OutEndPos;
			bool bAllowStretching;
			float StartStretchRatio;
			float MaxStretchScale;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootPos_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RootPos;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JointPos_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_JointPos;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndPos_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EndPos;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JointTarget_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_JointTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Effector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Effector;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutJointPos;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutEndPos;
		static void NewProp_bAllowStretching_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowStretching;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartStretchRatio;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxStretchScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_RootPos_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_RootPos = { "RootPos", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_TwoBoneIK_Parms, RootPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_RootPos_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_RootPos_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_JointPos_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_JointPos = { "JointPos", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_TwoBoneIK_Parms, JointPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_JointPos_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_JointPos_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_EndPos_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_EndPos = { "EndPos", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_TwoBoneIK_Parms, EndPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_EndPos_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_EndPos_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_JointTarget_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_JointTarget = { "JointTarget", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_TwoBoneIK_Parms, JointTarget), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_JointTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_JointTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_Effector_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_Effector = { "Effector", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_TwoBoneIK_Parms, Effector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_Effector_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_Effector_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_OutJointPos = { "OutJointPos", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_TwoBoneIK_Parms, OutJointPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_OutEndPos = { "OutEndPos", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_TwoBoneIK_Parms, OutEndPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_bAllowStretching_SetBit(void* Obj)
	{
		((KismetAnimationLibrary_eventK2_TwoBoneIK_Parms*)Obj)->bAllowStretching = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_bAllowStretching = { "bAllowStretching", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KismetAnimationLibrary_eventK2_TwoBoneIK_Parms), &Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_bAllowStretching_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_StartStretchRatio = { "StartStretchRatio", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_TwoBoneIK_Parms, StartStretchRatio), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_MaxStretchScale = { "MaxStretchScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetAnimationLibrary_eventK2_TwoBoneIK_Parms, MaxStretchScale), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_RootPos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_JointPos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_EndPos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_JointTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_Effector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_OutJointPos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_OutEndPos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_bAllowStretching,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_StartStretchRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::NewProp_MaxStretchScale,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::Function_MetaDataParams[] = {
		{ "bAllowStretching", "false" },
		{ "Category", "Animation|Utilities" },
		{ "Comment", "/**\n\x09 *\x09""Computes the transform for two bones using inverse kinematics.\n\x09 *\n\x09 *\x09@param RootPos The input root position of the two bone chain\n\x09 *\x09@param JointPos The input center (elbow) position of the two bone chain\n\x09 *\x09@param EndPos The input end (wrist) position of the two bone chain\n\x09 *\x09@param JointTarget The IK target for the write to reach\n\x09 *\x09@param Effector The position of the target effector for the IK Chain.\n\x09 *\x09@param OutJointPos The resulting position for the center (elbow)\n\x09 *\x09@param OutEndPos The resulting position for the end (wrist)\n\x09 *\x09@param bAllowStretching If set to true the bones are allowed to stretch\n\x09 *\x09@param StartStretchRatio The ratio at which the bones should start to stretch. The higher the value, the later the stretching wil start.\n\x09 *\x09@param MaxStretchScale The maximum multiplier for the stretch to reach.\n\x09 */" },
		{ "DisplayName", "Two Bone IK Function" },
		{ "MaxStretchScale", "1.2" },
		{ "ModuleRelativePath", "Public/KismetAnimationLibrary.h" },
		{ "ScriptName", "TwoBoneIK" },
		{ "StartStretchRatio", "1.0" },
		{ "ToolTip", "Computes the transform for two bones using inverse kinematics.\n\n@param RootPos The input root position of the two bone chain\n@param JointPos The input center (elbow) position of the two bone chain\n@param EndPos The input end (wrist) position of the two bone chain\n@param JointTarget The IK target for the write to reach\n@param Effector The position of the target effector for the IK Chain.\n@param OutJointPos The resulting position for the center (elbow)\n@param OutEndPos The resulting position for the end (wrist)\n@param bAllowStretching If set to true the bones are allowed to stretch\n@param StartStretchRatio The ratio at which the bones should start to stretch. The higher the value, the later the stretching wil start.\n@param MaxStretchScale The maximum multiplier for the stretch to reach." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetAnimationLibrary, nullptr, "K2_TwoBoneIK", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::KismetAnimationLibrary_eventK2_TwoBoneIK_Parms), Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UKismetAnimationLibrary);
	UClass* Z_Construct_UClass_UKismetAnimationLibrary_NoRegister()
	{
		return UKismetAnimationLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UKismetAnimationLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKismetAnimationLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UKismetAnimationLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UKismetAnimationLibrary_CalculateDirection, "CalculateDirection" }, // 1770934812
		{ &Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromPositionHistory, "K2_CalculateVelocityFromPositionHistory" }, // 187650514
		{ &Z_Construct_UFunction_UKismetAnimationLibrary_K2_CalculateVelocityFromSockets, "K2_CalculateVelocityFromSockets" }, // 1403622075
		{ &Z_Construct_UFunction_UKismetAnimationLibrary_K2_DirectionBetweenSockets, "K2_DirectionBetweenSockets" }, // 4130524358
		{ &Z_Construct_UFunction_UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange, "K2_DistanceBetweenTwoSocketsAndMapRange" }, // 3967756466
		{ &Z_Construct_UFunction_UKismetAnimationLibrary_K2_EndProfilingTimer, "K2_EndProfilingTimer" }, // 1991853339
		{ &Z_Construct_UFunction_UKismetAnimationLibrary_K2_LookAt, "K2_LookAt" }, // 4207103220
		{ &Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseAndRemap, "K2_MakePerlinNoiseAndRemap" }, // 1365796662
		{ &Z_Construct_UFunction_UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap, "K2_MakePerlinNoiseVectorAndRemap" }, // 492427959
		{ &Z_Construct_UFunction_UKismetAnimationLibrary_K2_StartProfilingTimer, "K2_StartProfilingTimer" }, // 2137925999
		{ &Z_Construct_UFunction_UKismetAnimationLibrary_K2_TwoBoneIK, "K2_TwoBoneIK" }, // 3412800861
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKismetAnimationLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Comment", "/**\n *\x09""A library of the most common animation blueprint functions.\n */" },
		{ "DocumentationPolicy", "Strict" },
		{ "IncludePath", "KismetAnimationLibrary.h" },
		{ "ModuleRelativePath", "Public/KismetAnimationLibrary.h" },
		{ "ScriptName", "AnimGraphLibrary" },
		{ "ToolTip", "A library of the most common animation blueprint functions." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKismetAnimationLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKismetAnimationLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UKismetAnimationLibrary_Statics::ClassParams = {
		&UKismetAnimationLibrary::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UKismetAnimationLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKismetAnimationLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKismetAnimationLibrary()
	{
		if (!Z_Registration_Info_UClass_UKismetAnimationLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKismetAnimationLibrary.OuterSingleton, Z_Construct_UClass_UKismetAnimationLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UKismetAnimationLibrary.OuterSingleton;
	}
	template<> ANIMGRAPHRUNTIME_API UClass* StaticClass<UKismetAnimationLibrary>()
	{
		return UKismetAnimationLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKismetAnimationLibrary);
	UKismetAnimationLibrary::~UKismetAnimationLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_KismetAnimationLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_KismetAnimationLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UKismetAnimationLibrary, UKismetAnimationLibrary::StaticClass, TEXT("UKismetAnimationLibrary"), &Z_Registration_Info_UClass_UKismetAnimationLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKismetAnimationLibrary), 46098448U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_KismetAnimationLibrary_h_428105280(TEXT("/Script/AnimGraphRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_KismetAnimationLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_KismetAnimationLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
