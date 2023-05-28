// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneCapture.h"
#include "MovieSceneCaptureSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneCapture() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UMovieSceneAudioCaptureProtocolBase_NoRegister();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UMovieSceneCapture();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UMovieSceneCapture_NoRegister();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UMovieSceneCaptureInterface_NoRegister();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UMovieSceneCaptureProtocolBase_NoRegister();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UMovieSceneImageCaptureProtocolBase_NoRegister();
	MOVIESCENECAPTURE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneCaptureSettings();
	UPackage* Z_Construct_UPackage__Script_MovieSceneCapture();
// End Cross Module References
	DEFINE_FUNCTION(UMovieSceneCapture::execSetAudioCaptureProtocolType)
	{
		P_GET_OBJECT(UClass,Z_Param_ProtocolType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAudioCaptureProtocolType(Z_Param_ProtocolType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneCapture::execSetImageCaptureProtocolType)
	{
		P_GET_OBJECT(UClass,Z_Param_ProtocolType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetImageCaptureProtocolType(Z_Param_ProtocolType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneCapture::execGetAudioCaptureProtocol)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMovieSceneCaptureProtocolBase**)Z_Param__Result=P_THIS->GetAudioCaptureProtocol();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneCapture::execGetImageCaptureProtocol)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMovieSceneCaptureProtocolBase**)Z_Param__Result=P_THIS->GetImageCaptureProtocol();
		P_NATIVE_END;
	}
	void UMovieSceneCapture::StaticRegisterNativesUMovieSceneCapture()
	{
		UClass* Class = UMovieSceneCapture::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAudioCaptureProtocol", &UMovieSceneCapture::execGetAudioCaptureProtocol },
			{ "GetImageCaptureProtocol", &UMovieSceneCapture::execGetImageCaptureProtocol },
			{ "SetAudioCaptureProtocolType", &UMovieSceneCapture::execSetAudioCaptureProtocolType },
			{ "SetImageCaptureProtocolType", &UMovieSceneCapture::execSetImageCaptureProtocolType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMovieSceneCapture_GetAudioCaptureProtocol_Statics
	{
		struct MovieSceneCapture_eventGetAudioCaptureProtocol_Parms
		{
			UMovieSceneCaptureProtocolBase* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneCapture_GetAudioCaptureProtocol_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneCapture_eventGetAudioCaptureProtocol_Parms, ReturnValue), Z_Construct_UClass_UMovieSceneCaptureProtocolBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneCapture_GetAudioCaptureProtocol_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneCapture_GetAudioCaptureProtocol_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneCapture_GetAudioCaptureProtocol_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capture" },
		{ "ModuleRelativePath", "Public/MovieSceneCapture.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneCapture_GetAudioCaptureProtocol_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneCapture, nullptr, "GetAudioCaptureProtocol", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneCapture_GetAudioCaptureProtocol_Statics::MovieSceneCapture_eventGetAudioCaptureProtocol_Parms), Z_Construct_UFunction_UMovieSceneCapture_GetAudioCaptureProtocol_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCapture_GetAudioCaptureProtocol_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneCapture_GetAudioCaptureProtocol_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCapture_GetAudioCaptureProtocol_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneCapture_GetAudioCaptureProtocol()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneCapture_GetAudioCaptureProtocol_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneCapture_GetImageCaptureProtocol_Statics
	{
		struct MovieSceneCapture_eventGetImageCaptureProtocol_Parms
		{
			UMovieSceneCaptureProtocolBase* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneCapture_GetImageCaptureProtocol_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneCapture_eventGetImageCaptureProtocol_Parms, ReturnValue), Z_Construct_UClass_UMovieSceneCaptureProtocolBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneCapture_GetImageCaptureProtocol_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneCapture_GetImageCaptureProtocol_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneCapture_GetImageCaptureProtocol_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capture" },
		{ "Comment", "/** Access the capture protocol we are using */" },
		{ "ModuleRelativePath", "Public/MovieSceneCapture.h" },
		{ "ToolTip", "Access the capture protocol we are using" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneCapture_GetImageCaptureProtocol_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneCapture, nullptr, "GetImageCaptureProtocol", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneCapture_GetImageCaptureProtocol_Statics::MovieSceneCapture_eventGetImageCaptureProtocol_Parms), Z_Construct_UFunction_UMovieSceneCapture_GetImageCaptureProtocol_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCapture_GetImageCaptureProtocol_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneCapture_GetImageCaptureProtocol_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCapture_GetImageCaptureProtocol_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneCapture_GetImageCaptureProtocol()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneCapture_GetImageCaptureProtocol_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneCapture_SetAudioCaptureProtocolType_Statics
	{
		struct MovieSceneCapture_eventSetAudioCaptureProtocolType_Parms
		{
			TSubclassOf<UMovieSceneCaptureProtocolBase>  ProtocolType;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_ProtocolType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMovieSceneCapture_SetAudioCaptureProtocolType_Statics::NewProp_ProtocolType = { "ProtocolType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneCapture_eventSetAudioCaptureProtocolType_Parms, ProtocolType), Z_Construct_UClass_UClass, Z_Construct_UClass_UMovieSceneCaptureProtocolBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneCapture_SetAudioCaptureProtocolType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneCapture_SetAudioCaptureProtocolType_Statics::NewProp_ProtocolType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneCapture_SetAudioCaptureProtocolType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capture" },
		{ "ModuleRelativePath", "Public/MovieSceneCapture.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneCapture_SetAudioCaptureProtocolType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneCapture, nullptr, "SetAudioCaptureProtocolType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneCapture_SetAudioCaptureProtocolType_Statics::MovieSceneCapture_eventSetAudioCaptureProtocolType_Parms), Z_Construct_UFunction_UMovieSceneCapture_SetAudioCaptureProtocolType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCapture_SetAudioCaptureProtocolType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneCapture_SetAudioCaptureProtocolType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCapture_SetAudioCaptureProtocolType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneCapture_SetAudioCaptureProtocolType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneCapture_SetAudioCaptureProtocolType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneCapture_SetImageCaptureProtocolType_Statics
	{
		struct MovieSceneCapture_eventSetImageCaptureProtocolType_Parms
		{
			TSubclassOf<UMovieSceneCaptureProtocolBase>  ProtocolType;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_ProtocolType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMovieSceneCapture_SetImageCaptureProtocolType_Statics::NewProp_ProtocolType = { "ProtocolType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneCapture_eventSetImageCaptureProtocolType_Parms, ProtocolType), Z_Construct_UClass_UClass, Z_Construct_UClass_UMovieSceneCaptureProtocolBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneCapture_SetImageCaptureProtocolType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneCapture_SetImageCaptureProtocolType_Statics::NewProp_ProtocolType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneCapture_SetImageCaptureProtocolType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capture" },
		{ "ModuleRelativePath", "Public/MovieSceneCapture.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneCapture_SetImageCaptureProtocolType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneCapture, nullptr, "SetImageCaptureProtocolType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneCapture_SetImageCaptureProtocolType_Statics::MovieSceneCapture_eventSetImageCaptureProtocolType_Parms), Z_Construct_UFunction_UMovieSceneCapture_SetImageCaptureProtocolType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCapture_SetImageCaptureProtocolType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneCapture_SetImageCaptureProtocolType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCapture_SetImageCaptureProtocolType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneCapture_SetImageCaptureProtocolType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneCapture_SetImageCaptureProtocolType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneCapture);
	UClass* Z_Construct_UClass_UMovieSceneCapture_NoRegister()
	{
		return UMovieSceneCapture::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneCapture_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImageCaptureProtocolType_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ImageCaptureProtocolType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioCaptureProtocolType_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AudioCaptureProtocolType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImageCaptureProtocol_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ImageCaptureProtocol;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioCaptureProtocol_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AudioCaptureProtocol;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseSeparateProcess_MetaData[];
#endif
		static void NewProp_bUseSeparateProcess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSeparateProcess;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCloseEditorWhenCaptureStarts_MetaData[];
#endif
		static void NewProp_bCloseEditorWhenCaptureStarts_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCloseEditorWhenCaptureStarts;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalCommandLineArguments_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AdditionalCommandLineArguments;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InheritedCommandLineArguments_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InheritedCommandLineArguments;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneCapture_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneCapture,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMovieSceneCapture_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieSceneCapture_GetAudioCaptureProtocol, "GetAudioCaptureProtocol" }, // 3908353584
		{ &Z_Construct_UFunction_UMovieSceneCapture_GetImageCaptureProtocol, "GetImageCaptureProtocol" }, // 692712187
		{ &Z_Construct_UFunction_UMovieSceneCapture_SetAudioCaptureProtocolType, "SetAudioCaptureProtocolType" }, // 482290909
		{ &Z_Construct_UFunction_UMovieSceneCapture_SetImageCaptureProtocolType, "SetImageCaptureProtocolType" }, // 1056425509
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCapture_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Class responsible for capturing scene data */" },
		{ "IncludePath", "MovieSceneCapture.h" },
		{ "ModuleRelativePath", "Public/MovieSceneCapture.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Class responsible for capturing scene data" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_ImageCaptureProtocolType_MetaData[] = {
		{ "Category", "CaptureSettings" },
		{ "Comment", "/** The type of capture protocol to use for image data */" },
		{ "DisplayName", "Image Output Format" },
		{ "HideViewOptions", "" },
		{ "MetaClass", "/Script/MovieSceneCapture.MovieSceneImageCaptureProtocolBase" },
		{ "ModuleRelativePath", "Public/MovieSceneCapture.h" },
		{ "ShowDisplayNames", "" },
		{ "ToolTip", "The type of capture protocol to use for image data" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_ImageCaptureProtocolType = { "ImageCaptureProtocolType", nullptr, (EPropertyFlags)0x0010000002004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneCapture, ImageCaptureProtocolType), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_ImageCaptureProtocolType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_ImageCaptureProtocolType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_AudioCaptureProtocolType_MetaData[] = {
		{ "Category", "CaptureSettings" },
		{ "Comment", "/** The type of capture protocol to use for audio data. */" },
		{ "DisplayName", "Audio Output Format" },
		{ "HideViewOptions", "" },
		{ "MetaClass", "/Script/MovieSceneCapture.MovieSceneAudioCaptureProtocolBase" },
		{ "ModuleRelativePath", "Public/MovieSceneCapture.h" },
		{ "ShowDisplayNames", "" },
		{ "ToolTip", "The type of capture protocol to use for audio data." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_AudioCaptureProtocolType = { "AudioCaptureProtocolType", nullptr, (EPropertyFlags)0x0010000002004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneCapture, AudioCaptureProtocolType), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_AudioCaptureProtocolType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_AudioCaptureProtocolType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_ImageCaptureProtocol_MetaData[] = {
		{ "Category", "CaptureSettings" },
		{ "Comment", "/** Capture protocol responsible for actually capturing frame data */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MovieSceneCapture.h" },
		{ "ToolTip", "Capture protocol responsible for actually capturing frame data" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_ImageCaptureProtocol = { "ImageCaptureProtocol", nullptr, (EPropertyFlags)0x00160000000a2009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneCapture, ImageCaptureProtocol), Z_Construct_UClass_UMovieSceneImageCaptureProtocolBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_ImageCaptureProtocol_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_ImageCaptureProtocol_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_AudioCaptureProtocol_MetaData[] = {
		{ "Category", "CaptureSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MovieSceneCapture.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_AudioCaptureProtocol = { "AudioCaptureProtocol", nullptr, (EPropertyFlags)0x00160000000a2009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneCapture, AudioCaptureProtocol), Z_Construct_UClass_UMovieSceneAudioCaptureProtocolBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_AudioCaptureProtocol_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_AudioCaptureProtocol_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "CaptureSettings" },
		{ "Comment", "/** Settings that define how to capture */" },
		{ "ModuleRelativePath", "Public/MovieSceneCapture.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Settings that define how to capture" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneCapture, Settings), Z_Construct_UScriptStruct_FMovieSceneCaptureSettings, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_Settings_MetaData)) }; // 729309871
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_bUseSeparateProcess_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Whether to capture the movie in a separate process or not */" },
		{ "ModuleRelativePath", "Public/MovieSceneCapture.h" },
		{ "ToolTip", "Whether to capture the movie in a separate process or not" },
	};
#endif
	void Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_bUseSeparateProcess_SetBit(void* Obj)
	{
		((UMovieSceneCapture*)Obj)->bUseSeparateProcess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_bUseSeparateProcess = { "bUseSeparateProcess", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMovieSceneCapture), &Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_bUseSeparateProcess_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_bUseSeparateProcess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_bUseSeparateProcess_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_bCloseEditorWhenCaptureStarts_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** When enabled, the editor will shutdown when the capture starts */" },
		{ "EditCondition", "bUseSeparateProcess" },
		{ "ModuleRelativePath", "Public/MovieSceneCapture.h" },
		{ "ToolTip", "When enabled, the editor will shutdown when the capture starts" },
	};
#endif
	void Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_bCloseEditorWhenCaptureStarts_SetBit(void* Obj)
	{
		((UMovieSceneCapture*)Obj)->bCloseEditorWhenCaptureStarts = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_bCloseEditorWhenCaptureStarts = { "bCloseEditorWhenCaptureStarts", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMovieSceneCapture), &Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_bCloseEditorWhenCaptureStarts_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_bCloseEditorWhenCaptureStarts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_bCloseEditorWhenCaptureStarts_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_AdditionalCommandLineArguments_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Additional command line arguments to pass to the external process when capturing */" },
		{ "EditCondition", "bUseSeparateProcess" },
		{ "ModuleRelativePath", "Public/MovieSceneCapture.h" },
		{ "ToolTip", "Additional command line arguments to pass to the external process when capturing" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_AdditionalCommandLineArguments = { "AdditionalCommandLineArguments", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneCapture, AdditionalCommandLineArguments), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_AdditionalCommandLineArguments_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_AdditionalCommandLineArguments_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_InheritedCommandLineArguments_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Command line arguments inherited from this process */" },
		{ "EditCondition", "bUseSeparateProcess" },
		{ "ModuleRelativePath", "Public/MovieSceneCapture.h" },
		{ "ToolTip", "Command line arguments inherited from this process" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_InheritedCommandLineArguments = { "InheritedCommandLineArguments", nullptr, (EPropertyFlags)0x0010040000002005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneCapture, InheritedCommandLineArguments), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_InheritedCommandLineArguments_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_InheritedCommandLineArguments_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneCapture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_ImageCaptureProtocolType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_AudioCaptureProtocolType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_ImageCaptureProtocol,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_AudioCaptureProtocol,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_bUseSeparateProcess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_bCloseEditorWhenCaptureStarts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_AdditionalCommandLineArguments,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCapture_Statics::NewProp_InheritedCommandLineArguments,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneCapture_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovieSceneCaptureInterface_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneCapture, IMovieSceneCaptureInterface), false },  // 3634750822
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneCapture_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneCapture>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneCapture_Statics::ClassParams = {
		&UMovieSceneCapture::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMovieSceneCapture_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCapture_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009004A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCapture_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCapture_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneCapture()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneCapture.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneCapture.OuterSingleton, Z_Construct_UClass_UMovieSceneCapture_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneCapture.OuterSingleton;
	}
	template<> MOVIESCENECAPTURE_API UClass* StaticClass<UMovieSceneCapture>()
	{
		return UMovieSceneCapture::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneCapture);
	UMovieSceneCapture::~UMovieSceneCapture() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCapture_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCapture_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneCapture, UMovieSceneCapture::StaticClass, TEXT("UMovieSceneCapture"), &Z_Registration_Info_UClass_UMovieSceneCapture, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneCapture), 2589252610U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCapture_h_4070262396(TEXT("/Script/MovieSceneCapture"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCapture_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCapture_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
