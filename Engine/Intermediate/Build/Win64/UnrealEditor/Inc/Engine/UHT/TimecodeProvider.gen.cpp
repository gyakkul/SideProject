// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/TimecodeProvider.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTimecodeProvider() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQualifiedFrameTime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimecode();
	ENGINE_API UClass* Z_Construct_UClass_UTimecodeProvider();
	ENGINE_API UClass* Z_Construct_UClass_UTimecodeProvider_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETimecodeProviderSynchronizationState();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETimecodeProviderSynchronizationState;
	static UEnum* ETimecodeProviderSynchronizationState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETimecodeProviderSynchronizationState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETimecodeProviderSynchronizationState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETimecodeProviderSynchronizationState, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ETimecodeProviderSynchronizationState"));
		}
		return Z_Registration_Info_UEnum_ETimecodeProviderSynchronizationState.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ETimecodeProviderSynchronizationState>()
	{
		return ETimecodeProviderSynchronizationState_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ETimecodeProviderSynchronizationState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ETimecodeProviderSynchronizationState_Statics::Enumerators[] = {
		{ "ETimecodeProviderSynchronizationState::Closed", (int64)ETimecodeProviderSynchronizationState::Closed },
		{ "ETimecodeProviderSynchronizationState::Error", (int64)ETimecodeProviderSynchronizationState::Error },
		{ "ETimecodeProviderSynchronizationState::Synchronized", (int64)ETimecodeProviderSynchronizationState::Synchronized },
		{ "ETimecodeProviderSynchronizationState::Synchronizing", (int64)ETimecodeProviderSynchronizationState::Synchronizing },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ETimecodeProviderSynchronizationState_Statics::Enum_MetaDataParams[] = {
		{ "Closed.Comment", "/** TimecodeProvider has not been initialized or has been shutdown. */" },
		{ "Closed.Name", "ETimecodeProviderSynchronizationState::Closed" },
		{ "Closed.ToolTip", "TimecodeProvider has not been initialized or has been shutdown." },
		{ "Comment", "/**\n * Possible states of TimecodeProvider.\n */" },
		{ "Error.Comment", "/** Unrecoverable error occurred during Synchronization. */" },
		{ "Error.Name", "ETimecodeProviderSynchronizationState::Error" },
		{ "Error.ToolTip", "Unrecoverable error occurred during Synchronization." },
		{ "ModuleRelativePath", "Classes/Engine/TimecodeProvider.h" },
		{ "Synchronized.Comment", "/** TimecodeProvider is currently synchronized with the source. */" },
		{ "Synchronized.Name", "ETimecodeProviderSynchronizationState::Synchronized" },
		{ "Synchronized.ToolTip", "TimecodeProvider is currently synchronized with the source." },
		{ "Synchronizing.Comment", "/** TimecodeProvider is initialized and being prepared for synchronization. */" },
		{ "Synchronizing.Name", "ETimecodeProviderSynchronizationState::Synchronizing" },
		{ "Synchronizing.ToolTip", "TimecodeProvider is initialized and being prepared for synchronization." },
		{ "ToolTip", "Possible states of TimecodeProvider." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ETimecodeProviderSynchronizationState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ETimecodeProviderSynchronizationState",
		"ETimecodeProviderSynchronizationState",
		Z_Construct_UEnum_Engine_ETimecodeProviderSynchronizationState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETimecodeProviderSynchronizationState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ETimecodeProviderSynchronizationState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETimecodeProviderSynchronizationState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ETimecodeProviderSynchronizationState()
	{
		if (!Z_Registration_Info_UEnum_ETimecodeProviderSynchronizationState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETimecodeProviderSynchronizationState.InnerSingleton, Z_Construct_UEnum_Engine_ETimecodeProviderSynchronizationState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETimecodeProviderSynchronizationState.InnerSingleton;
	}
	DEFINE_FUNCTION(UTimecodeProvider::execGetSynchronizationState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ETimecodeProviderSynchronizationState*)Z_Param__Result=P_THIS->GetSynchronizationState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimecodeProvider::execGetFrameRate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFrameRate*)Z_Param__Result=P_THIS->GetFrameRate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimecodeProvider::execGetDelayedTimecode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTimecode*)Z_Param__Result=P_THIS->GetDelayedTimecode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimecodeProvider::execGetTimecode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTimecode*)Z_Param__Result=P_THIS->GetTimecode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimecodeProvider::execGetDelayedQualifiedFrameTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQualifiedFrameTime*)Z_Param__Result=P_THIS->GetDelayedQualifiedFrameTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimecodeProvider::execGetQualifiedFrameTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQualifiedFrameTime*)Z_Param__Result=P_THIS->GetQualifiedFrameTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimecodeProvider::execFetchAndUpdate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FetchAndUpdate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTimecodeProvider::execFetchTimecode)
	{
		P_GET_STRUCT_REF(FQualifiedFrameTime,Z_Param_Out_OutFrameTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FetchTimecode(Z_Param_Out_OutFrameTime);
		P_NATIVE_END;
	}
	void UTimecodeProvider::StaticRegisterNativesUTimecodeProvider()
	{
		UClass* Class = UTimecodeProvider::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FetchAndUpdate", &UTimecodeProvider::execFetchAndUpdate },
			{ "FetchTimecode", &UTimecodeProvider::execFetchTimecode },
			{ "GetDelayedQualifiedFrameTime", &UTimecodeProvider::execGetDelayedQualifiedFrameTime },
			{ "GetDelayedTimecode", &UTimecodeProvider::execGetDelayedTimecode },
			{ "GetFrameRate", &UTimecodeProvider::execGetFrameRate },
			{ "GetQualifiedFrameTime", &UTimecodeProvider::execGetQualifiedFrameTime },
			{ "GetSynchronizationState", &UTimecodeProvider::execGetSynchronizationState },
			{ "GetTimecode", &UTimecodeProvider::execGetTimecode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTimecodeProvider_FetchAndUpdate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimecodeProvider_FetchAndUpdate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Provider" },
		{ "Comment", "/**\n\x09 * Update the state of the provider. Call it to ensure timecode and state are updated.\n\x09 * It is suggested to fetch timecode from its source and cache it for the getters.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Engine/TimecodeProvider.h" },
		{ "ToolTip", "Update the state of the provider. Call it to ensure timecode and state are updated.\nIt is suggested to fetch timecode from its source and cache it for the getters." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimecodeProvider_FetchAndUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimecodeProvider, nullptr, "FetchAndUpdate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimecodeProvider_FetchAndUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimecodeProvider_FetchAndUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimecodeProvider_FetchAndUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimecodeProvider_FetchAndUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimecodeProvider_FetchTimecode_Statics
	{
		struct FFrameRate
		{
			int32 Numerator;
			int32 Denominator;
		};

		struct FFrameTime
		{
			FFrameNumber FrameNumber;
			float SubFrame;
		};

		struct FQualifiedFrameTime
		{
			FFrameTime Time;
			FFrameRate Rate;
		};

		struct TimecodeProvider_eventFetchTimecode_Parms
		{
			FQualifiedFrameTime OutFrameTime;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutFrameTime;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimecodeProvider_FetchTimecode_Statics::NewProp_OutFrameTime = { "OutFrameTime", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimecodeProvider_eventFetchTimecode_Parms, OutFrameTime), Z_Construct_UScriptStruct_FQualifiedFrameTime, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTimecodeProvider_FetchTimecode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TimecodeProvider_eventFetchTimecode_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTimecodeProvider_FetchTimecode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TimecodeProvider_eventFetchTimecode_Parms), &Z_Construct_UFunction_UTimecodeProvider_FetchTimecode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimecodeProvider_FetchTimecode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimecodeProvider_FetchTimecode_Statics::NewProp_OutFrameTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimecodeProvider_FetchTimecode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimecodeProvider_FetchTimecode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Provider" },
		{ "Comment", "/**\n\x09 * Fetch current timecode from its source. e.g. From hardware/network/file/etc.\n\x09 * It is recommended to cache the fetched timecode.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Engine/TimecodeProvider.h" },
		{ "ToolTip", "Fetch current timecode from its source. e.g. From hardware/network/file/etc.\nIt is recommended to cache the fetched timecode." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimecodeProvider_FetchTimecode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimecodeProvider, nullptr, "FetchTimecode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTimecodeProvider_FetchTimecode_Statics::TimecodeProvider_eventFetchTimecode_Parms), Z_Construct_UFunction_UTimecodeProvider_FetchTimecode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimecodeProvider_FetchTimecode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimecodeProvider_FetchTimecode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimecodeProvider_FetchTimecode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimecodeProvider_FetchTimecode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimecodeProvider_FetchTimecode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimecodeProvider_GetDelayedQualifiedFrameTime_Statics
	{
		struct FFrameRate
		{
			int32 Numerator;
			int32 Denominator;
		};

		struct FFrameTime
		{
			FFrameNumber FrameNumber;
			float SubFrame;
		};

		struct FQualifiedFrameTime
		{
			FFrameTime Time;
			FFrameRate Rate;
		};

		struct TimecodeProvider_eventGetDelayedQualifiedFrameTime_Parms
		{
			FQualifiedFrameTime ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimecodeProvider_GetDelayedQualifiedFrameTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimecodeProvider_eventGetDelayedQualifiedFrameTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FQualifiedFrameTime, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimecodeProvider_GetDelayedQualifiedFrameTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimecodeProvider_GetDelayedQualifiedFrameTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimecodeProvider_GetDelayedQualifiedFrameTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Provider" },
		{ "Comment", "/**\n\x09 * Return current frame time with FrameDelay applied.\n\x09 * Only assume valid when GetSynchronizationState() returns Synchronized.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Engine/TimecodeProvider.h" },
		{ "ToolTip", "Return current frame time with FrameDelay applied.\nOnly assume valid when GetSynchronizationState() returns Synchronized." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimecodeProvider_GetDelayedQualifiedFrameTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimecodeProvider, nullptr, "GetDelayedQualifiedFrameTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTimecodeProvider_GetDelayedQualifiedFrameTime_Statics::TimecodeProvider_eventGetDelayedQualifiedFrameTime_Parms), Z_Construct_UFunction_UTimecodeProvider_GetDelayedQualifiedFrameTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimecodeProvider_GetDelayedQualifiedFrameTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimecodeProvider_GetDelayedQualifiedFrameTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimecodeProvider_GetDelayedQualifiedFrameTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimecodeProvider_GetDelayedQualifiedFrameTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimecodeProvider_GetDelayedQualifiedFrameTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimecodeProvider_GetDelayedTimecode_Statics
	{
		struct FTimecode
		{
			int32 Hours;
			int32 Minutes;
			int32 Seconds;
			int32 Frames;
			bool bDropFrameFormat;
		};

		struct TimecodeProvider_eventGetDelayedTimecode_Parms
		{
			FTimecode ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimecodeProvider_GetDelayedTimecode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimecodeProvider_eventGetDelayedTimecode_Parms, ReturnValue), Z_Construct_UScriptStruct_FTimecode, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimecodeProvider_GetDelayedTimecode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimecodeProvider_GetDelayedTimecode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimecodeProvider_GetDelayedTimecode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Provider" },
		{ "Comment", "/** Return the delayed frame time converted into a timecode value. */" },
		{ "ModuleRelativePath", "Classes/Engine/TimecodeProvider.h" },
		{ "ToolTip", "Return the delayed frame time converted into a timecode value." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimecodeProvider_GetDelayedTimecode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimecodeProvider, nullptr, "GetDelayedTimecode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTimecodeProvider_GetDelayedTimecode_Statics::TimecodeProvider_eventGetDelayedTimecode_Parms), Z_Construct_UFunction_UTimecodeProvider_GetDelayedTimecode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimecodeProvider_GetDelayedTimecode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimecodeProvider_GetDelayedTimecode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimecodeProvider_GetDelayedTimecode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimecodeProvider_GetDelayedTimecode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimecodeProvider_GetDelayedTimecode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimecodeProvider_GetFrameRate_Statics
	{
		struct FFrameRate
		{
			int32 Numerator;
			int32 Denominator;
		};

		struct TimecodeProvider_eventGetFrameRate_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimecodeProvider_GetFrameRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimecodeProvider_eventGetFrameRate_Parms, ReturnValue), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimecodeProvider_GetFrameRate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimecodeProvider_GetFrameRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimecodeProvider_GetFrameRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Provider" },
		{ "Comment", "/** Return the frame rate of the frame time. */" },
		{ "ModuleRelativePath", "Classes/Engine/TimecodeProvider.h" },
		{ "ToolTip", "Return the frame rate of the frame time." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimecodeProvider_GetFrameRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimecodeProvider, nullptr, "GetFrameRate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTimecodeProvider_GetFrameRate_Statics::TimecodeProvider_eventGetFrameRate_Parms), Z_Construct_UFunction_UTimecodeProvider_GetFrameRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimecodeProvider_GetFrameRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimecodeProvider_GetFrameRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimecodeProvider_GetFrameRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimecodeProvider_GetFrameRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimecodeProvider_GetFrameRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimecodeProvider_GetQualifiedFrameTime_Statics
	{
		struct FFrameRate
		{
			int32 Numerator;
			int32 Denominator;
		};

		struct FFrameTime
		{
			FFrameNumber FrameNumber;
			float SubFrame;
		};

		struct FQualifiedFrameTime
		{
			FFrameTime Time;
			FFrameRate Rate;
		};

		struct TimecodeProvider_eventGetQualifiedFrameTime_Parms
		{
			FQualifiedFrameTime ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimecodeProvider_GetQualifiedFrameTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimecodeProvider_eventGetQualifiedFrameTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FQualifiedFrameTime, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimecodeProvider_GetQualifiedFrameTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimecodeProvider_GetQualifiedFrameTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimecodeProvider_GetQualifiedFrameTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Provider" },
		{ "Comment", "/**\n\x09 * Return current frame time. \n\x09 * Since it may be called several times per frame, it is suggested to return a cached value.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Engine/TimecodeProvider.h" },
		{ "ToolTip", "Return current frame time.\nSince it may be called several times per frame, it is suggested to return a cached value." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimecodeProvider_GetQualifiedFrameTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimecodeProvider, nullptr, "GetQualifiedFrameTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTimecodeProvider_GetQualifiedFrameTime_Statics::TimecodeProvider_eventGetQualifiedFrameTime_Parms), Z_Construct_UFunction_UTimecodeProvider_GetQualifiedFrameTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimecodeProvider_GetQualifiedFrameTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimecodeProvider_GetQualifiedFrameTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimecodeProvider_GetQualifiedFrameTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimecodeProvider_GetQualifiedFrameTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimecodeProvider_GetQualifiedFrameTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimecodeProvider_GetSynchronizationState_Statics
	{
		struct TimecodeProvider_eventGetSynchronizationState_Parms
		{
			ETimecodeProviderSynchronizationState ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UTimecodeProvider_GetSynchronizationState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTimecodeProvider_GetSynchronizationState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimecodeProvider_eventGetSynchronizationState_Parms, ReturnValue), Z_Construct_UEnum_Engine_ETimecodeProviderSynchronizationState, METADATA_PARAMS(nullptr, 0) }; // 2970859525
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimecodeProvider_GetSynchronizationState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimecodeProvider_GetSynchronizationState_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimecodeProvider_GetSynchronizationState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimecodeProvider_GetSynchronizationState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Provider" },
		{ "Comment", "/** The state of the TimecodeProvider and if it's currently synchronized and the Timecode and FrameRate getters are valid. */" },
		{ "ModuleRelativePath", "Classes/Engine/TimecodeProvider.h" },
		{ "ToolTip", "The state of the TimecodeProvider and if it's currently synchronized and the Timecode and FrameRate getters are valid." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimecodeProvider_GetSynchronizationState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimecodeProvider, nullptr, "GetSynchronizationState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTimecodeProvider_GetSynchronizationState_Statics::TimecodeProvider_eventGetSynchronizationState_Parms), Z_Construct_UFunction_UTimecodeProvider_GetSynchronizationState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimecodeProvider_GetSynchronizationState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimecodeProvider_GetSynchronizationState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimecodeProvider_GetSynchronizationState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimecodeProvider_GetSynchronizationState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimecodeProvider_GetSynchronizationState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimecodeProvider_GetTimecode_Statics
	{
		struct FTimecode
		{
			int32 Hours;
			int32 Minutes;
			int32 Seconds;
			int32 Frames;
			bool bDropFrameFormat;
		};

		struct TimecodeProvider_eventGetTimecode_Parms
		{
			FTimecode ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimecodeProvider_GetTimecode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TimecodeProvider_eventGetTimecode_Parms, ReturnValue), Z_Construct_UScriptStruct_FTimecode, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimecodeProvider_GetTimecode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimecodeProvider_GetTimecode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimecodeProvider_GetTimecode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Provider" },
		{ "Comment", "/** Return the frame time converted into a timecode value. */" },
		{ "ModuleRelativePath", "Classes/Engine/TimecodeProvider.h" },
		{ "ToolTip", "Return the frame time converted into a timecode value." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimecodeProvider_GetTimecode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimecodeProvider, nullptr, "GetTimecode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTimecodeProvider_GetTimecode_Statics::TimecodeProvider_eventGetTimecode_Parms), Z_Construct_UFunction_UTimecodeProvider_GetTimecode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimecodeProvider_GetTimecode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimecodeProvider_GetTimecode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimecodeProvider_GetTimecode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimecodeProvider_GetTimecode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimecodeProvider_GetTimecode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTimecodeProvider);
	UClass* Z_Construct_UClass_UTimecodeProvider_NoRegister()
	{
		return UTimecodeProvider::StaticClass();
	}
	struct Z_Construct_UClass_UTimecodeProvider_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FrameDelay;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTimecodeProvider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTimecodeProvider_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTimecodeProvider_FetchAndUpdate, "FetchAndUpdate" }, // 3061862600
		{ &Z_Construct_UFunction_UTimecodeProvider_FetchTimecode, "FetchTimecode" }, // 2751687055
		{ &Z_Construct_UFunction_UTimecodeProvider_GetDelayedQualifiedFrameTime, "GetDelayedQualifiedFrameTime" }, // 324258259
		{ &Z_Construct_UFunction_UTimecodeProvider_GetDelayedTimecode, "GetDelayedTimecode" }, // 3759425608
		{ &Z_Construct_UFunction_UTimecodeProvider_GetFrameRate, "GetFrameRate" }, // 3749628415
		{ &Z_Construct_UFunction_UTimecodeProvider_GetQualifiedFrameTime, "GetQualifiedFrameTime" }, // 2268293608
		{ &Z_Construct_UFunction_UTimecodeProvider_GetSynchronizationState, "GetSynchronizationState" }, // 2595273727
		{ &Z_Construct_UFunction_UTimecodeProvider_GetTimecode, "GetTimecode" }, // 3165370082
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimecodeProvider_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A class responsible of fetching a timecode from a source.\n * Note, FApp::GetTimecode and FApp::GetTimecodeFramerate should be used to retrieve\n * the current system Timecode and Framerate.\n */" },
		{ "IncludePath", "Engine/TimecodeProvider.h" },
		{ "ModuleRelativePath", "Classes/Engine/TimecodeProvider.h" },
		{ "ToolTip", "A class responsible of fetching a timecode from a source.\nNote, FApp::GetTimecode and FApp::GetTimecodeFramerate should be used to retrieve\nthe current system Timecode and Framerate." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimecodeProvider_Statics::NewProp_FrameDelay_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**\n\x09 * Number of frames to subtract from the qualified frame time when GetDelayedQualifiedFrameTime or GetDelayedTimecode is called.\n\x09 * @see GetDelayedQualifiedFrameTime, GetDelayedTimecode\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/TimecodeProvider.h" },
		{ "ToolTip", "Number of frames to subtract from the qualified frame time when GetDelayedQualifiedFrameTime or GetDelayedTimecode is called.\n@see GetDelayedQualifiedFrameTime, GetDelayedTimecode" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTimecodeProvider_Statics::NewProp_FrameDelay = { "FrameDelay", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTimecodeProvider, FrameDelay), METADATA_PARAMS(Z_Construct_UClass_UTimecodeProvider_Statics::NewProp_FrameDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTimecodeProvider_Statics::NewProp_FrameDelay_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTimecodeProvider_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimecodeProvider_Statics::NewProp_FrameDelay,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTimecodeProvider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTimecodeProvider>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTimecodeProvider_Statics::ClassParams = {
		&UTimecodeProvider::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTimecodeProvider_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTimecodeProvider_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UTimecodeProvider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTimecodeProvider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTimecodeProvider()
	{
		if (!Z_Registration_Info_UClass_UTimecodeProvider.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTimecodeProvider.OuterSingleton, Z_Construct_UClass_UTimecodeProvider_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTimecodeProvider.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UTimecodeProvider>()
	{
		return UTimecodeProvider::StaticClass();
	}
	UTimecodeProvider::UTimecodeProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTimecodeProvider);
	UTimecodeProvider::~UTimecodeProvider() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TimecodeProvider_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TimecodeProvider_h_Statics::EnumInfo[] = {
		{ ETimecodeProviderSynchronizationState_StaticEnum, TEXT("ETimecodeProviderSynchronizationState"), &Z_Registration_Info_UEnum_ETimecodeProviderSynchronizationState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2970859525U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TimecodeProvider_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTimecodeProvider, UTimecodeProvider::StaticClass, TEXT("UTimecodeProvider"), &Z_Registration_Info_UClass_UTimecodeProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTimecodeProvider), 2648620925U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TimecodeProvider_h_2384745597(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TimecodeProvider_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TimecodeProvider_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TimecodeProvider_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TimecodeProvider_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
