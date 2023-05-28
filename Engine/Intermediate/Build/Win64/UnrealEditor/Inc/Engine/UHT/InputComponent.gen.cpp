// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Components/InputComponent.h"
#include "InputCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UInputComponent();
	ENGINE_API UClass* Z_Construct_UClass_UInputComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPlayerInput_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EControllerAnalogStick();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEndPlayReason();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_InputActionHandlerDynamicSignature__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_InputAxisHandlerDynamicSignature__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_InputGestureHandlerDynamicSignature__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_InputTouchHandlerDynamicSignature__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_InputVectorAxisHandlerDynamicSignature__DelegateSignature();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCachedKeyToActionInfo();
	INPUTCORE_API UEnum* Z_Construct_UEnum_InputCore_ETouchIndex();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Engine_InputActionHandlerDynamicSignature__DelegateSignature_Statics
	{
		struct _Script_Engine_eventInputActionHandlerDynamicSignature_Parms
		{
			FKey Key;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Engine_InputActionHandlerDynamicSignature__DelegateSignature_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Engine_eventInputActionHandlerDynamicSignature_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) }; // 2101135134
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_InputActionHandlerDynamicSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_InputActionHandlerDynamicSignature__DelegateSignature_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_InputActionHandlerDynamicSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/InputComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_InputActionHandlerDynamicSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "InputActionHandlerDynamicSignature__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Engine_InputActionHandlerDynamicSignature__DelegateSignature_Statics::_Script_Engine_eventInputActionHandlerDynamicSignature_Parms), Z_Construct_UDelegateFunction_Engine_InputActionHandlerDynamicSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_InputActionHandlerDynamicSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_InputActionHandlerDynamicSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_InputActionHandlerDynamicSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_InputActionHandlerDynamicSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Engine_InputActionHandlerDynamicSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FInputActionHandlerDynamicSignature_DelegateWrapper(const FScriptDelegate& InputActionHandlerDynamicSignature, FKey Key)
{
	struct _Script_Engine_eventInputActionHandlerDynamicSignature_Parms
	{
		FKey Key;
	};
	_Script_Engine_eventInputActionHandlerDynamicSignature_Parms Parms;
	Parms.Key=Key;
	InputActionHandlerDynamicSignature.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_Engine_InputTouchHandlerDynamicSignature__DelegateSignature_Statics
	{
		struct _Script_Engine_eventInputTouchHandlerDynamicSignature_Parms
		{
			TEnumAsByte<ETouchIndex::Type> FingerIndex;
			FVector Location;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_FingerIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_Engine_InputTouchHandlerDynamicSignature__DelegateSignature_Statics::NewProp_FingerIndex = { "FingerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Engine_eventInputTouchHandlerDynamicSignature_Parms, FingerIndex), Z_Construct_UEnum_InputCore_ETouchIndex, METADATA_PARAMS(nullptr, 0) }; // 2899773687
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Engine_InputTouchHandlerDynamicSignature__DelegateSignature_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Engine_eventInputTouchHandlerDynamicSignature_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_InputTouchHandlerDynamicSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_InputTouchHandlerDynamicSignature__DelegateSignature_Statics::NewProp_FingerIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_InputTouchHandlerDynamicSignature__DelegateSignature_Statics::NewProp_Location,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_InputTouchHandlerDynamicSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/InputComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_InputTouchHandlerDynamicSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "InputTouchHandlerDynamicSignature__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Engine_InputTouchHandlerDynamicSignature__DelegateSignature_Statics::_Script_Engine_eventInputTouchHandlerDynamicSignature_Parms), Z_Construct_UDelegateFunction_Engine_InputTouchHandlerDynamicSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_InputTouchHandlerDynamicSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_InputTouchHandlerDynamicSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_InputTouchHandlerDynamicSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_InputTouchHandlerDynamicSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Engine_InputTouchHandlerDynamicSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FInputTouchHandlerDynamicSignature_DelegateWrapper(const FScriptDelegate& InputTouchHandlerDynamicSignature, ETouchIndex::Type FingerIndex, FVector Location)
{
	struct _Script_Engine_eventInputTouchHandlerDynamicSignature_Parms
	{
		TEnumAsByte<ETouchIndex::Type> FingerIndex;
		FVector Location;
	};
	_Script_Engine_eventInputTouchHandlerDynamicSignature_Parms Parms;
	Parms.FingerIndex=FingerIndex;
	Parms.Location=Location;
	InputTouchHandlerDynamicSignature.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_Engine_InputAxisHandlerDynamicSignature__DelegateSignature_Statics
	{
		struct _Script_Engine_eventInputAxisHandlerDynamicSignature_Parms
		{
			float AxisValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AxisValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Engine_InputAxisHandlerDynamicSignature__DelegateSignature_Statics::NewProp_AxisValue = { "AxisValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Engine_eventInputAxisHandlerDynamicSignature_Parms, AxisValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_InputAxisHandlerDynamicSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_InputAxisHandlerDynamicSignature__DelegateSignature_Statics::NewProp_AxisValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_InputAxisHandlerDynamicSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/InputComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_InputAxisHandlerDynamicSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "InputAxisHandlerDynamicSignature__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Engine_InputAxisHandlerDynamicSignature__DelegateSignature_Statics::_Script_Engine_eventInputAxisHandlerDynamicSignature_Parms), Z_Construct_UDelegateFunction_Engine_InputAxisHandlerDynamicSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_InputAxisHandlerDynamicSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_InputAxisHandlerDynamicSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_InputAxisHandlerDynamicSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_InputAxisHandlerDynamicSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Engine_InputAxisHandlerDynamicSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FInputAxisHandlerDynamicSignature_DelegateWrapper(const FScriptDelegate& InputAxisHandlerDynamicSignature, float AxisValue)
{
	struct _Script_Engine_eventInputAxisHandlerDynamicSignature_Parms
	{
		float AxisValue;
	};
	_Script_Engine_eventInputAxisHandlerDynamicSignature_Parms Parms;
	Parms.AxisValue=AxisValue;
	InputAxisHandlerDynamicSignature.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_Engine_InputVectorAxisHandlerDynamicSignature__DelegateSignature_Statics
	{
		struct _Script_Engine_eventInputVectorAxisHandlerDynamicSignature_Parms
		{
			FVector AxisValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_AxisValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Engine_InputVectorAxisHandlerDynamicSignature__DelegateSignature_Statics::NewProp_AxisValue = { "AxisValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Engine_eventInputVectorAxisHandlerDynamicSignature_Parms, AxisValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_InputVectorAxisHandlerDynamicSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_InputVectorAxisHandlerDynamicSignature__DelegateSignature_Statics::NewProp_AxisValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_InputVectorAxisHandlerDynamicSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/InputComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_InputVectorAxisHandlerDynamicSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "InputVectorAxisHandlerDynamicSignature__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Engine_InputVectorAxisHandlerDynamicSignature__DelegateSignature_Statics::_Script_Engine_eventInputVectorAxisHandlerDynamicSignature_Parms), Z_Construct_UDelegateFunction_Engine_InputVectorAxisHandlerDynamicSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_InputVectorAxisHandlerDynamicSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_InputVectorAxisHandlerDynamicSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_InputVectorAxisHandlerDynamicSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_InputVectorAxisHandlerDynamicSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Engine_InputVectorAxisHandlerDynamicSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FInputVectorAxisHandlerDynamicSignature_DelegateWrapper(const FScriptDelegate& InputVectorAxisHandlerDynamicSignature, FVector AxisValue)
{
	struct _Script_Engine_eventInputVectorAxisHandlerDynamicSignature_Parms
	{
		FVector AxisValue;
	};
	_Script_Engine_eventInputVectorAxisHandlerDynamicSignature_Parms Parms;
	Parms.AxisValue=AxisValue;
	InputVectorAxisHandlerDynamicSignature.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_Engine_InputGestureHandlerDynamicSignature__DelegateSignature_Statics
	{
		struct _Script_Engine_eventInputGestureHandlerDynamicSignature_Parms
		{
			float Value;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Engine_InputGestureHandlerDynamicSignature__DelegateSignature_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Engine_eventInputGestureHandlerDynamicSignature_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_InputGestureHandlerDynamicSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_InputGestureHandlerDynamicSignature__DelegateSignature_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_InputGestureHandlerDynamicSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/InputComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_InputGestureHandlerDynamicSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "InputGestureHandlerDynamicSignature__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Engine_InputGestureHandlerDynamicSignature__DelegateSignature_Statics::_Script_Engine_eventInputGestureHandlerDynamicSignature_Parms), Z_Construct_UDelegateFunction_Engine_InputGestureHandlerDynamicSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_InputGestureHandlerDynamicSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_InputGestureHandlerDynamicSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_InputGestureHandlerDynamicSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_InputGestureHandlerDynamicSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Engine_InputGestureHandlerDynamicSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FInputGestureHandlerDynamicSignature_DelegateWrapper(const FScriptDelegate& InputGestureHandlerDynamicSignature, float Value)
{
	struct _Script_Engine_eventInputGestureHandlerDynamicSignature_Parms
	{
		float Value;
	};
	_Script_Engine_eventInputGestureHandlerDynamicSignature_Parms Parms;
	Parms.Value=Value;
	InputGestureHandlerDynamicSignature.ProcessDelegate<UObject>(&Parms);
}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EControllerAnalogStick;
	static UEnum* EControllerAnalogStick_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EControllerAnalogStick.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EControllerAnalogStick.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EControllerAnalogStick, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EControllerAnalogStick"));
		}
		return Z_Registration_Info_UEnum_EControllerAnalogStick.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EControllerAnalogStick::Type>()
	{
		return EControllerAnalogStick_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EControllerAnalogStick_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EControllerAnalogStick_Statics::Enumerators[] = {
		{ "EControllerAnalogStick::CAS_LeftStick", (int64)EControllerAnalogStick::CAS_LeftStick },
		{ "EControllerAnalogStick::CAS_RightStick", (int64)EControllerAnalogStick::CAS_RightStick },
		{ "EControllerAnalogStick::CAS_MAX", (int64)EControllerAnalogStick::CAS_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EControllerAnalogStick_Statics::Enum_MetaDataParams[] = {
		{ "CAS_LeftStick.Name", "EControllerAnalogStick::CAS_LeftStick" },
		{ "CAS_MAX.Name", "EControllerAnalogStick::CAS_MAX" },
		{ "CAS_RightStick.Name", "EControllerAnalogStick::CAS_RightStick" },
		{ "ModuleRelativePath", "Classes/Components/InputComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EControllerAnalogStick_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EControllerAnalogStick",
		"EControllerAnalogStick::Type",
		Z_Construct_UEnum_Engine_EControllerAnalogStick_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EControllerAnalogStick_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EControllerAnalogStick_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EControllerAnalogStick_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EControllerAnalogStick()
	{
		if (!Z_Registration_Info_UEnum_EControllerAnalogStick.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EControllerAnalogStick.InnerSingleton, Z_Construct_UEnum_Engine_EControllerAnalogStick_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EControllerAnalogStick.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CachedKeyToActionInfo;
class UScriptStruct* FCachedKeyToActionInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CachedKeyToActionInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CachedKeyToActionInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCachedKeyToActionInfo, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("CachedKeyToActionInfo"));
	}
	return Z_Registration_Info_UScriptStruct_CachedKeyToActionInfo.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCachedKeyToActionInfo>()
{
	return FCachedKeyToActionInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCachedKeyToActionInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerInput_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_PlayerInput;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCachedKeyToActionInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Struct that exists to store runtime cache to make key to action lookups faster.\n*/" },
		{ "ModuleRelativePath", "Classes/Components/InputComponent.h" },
		{ "ToolTip", "Struct that exists to store runtime cache to make key to action lookups faster." },
	};
#endif
	void* Z_Construct_UScriptStruct_FCachedKeyToActionInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCachedKeyToActionInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCachedKeyToActionInfo_Statics::NewProp_PlayerInput_MetaData[] = {
		{ "Comment", "/** Which PlayerInput object this has been built for */" },
		{ "ModuleRelativePath", "Classes/Components/InputComponent.h" },
		{ "ToolTip", "Which PlayerInput object this has been built for" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FCachedKeyToActionInfo_Statics::NewProp_PlayerInput = { "PlayerInput", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCachedKeyToActionInfo, PlayerInput), Z_Construct_UClass_UPlayerInput_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCachedKeyToActionInfo_Statics::NewProp_PlayerInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedKeyToActionInfo_Statics::NewProp_PlayerInput_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCachedKeyToActionInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCachedKeyToActionInfo_Statics::NewProp_PlayerInput,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCachedKeyToActionInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"CachedKeyToActionInfo",
		sizeof(FCachedKeyToActionInfo),
		alignof(FCachedKeyToActionInfo),
		Z_Construct_UScriptStruct_FCachedKeyToActionInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedKeyToActionInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCachedKeyToActionInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedKeyToActionInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCachedKeyToActionInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_CachedKeyToActionInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CachedKeyToActionInfo.InnerSingleton, Z_Construct_UScriptStruct_FCachedKeyToActionInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CachedKeyToActionInfo.InnerSingleton;
	}
	DEFINE_FUNCTION(UInputComponent::execGetControllerAnalogStickState)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_WhichStick);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_StickX);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_StickY);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetControllerAnalogStickState(EControllerAnalogStick::Type(Z_Param_WhichStick),Z_Param_Out_StickX,Z_Param_Out_StickY);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInputComponent::execGetControllerMouseDelta)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_DeltaX);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_DeltaY);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetControllerMouseDelta(Z_Param_Out_DeltaX,Z_Param_Out_DeltaY);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInputComponent::execGetControllerKeyTimeDown)
	{
		P_GET_STRUCT(FKey,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetControllerKeyTimeDown(Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInputComponent::execGetTouchState)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_FingerIndex);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_LocationX);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_LocationY);
		P_GET_UBOOL_REF(Z_Param_Out_bIsCurrentlyPressed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetTouchState(Z_Param_FingerIndex,Z_Param_Out_LocationX,Z_Param_Out_LocationY,Z_Param_Out_bIsCurrentlyPressed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInputComponent::execGetControllerVectorKeyState)
	{
		P_GET_STRUCT(FKey,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetControllerVectorKeyState(Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInputComponent::execGetControllerAnalogKeyState)
	{
		P_GET_STRUCT(FKey,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetControllerAnalogKeyState(Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInputComponent::execWasControllerKeyJustReleased)
	{
		P_GET_STRUCT(FKey,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->WasControllerKeyJustReleased(Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInputComponent::execWasControllerKeyJustPressed)
	{
		P_GET_STRUCT(FKey,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->WasControllerKeyJustPressed(Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInputComponent::execIsControllerKeyDown)
	{
		P_GET_STRUCT(FKey,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsControllerKeyDown(Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInputComponent::execOnInputOwnerEndPlayed)
	{
		P_GET_OBJECT(AActor,Z_Param_InOwner);
		P_GET_PROPERTY(FByteProperty,Z_Param_EndPlayReason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInputOwnerEndPlayed(Z_Param_InOwner,EEndPlayReason::Type(Z_Param_EndPlayReason));
		P_NATIVE_END;
	}
	void UInputComponent::StaticRegisterNativesUInputComponent()
	{
		UClass* Class = UInputComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetControllerAnalogKeyState", &UInputComponent::execGetControllerAnalogKeyState },
			{ "GetControllerAnalogStickState", &UInputComponent::execGetControllerAnalogStickState },
			{ "GetControllerKeyTimeDown", &UInputComponent::execGetControllerKeyTimeDown },
			{ "GetControllerMouseDelta", &UInputComponent::execGetControllerMouseDelta },
			{ "GetControllerVectorKeyState", &UInputComponent::execGetControllerVectorKeyState },
			{ "GetTouchState", &UInputComponent::execGetTouchState },
			{ "IsControllerKeyDown", &UInputComponent::execIsControllerKeyDown },
			{ "OnInputOwnerEndPlayed", &UInputComponent::execOnInputOwnerEndPlayed },
			{ "WasControllerKeyJustPressed", &UInputComponent::execWasControllerKeyJustPressed },
			{ "WasControllerKeyJustReleased", &UInputComponent::execWasControllerKeyJustReleased },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInputComponent_GetControllerAnalogKeyState_Statics
	{
		struct InputComponent_eventGetControllerAnalogKeyState_Parms
		{
			FKey Key;
			float ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputComponent_GetControllerAnalogKeyState_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InputComponent_eventGetControllerAnalogKeyState_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) }; // 2101135134
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInputComponent_GetControllerAnalogKeyState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InputComponent_eventGetControllerAnalogKeyState_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputComponent_GetControllerAnalogKeyState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputComponent_GetControllerAnalogKeyState_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputComponent_GetControllerAnalogKeyState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputComponent_GetControllerAnalogKeyState_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Returns the analog value for the given key/button.  If analog isn't supported, returns 1 for down and 0 for up. */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use PlayerController.GetInputAnalogKeyState instead." },
		{ "ModuleRelativePath", "Classes/Components/InputComponent.h" },
		{ "ToolTip", "Returns the analog value for the given key/button.  If analog isn't supported, returns 1 for down and 0 for up." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputComponent_GetControllerAnalogKeyState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputComponent, nullptr, "GetControllerAnalogKeyState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInputComponent_GetControllerAnalogKeyState_Statics::InputComponent_eventGetControllerAnalogKeyState_Parms), Z_Construct_UFunction_UInputComponent_GetControllerAnalogKeyState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputComponent_GetControllerAnalogKeyState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputComponent_GetControllerAnalogKeyState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputComponent_GetControllerAnalogKeyState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputComponent_GetControllerAnalogKeyState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputComponent_GetControllerAnalogKeyState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputComponent_GetControllerAnalogStickState_Statics
	{
		struct InputComponent_eventGetControllerAnalogStickState_Parms
		{
			TEnumAsByte<EControllerAnalogStick::Type> WhichStick;
			float StickX;
			float StickY;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_WhichStick;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StickX;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StickY;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInputComponent_GetControllerAnalogStickState_Statics::NewProp_WhichStick = { "WhichStick", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InputComponent_eventGetControllerAnalogStickState_Parms, WhichStick), Z_Construct_UEnum_Engine_EControllerAnalogStick, METADATA_PARAMS(nullptr, 0) }; // 3396154530
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInputComponent_GetControllerAnalogStickState_Statics::NewProp_StickX = { "StickX", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InputComponent_eventGetControllerAnalogStickState_Parms, StickX), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInputComponent_GetControllerAnalogStickState_Statics::NewProp_StickY = { "StickY", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InputComponent_eventGetControllerAnalogStickState_Parms, StickY), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputComponent_GetControllerAnalogStickState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputComponent_GetControllerAnalogStickState_Statics::NewProp_WhichStick,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputComponent_GetControllerAnalogStickState_Statics::NewProp_StickX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputComponent_GetControllerAnalogStickState_Statics::NewProp_StickY,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputComponent_GetControllerAnalogStickState_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Retrieves the X and Y displacement of the given analog stick.  For WhickStick, 0 = left, 1 = right. */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use PlayerController.GetInputAnalogStickState instead." },
		{ "ModuleRelativePath", "Classes/Components/InputComponent.h" },
		{ "ToolTip", "Retrieves the X and Y displacement of the given analog stick.  For WhickStick, 0 = left, 1 = right." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputComponent_GetControllerAnalogStickState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputComponent, nullptr, "GetControllerAnalogStickState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInputComponent_GetControllerAnalogStickState_Statics::InputComponent_eventGetControllerAnalogStickState_Parms), Z_Construct_UFunction_UInputComponent_GetControllerAnalogStickState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputComponent_GetControllerAnalogStickState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputComponent_GetControllerAnalogStickState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputComponent_GetControllerAnalogStickState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputComponent_GetControllerAnalogStickState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputComponent_GetControllerAnalogStickState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputComponent_GetControllerKeyTimeDown_Statics
	{
		struct InputComponent_eventGetControllerKeyTimeDown_Parms
		{
			FKey Key;
			float ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputComponent_GetControllerKeyTimeDown_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InputComponent_eventGetControllerKeyTimeDown_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) }; // 2101135134
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInputComponent_GetControllerKeyTimeDown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InputComponent_eventGetControllerKeyTimeDown_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputComponent_GetControllerKeyTimeDown_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputComponent_GetControllerKeyTimeDown_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputComponent_GetControllerKeyTimeDown_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputComponent_GetControllerKeyTimeDown_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Returns how long the given key/button has been down.  Returns 0 if it's up or it just went down this frame. */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use PlayerController.GetInputKeyTimeDown instead." },
		{ "ModuleRelativePath", "Classes/Components/InputComponent.h" },
		{ "ToolTip", "Returns how long the given key/button has been down.  Returns 0 if it's up or it just went down this frame." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputComponent_GetControllerKeyTimeDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputComponent, nullptr, "GetControllerKeyTimeDown", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInputComponent_GetControllerKeyTimeDown_Statics::InputComponent_eventGetControllerKeyTimeDown_Parms), Z_Construct_UFunction_UInputComponent_GetControllerKeyTimeDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputComponent_GetControllerKeyTimeDown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputComponent_GetControllerKeyTimeDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputComponent_GetControllerKeyTimeDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputComponent_GetControllerKeyTimeDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputComponent_GetControllerKeyTimeDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputComponent_GetControllerMouseDelta_Statics
	{
		struct InputComponent_eventGetControllerMouseDelta_Parms
		{
			float DeltaX;
			float DeltaY;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaX;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaY;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInputComponent_GetControllerMouseDelta_Statics::NewProp_DeltaX = { "DeltaX", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InputComponent_eventGetControllerMouseDelta_Parms, DeltaX), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInputComponent_GetControllerMouseDelta_Statics::NewProp_DeltaY = { "DeltaY", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InputComponent_eventGetControllerMouseDelta_Parms, DeltaY), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputComponent_GetControllerMouseDelta_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputComponent_GetControllerMouseDelta_Statics::NewProp_DeltaX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputComponent_GetControllerMouseDelta_Statics::NewProp_DeltaY,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputComponent_GetControllerMouseDelta_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Retrieves how far the mouse moved this frame. */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use PlayerController.GetInputMouseDelta instead." },
		{ "ModuleRelativePath", "Classes/Components/InputComponent.h" },
		{ "ToolTip", "Retrieves how far the mouse moved this frame." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputComponent_GetControllerMouseDelta_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputComponent, nullptr, "GetControllerMouseDelta", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInputComponent_GetControllerMouseDelta_Statics::InputComponent_eventGetControllerMouseDelta_Parms), Z_Construct_UFunction_UInputComponent_GetControllerMouseDelta_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputComponent_GetControllerMouseDelta_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputComponent_GetControllerMouseDelta_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputComponent_GetControllerMouseDelta_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputComponent_GetControllerMouseDelta()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputComponent_GetControllerMouseDelta_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputComponent_GetControllerVectorKeyState_Statics
	{
		struct InputComponent_eventGetControllerVectorKeyState_Parms
		{
			FKey Key;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputComponent_GetControllerVectorKeyState_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InputComponent_eventGetControllerVectorKeyState_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) }; // 2101135134
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputComponent_GetControllerVectorKeyState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InputComponent_eventGetControllerVectorKeyState_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputComponent_GetControllerVectorKeyState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputComponent_GetControllerVectorKeyState_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputComponent_GetControllerVectorKeyState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputComponent_GetControllerVectorKeyState_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Returns the vector value for the given key/button. */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use PlayerController.GetInputVectorKeyState instead." },
		{ "ModuleRelativePath", "Classes/Components/InputComponent.h" },
		{ "ToolTip", "Returns the vector value for the given key/button." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputComponent_GetControllerVectorKeyState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputComponent, nullptr, "GetControllerVectorKeyState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInputComponent_GetControllerVectorKeyState_Statics::InputComponent_eventGetControllerVectorKeyState_Parms), Z_Construct_UFunction_UInputComponent_GetControllerVectorKeyState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputComponent_GetControllerVectorKeyState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54840401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputComponent_GetControllerVectorKeyState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputComponent_GetControllerVectorKeyState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputComponent_GetControllerVectorKeyState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputComponent_GetControllerVectorKeyState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputComponent_GetTouchState_Statics
	{
		struct InputComponent_eventGetTouchState_Parms
		{
			int32 FingerIndex;
			float LocationX;
			float LocationY;
			bool bIsCurrentlyPressed;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_FingerIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LocationX;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LocationY;
		static void NewProp_bIsCurrentlyPressed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCurrentlyPressed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInputComponent_GetTouchState_Statics::NewProp_FingerIndex = { "FingerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InputComponent_eventGetTouchState_Parms, FingerIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInputComponent_GetTouchState_Statics::NewProp_LocationX = { "LocationX", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InputComponent_eventGetTouchState_Parms, LocationX), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInputComponent_GetTouchState_Statics::NewProp_LocationY = { "LocationY", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InputComponent_eventGetTouchState_Parms, LocationY), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInputComponent_GetTouchState_Statics::NewProp_bIsCurrentlyPressed_SetBit(void* Obj)
	{
		((InputComponent_eventGetTouchState_Parms*)Obj)->bIsCurrentlyPressed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInputComponent_GetTouchState_Statics::NewProp_bIsCurrentlyPressed = { "bIsCurrentlyPressed", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InputComponent_eventGetTouchState_Parms), &Z_Construct_UFunction_UInputComponent_GetTouchState_Statics::NewProp_bIsCurrentlyPressed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputComponent_GetTouchState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputComponent_GetTouchState_Statics::NewProp_FingerIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputComponent_GetTouchState_Statics::NewProp_LocationX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputComponent_GetTouchState_Statics::NewProp_LocationY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputComponent_GetTouchState_Statics::NewProp_bIsCurrentlyPressed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputComponent_GetTouchState_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Returns the location of a touch, and if it's held down */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use PlayerController.GetInputTouchState instead." },
		{ "ModuleRelativePath", "Classes/Components/InputComponent.h" },
		{ "ToolTip", "Returns the location of a touch, and if it's held down" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputComponent_GetTouchState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputComponent, nullptr, "GetTouchState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInputComponent_GetTouchState_Statics::InputComponent_eventGetTouchState_Parms), Z_Construct_UFunction_UInputComponent_GetTouchState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputComponent_GetTouchState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputComponent_GetTouchState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputComponent_GetTouchState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputComponent_GetTouchState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputComponent_GetTouchState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputComponent_IsControllerKeyDown_Statics
	{
		struct InputComponent_eventIsControllerKeyDown_Parms
		{
			FKey Key;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputComponent_IsControllerKeyDown_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InputComponent_eventIsControllerKeyDown_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) }; // 2101135134
	void Z_Construct_UFunction_UInputComponent_IsControllerKeyDown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InputComponent_eventIsControllerKeyDown_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInputComponent_IsControllerKeyDown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InputComponent_eventIsControllerKeyDown_Parms), &Z_Construct_UFunction_UInputComponent_IsControllerKeyDown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputComponent_IsControllerKeyDown_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputComponent_IsControllerKeyDown_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputComponent_IsControllerKeyDown_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputComponent_IsControllerKeyDown_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Returns true if the given key/button is pressed on the input of the controller (if present) */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use PlayerController.IsInputKeyDown instead." },
		{ "ModuleRelativePath", "Classes/Components/InputComponent.h" },
		{ "ToolTip", "Returns true if the given key/button is pressed on the input of the controller (if present)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputComponent_IsControllerKeyDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputComponent, nullptr, "IsControllerKeyDown", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInputComponent_IsControllerKeyDown_Statics::InputComponent_eventIsControllerKeyDown_Parms), Z_Construct_UFunction_UInputComponent_IsControllerKeyDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputComponent_IsControllerKeyDown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputComponent_IsControllerKeyDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputComponent_IsControllerKeyDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputComponent_IsControllerKeyDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputComponent_IsControllerKeyDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputComponent_OnInputOwnerEndPlayed_Statics
	{
		struct InputComponent_eventOnInputOwnerEndPlayed_Parms
		{
			AActor* InOwner;
			TEnumAsByte<EEndPlayReason::Type> EndPlayReason;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InOwner;
		static const UECodeGen_Private::FBytePropertyParams NewProp_EndPlayReason;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInputComponent_OnInputOwnerEndPlayed_Statics::NewProp_InOwner = { "InOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InputComponent_eventOnInputOwnerEndPlayed_Parms, InOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInputComponent_OnInputOwnerEndPlayed_Statics::NewProp_EndPlayReason = { "EndPlayReason", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InputComponent_eventOnInputOwnerEndPlayed_Parms, EndPlayReason), Z_Construct_UEnum_Engine_EEndPlayReason, METADATA_PARAMS(nullptr, 0) }; // 2713016423
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputComponent_OnInputOwnerEndPlayed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputComponent_OnInputOwnerEndPlayed_Statics::NewProp_InOwner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputComponent_OnInputOwnerEndPlayed_Statics::NewProp_EndPlayReason,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputComponent_OnInputOwnerEndPlayed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/InputComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputComponent_OnInputOwnerEndPlayed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputComponent, nullptr, "OnInputOwnerEndPlayed", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInputComponent_OnInputOwnerEndPlayed_Statics::InputComponent_eventOnInputOwnerEndPlayed_Parms), Z_Construct_UFunction_UInputComponent_OnInputOwnerEndPlayed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputComponent_OnInputOwnerEndPlayed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputComponent_OnInputOwnerEndPlayed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputComponent_OnInputOwnerEndPlayed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputComponent_OnInputOwnerEndPlayed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputComponent_OnInputOwnerEndPlayed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputComponent_WasControllerKeyJustPressed_Statics
	{
		struct InputComponent_eventWasControllerKeyJustPressed_Parms
		{
			FKey Key;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputComponent_WasControllerKeyJustPressed_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InputComponent_eventWasControllerKeyJustPressed_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) }; // 2101135134
	void Z_Construct_UFunction_UInputComponent_WasControllerKeyJustPressed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InputComponent_eventWasControllerKeyJustPressed_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInputComponent_WasControllerKeyJustPressed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InputComponent_eventWasControllerKeyJustPressed_Parms), &Z_Construct_UFunction_UInputComponent_WasControllerKeyJustPressed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputComponent_WasControllerKeyJustPressed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputComponent_WasControllerKeyJustPressed_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputComponent_WasControllerKeyJustPressed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputComponent_WasControllerKeyJustPressed_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Returns true if the given key/button was up last frame and down this frame. */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use PlayerController.WasInputKeyJustPressed instead." },
		{ "ModuleRelativePath", "Classes/Components/InputComponent.h" },
		{ "ToolTip", "Returns true if the given key/button was up last frame and down this frame." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputComponent_WasControllerKeyJustPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputComponent, nullptr, "WasControllerKeyJustPressed", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInputComponent_WasControllerKeyJustPressed_Statics::InputComponent_eventWasControllerKeyJustPressed_Parms), Z_Construct_UFunction_UInputComponent_WasControllerKeyJustPressed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputComponent_WasControllerKeyJustPressed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputComponent_WasControllerKeyJustPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputComponent_WasControllerKeyJustPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputComponent_WasControllerKeyJustPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputComponent_WasControllerKeyJustPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputComponent_WasControllerKeyJustReleased_Statics
	{
		struct InputComponent_eventWasControllerKeyJustReleased_Parms
		{
			FKey Key;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputComponent_WasControllerKeyJustReleased_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InputComponent_eventWasControllerKeyJustReleased_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) }; // 2101135134
	void Z_Construct_UFunction_UInputComponent_WasControllerKeyJustReleased_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InputComponent_eventWasControllerKeyJustReleased_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInputComponent_WasControllerKeyJustReleased_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InputComponent_eventWasControllerKeyJustReleased_Parms), &Z_Construct_UFunction_UInputComponent_WasControllerKeyJustReleased_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputComponent_WasControllerKeyJustReleased_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputComponent_WasControllerKeyJustReleased_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputComponent_WasControllerKeyJustReleased_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputComponent_WasControllerKeyJustReleased_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Returns true if the given key/button was down last frame and up this frame. */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use PlayerController.WasInputKeyJustReleased instead." },
		{ "ModuleRelativePath", "Classes/Components/InputComponent.h" },
		{ "ToolTip", "Returns true if the given key/button was down last frame and up this frame." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputComponent_WasControllerKeyJustReleased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputComponent, nullptr, "WasControllerKeyJustReleased", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInputComponent_WasControllerKeyJustReleased_Statics::InputComponent_eventWasControllerKeyJustReleased_Parms), Z_Construct_UFunction_UInputComponent_WasControllerKeyJustReleased_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputComponent_WasControllerKeyJustReleased_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputComponent_WasControllerKeyJustReleased_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputComponent_WasControllerKeyJustReleased_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputComponent_WasControllerKeyJustReleased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputComponent_WasControllerKeyJustReleased_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputComponent);
	UClass* Z_Construct_UClass_UInputComponent_NoRegister()
	{
		return UInputComponent::StaticClass();
	}
	struct Z_Construct_UClass_UInputComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedKeyToActionInfo_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedKeyToActionInfo_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CachedKeyToActionInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInputComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInputComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInputComponent_GetControllerAnalogKeyState, "GetControllerAnalogKeyState" }, // 4059347682
		{ &Z_Construct_UFunction_UInputComponent_GetControllerAnalogStickState, "GetControllerAnalogStickState" }, // 314010013
		{ &Z_Construct_UFunction_UInputComponent_GetControllerKeyTimeDown, "GetControllerKeyTimeDown" }, // 3473862542
		{ &Z_Construct_UFunction_UInputComponent_GetControllerMouseDelta, "GetControllerMouseDelta" }, // 310630551
		{ &Z_Construct_UFunction_UInputComponent_GetControllerVectorKeyState, "GetControllerVectorKeyState" }, // 2253525473
		{ &Z_Construct_UFunction_UInputComponent_GetTouchState, "GetTouchState" }, // 1852591978
		{ &Z_Construct_UFunction_UInputComponent_IsControllerKeyDown, "IsControllerKeyDown" }, // 2258811692
		{ &Z_Construct_UFunction_UInputComponent_OnInputOwnerEndPlayed, "OnInputOwnerEndPlayed" }, // 398238849
		{ &Z_Construct_UFunction_UInputComponent_WasControllerKeyJustPressed, "WasControllerKeyJustPressed" }, // 400439150
		{ &Z_Construct_UFunction_UInputComponent_WasControllerKeyJustReleased, "WasControllerKeyJustReleased" }, // 3569810490
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implement an Actor component for input bindings.\n *\n * An Input Component is a transient component that enables an Actor to bind various forms of input events to delegate functions.  \n * Input components are processed from a stack managed by the PlayerController and processed by the PlayerInput.\n * Each binding can consume the input event preventing other components on the input stack from processing the input.\n *\n * @see https://docs.unrealengine.com/latest/INT/Gameplay/Input/index.html\n */" },
		{ "HideCategories", "Activation Components|Activation" },
		{ "IncludePath", "Components/InputComponent.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Classes/Components/InputComponent.h" },
		{ "ToolTip", "Implement an Actor component for input bindings.\n\nAn Input Component is a transient component that enables an Actor to bind various forms of input events to delegate functions.\nInput components are processed from a stack managed by the PlayerController and processed by the PlayerInput.\nEach binding can consume the input event preventing other components on the input stack from processing the input.\n\n@see https://docs.unrealengine.com/latest/INT/Gameplay/Input/index.html" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputComponent_Statics::NewProp_CachedKeyToActionInfo_Inner = { "CachedKeyToActionInfo", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCachedKeyToActionInfo, METADATA_PARAMS(nullptr, 0) }; // 3744731723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputComponent_Statics::NewProp_CachedKeyToActionInfo_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/InputComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInputComponent_Statics::NewProp_CachedKeyToActionInfo = { "CachedKeyToActionInfo", nullptr, (EPropertyFlags)0x0040000000202000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInputComponent, CachedKeyToActionInfo), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInputComponent_Statics::NewProp_CachedKeyToActionInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputComponent_Statics::NewProp_CachedKeyToActionInfo_MetaData)) }; // 3744731723
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputComponent_Statics::NewProp_CachedKeyToActionInfo_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputComponent_Statics::NewProp_CachedKeyToActionInfo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInputComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputComponent_Statics::ClassParams = {
		&UInputComponent::StaticClass,
		"Input",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInputComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInputComponent_Statics::PropPointers),
		0,
		0x00B000ACu,
		METADATA_PARAMS(Z_Construct_UClass_UInputComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInputComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInputComponent()
	{
		if (!Z_Registration_Info_UClass_UInputComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputComponent.OuterSingleton, Z_Construct_UClass_UInputComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInputComponent.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UInputComponent>()
	{
		return UInputComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputComponent);
	UInputComponent::~UInputComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_Statics::EnumInfo[] = {
		{ EControllerAnalogStick_StaticEnum, TEXT("EControllerAnalogStick"), &Z_Registration_Info_UEnum_EControllerAnalogStick, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3396154530U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_Statics::ScriptStructInfo[] = {
		{ FCachedKeyToActionInfo::StaticStruct, Z_Construct_UScriptStruct_FCachedKeyToActionInfo_Statics::NewStructOps, TEXT("CachedKeyToActionInfo"), &Z_Registration_Info_UScriptStruct_CachedKeyToActionInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCachedKeyToActionInfo), 3744731723U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInputComponent, UInputComponent::StaticClass, TEXT("UInputComponent"), &Z_Registration_Info_UClass_UInputComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputComponent), 1575176969U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_1960199431(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_InputComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
