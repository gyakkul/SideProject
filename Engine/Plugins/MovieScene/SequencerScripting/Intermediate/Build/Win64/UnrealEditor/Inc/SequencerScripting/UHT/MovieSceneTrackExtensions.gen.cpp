// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ExtensionLibraries/MovieSceneTrackExtensions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneTrackExtensions() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrack_NoRegister();
	SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneTrackExtensions();
	SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneTrackExtensions_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SequencerScripting();
// End Cross Module References
	DEFINE_FUNCTION(UMovieSceneTrackExtensions::execSetSectionToKey)
	{
		P_GET_OBJECT(UMovieSceneTrack,Z_Param_Track);
		P_GET_OBJECT(UMovieSceneSection,Z_Param_Section);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMovieSceneTrackExtensions::SetSectionToKey(Z_Param_Track,Z_Param_Section);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneTrackExtensions::execGetSectionToKey)
	{
		P_GET_OBJECT(UMovieSceneTrack,Z_Param_Track);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMovieSceneSection**)Z_Param__Result=UMovieSceneTrackExtensions::GetSectionToKey(Z_Param_Track);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneTrackExtensions::execSetColorTint)
	{
		P_GET_OBJECT(UMovieSceneTrack,Z_Param_Track);
		P_GET_STRUCT_REF(FColor,Z_Param_Out_ColorTint);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMovieSceneTrackExtensions::SetColorTint(Z_Param_Track,Z_Param_Out_ColorTint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneTrackExtensions::execGetColorTint)
	{
		P_GET_OBJECT(UMovieSceneTrack,Z_Param_Track);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FColor*)Z_Param__Result=UMovieSceneTrackExtensions::GetColorTint(Z_Param_Track);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneTrackExtensions::execSetSortingOrder)
	{
		P_GET_OBJECT(UMovieSceneTrack,Z_Param_Track);
		P_GET_PROPERTY(FIntProperty,Z_Param_SortingOrder);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMovieSceneTrackExtensions::SetSortingOrder(Z_Param_Track,Z_Param_SortingOrder);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneTrackExtensions::execGetSortingOrder)
	{
		P_GET_OBJECT(UMovieSceneTrack,Z_Param_Track);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UMovieSceneTrackExtensions::GetSortingOrder(Z_Param_Track);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneTrackExtensions::execRemoveSection)
	{
		P_GET_OBJECT(UMovieSceneTrack,Z_Param_Track);
		P_GET_OBJECT(UMovieSceneSection,Z_Param_Section);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMovieSceneTrackExtensions::RemoveSection(Z_Param_Track,Z_Param_Section);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneTrackExtensions::execGetSections)
	{
		P_GET_OBJECT(UMovieSceneTrack,Z_Param_Track);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UMovieSceneSection*>*)Z_Param__Result=UMovieSceneTrackExtensions::GetSections(Z_Param_Track);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneTrackExtensions::execAddSection)
	{
		P_GET_OBJECT(UMovieSceneTrack,Z_Param_Track);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMovieSceneSection**)Z_Param__Result=UMovieSceneTrackExtensions::AddSection(Z_Param_Track);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneTrackExtensions::execGetTrackRowDisplayName)
	{
		P_GET_OBJECT(UMovieSceneTrack,Z_Param_Track);
		P_GET_PROPERTY(FIntProperty,Z_Param_RowIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UMovieSceneTrackExtensions::GetTrackRowDisplayName(Z_Param_Track,Z_Param_RowIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneTrackExtensions::execSetTrackRowDisplayName)
	{
		P_GET_OBJECT(UMovieSceneTrack,Z_Param_Track);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_InName);
		P_GET_PROPERTY(FIntProperty,Z_Param_RowIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMovieSceneTrackExtensions::SetTrackRowDisplayName(Z_Param_Track,Z_Param_Out_InName,Z_Param_RowIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneTrackExtensions::execGetDisplayName)
	{
		P_GET_OBJECT(UMovieSceneTrack,Z_Param_Track);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UMovieSceneTrackExtensions::GetDisplayName(Z_Param_Track);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneTrackExtensions::execSetDisplayName)
	{
		P_GET_OBJECT(UMovieSceneTrack,Z_Param_Track);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_InName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMovieSceneTrackExtensions::SetDisplayName(Z_Param_Track,Z_Param_Out_InName);
		P_NATIVE_END;
	}
	void UMovieSceneTrackExtensions::StaticRegisterNativesUMovieSceneTrackExtensions()
	{
		UClass* Class = UMovieSceneTrackExtensions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddSection", &UMovieSceneTrackExtensions::execAddSection },
			{ "GetColorTint", &UMovieSceneTrackExtensions::execGetColorTint },
			{ "GetDisplayName", &UMovieSceneTrackExtensions::execGetDisplayName },
			{ "GetSections", &UMovieSceneTrackExtensions::execGetSections },
			{ "GetSectionToKey", &UMovieSceneTrackExtensions::execGetSectionToKey },
			{ "GetSortingOrder", &UMovieSceneTrackExtensions::execGetSortingOrder },
			{ "GetTrackRowDisplayName", &UMovieSceneTrackExtensions::execGetTrackRowDisplayName },
			{ "RemoveSection", &UMovieSceneTrackExtensions::execRemoveSection },
			{ "SetColorTint", &UMovieSceneTrackExtensions::execSetColorTint },
			{ "SetDisplayName", &UMovieSceneTrackExtensions::execSetDisplayName },
			{ "SetSectionToKey", &UMovieSceneTrackExtensions::execSetSectionToKey },
			{ "SetSortingOrder", &UMovieSceneTrackExtensions::execSetSortingOrder },
			{ "SetTrackRowDisplayName", &UMovieSceneTrackExtensions::execSetTrackRowDisplayName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMovieSceneTrackExtensions_AddSection_Statics
	{
		struct MovieSceneTrackExtensions_eventAddSection_Parms
		{
			UMovieSceneTrack* Track;
			UMovieSceneSection* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Track_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Track;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneTrackExtensions_AddSection_Statics::NewProp_Track_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneTrackExtensions_AddSection_Statics::NewProp_Track = { "Track", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneTrackExtensions_eventAddSection_Parms, Track), Z_Construct_UClass_UMovieSceneTrack_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneTrackExtensions_AddSection_Statics::NewProp_Track_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneTrackExtensions_AddSection_Statics::NewProp_Track_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneTrackExtensions_AddSection_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneTrackExtensions_AddSection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneTrackExtensions_eventAddSection_Parms, ReturnValue), Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneTrackExtensions_AddSection_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneTrackExtensions_AddSection_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneTrackExtensions_AddSection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneTrackExtensions_AddSection_Statics::NewProp_Track,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneTrackExtensions_AddSection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneTrackExtensions_AddSection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Track" },
		{ "Comment", "/**\n\x09 * Add a new section to this track\n\x09 *\n\x09 * @param Track        The track to use\n\x09 * @return The newly create section if successful\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneTrackExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Add a new section to this track\n\n@param Track        The track to use\n@return The newly create section if successful" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneTrackExtensions_AddSection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneTrackExtensions, nullptr, "AddSection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneTrackExtensions_AddSection_Statics::MovieSceneTrackExtensions_eventAddSection_Parms), Z_Construct_UFunction_UMovieSceneTrackExtensions_AddSection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneTrackExtensions_AddSection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneTrackExtensions_AddSection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneTrackExtensions_AddSection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneTrackExtensions_AddSection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneTrackExtensions_AddSection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneTrackExtensions_GetColorTint_Statics
	{
		struct MovieSceneTrackExtensions_eventGetColorTint_Parms
		{
			UMovieSceneTrack* Track;
			FColor ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Track_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Track;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneTrackExtensions_GetColorTint_Statics::NewProp_Track_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneTrackExtensions_GetColorTint_Statics::NewProp_Track = { "Track", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneTrackExtensions_eventGetColorTint_Parms, Track), Z_Construct_UClass_UMovieSceneTrack_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneTrackExtensions_GetColorTint_Statics::NewProp_Track_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneTrackExtensions_GetColorTint_Statics::NewProp_Track_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneTrackExtensions_GetColorTint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneTrackExtensions_eventGetColorTint_Parms, ReturnValue), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneTrackExtensions_GetColorTint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneTrackExtensions_GetColorTint_Statics::NewProp_Track,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneTrackExtensions_GetColorTint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneTrackExtensions_GetColorTint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Track" },
		{ "Comment", "/**\n\x09 * Get the color tint for this track\n\x09 *\n\x09 * @param Track        The track to get the color tint from\n\x09 * @return The color tint of the requested track\n\x09 */" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneTrackExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get the color tint for this track\n\n@param Track        The track to get the color tint from\n@return The color tint of the requested track" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneTrackExtensions_GetColorTint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneTrackExtensions, nullptr, "GetColorTint", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneTrackExtensions_GetColorTint_Statics::MovieSceneTrackExtensions_eventGetColorTint_Parms), Z_Construct_UFunction_UMovieSceneTrackExtensions_GetColorTint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneTrackExtensions_GetColorTint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneTrackExtensions_GetColorTint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneTrackExtensions_GetColorTint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneTrackExtensions_GetColorTint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneTrackExtensions_GetColorTint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneTrackExtensions_GetDisplayName_Statics
	{
		struct MovieSceneTrackExtensions_eventGetDisplayName_Parms
		{
			UMovieSceneTrack* Track;
			FText ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Track_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Track;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneTrackExtensions_GetDisplayName_Statics::NewProp_Track_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneTrackExtensions_GetDisplayName_Statics::NewProp_Track = { "Track", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneTrackExtensions_eventGetDisplayName_Parms, Track), Z_Construct_UClass_UMovieSceneTrack_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneTrackExtensions_GetDisplayName_Statics::NewProp_Track_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneTrackExtensions_GetDisplayName_Statics::NewProp_Track_MetaData)) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMovieSceneTrackExtensions_GetDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneTrackExtensions_eventGetDisplayName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneTrackExtensions_GetDisplayName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneTrackExtensions_GetDisplayName_Statics::NewProp_Track,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneTrackExtensions_GetDisplayName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneTrackExtensions_GetDisplayName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Track" },
		{ "Comment", "/**\n\x09 * Get this track's display name\n\x09 *\n\x09 * @param Track        The track to use\n\x09 * @return This track's display name\n\x09 */" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneTrackExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get this track's display name\n\n@param Track        The track to use\n@return This track's display name" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneTrackExtensions_GetDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneTrackExtensions, nullptr, "GetDisplayName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneTrackExtensions_GetDisplayName_Statics::MovieSceneTrackExtensions_eventGetDisplayName_Parms), Z_Construct_UFunction_UMovieSceneTrackExtensions_GetDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneTrackExtensions_GetDisplayName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneTrackExtensions_GetDisplayName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneTrackExtensions_GetDisplayName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneTrackExtensions_GetDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneTrackExtensions_GetDisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneTrackExtensions_GetSections_Statics
	{
		struct MovieSceneTrackExtensions_eventGetSections_Parms
		{
			UMovieSceneTrack* Track;
			TArray<UMovieSceneSection*> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Track_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Track;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneTrackExtensions_GetSections_Statics::NewProp_Track_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneTrackExtensions_GetSections_Statics::NewProp_Track = { "Track", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneTrackExtensions_eventGetSections_Parms, Track), Z_Construct_UClass_UMovieSceneTrack_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneTrackExtensions_GetSections_Statics::NewProp_Track_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneTrackExtensions_GetSections_Statics::NewProp_Track_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneTrackExtensions_GetSections_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneTrackExtensions_GetSections_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovieSceneTrackExtensions_GetSections_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneTrackExtensions_eventGetSections_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneTrackExtensions_GetSections_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneTrackExtensions_GetSections_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneTrackExtensions_GetSections_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneTrackExtensions_GetSections_Statics::NewProp_Track,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneTrackExtensions_GetSections_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneTrackExtensions_GetSections_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneTrackExtensions_GetSections_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Track" },
		{ "Comment", "/**\n\x09 * Access all this track's sections\n\x09 *\n\x09 * @param Track        The track to use\n\x09 * @return An array of this track's sections\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneTrackExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Access all this track's sections\n\n@param Track        The track to use\n@return An array of this track's sections" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneTrackExtensions_GetSections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneTrackExtensions, nullptr, "GetSections", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneTrackExtensions_GetSections_Statics::MovieSceneTrackExtensions_eventGetSections_Parms), Z_Construct_UFunction_UMovieSceneTrackExtensions_GetSections_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneTrackExtensions_GetSections_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneTrackExtensions_GetSections_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneTrackExtensions_GetSections_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneTrackExtensions_GetSections()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneTrackExtensions_GetSections_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneTrackExtensions_GetSectionToKey_Statics
	{
		struct MovieSceneTrackExtensions_eventGetSectionToKey_Parms
		{
			UMovieSceneTrack* Track;
			UMovieSceneSection* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Track_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Track;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneTrackExtensions_GetSectionToKey_Statics::NewProp_Track_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneTrackExtensions_GetSectionToKey_Statics::NewProp_Track = { "Track", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneTrackExtensions_eventGetSectionToKey_Parms, Track), Z_Construct_UClass_UMovieSceneTrack_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneTrackExtensions_GetSectionToKey_Statics::NewProp_Track_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneTrackExtensions_GetSectionToKey_Statics::NewProp_Track_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneTrackExtensions_GetSectionToKey_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneTrackExtensions_GetSectionToKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneTrackExtensions_eventGetSectionToKey_Parms, ReturnValue), Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneTrackExtensions_GetSectionToKey_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneTrackExtensions_GetSectionToKey_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneTrackExtensions_GetSectionToKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneTrackExtensions_GetSectionToKey_Statics::NewProp_Track,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneTrackExtensions_GetSectionToKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneTrackExtensions_GetSectionToKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Track" },
		{ "Comment", "/**\n\x09 * Get the section to key for this track\n\x09 *\n\x09 * @param Track        The track to get the section to key for\n\x09 * @return The section to key for the requested track\n\x09 */" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneTrackExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get the section to key for this track\n\n@param Track        The track to get the section to key for\n@return The section to key for the requested track" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneTrackExtensions_GetSectionToKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneTrackExtensions, nullptr, "GetSectionToKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneTrackExtensions_GetSectionToKey_Statics::MovieSceneTrackExtensions_eventGetSectionToKey_Parms), Z_Construct_UFunction_UMovieSceneTrackExtensions_GetSectionToKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneTrackExtensions_GetSectionToKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneTrackExtensions_GetSectionToKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneTrackExtensions_GetSectionToKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneTrackExtensions_GetSectionToKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneTrackExtensions_GetSectionToKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneTrackExtensions_GetSortingOrder_Statics
	{
		struct MovieSceneTrackExtensions_eventGetSortingOrder_Parms
		{
			UMovieSceneTrack* Track;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Track_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Track;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneTrackExtensions_GetSortingOrder_Statics::NewProp_Track_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneTrackExtensions_GetSortingOrder_Statics::NewProp_Track = { "Track", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneTrackExtensions_eventGetSortingOrder_Parms, Track), Z_Construct_UClass_UMovieSceneTrack_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneTrackExtensions_GetSortingOrder_Statics::NewProp_Track_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneTrackExtensions_GetSortingOrder_Statics::NewProp_Track_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneTrackExtensions_GetSortingOrder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneTrackExtensions_eventGetSortingOrder_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneTrackExtensions_GetSortingOrder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneTrackExtensions_GetSortingOrder_Statics::NewProp_Track,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneTrackExtensions_GetSortingOrder_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneTrackExtensions_GetSortingOrder_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Track" },
		{ "Comment", "/**\n\x09 * Get the sorting order for this track\n\x09 *\n\x09 * @param Track        The track to get the sorting order from\n\x09 * @return The sorting order of the requested track\n\x09 */" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneTrackExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get the sorting order for this track\n\n@param Track        The track to get the sorting order from\n@return The sorting order of the requested track" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneTrackExtensions_GetSortingOrder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneTrackExtensions, nullptr, "GetSortingOrder", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneTrackExtensions_GetSortingOrder_Statics::MovieSceneTrackExtensions_eventGetSortingOrder_Parms), Z_Construct_UFunction_UMovieSceneTrackExtensions_GetSortingOrder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneTrackExtensions_GetSortingOrder_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneTrackExtensions_GetSortingOrder_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneTrackExtensions_GetSortingOrder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneTrackExtensions_GetSortingOrder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneTrackExtensions_GetSortingOrder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneTrackExtensions_GetTrackRowDisplayName_Statics
	{
		struct MovieSceneTrackExtensions_eventGetTrackRowDisplayName_Parms
		{
			UMovieSceneTrack* Track;
			int32 RowIndex;
			FText ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Track_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Track;
		static const UECodeGen_Private::FIntPropertyParams NewProp_RowIndex;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneTrackExtensions_GetTrackRowDisplayName_Statics::NewProp_Track_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneTrackExtensions_GetTrackRowDisplayName_Statics::NewProp_Track = { "Track", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneTrackExtensions_eventGetTrackRowDisplayName_Parms, Track), Z_Construct_UClass_UMovieSceneTrack_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneTrackExtensions_GetTrackRowDisplayName_Statics::NewProp_Track_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneTrackExtensions_GetTrackRowDisplayName_Statics::NewProp_Track_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneTrackExtensions_GetTrackRowDisplayName_Statics::NewProp_RowIndex = { "RowIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneTrackExtensions_eventGetTrackRowDisplayName_Parms, RowIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMovieSceneTrackExtensions_GetTrackRowDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneTrackExtensions_eventGetTrackRowDisplayName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneTrackExtensions_GetTrackRowDisplayName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneTrackExtensions_GetTrackRowDisplayName_Statics::NewProp_Track,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneTrackExtensions_GetTrackRowDisplayName_Statics::NewProp_RowIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneTrackExtensions_GetTrackRowDisplayName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneTrackExtensions_GetTrackRowDisplayName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Track" },
		{ "Comment", "/**\n\x09 * Get this track row's display name\n\x09 *\n\x09 * @param Track        The track to use\n\x09 * @param RowIndex The row index for the track\n\x09 * @return This track's display name\n\x09 * \n\x09 */" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneTrackExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get this track row's display name\n\n@param Track        The track to use\n@param RowIndex The row index for the track\n@return This track's display name" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneTrackExtensions_GetTrackRowDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneTrackExtensions, nullptr, "GetTrackRowDisplayName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneTrackExtensions_GetTrackRowDisplayName_Statics::MovieSceneTrackExtensions_eventGetTrackRowDisplayName_Parms), Z_Construct_UFunction_UMovieSceneTrackExtensions_GetTrackRowDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneTrackExtensions_GetTrackRowDisplayName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneTrackExtensions_GetTrackRowDisplayName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneTrackExtensions_GetTrackRowDisplayName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneTrackExtensions_GetTrackRowDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneTrackExtensions_GetTrackRowDisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneTrackExtensions_RemoveSection_Statics
	{
		struct MovieSceneTrackExtensions_eventRemoveSection_Parms
		{
			UMovieSceneTrack* Track;
			UMovieSceneSection* Section;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Track_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Track;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Section;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneTrackExtensions_RemoveSection_Statics::NewProp_Track_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneTrackExtensions_RemoveSection_Statics::NewProp_Track = { "Track", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneTrackExtensions_eventRemoveSection_Parms, Track), Z_Construct_UClass_UMovieSceneTrack_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneTrackExtensions_RemoveSection_Statics::NewProp_Track_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneTrackExtensions_RemoveSection_Statics::NewProp_Track_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneTrackExtensions_RemoveSection_Statics::NewProp_Section_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneTrackExtensions_RemoveSection_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneTrackExtensions_eventRemoveSection_Parms, Section), Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneTrackExtensions_RemoveSection_Statics::NewProp_Section_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneTrackExtensions_RemoveSection_Statics::NewProp_Section_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneTrackExtensions_RemoveSection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneTrackExtensions_RemoveSection_Statics::NewProp_Track,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneTrackExtensions_RemoveSection_Statics::NewProp_Section,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneTrackExtensions_RemoveSection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Track" },
		{ "Comment", "/**\n\x09 * Remove the specified section\n\x09 *\n\x09 * @param Track        The track to remove the section from, if present\n\x09 * @param Section      The section to remove\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneTrackExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Remove the specified section\n\n@param Track        The track to remove the section from, if present\n@param Section      The section to remove" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneTrackExtensions_RemoveSection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneTrackExtensions, nullptr, "RemoveSection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneTrackExtensions_RemoveSection_Statics::MovieSceneTrackExtensions_eventRemoveSection_Parms), Z_Construct_UFunction_UMovieSceneTrackExtensions_RemoveSection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneTrackExtensions_RemoveSection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneTrackExtensions_RemoveSection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneTrackExtensions_RemoveSection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneTrackExtensions_RemoveSection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneTrackExtensions_RemoveSection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneTrackExtensions_SetColorTint_Statics
	{
		struct MovieSceneTrackExtensions_eventSetColorTint_Parms
		{
			UMovieSceneTrack* Track;
			FColor ColorTint;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Track_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Track;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorTint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorTint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneTrackExtensions_SetColorTint_Statics::NewProp_Track_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneTrackExtensions_SetColorTint_Statics::NewProp_Track = { "Track", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneTrackExtensions_eventSetColorTint_Parms, Track), Z_Construct_UClass_UMovieSceneTrack_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneTrackExtensions_SetColorTint_Statics::NewProp_Track_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneTrackExtensions_SetColorTint_Statics::NewProp_Track_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneTrackExtensions_SetColorTint_Statics::NewProp_ColorTint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneTrackExtensions_SetColorTint_Statics::NewProp_ColorTint = { "ColorTint", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneTrackExtensions_eventSetColorTint_Parms, ColorTint), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneTrackExtensions_SetColorTint_Statics::NewProp_ColorTint_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneTrackExtensions_SetColorTint_Statics::NewProp_ColorTint_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneTrackExtensions_SetColorTint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneTrackExtensions_SetColorTint_Statics::NewProp_Track,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneTrackExtensions_SetColorTint_Statics::NewProp_ColorTint,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneTrackExtensions_SetColorTint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Track" },
		{ "Comment", "/**\n\x09 * Set the color tint for this track\n\x09 *\n\x09 * @param Track        The track to set the color tint for\n\x09 * @param ColorTint The color tint to set\n\x09 */" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneTrackExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Set the color tint for this track\n\n@param Track        The track to set the color tint for\n@param ColorTint The color tint to set" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneTrackExtensions_SetColorTint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneTrackExtensions, nullptr, "SetColorTint", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneTrackExtensions_SetColorTint_Statics::MovieSceneTrackExtensions_eventSetColorTint_Parms), Z_Construct_UFunction_UMovieSceneTrackExtensions_SetColorTint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneTrackExtensions_SetColorTint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneTrackExtensions_SetColorTint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneTrackExtensions_SetColorTint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneTrackExtensions_SetColorTint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneTrackExtensions_SetColorTint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneTrackExtensions_SetDisplayName_Statics
	{
		struct MovieSceneTrackExtensions_eventSetDisplayName_Parms
		{
			UMovieSceneTrack* Track;
			FText InName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Track_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Track;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_InName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneTrackExtensions_SetDisplayName_Statics::NewProp_Track_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneTrackExtensions_SetDisplayName_Statics::NewProp_Track = { "Track", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneTrackExtensions_eventSetDisplayName_Parms, Track), Z_Construct_UClass_UMovieSceneTrack_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneTrackExtensions_SetDisplayName_Statics::NewProp_Track_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneTrackExtensions_SetDisplayName_Statics::NewProp_Track_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneTrackExtensions_SetDisplayName_Statics::NewProp_InName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMovieSceneTrackExtensions_SetDisplayName_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneTrackExtensions_eventSetDisplayName_Parms, InName), METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneTrackExtensions_SetDisplayName_Statics::NewProp_InName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneTrackExtensions_SetDisplayName_Statics::NewProp_InName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneTrackExtensions_SetDisplayName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneTrackExtensions_SetDisplayName_Statics::NewProp_Track,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneTrackExtensions_SetDisplayName_Statics::NewProp_InName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneTrackExtensions_SetDisplayName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Track" },
		{ "Comment", "/**\n\x09 * Set this track's display name\n\x09 *\n\x09 * @param Track        The track to use\n\x09 * @param InName The name for this track\n\x09 */" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneTrackExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Set this track's display name\n\n@param Track        The track to use\n@param InName The name for this track" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneTrackExtensions_SetDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneTrackExtensions, nullptr, "SetDisplayName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneTrackExtensions_SetDisplayName_Statics::MovieSceneTrackExtensions_eventSetDisplayName_Parms), Z_Construct_UFunction_UMovieSceneTrackExtensions_SetDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneTrackExtensions_SetDisplayName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneTrackExtensions_SetDisplayName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneTrackExtensions_SetDisplayName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneTrackExtensions_SetDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneTrackExtensions_SetDisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneTrackExtensions_SetSectionToKey_Statics
	{
		struct MovieSceneTrackExtensions_eventSetSectionToKey_Parms
		{
			UMovieSceneTrack* Track;
			UMovieSceneSection* Section;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Track_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Track;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Section;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneTrackExtensions_SetSectionToKey_Statics::NewProp_Track_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneTrackExtensions_SetSectionToKey_Statics::NewProp_Track = { "Track", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneTrackExtensions_eventSetSectionToKey_Parms, Track), Z_Construct_UClass_UMovieSceneTrack_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneTrackExtensions_SetSectionToKey_Statics::NewProp_Track_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneTrackExtensions_SetSectionToKey_Statics::NewProp_Track_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneTrackExtensions_SetSectionToKey_Statics::NewProp_Section_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneTrackExtensions_SetSectionToKey_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneTrackExtensions_eventSetSectionToKey_Parms, Section), Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneTrackExtensions_SetSectionToKey_Statics::NewProp_Section_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneTrackExtensions_SetSectionToKey_Statics::NewProp_Section_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneTrackExtensions_SetSectionToKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneTrackExtensions_SetSectionToKey_Statics::NewProp_Track,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneTrackExtensions_SetSectionToKey_Statics::NewProp_Section,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneTrackExtensions_SetSectionToKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Track" },
		{ "Comment", "/**\n\x09 * Set the section to key for this track. When properties for this section are modified externally, \n\x09 * this section will receive those modifications and act accordingly (add/update keys). This is \n\x09 * especially useful when there are multiple overlapping sections.\n\x09 *\n\x09 * @param Track        The track to set the section to key for\n\x09 * @param Section      The section to key for this track\n\x09 */" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneTrackExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Set the section to key for this track. When properties for this section are modified externally,\nthis section will receive those modifications and act accordingly (add/update keys). This is\nespecially useful when there are multiple overlapping sections.\n\n@param Track        The track to set the section to key for\n@param Section      The section to key for this track" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneTrackExtensions_SetSectionToKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneTrackExtensions, nullptr, "SetSectionToKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneTrackExtensions_SetSectionToKey_Statics::MovieSceneTrackExtensions_eventSetSectionToKey_Parms), Z_Construct_UFunction_UMovieSceneTrackExtensions_SetSectionToKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneTrackExtensions_SetSectionToKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneTrackExtensions_SetSectionToKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneTrackExtensions_SetSectionToKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneTrackExtensions_SetSectionToKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneTrackExtensions_SetSectionToKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneTrackExtensions_SetSortingOrder_Statics
	{
		struct MovieSceneTrackExtensions_eventSetSortingOrder_Parms
		{
			UMovieSceneTrack* Track;
			int32 SortingOrder;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Track_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Track;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SortingOrder;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneTrackExtensions_SetSortingOrder_Statics::NewProp_Track_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneTrackExtensions_SetSortingOrder_Statics::NewProp_Track = { "Track", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneTrackExtensions_eventSetSortingOrder_Parms, Track), Z_Construct_UClass_UMovieSceneTrack_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneTrackExtensions_SetSortingOrder_Statics::NewProp_Track_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneTrackExtensions_SetSortingOrder_Statics::NewProp_Track_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneTrackExtensions_SetSortingOrder_Statics::NewProp_SortingOrder = { "SortingOrder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneTrackExtensions_eventSetSortingOrder_Parms, SortingOrder), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneTrackExtensions_SetSortingOrder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneTrackExtensions_SetSortingOrder_Statics::NewProp_Track,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneTrackExtensions_SetSortingOrder_Statics::NewProp_SortingOrder,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneTrackExtensions_SetSortingOrder_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Track" },
		{ "Comment", "/**\n\x09 * Set the sorting order for this track\n\x09 *\n\x09 * @param Track        The track to get the sorting order from\n\x09 * @param SortingOrder The sorting order to set\n\x09 */" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneTrackExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Set the sorting order for this track\n\n@param Track        The track to get the sorting order from\n@param SortingOrder The sorting order to set" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneTrackExtensions_SetSortingOrder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneTrackExtensions, nullptr, "SetSortingOrder", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneTrackExtensions_SetSortingOrder_Statics::MovieSceneTrackExtensions_eventSetSortingOrder_Parms), Z_Construct_UFunction_UMovieSceneTrackExtensions_SetSortingOrder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneTrackExtensions_SetSortingOrder_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneTrackExtensions_SetSortingOrder_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneTrackExtensions_SetSortingOrder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneTrackExtensions_SetSortingOrder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneTrackExtensions_SetSortingOrder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneTrackExtensions_SetTrackRowDisplayName_Statics
	{
		struct MovieSceneTrackExtensions_eventSetTrackRowDisplayName_Parms
		{
			UMovieSceneTrack* Track;
			FText InName;
			int32 RowIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Track_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Track;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_InName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_RowIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneTrackExtensions_SetTrackRowDisplayName_Statics::NewProp_Track_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneTrackExtensions_SetTrackRowDisplayName_Statics::NewProp_Track = { "Track", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneTrackExtensions_eventSetTrackRowDisplayName_Parms, Track), Z_Construct_UClass_UMovieSceneTrack_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneTrackExtensions_SetTrackRowDisplayName_Statics::NewProp_Track_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneTrackExtensions_SetTrackRowDisplayName_Statics::NewProp_Track_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneTrackExtensions_SetTrackRowDisplayName_Statics::NewProp_InName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMovieSceneTrackExtensions_SetTrackRowDisplayName_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneTrackExtensions_eventSetTrackRowDisplayName_Parms, InName), METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneTrackExtensions_SetTrackRowDisplayName_Statics::NewProp_InName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneTrackExtensions_SetTrackRowDisplayName_Statics::NewProp_InName_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneTrackExtensions_SetTrackRowDisplayName_Statics::NewProp_RowIndex = { "RowIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneTrackExtensions_eventSetTrackRowDisplayName_Parms, RowIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneTrackExtensions_SetTrackRowDisplayName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneTrackExtensions_SetTrackRowDisplayName_Statics::NewProp_Track,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneTrackExtensions_SetTrackRowDisplayName_Statics::NewProp_InName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneTrackExtensions_SetTrackRowDisplayName_Statics::NewProp_RowIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneTrackExtensions_SetTrackRowDisplayName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Track" },
		{ "Comment", "/**\n\x09 * Set this track row's display name\n\x09 *\n\x09 * @param Track        The track to use\n\x09 * @param InName The name for this track\n\x09 * @param RowIndex The row index for the track\n\x09 */" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneTrackExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Set this track row's display name\n\n@param Track        The track to use\n@param InName The name for this track\n@param RowIndex The row index for the track" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneTrackExtensions_SetTrackRowDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneTrackExtensions, nullptr, "SetTrackRowDisplayName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneTrackExtensions_SetTrackRowDisplayName_Statics::MovieSceneTrackExtensions_eventSetTrackRowDisplayName_Parms), Z_Construct_UFunction_UMovieSceneTrackExtensions_SetTrackRowDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneTrackExtensions_SetTrackRowDisplayName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneTrackExtensions_SetTrackRowDisplayName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneTrackExtensions_SetTrackRowDisplayName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneTrackExtensions_SetTrackRowDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneTrackExtensions_SetTrackRowDisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneTrackExtensions);
	UClass* Z_Construct_UClass_UMovieSceneTrackExtensions_NoRegister()
	{
		return UMovieSceneTrackExtensions::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneTrackExtensions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneTrackExtensions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SequencerScripting,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMovieSceneTrackExtensions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieSceneTrackExtensions_AddSection, "AddSection" }, // 171621532
		{ &Z_Construct_UFunction_UMovieSceneTrackExtensions_GetColorTint, "GetColorTint" }, // 4263614916
		{ &Z_Construct_UFunction_UMovieSceneTrackExtensions_GetDisplayName, "GetDisplayName" }, // 3922675847
		{ &Z_Construct_UFunction_UMovieSceneTrackExtensions_GetSections, "GetSections" }, // 1764688285
		{ &Z_Construct_UFunction_UMovieSceneTrackExtensions_GetSectionToKey, "GetSectionToKey" }, // 1441161622
		{ &Z_Construct_UFunction_UMovieSceneTrackExtensions_GetSortingOrder, "GetSortingOrder" }, // 1722393669
		{ &Z_Construct_UFunction_UMovieSceneTrackExtensions_GetTrackRowDisplayName, "GetTrackRowDisplayName" }, // 539202968
		{ &Z_Construct_UFunction_UMovieSceneTrackExtensions_RemoveSection, "RemoveSection" }, // 2637132205
		{ &Z_Construct_UFunction_UMovieSceneTrackExtensions_SetColorTint, "SetColorTint" }, // 1591287691
		{ &Z_Construct_UFunction_UMovieSceneTrackExtensions_SetDisplayName, "SetDisplayName" }, // 693019201
		{ &Z_Construct_UFunction_UMovieSceneTrackExtensions_SetSectionToKey, "SetSectionToKey" }, // 4030503910
		{ &Z_Construct_UFunction_UMovieSceneTrackExtensions_SetSortingOrder, "SetSortingOrder" }, // 1879042429
		{ &Z_Construct_UFunction_UMovieSceneTrackExtensions_SetTrackRowDisplayName, "SetTrackRowDisplayName" }, // 2301749961
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneTrackExtensions_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Function library containing methods that should be hoisted onto UMovieSceneTracks for scripting\n */" },
		{ "IncludePath", "ExtensionLibraries/MovieSceneTrackExtensions.h" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneTrackExtensions.h" },
		{ "ToolTip", "Function library containing methods that should be hoisted onto UMovieSceneTracks for scripting" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneTrackExtensions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneTrackExtensions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneTrackExtensions_Statics::ClassParams = {
		&UMovieSceneTrackExtensions::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneTrackExtensions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTrackExtensions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneTrackExtensions()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneTrackExtensions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneTrackExtensions.OuterSingleton, Z_Construct_UClass_UMovieSceneTrackExtensions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneTrackExtensions.OuterSingleton;
	}
	template<> SEQUENCERSCRIPTING_API UClass* StaticClass<UMovieSceneTrackExtensions>()
	{
		return UMovieSceneTrackExtensions::StaticClass();
	}
	UMovieSceneTrackExtensions::UMovieSceneTrackExtensions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneTrackExtensions);
	UMovieSceneTrackExtensions::~UMovieSceneTrackExtensions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneTrackExtensions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneTrackExtensions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneTrackExtensions, UMovieSceneTrackExtensions::StaticClass, TEXT("UMovieSceneTrackExtensions"), &Z_Registration_Info_UClass_UMovieSceneTrackExtensions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneTrackExtensions), 1293289173U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneTrackExtensions_h_845285914(TEXT("/Script/SequencerScripting"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneTrackExtensions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneTrackExtensions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
