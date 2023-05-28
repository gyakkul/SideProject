// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VirtualCameraMovement.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVirtualCameraMovement() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	UPackage* Z_Construct_UPackage__Script_VirtualCamera();
	VIRTUALCAMERA_API UClass* Z_Construct_UClass_UVirtualCameraMovement();
	VIRTUALCAMERA_API UClass* Z_Construct_UClass_UVirtualCameraMovement_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UVirtualCameraMovement::execSetRotationScale)
	{
		P_GET_STRUCT(FRotator,Z_Param_RotationScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRotationScale(Z_Param_RotationScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVirtualCameraMovement::execSetLocationScale)
	{
		P_GET_STRUCT(FVector,Z_Param_LocationScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLocationScale(Z_Param_LocationScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVirtualCameraMovement::execResetLocalAxis)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetLocalAxis();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVirtualCameraMovement::execSetLocalAxis)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_InTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLocalAxis(Z_Param_Out_InTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVirtualCameraMovement::execGetTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetTransform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVirtualCameraMovement::execSetLocalTransform)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Transform);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLocalTransform(Z_Param_Out_Transform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVirtualCameraMovement::execGetLocalTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetLocalTransform();
		P_NATIVE_END;
	}
	void UVirtualCameraMovement::StaticRegisterNativesUVirtualCameraMovement()
	{
		UClass* Class = UVirtualCameraMovement::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLocalTransform", &UVirtualCameraMovement::execGetLocalTransform },
			{ "GetTransform", &UVirtualCameraMovement::execGetTransform },
			{ "ResetLocalAxis", &UVirtualCameraMovement::execResetLocalAxis },
			{ "SetLocalAxis", &UVirtualCameraMovement::execSetLocalAxis },
			{ "SetLocalTransform", &UVirtualCameraMovement::execSetLocalTransform },
			{ "SetLocationScale", &UVirtualCameraMovement::execSetLocationScale },
			{ "SetRotationScale", &UVirtualCameraMovement::execSetRotationScale },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVirtualCameraMovement_GetLocalTransform_Statics
	{
		struct VirtualCameraMovement_eventGetLocalTransform_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVirtualCameraMovement_GetLocalTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraMovement_eventGetLocalTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualCameraMovement_GetLocalTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCameraMovement_GetLocalTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraMovement_GetLocalTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera" },
		{ "Comment", "/** Get the unmodified local transform. */" },
		{ "ModuleRelativePath", "Public/VirtualCameraMovement.h" },
		{ "ToolTip", "Get the unmodified local transform." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualCameraMovement_GetLocalTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCameraMovement, nullptr, "GetLocalTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVirtualCameraMovement_GetLocalTransform_Statics::VirtualCameraMovement_eventGetLocalTransform_Parms), Z_Construct_UFunction_UVirtualCameraMovement_GetLocalTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraMovement_GetLocalTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVirtualCameraMovement_GetLocalTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraMovement_GetLocalTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVirtualCameraMovement_GetLocalTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVirtualCameraMovement_GetLocalTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVirtualCameraMovement_GetTransform_Statics
	{
		struct VirtualCameraMovement_eventGetTransform_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVirtualCameraMovement_GetTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraMovement_eventGetTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualCameraMovement_GetTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCameraMovement_GetTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraMovement_GetTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera" },
		{ "Comment", "/** Get the modified transform. */" },
		{ "ModuleRelativePath", "Public/VirtualCameraMovement.h" },
		{ "ToolTip", "Get the modified transform." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualCameraMovement_GetTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCameraMovement, nullptr, "GetTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVirtualCameraMovement_GetTransform_Statics::VirtualCameraMovement_eventGetTransform_Parms), Z_Construct_UFunction_UVirtualCameraMovement_GetTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraMovement_GetTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVirtualCameraMovement_GetTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraMovement_GetTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVirtualCameraMovement_GetTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVirtualCameraMovement_GetTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVirtualCameraMovement_ResetLocalAxis_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraMovement_ResetLocalAxis_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera" },
		{ "Comment", "/** Remove the axis transform, all scaling factor will be calculated from the origin. */" },
		{ "ModuleRelativePath", "Public/VirtualCameraMovement.h" },
		{ "ToolTip", "Remove the axis transform, all scaling factor will be calculated from the origin." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualCameraMovement_ResetLocalAxis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCameraMovement, nullptr, "ResetLocalAxis", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVirtualCameraMovement_ResetLocalAxis_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraMovement_ResetLocalAxis_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVirtualCameraMovement_ResetLocalAxis()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVirtualCameraMovement_ResetLocalAxis_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVirtualCameraMovement_SetLocalAxis_Statics
	{
		struct VirtualCameraMovement_eventSetLocalAxis_Parms
		{
			FTransform InTransform;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InTransform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraMovement_SetLocalAxis_Statics::NewProp_InTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVirtualCameraMovement_SetLocalAxis_Statics::NewProp_InTransform = { "InTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraMovement_eventSetLocalAxis_Parms, InTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UVirtualCameraMovement_SetLocalAxis_Statics::NewProp_InTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraMovement_SetLocalAxis_Statics::NewProp_InTransform_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualCameraMovement_SetLocalAxis_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCameraMovement_SetLocalAxis_Statics::NewProp_InTransform,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraMovement_SetLocalAxis_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera" },
		{ "Comment", "/** Set the transform from where the scaling factor will be calculated from. */" },
		{ "ModuleRelativePath", "Public/VirtualCameraMovement.h" },
		{ "ToolTip", "Set the transform from where the scaling factor will be calculated from." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualCameraMovement_SetLocalAxis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCameraMovement, nullptr, "SetLocalAxis", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVirtualCameraMovement_SetLocalAxis_Statics::VirtualCameraMovement_eventSetLocalAxis_Parms), Z_Construct_UFunction_UVirtualCameraMovement_SetLocalAxis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraMovement_SetLocalAxis_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVirtualCameraMovement_SetLocalAxis_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraMovement_SetLocalAxis_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVirtualCameraMovement_SetLocalAxis()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVirtualCameraMovement_SetLocalAxis_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVirtualCameraMovement_SetLocalTransform_Statics
	{
		struct VirtualCameraMovement_eventSetLocalTransform_Parms
		{
			FTransform Transform;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraMovement_SetLocalTransform_Statics::NewProp_Transform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVirtualCameraMovement_SetLocalTransform_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraMovement_eventSetLocalTransform_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UVirtualCameraMovement_SetLocalTransform_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraMovement_SetLocalTransform_Statics::NewProp_Transform_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualCameraMovement_SetLocalTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCameraMovement_SetLocalTransform_Statics::NewProp_Transform,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraMovement_SetLocalTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera" },
		{ "Comment", "/** Set the local transform that will be modified by the scaling factor. */" },
		{ "ModuleRelativePath", "Public/VirtualCameraMovement.h" },
		{ "ToolTip", "Set the local transform that will be modified by the scaling factor." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualCameraMovement_SetLocalTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCameraMovement, nullptr, "SetLocalTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVirtualCameraMovement_SetLocalTransform_Statics::VirtualCameraMovement_eventSetLocalTransform_Parms), Z_Construct_UFunction_UVirtualCameraMovement_SetLocalTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraMovement_SetLocalTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVirtualCameraMovement_SetLocalTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraMovement_SetLocalTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVirtualCameraMovement_SetLocalTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVirtualCameraMovement_SetLocalTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVirtualCameraMovement_SetLocationScale_Statics
	{
		struct VirtualCameraMovement_eventSetLocationScale_Parms
		{
			FVector LocationScale;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocationScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVirtualCameraMovement_SetLocationScale_Statics::NewProp_LocationScale = { "LocationScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraMovement_eventSetLocationScale_Parms, LocationScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualCameraMovement_SetLocationScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCameraMovement_SetLocationScale_Statics::NewProp_LocationScale,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraMovement_SetLocationScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera" },
		{ "Comment", "/** Scale the local location of the local transform from the local axis. */" },
		{ "ModuleRelativePath", "Public/VirtualCameraMovement.h" },
		{ "ToolTip", "Scale the local location of the local transform from the local axis." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualCameraMovement_SetLocationScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCameraMovement, nullptr, "SetLocationScale", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVirtualCameraMovement_SetLocationScale_Statics::VirtualCameraMovement_eventSetLocationScale_Parms), Z_Construct_UFunction_UVirtualCameraMovement_SetLocationScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraMovement_SetLocationScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVirtualCameraMovement_SetLocationScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraMovement_SetLocationScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVirtualCameraMovement_SetLocationScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVirtualCameraMovement_SetLocationScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVirtualCameraMovement_SetRotationScale_Statics
	{
		struct VirtualCameraMovement_eventSetRotationScale_Parms
		{
			FRotator RotationScale;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotationScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVirtualCameraMovement_SetRotationScale_Statics::NewProp_RotationScale = { "RotationScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraMovement_eventSetRotationScale_Parms, RotationScale), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualCameraMovement_SetRotationScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCameraMovement_SetRotationScale_Statics::NewProp_RotationScale,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraMovement_SetRotationScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera" },
		{ "Comment", "/** Scale the local rotation of the local transform from the local axis. */" },
		{ "ModuleRelativePath", "Public/VirtualCameraMovement.h" },
		{ "ToolTip", "Scale the local rotation of the local transform from the local axis." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualCameraMovement_SetRotationScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCameraMovement, nullptr, "SetRotationScale", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVirtualCameraMovement_SetRotationScale_Statics::VirtualCameraMovement_eventSetRotationScale_Parms), Z_Construct_UFunction_UVirtualCameraMovement_SetRotationScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraMovement_SetRotationScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVirtualCameraMovement_SetRotationScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraMovement_SetRotationScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVirtualCameraMovement_SetRotationScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVirtualCameraMovement_SetRotationScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVirtualCameraMovement);
	UClass* Z_Construct_UClass_UVirtualCameraMovement_NoRegister()
	{
		return UVirtualCameraMovement::StaticClass();
	}
	struct Z_Construct_UClass_UVirtualCameraMovement_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVirtualCameraMovement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VirtualCamera,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVirtualCameraMovement_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVirtualCameraMovement_GetLocalTransform, "GetLocalTransform" }, // 1945298655
		{ &Z_Construct_UFunction_UVirtualCameraMovement_GetTransform, "GetTransform" }, // 1674282622
		{ &Z_Construct_UFunction_UVirtualCameraMovement_ResetLocalAxis, "ResetLocalAxis" }, // 2899149705
		{ &Z_Construct_UFunction_UVirtualCameraMovement_SetLocalAxis, "SetLocalAxis" }, // 1949030942
		{ &Z_Construct_UFunction_UVirtualCameraMovement_SetLocalTransform, "SetLocalTransform" }, // 1189282452
		{ &Z_Construct_UFunction_UVirtualCameraMovement_SetLocationScale, "SetLocationScale" }, // 2592104709
		{ &Z_Construct_UFunction_UVirtualCameraMovement_SetRotationScale, "SetRotationScale" }, // 453868240
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualCameraMovement_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A class to handle the virtual Camera transform.\n */" },
		{ "IncludePath", "VirtualCameraMovement.h" },
		{ "ModuleRelativePath", "Public/VirtualCameraMovement.h" },
		{ "ToolTip", "A class to handle the virtual Camera transform." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVirtualCameraMovement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVirtualCameraMovement>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVirtualCameraMovement_Statics::ClassParams = {
		&UVirtualCameraMovement::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVirtualCameraMovement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualCameraMovement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVirtualCameraMovement()
	{
		if (!Z_Registration_Info_UClass_UVirtualCameraMovement.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVirtualCameraMovement.OuterSingleton, Z_Construct_UClass_UVirtualCameraMovement_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVirtualCameraMovement.OuterSingleton;
	}
	template<> VIRTUALCAMERA_API UClass* StaticClass<UVirtualCameraMovement>()
	{
		return UVirtualCameraMovement::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVirtualCameraMovement);
	UVirtualCameraMovement::~UVirtualCameraMovement() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraMovement_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraMovement_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVirtualCameraMovement, UVirtualCameraMovement::StaticClass, TEXT("UVirtualCameraMovement"), &Z_Registration_Info_UClass_UVirtualCameraMovement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVirtualCameraMovement), 1428132294U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraMovement_h_1421181325(TEXT("/Script/VirtualCamera"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraMovement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraMovement_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
