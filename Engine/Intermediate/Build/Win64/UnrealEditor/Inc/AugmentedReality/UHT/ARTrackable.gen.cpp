// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ARTrackable.h"
#include "ARTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARTrackable() {}
// Cross Module References
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARCandidateImage_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARCandidateObject_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UAREnvironmentCaptureProbe();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UAREnvironmentCaptureProbe_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UAREnvironmentCaptureProbeTexture_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARFaceGeometry();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARFaceGeometry_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARGeoAnchor();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARGeoAnchor_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARMeshGeometry();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARMeshGeometry_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARPlaneGeometry();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARPlaneGeometry_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTrackedGeometry();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTrackedGeometry_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTrackedImage();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTrackedImage_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTrackedObject();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTrackedObject_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTrackedPoint();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTrackedPoint_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTrackedPose();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTrackedPose_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTrackedQRCode();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTrackedQRCode_NoRegister();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARAltitudeSource();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EAREye();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARFaceBlendShape();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARFaceTrackingDirection();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARObjectClassification();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARPlaneOrientation();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARSpatialMeshUsageFlags();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARTrackingState();
	AUGMENTEDREALITY_API UScriptStruct* Z_Construct_UScriptStruct_FARPose3D();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	MRMESH_API UClass* Z_Construct_UClass_UMRMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AugmentedReality();
