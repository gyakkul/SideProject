// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Recorder/TakeRecorder.h"
#include "Recorder/TakeRecorderParameters.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTakeRecorder() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequence_NoRegister();
	TAKERECORDER_API UClass* Z_Construct_UClass_UTakeRecorder();
	TAKERECORDER_API UClass* Z_Construct_UClass_UTakeRecorder_NoRegister();
	TAKERECORDER_API UClass* Z_Construct_UClass_UTakeRecorderOverlayWidget_NoRegister();
	TAKERECORDER_API UEnum* Z_Construct_UEnum_TakeRecorder_ETakeRecorderState();
	TAKERECORDER_API UScriptStruct* Z_Construct_UScriptStruct_FTakeRecorderParameters();
	UPackage* Z_Construct_UPackage__Script_TakeRecorder();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETakeRecorderState;
	static UEnum* ETakeRecorderState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETakeRecorderState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETakeRecorderState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TakeRecorder_ETakeRecorderState, (UObject*)Z_Construct_UPackage__Script_TakeRecorder(), TEXT("ETakeRecorderState"));
		}
		return Z_Registration_Info_UEnum_ETakeRecorderState.OuterSingleton;
	}
	template<> TAKERECORDER_API UEnum* StaticEnum<ETakeRecorderState>()
	{
		return ETakeRecorderState_StaticEnum();
	}
	struct Z_Construct_UEnum_TakeRecorder_ETakeRecorderState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_TakeRecorder_ETakeRecorderState_Statics::Enumerators[] = {
		{ "ETakeRecorderState::CountingDown", (int64)ETakeRecorderState::CountingDown },
		{ "ETakeRecorderState::PreRecord", (int64)ETakeRecorderState::PreRecord },
		{ "ETakeRecorderState::TickingAfterPre", (int64)ETakeRecorderState::TickingAfterPre },
		{ "ETakeRecorderState::Started", (int64)ETakeRecorderState::Started },
		{ "ETakeRecorderState::Stopped", (int64)ETakeRecorderState::Stopped },
		{ "ETakeRecorderState::Cancelled", (int64)ETakeRecorderState::Cancelled },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_TakeRecorder_ETakeRecorderState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Cancelled.Name", "ETakeRecorderState::Cancelled" },
		{ "CountingDown.Name", "ETakeRecorderState::CountingDown" },
		{ "ModuleRelativePath", "Public/Recorder/TakeRecorder.h" },
		{ "PreRecord.Name", "ETakeRecorderState::PreRecord" },
		{ "Started.Name", "ETakeRecorderState::Started" },
		{ "Stopped.Name", "ETakeRecorderState::Stopped" },
		{ "TickingAfterPre.Name", "ETakeRecorderState::TickingAfterPre" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TakeRecorder_ETakeRecorderState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_TakeRecorder,
		nullptr,
		"ETakeRecorderState",
		"ETakeRecorderState",
		Z_Construct_UEnum_TakeRecorder_ETakeRecorderState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_TakeRecorder_ETakeRecorderState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_TakeRecorder_ETakeRecorderState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_TakeRecorder_ETakeRecorderState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_TakeRecorder_ETakeRecorderState()
	{
		if (!Z_Registration_Info_UEnum_ETakeRecorderState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETakeRecorderState.InnerSingleton, Z_Construct_UEnum_TakeRecorder_ETakeRecorderState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETakeRecorderState.InnerSingleton;
	}
	DEFINE_FUNCTION(UTakeRecorder::execGetState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ETakeRecorderState*)Z_Param__Result=P_THIS->GetState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTakeRecorder::execGetSequence)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULevelSequence**)Z_Param__Result=P_THIS->GetSequence();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTakeRecorder::execGetCountdownSeconds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCountdownSeconds();
		P_NATIVE_END;
	}
	void UTakeRecorder::StaticRegisterNativesUTakeRecorder()
	{
		UClass* Class = UTakeRecorder::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCountdownSeconds", &UTakeRecorder::execGetCountdownSeconds },
			{ "GetSequence", &UTakeRecorder::execGetSequence },
			{ "GetState", &UTakeRecorder::execGetState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTakeRecorder_GetCountdownSeconds_Statics
	{
		struct TakeRecorder_eventGetCountdownSeconds_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTakeRecorder_GetCountdownSeconds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TakeRecorder_eventGetCountdownSeconds_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTakeRecorder_GetCountdownSeconds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakeRecorder_GetCountdownSeconds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTakeRecorder_GetCountdownSeconds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Take Recorder" },
		{ "Comment", "/**\n\x09 * Access the number of seconds remaining before this recording will start\n\x09 */" },
		{ "ModuleRelativePath", "Public/Recorder/TakeRecorder.h" },
		{ "ToolTip", "Access the number of seconds remaining before this recording will start" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTakeRecorder_GetCountdownSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTakeRecorder, nullptr, "GetCountdownSeconds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTakeRecorder_GetCountdownSeconds_Statics::TakeRecorder_eventGetCountdownSeconds_Parms), Z_Construct_UFunction_UTakeRecorder_GetCountdownSeconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeRecorder_GetCountdownSeconds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTakeRecorder_GetCountdownSeconds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeRecorder_GetCountdownSeconds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTakeRecorder_GetCountdownSeconds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTakeRecorder_GetCountdownSeconds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTakeRecorder_GetSequence_Statics
	{
		struct TakeRecorder_eventGetSequence_Parms
		{
			ULevelSequence* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTakeRecorder_GetSequence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TakeRecorder_eventGetSequence_Parms, ReturnValue), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTakeRecorder_GetSequence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakeRecorder_GetSequence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTakeRecorder_GetSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "Take Recorder" },
		{ "Comment", "/**\n\x09 * Access the sequence asset that this recorder is recording into\n\x09 */" },
		{ "ModuleRelativePath", "Public/Recorder/TakeRecorder.h" },
		{ "ToolTip", "Access the sequence asset that this recorder is recording into" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTakeRecorder_GetSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTakeRecorder, nullptr, "GetSequence", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTakeRecorder_GetSequence_Statics::TakeRecorder_eventGetSequence_Parms), Z_Construct_UFunction_UTakeRecorder_GetSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeRecorder_GetSequence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTakeRecorder_GetSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeRecorder_GetSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTakeRecorder_GetSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTakeRecorder_GetSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTakeRecorder_GetState_Statics
	{
		struct TakeRecorder_eventGetState_Parms
		{
			ETakeRecorderState ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTakeRecorder_GetState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTakeRecorder_GetState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TakeRecorder_eventGetState_Parms, ReturnValue), Z_Construct_UEnum_TakeRecorder_ETakeRecorderState, METADATA_PARAMS(nullptr, 0) }; // 2876715440
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTakeRecorder_GetState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakeRecorder_GetState_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTakeRecorder_GetState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTakeRecorder_GetState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Take Recorder" },
		{ "Comment", "/**\n\x09 * Get the current state of this recorder\n\x09 */" },
		{ "ModuleRelativePath", "Public/Recorder/TakeRecorder.h" },
		{ "ToolTip", "Get the current state of this recorder" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTakeRecorder_GetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTakeRecorder, nullptr, "GetState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTakeRecorder_GetState_Statics::TakeRecorder_eventGetState_Parms), Z_Construct_UFunction_UTakeRecorder_GetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeRecorder_GetState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTakeRecorder_GetState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTakeRecorder_GetState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTakeRecorder_GetState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTakeRecorder_GetState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTakeRecorder);
	UClass* Z_Construct_UClass_UTakeRecorder_NoRegister()
	{
		return UTakeRecorder::StaticClass();
	}
	struct Z_Construct_UClass_UTakeRecorder_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequenceAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SequenceAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlayWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OverlayWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeakWorld_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_WeakWorld;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTakeRecorder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TakeRecorder,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTakeRecorder_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTakeRecorder_GetCountdownSeconds, "GetCountdownSeconds" }, // 2420402797
		{ &Z_Construct_UFunction_UTakeRecorder_GetSequence, "GetSequence" }, // 209357568
		{ &Z_Construct_UFunction_UTakeRecorder_GetState, "GetState" }, // 4101985458
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeRecorder_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Recorder/TakeRecorder.h" },
		{ "ModuleRelativePath", "Public/Recorder/TakeRecorder.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeRecorder_Statics::NewProp_SequenceAsset_MetaData[] = {
		{ "Comment", "/** The asset that we should output recorded data into */" },
		{ "ModuleRelativePath", "Public/Recorder/TakeRecorder.h" },
		{ "ToolTip", "The asset that we should output recorded data into" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UTakeRecorder_Statics::NewProp_SequenceAsset = { "SequenceAsset", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTakeRecorder, SequenceAsset), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTakeRecorder_Statics::NewProp_SequenceAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorder_Statics::NewProp_SequenceAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeRecorder_Statics::NewProp_OverlayWidget_MetaData[] = {
		{ "Comment", "/** The overlay widget for this recording */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Recorder/TakeRecorder.h" },
		{ "ToolTip", "The overlay widget for this recording" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UTakeRecorder_Statics::NewProp_OverlayWidget = { "OverlayWidget", nullptr, (EPropertyFlags)0x0044000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTakeRecorder, OverlayWidget), Z_Construct_UClass_UTakeRecorderOverlayWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTakeRecorder_Statics::NewProp_OverlayWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorder_Statics::NewProp_OverlayWidget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeRecorder_Statics::NewProp_WeakWorld_MetaData[] = {
		{ "Comment", "/** The world that we are recording within */" },
		{ "ModuleRelativePath", "Public/Recorder/TakeRecorder.h" },
		{ "ToolTip", "The world that we are recording within" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UTakeRecorder_Statics::NewProp_WeakWorld = { "WeakWorld", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTakeRecorder, WeakWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTakeRecorder_Statics::NewProp_WeakWorld_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorder_Statics::NewProp_WeakWorld_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeRecorder_Statics::NewProp_Parameters_MetaData[] = {
		{ "Comment", "/** Parameters for the recorder - marked up as a uproperty to support reference collection */" },
		{ "ModuleRelativePath", "Public/Recorder/TakeRecorder.h" },
		{ "ToolTip", "Parameters for the recorder - marked up as a uproperty to support reference collection" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTakeRecorder_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTakeRecorder, Parameters), Z_Construct_UScriptStruct_FTakeRecorderParameters, METADATA_PARAMS(Z_Construct_UClass_UTakeRecorder_Statics::NewProp_Parameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorder_Statics::NewProp_Parameters_MetaData)) }; // 110737924
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTakeRecorder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeRecorder_Statics::NewProp_SequenceAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeRecorder_Statics::NewProp_OverlayWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeRecorder_Statics::NewProp_WeakWorld,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeRecorder_Statics::NewProp_Parameters,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTakeRecorder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTakeRecorder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTakeRecorder_Statics::ClassParams = {
		&UTakeRecorder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTakeRecorder_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorder_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTakeRecorder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTakeRecorder()
	{
		if (!Z_Registration_Info_UClass_UTakeRecorder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTakeRecorder.OuterSingleton, Z_Construct_UClass_UTakeRecorder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTakeRecorder.OuterSingleton;
	}
	template<> TAKERECORDER_API UClass* StaticClass<UTakeRecorder>()
	{
		return UTakeRecorder::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTakeRecorder);
	UTakeRecorder::~UTakeRecorder() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorder_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorder_h_Statics::EnumInfo[] = {
		{ ETakeRecorderState_StaticEnum, TEXT("ETakeRecorderState"), &Z_Registration_Info_UEnum_ETakeRecorderState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2876715440U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorder_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTakeRecorder, UTakeRecorder::StaticClass, TEXT("UTakeRecorder"), &Z_Registration_Info_UClass_UTakeRecorder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTakeRecorder), 1465953532U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorder_h_3676162520(TEXT("/Script/TakeRecorder"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorder_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorder_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorder_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
