// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ExtensionLibraries/MovieScenePropertyTrackExtensions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScenePropertyTrackExtensions() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UEnum();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneByteTrack_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneObjectPropertyTrack_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePropertyTrack_NoRegister();
	SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieScenePropertyTrackExtensions();
	SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieScenePropertyTrackExtensions_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SequencerScripting();
// End Cross Module References
	DEFINE_FUNCTION(UMovieScenePropertyTrackExtensions::execGetByteTrackEnum)
	{
		P_GET_OBJECT(UMovieSceneByteTrack,Z_Param_Track);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEnum**)Z_Param__Result=UMovieScenePropertyTrackExtensions::GetByteTrackEnum(Z_Param_Track);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieScenePropertyTrackExtensions::execSetByteTrackEnum)
	{
		P_GET_OBJECT(UMovieSceneByteTrack,Z_Param_Track);
		P_GET_OBJECT(UEnum,Z_Param_InEnum);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMovieScenePropertyTrackExtensions::SetByteTrackEnum(Z_Param_Track,Z_Param_InEnum);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieScenePropertyTrackExtensions::execGetObjectPropertyClass)
	{
		P_GET_OBJECT(UMovieSceneObjectPropertyTrack,Z_Param_Track);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UClass**)Z_Param__Result=UMovieScenePropertyTrackExtensions::GetObjectPropertyClass(Z_Param_Track);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieScenePropertyTrackExtensions::execSetObjectPropertyClass)
	{
		P_GET_OBJECT(UMovieSceneObjectPropertyTrack,Z_Param_Track);
		P_GET_OBJECT(UClass,Z_Param_PropertyClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMovieScenePropertyTrackExtensions::SetObjectPropertyClass(Z_Param_Track,Z_Param_PropertyClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieScenePropertyTrackExtensions::execGetUniqueTrackName)
	{
		P_GET_OBJECT(UMovieScenePropertyTrack,Z_Param_Track);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=UMovieScenePropertyTrackExtensions::GetUniqueTrackName(Z_Param_Track);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieScenePropertyTrackExtensions::execGetPropertyPath)
	{
		P_GET_OBJECT(UMovieScenePropertyTrack,Z_Param_Track);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UMovieScenePropertyTrackExtensions::GetPropertyPath(Z_Param_Track);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieScenePropertyTrackExtensions::execGetPropertyName)
	{
		P_GET_OBJECT(UMovieScenePropertyTrack,Z_Param_Track);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=UMovieScenePropertyTrackExtensions::GetPropertyName(Z_Param_Track);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieScenePropertyTrackExtensions::execSetPropertyNameAndPath)
	{
		P_GET_OBJECT(UMovieScenePropertyTrack,Z_Param_Track);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InPropertyName);
		P_GET_PROPERTY(FStrProperty,Z_Param_InPropertyPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMovieScenePropertyTrackExtensions::SetPropertyNameAndPath(Z_Param_Track,Z_Param_Out_InPropertyName,Z_Param_InPropertyPath);
		P_NATIVE_END;
	}
	void UMovieScenePropertyTrackExtensions::StaticRegisterNativesUMovieScenePropertyTrackExtensions()
	{
		UClass* Class = UMovieScenePropertyTrackExtensions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetByteTrackEnum", &UMovieScenePropertyTrackExtensions::execGetByteTrackEnum },
			{ "GetObjectPropertyClass", &UMovieScenePropertyTrackExtensions::execGetObjectPropertyClass },
			{ "GetPropertyName", &UMovieScenePropertyTrackExtensions::execGetPropertyName },
			{ "GetPropertyPath", &UMovieScenePropertyTrackExtensions::execGetPropertyPath },
			{ "GetUniqueTrackName", &UMovieScenePropertyTrackExtensions::execGetUniqueTrackName },
			{ "SetByteTrackEnum", &UMovieScenePropertyTrackExtensions::execSetByteTrackEnum },
			{ "SetObjectPropertyClass", &UMovieScenePropertyTrackExtensions::execSetObjectPropertyClass },
			{ "SetPropertyNameAndPath", &UMovieScenePropertyTrackExtensions::execSetPropertyNameAndPath },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetByteTrackEnum_Statics
	{
		struct MovieScenePropertyTrackExtensions_eventGetByteTrackEnum_Parms
		{
			UMovieSceneByteTrack* Track;
			UEnum* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Track_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Track;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetByteTrackEnum_Statics::NewProp_Track_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetByteTrackEnum_Statics::NewProp_Track = { "Track", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieScenePropertyTrackExtensions_eventGetByteTrackEnum_Parms, Track), Z_Construct_UClass_UMovieSceneByteTrack_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetByteTrackEnum_Statics::NewProp_Track_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetByteTrackEnum_Statics::NewProp_Track_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetByteTrackEnum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieScenePropertyTrackExtensions_eventGetByteTrackEnum_Parms, ReturnValue), Z_Construct_UClass_UEnum, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetByteTrackEnum_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetByteTrackEnum_Statics::NewProp_Track,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetByteTrackEnum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetByteTrackEnum_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Track" },
		{ "Comment", "/**\n\x09 * Get this byte track's enum\n\x09 *\n\x09 * @param Track        The track to use\n\x09 * @return The enum for this byte track\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieScenePropertyTrackExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get this byte track's enum\n\n@param Track        The track to use\n@return The enum for this byte track" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetByteTrackEnum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieScenePropertyTrackExtensions, nullptr, "GetByteTrackEnum", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetByteTrackEnum_Statics::MovieScenePropertyTrackExtensions_eventGetByteTrackEnum_Parms), Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetByteTrackEnum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetByteTrackEnum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetByteTrackEnum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetByteTrackEnum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetByteTrackEnum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetByteTrackEnum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetObjectPropertyClass_Statics
	{
		struct MovieScenePropertyTrackExtensions_eventGetObjectPropertyClass_Parms
		{
			UMovieSceneObjectPropertyTrack* Track;
			UClass* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Track_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Track;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetObjectPropertyClass_Statics::NewProp_Track_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetObjectPropertyClass_Statics::NewProp_Track = { "Track", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieScenePropertyTrackExtensions_eventGetObjectPropertyClass_Parms, Track), Z_Construct_UClass_UMovieSceneObjectPropertyTrack_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetObjectPropertyClass_Statics::NewProp_Track_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetObjectPropertyClass_Statics::NewProp_Track_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetObjectPropertyClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieScenePropertyTrackExtensions_eventGetObjectPropertyClass_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetObjectPropertyClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetObjectPropertyClass_Statics::NewProp_Track,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetObjectPropertyClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetObjectPropertyClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Track" },
		{ "Comment", "/**\n\x09 * Get this object property track's property class\n\x09 *\n\x09 * @param Track        The track to use\n\x09 * @return The property class for this object property track\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieScenePropertyTrackExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get this object property track's property class\n\n@param Track        The track to use\n@return The property class for this object property track" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetObjectPropertyClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieScenePropertyTrackExtensions, nullptr, "GetObjectPropertyClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetObjectPropertyClass_Statics::MovieScenePropertyTrackExtensions_eventGetObjectPropertyClass_Parms), Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetObjectPropertyClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetObjectPropertyClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetObjectPropertyClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetObjectPropertyClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetObjectPropertyClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetObjectPropertyClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetPropertyName_Statics
	{
		struct MovieScenePropertyTrackExtensions_eventGetPropertyName_Parms
		{
			UMovieScenePropertyTrack* Track;
			FName ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Track_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Track;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetPropertyName_Statics::NewProp_Track_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetPropertyName_Statics::NewProp_Track = { "Track", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieScenePropertyTrackExtensions_eventGetPropertyName_Parms, Track), Z_Construct_UClass_UMovieScenePropertyTrack_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetPropertyName_Statics::NewProp_Track_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetPropertyName_Statics::NewProp_Track_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetPropertyName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieScenePropertyTrackExtensions_eventGetPropertyName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetPropertyName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetPropertyName_Statics::NewProp_Track,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetPropertyName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetPropertyName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Track" },
		{ "Comment", "/**\n\x09 * Get this track's property name\n\x09 *\n\x09 * @param Track        The track to use\n\x09 * @return This track's property name\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieScenePropertyTrackExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get this track's property name\n\n@param Track        The track to use\n@return This track's property name" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetPropertyName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieScenePropertyTrackExtensions, nullptr, "GetPropertyName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetPropertyName_Statics::MovieScenePropertyTrackExtensions_eventGetPropertyName_Parms), Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetPropertyName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetPropertyName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetPropertyName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetPropertyName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetPropertyName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetPropertyName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetPropertyPath_Statics
	{
		struct MovieScenePropertyTrackExtensions_eventGetPropertyPath_Parms
		{
			UMovieScenePropertyTrack* Track;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Track_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Track;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetPropertyPath_Statics::NewProp_Track_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetPropertyPath_Statics::NewProp_Track = { "Track", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieScenePropertyTrackExtensions_eventGetPropertyPath_Parms, Track), Z_Construct_UClass_UMovieScenePropertyTrack_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetPropertyPath_Statics::NewProp_Track_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetPropertyPath_Statics::NewProp_Track_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetPropertyPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieScenePropertyTrackExtensions_eventGetPropertyPath_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetPropertyPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetPropertyPath_Statics::NewProp_Track,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetPropertyPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetPropertyPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Track" },
		{ "Comment", "/**\n\x09 * Get this track's property path\n\x09 *\n\x09 * @param Track        The track to use\n\x09 * @return This track's property path\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieScenePropertyTrackExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get this track's property path\n\n@param Track        The track to use\n@return This track's property path" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetPropertyPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieScenePropertyTrackExtensions, nullptr, "GetPropertyPath", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetPropertyPath_Statics::MovieScenePropertyTrackExtensions_eventGetPropertyPath_Parms), Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetPropertyPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetPropertyPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetPropertyPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetPropertyPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetPropertyPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetPropertyPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetUniqueTrackName_Statics
	{
		struct MovieScenePropertyTrackExtensions_eventGetUniqueTrackName_Parms
		{
			UMovieScenePropertyTrack* Track;
			FName ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Track_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Track;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetUniqueTrackName_Statics::NewProp_Track_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetUniqueTrackName_Statics::NewProp_Track = { "Track", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieScenePropertyTrackExtensions_eventGetUniqueTrackName_Parms, Track), Z_Construct_UClass_UMovieScenePropertyTrack_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetUniqueTrackName_Statics::NewProp_Track_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetUniqueTrackName_Statics::NewProp_Track_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetUniqueTrackName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieScenePropertyTrackExtensions_eventGetUniqueTrackName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetUniqueTrackName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetUniqueTrackName_Statics::NewProp_Track,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetUniqueTrackName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetUniqueTrackName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Track" },
		{ "Comment", "/**\n\x09 * Get this track's unique name\n\x09 *\n\x09 * @param Track        The track to use\n\x09 * @return This track's unique name\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieScenePropertyTrackExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get this track's unique name\n\n@param Track        The track to use\n@return This track's unique name" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetUniqueTrackName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieScenePropertyTrackExtensions, nullptr, "GetUniqueTrackName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetUniqueTrackName_Statics::MovieScenePropertyTrackExtensions_eventGetUniqueTrackName_Parms), Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetUniqueTrackName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetUniqueTrackName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetUniqueTrackName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetUniqueTrackName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetUniqueTrackName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetUniqueTrackName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_SetByteTrackEnum_Statics
	{
		struct MovieScenePropertyTrackExtensions_eventSetByteTrackEnum_Parms
		{
			UMovieSceneByteTrack* Track;
			UEnum* InEnum;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Track_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Track;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InEnum;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_SetByteTrackEnum_Statics::NewProp_Track_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_SetByteTrackEnum_Statics::NewProp_Track = { "Track", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieScenePropertyTrackExtensions_eventSetByteTrackEnum_Parms, Track), Z_Construct_UClass_UMovieSceneByteTrack_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_SetByteTrackEnum_Statics::NewProp_Track_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_SetByteTrackEnum_Statics::NewProp_Track_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_SetByteTrackEnum_Statics::NewProp_InEnum = { "InEnum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieScenePropertyTrackExtensions_eventSetByteTrackEnum_Parms, InEnum), Z_Construct_UClass_UEnum, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_SetByteTrackEnum_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_SetByteTrackEnum_Statics::NewProp_Track,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_SetByteTrackEnum_Statics::NewProp_InEnum,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_SetByteTrackEnum_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Track" },
		{ "Comment", "/**\n\x09 * Set this byte track's enum\n\x09 *\n\x09 * @param Track        The track to use\n\x09 * @param InEnum The enum to set\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieScenePropertyTrackExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Set this byte track's enum\n\n@param Track        The track to use\n@param InEnum The enum to set" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_SetByteTrackEnum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieScenePropertyTrackExtensions, nullptr, "SetByteTrackEnum", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_SetByteTrackEnum_Statics::MovieScenePropertyTrackExtensions_eventSetByteTrackEnum_Parms), Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_SetByteTrackEnum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_SetByteTrackEnum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_SetByteTrackEnum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_SetByteTrackEnum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_SetByteTrackEnum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_SetByteTrackEnum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_SetObjectPropertyClass_Statics
	{
		struct MovieScenePropertyTrackExtensions_eventSetObjectPropertyClass_Parms
		{
			UMovieSceneObjectPropertyTrack* Track;
			UClass* PropertyClass;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Track_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Track;
		static const UECodeGen_Private::FClassPropertyParams NewProp_PropertyClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_SetObjectPropertyClass_Statics::NewProp_Track_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_SetObjectPropertyClass_Statics::NewProp_Track = { "Track", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieScenePropertyTrackExtensions_eventSetObjectPropertyClass_Parms, Track), Z_Construct_UClass_UMovieSceneObjectPropertyTrack_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_SetObjectPropertyClass_Statics::NewProp_Track_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_SetObjectPropertyClass_Statics::NewProp_Track_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_SetObjectPropertyClass_Statics::NewProp_PropertyClass = { "PropertyClass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieScenePropertyTrackExtensions_eventSetObjectPropertyClass_Parms, PropertyClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_SetObjectPropertyClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_SetObjectPropertyClass_Statics::NewProp_Track,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_SetObjectPropertyClass_Statics::NewProp_PropertyClass,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_SetObjectPropertyClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Track" },
		{ "Comment", "/**\n\x09 * Set this object property track's property class\n\x09 *\n\x09 * @param Track        The track to use\n\x09 * @param PropertyClass The property class to set\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieScenePropertyTrackExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Set this object property track's property class\n\n@param Track        The track to use\n@param PropertyClass The property class to set" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_SetObjectPropertyClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieScenePropertyTrackExtensions, nullptr, "SetObjectPropertyClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_SetObjectPropertyClass_Statics::MovieScenePropertyTrackExtensions_eventSetObjectPropertyClass_Parms), Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_SetObjectPropertyClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_SetObjectPropertyClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_SetObjectPropertyClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_SetObjectPropertyClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_SetObjectPropertyClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_SetObjectPropertyClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_SetPropertyNameAndPath_Statics
	{
		struct MovieScenePropertyTrackExtensions_eventSetPropertyNameAndPath_Parms
		{
			UMovieScenePropertyTrack* Track;
			FName InPropertyName;
			FString InPropertyPath;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Track_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Track;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InPropertyName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPropertyPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InPropertyPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_SetPropertyNameAndPath_Statics::NewProp_Track_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_SetPropertyNameAndPath_Statics::NewProp_Track = { "Track", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieScenePropertyTrackExtensions_eventSetPropertyNameAndPath_Parms, Track), Z_Construct_UClass_UMovieScenePropertyTrack_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_SetPropertyNameAndPath_Statics::NewProp_Track_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_SetPropertyNameAndPath_Statics::NewProp_Track_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_SetPropertyNameAndPath_Statics::NewProp_InPropertyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_SetPropertyNameAndPath_Statics::NewProp_InPropertyName = { "InPropertyName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieScenePropertyTrackExtensions_eventSetPropertyNameAndPath_Parms, InPropertyName), METADATA_PARAMS(Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_SetPropertyNameAndPath_Statics::NewProp_InPropertyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_SetPropertyNameAndPath_Statics::NewProp_InPropertyName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_SetPropertyNameAndPath_Statics::NewProp_InPropertyPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_SetPropertyNameAndPath_Statics::NewProp_InPropertyPath = { "InPropertyPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieScenePropertyTrackExtensions_eventSetPropertyNameAndPath_Parms, InPropertyPath), METADATA_PARAMS(Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_SetPropertyNameAndPath_Statics::NewProp_InPropertyPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_SetPropertyNameAndPath_Statics::NewProp_InPropertyPath_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_SetPropertyNameAndPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_SetPropertyNameAndPath_Statics::NewProp_Track,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_SetPropertyNameAndPath_Statics::NewProp_InPropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_SetPropertyNameAndPath_Statics::NewProp_InPropertyPath,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_SetPropertyNameAndPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Track" },
		{ "Comment", "/**\n\x09 * Set this track's property name and path\n\x09 *\n\x09 * @param Track        The track to use\n\x09 * @param InPropertyName The property name\n\x09 * @param InPropertyPath The property path\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieScenePropertyTrackExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Set this track's property name and path\n\n@param Track        The track to use\n@param InPropertyName The property name\n@param InPropertyPath The property path" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_SetPropertyNameAndPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieScenePropertyTrackExtensions, nullptr, "SetPropertyNameAndPath", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_SetPropertyNameAndPath_Statics::MovieScenePropertyTrackExtensions_eventSetPropertyNameAndPath_Parms), Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_SetPropertyNameAndPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_SetPropertyNameAndPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_SetPropertyNameAndPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_SetPropertyNameAndPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_SetPropertyNameAndPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_SetPropertyNameAndPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieScenePropertyTrackExtensions);
	UClass* Z_Construct_UClass_UMovieScenePropertyTrackExtensions_NoRegister()
	{
		return UMovieScenePropertyTrackExtensions::StaticClass();
	}
	struct Z_Construct_UClass_UMovieScenePropertyTrackExtensions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieScenePropertyTrackExtensions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SequencerScripting,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMovieScenePropertyTrackExtensions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetByteTrackEnum, "GetByteTrackEnum" }, // 1161587312
		{ &Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetObjectPropertyClass, "GetObjectPropertyClass" }, // 3404680919
		{ &Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetPropertyName, "GetPropertyName" }, // 3834613148
		{ &Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetPropertyPath, "GetPropertyPath" }, // 1531417786
		{ &Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_GetUniqueTrackName, "GetUniqueTrackName" }, // 2475522579
		{ &Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_SetByteTrackEnum, "SetByteTrackEnum" }, // 3018660971
		{ &Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_SetObjectPropertyClass, "SetObjectPropertyClass" }, // 1017900961
		{ &Z_Construct_UFunction_UMovieScenePropertyTrackExtensions_SetPropertyNameAndPath, "SetPropertyNameAndPath" }, // 1404143855
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScenePropertyTrackExtensions_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Function library containing methods that should be hoisted onto UMovieScenePropertyTrack for scripting\n */" },
		{ "IncludePath", "ExtensionLibraries/MovieScenePropertyTrackExtensions.h" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieScenePropertyTrackExtensions.h" },
		{ "ToolTip", "Function library containing methods that should be hoisted onto UMovieScenePropertyTrack for scripting" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieScenePropertyTrackExtensions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieScenePropertyTrackExtensions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieScenePropertyTrackExtensions_Statics::ClassParams = {
		&UMovieScenePropertyTrackExtensions::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovieScenePropertyTrackExtensions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScenePropertyTrackExtensions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieScenePropertyTrackExtensions()
	{
		if (!Z_Registration_Info_UClass_UMovieScenePropertyTrackExtensions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieScenePropertyTrackExtensions.OuterSingleton, Z_Construct_UClass_UMovieScenePropertyTrackExtensions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieScenePropertyTrackExtensions.OuterSingleton;
	}
	template<> SEQUENCERSCRIPTING_API UClass* StaticClass<UMovieScenePropertyTrackExtensions>()
	{
		return UMovieScenePropertyTrackExtensions::StaticClass();
	}
	UMovieScenePropertyTrackExtensions::UMovieScenePropertyTrackExtensions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieScenePropertyTrackExtensions);
	UMovieScenePropertyTrackExtensions::~UMovieScenePropertyTrackExtensions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieScenePropertyTrackExtensions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieScenePropertyTrackExtensions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieScenePropertyTrackExtensions, UMovieScenePropertyTrackExtensions::StaticClass, TEXT("UMovieScenePropertyTrackExtensions"), &Z_Registration_Info_UClass_UMovieScenePropertyTrackExtensions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieScenePropertyTrackExtensions), 3248538196U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieScenePropertyTrackExtensions_h_1980599134(TEXT("/Script/SequencerScripting"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieScenePropertyTrackExtensions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieScenePropertyTrackExtensions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
