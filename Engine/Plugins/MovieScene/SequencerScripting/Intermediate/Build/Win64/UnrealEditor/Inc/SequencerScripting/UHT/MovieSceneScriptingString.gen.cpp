// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/KeysAndChannels/MovieSceneScriptingString.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneScriptingString() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameTime();
	SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneScriptingChannel();
	SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneScriptingKey();
	SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneScriptingKey_NoRegister();
	SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneScriptingStringChannel();
	SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneScriptingStringChannel_NoRegister();
	SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneScriptingStringKey();
	SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneScriptingStringKey_NoRegister();
	SEQUENCERSCRIPTING_API UEnum* Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit();
	UPackage* Z_Construct_UPackage__Script_SequencerScripting();
// End Cross Module References
	DEFINE_FUNCTION(UMovieSceneScriptingStringKey::execSetValue)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InNewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetValue(Z_Param_InNewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneScriptingStringKey::execGetValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneScriptingStringKey::execSetTime)
	{
		P_GET_STRUCT_REF(FFrameNumber,Z_Param_Out_NewFrameNumber);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SubFrame);
		P_GET_ENUM(ESequenceTimeUnit,Z_Param_TimeUnit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTime(Z_Param_Out_NewFrameNumber,Z_Param_SubFrame,ESequenceTimeUnit(Z_Param_TimeUnit));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneScriptingStringKey::execGetTime)
	{
		P_GET_ENUM(ESequenceTimeUnit,Z_Param_TimeUnit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFrameTime*)Z_Param__Result=P_THIS->GetTime(ESequenceTimeUnit(Z_Param_TimeUnit));
		P_NATIVE_END;
	}
	void UMovieSceneScriptingStringKey::StaticRegisterNativesUMovieSceneScriptingStringKey()
	{
		UClass* Class = UMovieSceneScriptingStringKey::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTime", &UMovieSceneScriptingStringKey::execGetTime },
			{ "GetValue", &UMovieSceneScriptingStringKey::execGetValue },
			{ "SetTime", &UMovieSceneScriptingStringKey::execSetTime },
			{ "SetValue", &UMovieSceneScriptingStringKey::execSetValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMovieSceneScriptingStringKey_GetTime_Statics
	{
		struct FFrameTime
		{
			FFrameNumber FrameNumber;
			float SubFrame;
		};

		struct MovieSceneScriptingStringKey_eventGetTime_Parms
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneScriptingStringKey_GetTime_Statics::NewProp_TimeUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMovieSceneScriptingStringKey_GetTime_Statics::NewProp_TimeUnit = { "TimeUnit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingStringKey_eventGetTime_Parms, TimeUnit), Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit, METADATA_PARAMS(nullptr, 0) }; // 430593730
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneScriptingStringKey_GetTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingStringKey_eventGetTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FFrameTime, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingStringKey_GetTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingStringKey_GetTime_Statics::NewProp_TimeUnit_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingStringKey_GetTime_Statics::NewProp_TimeUnit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingStringKey_GetTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneScriptingStringKey_GetTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Gets the time for this key from the owning channel.\n\x09* @param TimeUnit\x09Should the time be returned in Display Rate frames (possibly with a sub-frame value) or in Tick Resolution with no sub-frame values?\n\x09* @return\x09\x09\x09The time of this key which combines both the frame number and the sub-frame it is on. Sub-frame will be zero if you request Tick Resolution.\n\x09*/" },
		{ "CPP_Default_TimeUnit", "DisplayRate" },
		{ "DisplayName", "Get Time (String)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingString.h" },
		{ "ToolTip", "Gets the time for this key from the owning channel.\n@param TimeUnit       Should the time be returned in Display Rate frames (possibly with a sub-frame value) or in Tick Resolution with no sub-frame values?\n@return                       The time of this key which combines both the frame number and the sub-frame it is on. Sub-frame will be zero if you request Tick Resolution." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingStringKey_GetTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingStringKey, nullptr, "GetTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneScriptingStringKey_GetTime_Statics::MovieSceneScriptingStringKey_eventGetTime_Parms), Z_Construct_UFunction_UMovieSceneScriptingStringKey_GetTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingStringKey_GetTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneScriptingStringKey_GetTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingStringKey_GetTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneScriptingStringKey_GetTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingStringKey_GetTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneScriptingStringKey_GetValue_Statics
	{
		struct MovieSceneScriptingStringKey_eventGetValue_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMovieSceneScriptingStringKey_GetValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingStringKey_eventGetValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingStringKey_GetValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingStringKey_GetValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneScriptingStringKey_GetValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Gets the value for this key from the owning channel.\n\x09* @return\x09The value for this key.\n\x09*/" },
		{ "DisplayName", "Get Value (String)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingString.h" },
		{ "ToolTip", "Gets the value for this key from the owning channel.\n@return       The value for this key." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingStringKey_GetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingStringKey, nullptr, "GetValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneScriptingStringKey_GetValue_Statics::MovieSceneScriptingStringKey_eventGetValue_Parms), Z_Construct_UFunction_UMovieSceneScriptingStringKey_GetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingStringKey_GetValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneScriptingStringKey_GetValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingStringKey_GetValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneScriptingStringKey_GetValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingStringKey_GetValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneScriptingStringKey_SetTime_Statics
	{
		struct MovieSceneScriptingStringKey_eventSetTime_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneScriptingStringKey_SetTime_Statics::NewProp_NewFrameNumber_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneScriptingStringKey_SetTime_Statics::NewProp_NewFrameNumber = { "NewFrameNumber", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingStringKey_eventSetTime_Parms, NewFrameNumber), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneScriptingStringKey_SetTime_Statics::NewProp_NewFrameNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingStringKey_SetTime_Statics::NewProp_NewFrameNumber_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneScriptingStringKey_SetTime_Statics::NewProp_SubFrame = { "SubFrame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingStringKey_eventSetTime_Parms, SubFrame), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneScriptingStringKey_SetTime_Statics::NewProp_TimeUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMovieSceneScriptingStringKey_SetTime_Statics::NewProp_TimeUnit = { "TimeUnit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingStringKey_eventSetTime_Parms, TimeUnit), Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit, METADATA_PARAMS(nullptr, 0) }; // 430593730
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingStringKey_SetTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingStringKey_SetTime_Statics::NewProp_NewFrameNumber,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingStringKey_SetTime_Statics::NewProp_SubFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingStringKey_SetTime_Statics::NewProp_TimeUnit_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingStringKey_SetTime_Statics::NewProp_TimeUnit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneScriptingStringKey_SetTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Sets the time for this key in the owning channel. Will replace any key that already exists at that frame number in this channel.\n\x09* @param NewFrameNumber\x09What frame should this key be moved to? This should be in the time unit specified by TimeUnit.\n\x09* @param SubFrame\x09\x09If using Display Rate time, what is the sub-frame this should go to? Clamped [0-1), and ignored with when TimeUnit is set to Tick Resolution.\n\x09* @param TimeUnit\x09\x09Should the NewFrameNumber be interpreted as Display Rate frames or in Tick Resolution?\n\x09*/" },
		{ "CPP_Default_SubFrame", "0.000000" },
		{ "CPP_Default_TimeUnit", "DisplayRate" },
		{ "DisplayName", "Set Time (String)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingString.h" },
		{ "ToolTip", "Sets the time for this key in the owning channel. Will replace any key that already exists at that frame number in this channel.\n@param NewFrameNumber What frame should this key be moved to? This should be in the time unit specified by TimeUnit.\n@param SubFrame               If using Display Rate time, what is the sub-frame this should go to? Clamped [0-1), and ignored with when TimeUnit is set to Tick Resolution.\n@param TimeUnit               Should the NewFrameNumber be interpreted as Display Rate frames or in Tick Resolution?" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingStringKey_SetTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingStringKey, nullptr, "SetTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneScriptingStringKey_SetTime_Statics::MovieSceneScriptingStringKey_eventSetTime_Parms), Z_Construct_UFunction_UMovieSceneScriptingStringKey_SetTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingStringKey_SetTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneScriptingStringKey_SetTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingStringKey_SetTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneScriptingStringKey_SetTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingStringKey_SetTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneScriptingStringKey_SetValue_Statics
	{
		struct MovieSceneScriptingStringKey_eventSetValue_Parms
		{
			FString InNewValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InNewValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InNewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneScriptingStringKey_SetValue_Statics::NewProp_InNewValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMovieSceneScriptingStringKey_SetValue_Statics::NewProp_InNewValue = { "InNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingStringKey_eventSetValue_Parms, InNewValue), METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneScriptingStringKey_SetValue_Statics::NewProp_InNewValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingStringKey_SetValue_Statics::NewProp_InNewValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingStringKey_SetValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingStringKey_SetValue_Statics::NewProp_InNewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneScriptingStringKey_SetValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Sets the value for this key, reflecting it in the owning channel.\n\x09* @param InNewValue\x09The new value for this key.\n\x09*/" },
		{ "DisplayName", "Set Value (String)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingString.h" },
		{ "ToolTip", "Sets the value for this key, reflecting it in the owning channel.\n@param InNewValue     The new value for this key." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingStringKey_SetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingStringKey, nullptr, "SetValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneScriptingStringKey_SetValue_Statics::MovieSceneScriptingStringKey_eventSetValue_Parms), Z_Construct_UFunction_UMovieSceneScriptingStringKey_SetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingStringKey_SetValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneScriptingStringKey_SetValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingStringKey_SetValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneScriptingStringKey_SetValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingStringKey_SetValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneScriptingStringKey);
	UClass* Z_Construct_UClass_UMovieSceneScriptingStringKey_NoRegister()
	{
		return UMovieSceneScriptingStringKey::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneScriptingStringKey_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneScriptingStringKey_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneScriptingKey,
		(UObject* (*)())Z_Construct_UPackage__Script_SequencerScripting,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMovieSceneScriptingStringKey_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieSceneScriptingStringKey_GetTime, "GetTime" }, // 4002311555
		{ &Z_Construct_UFunction_UMovieSceneScriptingStringKey_GetValue, "GetValue" }, // 805633595
		{ &Z_Construct_UFunction_UMovieSceneScriptingStringKey_SetTime, "SetTime" }, // 1479072166
		{ &Z_Construct_UFunction_UMovieSceneScriptingStringKey_SetValue, "SetValue" }, // 3333330317
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneScriptingStringKey_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Exposes a Sequencer string type key to Python/Blueprints.\n* Stores a reference to the data so changes to this class are forwarded onto the underlying data structures.\n*/" },
		{ "IncludePath", "KeysAndChannels/MovieSceneScriptingString.h" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingString.h" },
		{ "ToolTip", "Exposes a Sequencer string type key to Python/Blueprints.\nStores a reference to the data so changes to this class are forwarded onto the underlying data structures." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneScriptingStringKey_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneScriptingStringKey>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneScriptingStringKey_Statics::ClassParams = {
		&UMovieSceneScriptingStringKey::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneScriptingStringKey_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneScriptingStringKey_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneScriptingStringKey()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneScriptingStringKey.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneScriptingStringKey.OuterSingleton, Z_Construct_UClass_UMovieSceneScriptingStringKey_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneScriptingStringKey.OuterSingleton;
	}
	template<> SEQUENCERSCRIPTING_API UClass* StaticClass<UMovieSceneScriptingStringKey>()
	{
		return UMovieSceneScriptingStringKey::StaticClass();
	}
	UMovieSceneScriptingStringKey::UMovieSceneScriptingStringKey(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneScriptingStringKey);
	UMovieSceneScriptingStringKey::~UMovieSceneScriptingStringKey() {}
	DEFINE_FUNCTION(UMovieSceneScriptingStringChannel::execHasDefault)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasDefault();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneScriptingStringChannel::execRemoveDefault)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveDefault();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneScriptingStringChannel::execGetDefault)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetDefault();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneScriptingStringChannel::execSetDefault)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InDefaultValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDefault(Z_Param_InDefaultValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneScriptingStringChannel::execGetKeys)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UMovieSceneScriptingKey*>*)Z_Param__Result=P_THIS->GetKeys();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneScriptingStringChannel::execRemoveKey)
	{
		P_GET_OBJECT(UMovieSceneScriptingKey,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveKey(Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneScriptingStringChannel::execAddKey)
	{
		P_GET_STRUCT_REF(FFrameNumber,Z_Param_Out_InTime);
		P_GET_PROPERTY(FStrProperty,Z_Param_NewValue);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SubFrame);
		P_GET_ENUM(ESequenceTimeUnit,Z_Param_TimeUnit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMovieSceneScriptingStringKey**)Z_Param__Result=P_THIS->AddKey(Z_Param_Out_InTime,Z_Param_NewValue,Z_Param_SubFrame,ESequenceTimeUnit(Z_Param_TimeUnit));
		P_NATIVE_END;
	}
	void UMovieSceneScriptingStringChannel::StaticRegisterNativesUMovieSceneScriptingStringChannel()
	{
		UClass* Class = UMovieSceneScriptingStringChannel::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddKey", &UMovieSceneScriptingStringChannel::execAddKey },
			{ "GetDefault", &UMovieSceneScriptingStringChannel::execGetDefault },
			{ "GetKeys", &UMovieSceneScriptingStringChannel::execGetKeys },
			{ "HasDefault", &UMovieSceneScriptingStringChannel::execHasDefault },
			{ "RemoveDefault", &UMovieSceneScriptingStringChannel::execRemoveDefault },
			{ "RemoveKey", &UMovieSceneScriptingStringChannel::execRemoveKey },
			{ "SetDefault", &UMovieSceneScriptingStringChannel::execSetDefault },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMovieSceneScriptingStringChannel_AddKey_Statics
	{
		struct MovieSceneScriptingStringChannel_eventAddKey_Parms
		{
			FFrameNumber InTime;
			FString NewValue;
			float SubFrame;
			ESequenceTimeUnit TimeUnit;
			UMovieSceneScriptingStringKey* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InTime_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InTime;
		static const UECodeGen_Private::FStrPropertyParams NewProp_NewValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneScriptingStringChannel_AddKey_Statics::NewProp_InTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneScriptingStringChannel_AddKey_Statics::NewProp_InTime = { "InTime", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingStringChannel_eventAddKey_Parms, InTime), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneScriptingStringChannel_AddKey_Statics::NewProp_InTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingStringChannel_AddKey_Statics::NewProp_InTime_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMovieSceneScriptingStringChannel_AddKey_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingStringChannel_eventAddKey_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneScriptingStringChannel_AddKey_Statics::NewProp_SubFrame = { "SubFrame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingStringChannel_eventAddKey_Parms, SubFrame), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneScriptingStringChannel_AddKey_Statics::NewProp_TimeUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMovieSceneScriptingStringChannel_AddKey_Statics::NewProp_TimeUnit = { "TimeUnit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingStringChannel_eventAddKey_Parms, TimeUnit), Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit, METADATA_PARAMS(nullptr, 0) }; // 430593730
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneScriptingStringChannel_AddKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingStringChannel_eventAddKey_Parms, ReturnValue), Z_Construct_UClass_UMovieSceneScriptingStringKey_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingStringChannel_AddKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingStringChannel_AddKey_Statics::NewProp_InTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingStringChannel_AddKey_Statics::NewProp_NewValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingStringChannel_AddKey_Statics::NewProp_SubFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingStringChannel_AddKey_Statics::NewProp_TimeUnit_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingStringChannel_AddKey_Statics::NewProp_TimeUnit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingStringChannel_AddKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneScriptingStringChannel_AddKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Add a key to this channel. This initializes a new key and returns a reference to it.\n\x09* @param\x09InTime\x09\x09\x09The frame this key should go on. Respects TimeUnit to determine if it is a display rate frame or a tick resolution frame.\n\x09* @param\x09NewValue\x09\x09The value that this key should be created with.\n\x09* @param\x09SubFrame\x09\x09Optional [0-1) clamped sub-frame to put this key on. Ignored if TimeUnit is set to Tick Resolution.\n\x09* @param\x09TimeUnit \x09\x09Is the specified InTime in Display Rate frames or Tick Resolution.\n\x09* @param\x09InInterpolation\x09Interpolation method the key should use.\n\x09* @return\x09The key that was created with the specified values at the specified time.\n\x09*/" },
		{ "CPP_Default_SubFrame", "0.000000" },
		{ "CPP_Default_TimeUnit", "DisplayRate" },
		{ "DisplayName", "Add Key (String)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingString.h" },
		{ "ToolTip", "Add a key to this channel. This initializes a new key and returns a reference to it.\n@param        InTime                  The frame this key should go on. Respects TimeUnit to determine if it is a display rate frame or a tick resolution frame.\n@param        NewValue                The value that this key should be created with.\n@param        SubFrame                Optional [0-1) clamped sub-frame to put this key on. Ignored if TimeUnit is set to Tick Resolution.\n@param        TimeUnit                Is the specified InTime in Display Rate frames or Tick Resolution.\n@param        InInterpolation Interpolation method the key should use.\n@return       The key that was created with the specified values at the specified time." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingStringChannel_AddKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingStringChannel, nullptr, "AddKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneScriptingStringChannel_AddKey_Statics::MovieSceneScriptingStringChannel_eventAddKey_Parms), Z_Construct_UFunction_UMovieSceneScriptingStringChannel_AddKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingStringChannel_AddKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneScriptingStringChannel_AddKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingStringChannel_AddKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneScriptingStringChannel_AddKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingStringChannel_AddKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneScriptingStringChannel_GetDefault_Statics
	{
		struct MovieSceneScriptingStringChannel_eventGetDefault_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMovieSceneScriptingStringChannel_GetDefault_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingStringChannel_eventGetDefault_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingStringChannel_GetDefault_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingStringChannel_GetDefault_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneScriptingStringChannel_GetDefault_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Get this channel's default value that will be used when no keys are present. Only a valid\n\x09* value when HasDefault() returns true.\n\x09*/" },
		{ "DisplayName", "Get Default (String)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingString.h" },
		{ "ToolTip", "Get this channel's default value that will be used when no keys are present. Only a valid\nvalue when HasDefault() returns true." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingStringChannel_GetDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingStringChannel, nullptr, "GetDefault", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneScriptingStringChannel_GetDefault_Statics::MovieSceneScriptingStringChannel_eventGetDefault_Parms), Z_Construct_UFunction_UMovieSceneScriptingStringChannel_GetDefault_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingStringChannel_GetDefault_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneScriptingStringChannel_GetDefault_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingStringChannel_GetDefault_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneScriptingStringChannel_GetDefault()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingStringChannel_GetDefault_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneScriptingStringChannel_GetKeys_Statics
	{
		struct MovieSceneScriptingStringChannel_eventGetKeys_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneScriptingStringChannel_GetKeys_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMovieSceneScriptingKey_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovieSceneScriptingStringChannel_GetKeys_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingStringChannel_eventGetKeys_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingStringChannel_GetKeys_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingStringChannel_GetKeys_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingStringChannel_GetKeys_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneScriptingStringChannel_GetKeys_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Gets all of the keys in this channel.\n\x09* @return\x09""An array of UMovieSceneScriptingStringKey's contained by this channel.\n\x09*\x09\x09\x09Returns all keys even if clipped by the owning section's boundaries or outside of the current sequence play range.\n\x09*/" },
		{ "DisplayName", "Get Keys (String)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingString.h" },
		{ "ToolTip", "Gets all of the keys in this channel.\n@return       An array of UMovieSceneScriptingStringKey's contained by this channel.\n                      Returns all keys even if clipped by the owning section's boundaries or outside of the current sequence play range." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingStringChannel_GetKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingStringChannel, nullptr, "GetKeys", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneScriptingStringChannel_GetKeys_Statics::MovieSceneScriptingStringChannel_eventGetKeys_Parms), Z_Construct_UFunction_UMovieSceneScriptingStringChannel_GetKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingStringChannel_GetKeys_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneScriptingStringChannel_GetKeys_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingStringChannel_GetKeys_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneScriptingStringChannel_GetKeys()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingStringChannel_GetKeys_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneScriptingStringChannel_HasDefault_Statics
	{
		struct MovieSceneScriptingStringChannel_eventHasDefault_Parms
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
	void Z_Construct_UFunction_UMovieSceneScriptingStringChannel_HasDefault_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieSceneScriptingStringChannel_eventHasDefault_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneScriptingStringChannel_HasDefault_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MovieSceneScriptingStringChannel_eventHasDefault_Parms), &Z_Construct_UFunction_UMovieSceneScriptingStringChannel_HasDefault_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingStringChannel_HasDefault_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingStringChannel_HasDefault_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneScriptingStringChannel_HasDefault_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* @return Does this channel have a default value set?\n\x09*/" },
		{ "DisplayName", "Has Default (String)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingString.h" },
		{ "ToolTip", "@return Does this channel have a default value set?" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingStringChannel_HasDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingStringChannel, nullptr, "HasDefault", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneScriptingStringChannel_HasDefault_Statics::MovieSceneScriptingStringChannel_eventHasDefault_Parms), Z_Construct_UFunction_UMovieSceneScriptingStringChannel_HasDefault_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingStringChannel_HasDefault_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneScriptingStringChannel_HasDefault_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingStringChannel_HasDefault_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneScriptingStringChannel_HasDefault()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingStringChannel_HasDefault_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneScriptingStringChannel_RemoveDefault_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneScriptingStringChannel_RemoveDefault_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Remove this channel's default value causing the channel to have no effect where no keys are present\n\x09*/" },
		{ "DisplayName", "Remove Default (String)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingString.h" },
		{ "ToolTip", "Remove this channel's default value causing the channel to have no effect where no keys are present" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingStringChannel_RemoveDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingStringChannel, nullptr, "RemoveDefault", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneScriptingStringChannel_RemoveDefault_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingStringChannel_RemoveDefault_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneScriptingStringChannel_RemoveDefault()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingStringChannel_RemoveDefault_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneScriptingStringChannel_RemoveKey_Statics
	{
		struct MovieSceneScriptingStringChannel_eventRemoveKey_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneScriptingStringChannel_RemoveKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingStringChannel_eventRemoveKey_Parms, Key), Z_Construct_UClass_UMovieSceneScriptingKey_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingStringChannel_RemoveKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingStringChannel_RemoveKey_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneScriptingStringChannel_RemoveKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Removes the specified key. Does nothing if the key is not specified or the key belongs to another channel.\n\x09*/" },
		{ "DisplayName", "Remove Key (String)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingString.h" },
		{ "ToolTip", "Removes the specified key. Does nothing if the key is not specified or the key belongs to another channel." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingStringChannel_RemoveKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingStringChannel, nullptr, "RemoveKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneScriptingStringChannel_RemoveKey_Statics::MovieSceneScriptingStringChannel_eventRemoveKey_Parms), Z_Construct_UFunction_UMovieSceneScriptingStringChannel_RemoveKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingStringChannel_RemoveKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneScriptingStringChannel_RemoveKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingStringChannel_RemoveKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneScriptingStringChannel_RemoveKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingStringChannel_RemoveKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneScriptingStringChannel_SetDefault_Statics
	{
		struct MovieSceneScriptingStringChannel_eventSetDefault_Parms
		{
			FString InDefaultValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_InDefaultValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMovieSceneScriptingStringChannel_SetDefault_Statics::NewProp_InDefaultValue = { "InDefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneScriptingStringChannel_eventSetDefault_Parms, InDefaultValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingStringChannel_SetDefault_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingStringChannel_SetDefault_Statics::NewProp_InDefaultValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneScriptingStringChannel_SetDefault_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Set this channel's default value that should be used when no keys are present.\n\x09* Sets bHasDefaultValue to true automatically.\n\x09*/" },
		{ "DisplayName", "Set Default (String)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingString.h" },
		{ "ToolTip", "Set this channel's default value that should be used when no keys are present.\nSets bHasDefaultValue to true automatically." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingStringChannel_SetDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingStringChannel, nullptr, "SetDefault", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneScriptingStringChannel_SetDefault_Statics::MovieSceneScriptingStringChannel_eventSetDefault_Parms), Z_Construct_UFunction_UMovieSceneScriptingStringChannel_SetDefault_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingStringChannel_SetDefault_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneScriptingStringChannel_SetDefault_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingStringChannel_SetDefault_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneScriptingStringChannel_SetDefault()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingStringChannel_SetDefault_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneScriptingStringChannel);
	UClass* Z_Construct_UClass_UMovieSceneScriptingStringChannel_NoRegister()
	{
		return UMovieSceneScriptingStringChannel::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneScriptingStringChannel_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneScriptingStringChannel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneScriptingChannel,
		(UObject* (*)())Z_Construct_UPackage__Script_SequencerScripting,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMovieSceneScriptingStringChannel_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieSceneScriptingStringChannel_AddKey, "AddKey" }, // 25448280
		{ &Z_Construct_UFunction_UMovieSceneScriptingStringChannel_GetDefault, "GetDefault" }, // 2372780864
		{ &Z_Construct_UFunction_UMovieSceneScriptingStringChannel_GetKeys, "GetKeys" }, // 1430787662
		{ &Z_Construct_UFunction_UMovieSceneScriptingStringChannel_HasDefault, "HasDefault" }, // 514737182
		{ &Z_Construct_UFunction_UMovieSceneScriptingStringChannel_RemoveDefault, "RemoveDefault" }, // 3704305297
		{ &Z_Construct_UFunction_UMovieSceneScriptingStringChannel_RemoveKey, "RemoveKey" }, // 3179309020
		{ &Z_Construct_UFunction_UMovieSceneScriptingStringChannel_SetDefault, "SetDefault" }, // 2000332406
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneScriptingStringChannel_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "KeysAndChannels/MovieSceneScriptingString.h" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingString.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneScriptingStringChannel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneScriptingStringChannel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneScriptingStringChannel_Statics::ClassParams = {
		&UMovieSceneScriptingStringChannel::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneScriptingStringChannel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneScriptingStringChannel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneScriptingStringChannel()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneScriptingStringChannel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneScriptingStringChannel.OuterSingleton, Z_Construct_UClass_UMovieSceneScriptingStringChannel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneScriptingStringChannel.OuterSingleton;
	}
	template<> SEQUENCERSCRIPTING_API UClass* StaticClass<UMovieSceneScriptingStringChannel>()
	{
		return UMovieSceneScriptingStringChannel::StaticClass();
	}
	UMovieSceneScriptingStringChannel::UMovieSceneScriptingStringChannel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneScriptingStringChannel);
	UMovieSceneScriptingStringChannel::~UMovieSceneScriptingStringChannel() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingString_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingString_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneScriptingStringKey, UMovieSceneScriptingStringKey::StaticClass, TEXT("UMovieSceneScriptingStringKey"), &Z_Registration_Info_UClass_UMovieSceneScriptingStringKey, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneScriptingStringKey), 1764775027U) },
		{ Z_Construct_UClass_UMovieSceneScriptingStringChannel, UMovieSceneScriptingStringChannel::StaticClass, TEXT("UMovieSceneScriptingStringChannel"), &Z_Registration_Info_UClass_UMovieSceneScriptingStringChannel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneScriptingStringChannel), 2168885600U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingString_h_1726248126(TEXT("/Script/SequencerScripting"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingString_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingString_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
