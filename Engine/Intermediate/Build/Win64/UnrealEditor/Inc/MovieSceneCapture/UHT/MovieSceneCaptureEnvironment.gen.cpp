// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneCaptureEnvironment.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneCaptureEnvironment() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UMovieSceneAudioCaptureProtocolBase_NoRegister();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UMovieSceneCaptureEnvironment();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UMovieSceneCaptureEnvironment_NoRegister();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UMovieSceneImageCaptureProtocolBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieSceneCapture();
// End Cross Module References
	DEFINE_FUNCTION(UMovieSceneCaptureEnvironment::execFindAudioCaptureProtocol)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMovieSceneAudioCaptureProtocolBase**)Z_Param__Result=UMovieSceneCaptureEnvironment::FindAudioCaptureProtocol();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneCaptureEnvironment::execFindImageCaptureProtocol)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMovieSceneImageCaptureProtocolBase**)Z_Param__Result=UMovieSceneCaptureEnvironment::FindImageCaptureProtocol();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneCaptureEnvironment::execIsCaptureInProgress)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMovieSceneCaptureEnvironment::IsCaptureInProgress();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneCaptureEnvironment::execGetCaptureElapsedTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UMovieSceneCaptureEnvironment::GetCaptureElapsedTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneCaptureEnvironment::execGetCaptureFrameNumber)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UMovieSceneCaptureEnvironment::GetCaptureFrameNumber();
		P_NATIVE_END;
	}
	void UMovieSceneCaptureEnvironment::StaticRegisterNativesUMovieSceneCaptureEnvironment()
	{
		UClass* Class = UMovieSceneCaptureEnvironment::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindAudioCaptureProtocol", &UMovieSceneCaptureEnvironment::execFindAudioCaptureProtocol },
			{ "FindImageCaptureProtocol", &UMovieSceneCaptureEnvironment::execFindImageCaptureProtocol },
			{ "GetCaptureElapsedTime", &UMovieSceneCaptureEnvironment::execGetCaptureElapsedTime },
			{ "GetCaptureFrameNumber", &UMovieSceneCaptureEnvironment::execGetCaptureFrameNumber },
			{ "IsCaptureInProgress", &UMovieSceneCaptureEnvironment::execIsCaptureInProgress },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMovieSceneCaptureEnvironment_FindAudioCaptureProtocol_Statics
	{
		struct MovieSceneCaptureEnvironment_eventFindAudioCaptureProtocol_Parms
		{
			UMovieSceneAudioCaptureProtocolBase* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneCaptureEnvironment_FindAudioCaptureProtocol_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneCaptureEnvironment_eventFindAudioCaptureProtocol_Parms, ReturnValue), Z_Construct_UClass_UMovieSceneAudioCaptureProtocolBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneCaptureEnvironment_FindAudioCaptureProtocol_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneCaptureEnvironment_FindAudioCaptureProtocol_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneCaptureEnvironment_FindAudioCaptureProtocol_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cinematics|Capture" },
		{ "Comment", "/**\n\x09* Attempt to locate a capture protocol - may not be in a capturing state\n\x09*/" },
		{ "ModuleRelativePath", "Public/MovieSceneCaptureEnvironment.h" },
		{ "ToolTip", "Attempt to locate a capture protocol - may not be in a capturing state" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneCaptureEnvironment_FindAudioCaptureProtocol_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneCaptureEnvironment, nullptr, "FindAudioCaptureProtocol", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneCaptureEnvironment_FindAudioCaptureProtocol_Statics::MovieSceneCaptureEnvironment_eventFindAudioCaptureProtocol_Parms), Z_Construct_UFunction_UMovieSceneCaptureEnvironment_FindAudioCaptureProtocol_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCaptureEnvironment_FindAudioCaptureProtocol_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneCaptureEnvironment_FindAudioCaptureProtocol_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCaptureEnvironment_FindAudioCaptureProtocol_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneCaptureEnvironment_FindAudioCaptureProtocol()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneCaptureEnvironment_FindAudioCaptureProtocol_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneCaptureEnvironment_FindImageCaptureProtocol_Statics
	{
		struct MovieSceneCaptureEnvironment_eventFindImageCaptureProtocol_Parms
		{
			UMovieSceneImageCaptureProtocolBase* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneCaptureEnvironment_FindImageCaptureProtocol_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneCaptureEnvironment_eventFindImageCaptureProtocol_Parms, ReturnValue), Z_Construct_UClass_UMovieSceneImageCaptureProtocolBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneCaptureEnvironment_FindImageCaptureProtocol_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneCaptureEnvironment_FindImageCaptureProtocol_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneCaptureEnvironment_FindImageCaptureProtocol_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cinematics|Capture" },
		{ "Comment", "/**\n\x09 * Attempt to locate a capture protocol - may not be in a capturing state\n\x09 */" },
		{ "ModuleRelativePath", "Public/MovieSceneCaptureEnvironment.h" },
		{ "ToolTip", "Attempt to locate a capture protocol - may not be in a capturing state" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneCaptureEnvironment_FindImageCaptureProtocol_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneCaptureEnvironment, nullptr, "FindImageCaptureProtocol", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneCaptureEnvironment_FindImageCaptureProtocol_Statics::MovieSceneCaptureEnvironment_eventFindImageCaptureProtocol_Parms), Z_Construct_UFunction_UMovieSceneCaptureEnvironment_FindImageCaptureProtocol_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCaptureEnvironment_FindImageCaptureProtocol_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneCaptureEnvironment_FindImageCaptureProtocol_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCaptureEnvironment_FindImageCaptureProtocol_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneCaptureEnvironment_FindImageCaptureProtocol()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneCaptureEnvironment_FindImageCaptureProtocol_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneCaptureEnvironment_GetCaptureElapsedTime_Statics
	{
		struct MovieSceneCaptureEnvironment_eventGetCaptureElapsedTime_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneCaptureEnvironment_GetCaptureElapsedTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneCaptureEnvironment_eventGetCaptureElapsedTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneCaptureEnvironment_GetCaptureElapsedTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneCaptureEnvironment_GetCaptureElapsedTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneCaptureEnvironment_GetCaptureElapsedTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cinematics|Capture" },
		{ "Comment", "/** Get the total elapsed time of the current capture in seconds */" },
		{ "ModuleRelativePath", "Public/MovieSceneCaptureEnvironment.h" },
		{ "ToolTip", "Get the total elapsed time of the current capture in seconds" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneCaptureEnvironment_GetCaptureElapsedTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneCaptureEnvironment, nullptr, "GetCaptureElapsedTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneCaptureEnvironment_GetCaptureElapsedTime_Statics::MovieSceneCaptureEnvironment_eventGetCaptureElapsedTime_Parms), Z_Construct_UFunction_UMovieSceneCaptureEnvironment_GetCaptureElapsedTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCaptureEnvironment_GetCaptureElapsedTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneCaptureEnvironment_GetCaptureElapsedTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCaptureEnvironment_GetCaptureElapsedTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneCaptureEnvironment_GetCaptureElapsedTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneCaptureEnvironment_GetCaptureElapsedTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneCaptureEnvironment_GetCaptureFrameNumber_Statics
	{
		struct MovieSceneCaptureEnvironment_eventGetCaptureFrameNumber_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneCaptureEnvironment_GetCaptureFrameNumber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneCaptureEnvironment_eventGetCaptureFrameNumber_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneCaptureEnvironment_GetCaptureFrameNumber_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneCaptureEnvironment_GetCaptureFrameNumber_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneCaptureEnvironment_GetCaptureFrameNumber_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cinematics|Capture" },
		{ "Comment", "/** Get the frame number of the current capture */" },
		{ "ModuleRelativePath", "Public/MovieSceneCaptureEnvironment.h" },
		{ "ToolTip", "Get the frame number of the current capture" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneCaptureEnvironment_GetCaptureFrameNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneCaptureEnvironment, nullptr, "GetCaptureFrameNumber", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneCaptureEnvironment_GetCaptureFrameNumber_Statics::MovieSceneCaptureEnvironment_eventGetCaptureFrameNumber_Parms), Z_Construct_UFunction_UMovieSceneCaptureEnvironment_GetCaptureFrameNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCaptureEnvironment_GetCaptureFrameNumber_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneCaptureEnvironment_GetCaptureFrameNumber_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCaptureEnvironment_GetCaptureFrameNumber_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneCaptureEnvironment_GetCaptureFrameNumber()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneCaptureEnvironment_GetCaptureFrameNumber_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneCaptureEnvironment_IsCaptureInProgress_Statics
	{
		struct MovieSceneCaptureEnvironment_eventIsCaptureInProgress_Parms
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
	void Z_Construct_UFunction_UMovieSceneCaptureEnvironment_IsCaptureInProgress_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieSceneCaptureEnvironment_eventIsCaptureInProgress_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneCaptureEnvironment_IsCaptureInProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MovieSceneCaptureEnvironment_eventIsCaptureInProgress_Parms), &Z_Construct_UFunction_UMovieSceneCaptureEnvironment_IsCaptureInProgress_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneCaptureEnvironment_IsCaptureInProgress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneCaptureEnvironment_IsCaptureInProgress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneCaptureEnvironment_IsCaptureInProgress_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cinematics|Capture" },
		{ "Comment", "/**\n\x09 * Return true if there is any capture currently active (even in a warm-up state).\n\x09 * Useful for checking whether to do certain operations in BeginPlay\n\x09 */" },
		{ "ModuleRelativePath", "Public/MovieSceneCaptureEnvironment.h" },
		{ "ToolTip", "Return true if there is any capture currently active (even in a warm-up state).\nUseful for checking whether to do certain operations in BeginPlay" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneCaptureEnvironment_IsCaptureInProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneCaptureEnvironment, nullptr, "IsCaptureInProgress", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneCaptureEnvironment_IsCaptureInProgress_Statics::MovieSceneCaptureEnvironment_eventIsCaptureInProgress_Parms), Z_Construct_UFunction_UMovieSceneCaptureEnvironment_IsCaptureInProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCaptureEnvironment_IsCaptureInProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneCaptureEnvironment_IsCaptureInProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCaptureEnvironment_IsCaptureInProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneCaptureEnvironment_IsCaptureInProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneCaptureEnvironment_IsCaptureInProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneCaptureEnvironment);
	UClass* Z_Construct_UClass_UMovieSceneCaptureEnvironment_NoRegister()
	{
		return UMovieSceneCaptureEnvironment::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneCaptureEnvironment_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneCaptureEnvironment_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneCapture,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMovieSceneCaptureEnvironment_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieSceneCaptureEnvironment_FindAudioCaptureProtocol, "FindAudioCaptureProtocol" }, // 1036694751
		{ &Z_Construct_UFunction_UMovieSceneCaptureEnvironment_FindImageCaptureProtocol, "FindImageCaptureProtocol" }, // 1758191350
		{ &Z_Construct_UFunction_UMovieSceneCaptureEnvironment_GetCaptureElapsedTime, "GetCaptureElapsedTime" }, // 4094341579
		{ &Z_Construct_UFunction_UMovieSceneCaptureEnvironment_GetCaptureFrameNumber, "GetCaptureFrameNumber" }, // 3513526540
		{ &Z_Construct_UFunction_UMovieSceneCaptureEnvironment_IsCaptureInProgress, "IsCaptureInProgress" }, // 277162178
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCaptureEnvironment_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MovieSceneCaptureEnvironment.h" },
		{ "ModuleRelativePath", "Public/MovieSceneCaptureEnvironment.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneCaptureEnvironment_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneCaptureEnvironment>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneCaptureEnvironment_Statics::ClassParams = {
		&UMovieSceneCaptureEnvironment::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCaptureEnvironment_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCaptureEnvironment_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneCaptureEnvironment()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneCaptureEnvironment.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneCaptureEnvironment.OuterSingleton, Z_Construct_UClass_UMovieSceneCaptureEnvironment_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneCaptureEnvironment.OuterSingleton;
	}
	template<> MOVIESCENECAPTURE_API UClass* StaticClass<UMovieSceneCaptureEnvironment>()
	{
		return UMovieSceneCaptureEnvironment::StaticClass();
	}
	UMovieSceneCaptureEnvironment::UMovieSceneCaptureEnvironment(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneCaptureEnvironment);
	UMovieSceneCaptureEnvironment::~UMovieSceneCaptureEnvironment() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureEnvironment_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureEnvironment_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneCaptureEnvironment, UMovieSceneCaptureEnvironment::StaticClass, TEXT("UMovieSceneCaptureEnvironment"), &Z_Registration_Info_UClass_UMovieSceneCaptureEnvironment, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneCaptureEnvironment), 1734636377U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureEnvironment_h_1141180432(TEXT("/Script/MovieSceneCapture"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureEnvironment_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureEnvironment_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
