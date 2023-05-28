// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VCamInputTypes.h"
#include "Input/Events.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVCamInputTypes() {}
// Cross Module References
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAnalogInputEvent();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FKeyEvent();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMotionEvent();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FPointerEvent();
	UPackage* Z_Construct_UPackage__Script_VCamInput();
	VCAMINPUT_API UFunction* Z_Construct_UDelegateFunction_VCamInput_AnalogInputDelegate__DelegateSignature();
	VCAMINPUT_API UFunction* Z_Construct_UDelegateFunction_VCamInput_KeyInputDelegate__DelegateSignature();
	VCAMINPUT_API UFunction* Z_Construct_UDelegateFunction_VCamInput_MotionInputEvent__DelegateSignature();
	VCAMINPUT_API UFunction* Z_Construct_UDelegateFunction_VCamInput_PointerInputDelegate__DelegateSignature();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_VCamInput_KeyInputDelegate__DelegateSignature_Statics
	{
		struct _Script_VCamInput_eventKeyInputDelegate_Parms
		{
			float DeltaTime;
			FKeyEvent KeyEvent;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyEvent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_KeyEvent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_VCamInput_KeyInputDelegate__DelegateSignature_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_VCamInput_eventKeyInputDelegate_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VCamInput_KeyInputDelegate__DelegateSignature_Statics::NewProp_KeyEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_VCamInput_KeyInputDelegate__DelegateSignature_Statics::NewProp_KeyEvent = { "KeyEvent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_VCamInput_eventKeyInputDelegate_Parms, KeyEvent), Z_Construct_UScriptStruct_FKeyEvent, METADATA_PARAMS(Z_Construct_UDelegateFunction_VCamInput_KeyInputDelegate__DelegateSignature_Statics::NewProp_KeyEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VCamInput_KeyInputDelegate__DelegateSignature_Statics::NewProp_KeyEvent_MetaData)) }; // 1482041026
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_VCamInput_KeyInputDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VCamInput_KeyInputDelegate__DelegateSignature_Statics::NewProp_DeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VCamInput_KeyInputDelegate__DelegateSignature_Statics::NewProp_KeyEvent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VCamInput_KeyInputDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VCamInputTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_VCamInput_KeyInputDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VCamInput, nullptr, "KeyInputDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_VCamInput_KeyInputDelegate__DelegateSignature_Statics::_Script_VCamInput_eventKeyInputDelegate_Parms), Z_Construct_UDelegateFunction_VCamInput_KeyInputDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VCamInput_KeyInputDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_VCamInput_KeyInputDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VCamInput_KeyInputDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_VCamInput_KeyInputDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_VCamInput_KeyInputDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FKeyInputDelegate_DelegateWrapper(const FScriptDelegate& KeyInputDelegate, float DeltaTime, FKeyEvent const& KeyEvent)
{
	struct _Script_VCamInput_eventKeyInputDelegate_Parms
	{
		float DeltaTime;
		FKeyEvent KeyEvent;
	};
	_Script_VCamInput_eventKeyInputDelegate_Parms Parms;
	Parms.DeltaTime=DeltaTime;
	Parms.KeyEvent=KeyEvent;
	KeyInputDelegate.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_VCamInput_AnalogInputDelegate__DelegateSignature_Statics
	{
		struct _Script_VCamInput_eventAnalogInputDelegate_Parms
		{
			float DeltaTime;
			FAnalogInputEvent AnalogEvent;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnalogEvent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AnalogEvent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_VCamInput_AnalogInputDelegate__DelegateSignature_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_VCamInput_eventAnalogInputDelegate_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VCamInput_AnalogInputDelegate__DelegateSignature_Statics::NewProp_AnalogEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_VCamInput_AnalogInputDelegate__DelegateSignature_Statics::NewProp_AnalogEvent = { "AnalogEvent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_VCamInput_eventAnalogInputDelegate_Parms, AnalogEvent), Z_Construct_UScriptStruct_FAnalogInputEvent, METADATA_PARAMS(Z_Construct_UDelegateFunction_VCamInput_AnalogInputDelegate__DelegateSignature_Statics::NewProp_AnalogEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VCamInput_AnalogInputDelegate__DelegateSignature_Statics::NewProp_AnalogEvent_MetaData)) }; // 4262370743
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_VCamInput_AnalogInputDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VCamInput_AnalogInputDelegate__DelegateSignature_Statics::NewProp_DeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VCamInput_AnalogInputDelegate__DelegateSignature_Statics::NewProp_AnalogEvent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VCamInput_AnalogInputDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VCamInputTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_VCamInput_AnalogInputDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VCamInput, nullptr, "AnalogInputDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_VCamInput_AnalogInputDelegate__DelegateSignature_Statics::_Script_VCamInput_eventAnalogInputDelegate_Parms), Z_Construct_UDelegateFunction_VCamInput_AnalogInputDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VCamInput_AnalogInputDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_VCamInput_AnalogInputDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VCamInput_AnalogInputDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_VCamInput_AnalogInputDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_VCamInput_AnalogInputDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FAnalogInputDelegate_DelegateWrapper(const FScriptDelegate& AnalogInputDelegate, float DeltaTime, FAnalogInputEvent const& AnalogEvent)
{
	struct _Script_VCamInput_eventAnalogInputDelegate_Parms
	{
		float DeltaTime;
		FAnalogInputEvent AnalogEvent;
	};
	_Script_VCamInput_eventAnalogInputDelegate_Parms Parms;
	Parms.DeltaTime=DeltaTime;
	Parms.AnalogEvent=AnalogEvent;
	AnalogInputDelegate.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_VCamInput_PointerInputDelegate__DelegateSignature_Statics
	{
		struct _Script_VCamInput_eventPointerInputDelegate_Parms
		{
			float DeltaTime;
			FPointerEvent MouseEvent;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MouseEvent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MouseEvent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_VCamInput_PointerInputDelegate__DelegateSignature_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_VCamInput_eventPointerInputDelegate_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VCamInput_PointerInputDelegate__DelegateSignature_Statics::NewProp_MouseEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_VCamInput_PointerInputDelegate__DelegateSignature_Statics::NewProp_MouseEvent = { "MouseEvent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_VCamInput_eventPointerInputDelegate_Parms, MouseEvent), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(Z_Construct_UDelegateFunction_VCamInput_PointerInputDelegate__DelegateSignature_Statics::NewProp_MouseEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VCamInput_PointerInputDelegate__DelegateSignature_Statics::NewProp_MouseEvent_MetaData)) }; // 3180245440
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_VCamInput_PointerInputDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VCamInput_PointerInputDelegate__DelegateSignature_Statics::NewProp_DeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VCamInput_PointerInputDelegate__DelegateSignature_Statics::NewProp_MouseEvent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VCamInput_PointerInputDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VCamInputTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_VCamInput_PointerInputDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VCamInput, nullptr, "PointerInputDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_VCamInput_PointerInputDelegate__DelegateSignature_Statics::_Script_VCamInput_eventPointerInputDelegate_Parms), Z_Construct_UDelegateFunction_VCamInput_PointerInputDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VCamInput_PointerInputDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_VCamInput_PointerInputDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VCamInput_PointerInputDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_VCamInput_PointerInputDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_VCamInput_PointerInputDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FPointerInputDelegate_DelegateWrapper(const FScriptDelegate& PointerInputDelegate, float DeltaTime, FPointerEvent const& MouseEvent)
{
	struct _Script_VCamInput_eventPointerInputDelegate_Parms
	{
		float DeltaTime;
		FPointerEvent MouseEvent;
	};
	_Script_VCamInput_eventPointerInputDelegate_Parms Parms;
	Parms.DeltaTime=DeltaTime;
	Parms.MouseEvent=MouseEvent;
	PointerInputDelegate.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_VCamInput_MotionInputEvent__DelegateSignature_Statics
	{
		struct _Script_VCamInput_eventMotionInputEvent_Parms
		{
			float DeltaTime;
			FMotionEvent MotionEvent;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MotionEvent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MotionEvent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_VCamInput_MotionInputEvent__DelegateSignature_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_VCamInput_eventMotionInputEvent_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VCamInput_MotionInputEvent__DelegateSignature_Statics::NewProp_MotionEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_VCamInput_MotionInputEvent__DelegateSignature_Statics::NewProp_MotionEvent = { "MotionEvent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_VCamInput_eventMotionInputEvent_Parms, MotionEvent), Z_Construct_UScriptStruct_FMotionEvent, METADATA_PARAMS(Z_Construct_UDelegateFunction_VCamInput_MotionInputEvent__DelegateSignature_Statics::NewProp_MotionEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VCamInput_MotionInputEvent__DelegateSignature_Statics::NewProp_MotionEvent_MetaData)) }; // 2504140278
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_VCamInput_MotionInputEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VCamInput_MotionInputEvent__DelegateSignature_Statics::NewProp_DeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VCamInput_MotionInputEvent__DelegateSignature_Statics::NewProp_MotionEvent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VCamInput_MotionInputEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VCamInputTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_VCamInput_MotionInputEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VCamInput, nullptr, "MotionInputEvent__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_VCamInput_MotionInputEvent__DelegateSignature_Statics::_Script_VCamInput_eventMotionInputEvent_Parms), Z_Construct_UDelegateFunction_VCamInput_MotionInputEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VCamInput_MotionInputEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_VCamInput_MotionInputEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VCamInput_MotionInputEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_VCamInput_MotionInputEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_VCamInput_MotionInputEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FMotionInputEvent_DelegateWrapper(const FScriptDelegate& MotionInputEvent, float DeltaTime, FMotionEvent const& MotionEvent)
{
	struct _Script_VCamInput_eventMotionInputEvent_Parms
	{
		float DeltaTime;
		FMotionEvent MotionEvent;
	};
	_Script_VCamInput_eventMotionInputEvent_Parms Parms;
	Parms.DeltaTime=DeltaTime;
	Parms.MotionEvent=MotionEvent;
	MotionInputEvent.ProcessDelegate<UObject>(&Parms);
}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
