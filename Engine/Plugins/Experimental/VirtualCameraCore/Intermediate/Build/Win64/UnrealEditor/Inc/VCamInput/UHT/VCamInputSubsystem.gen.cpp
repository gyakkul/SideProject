// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VCamInputSubsystem.h"
#include "InputCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVCamInputSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	UPackage* Z_Construct_UPackage__Script_VCamInput();
	VCAMINPUT_API UClass* Z_Construct_UClass_UDEPRECATED_VCamInputSubsystem();
	VCAMINPUT_API UClass* Z_Construct_UClass_UDEPRECATED_VCamInputSubsystem_NoRegister();
	VCAMINPUT_API UFunction* Z_Construct_UDelegateFunction_VCamInput_AnalogInputDelegate__DelegateSignature();
	VCAMINPUT_API UFunction* Z_Construct_UDelegateFunction_VCamInput_KeyInputDelegate__DelegateSignature();
	VCAMINPUT_API UFunction* Z_Construct_UDelegateFunction_VCamInput_PointerInputDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UDEPRECATED_VCamInputSubsystem::execBindMouseWheelEvent)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Delegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BindMouseWheelEvent(FPointerInputDelegate(Z_Param_Delegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_VCamInputSubsystem::execBindMouseDoubleClickEvent)
	{
		P_GET_STRUCT(FKey,Z_Param_Key);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Delegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BindMouseDoubleClickEvent(Z_Param_Key,FPointerInputDelegate(Z_Param_Delegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_VCamInputSubsystem::execBindMouseButtonUpEvent)
	{
		P_GET_STRUCT(FKey,Z_Param_Key);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Delegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BindMouseButtonUpEvent(Z_Param_Key,FPointerInputDelegate(Z_Param_Delegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_VCamInputSubsystem::execBindMouseButtonDownEvent)
	{
		P_GET_STRUCT(FKey,Z_Param_Key);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Delegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BindMouseButtonDownEvent(Z_Param_Key,FPointerInputDelegate(Z_Param_Delegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_VCamInputSubsystem::execBindMouseMoveEvent)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Delegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BindMouseMoveEvent(FPointerInputDelegate(Z_Param_Delegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_VCamInputSubsystem::execBindAnalogEvent)
	{
		P_GET_STRUCT(FKey,Z_Param_Key);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Delegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BindAnalogEvent(Z_Param_Key,FAnalogInputDelegate(Z_Param_Delegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_VCamInputSubsystem::execBindKeyUpEvent)
	{
		P_GET_STRUCT(FKey,Z_Param_Key);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Delegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BindKeyUpEvent(Z_Param_Key,FKeyInputDelegate(Z_Param_Delegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_VCamInputSubsystem::execBindKeyDownEvent)
	{
		P_GET_STRUCT(FKey,Z_Param_Key);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Delegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BindKeyDownEvent(Z_Param_Key,FKeyInputDelegate(Z_Param_Delegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_VCamInputSubsystem::execGetShouldConsumeGamepadInput)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetShouldConsumeGamepadInput();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_VCamInputSubsystem::execSetShouldConsumeGamepadInput)
	{
		P_GET_UBOOL(Z_Param_bInShouldConsumeGamepadInput);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetShouldConsumeGamepadInput(Z_Param_bInShouldConsumeGamepadInput);
		P_NATIVE_END;
	}
	void UDEPRECATED_VCamInputSubsystem::StaticRegisterNativesUDEPRECATED_VCamInputSubsystem()
	{
		UClass* Class = UDEPRECATED_VCamInputSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BindAnalogEvent", &UDEPRECATED_VCamInputSubsystem::execBindAnalogEvent },
			{ "BindKeyDownEvent", &UDEPRECATED_VCamInputSubsystem::execBindKeyDownEvent },
			{ "BindKeyUpEvent", &UDEPRECATED_VCamInputSubsystem::execBindKeyUpEvent },
			{ "BindMouseButtonDownEvent", &UDEPRECATED_VCamInputSubsystem::execBindMouseButtonDownEvent },
			{ "BindMouseButtonUpEvent", &UDEPRECATED_VCamInputSubsystem::execBindMouseButtonUpEvent },
			{ "BindMouseDoubleClickEvent", &UDEPRECATED_VCamInputSubsystem::execBindMouseDoubleClickEvent },
			{ "BindMouseMoveEvent", &UDEPRECATED_VCamInputSubsystem::execBindMouseMoveEvent },
			{ "BindMouseWheelEvent", &UDEPRECATED_VCamInputSubsystem::execBindMouseWheelEvent },
			{ "GetShouldConsumeGamepadInput", &UDEPRECATED_VCamInputSubsystem::execGetShouldConsumeGamepadInput },
			{ "SetShouldConsumeGamepadInput", &UDEPRECATED_VCamInputSubsystem::execSetShouldConsumeGamepadInput },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindAnalogEvent_Statics
	{
		struct VCamInputSubsystem_eventBindAnalogEvent_Parms
		{
			FKey Key;
			FScriptDelegate Delegate;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Delegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindAnalogEvent_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindAnalogEvent_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamInputSubsystem_eventBindAnalogEvent_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindAnalogEvent_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindAnalogEvent_Statics::NewProp_Key_MetaData)) }; // 2101135134
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindAnalogEvent_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamInputSubsystem_eventBindAnalogEvent_Parms, Delegate), Z_Construct_UDelegateFunction_VCamInput_AnalogInputDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 1019037312
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindAnalogEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindAnalogEvent_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindAnalogEvent_Statics::NewProp_Delegate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindAnalogEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This function is deprecated." },
		{ "ModuleRelativePath", "Public/VCamInputSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindAnalogEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_VCamInputSubsystem, nullptr, "BindAnalogEvent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindAnalogEvent_Statics::VCamInputSubsystem_eventBindAnalogEvent_Parms), Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindAnalogEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindAnalogEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindAnalogEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindAnalogEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindAnalogEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindAnalogEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindKeyDownEvent_Statics
	{
		struct VCamInputSubsystem_eventBindKeyDownEvent_Parms
		{
			FKey Key;
			FScriptDelegate Delegate;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Delegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindKeyDownEvent_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindKeyDownEvent_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamInputSubsystem_eventBindKeyDownEvent_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindKeyDownEvent_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindKeyDownEvent_Statics::NewProp_Key_MetaData)) }; // 2101135134
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindKeyDownEvent_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamInputSubsystem_eventBindKeyDownEvent_Parms, Delegate), Z_Construct_UDelegateFunction_VCamInput_KeyInputDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 3302601691
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindKeyDownEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindKeyDownEvent_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindKeyDownEvent_Statics::NewProp_Delegate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindKeyDownEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This function is deprecated." },
		{ "ModuleRelativePath", "Public/VCamInputSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindKeyDownEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_VCamInputSubsystem, nullptr, "BindKeyDownEvent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindKeyDownEvent_Statics::VCamInputSubsystem_eventBindKeyDownEvent_Parms), Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindKeyDownEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindKeyDownEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindKeyDownEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindKeyDownEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindKeyDownEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindKeyDownEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindKeyUpEvent_Statics
	{
		struct VCamInputSubsystem_eventBindKeyUpEvent_Parms
		{
			FKey Key;
			FScriptDelegate Delegate;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Delegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindKeyUpEvent_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindKeyUpEvent_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamInputSubsystem_eventBindKeyUpEvent_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindKeyUpEvent_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindKeyUpEvent_Statics::NewProp_Key_MetaData)) }; // 2101135134
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindKeyUpEvent_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamInputSubsystem_eventBindKeyUpEvent_Parms, Delegate), Z_Construct_UDelegateFunction_VCamInput_KeyInputDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 3302601691
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindKeyUpEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindKeyUpEvent_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindKeyUpEvent_Statics::NewProp_Delegate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindKeyUpEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This function is deprecated." },
		{ "ModuleRelativePath", "Public/VCamInputSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindKeyUpEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_VCamInputSubsystem, nullptr, "BindKeyUpEvent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindKeyUpEvent_Statics::VCamInputSubsystem_eventBindKeyUpEvent_Parms), Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindKeyUpEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindKeyUpEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindKeyUpEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindKeyUpEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindKeyUpEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindKeyUpEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindMouseButtonDownEvent_Statics
	{
		struct VCamInputSubsystem_eventBindMouseButtonDownEvent_Parms
		{
			FKey Key;
			FScriptDelegate Delegate;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Delegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindMouseButtonDownEvent_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindMouseButtonDownEvent_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamInputSubsystem_eventBindMouseButtonDownEvent_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindMouseButtonDownEvent_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindMouseButtonDownEvent_Statics::NewProp_Key_MetaData)) }; // 2101135134
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindMouseButtonDownEvent_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamInputSubsystem_eventBindMouseButtonDownEvent_Parms, Delegate), Z_Construct_UDelegateFunction_VCamInput_PointerInputDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 1469217172
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindMouseButtonDownEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindMouseButtonDownEvent_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindMouseButtonDownEvent_Statics::NewProp_Delegate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindMouseButtonDownEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This function is deprecated." },
		{ "ModuleRelativePath", "Public/VCamInputSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindMouseButtonDownEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_VCamInputSubsystem, nullptr, "BindMouseButtonDownEvent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindMouseButtonDownEvent_Statics::VCamInputSubsystem_eventBindMouseButtonDownEvent_Parms), Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindMouseButtonDownEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindMouseButtonDownEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindMouseButtonDownEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindMouseButtonDownEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindMouseButtonDownEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindMouseButtonDownEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindMouseButtonUpEvent_Statics
	{
		struct VCamInputSubsystem_eventBindMouseButtonUpEvent_Parms
		{
			FKey Key;
			FScriptDelegate Delegate;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Delegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindMouseButtonUpEvent_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindMouseButtonUpEvent_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamInputSubsystem_eventBindMouseButtonUpEvent_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindMouseButtonUpEvent_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindMouseButtonUpEvent_Statics::NewProp_Key_MetaData)) }; // 2101135134
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindMouseButtonUpEvent_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamInputSubsystem_eventBindMouseButtonUpEvent_Parms, Delegate), Z_Construct_UDelegateFunction_VCamInput_PointerInputDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 1469217172
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindMouseButtonUpEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindMouseButtonUpEvent_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindMouseButtonUpEvent_Statics::NewProp_Delegate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindMouseButtonUpEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This function is deprecated." },
		{ "ModuleRelativePath", "Public/VCamInputSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindMouseButtonUpEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_VCamInputSubsystem, nullptr, "BindMouseButtonUpEvent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindMouseButtonUpEvent_Statics::VCamInputSubsystem_eventBindMouseButtonUpEvent_Parms), Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindMouseButtonUpEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindMouseButtonUpEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindMouseButtonUpEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindMouseButtonUpEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindMouseButtonUpEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindMouseButtonUpEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindMouseDoubleClickEvent_Statics
	{
		struct VCamInputSubsystem_eventBindMouseDoubleClickEvent_Parms
		{
			FKey Key;
			FScriptDelegate Delegate;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Delegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindMouseDoubleClickEvent_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindMouseDoubleClickEvent_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamInputSubsystem_eventBindMouseDoubleClickEvent_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindMouseDoubleClickEvent_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindMouseDoubleClickEvent_Statics::NewProp_Key_MetaData)) }; // 2101135134
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindMouseDoubleClickEvent_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamInputSubsystem_eventBindMouseDoubleClickEvent_Parms, Delegate), Z_Construct_UDelegateFunction_VCamInput_PointerInputDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 1469217172
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindMouseDoubleClickEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindMouseDoubleClickEvent_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindMouseDoubleClickEvent_Statics::NewProp_Delegate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindMouseDoubleClickEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This function is deprecated." },
		{ "ModuleRelativePath", "Public/VCamInputSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindMouseDoubleClickEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_VCamInputSubsystem, nullptr, "BindMouseDoubleClickEvent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindMouseDoubleClickEvent_Statics::VCamInputSubsystem_eventBindMouseDoubleClickEvent_Parms), Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindMouseDoubleClickEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindMouseDoubleClickEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindMouseDoubleClickEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindMouseDoubleClickEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindMouseDoubleClickEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindMouseDoubleClickEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindMouseMoveEvent_Statics
	{
		struct VCamInputSubsystem_eventBindMouseMoveEvent_Parms
		{
			FScriptDelegate Delegate;
		};
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Delegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindMouseMoveEvent_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamInputSubsystem_eventBindMouseMoveEvent_Parms, Delegate), Z_Construct_UDelegateFunction_VCamInput_PointerInputDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 1469217172
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindMouseMoveEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindMouseMoveEvent_Statics::NewProp_Delegate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindMouseMoveEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This function is deprecated." },
		{ "ModuleRelativePath", "Public/VCamInputSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindMouseMoveEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_VCamInputSubsystem, nullptr, "BindMouseMoveEvent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindMouseMoveEvent_Statics::VCamInputSubsystem_eventBindMouseMoveEvent_Parms), Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindMouseMoveEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindMouseMoveEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindMouseMoveEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindMouseMoveEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindMouseMoveEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindMouseMoveEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindMouseWheelEvent_Statics
	{
		struct VCamInputSubsystem_eventBindMouseWheelEvent_Parms
		{
			FScriptDelegate Delegate;
		};
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Delegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindMouseWheelEvent_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamInputSubsystem_eventBindMouseWheelEvent_Parms, Delegate), Z_Construct_UDelegateFunction_VCamInput_PointerInputDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 1469217172
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindMouseWheelEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindMouseWheelEvent_Statics::NewProp_Delegate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindMouseWheelEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This function is deprecated." },
		{ "ModuleRelativePath", "Public/VCamInputSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindMouseWheelEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_VCamInputSubsystem, nullptr, "BindMouseWheelEvent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindMouseWheelEvent_Statics::VCamInputSubsystem_eventBindMouseWheelEvent_Parms), Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindMouseWheelEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindMouseWheelEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindMouseWheelEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindMouseWheelEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindMouseWheelEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindMouseWheelEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_GetShouldConsumeGamepadInput_Statics
	{
		struct VCamInputSubsystem_eventGetShouldConsumeGamepadInput_Parms
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
	void Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_GetShouldConsumeGamepadInput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VCamInputSubsystem_eventGetShouldConsumeGamepadInput_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_GetShouldConsumeGamepadInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VCamInputSubsystem_eventGetShouldConsumeGamepadInput_Parms), &Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_GetShouldConsumeGamepadInput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_GetShouldConsumeGamepadInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_GetShouldConsumeGamepadInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_GetShouldConsumeGamepadInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This function is deprecated." },
		{ "ModuleRelativePath", "Public/VCamInputSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_GetShouldConsumeGamepadInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_VCamInputSubsystem, nullptr, "GetShouldConsumeGamepadInput", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_GetShouldConsumeGamepadInput_Statics::VCamInputSubsystem_eventGetShouldConsumeGamepadInput_Parms), Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_GetShouldConsumeGamepadInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_GetShouldConsumeGamepadInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_GetShouldConsumeGamepadInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_GetShouldConsumeGamepadInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_GetShouldConsumeGamepadInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_GetShouldConsumeGamepadInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_SetShouldConsumeGamepadInput_Statics
	{
		struct VCamInputSubsystem_eventSetShouldConsumeGamepadInput_Parms
		{
			bool bInShouldConsumeGamepadInput;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInShouldConsumeGamepadInput_MetaData[];
#endif
		static void NewProp_bInShouldConsumeGamepadInput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInShouldConsumeGamepadInput;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_SetShouldConsumeGamepadInput_Statics::NewProp_bInShouldConsumeGamepadInput_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_SetShouldConsumeGamepadInput_Statics::NewProp_bInShouldConsumeGamepadInput_SetBit(void* Obj)
	{
		((VCamInputSubsystem_eventSetShouldConsumeGamepadInput_Parms*)Obj)->bInShouldConsumeGamepadInput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_SetShouldConsumeGamepadInput_Statics::NewProp_bInShouldConsumeGamepadInput = { "bInShouldConsumeGamepadInput", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VCamInputSubsystem_eventSetShouldConsumeGamepadInput_Parms), &Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_SetShouldConsumeGamepadInput_Statics::NewProp_bInShouldConsumeGamepadInput_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_SetShouldConsumeGamepadInput_Statics::NewProp_bInShouldConsumeGamepadInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_SetShouldConsumeGamepadInput_Statics::NewProp_bInShouldConsumeGamepadInput_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_SetShouldConsumeGamepadInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_SetShouldConsumeGamepadInput_Statics::NewProp_bInShouldConsumeGamepadInput,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_SetShouldConsumeGamepadInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use UInputVCamSubsystem::SetShouldConsumeGamepadInput instead." },
		{ "ModuleRelativePath", "Public/VCamInputSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_SetShouldConsumeGamepadInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_VCamInputSubsystem, nullptr, "SetShouldConsumeGamepadInput", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_SetShouldConsumeGamepadInput_Statics::VCamInputSubsystem_eventSetShouldConsumeGamepadInput_Parms), Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_SetShouldConsumeGamepadInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_SetShouldConsumeGamepadInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_SetShouldConsumeGamepadInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_SetShouldConsumeGamepadInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_SetShouldConsumeGamepadInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_SetShouldConsumeGamepadInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDEPRECATED_VCamInputSubsystem);
	UClass* Z_Construct_UClass_UDEPRECATED_VCamInputSubsystem_NoRegister()
	{
		return UDEPRECATED_VCamInputSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UDEPRECATED_VCamInputSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDEPRECATED_VCamInputSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_VCamInput,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDEPRECATED_VCamInputSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindAnalogEvent, "BindAnalogEvent" }, // 834353230
		{ &Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindKeyDownEvent, "BindKeyDownEvent" }, // 29328746
		{ &Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindKeyUpEvent, "BindKeyUpEvent" }, // 3523525996
		{ &Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindMouseButtonDownEvent, "BindMouseButtonDownEvent" }, // 3916780589
		{ &Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindMouseButtonUpEvent, "BindMouseButtonUpEvent" }, // 1481799966
		{ &Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindMouseDoubleClickEvent, "BindMouseDoubleClickEvent" }, // 3063422593
		{ &Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindMouseMoveEvent, "BindMouseMoveEvent" }, // 2870328827
		{ &Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_BindMouseWheelEvent, "BindMouseWheelEvent" }, // 1168080780
		{ &Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_GetShouldConsumeGamepadInput, "GetShouldConsumeGamepadInput" }, // 2129768978
		{ &Z_Construct_UFunction_UDEPRECATED_VCamInputSubsystem_SetShouldConsumeGamepadInput, "SetShouldConsumeGamepadInput" }, // 1086703037
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_VCamInputSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VCamInputSubsystem.h" },
		{ "ModuleRelativePath", "Public/VCamInputSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDEPRECATED_VCamInputSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_VCamInputSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_VCamInputSubsystem_Statics::ClassParams = {
		&UDEPRECATED_VCamInputSubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_VCamInputSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_VCamInputSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDEPRECATED_VCamInputSubsystem()
	{
		if (!Z_Registration_Info_UClass_UDEPRECATED_VCamInputSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEPRECATED_VCamInputSubsystem.OuterSingleton, Z_Construct_UClass_UDEPRECATED_VCamInputSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDEPRECATED_VCamInputSubsystem.OuterSingleton;
	}
	template<> VCAMINPUT_API UClass* StaticClass<UDEPRECATED_VCamInputSubsystem>()
	{
		return UDEPRECATED_VCamInputSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_VCamInputSubsystem);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamInput_Public_VCamInputSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamInput_Public_VCamInputSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDEPRECATED_VCamInputSubsystem, UDEPRECATED_VCamInputSubsystem::StaticClass, TEXT("UDEPRECATED_VCamInputSubsystem"), &Z_Registration_Info_UClass_UDEPRECATED_VCamInputSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEPRECATED_VCamInputSubsystem), 940112069U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamInput_Public_VCamInputSubsystem_h_2705324367(TEXT("/Script/VCamInput"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamInput_Public_VCamInputSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamInput_Public_VCamInputSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
