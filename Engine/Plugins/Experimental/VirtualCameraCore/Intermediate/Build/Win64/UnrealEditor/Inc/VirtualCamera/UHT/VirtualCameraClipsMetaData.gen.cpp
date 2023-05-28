// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LevelSequence/VirtualCameraClipsMetaData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVirtualCameraClipsMetaData() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequenceMetaData_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VirtualCamera();
	VIRTUALCAMERA_API UClass* Z_Construct_UClass_UVirtualCameraClipsMetaData();
	VIRTUALCAMERA_API UClass* Z_Construct_UClass_UVirtualCameraClipsMetaData_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UVirtualCameraClipsMetaData::execSetIsACineCameraRecording)
	{
		P_GET_UBOOL(Z_Param_bInIsACineCameraRecording);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsACineCameraRecording(Z_Param_bInIsACineCameraRecording);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVirtualCameraClipsMetaData::execSetDisplayRate)
	{
		P_GET_STRUCT(FFrameRate,Z_Param_InDisplayRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDisplayRate(Z_Param_InDisplayRate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVirtualCameraClipsMetaData::execSetLengthInFrames)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InLength);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLengthInFrames(Z_Param_InLength);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVirtualCameraClipsMetaData::execSetFrameCountEnd)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InFrame);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFrameCountEnd(Z_Param_InFrame);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVirtualCameraClipsMetaData::execSetFrameCountStart)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InFrame);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFrameCountStart(Z_Param_InFrame);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVirtualCameraClipsMetaData::execSetRecordedLevelName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InLevelName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRecordedLevelName(Z_Param_InLevelName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVirtualCameraClipsMetaData::execSetSelected)
	{
		P_GET_UBOOL(Z_Param_bInSelected);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSelected(Z_Param_bInSelected);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVirtualCameraClipsMetaData::execSetFocalLength)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InFocalLength);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFocalLength(Z_Param_InFocalLength);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVirtualCameraClipsMetaData::execGetIsACineCameraRecording)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsACineCameraRecording();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVirtualCameraClipsMetaData::execGetDisplayRate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFrameRate*)Z_Param__Result=P_THIS->GetDisplayRate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVirtualCameraClipsMetaData::execGetLengthInFrames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetLengthInFrames();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVirtualCameraClipsMetaData::execGetFrameCountEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetFrameCountEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVirtualCameraClipsMetaData::execGetFrameCountStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetFrameCountStart();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVirtualCameraClipsMetaData::execGetRecordedLevelName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetRecordedLevelName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVirtualCameraClipsMetaData::execGetSelected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetSelected();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVirtualCameraClipsMetaData::execGetFocalLength)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetFocalLength();
		P_NATIVE_END;
	}
	void UVirtualCameraClipsMetaData::StaticRegisterNativesUVirtualCameraClipsMetaData()
	{
		UClass* Class = UVirtualCameraClipsMetaData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDisplayRate", &UVirtualCameraClipsMetaData::execGetDisplayRate },
			{ "GetFocalLength", &UVirtualCameraClipsMetaData::execGetFocalLength },
			{ "GetFrameCountEnd", &UVirtualCameraClipsMetaData::execGetFrameCountEnd },
			{ "GetFrameCountStart", &UVirtualCameraClipsMetaData::execGetFrameCountStart },
			{ "GetIsACineCameraRecording", &UVirtualCameraClipsMetaData::execGetIsACineCameraRecording },
			{ "GetLengthInFrames", &UVirtualCameraClipsMetaData::execGetLengthInFrames },
			{ "GetRecordedLevelName", &UVirtualCameraClipsMetaData::execGetRecordedLevelName },
			{ "GetSelected", &UVirtualCameraClipsMetaData::execGetSelected },
			{ "SetDisplayRate", &UVirtualCameraClipsMetaData::execSetDisplayRate },
			{ "SetFocalLength", &UVirtualCameraClipsMetaData::execSetFocalLength },
			{ "SetFrameCountEnd", &UVirtualCameraClipsMetaData::execSetFrameCountEnd },
			{ "SetFrameCountStart", &UVirtualCameraClipsMetaData::execSetFrameCountStart },
			{ "SetIsACineCameraRecording", &UVirtualCameraClipsMetaData::execSetIsACineCameraRecording },
			{ "SetLengthInFrames", &UVirtualCameraClipsMetaData::execSetLengthInFrames },
			{ "SetRecordedLevelName", &UVirtualCameraClipsMetaData::execSetRecordedLevelName },
			{ "SetSelected", &UVirtualCameraClipsMetaData::execSetSelected },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetDisplayRate_Statics
	{
		struct FFrameRate
		{
			int32 Numerator;
			int32 Denominator;
		};

		struct VirtualCameraClipsMetaData_eventGetDisplayRate_Parms
		{
			FFrameRate ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetDisplayRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraClipsMetaData_eventGetDisplayRate_Parms, ReturnValue), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetDisplayRate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetDisplayRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetDisplayRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Clips" },
		{ "Comment", "/**\n\x09* @return The display rate of the clip. \n\x09*/" },
		{ "ModuleRelativePath", "Public/LevelSequence/VirtualCameraClipsMetaData.h" },
		{ "ToolTip", "@return The display rate of the clip." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetDisplayRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCameraClipsMetaData, nullptr, "GetDisplayRate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetDisplayRate_Statics::VirtualCameraClipsMetaData_eventGetDisplayRate_Parms), Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetDisplayRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetDisplayRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetDisplayRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetDisplayRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetDisplayRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetDisplayRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetFocalLength_Statics
	{
		struct VirtualCameraClipsMetaData_eventGetFocalLength_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetFocalLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraClipsMetaData_eventGetFocalLength_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetFocalLength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetFocalLength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetFocalLength_Statics::Function_MetaDataParams[] = {
		{ "Category", "Clips" },
		{ "Comment", "/**\n\x09 * @return The focal length for this clip\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSequence/VirtualCameraClipsMetaData.h" },
		{ "ToolTip", "@return The focal length for this clip" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetFocalLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCameraClipsMetaData, nullptr, "GetFocalLength", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetFocalLength_Statics::VirtualCameraClipsMetaData_eventGetFocalLength_Parms), Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetFocalLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetFocalLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetFocalLength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetFocalLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetFocalLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetFocalLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetFrameCountEnd_Statics
	{
		struct VirtualCameraClipsMetaData_eventGetFrameCountEnd_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetFrameCountEnd_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraClipsMetaData_eventGetFrameCountEnd_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetFrameCountEnd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetFrameCountEnd_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetFrameCountEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "Clips" },
		{ "Comment", "/**\n\x09* @return The final frame of the clip\n\x09*/" },
		{ "ModuleRelativePath", "Public/LevelSequence/VirtualCameraClipsMetaData.h" },
		{ "ToolTip", "@return The final frame of the clip" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetFrameCountEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCameraClipsMetaData, nullptr, "GetFrameCountEnd", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetFrameCountEnd_Statics::VirtualCameraClipsMetaData_eventGetFrameCountEnd_Parms), Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetFrameCountEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetFrameCountEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetFrameCountEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetFrameCountEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetFrameCountEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetFrameCountEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetFrameCountStart_Statics
	{
		struct VirtualCameraClipsMetaData_eventGetFrameCountStart_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetFrameCountStart_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraClipsMetaData_eventGetFrameCountStart_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetFrameCountStart_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetFrameCountStart_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetFrameCountStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "Clips" },
		{ "Comment", "/**\n\x09* @return The initial frame of the clip\n\x09*/" },
		{ "ModuleRelativePath", "Public/LevelSequence/VirtualCameraClipsMetaData.h" },
		{ "ToolTip", "@return The initial frame of the clip" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetFrameCountStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCameraClipsMetaData, nullptr, "GetFrameCountStart", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetFrameCountStart_Statics::VirtualCameraClipsMetaData_eventGetFrameCountStart_Parms), Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetFrameCountStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetFrameCountStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetFrameCountStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetFrameCountStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetFrameCountStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetFrameCountStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetIsACineCameraRecording_Statics
	{
		struct VirtualCameraClipsMetaData_eventGetIsACineCameraRecording_Parms
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
	void Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetIsACineCameraRecording_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VirtualCameraClipsMetaData_eventGetIsACineCameraRecording_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetIsACineCameraRecording_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VirtualCameraClipsMetaData_eventGetIsACineCameraRecording_Parms), &Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetIsACineCameraRecording_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetIsACineCameraRecording_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetIsACineCameraRecording_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetIsACineCameraRecording_Statics::Function_MetaDataParams[] = {
		{ "Category", "Clips" },
		{ "Comment", "/**\n\x09* @return Whether the clip was recorded by a CineCameraActor\n\x09*/" },
		{ "ModuleRelativePath", "Public/LevelSequence/VirtualCameraClipsMetaData.h" },
		{ "ToolTip", "@return Whether the clip was recorded by a CineCameraActor" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetIsACineCameraRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCameraClipsMetaData, nullptr, "GetIsACineCameraRecording", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetIsACineCameraRecording_Statics::VirtualCameraClipsMetaData_eventGetIsACineCameraRecording_Parms), Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetIsACineCameraRecording_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetIsACineCameraRecording_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetIsACineCameraRecording_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetIsACineCameraRecording_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetIsACineCameraRecording()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetIsACineCameraRecording_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetLengthInFrames_Statics
	{
		struct VirtualCameraClipsMetaData_eventGetLengthInFrames_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetLengthInFrames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraClipsMetaData_eventGetLengthInFrames_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetLengthInFrames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetLengthInFrames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetLengthInFrames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Clips" },
		{ "Comment", "/**\n\x09* @return The length in frames of the clip. \n\x09*/" },
		{ "ModuleRelativePath", "Public/LevelSequence/VirtualCameraClipsMetaData.h" },
		{ "ToolTip", "@return The length in frames of the clip." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetLengthInFrames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCameraClipsMetaData, nullptr, "GetLengthInFrames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetLengthInFrames_Statics::VirtualCameraClipsMetaData_eventGetLengthInFrames_Parms), Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetLengthInFrames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetLengthInFrames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetLengthInFrames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetLengthInFrames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetLengthInFrames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetLengthInFrames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetRecordedLevelName_Statics
	{
		struct VirtualCameraClipsMetaData_eventGetRecordedLevelName_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetRecordedLevelName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraClipsMetaData_eventGetRecordedLevelName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetRecordedLevelName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetRecordedLevelName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetRecordedLevelName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Clips" },
		{ "Comment", "/**\n\x09* @return The name of the clip's recorded level. \n\x09*/" },
		{ "ModuleRelativePath", "Public/LevelSequence/VirtualCameraClipsMetaData.h" },
		{ "ToolTip", "@return The name of the clip's recorded level." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetRecordedLevelName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCameraClipsMetaData, nullptr, "GetRecordedLevelName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetRecordedLevelName_Statics::VirtualCameraClipsMetaData_eventGetRecordedLevelName_Parms), Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetRecordedLevelName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetRecordedLevelName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetRecordedLevelName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetRecordedLevelName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetRecordedLevelName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetRecordedLevelName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetSelected_Statics
	{
		struct VirtualCameraClipsMetaData_eventGetSelected_Parms
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
	void Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetSelected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VirtualCameraClipsMetaData_eventGetSelected_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetSelected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VirtualCameraClipsMetaData_eventGetSelected_Parms), &Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetSelected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetSelected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetSelected_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetSelected_Statics::Function_MetaDataParams[] = {
		{ "Category", "Clips" },
		{ "Comment", "/**\n\x09* @return Whether or not the clip is selected.  \n\x09*/" },
		{ "ModuleRelativePath", "Public/LevelSequence/VirtualCameraClipsMetaData.h" },
		{ "ToolTip", "@return Whether or not the clip is selected." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCameraClipsMetaData, nullptr, "GetSelected", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetSelected_Statics::VirtualCameraClipsMetaData_eventGetSelected_Parms), Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetDisplayRate_Statics
	{
		struct FFrameRate
		{
			int32 Numerator;
			int32 Denominator;
		};

		struct VirtualCameraClipsMetaData_eventSetDisplayRate_Parms
		{
			FFrameRate InDisplayRate;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InDisplayRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetDisplayRate_Statics::NewProp_InDisplayRate = { "InDisplayRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraClipsMetaData_eventSetDisplayRate_Parms, InDisplayRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetDisplayRate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetDisplayRate_Statics::NewProp_InDisplayRate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetDisplayRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Clips" },
		{ "Comment", "/**\n\x09 * Set the DisplayRate of the clip used for AssetData calculations.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSequence/VirtualCameraClipsMetaData.h" },
		{ "ToolTip", "Set the DisplayRate of the clip used for AssetData calculations." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetDisplayRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCameraClipsMetaData, nullptr, "SetDisplayRate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetDisplayRate_Statics::VirtualCameraClipsMetaData_eventSetDisplayRate_Parms), Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetDisplayRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetDisplayRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetDisplayRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetDisplayRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetDisplayRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetDisplayRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetFocalLength_Statics
	{
		struct VirtualCameraClipsMetaData_eventSetFocalLength_Parms
		{
			float InFocalLength;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InFocalLength;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetFocalLength_Statics::NewProp_InFocalLength = { "InFocalLength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraClipsMetaData_eventSetFocalLength_Parms, InFocalLength), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetFocalLength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetFocalLength_Statics::NewProp_InFocalLength,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetFocalLength_Statics::Function_MetaDataParams[] = {
		{ "Category", "Clips" },
		{ "Comment", "/**\n\x09* Set the focal length associated with this clip. \n\x09* @note: Used for tracking. Does not update the StreamedCameraComponent. \n\x09*/" },
		{ "ModuleRelativePath", "Public/LevelSequence/VirtualCameraClipsMetaData.h" },
		{ "ToolTip", "Set the focal length associated with this clip.\n@note: Used for tracking. Does not update the StreamedCameraComponent." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetFocalLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCameraClipsMetaData, nullptr, "SetFocalLength", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetFocalLength_Statics::VirtualCameraClipsMetaData_eventSetFocalLength_Parms), Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetFocalLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetFocalLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetFocalLength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetFocalLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetFocalLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetFocalLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetFrameCountEnd_Statics
	{
		struct VirtualCameraClipsMetaData_eventSetFrameCountEnd_Parms
		{
			int32 InFrame;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_InFrame;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetFrameCountEnd_Statics::NewProp_InFrame = { "InFrame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraClipsMetaData_eventSetFrameCountEnd_Parms, InFrame), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetFrameCountEnd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetFrameCountEnd_Statics::NewProp_InFrame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetFrameCountEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "Clips" },
		{ "Comment", "/**\n\x09* Set the final frame of the clip used for calculating duration.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LevelSequence/VirtualCameraClipsMetaData.h" },
		{ "ToolTip", "Set the final frame of the clip used for calculating duration." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetFrameCountEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCameraClipsMetaData, nullptr, "SetFrameCountEnd", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetFrameCountEnd_Statics::VirtualCameraClipsMetaData_eventSetFrameCountEnd_Parms), Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetFrameCountEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetFrameCountEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetFrameCountEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetFrameCountEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetFrameCountEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetFrameCountEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetFrameCountStart_Statics
	{
		struct VirtualCameraClipsMetaData_eventSetFrameCountStart_Parms
		{
			int32 InFrame;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_InFrame;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetFrameCountStart_Statics::NewProp_InFrame = { "InFrame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraClipsMetaData_eventSetFrameCountStart_Parms, InFrame), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetFrameCountStart_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetFrameCountStart_Statics::NewProp_InFrame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetFrameCountStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "Clips" },
		{ "Comment", "/**\n\x09* Set the initial frame of the clip used for calculating duration.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LevelSequence/VirtualCameraClipsMetaData.h" },
		{ "ToolTip", "Set the initial frame of the clip used for calculating duration." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetFrameCountStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCameraClipsMetaData, nullptr, "SetFrameCountStart", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetFrameCountStart_Statics::VirtualCameraClipsMetaData_eventSetFrameCountStart_Parms), Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetFrameCountStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetFrameCountStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetFrameCountStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetFrameCountStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetFrameCountStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetFrameCountStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetIsACineCameraRecording_Statics
	{
		struct VirtualCameraClipsMetaData_eventSetIsACineCameraRecording_Parms
		{
			bool bInIsACineCameraRecording;
		};
		static void NewProp_bInIsACineCameraRecording_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInIsACineCameraRecording;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetIsACineCameraRecording_Statics::NewProp_bInIsACineCameraRecording_SetBit(void* Obj)
	{
		((VirtualCameraClipsMetaData_eventSetIsACineCameraRecording_Parms*)Obj)->bInIsACineCameraRecording = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetIsACineCameraRecording_Statics::NewProp_bInIsACineCameraRecording = { "bInIsACineCameraRecording", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VirtualCameraClipsMetaData_eventSetIsACineCameraRecording_Parms), &Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetIsACineCameraRecording_Statics::NewProp_bInIsACineCameraRecording_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetIsACineCameraRecording_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetIsACineCameraRecording_Statics::NewProp_bInIsACineCameraRecording,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetIsACineCameraRecording_Statics::Function_MetaDataParams[] = {
		{ "Category", "Clips" },
		{ "Comment", "/**\n\x09 * Set if the clip was recorded by a CineCameraActor\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSequence/VirtualCameraClipsMetaData.h" },
		{ "ToolTip", "Set if the clip was recorded by a CineCameraActor" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetIsACineCameraRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCameraClipsMetaData, nullptr, "SetIsACineCameraRecording", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetIsACineCameraRecording_Statics::VirtualCameraClipsMetaData_eventSetIsACineCameraRecording_Parms), Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetIsACineCameraRecording_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetIsACineCameraRecording_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetIsACineCameraRecording_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetIsACineCameraRecording_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetIsACineCameraRecording()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetIsACineCameraRecording_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetLengthInFrames_Statics
	{
		struct VirtualCameraClipsMetaData_eventSetLengthInFrames_Parms
		{
			int32 InLength;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_InLength;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetLengthInFrames_Statics::NewProp_InLength = { "InLength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraClipsMetaData_eventSetLengthInFrames_Parms, InLength), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetLengthInFrames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetLengthInFrames_Statics::NewProp_InLength,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetLengthInFrames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Clips" },
		{ "Comment", "/**\n\x09 * Set the length in frames of the clip used for AssetData calculations. \n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSequence/VirtualCameraClipsMetaData.h" },
		{ "ToolTip", "Set the length in frames of the clip used for AssetData calculations." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetLengthInFrames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCameraClipsMetaData, nullptr, "SetLengthInFrames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetLengthInFrames_Statics::VirtualCameraClipsMetaData_eventSetLengthInFrames_Parms), Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetLengthInFrames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetLengthInFrames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetLengthInFrames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetLengthInFrames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetLengthInFrames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetLengthInFrames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetRecordedLevelName_Statics
	{
		struct VirtualCameraClipsMetaData_eventSetRecordedLevelName_Parms
		{
			FString InLevelName;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_InLevelName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetRecordedLevelName_Statics::NewProp_InLevelName = { "InLevelName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraClipsMetaData_eventSetRecordedLevelName_Parms, InLevelName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetRecordedLevelName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetRecordedLevelName_Statics::NewProp_InLevelName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetRecordedLevelName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Clips" },
		{ "Comment", "/**\n\x09* Set the name of the level that the clip was recorded in. \n\x09*/" },
		{ "ModuleRelativePath", "Public/LevelSequence/VirtualCameraClipsMetaData.h" },
		{ "ToolTip", "Set the name of the level that the clip was recorded in." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetRecordedLevelName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCameraClipsMetaData, nullptr, "SetRecordedLevelName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetRecordedLevelName_Statics::VirtualCameraClipsMetaData_eventSetRecordedLevelName_Parms), Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetRecordedLevelName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetRecordedLevelName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetRecordedLevelName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetRecordedLevelName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetRecordedLevelName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetRecordedLevelName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetSelected_Statics
	{
		struct VirtualCameraClipsMetaData_eventSetSelected_Parms
		{
			bool bInSelected;
		};
		static void NewProp_bInSelected_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInSelected;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetSelected_Statics::NewProp_bInSelected_SetBit(void* Obj)
	{
		((VirtualCameraClipsMetaData_eventSetSelected_Parms*)Obj)->bInSelected = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetSelected_Statics::NewProp_bInSelected = { "bInSelected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VirtualCameraClipsMetaData_eventSetSelected_Parms), &Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetSelected_Statics::NewProp_bInSelected_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetSelected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetSelected_Statics::NewProp_bInSelected,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetSelected_Statics::Function_MetaDataParams[] = {
		{ "Category", "Clips" },
		{ "Comment", "/**\n\x09* Set if this clip is 'selected'\n\x09*/" },
		{ "ModuleRelativePath", "Public/LevelSequence/VirtualCameraClipsMetaData.h" },
		{ "ToolTip", "Set if this clip is 'selected'" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCameraClipsMetaData, nullptr, "SetSelected", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetSelected_Statics::VirtualCameraClipsMetaData_eventSetSelected_Parms), Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVirtualCameraClipsMetaData);
	UClass* Z_Construct_UClass_UVirtualCameraClipsMetaData_NoRegister()
	{
		return UVirtualCameraClipsMetaData::StaticClass();
	}
	struct Z_Construct_UClass_UVirtualCameraClipsMetaData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FocalLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FocalLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsSelected_MetaData[];
#endif
		static void NewProp_bIsSelected_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSelected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecordedLevelName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RecordedLevelName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameCountStart_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_FrameCountStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameCountEnd_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_FrameCountEnd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LengthInFrames_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_LengthInFrames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayRate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DisplayRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsACineCameraRecording_MetaData[];
#endif
		static void NewProp_bIsACineCameraRecording_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsACineCameraRecording;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVirtualCameraClipsMetaData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VirtualCamera,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVirtualCameraClipsMetaData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetDisplayRate, "GetDisplayRate" }, // 3002161914
		{ &Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetFocalLength, "GetFocalLength" }, // 2695832519
		{ &Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetFrameCountEnd, "GetFrameCountEnd" }, // 2409505275
		{ &Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetFrameCountStart, "GetFrameCountStart" }, // 2014567898
		{ &Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetIsACineCameraRecording, "GetIsACineCameraRecording" }, // 1960847601
		{ &Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetLengthInFrames, "GetLengthInFrames" }, // 2948957233
		{ &Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetRecordedLevelName, "GetRecordedLevelName" }, // 4263004437
		{ &Z_Construct_UFunction_UVirtualCameraClipsMetaData_GetSelected, "GetSelected" }, // 3276616656
		{ &Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetDisplayRate, "SetDisplayRate" }, // 3920027395
		{ &Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetFocalLength, "SetFocalLength" }, // 2795688556
		{ &Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetFrameCountEnd, "SetFrameCountEnd" }, // 1570353285
		{ &Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetFrameCountStart, "SetFrameCountStart" }, // 3238635131
		{ &Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetIsACineCameraRecording, "SetIsACineCameraRecording" }, // 4241248509
		{ &Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetLengthInFrames, "SetLengthInFrames" }, // 155873992
		{ &Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetRecordedLevelName, "SetRecordedLevelName" }, // 3683471248
		{ &Z_Construct_UFunction_UVirtualCameraClipsMetaData_SetSelected, "SetSelected" }, // 3430197033
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualCameraClipsMetaData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Clips meta-data that is stored on ULevelSequence assets that are recorded through the virtual camera. \n * Meta-data is retrieved through ULevelSequence::FindMetaData<UVirtualCameraClipsMetaData>()\n */" },
		{ "IncludePath", "LevelSequence/VirtualCameraClipsMetaData.h" },
		{ "ModuleRelativePath", "Public/LevelSequence/VirtualCameraClipsMetaData.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Clips meta-data that is stored on ULevelSequence assets that are recorded through the virtual camera.\nMeta-data is retrieved through ULevelSequence::FindMetaData<UVirtualCameraClipsMetaData>()" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualCameraClipsMetaData_Statics::NewProp_FocalLength_MetaData[] = {
		{ "Comment", "/** The focal length of the streamed camera used to record the take */" },
		{ "ModuleRelativePath", "Public/LevelSequence/VirtualCameraClipsMetaData.h" },
		{ "ToolTip", "The focal length of the streamed camera used to record the take" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVirtualCameraClipsMetaData_Statics::NewProp_FocalLength = { "FocalLength", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVirtualCameraClipsMetaData, FocalLength), METADATA_PARAMS(Z_Construct_UClass_UVirtualCameraClipsMetaData_Statics::NewProp_FocalLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualCameraClipsMetaData_Statics::NewProp_FocalLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualCameraClipsMetaData_Statics::NewProp_bIsSelected_MetaData[] = {
		{ "Comment", "/** Whether or not the take was marked as 'selected' */" },
		{ "ModuleRelativePath", "Public/LevelSequence/VirtualCameraClipsMetaData.h" },
		{ "ToolTip", "Whether or not the take was marked as 'selected'" },
	};
#endif
	void Z_Construct_UClass_UVirtualCameraClipsMetaData_Statics::NewProp_bIsSelected_SetBit(void* Obj)
	{
		((UVirtualCameraClipsMetaData*)Obj)->bIsSelected = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVirtualCameraClipsMetaData_Statics::NewProp_bIsSelected = { "bIsSelected", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVirtualCameraClipsMetaData), &Z_Construct_UClass_UVirtualCameraClipsMetaData_Statics::NewProp_bIsSelected_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVirtualCameraClipsMetaData_Statics::NewProp_bIsSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualCameraClipsMetaData_Statics::NewProp_bIsSelected_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualCameraClipsMetaData_Statics::NewProp_RecordedLevelName_MetaData[] = {
		{ "Comment", "/** The name of the level that the clip was recorded in */" },
		{ "ModuleRelativePath", "Public/LevelSequence/VirtualCameraClipsMetaData.h" },
		{ "ToolTip", "The name of the level that the clip was recorded in" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVirtualCameraClipsMetaData_Statics::NewProp_RecordedLevelName = { "RecordedLevelName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVirtualCameraClipsMetaData, RecordedLevelName), METADATA_PARAMS(Z_Construct_UClass_UVirtualCameraClipsMetaData_Statics::NewProp_RecordedLevelName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualCameraClipsMetaData_Statics::NewProp_RecordedLevelName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualCameraClipsMetaData_Statics::NewProp_FrameCountStart_MetaData[] = {
		{ "Comment", "/** The initial frame of the clip used for calculating duration. */" },
		{ "ModuleRelativePath", "Public/LevelSequence/VirtualCameraClipsMetaData.h" },
		{ "ToolTip", "The initial frame of the clip used for calculating duration." },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UVirtualCameraClipsMetaData_Statics::NewProp_FrameCountStart = { "FrameCountStart", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVirtualCameraClipsMetaData, FrameCountStart), METADATA_PARAMS(Z_Construct_UClass_UVirtualCameraClipsMetaData_Statics::NewProp_FrameCountStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualCameraClipsMetaData_Statics::NewProp_FrameCountStart_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualCameraClipsMetaData_Statics::NewProp_FrameCountEnd_MetaData[] = {
		{ "Comment", "/** The last frame of the clip used for calculating duration. */" },
		{ "ModuleRelativePath", "Public/LevelSequence/VirtualCameraClipsMetaData.h" },
		{ "ToolTip", "The last frame of the clip used for calculating duration." },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UVirtualCameraClipsMetaData_Statics::NewProp_FrameCountEnd = { "FrameCountEnd", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVirtualCameraClipsMetaData, FrameCountEnd), METADATA_PARAMS(Z_Construct_UClass_UVirtualCameraClipsMetaData_Statics::NewProp_FrameCountEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualCameraClipsMetaData_Statics::NewProp_FrameCountEnd_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualCameraClipsMetaData_Statics::NewProp_LengthInFrames_MetaData[] = {
		{ "Comment", "/** The level sequence length in frames calculated from VirtualCameraSubsystem used for AssetData calculations */" },
		{ "ModuleRelativePath", "Public/LevelSequence/VirtualCameraClipsMetaData.h" },
		{ "ToolTip", "The level sequence length in frames calculated from VirtualCameraSubsystem used for AssetData calculations" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UVirtualCameraClipsMetaData_Statics::NewProp_LengthInFrames = { "LengthInFrames", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVirtualCameraClipsMetaData, LengthInFrames), METADATA_PARAMS(Z_Construct_UClass_UVirtualCameraClipsMetaData_Statics::NewProp_LengthInFrames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualCameraClipsMetaData_Statics::NewProp_LengthInFrames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualCameraClipsMetaData_Statics::NewProp_DisplayRate_MetaData[] = {
		{ "Comment", "/** The display rate of the level sequence used for AssetData calculations. */" },
		{ "ModuleRelativePath", "Public/LevelSequence/VirtualCameraClipsMetaData.h" },
		{ "ToolTip", "The display rate of the level sequence used for AssetData calculations." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVirtualCameraClipsMetaData_Statics::NewProp_DisplayRate = { "DisplayRate", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVirtualCameraClipsMetaData, DisplayRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(Z_Construct_UClass_UVirtualCameraClipsMetaData_Statics::NewProp_DisplayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualCameraClipsMetaData_Statics::NewProp_DisplayRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualCameraClipsMetaData_Statics::NewProp_bIsACineCameraRecording_MetaData[] = {
		{ "Comment", "/** If the LevelSequence was recorded with a CineCameraActor, rather than a VirtualCameraActor */" },
		{ "ModuleRelativePath", "Public/LevelSequence/VirtualCameraClipsMetaData.h" },
		{ "ToolTip", "If the LevelSequence was recorded with a CineCameraActor, rather than a VirtualCameraActor" },
	};
#endif
	void Z_Construct_UClass_UVirtualCameraClipsMetaData_Statics::NewProp_bIsACineCameraRecording_SetBit(void* Obj)
	{
		((UVirtualCameraClipsMetaData*)Obj)->bIsACineCameraRecording = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVirtualCameraClipsMetaData_Statics::NewProp_bIsACineCameraRecording = { "bIsACineCameraRecording", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVirtualCameraClipsMetaData), &Z_Construct_UClass_UVirtualCameraClipsMetaData_Statics::NewProp_bIsACineCameraRecording_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVirtualCameraClipsMetaData_Statics::NewProp_bIsACineCameraRecording_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualCameraClipsMetaData_Statics::NewProp_bIsACineCameraRecording_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVirtualCameraClipsMetaData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualCameraClipsMetaData_Statics::NewProp_FocalLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualCameraClipsMetaData_Statics::NewProp_bIsSelected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualCameraClipsMetaData_Statics::NewProp_RecordedLevelName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualCameraClipsMetaData_Statics::NewProp_FrameCountStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualCameraClipsMetaData_Statics::NewProp_FrameCountEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualCameraClipsMetaData_Statics::NewProp_LengthInFrames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualCameraClipsMetaData_Statics::NewProp_DisplayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualCameraClipsMetaData_Statics::NewProp_bIsACineCameraRecording,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UVirtualCameraClipsMetaData_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_ULevelSequenceMetaData_NoRegister, (int32)VTABLE_OFFSET(UVirtualCameraClipsMetaData, ILevelSequenceMetaData), false },  // 3332512596
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVirtualCameraClipsMetaData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVirtualCameraClipsMetaData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVirtualCameraClipsMetaData_Statics::ClassParams = {
		&UVirtualCameraClipsMetaData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVirtualCameraClipsMetaData_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualCameraClipsMetaData_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVirtualCameraClipsMetaData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualCameraClipsMetaData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVirtualCameraClipsMetaData()
	{
		if (!Z_Registration_Info_UClass_UVirtualCameraClipsMetaData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVirtualCameraClipsMetaData.OuterSingleton, Z_Construct_UClass_UVirtualCameraClipsMetaData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVirtualCameraClipsMetaData.OuterSingleton;
	}
	template<> VIRTUALCAMERA_API UClass* StaticClass<UVirtualCameraClipsMetaData>()
	{
		return UVirtualCameraClipsMetaData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVirtualCameraClipsMetaData);
	UVirtualCameraClipsMetaData::~UVirtualCameraClipsMetaData() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_LevelSequence_VirtualCameraClipsMetaData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_LevelSequence_VirtualCameraClipsMetaData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVirtualCameraClipsMetaData, UVirtualCameraClipsMetaData::StaticClass, TEXT("UVirtualCameraClipsMetaData"), &Z_Registration_Info_UClass_UVirtualCameraClipsMetaData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVirtualCameraClipsMetaData), 319368523U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_LevelSequence_VirtualCameraClipsMetaData_h_4252292618(TEXT("/Script/VirtualCamera"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_LevelSequence_VirtualCameraClipsMetaData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_LevelSequence_VirtualCameraClipsMetaData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