// End Cross Module References
	DEFINE_FUNCTION(UARTrackedGeometry::execHasSpatialMeshUsageFlag)
	{
		P_GET_ENUM(EARSpatialMeshUsageFlags,Z_Param_InFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasSpatialMeshUsageFlag(EARSpatialMeshUsageFlags(Z_Param_InFlag));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARTrackedGeometry::execGetObjectClassification)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EARObjectClassification*)Z_Param__Result=P_THIS->GetObjectClassification();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARTrackedGeometry::execGetUnderlyingMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMRMeshComponent**)Z_Param__Result=P_THIS->GetUnderlyingMesh();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARTrackedGeometry::execGetLastUpdateTimestamp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetLastUpdateTimestamp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARTrackedGeometry::execGetLastUpdateFrameNumber)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetLastUpdateFrameNumber();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARTrackedGeometry::execGetName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARTrackedGeometry::execGetDebugName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetDebugName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARTrackedGeometry::execIsTracked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsTracked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARTrackedGeometry::execGetTrackingState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EARTrackingState*)Z_Param__Result=P_THIS->GetTrackingState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARTrackedGeometry::execGetLocalToTrackingTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetLocalToTrackingTransform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARTrackedGeometry::execGetLocalToWorldTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetLocalToWorldTransform();
		P_NATIVE_END;
	}
	void UARTrackedGeometry::StaticRegisterNativesUARTrackedGeometry()
	{
		UClass* Class = UARTrackedGeometry::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDebugName", &UARTrackedGeometry::execGetDebugName },
			{ "GetLastUpdateFrameNumber", &UARTrackedGeometry::execGetLastUpdateFrameNumber },
			{ "GetLastUpdateTimestamp", &UARTrackedGeometry::execGetLastUpdateTimestamp },
			{ "GetLocalToTrackingTransform", &UARTrackedGeometry::execGetLocalToTrackingTransform },
			{ "GetLocalToWorldTransform", &UARTrackedGeometry::execGetLocalToWorldTransform },
			{ "GetName", &UARTrackedGeometry::execGetName },
			{ "GetObjectClassification", &UARTrackedGeometry::execGetObjectClassification },
			{ "GetTrackingState", &UARTrackedGeometry::execGetTrackingState },
			{ "GetUnderlyingMesh", &UARTrackedGeometry::execGetUnderlyingMesh },
			{ "HasSpatialMeshUsageFlag", &UARTrackedGeometry::execHasSpatialMeshUsageFlag },
			{ "IsTracked", &UARTrackedGeometry::execIsTracked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UARTrackedGeometry_GetDebugName_Statics
	{
		struct ARTrackedGeometry_eventGetDebugName_Parms
		{
			FName ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UARTrackedGeometry_GetDebugName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARTrackedGeometry_eventGetDebugName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARTrackedGeometry_GetDebugName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARTrackedGeometry_GetDebugName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARTrackedGeometry_GetDebugName_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Tracked Geometry" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARTrackedGeometry_GetDebugName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARTrackedGeometry, nullptr, "GetDebugName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARTrackedGeometry_GetDebugName_Statics::ARTrackedGeometry_eventGetDebugName_Parms), Z_Construct_UFunction_UARTrackedGeometry_GetDebugName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARTrackedGeometry_GetDebugName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARTrackedGeometry_GetDebugName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARTrackedGeometry_GetDebugName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARTrackedGeometry_GetDebugName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARTrackedGeometry_GetDebugName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARTrackedGeometry_GetLastUpdateFrameNumber_Statics
	{
		struct ARTrackedGeometry_eventGetLastUpdateFrameNumber_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UARTrackedGeometry_GetLastUpdateFrameNumber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARTrackedGeometry_eventGetLastUpdateFrameNumber_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARTrackedGeometry_GetLastUpdateFrameNumber_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARTrackedGeometry_GetLastUpdateFrameNumber_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARTrackedGeometry_GetLastUpdateFrameNumber_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Tracked Geometry" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARTrackedGeometry_GetLastUpdateFrameNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARTrackedGeometry, nullptr, "GetLastUpdateFrameNumber", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARTrackedGeometry_GetLastUpdateFrameNumber_Statics::ARTrackedGeometry_eventGetLastUpdateFrameNumber_Parms), Z_Construct_UFunction_UARTrackedGeometry_GetLastUpdateFrameNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARTrackedGeometry_GetLastUpdateFrameNumber_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARTrackedGeometry_GetLastUpdateFrameNumber_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARTrackedGeometry_GetLastUpdateFrameNumber_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARTrackedGeometry_GetLastUpdateFrameNumber()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARTrackedGeometry_GetLastUpdateFrameNumber_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARTrackedGeometry_GetLastUpdateTimestamp_Statics
	{
		struct ARTrackedGeometry_eventGetLastUpdateTimestamp_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UARTrackedGeometry_GetLastUpdateTimestamp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARTrackedGeometry_eventGetLastUpdateTimestamp_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARTrackedGeometry_GetLastUpdateTimestamp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARTrackedGeometry_GetLastUpdateTimestamp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARTrackedGeometry_GetLastUpdateTimestamp_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Tracked Geometry" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARTrackedGeometry_GetLastUpdateTimestamp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARTrackedGeometry, nullptr, "GetLastUpdateTimestamp", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARTrackedGeometry_GetLastUpdateTimestamp_Statics::ARTrackedGeometry_eventGetLastUpdateTimestamp_Parms), Z_Construct_UFunction_UARTrackedGeometry_GetLastUpdateTimestamp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARTrackedGeometry_GetLastUpdateTimestamp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARTrackedGeometry_GetLastUpdateTimestamp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARTrackedGeometry_GetLastUpdateTimestamp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARTrackedGeometry_GetLastUpdateTimestamp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARTrackedGeometry_GetLastUpdateTimestamp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARTrackedGeometry_GetLocalToTrackingTransform_Statics
	{
		struct ARTrackedGeometry_eventGetLocalToTrackingTransform_Parms
		{
			FTransform ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARTrackedGeometry_GetLocalToTrackingTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARTrackedGeometry_eventGetLocalToTrackingTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARTrackedGeometry_GetLocalToTrackingTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARTrackedGeometry_GetLocalToTrackingTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARTrackedGeometry_GetLocalToTrackingTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Tracked Geometry" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARTrackedGeometry_GetLocalToTrackingTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARTrackedGeometry, nullptr, "GetLocalToTrackingTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARTrackedGeometry_GetLocalToTrackingTransform_Statics::ARTrackedGeometry_eventGetLocalToTrackingTransform_Parms), Z_Construct_UFunction_UARTrackedGeometry_GetLocalToTrackingTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARTrackedGeometry_GetLocalToTrackingTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARTrackedGeometry_GetLocalToTrackingTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARTrackedGeometry_GetLocalToTrackingTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARTrackedGeometry_GetLocalToTrackingTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARTrackedGeometry_GetLocalToTrackingTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARTrackedGeometry_GetLocalToWorldTransform_Statics
	{
		struct ARTrackedGeometry_eventGetLocalToWorldTransform_Parms
		{
			FTransform ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARTrackedGeometry_GetLocalToWorldTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARTrackedGeometry_eventGetLocalToWorldTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARTrackedGeometry_GetLocalToWorldTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARTrackedGeometry_GetLocalToWorldTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARTrackedGeometry_GetLocalToWorldTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Tracked Geometry" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARTrackedGeometry_GetLocalToWorldTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARTrackedGeometry, nullptr, "GetLocalToWorldTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARTrackedGeometry_GetLocalToWorldTransform_Statics::ARTrackedGeometry_eventGetLocalToWorldTransform_Parms), Z_Construct_UFunction_UARTrackedGeometry_GetLocalToWorldTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARTrackedGeometry_GetLocalToWorldTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARTrackedGeometry_GetLocalToWorldTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARTrackedGeometry_GetLocalToWorldTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARTrackedGeometry_GetLocalToWorldTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARTrackedGeometry_GetLocalToWorldTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARTrackedGeometry_GetName_Statics
	{
		struct ARTrackedGeometry_eventGetName_Parms
		{
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARTrackedGeometry_GetName_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UARTrackedGeometry_GetName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARTrackedGeometry_eventGetName_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UARTrackedGeometry_GetName_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARTrackedGeometry_GetName_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARTrackedGeometry_GetName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARTrackedGeometry_GetName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARTrackedGeometry_GetName_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Tracked Geometry" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARTrackedGeometry_GetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARTrackedGeometry, nullptr, "GetName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARTrackedGeometry_GetName_Statics::ARTrackedGeometry_eventGetName_Parms), Z_Construct_UFunction_UARTrackedGeometry_GetName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARTrackedGeometry_GetName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARTrackedGeometry_GetName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARTrackedGeometry_GetName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARTrackedGeometry_GetName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARTrackedGeometry_GetName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARTrackedGeometry_GetObjectClassification_Statics
	{
		struct ARTrackedGeometry_eventGetObjectClassification_Parms
		{
			EARObjectClassification ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARTrackedGeometry_GetObjectClassification_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARTrackedGeometry_GetObjectClassification_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARTrackedGeometry_eventGetObjectClassification_Parms, ReturnValue), Z_Construct_UEnum_AugmentedReality_EARObjectClassification, METADATA_PARAMS(nullptr, 0) }; // 1555664985
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARTrackedGeometry_GetObjectClassification_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARTrackedGeometry_GetObjectClassification_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARTrackedGeometry_GetObjectClassification_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARTrackedGeometry_GetObjectClassification_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Scene Understanding" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARTrackedGeometry_GetObjectClassification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARTrackedGeometry, nullptr, "GetObjectClassification", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARTrackedGeometry_GetObjectClassification_Statics::ARTrackedGeometry_eventGetObjectClassification_Parms), Z_Construct_UFunction_UARTrackedGeometry_GetObjectClassification_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARTrackedGeometry_GetObjectClassification_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARTrackedGeometry_GetObjectClassification_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARTrackedGeometry_GetObjectClassification_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARTrackedGeometry_GetObjectClassification()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARTrackedGeometry_GetObjectClassification_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARTrackedGeometry_GetTrackingState_Statics
	{
		struct ARTrackedGeometry_eventGetTrackingState_Parms
		{
			EARTrackingState ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARTrackedGeometry_GetTrackingState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARTrackedGeometry_GetTrackingState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARTrackedGeometry_eventGetTrackingState_Parms, ReturnValue), Z_Construct_UEnum_AugmentedReality_EARTrackingState, METADATA_PARAMS(nullptr, 0) }; // 2124127308
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARTrackedGeometry_GetTrackingState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARTrackedGeometry_GetTrackingState_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARTrackedGeometry_GetTrackingState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARTrackedGeometry_GetTrackingState_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Tracked Geometry" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARTrackedGeometry_GetTrackingState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARTrackedGeometry, nullptr, "GetTrackingState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARTrackedGeometry_GetTrackingState_Statics::ARTrackedGeometry_eventGetTrackingState_Parms), Z_Construct_UFunction_UARTrackedGeometry_GetTrackingState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARTrackedGeometry_GetTrackingState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARTrackedGeometry_GetTrackingState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARTrackedGeometry_GetTrackingState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARTrackedGeometry_GetTrackingState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARTrackedGeometry_GetTrackingState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARTrackedGeometry_GetUnderlyingMesh_Statics
	{
		struct ARTrackedGeometry_eventGetUnderlyingMesh_Parms
		{
			UMRMeshComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARTrackedGeometry_GetUnderlyingMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARTrackedGeometry_GetUnderlyingMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARTrackedGeometry_eventGetUnderlyingMesh_Parms, ReturnValue), Z_Construct_UClass_UMRMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UARTrackedGeometry_GetUnderlyingMesh_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARTrackedGeometry_GetUnderlyingMesh_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARTrackedGeometry_GetUnderlyingMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARTrackedGeometry_GetUnderlyingMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARTrackedGeometry_GetUnderlyingMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Tracked Geometry" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARTrackedGeometry_GetUnderlyingMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARTrackedGeometry, nullptr, "GetUnderlyingMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARTrackedGeometry_GetUnderlyingMesh_Statics::ARTrackedGeometry_eventGetUnderlyingMesh_Parms), Z_Construct_UFunction_UARTrackedGeometry_GetUnderlyingMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARTrackedGeometry_GetUnderlyingMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARTrackedGeometry_GetUnderlyingMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARTrackedGeometry_GetUnderlyingMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARTrackedGeometry_GetUnderlyingMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARTrackedGeometry_GetUnderlyingMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARTrackedGeometry_HasSpatialMeshUsageFlag_Statics
	{
		struct ARTrackedGeometry_eventHasSpatialMeshUsageFlag_Parms
		{
			EARSpatialMeshUsageFlags InFlag;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InFlag_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InFlag_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InFlag;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARTrackedGeometry_HasSpatialMeshUsageFlag_Statics::NewProp_InFlag_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARTrackedGeometry_HasSpatialMeshUsageFlag_Statics::NewProp_InFlag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARTrackedGeometry_HasSpatialMeshUsageFlag_Statics::NewProp_InFlag = { "InFlag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARTrackedGeometry_eventHasSpatialMeshUsageFlag_Parms, InFlag), Z_Construct_UEnum_AugmentedReality_EARSpatialMeshUsageFlags, METADATA_PARAMS(Z_Construct_UFunction_UARTrackedGeometry_HasSpatialMeshUsageFlag_Statics::NewProp_InFlag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARTrackedGeometry_HasSpatialMeshUsageFlag_Statics::NewProp_InFlag_MetaData)) }; // 3552341118
	void Z_Construct_UFunction_UARTrackedGeometry_HasSpatialMeshUsageFlag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ARTrackedGeometry_eventHasSpatialMeshUsageFlag_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UARTrackedGeometry_HasSpatialMeshUsageFlag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ARTrackedGeometry_eventHasSpatialMeshUsageFlag_Parms), &Z_Construct_UFunction_UARTrackedGeometry_HasSpatialMeshUsageFlag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARTrackedGeometry_HasSpatialMeshUsageFlag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARTrackedGeometry_HasSpatialMeshUsageFlag_Statics::NewProp_InFlag_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARTrackedGeometry_HasSpatialMeshUsageFlag_Statics::NewProp_InFlag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARTrackedGeometry_HasSpatialMeshUsageFlag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARTrackedGeometry_HasSpatialMeshUsageFlag_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Scene Understanding" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARTrackedGeometry_HasSpatialMeshUsageFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARTrackedGeometry, nullptr, "HasSpatialMeshUsageFlag", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARTrackedGeometry_HasSpatialMeshUsageFlag_Statics::ARTrackedGeometry_eventHasSpatialMeshUsageFlag_Parms), Z_Construct_UFunction_UARTrackedGeometry_HasSpatialMeshUsageFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARTrackedGeometry_HasSpatialMeshUsageFlag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARTrackedGeometry_HasSpatialMeshUsageFlag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARTrackedGeometry_HasSpatialMeshUsageFlag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARTrackedGeometry_HasSpatialMeshUsageFlag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARTrackedGeometry_HasSpatialMeshUsageFlag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARTrackedGeometry_IsTracked_Statics
	{
		struct ARTrackedGeometry_eventIsTracked_Parms
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
	void Z_Construct_UFunction_UARTrackedGeometry_IsTracked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ARTrackedGeometry_eventIsTracked_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UARTrackedGeometry_IsTracked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ARTrackedGeometry_eventIsTracked_Parms), &Z_Construct_UFunction_UARTrackedGeometry_IsTracked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARTrackedGeometry_IsTracked_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARTrackedGeometry_IsTracked_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARTrackedGeometry_IsTracked_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Tracked Geometry" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARTrackedGeometry_IsTracked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARTrackedGeometry, nullptr, "IsTracked", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARTrackedGeometry_IsTracked_Statics::ARTrackedGeometry_eventIsTracked_Parms), Z_Construct_UFunction_UARTrackedGeometry_IsTracked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARTrackedGeometry_IsTracked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARTrackedGeometry_IsTracked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARTrackedGeometry_IsTracked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARTrackedGeometry_IsTracked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARTrackedGeometry_IsTracked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UARTrackedGeometry);
	UClass* Z_Construct_UClass_UARTrackedGeometry_NoRegister()
	{
		return UARTrackedGeometry::StaticClass();
	}
	struct Z_Construct_UClass_UARTrackedGeometry_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UniqueId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UniqueId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalToTrackingTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalToTrackingTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalToAlignedTrackingTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalToAlignedTrackingTransform;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TrackingState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackingState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TrackingState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnderlyingMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_UnderlyingMesh;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ObjectClassification_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectClassification_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ObjectClassification;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SpatialMeshUsageFlags_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpatialMeshUsageFlags_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SpatialMeshUsageFlags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastUpdateFrameNumber_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LastUpdateFrameNumber;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DebugName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARTrackedGeometry_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UARTrackedGeometry_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UARTrackedGeometry_GetDebugName, "GetDebugName" }, // 2182844823
		{ &Z_Construct_UFunction_UARTrackedGeometry_GetLastUpdateFrameNumber, "GetLastUpdateFrameNumber" }, // 787709706
		{ &Z_Construct_UFunction_UARTrackedGeometry_GetLastUpdateTimestamp, "GetLastUpdateTimestamp" }, // 3374676224
		{ &Z_Construct_UFunction_UARTrackedGeometry_GetLocalToTrackingTransform, "GetLocalToTrackingTransform" }, // 1917515361
		{ &Z_Construct_UFunction_UARTrackedGeometry_GetLocalToWorldTransform, "GetLocalToWorldTransform" }, // 1408827463
		{ &Z_Construct_UFunction_UARTrackedGeometry_GetName, "GetName" }, // 2114019527
		{ &Z_Construct_UFunction_UARTrackedGeometry_GetObjectClassification, "GetObjectClassification" }, // 1589890305
		{ &Z_Construct_UFunction_UARTrackedGeometry_GetTrackingState, "GetTrackingState" }, // 841554942
		{ &Z_Construct_UFunction_UARTrackedGeometry_GetUnderlyingMesh, "GetUnderlyingMesh" }, // 2903579690
		{ &Z_Construct_UFunction_UARTrackedGeometry_HasSpatialMeshUsageFlag, "HasSpatialMeshUsageFlag" }, // 3571323752
		{ &Z_Construct_UFunction_UARTrackedGeometry_IsTracked, "IsTracked" }, // 3967886326
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARTrackedGeometry_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ARTrackable.h" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARTrackedGeometry_Statics::NewProp_UniqueId_MetaData[] = {
		{ "Category", "AR AugmentedReality|Tracked Geometry" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARTrackedGeometry_Statics::NewProp_UniqueId = { "UniqueId", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARTrackedGeometry, UniqueId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UARTrackedGeometry_Statics::NewProp_UniqueId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARTrackedGeometry_Statics::NewProp_UniqueId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARTrackedGeometry_Statics::NewProp_LocalToTrackingTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARTrackedGeometry_Statics::NewProp_LocalToTrackingTransform = { "LocalToTrackingTransform", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARTrackedGeometry, LocalToTrackingTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UARTrackedGeometry_Statics::NewProp_LocalToTrackingTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARTrackedGeometry_Statics::NewProp_LocalToTrackingTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARTrackedGeometry_Statics::NewProp_LocalToAlignedTrackingTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARTrackedGeometry_Statics::NewProp_LocalToAlignedTrackingTransform = { "LocalToAlignedTrackingTransform", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARTrackedGeometry, LocalToAlignedTrackingTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UARTrackedGeometry_Statics::NewProp_LocalToAlignedTrackingTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARTrackedGeometry_Statics::NewProp_LocalToAlignedTrackingTransform_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UARTrackedGeometry_Statics::NewProp_TrackingState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARTrackedGeometry_Statics::NewProp_TrackingState_MetaData[] = {
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UARTrackedGeometry_Statics::NewProp_TrackingState = { "TrackingState", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARTrackedGeometry, TrackingState), Z_Construct_UEnum_AugmentedReality_EARTrackingState, METADATA_PARAMS(Z_Construct_UClass_UARTrackedGeometry_Statics::NewProp_TrackingState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARTrackedGeometry_Statics::NewProp_TrackingState_MetaData)) }; // 2124127308
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARTrackedGeometry_Statics::NewProp_UnderlyingMesh_MetaData[] = {
		{ "Comment", "/** For AR systems that support arbitrary mesh geometry associated with a tracked point */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
		{ "ToolTip", "For AR systems that support arbitrary mesh geometry associated with a tracked point" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UARTrackedGeometry_Statics::NewProp_UnderlyingMesh = { "UnderlyingMesh", nullptr, (EPropertyFlags)0x0024080000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARTrackedGeometry, UnderlyingMesh), Z_Construct_UClass_UMRMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UARTrackedGeometry_Statics::NewProp_UnderlyingMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARTrackedGeometry_Statics::NewProp_UnderlyingMesh_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UARTrackedGeometry_Statics::NewProp_ObjectClassification_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARTrackedGeometry_Statics::NewProp_ObjectClassification_MetaData[] = {
		{ "Comment", "/** What the scene understanding system thinks this object is */" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
		{ "ToolTip", "What the scene understanding system thinks this object is" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UARTrackedGeometry_Statics::NewProp_ObjectClassification = { "ObjectClassification", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARTrackedGeometry, ObjectClassification), Z_Construct_UEnum_AugmentedReality_EARObjectClassification, METADATA_PARAMS(Z_Construct_UClass_UARTrackedGeometry_Statics::NewProp_ObjectClassification_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARTrackedGeometry_Statics::NewProp_ObjectClassification_MetaData)) }; // 1555664985
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UARTrackedGeometry_Statics::NewProp_SpatialMeshUsageFlags_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARTrackedGeometry_Statics::NewProp_SpatialMeshUsageFlags_MetaData[] = {
		{ "Comment", "/** How the scene understanding system thinks this mesh should be displayed */" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
		{ "ToolTip", "How the scene understanding system thinks this mesh should be displayed" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UARTrackedGeometry_Statics::NewProp_SpatialMeshUsageFlags = { "SpatialMeshUsageFlags", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARTrackedGeometry, SpatialMeshUsageFlags), Z_Construct_UEnum_AugmentedReality_EARSpatialMeshUsageFlags, METADATA_PARAMS(Z_Construct_UClass_UARTrackedGeometry_Statics::NewProp_SpatialMeshUsageFlags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARTrackedGeometry_Statics::NewProp_SpatialMeshUsageFlags_MetaData)) }; // 3552341118
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARTrackedGeometry_Statics::NewProp_LastUpdateFrameNumber_MetaData[] = {
		{ "Comment", "/** The frame number this tracked geometry was last updated on */" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
		{ "ToolTip", "The frame number this tracked geometry was last updated on" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UARTrackedGeometry_Statics::NewProp_LastUpdateFrameNumber = { "LastUpdateFrameNumber", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARTrackedGeometry, LastUpdateFrameNumber), METADATA_PARAMS(Z_Construct_UClass_UARTrackedGeometry_Statics::NewProp_LastUpdateFrameNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARTrackedGeometry_Statics::NewProp_LastUpdateFrameNumber_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARTrackedGeometry_Statics::NewProp_DebugName_MetaData[] = {
		{ "Comment", "/** A unique name that can be used to identify the anchor for debug purposes */" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
		{ "ToolTip", "A unique name that can be used to identify the anchor for debug purposes" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UARTrackedGeometry_Statics::NewProp_DebugName = { "DebugName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARTrackedGeometry, DebugName), METADATA_PARAMS(Z_Construct_UClass_UARTrackedGeometry_Statics::NewProp_DebugName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARTrackedGeometry_Statics::NewProp_DebugName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UARTrackedGeometry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARTrackedGeometry_Statics::NewProp_UniqueId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARTrackedGeometry_Statics::NewProp_LocalToTrackingTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARTrackedGeometry_Statics::NewProp_LocalToAlignedTrackingTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARTrackedGeometry_Statics::NewProp_TrackingState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARTrackedGeometry_Statics::NewProp_TrackingState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARTrackedGeometry_Statics::NewProp_UnderlyingMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARTrackedGeometry_Statics::NewProp_ObjectClassification_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARTrackedGeometry_Statics::NewProp_ObjectClassification,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARTrackedGeometry_Statics::NewProp_SpatialMeshUsageFlags_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARTrackedGeometry_Statics::NewProp_SpatialMeshUsageFlags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARTrackedGeometry_Statics::NewProp_LastUpdateFrameNumber,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARTrackedGeometry_Statics::NewProp_DebugName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARTrackedGeometry_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARTrackedGeometry>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UARTrackedGeometry_Statics::ClassParams = {
		&UARTrackedGeometry::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UARTrackedGeometry_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UARTrackedGeometry_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UARTrackedGeometry_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UARTrackedGeometry_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARTrackedGeometry()
	{
		if (!Z_Registration_Info_UClass_UARTrackedGeometry.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UARTrackedGeometry.OuterSingleton, Z_Construct_UClass_UARTrackedGeometry_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UARTrackedGeometry.OuterSingleton;
	}
	template<> AUGMENTEDREALITY_API UClass* StaticClass<UARTrackedGeometry>()
	{
		return UARTrackedGeometry::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARTrackedGeometry);
	UARTrackedGeometry::~UARTrackedGeometry() {}
	DEFINE_FUNCTION(UARPlaneGeometry::execGetOrientation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EARPlaneOrientation*)Z_Param__Result=P_THIS->GetOrientation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARPlaneGeometry::execGetSubsumedBy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UARPlaneGeometry**)Z_Param__Result=P_THIS->GetSubsumedBy();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARPlaneGeometry::execGetBoundaryPolygonInLocalSpace)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector>*)Z_Param__Result=P_THIS->GetBoundaryPolygonInLocalSpace();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARPlaneGeometry::execGetExtent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetExtent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARPlaneGeometry::execGetCenter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetCenter();
		P_NATIVE_END;
	}
	void UARPlaneGeometry::StaticRegisterNativesUARPlaneGeometry()
	{
		UClass* Class = UARPlaneGeometry::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBoundaryPolygonInLocalSpace", &UARPlaneGeometry::execGetBoundaryPolygonInLocalSpace },
			{ "GetCenter", &UARPlaneGeometry::execGetCenter },
			{ "GetExtent", &UARPlaneGeometry::execGetExtent },
			{ "GetOrientation", &UARPlaneGeometry::execGetOrientation },
			{ "GetSubsumedBy", &UARPlaneGeometry::execGetSubsumedBy },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UARPlaneGeometry_GetBoundaryPolygonInLocalSpace_Statics
	{
		struct ARPlaneGeometry_eventGetBoundaryPolygonInLocalSpace_Parms
		{
			TArray<FVector> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARPlaneGeometry_GetBoundaryPolygonInLocalSpace_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UARPlaneGeometry_GetBoundaryPolygonInLocalSpace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARPlaneGeometry_eventGetBoundaryPolygonInLocalSpace_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARPlaneGeometry_GetBoundaryPolygonInLocalSpace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARPlaneGeometry_GetBoundaryPolygonInLocalSpace_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARPlaneGeometry_GetBoundaryPolygonInLocalSpace_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARPlaneGeometry_GetBoundaryPolygonInLocalSpace_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Plane Geometry" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARPlaneGeometry_GetBoundaryPolygonInLocalSpace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARPlaneGeometry, nullptr, "GetBoundaryPolygonInLocalSpace", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARPlaneGeometry_GetBoundaryPolygonInLocalSpace_Statics::ARPlaneGeometry_eventGetBoundaryPolygonInLocalSpace_Parms), Z_Construct_UFunction_UARPlaneGeometry_GetBoundaryPolygonInLocalSpace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPlaneGeometry_GetBoundaryPolygonInLocalSpace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARPlaneGeometry_GetBoundaryPolygonInLocalSpace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPlaneGeometry_GetBoundaryPolygonInLocalSpace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARPlaneGeometry_GetBoundaryPolygonInLocalSpace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARPlaneGeometry_GetBoundaryPolygonInLocalSpace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARPlaneGeometry_GetCenter_Statics
	{
		struct ARPlaneGeometry_eventGetCenter_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARPlaneGeometry_GetCenter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARPlaneGeometry_eventGetCenter_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARPlaneGeometry_GetCenter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARPlaneGeometry_GetCenter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARPlaneGeometry_GetCenter_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Plane Geometry" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARPlaneGeometry_GetCenter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARPlaneGeometry, nullptr, "GetCenter", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARPlaneGeometry_GetCenter_Statics::ARPlaneGeometry_eventGetCenter_Parms), Z_Construct_UFunction_UARPlaneGeometry_GetCenter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPlaneGeometry_GetCenter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARPlaneGeometry_GetCenter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPlaneGeometry_GetCenter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARPlaneGeometry_GetCenter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARPlaneGeometry_GetCenter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARPlaneGeometry_GetExtent_Statics
	{
		struct ARPlaneGeometry_eventGetExtent_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARPlaneGeometry_GetExtent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARPlaneGeometry_eventGetExtent_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARPlaneGeometry_GetExtent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARPlaneGeometry_GetExtent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARPlaneGeometry_GetExtent_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Plane Geometry" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARPlaneGeometry_GetExtent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARPlaneGeometry, nullptr, "GetExtent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARPlaneGeometry_GetExtent_Statics::ARPlaneGeometry_eventGetExtent_Parms), Z_Construct_UFunction_UARPlaneGeometry_GetExtent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPlaneGeometry_GetExtent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARPlaneGeometry_GetExtent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPlaneGeometry_GetExtent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARPlaneGeometry_GetExtent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARPlaneGeometry_GetExtent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARPlaneGeometry_GetOrientation_Statics
	{
		struct ARPlaneGeometry_eventGetOrientation_Parms
		{
			EARPlaneOrientation ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARPlaneGeometry_GetOrientation_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARPlaneGeometry_GetOrientation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARPlaneGeometry_eventGetOrientation_Parms, ReturnValue), Z_Construct_UEnum_AugmentedReality_EARPlaneOrientation, METADATA_PARAMS(nullptr, 0) }; // 1044975786
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARPlaneGeometry_GetOrientation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARPlaneGeometry_GetOrientation_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARPlaneGeometry_GetOrientation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARPlaneGeometry_GetOrientation_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Plane Geometry" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARPlaneGeometry_GetOrientation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARPlaneGeometry, nullptr, "GetOrientation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARPlaneGeometry_GetOrientation_Statics::ARPlaneGeometry_eventGetOrientation_Parms), Z_Construct_UFunction_UARPlaneGeometry_GetOrientation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPlaneGeometry_GetOrientation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARPlaneGeometry_GetOrientation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPlaneGeometry_GetOrientation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARPlaneGeometry_GetOrientation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARPlaneGeometry_GetOrientation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARPlaneGeometry_GetSubsumedBy_Statics
	{
		struct ARPlaneGeometry_eventGetSubsumedBy_Parms
		{
			UARPlaneGeometry* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARPlaneGeometry_GetSubsumedBy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARPlaneGeometry_eventGetSubsumedBy_Parms, ReturnValue), Z_Construct_UClass_UARPlaneGeometry_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARPlaneGeometry_GetSubsumedBy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARPlaneGeometry_GetSubsumedBy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARPlaneGeometry_GetSubsumedBy_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Plane Geometry" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARPlaneGeometry_GetSubsumedBy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARPlaneGeometry, nullptr, "GetSubsumedBy", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARPlaneGeometry_GetSubsumedBy_Statics::ARPlaneGeometry_eventGetSubsumedBy_Parms), Z_Construct_UFunction_UARPlaneGeometry_GetSubsumedBy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPlaneGeometry_GetSubsumedBy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARPlaneGeometry_GetSubsumedBy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPlaneGeometry_GetSubsumedBy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARPlaneGeometry_GetSubsumedBy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARPlaneGeometry_GetSubsumedBy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UARPlaneGeometry);
	UClass* Z_Construct_UClass_UARPlaneGeometry_NoRegister()
	{
		return UARPlaneGeometry::StaticClass();
	}
	struct Z_Construct_UClass_UARPlaneGeometry_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Orientation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Orientation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Extent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Extent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoundaryPolygon_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundaryPolygon_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BoundaryPolygon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubsumedBy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SubsumedBy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARPlaneGeometry_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UARTrackedGeometry,
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UARPlaneGeometry_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UARPlaneGeometry_GetBoundaryPolygonInLocalSpace, "GetBoundaryPolygonInLocalSpace" }, // 3411782999
		{ &Z_Construct_UFunction_UARPlaneGeometry_GetCenter, "GetCenter" }, // 1473697776
		{ &Z_Construct_UFunction_UARPlaneGeometry_GetExtent, "GetExtent" }, // 855711336
		{ &Z_Construct_UFunction_UARPlaneGeometry_GetOrientation, "GetOrientation" }, // 3112806052
		{ &Z_Construct_UFunction_UARPlaneGeometry_GetSubsumedBy, "GetSubsumedBy" }, // 3008627134
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARPlaneGeometry_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ARTrackable.h" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UARPlaneGeometry_Statics::NewProp_Orientation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARPlaneGeometry_Statics::NewProp_Orientation_MetaData[] = {
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UARPlaneGeometry_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARPlaneGeometry, Orientation), Z_Construct_UEnum_AugmentedReality_EARPlaneOrientation, METADATA_PARAMS(Z_Construct_UClass_UARPlaneGeometry_Statics::NewProp_Orientation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARPlaneGeometry_Statics::NewProp_Orientation_MetaData)) }; // 1044975786
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARPlaneGeometry_Statics::NewProp_Center_MetaData[] = {
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARPlaneGeometry_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARPlaneGeometry, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UARPlaneGeometry_Statics::NewProp_Center_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARPlaneGeometry_Statics::NewProp_Center_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARPlaneGeometry_Statics::NewProp_Extent_MetaData[] = {
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARPlaneGeometry_Statics::NewProp_Extent = { "Extent", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARPlaneGeometry, Extent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UARPlaneGeometry_Statics::NewProp_Extent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARPlaneGeometry_Statics::NewProp_Extent_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARPlaneGeometry_Statics::NewProp_BoundaryPolygon_Inner = { "BoundaryPolygon", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARPlaneGeometry_Statics::NewProp_BoundaryPolygon_MetaData[] = {
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UARPlaneGeometry_Statics::NewProp_BoundaryPolygon = { "BoundaryPolygon", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARPlaneGeometry, BoundaryPolygon), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UARPlaneGeometry_Statics::NewProp_BoundaryPolygon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARPlaneGeometry_Statics::NewProp_BoundaryPolygon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARPlaneGeometry_Statics::NewProp_SubsumedBy_MetaData[] = {
		{ "Comment", "// Used by ARCore Only\n" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
		{ "ToolTip", "Used by ARCore Only" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UARPlaneGeometry_Statics::NewProp_SubsumedBy = { "SubsumedBy", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARPlaneGeometry, SubsumedBy), Z_Construct_UClass_UARPlaneGeometry_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UARPlaneGeometry_Statics::NewProp_SubsumedBy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARPlaneGeometry_Statics::NewProp_SubsumedBy_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UARPlaneGeometry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARPlaneGeometry_Statics::NewProp_Orientation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARPlaneGeometry_Statics::NewProp_Orientation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARPlaneGeometry_Statics::NewProp_Center,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARPlaneGeometry_Statics::NewProp_Extent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARPlaneGeometry_Statics::NewProp_BoundaryPolygon_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARPlaneGeometry_Statics::NewProp_BoundaryPolygon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARPlaneGeometry_Statics::NewProp_SubsumedBy,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARPlaneGeometry_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARPlaneGeometry>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UARPlaneGeometry_Statics::ClassParams = {
		&UARPlaneGeometry::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UARPlaneGeometry_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UARPlaneGeometry_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UARPlaneGeometry_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UARPlaneGeometry_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARPlaneGeometry()
	{
		if (!Z_Registration_Info_UClass_UARPlaneGeometry.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UARPlaneGeometry.OuterSingleton, Z_Construct_UClass_UARPlaneGeometry_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UARPlaneGeometry.OuterSingleton;
	}
	template<> AUGMENTEDREALITY_API UClass* StaticClass<UARPlaneGeometry>()
	{
		return UARPlaneGeometry::StaticClass();
	}
	UARPlaneGeometry::UARPlaneGeometry() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARPlaneGeometry);
	UARPlaneGeometry::~UARPlaneGeometry() {}
	void UARTrackedPoint::StaticRegisterNativesUARTrackedPoint()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UARTrackedPoint);
	UClass* Z_Construct_UClass_UARTrackedPoint_NoRegister()
	{
		return UARTrackedPoint::StaticClass();
	}
	struct Z_Construct_UClass_UARTrackedPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARTrackedPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UARTrackedGeometry,
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARTrackedPoint_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ARTrackable.h" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARTrackedPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARTrackedPoint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UARTrackedPoint_Statics::ClassParams = {
		&UARTrackedPoint::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UARTrackedPoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UARTrackedPoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARTrackedPoint()
	{
		if (!Z_Registration_Info_UClass_UARTrackedPoint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UARTrackedPoint.OuterSingleton, Z_Construct_UClass_UARTrackedPoint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UARTrackedPoint.OuterSingleton;
	}
	template<> AUGMENTEDREALITY_API UClass* StaticClass<UARTrackedPoint>()
	{
		return UARTrackedPoint::StaticClass();
	}
	UARTrackedPoint::UARTrackedPoint() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARTrackedPoint);
	UARTrackedPoint::~UARTrackedPoint() {}
	DEFINE_FUNCTION(UARTrackedImage::execGetEstimateSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->GetEstimateSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARTrackedImage::execGetDetectedImage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UARCandidateImage**)Z_Param__Result=P_THIS->GetDetectedImage();
		P_NATIVE_END;
	}
	void UARTrackedImage::StaticRegisterNativesUARTrackedImage()
	{
		UClass* Class = UARTrackedImage::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDetectedImage", &UARTrackedImage::execGetDetectedImage },
			{ "GetEstimateSize", &UARTrackedImage::execGetEstimateSize },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UARTrackedImage_GetDetectedImage_Statics
	{
		struct ARTrackedImage_eventGetDetectedImage_Parms
		{
			UARCandidateImage* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARTrackedImage_GetDetectedImage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARTrackedImage_eventGetDetectedImage_Parms, ReturnValue), Z_Construct_UClass_UARCandidateImage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARTrackedImage_GetDetectedImage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARTrackedImage_GetDetectedImage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARTrackedImage_GetDetectedImage_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Image Detection" },
		{ "Comment", "/** @see DetectedImage */" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
		{ "ToolTip", "@see DetectedImage" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARTrackedImage_GetDetectedImage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARTrackedImage, nullptr, "GetDetectedImage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARTrackedImage_GetDetectedImage_Statics::ARTrackedImage_eventGetDetectedImage_Parms), Z_Construct_UFunction_UARTrackedImage_GetDetectedImage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARTrackedImage_GetDetectedImage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARTrackedImage_GetDetectedImage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARTrackedImage_GetDetectedImage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARTrackedImage_GetDetectedImage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARTrackedImage_GetDetectedImage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARTrackedImage_GetEstimateSize_Statics
	{
		struct ARTrackedImage_eventGetEstimateSize_Parms
		{
			FVector2D ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARTrackedImage_GetEstimateSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARTrackedImage_eventGetEstimateSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARTrackedImage_GetEstimateSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARTrackedImage_GetEstimateSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARTrackedImage_GetEstimateSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Image Detection" },
		{ "Comment", "/*\n\x09 * Get the estimate size of the detected image, where X is the estimated width, and Y is the estimated height.\n\x09 *\n\x09 * Note that ARCore can return a valid estimate size of the detected image when the tracking state of the UARTrackedImage\n\x09 * is tracking. The size should reflect the actual size of the image target, which could be different than the input physical\n\x09 * size of the candidate image.\n\x09 *\n\x09 * ARKit will return the physical size of the ARCandidate image.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
		{ "ToolTip", "* Get the estimate size of the detected image, where X is the estimated width, and Y is the estimated height.\n*\n* Note that ARCore can return a valid estimate size of the detected image when the tracking state of the UARTrackedImage\n* is tracking. The size should reflect the actual size of the image target, which could be different than the input physical\n* size of the candidate image.\n*\n* ARKit will return the physical size of the ARCandidate image." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARTrackedImage_GetEstimateSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARTrackedImage, nullptr, "GetEstimateSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARTrackedImage_GetEstimateSize_Statics::ARTrackedImage_eventGetEstimateSize_Parms), Z_Construct_UFunction_UARTrackedImage_GetEstimateSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARTrackedImage_GetEstimateSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARTrackedImage_GetEstimateSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARTrackedImage_GetEstimateSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARTrackedImage_GetEstimateSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARTrackedImage_GetEstimateSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UARTrackedImage);
	UClass* Z_Construct_UClass_UARTrackedImage_NoRegister()
	{
		return UARTrackedImage::StaticClass();
	}
	struct Z_Construct_UClass_UARTrackedImage_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DetectedImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DetectedImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EstimatedSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EstimatedSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARTrackedImage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UARTrackedGeometry,
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UARTrackedImage_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UARTrackedImage_GetDetectedImage, "GetDetectedImage" }, // 4211357162
		{ &Z_Construct_UFunction_UARTrackedImage_GetEstimateSize, "GetEstimateSize" }, // 1762775345
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARTrackedImage_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ARTrackable.h" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARTrackedImage_Statics::NewProp_DetectedImage_MetaData[] = {
		{ "Comment", "/** The candidate image that was detected in the scene */" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
		{ "ToolTip", "The candidate image that was detected in the scene" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UARTrackedImage_Statics::NewProp_DetectedImage = { "DetectedImage", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARTrackedImage, DetectedImage), Z_Construct_UClass_UARCandidateImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UARTrackedImage_Statics::NewProp_DetectedImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARTrackedImage_Statics::NewProp_DetectedImage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARTrackedImage_Statics::NewProp_EstimatedSize_MetaData[] = {
		{ "Comment", "/** The estimated image size that was detected in the scene */" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
		{ "ToolTip", "The estimated image size that was detected in the scene" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARTrackedImage_Statics::NewProp_EstimatedSize = { "EstimatedSize", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARTrackedImage, EstimatedSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UARTrackedImage_Statics::NewProp_EstimatedSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARTrackedImage_Statics::NewProp_EstimatedSize_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UARTrackedImage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARTrackedImage_Statics::NewProp_DetectedImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARTrackedImage_Statics::NewProp_EstimatedSize,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARTrackedImage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARTrackedImage>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UARTrackedImage_Statics::ClassParams = {
		&UARTrackedImage::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UARTrackedImage_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UARTrackedImage_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UARTrackedImage_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UARTrackedImage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARTrackedImage()
	{
		if (!Z_Registration_Info_UClass_UARTrackedImage.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UARTrackedImage.OuterSingleton, Z_Construct_UClass_UARTrackedImage_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UARTrackedImage.OuterSingleton;
	}
	template<> AUGMENTEDREALITY_API UClass* StaticClass<UARTrackedImage>()
	{
		return UARTrackedImage::StaticClass();
	}
	UARTrackedImage::UARTrackedImage() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARTrackedImage);
	UARTrackedImage::~UARTrackedImage() {}
	void UARTrackedQRCode::StaticRegisterNativesUARTrackedQRCode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UARTrackedQRCode);
	UClass* Z_Construct_UClass_UARTrackedQRCode_NoRegister()
	{
		return UARTrackedQRCode::StaticClass();
	}
	struct Z_Construct_UClass_UARTrackedQRCode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QRCode_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_QRCode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Version;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARTrackedQRCode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UARTrackedImage,
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARTrackedQRCode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ARTrackable.h" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARTrackedQRCode_Statics::NewProp_QRCode_MetaData[] = {
		{ "Category", "QR Code" },
		{ "Comment", "/** The encoded information in the qr code */" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
		{ "ToolTip", "The encoded information in the qr code" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UARTrackedQRCode_Statics::NewProp_QRCode = { "QRCode", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARTrackedQRCode, QRCode), METADATA_PARAMS(Z_Construct_UClass_UARTrackedQRCode_Statics::NewProp_QRCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARTrackedQRCode_Statics::NewProp_QRCode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARTrackedQRCode_Statics::NewProp_Version_MetaData[] = {
		{ "Category", "QR Code" },
		{ "Comment", "/** The version of the qr code */" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
		{ "ToolTip", "The version of the qr code" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UARTrackedQRCode_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARTrackedQRCode, Version), METADATA_PARAMS(Z_Construct_UClass_UARTrackedQRCode_Statics::NewProp_Version_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARTrackedQRCode_Statics::NewProp_Version_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UARTrackedQRCode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARTrackedQRCode_Statics::NewProp_QRCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARTrackedQRCode_Statics::NewProp_Version,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARTrackedQRCode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARTrackedQRCode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UARTrackedQRCode_Statics::ClassParams = {
		&UARTrackedQRCode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UARTrackedQRCode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UARTrackedQRCode_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UARTrackedQRCode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UARTrackedQRCode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARTrackedQRCode()
	{
		if (!Z_Registration_Info_UClass_UARTrackedQRCode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UARTrackedQRCode.OuterSingleton, Z_Construct_UClass_UARTrackedQRCode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UARTrackedQRCode.OuterSingleton;
	}
	template<> AUGMENTEDREALITY_API UClass* StaticClass<UARTrackedQRCode>()
	{
		return UARTrackedQRCode::StaticClass();
	}
	UARTrackedQRCode::UARTrackedQRCode() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARTrackedQRCode);
	UARTrackedQRCode::~UARTrackedQRCode() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EARFaceTrackingDirection;
	static UEnum* EARFaceTrackingDirection_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EARFaceTrackingDirection.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EARFaceTrackingDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARFaceTrackingDirection, (UObject*)Z_Construct_UPackage__Script_AugmentedReality(), TEXT("EARFaceTrackingDirection"));
		}
		return Z_Registration_Info_UEnum_EARFaceTrackingDirection.OuterSingleton;
	}
	template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARFaceTrackingDirection>()
	{
		return EARFaceTrackingDirection_StaticEnum();
	}
	struct Z_Construct_UEnum_AugmentedReality_EARFaceTrackingDirection_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AugmentedReality_EARFaceTrackingDirection_Statics::Enumerators[] = {
		{ "EARFaceTrackingDirection::FaceRelative", (int64)EARFaceTrackingDirection::FaceRelative },
		{ "EARFaceTrackingDirection::FaceMirrored", (int64)EARFaceTrackingDirection::FaceMirrored },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AugmentedReality_EARFaceTrackingDirection_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AR AugmentedReality" },
		{ "Experimental", "" },
		{ "FaceMirrored.Comment", "/** Blend shapes are tracked as if looking at the face, e.g. right eye is the mesh's left eye and right side of screen if facing you (like a mirror) */" },
		{ "FaceMirrored.Name", "EARFaceTrackingDirection::FaceMirrored" },
		{ "FaceMirrored.ToolTip", "Blend shapes are tracked as if looking at the face, e.g. right eye is the mesh's left eye and right side of screen if facing you (like a mirror)" },
		{ "FaceRelative.Comment", "/** Blend shapes are tracked as if looking out of the face, e.g. right eye is the mesh's right eye and left side of screen if facing you */" },
		{ "FaceRelative.Name", "EARFaceTrackingDirection::FaceRelative" },
		{ "FaceRelative.ToolTip", "Blend shapes are tracked as if looking out of the face, e.g. right eye is the mesh's right eye and left side of screen if facing you" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AugmentedReality_EARFaceTrackingDirection_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality,
		nullptr,
		"EARFaceTrackingDirection",
		"EARFaceTrackingDirection",
		Z_Construct_UEnum_AugmentedReality_EARFaceTrackingDirection_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AugmentedReality_EARFaceTrackingDirection_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AugmentedReality_EARFaceTrackingDirection_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AugmentedReality_EARFaceTrackingDirection_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AugmentedReality_EARFaceTrackingDirection()
	{
		if (!Z_Registration_Info_UEnum_EARFaceTrackingDirection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EARFaceTrackingDirection.InnerSingleton, Z_Construct_UEnum_AugmentedReality_EARFaceTrackingDirection_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EARFaceTrackingDirection.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EARFaceBlendShape;
	static UEnum* EARFaceBlendShape_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EARFaceBlendShape.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EARFaceBlendShape.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARFaceBlendShape, (UObject*)Z_Construct_UPackage__Script_AugmentedReality(), TEXT("EARFaceBlendShape"));
		}
		return Z_Registration_Info_UEnum_EARFaceBlendShape.OuterSingleton;
	}
	template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARFaceBlendShape>()
	{
		return EARFaceBlendShape_StaticEnum();
	}
	struct Z_Construct_UEnum_AugmentedReality_EARFaceBlendShape_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AugmentedReality_EARFaceBlendShape_Statics::Enumerators[] = {
		{ "EARFaceBlendShape::EyeBlinkLeft", (int64)EARFaceBlendShape::EyeBlinkLeft },
		{ "EARFaceBlendShape::EyeLookDownLeft", (int64)EARFaceBlendShape::EyeLookDownLeft },
		{ "EARFaceBlendShape::EyeLookInLeft", (int64)EARFaceBlendShape::EyeLookInLeft },
		{ "EARFaceBlendShape::EyeLookOutLeft", (int64)EARFaceBlendShape::EyeLookOutLeft },
		{ "EARFaceBlendShape::EyeLookUpLeft", (int64)EARFaceBlendShape::EyeLookUpLeft },
		{ "EARFaceBlendShape::EyeSquintLeft", (int64)EARFaceBlendShape::EyeSquintLeft },
		{ "EARFaceBlendShape::EyeWideLeft", (int64)EARFaceBlendShape::EyeWideLeft },
		{ "EARFaceBlendShape::EyeBlinkRight", (int64)EARFaceBlendShape::EyeBlinkRight },
		{ "EARFaceBlendShape::EyeLookDownRight", (int64)EARFaceBlendShape::EyeLookDownRight },
		{ "EARFaceBlendShape::EyeLookInRight", (int64)EARFaceBlendShape::EyeLookInRight },
		{ "EARFaceBlendShape::EyeLookOutRight", (int64)EARFaceBlendShape::EyeLookOutRight },
		{ "EARFaceBlendShape::EyeLookUpRight", (int64)EARFaceBlendShape::EyeLookUpRight },
		{ "EARFaceBlendShape::EyeSquintRight", (int64)EARFaceBlendShape::EyeSquintRight },
		{ "EARFaceBlendShape::EyeWideRight", (int64)EARFaceBlendShape::EyeWideRight },
		{ "EARFaceBlendShape::JawForward", (int64)EARFaceBlendShape::JawForward },
		{ "EARFaceBlendShape::JawLeft", (int64)EARFaceBlendShape::JawLeft },
		{ "EARFaceBlendShape::JawRight", (int64)EARFaceBlendShape::JawRight },
		{ "EARFaceBlendShape::JawOpen", (int64)EARFaceBlendShape::JawOpen },
		{ "EARFaceBlendShape::MouthClose", (int64)EARFaceBlendShape::MouthClose },
		{ "EARFaceBlendShape::MouthFunnel", (int64)EARFaceBlendShape::MouthFunnel },
		{ "EARFaceBlendShape::MouthPucker", (int64)EARFaceBlendShape::MouthPucker },
		{ "EARFaceBlendShape::MouthLeft", (int64)EARFaceBlendShape::MouthLeft },
		{ "EARFaceBlendShape::MouthRight", (int64)EARFaceBlendShape::MouthRight },
		{ "EARFaceBlendShape::MouthSmileLeft", (int64)EARFaceBlendShape::MouthSmileLeft },
		{ "EARFaceBlendShape::MouthSmileRight", (int64)EARFaceBlendShape::MouthSmileRight },
		{ "EARFaceBlendShape::MouthFrownLeft", (int64)EARFaceBlendShape::MouthFrownLeft },
		{ "EARFaceBlendShape::MouthFrownRight", (int64)EARFaceBlendShape::MouthFrownRight },
		{ "EARFaceBlendShape::MouthDimpleLeft", (int64)EARFaceBlendShape::MouthDimpleLeft },
		{ "EARFaceBlendShape::MouthDimpleRight", (int64)EARFaceBlendShape::MouthDimpleRight },
		{ "EARFaceBlendShape::MouthStretchLeft", (int64)EARFaceBlendShape::MouthStretchLeft },
		{ "EARFaceBlendShape::MouthStretchRight", (int64)EARFaceBlendShape::MouthStretchRight },
		{ "EARFaceBlendShape::MouthRollLower", (int64)EARFaceBlendShape::MouthRollLower },
		{ "EARFaceBlendShape::MouthRollUpper", (int64)EARFaceBlendShape::MouthRollUpper },
		{ "EARFaceBlendShape::MouthShrugLower", (int64)EARFaceBlendShape::MouthShrugLower },
		{ "EARFaceBlendShape::MouthShrugUpper", (int64)EARFaceBlendShape::MouthShrugUpper },
		{ "EARFaceBlendShape::MouthPressLeft", (int64)EARFaceBlendShape::MouthPressLeft },
		{ "EARFaceBlendShape::MouthPressRight", (int64)EARFaceBlendShape::MouthPressRight },
		{ "EARFaceBlendShape::MouthLowerDownLeft", (int64)EARFaceBlendShape::MouthLowerDownLeft },
		{ "EARFaceBlendShape::MouthLowerDownRight", (int64)EARFaceBlendShape::MouthLowerDownRight },
		{ "EARFaceBlendShape::MouthUpperUpLeft", (int64)EARFaceBlendShape::MouthUpperUpLeft },
		{ "EARFaceBlendShape::MouthUpperUpRight", (int64)EARFaceBlendShape::MouthUpperUpRight },
		{ "EARFaceBlendShape::BrowDownLeft", (int64)EARFaceBlendShape::BrowDownLeft },
		{ "EARFaceBlendShape::BrowDownRight", (int64)EARFaceBlendShape::BrowDownRight },
		{ "EARFaceBlendShape::BrowInnerUp", (int64)EARFaceBlendShape::BrowInnerUp },
		{ "EARFaceBlendShape::BrowOuterUpLeft", (int64)EARFaceBlendShape::BrowOuterUpLeft },
		{ "EARFaceBlendShape::BrowOuterUpRight", (int64)EARFaceBlendShape::BrowOuterUpRight },
		{ "EARFaceBlendShape::CheekPuff", (int64)EARFaceBlendShape::CheekPuff },
		{ "EARFaceBlendShape::CheekSquintLeft", (int64)EARFaceBlendShape::CheekSquintLeft },
		{ "EARFaceBlendShape::CheekSquintRight", (int64)EARFaceBlendShape::CheekSquintRight },
		{ "EARFaceBlendShape::NoseSneerLeft", (int64)EARFaceBlendShape::NoseSneerLeft },
		{ "EARFaceBlendShape::NoseSneerRight", (int64)EARFaceBlendShape::NoseSneerRight },
		{ "EARFaceBlendShape::TongueOut", (int64)EARFaceBlendShape::TongueOut },
		{ "EARFaceBlendShape::HeadYaw", (int64)EARFaceBlendShape::HeadYaw },
		{ "EARFaceBlendShape::HeadPitch", (int64)EARFaceBlendShape::HeadPitch },
		{ "EARFaceBlendShape::HeadRoll", (int64)EARFaceBlendShape::HeadRoll },
		{ "EARFaceBlendShape::LeftEyeYaw", (int64)EARFaceBlendShape::LeftEyeYaw },
		{ "EARFaceBlendShape::LeftEyePitch", (int64)EARFaceBlendShape::LeftEyePitch },
		{ "EARFaceBlendShape::LeftEyeRoll", (int64)EARFaceBlendShape::LeftEyeRoll },
		{ "EARFaceBlendShape::RightEyeYaw", (int64)EARFaceBlendShape::RightEyeYaw },
		{ "EARFaceBlendShape::RightEyePitch", (int64)EARFaceBlendShape::RightEyePitch },
		{ "EARFaceBlendShape::RightEyeRoll", (int64)EARFaceBlendShape::RightEyeRoll },
		{ "EARFaceBlendShape::MAX", (int64)EARFaceBlendShape::MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AugmentedReality_EARFaceBlendShape_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "BrowDownLeft.Comment", "// Brow blend shapes\n" },
		{ "BrowDownLeft.Name", "EARFaceBlendShape::BrowDownLeft" },
		{ "BrowDownLeft.ToolTip", "Brow blend shapes" },
		{ "BrowDownRight.Name", "EARFaceBlendShape::BrowDownRight" },
		{ "BrowInnerUp.Name", "EARFaceBlendShape::BrowInnerUp" },
		{ "BrowOuterUpLeft.Name", "EARFaceBlendShape::BrowOuterUpLeft" },
		{ "BrowOuterUpRight.Name", "EARFaceBlendShape::BrowOuterUpRight" },
		{ "Category", "AR AugmentedReality" },
		{ "CheekPuff.Comment", "// Cheek blend shapes\n" },
		{ "CheekPuff.Name", "EARFaceBlendShape::CheekPuff" },
		{ "CheekPuff.ToolTip", "Cheek blend shapes" },
		{ "CheekSquintLeft.Name", "EARFaceBlendShape::CheekSquintLeft" },
		{ "CheekSquintRight.Name", "EARFaceBlendShape::CheekSquintRight" },
		{ "Experimental", "" },
		{ "EyeBlinkLeft.Comment", "// Left eye blend shapes\n" },
		{ "EyeBlinkLeft.Name", "EARFaceBlendShape::EyeBlinkLeft" },
		{ "EyeBlinkLeft.ToolTip", "Left eye blend shapes" },
		{ "EyeBlinkRight.Comment", "// Right eye blend shapes\n" },
		{ "EyeBlinkRight.Name", "EARFaceBlendShape::EyeBlinkRight" },
		{ "EyeBlinkRight.ToolTip", "Right eye blend shapes" },
		{ "EyeLookDownLeft.Name", "EARFaceBlendShape::EyeLookDownLeft" },
		{ "EyeLookDownRight.Name", "EARFaceBlendShape::EyeLookDownRight" },
		{ "EyeLookInLeft.Name", "EARFaceBlendShape::EyeLookInLeft" },
		{ "EyeLookInRight.Name", "EARFaceBlendShape::EyeLookInRight" },
		{ "EyeLookOutLeft.Name", "EARFaceBlendShape::EyeLookOutLeft" },
		{ "EyeLookOutRight.Name", "EARFaceBlendShape::EyeLookOutRight" },
		{ "EyeLookUpLeft.Name", "EARFaceBlendShape::EyeLookUpLeft" },
		{ "EyeLookUpRight.Name", "EARFaceBlendShape::EyeLookUpRight" },
		{ "EyeSquintLeft.Name", "EARFaceBlendShape::EyeSquintLeft" },
		{ "EyeSquintRight.Name", "EARFaceBlendShape::EyeSquintRight" },
		{ "EyeWideLeft.Name", "EARFaceBlendShape::EyeWideLeft" },
		{ "EyeWideRight.Name", "EARFaceBlendShape::EyeWideRight" },
		{ "HeadPitch.Name", "EARFaceBlendShape::HeadPitch" },
		{ "HeadRoll.Name", "EARFaceBlendShape::HeadRoll" },
		{ "HeadYaw.Comment", "// Treat the head rotation as curves for LiveLink support\n" },
		{ "HeadYaw.Name", "EARFaceBlendShape::HeadYaw" },
		{ "HeadYaw.ToolTip", "Treat the head rotation as curves for LiveLink support" },
		{ "JawForward.Comment", "// Jaw blend shapes\n" },
		{ "JawForward.Name", "EARFaceBlendShape::JawForward" },
		{ "JawForward.ToolTip", "Jaw blend shapes" },
		{ "JawLeft.Name", "EARFaceBlendShape::JawLeft" },
		{ "JawOpen.Name", "EARFaceBlendShape::JawOpen" },
		{ "JawRight.Name", "EARFaceBlendShape::JawRight" },
		{ "LeftEyePitch.Name", "EARFaceBlendShape::LeftEyePitch" },
		{ "LeftEyeRoll.Name", "EARFaceBlendShape::LeftEyeRoll" },
		{ "LeftEyeYaw.Comment", "// Treat eye rotation as curves for LiveLink support\n" },
		{ "LeftEyeYaw.Name", "EARFaceBlendShape::LeftEyeYaw" },
		{ "LeftEyeYaw.ToolTip", "Treat eye rotation as curves for LiveLink support" },
		{ "MAX.Name", "EARFaceBlendShape::MAX" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
		{ "MouthClose.Comment", "// Mouth blend shapes\n" },
		{ "MouthClose.Name", "EARFaceBlendShape::MouthClose" },
		{ "MouthClose.ToolTip", "Mouth blend shapes" },
		{ "MouthDimpleLeft.Name", "EARFaceBlendShape::MouthDimpleLeft" },
		{ "MouthDimpleRight.Name", "EARFaceBlendShape::MouthDimpleRight" },
		{ "MouthFrownLeft.Name", "EARFaceBlendShape::MouthFrownLeft" },
		{ "MouthFrownRight.Name", "EARFaceBlendShape::MouthFrownRight" },
		{ "MouthFunnel.Name", "EARFaceBlendShape::MouthFunnel" },
		{ "MouthLeft.Name", "EARFaceBlendShape::MouthLeft" },
		{ "MouthLowerDownLeft.Name", "EARFaceBlendShape::MouthLowerDownLeft" },
		{ "MouthLowerDownRight.Name", "EARFaceBlendShape::MouthLowerDownRight" },
		{ "MouthPressLeft.Name", "EARFaceBlendShape::MouthPressLeft" },
		{ "MouthPressRight.Name", "EARFaceBlendShape::MouthPressRight" },
		{ "MouthPucker.Name", "EARFaceBlendShape::MouthPucker" },
		{ "MouthRight.Name", "EARFaceBlendShape::MouthRight" },
		{ "MouthRollLower.Name", "EARFaceBlendShape::MouthRollLower" },
		{ "MouthRollUpper.Name", "EARFaceBlendShape::MouthRollUpper" },
		{ "MouthShrugLower.Name", "EARFaceBlendShape::MouthShrugLower" },
		{ "MouthShrugUpper.Name", "EARFaceBlendShape::MouthShrugUpper" },
		{ "MouthSmileLeft.Name", "EARFaceBlendShape::MouthSmileLeft" },
		{ "MouthSmileRight.Name", "EARFaceBlendShape::MouthSmileRight" },
		{ "MouthStretchLeft.Name", "EARFaceBlendShape::MouthStretchLeft" },
		{ "MouthStretchRight.Name", "EARFaceBlendShape::MouthStretchRight" },
		{ "MouthUpperUpLeft.Name", "EARFaceBlendShape::MouthUpperUpLeft" },
		{ "MouthUpperUpRight.Name", "EARFaceBlendShape::MouthUpperUpRight" },
		{ "NoseSneerLeft.Comment", "// Nose blend shapes\n" },
		{ "NoseSneerLeft.Name", "EARFaceBlendShape::NoseSneerLeft" },
		{ "NoseSneerLeft.ToolTip", "Nose blend shapes" },
		{ "NoseSneerRight.Name", "EARFaceBlendShape::NoseSneerRight" },
		{ "RightEyePitch.Name", "EARFaceBlendShape::RightEyePitch" },
		{ "RightEyeRoll.Name", "EARFaceBlendShape::RightEyeRoll" },
		{ "RightEyeYaw.Name", "EARFaceBlendShape::RightEyeYaw" },
		{ "TongueOut.Name", "EARFaceBlendShape::TongueOut" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AugmentedReality_EARFaceBlendShape_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality,
		nullptr,
		"EARFaceBlendShape",
		"EARFaceBlendShape",
		Z_Construct_UEnum_AugmentedReality_EARFaceBlendShape_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AugmentedReality_EARFaceBlendShape_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AugmentedReality_EARFaceBlendShape_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AugmentedReality_EARFaceBlendShape_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AugmentedReality_EARFaceBlendShape()
	{
		if (!Z_Registration_Info_UEnum_EARFaceBlendShape.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EARFaceBlendShape.InnerSingleton, Z_Construct_UEnum_AugmentedReality_EARFaceBlendShape_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EARFaceBlendShape.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAREye;
	static UEnum* EAREye_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAREye.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAREye.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EAREye, (UObject*)Z_Construct_UPackage__Script_AugmentedReality(), TEXT("EAREye"));
		}
		return Z_Registration_Info_UEnum_EAREye.OuterSingleton;
	}
	template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EAREye>()
	{
		return EAREye_StaticEnum();
	}
	struct Z_Construct_UEnum_AugmentedReality_EAREye_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AugmentedReality_EAREye_Statics::Enumerators[] = {
		{ "EAREye::LeftEye", (int64)EAREye::LeftEye },
		{ "EAREye::RightEye", (int64)EAREye::RightEye },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AugmentedReality_EAREye_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AR AugmentedReality" },
		{ "Experimental", "" },
		{ "LeftEye.Name", "EAREye::LeftEye" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
		{ "RightEye.Name", "EAREye::RightEye" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AugmentedReality_EAREye_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality,
		nullptr,
		"EAREye",
		"EAREye",
		Z_Construct_UEnum_AugmentedReality_EAREye_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AugmentedReality_EAREye_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AugmentedReality_EAREye_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AugmentedReality_EAREye_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AugmentedReality_EAREye()
	{
		if (!Z_Registration_Info_UEnum_EAREye.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAREye.InnerSingleton, Z_Construct_UEnum_AugmentedReality_EAREye_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAREye.InnerSingleton;
	}
	DEFINE_FUNCTION(UARFaceGeometry::execGetWorldSpaceEyeTransform)
	{
		P_GET_ENUM(EAREye,Z_Param_Eye);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetWorldSpaceEyeTransform(EAREye(Z_Param_Eye));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARFaceGeometry::execGetLocalSpaceEyeTransform)
	{
		P_GET_ENUM(EAREye,Z_Param_Eye);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetLocalSpaceEyeTransform(EAREye(Z_Param_Eye));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARFaceGeometry::execGetBlendShapes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<EARFaceBlendShape,float>*)Z_Param__Result=P_THIS->GetBlendShapes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARFaceGeometry::execGetBlendShapeValue)
	{
		P_GET_ENUM(EARFaceBlendShape,Z_Param_BlendShape);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetBlendShapeValue(EARFaceBlendShape(Z_Param_BlendShape));
		P_NATIVE_END;
	}
	void UARFaceGeometry::StaticRegisterNativesUARFaceGeometry()
	{
		UClass* Class = UARFaceGeometry::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBlendShapes", &UARFaceGeometry::execGetBlendShapes },
			{ "GetBlendShapeValue", &UARFaceGeometry::execGetBlendShapeValue },
			{ "GetLocalSpaceEyeTransform", &UARFaceGeometry::execGetLocalSpaceEyeTransform },
			{ "GetWorldSpaceEyeTransform", &UARFaceGeometry::execGetWorldSpaceEyeTransform },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UARFaceGeometry_GetBlendShapes_Statics
	{
		struct ARFaceGeometry_eventGetBlendShapes_Parms
		{
			TMap<EARFaceBlendShape,float> ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UARFaceGeometry_GetBlendShapes_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARFaceGeometry_GetBlendShapes_Statics::NewProp_ReturnValue_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARFaceGeometry_GetBlendShapes_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_AugmentedReality_EARFaceBlendShape, METADATA_PARAMS(nullptr, 0) }; // 2178612967
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARFaceGeometry_GetBlendShapes_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UARFaceGeometry_GetBlendShapes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARFaceGeometry_eventGetBlendShapes_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UARFaceGeometry_GetBlendShapes_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARFaceGeometry_GetBlendShapes_Statics::NewProp_ReturnValue_MetaData)) }; // 2178612967
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARFaceGeometry_GetBlendShapes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARFaceGeometry_GetBlendShapes_Statics::NewProp_ReturnValue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARFaceGeometry_GetBlendShapes_Statics::NewProp_ReturnValue_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARFaceGeometry_GetBlendShapes_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARFaceGeometry_GetBlendShapes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARFaceGeometry_GetBlendShapes_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Face Geometry" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARFaceGeometry_GetBlendShapes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARFaceGeometry, nullptr, "GetBlendShapes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARFaceGeometry_GetBlendShapes_Statics::ARFaceGeometry_eventGetBlendShapes_Parms), Z_Construct_UFunction_UARFaceGeometry_GetBlendShapes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARFaceGeometry_GetBlendShapes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARFaceGeometry_GetBlendShapes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARFaceGeometry_GetBlendShapes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARFaceGeometry_GetBlendShapes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARFaceGeometry_GetBlendShapes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARFaceGeometry_GetBlendShapeValue_Statics
	{
		struct ARFaceGeometry_eventGetBlendShapeValue_Parms
		{
			EARFaceBlendShape BlendShape;
			float ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_BlendShape_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BlendShape;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARFaceGeometry_GetBlendShapeValue_Statics::NewProp_BlendShape_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARFaceGeometry_GetBlendShapeValue_Statics::NewProp_BlendShape = { "BlendShape", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARFaceGeometry_eventGetBlendShapeValue_Parms, BlendShape), Z_Construct_UEnum_AugmentedReality_EARFaceBlendShape, METADATA_PARAMS(nullptr, 0) }; // 2178612967
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UARFaceGeometry_GetBlendShapeValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARFaceGeometry_eventGetBlendShapeValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARFaceGeometry_GetBlendShapeValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARFaceGeometry_GetBlendShapeValue_Statics::NewProp_BlendShape_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARFaceGeometry_GetBlendShapeValue_Statics::NewProp_BlendShape,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARFaceGeometry_GetBlendShapeValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARFaceGeometry_GetBlendShapeValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Face Geometry" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARFaceGeometry_GetBlendShapeValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARFaceGeometry, nullptr, "GetBlendShapeValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARFaceGeometry_GetBlendShapeValue_Statics::ARFaceGeometry_eventGetBlendShapeValue_Parms), Z_Construct_UFunction_UARFaceGeometry_GetBlendShapeValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARFaceGeometry_GetBlendShapeValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARFaceGeometry_GetBlendShapeValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARFaceGeometry_GetBlendShapeValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARFaceGeometry_GetBlendShapeValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARFaceGeometry_GetBlendShapeValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARFaceGeometry_GetLocalSpaceEyeTransform_Statics
	{
		struct ARFaceGeometry_eventGetLocalSpaceEyeTransform_Parms
		{
			EAREye Eye;
			FTransform ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Eye_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Eye;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARFaceGeometry_GetLocalSpaceEyeTransform_Statics::NewProp_Eye_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARFaceGeometry_GetLocalSpaceEyeTransform_Statics::NewProp_Eye = { "Eye", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARFaceGeometry_eventGetLocalSpaceEyeTransform_Parms, Eye), Z_Construct_UEnum_AugmentedReality_EAREye, METADATA_PARAMS(nullptr, 0) }; // 1854350705
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARFaceGeometry_GetLocalSpaceEyeTransform_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARFaceGeometry_GetLocalSpaceEyeTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARFaceGeometry_eventGetLocalSpaceEyeTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UARFaceGeometry_GetLocalSpaceEyeTransform_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARFaceGeometry_GetLocalSpaceEyeTransform_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARFaceGeometry_GetLocalSpaceEyeTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARFaceGeometry_GetLocalSpaceEyeTransform_Statics::NewProp_Eye_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARFaceGeometry_GetLocalSpaceEyeTransform_Statics::NewProp_Eye,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARFaceGeometry_GetLocalSpaceEyeTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARFaceGeometry_GetLocalSpaceEyeTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Face Geometry" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARFaceGeometry_GetLocalSpaceEyeTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARFaceGeometry, nullptr, "GetLocalSpaceEyeTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARFaceGeometry_GetLocalSpaceEyeTransform_Statics::ARFaceGeometry_eventGetLocalSpaceEyeTransform_Parms), Z_Construct_UFunction_UARFaceGeometry_GetLocalSpaceEyeTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARFaceGeometry_GetLocalSpaceEyeTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARFaceGeometry_GetLocalSpaceEyeTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARFaceGeometry_GetLocalSpaceEyeTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARFaceGeometry_GetLocalSpaceEyeTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARFaceGeometry_GetLocalSpaceEyeTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARFaceGeometry_GetWorldSpaceEyeTransform_Statics
	{
		struct ARFaceGeometry_eventGetWorldSpaceEyeTransform_Parms
		{
			EAREye Eye;
			FTransform ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Eye_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Eye;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARFaceGeometry_GetWorldSpaceEyeTransform_Statics::NewProp_Eye_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARFaceGeometry_GetWorldSpaceEyeTransform_Statics::NewProp_Eye = { "Eye", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARFaceGeometry_eventGetWorldSpaceEyeTransform_Parms, Eye), Z_Construct_UEnum_AugmentedReality_EAREye, METADATA_PARAMS(nullptr, 0) }; // 1854350705
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARFaceGeometry_GetWorldSpaceEyeTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARFaceGeometry_eventGetWorldSpaceEyeTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARFaceGeometry_GetWorldSpaceEyeTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARFaceGeometry_GetWorldSpaceEyeTransform_Statics::NewProp_Eye_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARFaceGeometry_GetWorldSpaceEyeTransform_Statics::NewProp_Eye,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARFaceGeometry_GetWorldSpaceEyeTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARFaceGeometry_GetWorldSpaceEyeTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Face Geometry" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARFaceGeometry_GetWorldSpaceEyeTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARFaceGeometry, nullptr, "GetWorldSpaceEyeTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARFaceGeometry_GetWorldSpaceEyeTransform_Statics::ARFaceGeometry_eventGetWorldSpaceEyeTransform_Parms), Z_Construct_UFunction_UARFaceGeometry_GetWorldSpaceEyeTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARFaceGeometry_GetWorldSpaceEyeTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARFaceGeometry_GetWorldSpaceEyeTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARFaceGeometry_GetWorldSpaceEyeTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARFaceGeometry_GetWorldSpaceEyeTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARFaceGeometry_GetWorldSpaceEyeTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UARFaceGeometry);
	UClass* Z_Construct_UClass_UARFaceGeometry_NoRegister()
	{
		return UARFaceGeometry::StaticClass();
	}
	struct Z_Construct_UClass_UARFaceGeometry_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAtTarget_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LookAtTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsTracked_MetaData[];
#endif
		static void NewProp_bIsTracked_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsTracked;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendShapes_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BlendShapes_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BlendShapes_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendShapes_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_BlendShapes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftEyeTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LeftEyeTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightEyeTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RightEyeTransform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARFaceGeometry_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UARTrackedGeometry,
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UARFaceGeometry_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UARFaceGeometry_GetBlendShapes, "GetBlendShapes" }, // 10269655
		{ &Z_Construct_UFunction_UARFaceGeometry_GetBlendShapeValue, "GetBlendShapeValue" }, // 1278026072
		{ &Z_Construct_UFunction_UARFaceGeometry_GetLocalSpaceEyeTransform, "GetLocalSpaceEyeTransform" }, // 4248399922
		{ &Z_Construct_UFunction_UARFaceGeometry_GetWorldSpaceEyeTransform, "GetWorldSpaceEyeTransform" }, // 3487950843
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARFaceGeometry_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ARTrackable.h" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARFaceGeometry_Statics::NewProp_LookAtTarget_MetaData[] = {
		{ "Category", "AR AugmentedReality|Face Geometry" },
		{ "Comment", "/** The target the eyes are looking at */" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
		{ "ToolTip", "The target the eyes are looking at" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARFaceGeometry_Statics::NewProp_LookAtTarget = { "LookAtTarget", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARFaceGeometry, LookAtTarget), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UARFaceGeometry_Statics::NewProp_LookAtTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARFaceGeometry_Statics::NewProp_LookAtTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARFaceGeometry_Statics::NewProp_bIsTracked_MetaData[] = {
		{ "Category", "AR AugmentedReality|Face Geometry" },
		{ "Comment", "/** Whether the face is currently being tracked by the AR system */" },
		{ "Deprecated", "" },
		{ "DeprecationMessage", "This property is now deprecated, please use GetTrackingState() and check for EARTrackingState::Tracking or IsTracked() instead." },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
		{ "ToolTip", "Whether the face is currently being tracked by the AR system" },
	};
#endif
	void Z_Construct_UClass_UARFaceGeometry_Statics::NewProp_bIsTracked_SetBit(void* Obj)
	{
		((UARFaceGeometry*)Obj)->bIsTracked = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UARFaceGeometry_Statics::NewProp_bIsTracked = { "bIsTracked", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UARFaceGeometry), &Z_Construct_UClass_UARFaceGeometry_Statics::NewProp_bIsTracked_SetBit, METADATA_PARAMS(Z_Construct_UClass_UARFaceGeometry_Statics::NewProp_bIsTracked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARFaceGeometry_Statics::NewProp_bIsTracked_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UARFaceGeometry_Statics::NewProp_BlendShapes_ValueProp = { "BlendShapes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UARFaceGeometry_Statics::NewProp_BlendShapes_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UARFaceGeometry_Statics::NewProp_BlendShapes_Key_KeyProp = { "BlendShapes_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_AugmentedReality_EARFaceBlendShape, METADATA_PARAMS(nullptr, 0) }; // 2178612967
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARFaceGeometry_Statics::NewProp_BlendShapes_MetaData[] = {
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UARFaceGeometry_Statics::NewProp_BlendShapes = { "BlendShapes", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARFaceGeometry, BlendShapes), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UARFaceGeometry_Statics::NewProp_BlendShapes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARFaceGeometry_Statics::NewProp_BlendShapes_MetaData)) }; // 2178612967
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARFaceGeometry_Statics::NewProp_LeftEyeTransform_MetaData[] = {
		{ "Comment", "/** The transform for the left eye */" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
		{ "ToolTip", "The transform for the left eye" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARFaceGeometry_Statics::NewProp_LeftEyeTransform = { "LeftEyeTransform", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARFaceGeometry, LeftEyeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UARFaceGeometry_Statics::NewProp_LeftEyeTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARFaceGeometry_Statics::NewProp_LeftEyeTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARFaceGeometry_Statics::NewProp_RightEyeTransform_MetaData[] = {
		{ "Comment", "/** The transform for the right eye */" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
		{ "ToolTip", "The transform for the right eye" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARFaceGeometry_Statics::NewProp_RightEyeTransform = { "RightEyeTransform", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARFaceGeometry, RightEyeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UARFaceGeometry_Statics::NewProp_RightEyeTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARFaceGeometry_Statics::NewProp_RightEyeTransform_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UARFaceGeometry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARFaceGeometry_Statics::NewProp_LookAtTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARFaceGeometry_Statics::NewProp_bIsTracked,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARFaceGeometry_Statics::NewProp_BlendShapes_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARFaceGeometry_Statics::NewProp_BlendShapes_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARFaceGeometry_Statics::NewProp_BlendShapes_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARFaceGeometry_Statics::NewProp_BlendShapes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARFaceGeometry_Statics::NewProp_LeftEyeTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARFaceGeometry_Statics::NewProp_RightEyeTransform,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARFaceGeometry_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARFaceGeometry>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UARFaceGeometry_Statics::ClassParams = {
		&UARFaceGeometry::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UARFaceGeometry_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UARFaceGeometry_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UARFaceGeometry_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UARFaceGeometry_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARFaceGeometry()
	{
		if (!Z_Registration_Info_UClass_UARFaceGeometry.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UARFaceGeometry.OuterSingleton, Z_Construct_UClass_UARFaceGeometry_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UARFaceGeometry.OuterSingleton;
	}
	template<> AUGMENTEDREALITY_API UClass* StaticClass<UARFaceGeometry>()
	{
		return UARFaceGeometry::StaticClass();
	}
	UARFaceGeometry::UARFaceGeometry() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARFaceGeometry);
	UARFaceGeometry::~UARFaceGeometry() {}
	DEFINE_FUNCTION(UAREnvironmentCaptureProbe::execGetEnvironmentCaptureTexture)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAREnvironmentCaptureProbeTexture**)Z_Param__Result=P_THIS->GetEnvironmentCaptureTexture();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAREnvironmentCaptureProbe::execGetExtent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetExtent();
		P_NATIVE_END;
	}
	void UAREnvironmentCaptureProbe::StaticRegisterNativesUAREnvironmentCaptureProbe()
	{
		UClass* Class = UAREnvironmentCaptureProbe::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetEnvironmentCaptureTexture", &UAREnvironmentCaptureProbe::execGetEnvironmentCaptureTexture },
			{ "GetExtent", &UAREnvironmentCaptureProbe::execGetExtent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAREnvironmentCaptureProbe_GetEnvironmentCaptureTexture_Statics
	{
		struct AREnvironmentCaptureProbe_eventGetEnvironmentCaptureTexture_Parms
		{
			UAREnvironmentCaptureProbeTexture* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAREnvironmentCaptureProbe_GetEnvironmentCaptureTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AREnvironmentCaptureProbe_eventGetEnvironmentCaptureTexture_Parms, ReturnValue), Z_Construct_UClass_UAREnvironmentCaptureProbeTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAREnvironmentCaptureProbe_GetEnvironmentCaptureTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAREnvironmentCaptureProbe_GetEnvironmentCaptureTexture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAREnvironmentCaptureProbe_GetEnvironmentCaptureTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Environment Capture Probe" },
		{ "Comment", "/** @see EnvironmentCaptureTexture */" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
		{ "ToolTip", "@see EnvironmentCaptureTexture" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAREnvironmentCaptureProbe_GetEnvironmentCaptureTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAREnvironmentCaptureProbe, nullptr, "GetEnvironmentCaptureTexture", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAREnvironmentCaptureProbe_GetEnvironmentCaptureTexture_Statics::AREnvironmentCaptureProbe_eventGetEnvironmentCaptureTexture_Parms), Z_Construct_UFunction_UAREnvironmentCaptureProbe_GetEnvironmentCaptureTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAREnvironmentCaptureProbe_GetEnvironmentCaptureTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAREnvironmentCaptureProbe_GetEnvironmentCaptureTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAREnvironmentCaptureProbe_GetEnvironmentCaptureTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAREnvironmentCaptureProbe_GetEnvironmentCaptureTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAREnvironmentCaptureProbe_GetEnvironmentCaptureTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAREnvironmentCaptureProbe_GetExtent_Statics
	{
		struct AREnvironmentCaptureProbe_eventGetExtent_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAREnvironmentCaptureProbe_GetExtent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AREnvironmentCaptureProbe_eventGetExtent_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAREnvironmentCaptureProbe_GetExtent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAREnvironmentCaptureProbe_GetExtent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAREnvironmentCaptureProbe_GetExtent_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Environment Capture Probe" },
		{ "Comment", "/** @see Extent */" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
		{ "ToolTip", "@see Extent" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAREnvironmentCaptureProbe_GetExtent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAREnvironmentCaptureProbe, nullptr, "GetExtent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAREnvironmentCaptureProbe_GetExtent_Statics::AREnvironmentCaptureProbe_eventGetExtent_Parms), Z_Construct_UFunction_UAREnvironmentCaptureProbe_GetExtent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAREnvironmentCaptureProbe_GetExtent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAREnvironmentCaptureProbe_GetExtent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAREnvironmentCaptureProbe_GetExtent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAREnvironmentCaptureProbe_GetExtent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAREnvironmentCaptureProbe_GetExtent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAREnvironmentCaptureProbe);
	UClass* Z_Construct_UClass_UAREnvironmentCaptureProbe_NoRegister()
	{
		return UAREnvironmentCaptureProbe::StaticClass();
	}
	struct Z_Construct_UClass_UAREnvironmentCaptureProbe_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Extent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Extent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnvironmentCaptureTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EnvironmentCaptureTexture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAREnvironmentCaptureProbe_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UARTrackedGeometry,
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAREnvironmentCaptureProbe_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAREnvironmentCaptureProbe_GetEnvironmentCaptureTexture, "GetEnvironmentCaptureTexture" }, // 3143974122
		{ &Z_Construct_UFunction_UAREnvironmentCaptureProbe_GetExtent, "GetExtent" }, // 3855423516
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAREnvironmentCaptureProbe_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** A tracked environment texture probe that gives you a cube map for reflections */" },
		{ "IncludePath", "ARTrackable.h" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
		{ "ToolTip", "A tracked environment texture probe that gives you a cube map for reflections" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAREnvironmentCaptureProbe_Statics::NewProp_Extent_MetaData[] = {
		{ "Comment", "/** The size of area this probe covers */" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
		{ "ToolTip", "The size of area this probe covers" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAREnvironmentCaptureProbe_Statics::NewProp_Extent = { "Extent", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAREnvironmentCaptureProbe, Extent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UAREnvironmentCaptureProbe_Statics::NewProp_Extent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAREnvironmentCaptureProbe_Statics::NewProp_Extent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAREnvironmentCaptureProbe_Statics::NewProp_EnvironmentCaptureTexture_MetaData[] = {
		{ "Comment", "/** The cube map of the reflected environment */" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
		{ "ToolTip", "The cube map of the reflected environment" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAREnvironmentCaptureProbe_Statics::NewProp_EnvironmentCaptureTexture = { "EnvironmentCaptureTexture", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAREnvironmentCaptureProbe, EnvironmentCaptureTexture), Z_Construct_UClass_UAREnvironmentCaptureProbeTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAREnvironmentCaptureProbe_Statics::NewProp_EnvironmentCaptureTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAREnvironmentCaptureProbe_Statics::NewProp_EnvironmentCaptureTexture_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAREnvironmentCaptureProbe_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAREnvironmentCaptureProbe_Statics::NewProp_Extent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAREnvironmentCaptureProbe_Statics::NewProp_EnvironmentCaptureTexture,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAREnvironmentCaptureProbe_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAREnvironmentCaptureProbe>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAREnvironmentCaptureProbe_Statics::ClassParams = {
		&UAREnvironmentCaptureProbe::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAREnvironmentCaptureProbe_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAREnvironmentCaptureProbe_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAREnvironmentCaptureProbe_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAREnvironmentCaptureProbe_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAREnvironmentCaptureProbe()
	{
		if (!Z_Registration_Info_UClass_UAREnvironmentCaptureProbe.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAREnvironmentCaptureProbe.OuterSingleton, Z_Construct_UClass_UAREnvironmentCaptureProbe_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAREnvironmentCaptureProbe.OuterSingleton;
	}
	template<> AUGMENTEDREALITY_API UClass* StaticClass<UAREnvironmentCaptureProbe>()
	{
		return UAREnvironmentCaptureProbe::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAREnvironmentCaptureProbe);
	UAREnvironmentCaptureProbe::~UAREnvironmentCaptureProbe() {}
	DEFINE_FUNCTION(UARTrackedObject::execGetDetectedObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UARCandidateObject**)Z_Param__Result=P_THIS->GetDetectedObject();
		P_NATIVE_END;
	}
	void UARTrackedObject::StaticRegisterNativesUARTrackedObject()
	{
		UClass* Class = UARTrackedObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDetectedObject", &UARTrackedObject::execGetDetectedObject },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UARTrackedObject_GetDetectedObject_Statics
	{
		struct ARTrackedObject_eventGetDetectedObject_Parms
		{
			UARCandidateObject* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARTrackedObject_GetDetectedObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARTrackedObject_eventGetDetectedObject_Parms, ReturnValue), Z_Construct_UClass_UARCandidateObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARTrackedObject_GetDetectedObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARTrackedObject_GetDetectedObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARTrackedObject_GetDetectedObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Object Detection" },
		{ "Comment", "/** @see DetectedObject */" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
		{ "ToolTip", "@see DetectedObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARTrackedObject_GetDetectedObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARTrackedObject, nullptr, "GetDetectedObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARTrackedObject_GetDetectedObject_Statics::ARTrackedObject_eventGetDetectedObject_Parms), Z_Construct_UFunction_UARTrackedObject_GetDetectedObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARTrackedObject_GetDetectedObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARTrackedObject_GetDetectedObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARTrackedObject_GetDetectedObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARTrackedObject_GetDetectedObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARTrackedObject_GetDetectedObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UARTrackedObject);
	UClass* Z_Construct_UClass_UARTrackedObject_NoRegister()
	{
		return UARTrackedObject::StaticClass();
	}
	struct Z_Construct_UClass_UARTrackedObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DetectedObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DetectedObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARTrackedObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UARTrackedGeometry,
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UARTrackedObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UARTrackedObject_GetDetectedObject, "GetDetectedObject" }, // 1065077541
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARTrackedObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ARTrackable.h" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARTrackedObject_Statics::NewProp_DetectedObject_MetaData[] = {
		{ "Comment", "/** The candidate object that was detected in the scene */" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
		{ "ToolTip", "The candidate object that was detected in the scene" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UARTrackedObject_Statics::NewProp_DetectedObject = { "DetectedObject", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARTrackedObject, DetectedObject), Z_Construct_UClass_UARCandidateObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UARTrackedObject_Statics::NewProp_DetectedObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARTrackedObject_Statics::NewProp_DetectedObject_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UARTrackedObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARTrackedObject_Statics::NewProp_DetectedObject,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARTrackedObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARTrackedObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UARTrackedObject_Statics::ClassParams = {
		&UARTrackedObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UARTrackedObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UARTrackedObject_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UARTrackedObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UARTrackedObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARTrackedObject()
	{
		if (!Z_Registration_Info_UClass_UARTrackedObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UARTrackedObject.OuterSingleton, Z_Construct_UClass_UARTrackedObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UARTrackedObject.OuterSingleton;
	}
	template<> AUGMENTEDREALITY_API UClass* StaticClass<UARTrackedObject>()
	{
		return UARTrackedObject::StaticClass();
	}
	UARTrackedObject::UARTrackedObject() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARTrackedObject);
	UARTrackedObject::~UARTrackedObject() {}
	DEFINE_FUNCTION(UARTrackedPose::execGetTrackedPoseData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FARPose3D*)Z_Param__Result=P_THIS->GetTrackedPoseData();
		P_NATIVE_END;
	}
	void UARTrackedPose::StaticRegisterNativesUARTrackedPose()
	{
		UClass* Class = UARTrackedPose::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTrackedPoseData", &UARTrackedPose::execGetTrackedPoseData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UARTrackedPose_GetTrackedPoseData_Statics
	{
		struct ARTrackedPose_eventGetTrackedPoseData_Parms
		{
			FARPose3D ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARTrackedPose_GetTrackedPoseData_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARTrackedPose_GetTrackedPoseData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARTrackedPose_eventGetTrackedPoseData_Parms, ReturnValue), Z_Construct_UScriptStruct_FARPose3D, METADATA_PARAMS(Z_Construct_UFunction_UARTrackedPose_GetTrackedPoseData_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARTrackedPose_GetTrackedPoseData_Statics::NewProp_ReturnValue_MetaData)) }; // 3209860340
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARTrackedPose_GetTrackedPoseData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARTrackedPose_GetTrackedPoseData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARTrackedPose_GetTrackedPoseData_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Pose Tracking" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARTrackedPose_GetTrackedPoseData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARTrackedPose, nullptr, "GetTrackedPoseData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARTrackedPose_GetTrackedPoseData_Statics::ARTrackedPose_eventGetTrackedPoseData_Parms), Z_Construct_UFunction_UARTrackedPose_GetTrackedPoseData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARTrackedPose_GetTrackedPoseData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARTrackedPose_GetTrackedPoseData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARTrackedPose_GetTrackedPoseData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARTrackedPose_GetTrackedPoseData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARTrackedPose_GetTrackedPoseData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UARTrackedPose);
	UClass* Z_Construct_UClass_UARTrackedPose_NoRegister()
	{
		return UARTrackedPose::StaticClass();
	}
	struct Z_Construct_UClass_UARTrackedPose_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackedPose_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TrackedPose;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARTrackedPose_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UARTrackedGeometry,
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UARTrackedPose_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UARTrackedPose_GetTrackedPoseData, "GetTrackedPoseData" }, // 2879422439
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARTrackedPose_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ARTrackable.h" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARTrackedPose_Statics::NewProp_TrackedPose_MetaData[] = {
		{ "Comment", "/** The detailed info of the tracked pose */" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
		{ "ToolTip", "The detailed info of the tracked pose" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARTrackedPose_Statics::NewProp_TrackedPose = { "TrackedPose", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARTrackedPose, TrackedPose), Z_Construct_UScriptStruct_FARPose3D, METADATA_PARAMS(Z_Construct_UClass_UARTrackedPose_Statics::NewProp_TrackedPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARTrackedPose_Statics::NewProp_TrackedPose_MetaData)) }; // 3209860340
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UARTrackedPose_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARTrackedPose_Statics::NewProp_TrackedPose,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARTrackedPose_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARTrackedPose>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UARTrackedPose_Statics::ClassParams = {
		&UARTrackedPose::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UARTrackedPose_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UARTrackedPose_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UARTrackedPose_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UARTrackedPose_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARTrackedPose()
	{
		if (!Z_Registration_Info_UClass_UARTrackedPose.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UARTrackedPose.OuterSingleton, Z_Construct_UClass_UARTrackedPose_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UARTrackedPose.OuterSingleton;
	}
	template<> AUGMENTEDREALITY_API UClass* StaticClass<UARTrackedPose>()
	{
		return UARTrackedPose::StaticClass();
	}
	UARTrackedPose::UARTrackedPose() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARTrackedPose);
	UARTrackedPose::~UARTrackedPose() {}
	DEFINE_FUNCTION(UARMeshGeometry::execGetObjectClassificationAtLocation)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InWorldLocation);
		P_GET_ENUM_REF(EARObjectClassification,Z_Param_Out_OutClassification);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutClassificationLocation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxLocationDiff);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetObjectClassificationAtLocation(Z_Param_Out_InWorldLocation,(EARObjectClassification&)(Z_Param_Out_OutClassification),Z_Param_Out_OutClassificationLocation,Z_Param_MaxLocationDiff);
		P_NATIVE_END;
	}
	void UARMeshGeometry::StaticRegisterNativesUARMeshGeometry()
	{
		UClass* Class = UARMeshGeometry::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetObjectClassificationAtLocation", &UARMeshGeometry::execGetObjectClassificationAtLocation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UARMeshGeometry_GetObjectClassificationAtLocation_Statics
	{
		struct ARMeshGeometry_eventGetObjectClassificationAtLocation_Parms
		{
			FVector InWorldLocation;
			EARObjectClassification OutClassification;
			FVector OutClassificationLocation;
			float MaxLocationDiff;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InWorldLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InWorldLocation;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutClassification_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutClassification;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutClassificationLocation;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxLocationDiff;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARMeshGeometry_GetObjectClassificationAtLocation_Statics::NewProp_InWorldLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARMeshGeometry_GetObjectClassificationAtLocation_Statics::NewProp_InWorldLocation = { "InWorldLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARMeshGeometry_eventGetObjectClassificationAtLocation_Parms, InWorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UARMeshGeometry_GetObjectClassificationAtLocation_Statics::NewProp_InWorldLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARMeshGeometry_GetObjectClassificationAtLocation_Statics::NewProp_InWorldLocation_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARMeshGeometry_GetObjectClassificationAtLocation_Statics::NewProp_OutClassification_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARMeshGeometry_GetObjectClassificationAtLocation_Statics::NewProp_OutClassification = { "OutClassification", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARMeshGeometry_eventGetObjectClassificationAtLocation_Parms, OutClassification), Z_Construct_UEnum_AugmentedReality_EARObjectClassification, METADATA_PARAMS(nullptr, 0) }; // 1555664985
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARMeshGeometry_GetObjectClassificationAtLocation_Statics::NewProp_OutClassificationLocation = { "OutClassificationLocation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARMeshGeometry_eventGetObjectClassificationAtLocation_Parms, OutClassificationLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UARMeshGeometry_GetObjectClassificationAtLocation_Statics::NewProp_MaxLocationDiff = { "MaxLocationDiff", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARMeshGeometry_eventGetObjectClassificationAtLocation_Parms, MaxLocationDiff), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UARMeshGeometry_GetObjectClassificationAtLocation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ARMeshGeometry_eventGetObjectClassificationAtLocation_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UARMeshGeometry_GetObjectClassificationAtLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ARMeshGeometry_eventGetObjectClassificationAtLocation_Parms), &Z_Construct_UFunction_UARMeshGeometry_GetObjectClassificationAtLocation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARMeshGeometry_GetObjectClassificationAtLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARMeshGeometry_GetObjectClassificationAtLocation_Statics::NewProp_InWorldLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARMeshGeometry_GetObjectClassificationAtLocation_Statics::NewProp_OutClassification_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARMeshGeometry_GetObjectClassificationAtLocation_Statics::NewProp_OutClassification,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARMeshGeometry_GetObjectClassificationAtLocation_Statics::NewProp_OutClassificationLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARMeshGeometry_GetObjectClassificationAtLocation_Statics::NewProp_MaxLocationDiff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARMeshGeometry_GetObjectClassificationAtLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARMeshGeometry_GetObjectClassificationAtLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Classification" },
		{ "Comment", "/**\n\x09 * Try to determine the classification of the object at a world space location\n\x09 * @InWorldLocation: the world location where the classification is needed\n\x09 * @OutClassification: the classification result\n\x09 * @OutClassificationLocation: the world location at where the classification is calculated\n\x09 * @MaxLocationDiff: the max distance between the specified world location and the classification location\n\x09 * @return: whether a valid classification result is calculated\n\x09 */" },
		{ "CPP_Default_MaxLocationDiff", "10.000000" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
		{ "ToolTip", "Try to determine the classification of the object at a world space location\n@InWorldLocation: the world location where the classification is needed\n@OutClassification: the classification result\n@OutClassificationLocation: the world location at where the classification is calculated\n@MaxLocationDiff: the max distance between the specified world location and the classification location\n@return: whether a valid classification result is calculated" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARMeshGeometry_GetObjectClassificationAtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARMeshGeometry, nullptr, "GetObjectClassificationAtLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARMeshGeometry_GetObjectClassificationAtLocation_Statics::ARMeshGeometry_eventGetObjectClassificationAtLocation_Parms), Z_Construct_UFunction_UARMeshGeometry_GetObjectClassificationAtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARMeshGeometry_GetObjectClassificationAtLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARMeshGeometry_GetObjectClassificationAtLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARMeshGeometry_GetObjectClassificationAtLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARMeshGeometry_GetObjectClassificationAtLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARMeshGeometry_GetObjectClassificationAtLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UARMeshGeometry);
	UClass* Z_Construct_UClass_UARMeshGeometry_NoRegister()
	{
		return UARMeshGeometry::StaticClass();
	}
	struct Z_Construct_UClass_UARMeshGeometry_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARMeshGeometry_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UARTrackedGeometry,
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UARMeshGeometry_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UARMeshGeometry_GetObjectClassificationAtLocation, "GetObjectClassificationAtLocation" }, // 2656968701
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARMeshGeometry_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ARTrackable.h" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARMeshGeometry_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARMeshGeometry>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UARMeshGeometry_Statics::ClassParams = {
		&UARMeshGeometry::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UARMeshGeometry_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UARMeshGeometry_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARMeshGeometry()
	{
		if (!Z_Registration_Info_UClass_UARMeshGeometry.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UARMeshGeometry.OuterSingleton, Z_Construct_UClass_UARMeshGeometry_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UARMeshGeometry.OuterSingleton;
	}
	template<> AUGMENTEDREALITY_API UClass* StaticClass<UARMeshGeometry>()
	{
		return UARMeshGeometry::StaticClass();
	}
	UARMeshGeometry::UARMeshGeometry() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARMeshGeometry);
	UARMeshGeometry::~UARMeshGeometry() {}
	DEFINE_FUNCTION(UARGeoAnchor::execGetAltitudeSource)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EARAltitudeSource*)Z_Param__Result=P_THIS->GetAltitudeSource();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARGeoAnchor::execGetAltitudeMeters)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAltitudeMeters();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARGeoAnchor::execGetLatitude)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetLatitude();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARGeoAnchor::execGetLongitude)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetLongitude();
		P_NATIVE_END;
	}
	void UARGeoAnchor::StaticRegisterNativesUARGeoAnchor()
	{
		UClass* Class = UARGeoAnchor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAltitudeMeters", &UARGeoAnchor::execGetAltitudeMeters },
			{ "GetAltitudeSource", &UARGeoAnchor::execGetAltitudeSource },
			{ "GetLatitude", &UARGeoAnchor::execGetLatitude },
			{ "GetLongitude", &UARGeoAnchor::execGetLongitude },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UARGeoAnchor_GetAltitudeMeters_Statics
	{
		struct ARGeoAnchor_eventGetAltitudeMeters_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UARGeoAnchor_GetAltitudeMeters_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARGeoAnchor_eventGetAltitudeMeters_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARGeoAnchor_GetAltitudeMeters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARGeoAnchor_GetAltitudeMeters_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARGeoAnchor_GetAltitudeMeters_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Geo Tracking" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARGeoAnchor_GetAltitudeMeters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARGeoAnchor, nullptr, "GetAltitudeMeters", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARGeoAnchor_GetAltitudeMeters_Statics::ARGeoAnchor_eventGetAltitudeMeters_Parms), Z_Construct_UFunction_UARGeoAnchor_GetAltitudeMeters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARGeoAnchor_GetAltitudeMeters_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARGeoAnchor_GetAltitudeMeters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARGeoAnchor_GetAltitudeMeters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARGeoAnchor_GetAltitudeMeters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARGeoAnchor_GetAltitudeMeters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARGeoAnchor_GetAltitudeSource_Statics
	{
		struct ARGeoAnchor_eventGetAltitudeSource_Parms
		{
			EARAltitudeSource ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UARGeoAnchor_GetAltitudeSource_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UARGeoAnchor_GetAltitudeSource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARGeoAnchor_eventGetAltitudeSource_Parms, ReturnValue), Z_Construct_UEnum_AugmentedReality_EARAltitudeSource, METADATA_PARAMS(nullptr, 0) }; // 962382879
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARGeoAnchor_GetAltitudeSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARGeoAnchor_GetAltitudeSource_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARGeoAnchor_GetAltitudeSource_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARGeoAnchor_GetAltitudeSource_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Geo Tracking" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARGeoAnchor_GetAltitudeSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARGeoAnchor, nullptr, "GetAltitudeSource", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARGeoAnchor_GetAltitudeSource_Statics::ARGeoAnchor_eventGetAltitudeSource_Parms), Z_Construct_UFunction_UARGeoAnchor_GetAltitudeSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARGeoAnchor_GetAltitudeSource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARGeoAnchor_GetAltitudeSource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARGeoAnchor_GetAltitudeSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARGeoAnchor_GetAltitudeSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARGeoAnchor_GetAltitudeSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARGeoAnchor_GetLatitude_Statics
	{
		struct ARGeoAnchor_eventGetLatitude_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UARGeoAnchor_GetLatitude_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARGeoAnchor_eventGetLatitude_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARGeoAnchor_GetLatitude_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARGeoAnchor_GetLatitude_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARGeoAnchor_GetLatitude_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Geo Tracking" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARGeoAnchor_GetLatitude_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARGeoAnchor, nullptr, "GetLatitude", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARGeoAnchor_GetLatitude_Statics::ARGeoAnchor_eventGetLatitude_Parms), Z_Construct_UFunction_UARGeoAnchor_GetLatitude_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARGeoAnchor_GetLatitude_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARGeoAnchor_GetLatitude_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARGeoAnchor_GetLatitude_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARGeoAnchor_GetLatitude()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARGeoAnchor_GetLatitude_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARGeoAnchor_GetLongitude_Statics
	{
		struct ARGeoAnchor_eventGetLongitude_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UARGeoAnchor_GetLongitude_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARGeoAnchor_eventGetLongitude_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARGeoAnchor_GetLongitude_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARGeoAnchor_GetLongitude_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARGeoAnchor_GetLongitude_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR AugmentedReality|Geo Tracking" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARGeoAnchor_GetLongitude_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARGeoAnchor, nullptr, "GetLongitude", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARGeoAnchor_GetLongitude_Statics::ARGeoAnchor_eventGetLongitude_Parms), Z_Construct_UFunction_UARGeoAnchor_GetLongitude_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARGeoAnchor_GetLongitude_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARGeoAnchor_GetLongitude_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARGeoAnchor_GetLongitude_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARGeoAnchor_GetLongitude()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARGeoAnchor_GetLongitude_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UARGeoAnchor);
	UClass* Z_Construct_UClass_UARGeoAnchor_NoRegister()
	{
		return UARGeoAnchor::StaticClass();
	}
	struct Z_Construct_UClass_UARGeoAnchor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARGeoAnchor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UARTrackedGeometry,
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UARGeoAnchor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UARGeoAnchor_GetAltitudeMeters, "GetAltitudeMeters" }, // 1889477570
		{ &Z_Construct_UFunction_UARGeoAnchor_GetAltitudeSource, "GetAltitudeSource" }, // 1332592193
		{ &Z_Construct_UFunction_UARGeoAnchor_GetLatitude, "GetLatitude" }, // 2932977852
		{ &Z_Construct_UFunction_UARGeoAnchor_GetLongitude, "GetLongitude" }, // 2000214435
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARGeoAnchor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ARTrackable.h" },
		{ "ModuleRelativePath", "Public/ARTrackable.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARGeoAnchor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARGeoAnchor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UARGeoAnchor_Statics::ClassParams = {
		&UARGeoAnchor::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UARGeoAnchor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UARGeoAnchor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARGeoAnchor()
	{
		if (!Z_Registration_Info_UClass_UARGeoAnchor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UARGeoAnchor.OuterSingleton, Z_Construct_UClass_UARGeoAnchor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UARGeoAnchor.OuterSingleton;
	}
	template<> AUGMENTEDREALITY_API UClass* StaticClass<UARGeoAnchor>()
	{
		return UARGeoAnchor::StaticClass();
	}
	UARGeoAnchor::UARGeoAnchor() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARGeoAnchor);
	UARGeoAnchor::~UARGeoAnchor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_Statics::EnumInfo[] = {
		{ EARFaceTrackingDirection_StaticEnum, TEXT("EARFaceTrackingDirection"), &Z_Registration_Info_UEnum_EARFaceTrackingDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3500389980U) },
		{ EARFaceBlendShape_StaticEnum, TEXT("EARFaceBlendShape"), &Z_Registration_Info_UEnum_EARFaceBlendShape, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2178612967U) },
		{ EAREye_StaticEnum, TEXT("EAREye"), &Z_Registration_Info_UEnum_EAREye, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1854350705U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UARTrackedGeometry, UARTrackedGeometry::StaticClass, TEXT("UARTrackedGeometry"), &Z_Registration_Info_UClass_UARTrackedGeometry, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UARTrackedGeometry), 3842202668U) },
		{ Z_Construct_UClass_UARPlaneGeometry, UARPlaneGeometry::StaticClass, TEXT("UARPlaneGeometry"), &Z_Registration_Info_UClass_UARPlaneGeometry, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UARPlaneGeometry), 1444840844U) },
		{ Z_Construct_UClass_UARTrackedPoint, UARTrackedPoint::StaticClass, TEXT("UARTrackedPoint"), &Z_Registration_Info_UClass_UARTrackedPoint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UARTrackedPoint), 4055039249U) },
		{ Z_Construct_UClass_UARTrackedImage, UARTrackedImage::StaticClass, TEXT("UARTrackedImage"), &Z_Registration_Info_UClass_UARTrackedImage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UARTrackedImage), 1955744949U) },
		{ Z_Construct_UClass_UARTrackedQRCode, UARTrackedQRCode::StaticClass, TEXT("UARTrackedQRCode"), &Z_Registration_Info_UClass_UARTrackedQRCode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UARTrackedQRCode), 3622336712U) },
		{ Z_Construct_UClass_UARFaceGeometry, UARFaceGeometry::StaticClass, TEXT("UARFaceGeometry"), &Z_Registration_Info_UClass_UARFaceGeometry, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UARFaceGeometry), 4163704084U) },
		{ Z_Construct_UClass_UAREnvironmentCaptureProbe, UAREnvironmentCaptureProbe::StaticClass, TEXT("UAREnvironmentCaptureProbe"), &Z_Registration_Info_UClass_UAREnvironmentCaptureProbe, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAREnvironmentCaptureProbe), 339375883U) },
		{ Z_Construct_UClass_UARTrackedObject, UARTrackedObject::StaticClass, TEXT("UARTrackedObject"), &Z_Registration_Info_UClass_UARTrackedObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UARTrackedObject), 839843120U) },
		{ Z_Construct_UClass_UARTrackedPose, UARTrackedPose::StaticClass, TEXT("UARTrackedPose"), &Z_Registration_Info_UClass_UARTrackedPose, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UARTrackedPose), 2260975996U) },
		{ Z_Construct_UClass_UARMeshGeometry, UARMeshGeometry::StaticClass, TEXT("UARMeshGeometry"), &Z_Registration_Info_UClass_UARMeshGeometry, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UARMeshGeometry), 1330717677U) },
		{ Z_Construct_UClass_UARGeoAnchor, UARGeoAnchor::StaticClass, TEXT("UARGeoAnchor"), &Z_Registration_Info_UClass_UARGeoAnchor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UARGeoAnchor), 3999937483U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_2447298927(TEXT("/Script/AugmentedReality"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
