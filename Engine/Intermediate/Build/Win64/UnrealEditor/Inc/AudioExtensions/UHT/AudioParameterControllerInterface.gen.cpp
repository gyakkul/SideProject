// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioParameterControllerInterface.h"
#include "AudioParameter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioParameterControllerInterface() {}
// Cross Module References
	AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_UAudioParameterControllerInterface();
	AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_UAudioParameterControllerInterface_NoRegister();
	AUDIOEXTENSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FAudioParameter();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AudioExtensions();
// End Cross Module References
	DEFINE_FUNCTION(IAudioParameterControllerInterface::execSetParameters_Blueprint)
	{
		P_GET_TARRAY_REF(FAudioParameter,Z_Param_Out_InParameters);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetParameters_Blueprint(Z_Param_Out_InParameters);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAudioParameterControllerInterface::execSetObjectArrayParameter)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InName);
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetObjectArrayParameter(Z_Param_InName,Z_Param_Out_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAudioParameterControllerInterface::execSetObjectParameter)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InName);
		P_GET_OBJECT(UObject,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetObjectParameter(Z_Param_InName,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAudioParameterControllerInterface::execSetStringArrayParameter)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InName);
		P_GET_TARRAY_REF(FString,Z_Param_Out_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStringArrayParameter(Z_Param_InName,Z_Param_Out_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAudioParameterControllerInterface::execSetStringParameter)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InName);
		P_GET_PROPERTY(FStrProperty,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStringParameter(Z_Param_InName,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAudioParameterControllerInterface::execSetFloatArrayParameter)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InName);
		P_GET_TARRAY_REF(float,Z_Param_Out_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFloatArrayParameter(Z_Param_InName,Z_Param_Out_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAudioParameterControllerInterface::execSetFloatParameter)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InFloat);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFloatParameter(Z_Param_InName,Z_Param_InFloat);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAudioParameterControllerInterface::execSetIntArrayParameter)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InName);
		P_GET_TARRAY_REF(int32,Z_Param_Out_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIntArrayParameter(Z_Param_InName,Z_Param_Out_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAudioParameterControllerInterface::execSetIntParameter)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InName);
		P_GET_PROPERTY(FIntProperty,Z_Param_InInt);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIntParameter(Z_Param_InName,Z_Param_InInt);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAudioParameterControllerInterface::execSetBoolArrayParameter)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InName);
		P_GET_TARRAY_REF(bool,Z_Param_Out_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBoolArrayParameter(Z_Param_InName,Z_Param_Out_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAudioParameterControllerInterface::execSetBoolParameter)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InName);
		P_GET_UBOOL(Z_Param_InBool);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBoolParameter(Z_Param_InName,Z_Param_InBool);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAudioParameterControllerInterface::execSetTriggerParameter)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTriggerParameter(Z_Param_InName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAudioParameterControllerInterface::execResetParameters)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetParameters();
		P_NATIVE_END;
	}
	void UAudioParameterControllerInterface::StaticRegisterNativesUAudioParameterControllerInterface()
	{
		UClass* Class = UAudioParameterControllerInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ResetParameters", &IAudioParameterControllerInterface::execResetParameters },
			{ "SetBoolArrayParameter", &IAudioParameterControllerInterface::execSetBoolArrayParameter },
			{ "SetBoolParameter", &IAudioParameterControllerInterface::execSetBoolParameter },
			{ "SetFloatArrayParameter", &IAudioParameterControllerInterface::execSetFloatArrayParameter },
			{ "SetFloatParameter", &IAudioParameterControllerInterface::execSetFloatParameter },
			{ "SetIntArrayParameter", &IAudioParameterControllerInterface::execSetIntArrayParameter },
			{ "SetIntParameter", &IAudioParameterControllerInterface::execSetIntParameter },
			{ "SetObjectArrayParameter", &IAudioParameterControllerInterface::execSetObjectArrayParameter },
			{ "SetObjectParameter", &IAudioParameterControllerInterface::execSetObjectParameter },
			{ "SetParameters_Blueprint", &IAudioParameterControllerInterface::execSetParameters_Blueprint },
			{ "SetStringArrayParameter", &IAudioParameterControllerInterface::execSetStringArrayParameter },
			{ "SetStringParameter", &IAudioParameterControllerInterface::execSetStringParameter },
			{ "SetTriggerParameter", &IAudioParameterControllerInterface::execSetTriggerParameter },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAudioParameterControllerInterface_ResetParameters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioParameterControllerInterface_ResetParameters_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Parameter" },
		{ "Comment", "// Resets all parameters to their original values.\n" },
		{ "ModuleRelativePath", "Public/AudioParameterControllerInterface.h" },
		{ "ToolTip", "Resets all parameters to their original values." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioParameterControllerInterface_ResetParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioParameterControllerInterface, nullptr, "ResetParameters", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioParameterControllerInterface_ResetParameters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioParameterControllerInterface_ResetParameters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioParameterControllerInterface_ResetParameters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioParameterControllerInterface_ResetParameters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioParameterControllerInterface_SetBoolArrayParameter_Statics
	{
		struct AudioParameterControllerInterface_eventSetBoolArrayParameter_Parms
		{
			FName InName;
			TArray<bool> InValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InName;
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAudioParameterControllerInterface_SetBoolArrayParameter_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioParameterControllerInterface_eventSetBoolArrayParameter_Parms, InName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAudioParameterControllerInterface_SetBoolArrayParameter_Statics::NewProp_InValue_Inner = { "InValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioParameterControllerInterface_SetBoolArrayParameter_Statics::NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAudioParameterControllerInterface_SetBoolArrayParameter_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioParameterControllerInterface_eventSetBoolArrayParameter_Parms, InValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAudioParameterControllerInterface_SetBoolArrayParameter_Statics::NewProp_InValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioParameterControllerInterface_SetBoolArrayParameter_Statics::NewProp_InValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioParameterControllerInterface_SetBoolArrayParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioParameterControllerInterface_SetBoolArrayParameter_Statics::NewProp_InName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioParameterControllerInterface_SetBoolArrayParameter_Statics::NewProp_InValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioParameterControllerInterface_SetBoolArrayParameter_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioParameterControllerInterface_SetBoolArrayParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Parameter" },
		{ "Comment", "// Sets a named Boolean Array\n" },
		{ "DisplayName", "Set Boolean Array Parameter" },
		{ "ModuleRelativePath", "Public/AudioParameterControllerInterface.h" },
		{ "ToolTip", "Sets a named Boolean Array" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioParameterControllerInterface_SetBoolArrayParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioParameterControllerInterface, nullptr, "SetBoolArrayParameter", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioParameterControllerInterface_SetBoolArrayParameter_Statics::AudioParameterControllerInterface_eventSetBoolArrayParameter_Parms), Z_Construct_UFunction_UAudioParameterControllerInterface_SetBoolArrayParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioParameterControllerInterface_SetBoolArrayParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioParameterControllerInterface_SetBoolArrayParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioParameterControllerInterface_SetBoolArrayParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioParameterControllerInterface_SetBoolArrayParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioParameterControllerInterface_SetBoolArrayParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioParameterControllerInterface_SetBoolParameter_Statics
	{
		struct AudioParameterControllerInterface_eventSetBoolParameter_Parms
		{
			FName InName;
			bool InBool;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InName;
		static void NewProp_InBool_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InBool;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAudioParameterControllerInterface_SetBoolParameter_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioParameterControllerInterface_eventSetBoolParameter_Parms, InName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAudioParameterControllerInterface_SetBoolParameter_Statics::NewProp_InBool_SetBit(void* Obj)
	{
		((AudioParameterControllerInterface_eventSetBoolParameter_Parms*)Obj)->InBool = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAudioParameterControllerInterface_SetBoolParameter_Statics::NewProp_InBool = { "InBool", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AudioParameterControllerInterface_eventSetBoolParameter_Parms), &Z_Construct_UFunction_UAudioParameterControllerInterface_SetBoolParameter_Statics::NewProp_InBool_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioParameterControllerInterface_SetBoolParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioParameterControllerInterface_SetBoolParameter_Statics::NewProp_InName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioParameterControllerInterface_SetBoolParameter_Statics::NewProp_InBool,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioParameterControllerInterface_SetBoolParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Parameter" },
		{ "Comment", "// Sets a named Boolean\n" },
		{ "DisplayName", "Set Boolean Parameter" },
		{ "ModuleRelativePath", "Public/AudioParameterControllerInterface.h" },
		{ "ToolTip", "Sets a named Boolean" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioParameterControllerInterface_SetBoolParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioParameterControllerInterface, nullptr, "SetBoolParameter", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioParameterControllerInterface_SetBoolParameter_Statics::AudioParameterControllerInterface_eventSetBoolParameter_Parms), Z_Construct_UFunction_UAudioParameterControllerInterface_SetBoolParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioParameterControllerInterface_SetBoolParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioParameterControllerInterface_SetBoolParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioParameterControllerInterface_SetBoolParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioParameterControllerInterface_SetBoolParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioParameterControllerInterface_SetBoolParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioParameterControllerInterface_SetFloatArrayParameter_Statics
	{
		struct AudioParameterControllerInterface_eventSetFloatArrayParameter_Parms
		{
			FName InName;
			TArray<float> InValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAudioParameterControllerInterface_SetFloatArrayParameter_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioParameterControllerInterface_eventSetFloatArrayParameter_Parms, InName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioParameterControllerInterface_SetFloatArrayParameter_Statics::NewProp_InValue_Inner = { "InValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioParameterControllerInterface_SetFloatArrayParameter_Statics::NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAudioParameterControllerInterface_SetFloatArrayParameter_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioParameterControllerInterface_eventSetFloatArrayParameter_Parms, InValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAudioParameterControllerInterface_SetFloatArrayParameter_Statics::NewProp_InValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioParameterControllerInterface_SetFloatArrayParameter_Statics::NewProp_InValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioParameterControllerInterface_SetFloatArrayParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioParameterControllerInterface_SetFloatArrayParameter_Statics::NewProp_InName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioParameterControllerInterface_SetFloatArrayParameter_Statics::NewProp_InValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioParameterControllerInterface_SetFloatArrayParameter_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioParameterControllerInterface_SetFloatArrayParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Parameter" },
		{ "Comment", "// Sets a named Float Array\n" },
		{ "DisplayName", "Set Float Array Parameter" },
		{ "ModuleRelativePath", "Public/AudioParameterControllerInterface.h" },
		{ "ToolTip", "Sets a named Float Array" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioParameterControllerInterface_SetFloatArrayParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioParameterControllerInterface, nullptr, "SetFloatArrayParameter", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioParameterControllerInterface_SetFloatArrayParameter_Statics::AudioParameterControllerInterface_eventSetFloatArrayParameter_Parms), Z_Construct_UFunction_UAudioParameterControllerInterface_SetFloatArrayParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioParameterControllerInterface_SetFloatArrayParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioParameterControllerInterface_SetFloatArrayParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioParameterControllerInterface_SetFloatArrayParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioParameterControllerInterface_SetFloatArrayParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioParameterControllerInterface_SetFloatArrayParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioParameterControllerInterface_SetFloatParameter_Statics
	{
		struct AudioParameterControllerInterface_eventSetFloatParameter_Parms
		{
			FName InName;
			float InFloat;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InFloat;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAudioParameterControllerInterface_SetFloatParameter_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioParameterControllerInterface_eventSetFloatParameter_Parms, InName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAudioParameterControllerInterface_SetFloatParameter_Statics::NewProp_InFloat = { "InFloat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioParameterControllerInterface_eventSetFloatParameter_Parms, InFloat), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioParameterControllerInterface_SetFloatParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioParameterControllerInterface_SetFloatParameter_Statics::NewProp_InName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioParameterControllerInterface_SetFloatParameter_Statics::NewProp_InFloat,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioParameterControllerInterface_SetFloatParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Parameter" },
		{ "Comment", "// Sets a named Float\n" },
		{ "DisplayName", "Set Float Parameter" },
		{ "ModuleRelativePath", "Public/AudioParameterControllerInterface.h" },
		{ "ToolTip", "Sets a named Float" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioParameterControllerInterface_SetFloatParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioParameterControllerInterface, nullptr, "SetFloatParameter", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioParameterControllerInterface_SetFloatParameter_Statics::AudioParameterControllerInterface_eventSetFloatParameter_Parms), Z_Construct_UFunction_UAudioParameterControllerInterface_SetFloatParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioParameterControllerInterface_SetFloatParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioParameterControllerInterface_SetFloatParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioParameterControllerInterface_SetFloatParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioParameterControllerInterface_SetFloatParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioParameterControllerInterface_SetFloatParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioParameterControllerInterface_SetIntArrayParameter_Statics
	{
		struct AudioParameterControllerInterface_eventSetIntArrayParameter_Parms
		{
			FName InName;
			TArray<int32> InValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAudioParameterControllerInterface_SetIntArrayParameter_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioParameterControllerInterface_eventSetIntArrayParameter_Parms, InName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAudioParameterControllerInterface_SetIntArrayParameter_Statics::NewProp_InValue_Inner = { "InValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioParameterControllerInterface_SetIntArrayParameter_Statics::NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAudioParameterControllerInterface_SetIntArrayParameter_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioParameterControllerInterface_eventSetIntArrayParameter_Parms, InValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAudioParameterControllerInterface_SetIntArrayParameter_Statics::NewProp_InValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioParameterControllerInterface_SetIntArrayParameter_Statics::NewProp_InValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioParameterControllerInterface_SetIntArrayParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioParameterControllerInterface_SetIntArrayParameter_Statics::NewProp_InName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioParameterControllerInterface_SetIntArrayParameter_Statics::NewProp_InValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioParameterControllerInterface_SetIntArrayParameter_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioParameterControllerInterface_SetIntArrayParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Parameter" },
		{ "Comment", "// Sets a named Int32 Array\n" },
		{ "DisplayName", "Set Integer Array Parameter" },
		{ "ModuleRelativePath", "Public/AudioParameterControllerInterface.h" },
		{ "ToolTip", "Sets a named Int32 Array" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioParameterControllerInterface_SetIntArrayParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioParameterControllerInterface, nullptr, "SetIntArrayParameter", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioParameterControllerInterface_SetIntArrayParameter_Statics::AudioParameterControllerInterface_eventSetIntArrayParameter_Parms), Z_Construct_UFunction_UAudioParameterControllerInterface_SetIntArrayParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioParameterControllerInterface_SetIntArrayParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioParameterControllerInterface_SetIntArrayParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioParameterControllerInterface_SetIntArrayParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioParameterControllerInterface_SetIntArrayParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioParameterControllerInterface_SetIntArrayParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioParameterControllerInterface_SetIntParameter_Statics
	{
		struct AudioParameterControllerInterface_eventSetIntParameter_Parms
		{
			FName InName;
			int32 InInt;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InInt;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAudioParameterControllerInterface_SetIntParameter_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioParameterControllerInterface_eventSetIntParameter_Parms, InName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAudioParameterControllerInterface_SetIntParameter_Statics::NewProp_InInt = { "InInt", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioParameterControllerInterface_eventSetIntParameter_Parms, InInt), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioParameterControllerInterface_SetIntParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioParameterControllerInterface_SetIntParameter_Statics::NewProp_InName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioParameterControllerInterface_SetIntParameter_Statics::NewProp_InInt,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioParameterControllerInterface_SetIntParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Parameter" },
		{ "Comment", "// Sets a named Int32\n" },
		{ "DisplayName", "Set Integer Parameter" },
		{ "ModuleRelativePath", "Public/AudioParameterControllerInterface.h" },
		{ "ToolTip", "Sets a named Int32" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioParameterControllerInterface_SetIntParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioParameterControllerInterface, nullptr, "SetIntParameter", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioParameterControllerInterface_SetIntParameter_Statics::AudioParameterControllerInterface_eventSetIntParameter_Parms), Z_Construct_UFunction_UAudioParameterControllerInterface_SetIntParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioParameterControllerInterface_SetIntParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioParameterControllerInterface_SetIntParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioParameterControllerInterface_SetIntParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioParameterControllerInterface_SetIntParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioParameterControllerInterface_SetIntParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioParameterControllerInterface_SetObjectArrayParameter_Statics
	{
		struct AudioParameterControllerInterface_eventSetObjectArrayParameter_Parms
		{
			FName InName;
			TArray<UObject*> InValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAudioParameterControllerInterface_SetObjectArrayParameter_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioParameterControllerInterface_eventSetObjectArrayParameter_Parms, InName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioParameterControllerInterface_SetObjectArrayParameter_Statics::NewProp_InValue_Inner = { "InValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioParameterControllerInterface_SetObjectArrayParameter_Statics::NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAudioParameterControllerInterface_SetObjectArrayParameter_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioParameterControllerInterface_eventSetObjectArrayParameter_Parms, InValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAudioParameterControllerInterface_SetObjectArrayParameter_Statics::NewProp_InValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioParameterControllerInterface_SetObjectArrayParameter_Statics::NewProp_InValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioParameterControllerInterface_SetObjectArrayParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioParameterControllerInterface_SetObjectArrayParameter_Statics::NewProp_InName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioParameterControllerInterface_SetObjectArrayParameter_Statics::NewProp_InValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioParameterControllerInterface_SetObjectArrayParameter_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioParameterControllerInterface_SetObjectArrayParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Parameter" },
		{ "Comment", "// Sets a named UObject Array\n" },
		{ "DisplayName", "Set Object Array Parameter" },
		{ "ModuleRelativePath", "Public/AudioParameterControllerInterface.h" },
		{ "ToolTip", "Sets a named UObject Array" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioParameterControllerInterface_SetObjectArrayParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioParameterControllerInterface, nullptr, "SetObjectArrayParameter", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioParameterControllerInterface_SetObjectArrayParameter_Statics::AudioParameterControllerInterface_eventSetObjectArrayParameter_Parms), Z_Construct_UFunction_UAudioParameterControllerInterface_SetObjectArrayParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioParameterControllerInterface_SetObjectArrayParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioParameterControllerInterface_SetObjectArrayParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioParameterControllerInterface_SetObjectArrayParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioParameterControllerInterface_SetObjectArrayParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioParameterControllerInterface_SetObjectArrayParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioParameterControllerInterface_SetObjectParameter_Statics
	{
		struct AudioParameterControllerInterface_eventSetObjectParameter_Parms
		{
			FName InName;
			UObject* InValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAudioParameterControllerInterface_SetObjectParameter_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioParameterControllerInterface_eventSetObjectParameter_Parms, InName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAudioParameterControllerInterface_SetObjectParameter_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioParameterControllerInterface_eventSetObjectParameter_Parms, InValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioParameterControllerInterface_SetObjectParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioParameterControllerInterface_SetObjectParameter_Statics::NewProp_InName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioParameterControllerInterface_SetObjectParameter_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioParameterControllerInterface_SetObjectParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Parameter" },
		{ "Comment", "// Sets a named UObject\n" },
		{ "DisplayName", "Set Object Parameter" },
		{ "ModuleRelativePath", "Public/AudioParameterControllerInterface.h" },
		{ "ToolTip", "Sets a named UObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioParameterControllerInterface_SetObjectParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioParameterControllerInterface, nullptr, "SetObjectParameter", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioParameterControllerInterface_SetObjectParameter_Statics::AudioParameterControllerInterface_eventSetObjectParameter_Parms), Z_Construct_UFunction_UAudioParameterControllerInterface_SetObjectParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioParameterControllerInterface_SetObjectParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioParameterControllerInterface_SetObjectParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioParameterControllerInterface_SetObjectParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioParameterControllerInterface_SetObjectParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioParameterControllerInterface_SetObjectParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioParameterControllerInterface_SetParameters_Blueprint_Statics
	{
		struct AudioParameterControllerInterface_eventSetParameters_Blueprint_Parms
		{
			TArray<FAudioParameter> InParameters;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InParameters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InParameters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InParameters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAudioParameterControllerInterface_SetParameters_Blueprint_Statics::NewProp_InParameters_Inner = { "InParameters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAudioParameter, METADATA_PARAMS(nullptr, 0) }; // 2206304397
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioParameterControllerInterface_SetParameters_Blueprint_Statics::NewProp_InParameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAudioParameterControllerInterface_SetParameters_Blueprint_Statics::NewProp_InParameters = { "InParameters", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioParameterControllerInterface_eventSetParameters_Blueprint_Parms, InParameters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAudioParameterControllerInterface_SetParameters_Blueprint_Statics::NewProp_InParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioParameterControllerInterface_SetParameters_Blueprint_Statics::NewProp_InParameters_MetaData)) }; // 2206304397
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioParameterControllerInterface_SetParameters_Blueprint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioParameterControllerInterface_SetParameters_Blueprint_Statics::NewProp_InParameters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioParameterControllerInterface_SetParameters_Blueprint_Statics::NewProp_InParameters,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioParameterControllerInterface_SetParameters_Blueprint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Parameter" },
		{ "Comment", "// Sets an array of parameters as a batch\n" },
		{ "DisplayName", "Set Parameters" },
		{ "ModuleRelativePath", "Public/AudioParameterControllerInterface.h" },
		{ "ToolTip", "Sets an array of parameters as a batch" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioParameterControllerInterface_SetParameters_Blueprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioParameterControllerInterface, nullptr, "SetParameters_Blueprint", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioParameterControllerInterface_SetParameters_Blueprint_Statics::AudioParameterControllerInterface_eventSetParameters_Blueprint_Parms), Z_Construct_UFunction_UAudioParameterControllerInterface_SetParameters_Blueprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioParameterControllerInterface_SetParameters_Blueprint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioParameterControllerInterface_SetParameters_Blueprint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioParameterControllerInterface_SetParameters_Blueprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioParameterControllerInterface_SetParameters_Blueprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioParameterControllerInterface_SetParameters_Blueprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioParameterControllerInterface_SetStringArrayParameter_Statics
	{
		struct AudioParameterControllerInterface_eventSetStringArrayParameter_Parms
		{
			FName InName;
			TArray<FString> InValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_InValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAudioParameterControllerInterface_SetStringArrayParameter_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioParameterControllerInterface_eventSetStringArrayParameter_Parms, InName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAudioParameterControllerInterface_SetStringArrayParameter_Statics::NewProp_InValue_Inner = { "InValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioParameterControllerInterface_SetStringArrayParameter_Statics::NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAudioParameterControllerInterface_SetStringArrayParameter_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioParameterControllerInterface_eventSetStringArrayParameter_Parms, InValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAudioParameterControllerInterface_SetStringArrayParameter_Statics::NewProp_InValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioParameterControllerInterface_SetStringArrayParameter_Statics::NewProp_InValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioParameterControllerInterface_SetStringArrayParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioParameterControllerInterface_SetStringArrayParameter_Statics::NewProp_InName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioParameterControllerInterface_SetStringArrayParameter_Statics::NewProp_InValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioParameterControllerInterface_SetStringArrayParameter_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioParameterControllerInterface_SetStringArrayParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Parameter" },
		{ "Comment", "// Sets a named String Array\n" },
		{ "DisplayName", "Set String Array Parameter" },
		{ "ModuleRelativePath", "Public/AudioParameterControllerInterface.h" },
		{ "ToolTip", "Sets a named String Array" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioParameterControllerInterface_SetStringArrayParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioParameterControllerInterface, nullptr, "SetStringArrayParameter", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioParameterControllerInterface_SetStringArrayParameter_Statics::AudioParameterControllerInterface_eventSetStringArrayParameter_Parms), Z_Construct_UFunction_UAudioParameterControllerInterface_SetStringArrayParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioParameterControllerInterface_SetStringArrayParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioParameterControllerInterface_SetStringArrayParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioParameterControllerInterface_SetStringArrayParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioParameterControllerInterface_SetStringArrayParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioParameterControllerInterface_SetStringArrayParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioParameterControllerInterface_SetStringParameter_Statics
	{
		struct AudioParameterControllerInterface_eventSetStringParameter_Parms
		{
			FName InName;
			FString InValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAudioParameterControllerInterface_SetStringParameter_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioParameterControllerInterface_eventSetStringParameter_Parms, InName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioParameterControllerInterface_SetStringParameter_Statics::NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAudioParameterControllerInterface_SetStringParameter_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioParameterControllerInterface_eventSetStringParameter_Parms, InValue), METADATA_PARAMS(Z_Construct_UFunction_UAudioParameterControllerInterface_SetStringParameter_Statics::NewProp_InValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioParameterControllerInterface_SetStringParameter_Statics::NewProp_InValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioParameterControllerInterface_SetStringParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioParameterControllerInterface_SetStringParameter_Statics::NewProp_InName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioParameterControllerInterface_SetStringParameter_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioParameterControllerInterface_SetStringParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Parameter" },
		{ "Comment", "// Sets a named String\n" },
		{ "DisplayName", "Set String Parameter" },
		{ "ModuleRelativePath", "Public/AudioParameterControllerInterface.h" },
		{ "ToolTip", "Sets a named String" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioParameterControllerInterface_SetStringParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioParameterControllerInterface, nullptr, "SetStringParameter", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioParameterControllerInterface_SetStringParameter_Statics::AudioParameterControllerInterface_eventSetStringParameter_Parms), Z_Construct_UFunction_UAudioParameterControllerInterface_SetStringParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioParameterControllerInterface_SetStringParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioParameterControllerInterface_SetStringParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioParameterControllerInterface_SetStringParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioParameterControllerInterface_SetStringParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioParameterControllerInterface_SetStringParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioParameterControllerInterface_SetTriggerParameter_Statics
	{
		struct AudioParameterControllerInterface_eventSetTriggerParameter_Parms
		{
			FName InName;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAudioParameterControllerInterface_SetTriggerParameter_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioParameterControllerInterface_eventSetTriggerParameter_Parms, InName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioParameterControllerInterface_SetTriggerParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioParameterControllerInterface_SetTriggerParameter_Statics::NewProp_InName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioParameterControllerInterface_SetTriggerParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Parameter" },
		{ "Comment", "// Executes a named trigger.  Does *not* cache trigger value, so only executes if the sound\n// is already playing.  If the intent is for the trigger to execute immediately (if playing)\n// and be called on initialization for all future instances, call 'SetBoolParameter' with the\n// intended initial trigger behavior (true if trigger desired on initialization, false if not).\n" },
		{ "DisplayName", "Execute Trigger Parameter" },
		{ "ModuleRelativePath", "Public/AudioParameterControllerInterface.h" },
		{ "ToolTip", "Executes a named trigger.  Does *not* cache trigger value, so only executes if the sound\nis already playing.  If the intent is for the trigger to execute immediately (if playing)\nand be called on initialization for all future instances, call 'SetBoolParameter' with the\nintended initial trigger behavior (true if trigger desired on initialization, false if not)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioParameterControllerInterface_SetTriggerParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioParameterControllerInterface, nullptr, "SetTriggerParameter", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioParameterControllerInterface_SetTriggerParameter_Statics::AudioParameterControllerInterface_eventSetTriggerParameter_Parms), Z_Construct_UFunction_UAudioParameterControllerInterface_SetTriggerParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioParameterControllerInterface_SetTriggerParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioParameterControllerInterface_SetTriggerParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioParameterControllerInterface_SetTriggerParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioParameterControllerInterface_SetTriggerParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioParameterControllerInterface_SetTriggerParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioParameterControllerInterface);
	UClass* Z_Construct_UClass_UAudioParameterControllerInterface_NoRegister()
	{
		return UAudioParameterControllerInterface::StaticClass();
	}
	struct Z_Construct_UClass_UAudioParameterControllerInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAudioParameterControllerInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioExtensions,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAudioParameterControllerInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAudioParameterControllerInterface_ResetParameters, "ResetParameters" }, // 1528877106
		{ &Z_Construct_UFunction_UAudioParameterControllerInterface_SetBoolArrayParameter, "SetBoolArrayParameter" }, // 69117296
		{ &Z_Construct_UFunction_UAudioParameterControllerInterface_SetBoolParameter, "SetBoolParameter" }, // 3132743508
		{ &Z_Construct_UFunction_UAudioParameterControllerInterface_SetFloatArrayParameter, "SetFloatArrayParameter" }, // 2973582811
		{ &Z_Construct_UFunction_UAudioParameterControllerInterface_SetFloatParameter, "SetFloatParameter" }, // 1262922213
		{ &Z_Construct_UFunction_UAudioParameterControllerInterface_SetIntArrayParameter, "SetIntArrayParameter" }, // 3085537844
		{ &Z_Construct_UFunction_UAudioParameterControllerInterface_SetIntParameter, "SetIntParameter" }, // 728511776
		{ &Z_Construct_UFunction_UAudioParameterControllerInterface_SetObjectArrayParameter, "SetObjectArrayParameter" }, // 243754719
		{ &Z_Construct_UFunction_UAudioParameterControllerInterface_SetObjectParameter, "SetObjectParameter" }, // 3379825958
		{ &Z_Construct_UFunction_UAudioParameterControllerInterface_SetParameters_Blueprint, "SetParameters_Blueprint" }, // 5924070
		{ &Z_Construct_UFunction_UAudioParameterControllerInterface_SetStringArrayParameter, "SetStringArrayParameter" }, // 3271811279
		{ &Z_Construct_UFunction_UAudioParameterControllerInterface_SetStringParameter, "SetStringParameter" }, // 2130608009
		{ &Z_Construct_UFunction_UAudioParameterControllerInterface_SetTriggerParameter, "SetTriggerParameter" }, // 488635276
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioParameterControllerInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/AudioParameterControllerInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAudioParameterControllerInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAudioParameterControllerInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioParameterControllerInterface_Statics::ClassParams = {
		&UAudioParameterControllerInterface::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAudioParameterControllerInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioParameterControllerInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAudioParameterControllerInterface()
	{
		if (!Z_Registration_Info_UClass_UAudioParameterControllerInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioParameterControllerInterface.OuterSingleton, Z_Construct_UClass_UAudioParameterControllerInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAudioParameterControllerInterface.OuterSingleton;
	}
	template<> AUDIOEXTENSIONS_API UClass* StaticClass<UAudioParameterControllerInterface>()
	{
		return UAudioParameterControllerInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioParameterControllerInterface);
	UAudioParameterControllerInterface::~UAudioParameterControllerInterface() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_AudioParameterControllerInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_AudioParameterControllerInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAudioParameterControllerInterface, UAudioParameterControllerInterface::StaticClass, TEXT("UAudioParameterControllerInterface"), &Z_Registration_Info_UClass_UAudioParameterControllerInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioParameterControllerInterface), 1362493948U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_AudioParameterControllerInterface_h_3369429718(TEXT("/Script/AudioExtensions"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_AudioParameterControllerInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_AudioParameterControllerInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
