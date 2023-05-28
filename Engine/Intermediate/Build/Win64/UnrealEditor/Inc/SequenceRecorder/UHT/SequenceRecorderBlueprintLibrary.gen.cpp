// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SequenceRecorderBlueprintLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSequenceRecorderBlueprintLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	SEQUENCERECORDER_API UClass* Z_Construct_UClass_USequenceRecorderBlueprintLibrary();
	SEQUENCERECORDER_API UClass* Z_Construct_UClass_USequenceRecorderBlueprintLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SequenceRecorder();
// End Cross Module References
	DEFINE_FUNCTION(USequenceRecorderBlueprintLibrary::execStopRecordingSequence)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		USequenceRecorderBlueprintLibrary::StopRecordingSequence();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USequenceRecorderBlueprintLibrary::execIsRecordingSequence)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USequenceRecorderBlueprintLibrary::IsRecordingSequence();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USequenceRecorderBlueprintLibrary::execStartRecordingSequence)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToRecord);
		P_FINISH;
		P_NATIVE_BEGIN;
		USequenceRecorderBlueprintLibrary::StartRecordingSequence(Z_Param_Out_ActorsToRecord);
		P_NATIVE_END;
	}
	void USequenceRecorderBlueprintLibrary::StaticRegisterNativesUSequenceRecorderBlueprintLibrary()
	{
		UClass* Class = USequenceRecorderBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsRecordingSequence", &USequenceRecorderBlueprintLibrary::execIsRecordingSequence },
			{ "StartRecordingSequence", &USequenceRecorderBlueprintLibrary::execStartRecordingSequence },
			{ "StopRecordingSequence", &USequenceRecorderBlueprintLibrary::execStopRecordingSequence },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USequenceRecorderBlueprintLibrary_IsRecordingSequence_Statics
	{
		struct SequenceRecorderBlueprintLibrary_eventIsRecordingSequence_Parms
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
	void Z_Construct_UFunction_USequenceRecorderBlueprintLibrary_IsRecordingSequence_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SequenceRecorderBlueprintLibrary_eventIsRecordingSequence_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USequenceRecorderBlueprintLibrary_IsRecordingSequence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SequenceRecorderBlueprintLibrary_eventIsRecordingSequence_Parms), &Z_Construct_UFunction_USequenceRecorderBlueprintLibrary_IsRecordingSequence_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USequenceRecorderBlueprintLibrary_IsRecordingSequence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequenceRecorderBlueprintLibrary_IsRecordingSequence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USequenceRecorderBlueprintLibrary_IsRecordingSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequence Recording" },
		{ "Comment", "/** Are we currently recording a sequence */" },
		{ "ModuleRelativePath", "Public/SequenceRecorderBlueprintLibrary.h" },
		{ "ToolTip", "Are we currently recording a sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USequenceRecorderBlueprintLibrary_IsRecordingSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USequenceRecorderBlueprintLibrary, nullptr, "IsRecordingSequence", nullptr, nullptr, sizeof(Z_Construct_UFunction_USequenceRecorderBlueprintLibrary_IsRecordingSequence_Statics::SequenceRecorderBlueprintLibrary_eventIsRecordingSequence_Parms), Z_Construct_UFunction_USequenceRecorderBlueprintLibrary_IsRecordingSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USequenceRecorderBlueprintLibrary_IsRecordingSequence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USequenceRecorderBlueprintLibrary_IsRecordingSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USequenceRecorderBlueprintLibrary_IsRecordingSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USequenceRecorderBlueprintLibrary_IsRecordingSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USequenceRecorderBlueprintLibrary_IsRecordingSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USequenceRecorderBlueprintLibrary_StartRecordingSequence_Statics
	{
		struct SequenceRecorderBlueprintLibrary_eventStartRecordingSequence_Parms
		{
			TArray<AActor*> ActorsToRecord;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorsToRecord_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorsToRecord_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorsToRecord;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USequenceRecorderBlueprintLibrary_StartRecordingSequence_Statics::NewProp_ActorsToRecord_Inner = { "ActorsToRecord", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USequenceRecorderBlueprintLibrary_StartRecordingSequence_Statics::NewProp_ActorsToRecord_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USequenceRecorderBlueprintLibrary_StartRecordingSequence_Statics::NewProp_ActorsToRecord = { "ActorsToRecord", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequenceRecorderBlueprintLibrary_eventStartRecordingSequence_Parms, ActorsToRecord), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USequenceRecorderBlueprintLibrary_StartRecordingSequence_Statics::NewProp_ActorsToRecord_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USequenceRecorderBlueprintLibrary_StartRecordingSequence_Statics::NewProp_ActorsToRecord_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USequenceRecorderBlueprintLibrary_StartRecordingSequence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequenceRecorderBlueprintLibrary_StartRecordingSequence_Statics::NewProp_ActorsToRecord_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequenceRecorderBlueprintLibrary_StartRecordingSequence_Statics::NewProp_ActorsToRecord,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USequenceRecorderBlueprintLibrary_StartRecordingSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequence Recording" },
		{ "Comment", "/** \n\x09 * Start recording the passed-in actors to a level sequence.\n\x09 * @param\x09""ActorsToRecord\x09The actors to record\n\x09 */" },
		{ "ModuleRelativePath", "Public/SequenceRecorderBlueprintLibrary.h" },
		{ "ToolTip", "Start recording the passed-in actors to a level sequence.\n@param       ActorsToRecord  The actors to record" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USequenceRecorderBlueprintLibrary_StartRecordingSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USequenceRecorderBlueprintLibrary, nullptr, "StartRecordingSequence", nullptr, nullptr, sizeof(Z_Construct_UFunction_USequenceRecorderBlueprintLibrary_StartRecordingSequence_Statics::SequenceRecorderBlueprintLibrary_eventStartRecordingSequence_Parms), Z_Construct_UFunction_USequenceRecorderBlueprintLibrary_StartRecordingSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USequenceRecorderBlueprintLibrary_StartRecordingSequence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USequenceRecorderBlueprintLibrary_StartRecordingSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USequenceRecorderBlueprintLibrary_StartRecordingSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USequenceRecorderBlueprintLibrary_StartRecordingSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USequenceRecorderBlueprintLibrary_StartRecordingSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USequenceRecorderBlueprintLibrary_StopRecordingSequence_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USequenceRecorderBlueprintLibrary_StopRecordingSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequence Recording" },
		{ "Comment", "/** Stop recording the current sequence, if any */" },
		{ "ModuleRelativePath", "Public/SequenceRecorderBlueprintLibrary.h" },
		{ "ToolTip", "Stop recording the current sequence, if any" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USequenceRecorderBlueprintLibrary_StopRecordingSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USequenceRecorderBlueprintLibrary, nullptr, "StopRecordingSequence", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USequenceRecorderBlueprintLibrary_StopRecordingSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USequenceRecorderBlueprintLibrary_StopRecordingSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USequenceRecorderBlueprintLibrary_StopRecordingSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USequenceRecorderBlueprintLibrary_StopRecordingSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USequenceRecorderBlueprintLibrary);
	UClass* Z_Construct_UClass_USequenceRecorderBlueprintLibrary_NoRegister()
	{
		return USequenceRecorderBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USequenceRecorderBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USequenceRecorderBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SequenceRecorder,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USequenceRecorderBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USequenceRecorderBlueprintLibrary_IsRecordingSequence, "IsRecordingSequence" }, // 760186502
		{ &Z_Construct_UFunction_USequenceRecorderBlueprintLibrary_StartRecordingSequence, "StartRecordingSequence" }, // 1814082132
		{ &Z_Construct_UFunction_USequenceRecorderBlueprintLibrary_StopRecordingSequence, "StopRecordingSequence" }, // 3775086471
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceRecorderBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SequenceRecorderBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/SequenceRecorderBlueprintLibrary.h" },
		{ "ScriptName", "SequenceRecorderLibrary" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USequenceRecorderBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USequenceRecorderBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USequenceRecorderBlueprintLibrary_Statics::ClassParams = {
		&USequenceRecorderBlueprintLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USequenceRecorderBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USequenceRecorderBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USequenceRecorderBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_USequenceRecorderBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USequenceRecorderBlueprintLibrary.OuterSingleton, Z_Construct_UClass_USequenceRecorderBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USequenceRecorderBlueprintLibrary.OuterSingleton;
	}
	template<> SEQUENCERECORDER_API UClass* StaticClass<USequenceRecorderBlueprintLibrary>()
	{
		return USequenceRecorderBlueprintLibrary::StaticClass();
	}
	USequenceRecorderBlueprintLibrary::USequenceRecorderBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USequenceRecorderBlueprintLibrary);
	USequenceRecorderBlueprintLibrary::~USequenceRecorderBlueprintLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_SequenceRecorder_Public_SequenceRecorderBlueprintLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_SequenceRecorder_Public_SequenceRecorderBlueprintLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USequenceRecorderBlueprintLibrary, USequenceRecorderBlueprintLibrary::StaticClass, TEXT("USequenceRecorderBlueprintLibrary"), &Z_Registration_Info_UClass_USequenceRecorderBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USequenceRecorderBlueprintLibrary), 1680519901U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_SequenceRecorder_Public_SequenceRecorderBlueprintLibrary_h_1520819949(TEXT("/Script/SequenceRecorder"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_SequenceRecorder_Public_SequenceRecorderBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_SequenceRecorder_Public_SequenceRecorderBlueprintLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
