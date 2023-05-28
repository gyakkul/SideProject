// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/KeysAndChannels/MovieSceneScriptingBool.h"
#include "SequencerScriptingRange.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneScriptingBool() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameTime();
	SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneScriptingBoolChannel();
	SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneScriptingBoolChannel_NoRegister();
	SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneScriptingBoolKey();
	SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneScriptingBoolKey_NoRegister();
	SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneScriptingChannel();
	SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneScriptingKey();
	SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneScriptingKey_NoRegister();
	SEQUENCERSCRIPTING_API UEnum* Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit();
	SEQUENCERSCRIPTING_API UScriptStruct* Z_Construct_UScriptStruct_FSequencerScriptingRange();
	UPackage* Z_Construct_UPackage__Script_SequencerScripting();
// End Cross Module References
	DEFINE_FUNCTION(UMovieSceneScriptingBoolKey::execSetValue)
	{
		P_GET_UBOOL(Z_Param_InNewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetValue(Z_Param_InNewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneScriptingBoolKey::execGetValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneScriptingBoolKey::execSetTime)
	{
		P_GET_STRUCT_REF(FFrameNumber,Z_Param_Out_NewFrameNumber);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SubFrame);
		P_GET_ENUM(ESequenceTimeUnit,Z_Param_TimeUnit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTime(Z_Param_Out_NewFrameNumber,Z_Param_SubFrame,ESequenceTimeUnit(Z_Param_TimeUnit));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneScriptingBoolKey::execGetTime)
	{
		P_GET_ENUM(ESequenceTimeUnit,Z_Param_TimeUnit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFrameTime*)Z_Param__Result=P_THIS->GetTime(ESequenceTimeUnit(Z_Param_TimeUnit));
		P_NATIVE_END;
	}
	void UMovieSceneScriptingBoolKey::StaticRegisterNativesUMovieSceneScriptingBoolKey()
	{
		UClass* Class = UMovieSceneScriptingBoolKey::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTime", &UMovieSceneScriptingBoolKey::execGetTime },
			{ "GetValue", &UMovieSceneScriptingBoolKey::execGetValue },
			{ "SetTime", &UMovieSceneScriptingBoolKey::execSetTime },
			{ "SetValue", &UMovieSceneScriptingBoolKey::execSetValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMovieSceneScriptingBoolKey_GetTime_Statics
	{
		struct FFrameTime
		{
			FFrameNumber FrameNumber;
			float SubFrame;
		};

		struct MovieSceneScriptingBoolKey_eventGetTime_Parms
		{
			ESequenceTimeUnit TimeUnit;
			FFrameTime ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_TimeUnit_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TimeUnit;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneScriptingBoolKey_GetTime_Statics::NewProp_TimeUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMovieSceneScriptingBoolKey_GetTime_Statics::NewProp_TimeUnit = { "TimeUnit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingBoolKey_eventGetTime_Parms, TimeUnit), Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit, METADATA_PARAMS(nullptr, 0) }; // 430593730
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneScriptingBoolKey_GetTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingBoolKey_eventGetTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FFrameTime, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingBoolKey_GetTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingBoolKey_GetTime_Statics::NewProp_TimeUnit_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingBoolKey_GetTime_Statics::NewProp_TimeUnit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingBoolKey_GetTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneScriptingBoolKey_GetTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Gets the time for this key from the owning channel.\n\x09* @param TimeUnit\x09Should the time be returned in Display Rate frames (possibly with a sub-frame value) or in Tick Resolution with no sub-frame values?\n\x09* @return\x09\x09\x09The time of this key which combines both the frame number and the sub-frame it is on. Sub-frame will be zero if you request Tick Resolution.\n\x09*/" },
		{ "CPP_Default_TimeUnit", "DisplayRate" },
		{ "DisplayName", "Get Time (Bool)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingBool.h" },
		{ "ToolTip", "Gets the time for this key from the owning channel.\n@param TimeUnit       Should the time be returned in Display Rate frames (possibly with a sub-frame value) or in Tick Resolution with no sub-frame values?\n@return                       The time of this key which combines both the frame number and the sub-frame it is on. Sub-frame will be zero if you request Tick Resolution." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingBoolKey_GetTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingBoolKey, nullptr, "GetTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneScriptingBoolKey_GetTime_Statics::MovieSceneScriptingBoolKey_eventGetTime_Parms), Z_Construct_UFunction_UMovieSceneScriptingBoolKey_GetTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingBoolKey_GetTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneScriptingBoolKey_GetTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingBoolKey_GetTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneScriptingBoolKey_GetTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingBoolKey_GetTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneScriptingBoolKey_GetValue_Statics
	{
		struct MovieSceneScriptingBoolKey_eventGetValue_Parms
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
	void Z_Construct_UFunction_UMovieSceneScriptingBoolKey_GetValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieSceneScriptingBoolKey_eventGetValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneScriptingBoolKey_GetValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MovieSceneScriptingBoolKey_eventGetValue_Parms), &Z_Construct_UFunction_UMovieSceneScriptingBoolKey_GetValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingBoolKey_GetValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingBoolKey_GetValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneScriptingBoolKey_GetValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Gets the value for this key from the owning channel.\n\x09* @return\x09The value for this key.\n\x09*/" },
		{ "DisplayName", "Get Value (Bool)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingBool.h" },
		{ "ToolTip", "Gets the value for this key from the owning channel.\n@return       The value for this key." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingBoolKey_GetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingBoolKey, nullptr, "GetValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneScriptingBoolKey_GetValue_Statics::MovieSceneScriptingBoolKey_eventGetValue_Parms), Z_Construct_UFunction_UMovieSceneScriptingBoolKey_GetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingBoolKey_GetValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneScriptingBoolKey_GetValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingBoolKey_GetValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneScriptingBoolKey_GetValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingBoolKey_GetValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneScriptingBoolKey_SetTime_Statics
	{
		struct MovieSceneScriptingBoolKey_eventSetTime_Parms
		{
			FFrameNumber NewFrameNumber;
			float SubFrame;
			ESequenceTimeUnit TimeUnit;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewFrameNumber_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewFrameNumber;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SubFrame;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TimeUnit_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TimeUnit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneScriptingBoolKey_SetTime_Statics::NewProp_NewFrameNumber_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneScriptingBoolKey_SetTime_Statics::NewProp_NewFrameNumber = { "NewFrameNumber", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingBoolKey_eventSetTime_Parms, NewFrameNumber), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneScriptingBoolKey_SetTime_Statics::NewProp_NewFrameNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingBoolKey_SetTime_Statics::NewProp_NewFrameNumber_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneScriptingBoolKey_SetTime_Statics::NewProp_SubFrame = { "SubFrame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingBoolKey_eventSetTime_Parms, SubFrame), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneScriptingBoolKey_SetTime_Statics::NewProp_TimeUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMovieSceneScriptingBoolKey_SetTime_Statics::NewProp_TimeUnit = { "TimeUnit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingBoolKey_eventSetTime_Parms, TimeUnit), Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit, METADATA_PARAMS(nullptr, 0) }; // 430593730
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingBoolKey_SetTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingBoolKey_SetTime_Statics::NewProp_NewFrameNumber,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingBoolKey_SetTime_Statics::NewProp_SubFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingBoolKey_SetTime_Statics::NewProp_TimeUnit_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingBoolKey_SetTime_Statics::NewProp_TimeUnit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneScriptingBoolKey_SetTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Sets the time for this key in the owning channel. Will replace any key that already exists at that frame number in this channel.\n\x09* @param NewFrameNumber\x09What frame should this key be moved to? This should be in the time unit specified by TimeUnit.\n\x09* @param SubFrame\x09\x09If using Display Rate time, what is the sub-frame this should go to? Clamped [0-1), and ignored with when TimeUnit is set to Tick Resolution.\n\x09* @param TimeUnit\x09\x09Should the NewFrameNumber be interpreted as Display Rate frames or in Tick Resolution?\n\x09*/" },
		{ "CPP_Default_SubFrame", "0.000000" },
		{ "CPP_Default_TimeUnit", "DisplayRate" },
		{ "DisplayName", "Set Time (Bool)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingBool.h" },
		{ "ToolTip", "Sets the time for this key in the owning channel. Will replace any key that already exists at that frame number in this channel.\n@param NewFrameNumber What frame should this key be moved to? This should be in the time unit specified by TimeUnit.\n@param SubFrame               If using Display Rate time, what is the sub-frame this should go to? Clamped [0-1), and ignored with when TimeUnit is set to Tick Resolution.\n@param TimeUnit               Should the NewFrameNumber be interpreted as Display Rate frames or in Tick Resolution?" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingBoolKey_SetTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingBoolKey, nullptr, "SetTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneScriptingBoolKey_SetTime_Statics::MovieSceneScriptingBoolKey_eventSetTime_Parms), Z_Construct_UFunction_UMovieSceneScriptingBoolKey_SetTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingBoolKey_SetTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneScriptingBoolKey_SetTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingBoolKey_SetTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneScriptingBoolKey_SetTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingBoolKey_SetTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneScriptingBoolKey_SetValue_Statics
	{
		struct MovieSceneScriptingBoolKey_eventSetValue_Parms
		{
			bool InNewValue;
		};
		static void NewProp_InNewValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InNewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMovieSceneScriptingBoolKey_SetValue_Statics::NewProp_InNewValue_SetBit(void* Obj)
	{
		((MovieSceneScriptingBoolKey_eventSetValue_Parms*)Obj)->InNewValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneScriptingBoolKey_SetValue_Statics::NewProp_InNewValue = { "InNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MovieSceneScriptingBoolKey_eventSetValue_Parms), &Z_Construct_UFunction_UMovieSceneScriptingBoolKey_SetValue_Statics::NewProp_InNewValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingBoolKey_SetValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingBoolKey_SetValue_Statics::NewProp_InNewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneScriptingBoolKey_SetValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Sets the value for this key, reflecting it in the owning channel.\n\x09* @param InNewValue\x09The new value for this key.\n\x09*/" },
		{ "DisplayName", "Set Value (Bool)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingBool.h" },
		{ "ToolTip", "Sets the value for this key, reflecting it in the owning channel.\n@param InNewValue     The new value for this key." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingBoolKey_SetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingBoolKey, nullptr, "SetValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneScriptingBoolKey_SetValue_Statics::MovieSceneScriptingBoolKey_eventSetValue_Parms), Z_Construct_UFunction_UMovieSceneScriptingBoolKey_SetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingBoolKey_SetValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneScriptingBoolKey_SetValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingBoolKey_SetValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneScriptingBoolKey_SetValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingBoolKey_SetValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneScriptingBoolKey);
	UClass* Z_Construct_UClass_UMovieSceneScriptingBoolKey_NoRegister()
	{
		return UMovieSceneScriptingBoolKey::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneScriptingBoolKey_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneScriptingBoolKey_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneScriptingKey,
		(UObject* (*)())Z_Construct_UPackage__Script_SequencerScripting,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMovieSceneScriptingBoolKey_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieSceneScriptingBoolKey_GetTime, "GetTime" }, // 4113244226
		{ &Z_Construct_UFunction_UMovieSceneScriptingBoolKey_GetValue, "GetValue" }, // 4223306833
		{ &Z_Construct_UFunction_UMovieSceneScriptingBoolKey_SetTime, "SetTime" }, // 1818965919
		{ &Z_Construct_UFunction_UMovieSceneScriptingBoolKey_SetValue, "SetValue" }, // 3490530156
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneScriptingBoolKey_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Exposes a Sequencer bool type key to Python/Blueprints.\n* Stores a reference to the data so changes to this class are forwarded onto the underlying data structures.\n*/" },
		{ "IncludePath", "KeysAndChannels/MovieSceneScriptingBool.h" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingBool.h" },
		{ "ToolTip", "Exposes a Sequencer bool type key to Python/Blueprints.\nStores a reference to the data so changes to this class are forwarded onto the underlying data structures." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneScriptingBoolKey_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneScriptingBoolKey>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneScriptingBoolKey_Statics::ClassParams = {
		&UMovieSceneScriptingBoolKey::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneScriptingBoolKey_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneScriptingBoolKey_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneScriptingBoolKey()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneScriptingBoolKey.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneScriptingBoolKey.OuterSingleton, Z_Construct_UClass_UMovieSceneScriptingBoolKey_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneScriptingBoolKey.OuterSingleton;
	}
	template<> SEQUENCERSCRIPTING_API UClass* StaticClass<UMovieSceneScriptingBoolKey>()
	{
		return UMovieSceneScriptingBoolKey::StaticClass();
	}
	UMovieSceneScriptingBoolKey::UMovieSceneScriptingBoolKey(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneScriptingBoolKey);
	UMovieSceneScriptingBoolKey::~UMovieSceneScriptingBoolKey() {}
	DEFINE_FUNCTION(UMovieSceneScriptingBoolChannel::execHasDefault)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasDefault();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneScriptingBoolChannel::execRemoveDefault)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveDefault();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneScriptingBoolChannel::execGetDefault)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetDefault();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneScriptingBoolChannel::execSetDefault)
	{
		P_GET_UBOOL(Z_Param_InDefaultValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDefault(Z_Param_InDefaultValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneScriptingBoolChannel::execComputeEffectiveRange)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSequencerScriptingRange*)Z_Param__Result=P_THIS->ComputeEffectiveRange();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneScriptingBoolChannel::execEvaluateKeys)
	{
		P_GET_STRUCT(FSequencerScriptingRange,Z_Param_Range);
		P_GET_STRUCT(FFrameRate,Z_Param_FrameRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<bool>*)Z_Param__Result=P_THIS->EvaluateKeys(Z_Param_Range,Z_Param_FrameRate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneScriptingBoolChannel::execGetNumKeys)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumKeys();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneScriptingBoolChannel::execGetKeys)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UMovieSceneScriptingKey*>*)Z_Param__Result=P_THIS->GetKeys();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneScriptingBoolChannel::execRemoveKey)
	{
		P_GET_OBJECT(UMovieSceneScriptingKey,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveKey(Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneScriptingBoolChannel::execAddKey)
	{
		P_GET_STRUCT_REF(FFrameNumber,Z_Param_Out_InTime);
		P_GET_UBOOL(Z_Param_NewValue);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SubFrame);
		P_GET_ENUM(ESequenceTimeUnit,Z_Param_TimeUnit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMovieSceneScriptingBoolKey**)Z_Param__Result=P_THIS->AddKey(Z_Param_Out_InTime,Z_Param_NewValue,Z_Param_SubFrame,ESequenceTimeUnit(Z_Param_TimeUnit));
		P_NATIVE_END;
	}
	void UMovieSceneScriptingBoolChannel::StaticRegisterNativesUMovieSceneScriptingBoolChannel()
	{
		UClass* Class = UMovieSceneScriptingBoolChannel::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddKey", &UMovieSceneScriptingBoolChannel::execAddKey },
			{ "ComputeEffectiveRange", &UMovieSceneScriptingBoolChannel::execComputeEffectiveRange },
			{ "EvaluateKeys", &UMovieSceneScriptingBoolChannel::execEvaluateKeys },
			{ "GetDefault", &UMovieSceneScriptingBoolChannel::execGetDefault },
			{ "GetKeys", &UMovieSceneScriptingBoolChannel::execGetKeys },
			{ "GetNumKeys", &UMovieSceneScriptingBoolChannel::execGetNumKeys },
			{ "HasDefault", &UMovieSceneScriptingBoolChannel::execHasDefault },
			{ "RemoveDefault", &UMovieSceneScriptingBoolChannel::execRemoveDefault },
			{ "RemoveKey", &UMovieSceneScriptingBoolChannel::execRemoveKey },
			{ "SetDefault", &UMovieSceneScriptingBoolChannel::execSetDefault },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_AddKey_Statics
	{
		struct MovieSceneScriptingBoolChannel_eventAddKey_Parms
		{
			FFrameNumber InTime;
			bool NewValue;
			float SubFrame;
			ESequenceTimeUnit TimeUnit;
			UMovieSceneScriptingBoolKey* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InTime_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InTime;
		static void NewProp_NewValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SubFrame;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TimeUnit_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TimeUnit;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_AddKey_Statics::NewProp_InTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_AddKey_Statics::NewProp_InTime = { "InTime", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingBoolChannel_eventAddKey_Parms, InTime), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_AddKey_Statics::NewProp_InTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_AddKey_Statics::NewProp_InTime_MetaData)) };
	void Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_AddKey_Statics::NewProp_NewValue_SetBit(void* Obj)
	{
		((MovieSceneScriptingBoolChannel_eventAddKey_Parms*)Obj)->NewValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_AddKey_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MovieSceneScriptingBoolChannel_eventAddKey_Parms), &Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_AddKey_Statics::NewProp_NewValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_AddKey_Statics::NewProp_SubFrame = { "SubFrame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingBoolChannel_eventAddKey_Parms, SubFrame), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_AddKey_Statics::NewProp_TimeUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_AddKey_Statics::NewProp_TimeUnit = { "TimeUnit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingBoolChannel_eventAddKey_Parms, TimeUnit), Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit, METADATA_PARAMS(nullptr, 0) }; // 430593730
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_AddKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingBoolChannel_eventAddKey_Parms, ReturnValue), Z_Construct_UClass_UMovieSceneScriptingBoolKey_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_AddKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_AddKey_Statics::NewProp_InTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_AddKey_Statics::NewProp_NewValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_AddKey_Statics::NewProp_SubFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_AddKey_Statics::NewProp_TimeUnit_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_AddKey_Statics::NewProp_TimeUnit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_AddKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_AddKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Add a key to this channel. This initializes a new key and returns a reference to it.\n\x09* @param\x09InTime\x09\x09\x09The frame this key should go on. Respects TimeUnit to determine if it is a display rate frame or a tick resolution frame.\n\x09* @param\x09NewValue\x09\x09The value that this key should be created with.\n\x09* @param\x09SubFrame\x09\x09Optional [0-1) clamped sub-frame to put this key on. Ignored if TimeUnit is set to Tick Resolution.\n\x09* @param\x09TimeUnit \x09\x09Is the specified InTime in Display Rate frames or Tick Resolution.\n\x09* @return\x09The key that was created with the specified values at the specified time.\n\x09*/" },
		{ "CPP_Default_SubFrame", "0.000000" },
		{ "CPP_Default_TimeUnit", "DisplayRate" },
		{ "DisplayName", "Add Key (Bool)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingBool.h" },
		{ "ToolTip", "Add a key to this channel. This initializes a new key and returns a reference to it.\n@param        InTime                  The frame this key should go on. Respects TimeUnit to determine if it is a display rate frame or a tick resolution frame.\n@param        NewValue                The value that this key should be created with.\n@param        SubFrame                Optional [0-1) clamped sub-frame to put this key on. Ignored if TimeUnit is set to Tick Resolution.\n@param        TimeUnit                Is the specified InTime in Display Rate frames or Tick Resolution.\n@return       The key that was created with the specified values at the specified time." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_AddKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingBoolChannel, nullptr, "AddKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_AddKey_Statics::MovieSceneScriptingBoolChannel_eventAddKey_Parms), Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_AddKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_AddKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_AddKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_AddKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_AddKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_AddKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_ComputeEffectiveRange_Statics
	{
		struct MovieSceneScriptingBoolChannel_eventComputeEffectiveRange_Parms
		{
			FSequencerScriptingRange ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_ComputeEffectiveRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingBoolChannel_eventComputeEffectiveRange_Parms, ReturnValue), Z_Construct_UScriptStruct_FSequencerScriptingRange, METADATA_PARAMS(nullptr, 0) }; // 4025213987
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_ComputeEffectiveRange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_ComputeEffectiveRange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_ComputeEffectiveRange_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Compute the effective range of this channel, for example, the extents of its key times\n\x09*\n\x09* @return A range that represents the greatest range of times occupied by this channel, in the sequence's frame resolution\n\x09*/" },
		{ "DisplayName", "Compute Effective Range (Bool)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingBool.h" },
		{ "ToolTip", "Compute the effective range of this channel, for example, the extents of its key times\n\n@return A range that represents the greatest range of times occupied by this channel, in the sequence's frame resolution" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_ComputeEffectiveRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingBoolChannel, nullptr, "ComputeEffectiveRange", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_ComputeEffectiveRange_Statics::MovieSceneScriptingBoolChannel_eventComputeEffectiveRange_Parms), Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_ComputeEffectiveRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_ComputeEffectiveRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_ComputeEffectiveRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_ComputeEffectiveRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_ComputeEffectiveRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_ComputeEffectiveRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_EvaluateKeys_Statics
	{
		struct FFrameRate
		{
			int32 Numerator;
			int32 Denominator;
		};

		struct MovieSceneScriptingBoolChannel_eventEvaluateKeys_Parms
		{
			FSequencerScriptingRange Range;
			FFrameRate FrameRate;
			TArray<bool> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Range;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FrameRate;
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_EvaluateKeys_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingBoolChannel_eventEvaluateKeys_Parms, Range), Z_Construct_UScriptStruct_FSequencerScriptingRange, METADATA_PARAMS(nullptr, 0) }; // 4025213987
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_EvaluateKeys_Statics::NewProp_FrameRate = { "FrameRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingBoolChannel_eventEvaluateKeys_Parms, FrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_EvaluateKeys_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_EvaluateKeys_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingBoolChannel_eventEvaluateKeys_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_EvaluateKeys_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_EvaluateKeys_Statics::NewProp_Range,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_EvaluateKeys_Statics::NewProp_FrameRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_EvaluateKeys_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_EvaluateKeys_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_EvaluateKeys_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Gets baked keys in this channel.\n\x09* @return\x09""An array of values contained by this channel.\n\x09*\x09\x09\x09Returns baked keys in the specified range.\n\x09*/" },
		{ "DisplayName", "Evaluate Keys (Bool)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingBool.h" },
		{ "ToolTip", "Gets baked keys in this channel.\n@return       An array of values contained by this channel.\n                      Returns baked keys in the specified range." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_EvaluateKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingBoolChannel, nullptr, "EvaluateKeys", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_EvaluateKeys_Statics::MovieSceneScriptingBoolChannel_eventEvaluateKeys_Parms), Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_EvaluateKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_EvaluateKeys_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_EvaluateKeys_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_EvaluateKeys_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_EvaluateKeys()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_EvaluateKeys_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_GetDefault_Statics
	{
		struct MovieSceneScriptingBoolChannel_eventGetDefault_Parms
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
	void Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_GetDefault_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieSceneScriptingBoolChannel_eventGetDefault_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_GetDefault_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MovieSceneScriptingBoolChannel_eventGetDefault_Parms), &Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_GetDefault_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_GetDefault_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_GetDefault_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_GetDefault_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Get this channel's default value that will be used when no keys are present. Only a valid\n\x09* value when HasDefault() returns true.\n\x09*/" },
		{ "DisplayName", "Get Default (Bool)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingBool.h" },
		{ "ToolTip", "Get this channel's default value that will be used when no keys are present. Only a valid\nvalue when HasDefault() returns true." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_GetDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingBoolChannel, nullptr, "GetDefault", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_GetDefault_Statics::MovieSceneScriptingBoolChannel_eventGetDefault_Parms), Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_GetDefault_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_GetDefault_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_GetDefault_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_GetDefault_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_GetDefault()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_GetDefault_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_GetKeys_Statics
	{
		struct MovieSceneScriptingBoolChannel_eventGetKeys_Parms
		{
			TArray<UMovieSceneScriptingKey*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_GetKeys_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMovieSceneScriptingKey_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_GetKeys_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingBoolChannel_eventGetKeys_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_GetKeys_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_GetKeys_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_GetKeys_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_GetKeys_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Gets all of the keys in this channel.\n\x09* @return\x09""An array of UMovieSceneScriptingBoolKey's contained by this channel.\n\x09*\x09\x09\x09Returns all keys even if clipped by the owning section's boundaries or outside of the current sequence play range.\n\x09*/" },
		{ "DisplayName", "Get Keys (Bool)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingBool.h" },
		{ "ToolTip", "Gets all of the keys in this channel.\n@return       An array of UMovieSceneScriptingBoolKey's contained by this channel.\n                      Returns all keys even if clipped by the owning section's boundaries or outside of the current sequence play range." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_GetKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingBoolChannel, nullptr, "GetKeys", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_GetKeys_Statics::MovieSceneScriptingBoolChannel_eventGetKeys_Parms), Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_GetKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_GetKeys_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_GetKeys_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_GetKeys_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_GetKeys()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_GetKeys_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_GetNumKeys_Statics
	{
		struct MovieSceneScriptingBoolChannel_eventGetNumKeys_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_GetNumKeys_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingBoolChannel_eventGetNumKeys_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_GetNumKeys_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_GetNumKeys_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_GetNumKeys_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Returns number of keys in this channel.\n\x09*/" },
		{ "DisplayName", "Get Num Keys (Bool)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingBool.h" },
		{ "ToolTip", "Returns number of keys in this channel." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_GetNumKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingBoolChannel, nullptr, "GetNumKeys", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_GetNumKeys_Statics::MovieSceneScriptingBoolChannel_eventGetNumKeys_Parms), Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_GetNumKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_GetNumKeys_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_GetNumKeys_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_GetNumKeys_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_GetNumKeys()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_GetNumKeys_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_HasDefault_Statics
	{
		struct MovieSceneScriptingBoolChannel_eventHasDefault_Parms
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
	void Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_HasDefault_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieSceneScriptingBoolChannel_eventHasDefault_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_HasDefault_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MovieSceneScriptingBoolChannel_eventHasDefault_Parms), &Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_HasDefault_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_HasDefault_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_HasDefault_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_HasDefault_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* @return Does this channel have a default value set?\n\x09*/" },
		{ "DisplayName", "Has Default (Bool)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingBool.h" },
		{ "ToolTip", "@return Does this channel have a default value set?" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_HasDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingBoolChannel, nullptr, "HasDefault", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_HasDefault_Statics::MovieSceneScriptingBoolChannel_eventHasDefault_Parms), Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_HasDefault_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_HasDefault_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_HasDefault_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_HasDefault_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_HasDefault()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_HasDefault_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_RemoveDefault_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_RemoveDefault_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Remove this channel's default value causing the channel to have no effect where no keys are present\n\x09*/" },
		{ "DisplayName", "Remove Default (Bool)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingBool.h" },
		{ "ToolTip", "Remove this channel's default value causing the channel to have no effect where no keys are present" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_RemoveDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingBoolChannel, nullptr, "RemoveDefault", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_RemoveDefault_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_RemoveDefault_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_RemoveDefault()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_RemoveDefault_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_RemoveKey_Statics
	{
		struct MovieSceneScriptingBoolChannel_eventRemoveKey_Parms
		{
			UMovieSceneScriptingKey* Key;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Key;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_RemoveKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingBoolChannel_eventRemoveKey_Parms, Key), Z_Construct_UClass_UMovieSceneScriptingKey_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_RemoveKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_RemoveKey_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_RemoveKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Removes the specified key. Does nothing if the key is not specified or the key belongs to another channel.\n\x09*/" },
		{ "DisplayName", "Remove Key (Bool)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingBool.h" },
		{ "ToolTip", "Removes the specified key. Does nothing if the key is not specified or the key belongs to another channel." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_RemoveKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingBoolChannel, nullptr, "RemoveKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_RemoveKey_Statics::MovieSceneScriptingBoolChannel_eventRemoveKey_Parms), Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_RemoveKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_RemoveKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_RemoveKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_RemoveKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_RemoveKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_RemoveKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_SetDefault_Statics
	{
		struct MovieSceneScriptingBoolChannel_eventSetDefault_Parms
		{
			bool InDefaultValue;
		};
		static void NewProp_InDefaultValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InDefaultValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_SetDefault_Statics::NewProp_InDefaultValue_SetBit(void* Obj)
	{
		((MovieSceneScriptingBoolChannel_eventSetDefault_Parms*)Obj)->InDefaultValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_SetDefault_Statics::NewProp_InDefaultValue = { "InDefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MovieSceneScriptingBoolChannel_eventSetDefault_Parms), &Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_SetDefault_Statics::NewProp_InDefaultValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_SetDefault_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_SetDefault_Statics::NewProp_InDefaultValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_SetDefault_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Set this channel's default value that should be used when no keys are present.\n\x09* Sets bHasDefaultValue to true automatically.\n\x09*/" },
		{ "DisplayName", "Set Default (Bool)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingBool.h" },
		{ "ToolTip", "Set this channel's default value that should be used when no keys are present.\nSets bHasDefaultValue to true automatically." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_SetDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingBoolChannel, nullptr, "SetDefault", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_SetDefault_Statics::MovieSceneScriptingBoolChannel_eventSetDefault_Parms), Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_SetDefault_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_SetDefault_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_SetDefault_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_SetDefault_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_SetDefault()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_SetDefault_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneScriptingBoolChannel);
	UClass* Z_Construct_UClass_UMovieSceneScriptingBoolChannel_NoRegister()
	{
		return UMovieSceneScriptingBoolChannel::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneScriptingBoolChannel_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneScriptingBoolChannel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneScriptingChannel,
		(UObject* (*)())Z_Construct_UPackage__Script_SequencerScripting,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMovieSceneScriptingBoolChannel_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_AddKey, "AddKey" }, // 2929981190
		{ &Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_ComputeEffectiveRange, "ComputeEffectiveRange" }, // 2442620590
		{ &Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_EvaluateKeys, "EvaluateKeys" }, // 3010666798
		{ &Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_GetDefault, "GetDefault" }, // 4054552184
		{ &Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_GetKeys, "GetKeys" }, // 2208376601
		{ &Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_GetNumKeys, "GetNumKeys" }, // 1682850780
		{ &Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_HasDefault, "HasDefault" }, // 1062091972
		{ &Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_RemoveDefault, "RemoveDefault" }, // 2207974692
		{ &Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_RemoveKey, "RemoveKey" }, // 2949433260
		{ &Z_Construct_UFunction_UMovieSceneScriptingBoolChannel_SetDefault, "SetDefault" }, // 1843246846
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneScriptingBoolChannel_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "KeysAndChannels/MovieSceneScriptingBool.h" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingBool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneScriptingBoolChannel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneScriptingBoolChannel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneScriptingBoolChannel_Statics::ClassParams = {
		&UMovieSceneScriptingBoolChannel::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneScriptingBoolChannel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneScriptingBoolChannel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneScriptingBoolChannel()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneScriptingBoolChannel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneScriptingBoolChannel.OuterSingleton, Z_Construct_UClass_UMovieSceneScriptingBoolChannel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneScriptingBoolChannel.OuterSingleton;
	}
	template<> SEQUENCERSCRIPTING_API UClass* StaticClass<UMovieSceneScriptingBoolChannel>()
	{
		return UMovieSceneScriptingBoolChannel::StaticClass();
	}
	UMovieSceneScriptingBoolChannel::UMovieSceneScriptingBoolChannel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneScriptingBoolChannel);
	UMovieSceneScriptingBoolChannel::~UMovieSceneScriptingBoolChannel() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingBool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingBool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneScriptingBoolKey, UMovieSceneScriptingBoolKey::StaticClass, TEXT("UMovieSceneScriptingBoolKey"), &Z_Registration_Info_UClass_UMovieSceneScriptingBoolKey, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneScriptingBoolKey), 795028155U) },
		{ Z_Construct_UClass_UMovieSceneScriptingBoolChannel, UMovieSceneScriptingBoolChannel::StaticClass, TEXT("UMovieSceneScriptingBoolChannel"), &Z_Registration_Info_UClass_UMovieSceneScriptingBoolChannel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneScriptingBoolChannel), 3478810024U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingBool_h_2264401131(TEXT("/Script/SequencerScripting"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingBool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingBool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
