// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/ReplaySubsystem.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReplaySubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UReplaySubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UReplaySubsystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	DEFINE_FUNCTION(UReplaySubsystem::execRequestCheckpoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestCheckpoint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReplaySubsystem::execIsPlaying)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPlaying();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReplaySubsystem::execIsRecording)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsRecording();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReplaySubsystem::execGetReplayCurrentTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetReplayCurrentTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReplaySubsystem::execGetActiveReplayName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetActiveReplayName();
		P_NATIVE_END;
	}
	void UReplaySubsystem::StaticRegisterNativesUReplaySubsystem()
	{
		UClass* Class = UReplaySubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetActiveReplayName", &UReplaySubsystem::execGetActiveReplayName },
			{ "GetReplayCurrentTime", &UReplaySubsystem::execGetReplayCurrentTime },
			{ "IsPlaying", &UReplaySubsystem::execIsPlaying },
			{ "IsRecording", &UReplaySubsystem::execIsRecording },
			{ "RequestCheckpoint", &UReplaySubsystem::execRequestCheckpoint },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UReplaySubsystem_GetActiveReplayName_Statics
	{
		struct ReplaySubsystem_eventGetActiveReplayName_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReplaySubsystem_GetActiveReplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ReplaySubsystem_eventGetActiveReplayName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplaySubsystem_GetActiveReplayName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplaySubsystem_GetActiveReplayName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReplaySubsystem_GetActiveReplayName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Replay" },
		{ "Comment", "/**\n\x09 * Get current recording/playing replay name\n\x09 *\n\x09 * @return FString Name of relpay (session id, file name, etc)\n\x09 */" },
		{ "ModuleRelativePath", "Public/ReplaySubsystem.h" },
		{ "ToolTip", "Get current recording/playing replay name\n\n@return FString Name of relpay (session id, file name, etc)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplaySubsystem_GetActiveReplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReplaySubsystem, nullptr, "GetActiveReplayName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UReplaySubsystem_GetActiveReplayName_Statics::ReplaySubsystem_eventGetActiveReplayName_Parms), Z_Construct_UFunction_UReplaySubsystem_GetActiveReplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySubsystem_GetActiveReplayName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReplaySubsystem_GetActiveReplayName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySubsystem_GetActiveReplayName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReplaySubsystem_GetActiveReplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReplaySubsystem_GetActiveReplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReplaySubsystem_GetReplayCurrentTime_Statics
	{
		struct ReplaySubsystem_eventGetReplayCurrentTime_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UReplaySubsystem_GetReplayCurrentTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ReplaySubsystem_eventGetReplayCurrentTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplaySubsystem_GetReplayCurrentTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplaySubsystem_GetReplayCurrentTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReplaySubsystem_GetReplayCurrentTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Replay" },
		{ "Comment", "/**\n\x09 * Get current recording/playing replay time\n\x09 *\n\x09 * @return float Current recording/playback time in seconds\n\x09 */" },
		{ "ModuleRelativePath", "Public/ReplaySubsystem.h" },
		{ "ToolTip", "Get current recording/playing replay time\n\n@return float Current recording/playback time in seconds" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplaySubsystem_GetReplayCurrentTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReplaySubsystem, nullptr, "GetReplayCurrentTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UReplaySubsystem_GetReplayCurrentTime_Statics::ReplaySubsystem_eventGetReplayCurrentTime_Parms), Z_Construct_UFunction_UReplaySubsystem_GetReplayCurrentTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySubsystem_GetReplayCurrentTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReplaySubsystem_GetReplayCurrentTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySubsystem_GetReplayCurrentTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReplaySubsystem_GetReplayCurrentTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReplaySubsystem_GetReplayCurrentTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReplaySubsystem_IsPlaying_Statics
	{
		struct ReplaySubsystem_eventIsPlaying_Parms
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
	void Z_Construct_UFunction_UReplaySubsystem_IsPlaying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ReplaySubsystem_eventIsPlaying_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UReplaySubsystem_IsPlaying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ReplaySubsystem_eventIsPlaying_Parms), &Z_Construct_UFunction_UReplaySubsystem_IsPlaying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplaySubsystem_IsPlaying_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplaySubsystem_IsPlaying_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReplaySubsystem_IsPlaying_Statics::Function_MetaDataParams[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Public/ReplaySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplaySubsystem_IsPlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReplaySubsystem, nullptr, "IsPlaying", nullptr, nullptr, sizeof(Z_Construct_UFunction_UReplaySubsystem_IsPlaying_Statics::ReplaySubsystem_eventIsPlaying_Parms), Z_Construct_UFunction_UReplaySubsystem_IsPlaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySubsystem_IsPlaying_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReplaySubsystem_IsPlaying_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySubsystem_IsPlaying_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReplaySubsystem_IsPlaying()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReplaySubsystem_IsPlaying_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReplaySubsystem_IsRecording_Statics
	{
		struct ReplaySubsystem_eventIsRecording_Parms
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
	void Z_Construct_UFunction_UReplaySubsystem_IsRecording_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ReplaySubsystem_eventIsRecording_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UReplaySubsystem_IsRecording_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ReplaySubsystem_eventIsRecording_Parms), &Z_Construct_UFunction_UReplaySubsystem_IsRecording_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplaySubsystem_IsRecording_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplaySubsystem_IsRecording_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReplaySubsystem_IsRecording_Statics::Function_MetaDataParams[] = {
		{ "Category", "Replay" },
		{ "ModuleRelativePath", "Public/ReplaySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplaySubsystem_IsRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReplaySubsystem, nullptr, "IsRecording", nullptr, nullptr, sizeof(Z_Construct_UFunction_UReplaySubsystem_IsRecording_Statics::ReplaySubsystem_eventIsRecording_Parms), Z_Construct_UFunction_UReplaySubsystem_IsRecording_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySubsystem_IsRecording_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReplaySubsystem_IsRecording_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySubsystem_IsRecording_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReplaySubsystem_IsRecording()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReplaySubsystem_IsRecording_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReplaySubsystem_RequestCheckpoint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReplaySubsystem_RequestCheckpoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Replay" },
		{ "Comment", "/**\n\x09 * Request a checkpoint write, if currently recording.\n\x09 *\n\x09*/" },
		{ "ModuleRelativePath", "Public/ReplaySubsystem.h" },
		{ "ToolTip", "Request a checkpoint write, if currently recording." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplaySubsystem_RequestCheckpoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReplaySubsystem, nullptr, "RequestCheckpoint", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReplaySubsystem_RequestCheckpoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReplaySubsystem_RequestCheckpoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReplaySubsystem_RequestCheckpoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReplaySubsystem_RequestCheckpoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReplaySubsystem);
	UClass* Z_Construct_UClass_UReplaySubsystem_NoRegister()
	{
		return UReplaySubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UReplaySubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLoadDefaultMapOnStop_MetaData[];
#endif
		static void NewProp_bLoadDefaultMapOnStop_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoadDefaultMapOnStop;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReplaySubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UReplaySubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UReplaySubsystem_GetActiveReplayName, "GetActiveReplayName" }, // 64454654
		{ &Z_Construct_UFunction_UReplaySubsystem_GetReplayCurrentTime, "GetReplayCurrentTime" }, // 3475919315
		{ &Z_Construct_UFunction_UReplaySubsystem_IsPlaying, "IsPlaying" }, // 3208994856
		{ &Z_Construct_UFunction_UReplaySubsystem_IsRecording, "IsRecording" }, // 1981705707
		{ &Z_Construct_UFunction_UReplaySubsystem_RequestCheckpoint, "RequestCheckpoint" }, // 3909102380
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReplaySubsystem_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Replay Subsystem" },
		{ "IncludePath", "ReplaySubsystem.h" },
		{ "ModuleRelativePath", "Public/ReplaySubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReplaySubsystem_Statics::NewProp_bLoadDefaultMapOnStop_MetaData[] = {
		{ "Category", "Replay" },
		{ "Comment", "/**\n\x09 * Whether to reload the default map when StopReplay is called.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ReplaySubsystem.h" },
		{ "ToolTip", "Whether to reload the default map when StopReplay is called." },
	};
#endif
	void Z_Construct_UClass_UReplaySubsystem_Statics::NewProp_bLoadDefaultMapOnStop_SetBit(void* Obj)
	{
		((UReplaySubsystem*)Obj)->bLoadDefaultMapOnStop = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UReplaySubsystem_Statics::NewProp_bLoadDefaultMapOnStop = { "bLoadDefaultMapOnStop", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UReplaySubsystem), &Z_Construct_UClass_UReplaySubsystem_Statics::NewProp_bLoadDefaultMapOnStop_SetBit, METADATA_PARAMS(Z_Construct_UClass_UReplaySubsystem_Statics::NewProp_bLoadDefaultMapOnStop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReplaySubsystem_Statics::NewProp_bLoadDefaultMapOnStop_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UReplaySubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplaySubsystem_Statics::NewProp_bLoadDefaultMapOnStop,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReplaySubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReplaySubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UReplaySubsystem_Statics::ClassParams = {
		&UReplaySubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UReplaySubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UReplaySubsystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UReplaySubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UReplaySubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReplaySubsystem()
	{
		if (!Z_Registration_Info_UClass_UReplaySubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReplaySubsystem.OuterSingleton, Z_Construct_UClass_UReplaySubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UReplaySubsystem.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UReplaySubsystem>()
	{
		return UReplaySubsystem::StaticClass();
	}
	UReplaySubsystem::UReplaySubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReplaySubsystem);
	UReplaySubsystem::~UReplaySubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ReplaySubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ReplaySubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UReplaySubsystem, UReplaySubsystem::StaticClass, TEXT("UReplaySubsystem"), &Z_Registration_Info_UClass_UReplaySubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReplaySubsystem), 3998756516U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ReplaySubsystem_h_1539992709(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ReplaySubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ReplaySubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
