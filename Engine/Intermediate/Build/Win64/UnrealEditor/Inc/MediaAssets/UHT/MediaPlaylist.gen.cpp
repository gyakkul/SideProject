// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MediaPlaylist.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMediaPlaylist() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaPlaylist();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaPlaylist_NoRegister();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaSource_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MediaAssets();
// End Cross Module References
	DEFINE_FUNCTION(UMediaPlaylist::execReplace)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_OBJECT(UMediaSource,Z_Param_Replacement);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Replace(Z_Param_Index,Z_Param_Replacement);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaPlaylist::execRemoveAt)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveAt(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaPlaylist::execRemove)
	{
		P_GET_OBJECT(UMediaSource,Z_Param_MediaSource);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Remove(Z_Param_MediaSource);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaPlaylist::execNum)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->Num();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaPlaylist::execInsert)
	{
		P_GET_OBJECT(UMediaSource,Z_Param_MediaSource);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Insert(Z_Param_MediaSource,Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaPlaylist::execGetRandom)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMediaSource**)Z_Param__Result=P_THIS->GetRandom(Z_Param_Out_OutIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaPlaylist::execGetPrevious)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_InOutIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMediaSource**)Z_Param__Result=P_THIS->GetPrevious(Z_Param_Out_InOutIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaPlaylist::execGetNext)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_InOutIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMediaSource**)Z_Param__Result=P_THIS->GetNext(Z_Param_Out_InOutIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaPlaylist::execGet)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMediaSource**)Z_Param__Result=P_THIS->Get(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaPlaylist::execAddUrl)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Url);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddUrl(Z_Param_Url);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaPlaylist::execAddFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddFile(Z_Param_FilePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaPlaylist::execAdd)
	{
		P_GET_OBJECT(UMediaSource,Z_Param_MediaSource);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Add(Z_Param_MediaSource);
		P_NATIVE_END;
	}
	void UMediaPlaylist::StaticRegisterNativesUMediaPlaylist()
	{
		UClass* Class = UMediaPlaylist::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Add", &UMediaPlaylist::execAdd },
			{ "AddFile", &UMediaPlaylist::execAddFile },
			{ "AddUrl", &UMediaPlaylist::execAddUrl },
			{ "Get", &UMediaPlaylist::execGet },
			{ "GetNext", &UMediaPlaylist::execGetNext },
			{ "GetPrevious", &UMediaPlaylist::execGetPrevious },
			{ "GetRandom", &UMediaPlaylist::execGetRandom },
			{ "Insert", &UMediaPlaylist::execInsert },
			{ "Num", &UMediaPlaylist::execNum },
			{ "Remove", &UMediaPlaylist::execRemove },
			{ "RemoveAt", &UMediaPlaylist::execRemoveAt },
			{ "Replace", &UMediaPlaylist::execReplace },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMediaPlaylist_Add_Statics
	{
		struct MediaPlaylist_eventAdd_Parms
		{
			UMediaSource* MediaSource;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MediaSource;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMediaPlaylist_Add_Statics::NewProp_MediaSource = { "MediaSource", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MediaPlaylist_eventAdd_Parms, MediaSource), Z_Construct_UClass_UMediaSource_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMediaPlaylist_Add_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MediaPlaylist_eventAdd_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMediaPlaylist_Add_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MediaPlaylist_eventAdd_Parms), &Z_Construct_UFunction_UMediaPlaylist_Add_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlaylist_Add_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlaylist_Add_Statics::NewProp_MediaSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlaylist_Add_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaPlaylist_Add_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlaylist" },
		{ "Comment", "/**\n\x09 * Add a media source to the play list.\n\x09 *\n\x09 * @param MediaSource The media source to append.\n\x09 * @return true if the media source was added, false otherwise.\n\x09 * @see AddFile, AddUrl, Insert, RemoveAll, Remove, Replace\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlaylist.h" },
		{ "ToolTip", "Add a media source to the play list.\n\n@param MediaSource The media source to append.\n@return true if the media source was added, false otherwise.\n@see AddFile, AddUrl, Insert, RemoveAll, Remove, Replace" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlaylist_Add_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlaylist, nullptr, "Add", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMediaPlaylist_Add_Statics::MediaPlaylist_eventAdd_Parms), Z_Construct_UFunction_UMediaPlaylist_Add_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlaylist_Add_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaPlaylist_Add_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlaylist_Add_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaPlaylist_Add()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlaylist_Add_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaPlaylist_AddFile_Statics
	{
		struct MediaPlaylist_eventAddFile_Parms
		{
			FString FilePath;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaPlaylist_AddFile_Statics::NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMediaPlaylist_AddFile_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MediaPlaylist_eventAddFile_Parms, FilePath), METADATA_PARAMS(Z_Construct_UFunction_UMediaPlaylist_AddFile_Statics::NewProp_FilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlaylist_AddFile_Statics::NewProp_FilePath_MetaData)) };
	void Z_Construct_UFunction_UMediaPlaylist_AddFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MediaPlaylist_eventAddFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMediaPlaylist_AddFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MediaPlaylist_eventAddFile_Parms), &Z_Construct_UFunction_UMediaPlaylist_AddFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlaylist_AddFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlaylist_AddFile_Statics::NewProp_FilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlaylist_AddFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaPlaylist_AddFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlaylist" },
		{ "Comment", "/**\n\x09 * Add a media file path to the play list.\n\x09 *\n\x09 * @param FilePath The file path to add.\n\x09 * @return true if the file was added, false otherwise.\n\x09 * @see Add, AddUrl, Insert, RemoveAll, Remove, Replace\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlaylist.h" },
		{ "ToolTip", "Add a media file path to the play list.\n\n@param FilePath The file path to add.\n@return true if the file was added, false otherwise.\n@see Add, AddUrl, Insert, RemoveAll, Remove, Replace" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlaylist_AddFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlaylist, nullptr, "AddFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMediaPlaylist_AddFile_Statics::MediaPlaylist_eventAddFile_Parms), Z_Construct_UFunction_UMediaPlaylist_AddFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlaylist_AddFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaPlaylist_AddFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlaylist_AddFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaPlaylist_AddFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlaylist_AddFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaPlaylist_AddUrl_Statics
	{
		struct MediaPlaylist_eventAddUrl_Parms
		{
			FString Url;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Url;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaPlaylist_AddUrl_Statics::NewProp_Url_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMediaPlaylist_AddUrl_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MediaPlaylist_eventAddUrl_Parms, Url), METADATA_PARAMS(Z_Construct_UFunction_UMediaPlaylist_AddUrl_Statics::NewProp_Url_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlaylist_AddUrl_Statics::NewProp_Url_MetaData)) };
	void Z_Construct_UFunction_UMediaPlaylist_AddUrl_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MediaPlaylist_eventAddUrl_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMediaPlaylist_AddUrl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MediaPlaylist_eventAddUrl_Parms), &Z_Construct_UFunction_UMediaPlaylist_AddUrl_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlaylist_AddUrl_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlaylist_AddUrl_Statics::NewProp_Url,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlaylist_AddUrl_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaPlaylist_AddUrl_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlaylist" },
		{ "Comment", "/**\n\x09 * Add a media URL to the play list.\n\x09 *\n\x09 * @param Url The URL to add.\n\x09 * @return true if the URL was added, false otherwise.\n\x09 * @see Add, AddFile, Insert, RemoveAll, Remove, Replace\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlaylist.h" },
		{ "ToolTip", "Add a media URL to the play list.\n\n@param Url The URL to add.\n@return true if the URL was added, false otherwise.\n@see Add, AddFile, Insert, RemoveAll, Remove, Replace" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlaylist_AddUrl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlaylist, nullptr, "AddUrl", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMediaPlaylist_AddUrl_Statics::MediaPlaylist_eventAddUrl_Parms), Z_Construct_UFunction_UMediaPlaylist_AddUrl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlaylist_AddUrl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaPlaylist_AddUrl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlaylist_AddUrl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaPlaylist_AddUrl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlaylist_AddUrl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaPlaylist_Get_Statics
	{
		struct MediaPlaylist_eventGet_Parms
		{
			int32 Index;
			UMediaSource* ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMediaPlaylist_Get_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MediaPlaylist_eventGet_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMediaPlaylist_Get_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MediaPlaylist_eventGet_Parms, ReturnValue), Z_Construct_UClass_UMediaSource_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlaylist_Get_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlaylist_Get_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlaylist_Get_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaPlaylist_Get_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlaylist" },
		{ "Comment", "/**\n\x09 * Get the media source at the specified index.\n\x09 *\n\x09 * @param Index The index of the media source to get.\n\x09 * @return The media source, or nullptr if the index doesn't exist.\n\x09 * @see GetNext, GetRandom\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlaylist.h" },
		{ "ToolTip", "Get the media source at the specified index.\n\n@param Index The index of the media source to get.\n@return The media source, or nullptr if the index doesn't exist.\n@see GetNext, GetRandom" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlaylist_Get_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlaylist, nullptr, "Get", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMediaPlaylist_Get_Statics::MediaPlaylist_eventGet_Parms), Z_Construct_UFunction_UMediaPlaylist_Get_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlaylist_Get_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaPlaylist_Get_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlaylist_Get_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaPlaylist_Get()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlaylist_Get_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaPlaylist_GetNext_Statics
	{
		struct MediaPlaylist_eventGetNext_Parms
		{
			int32 InOutIndex;
			UMediaSource* ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InOutIndex;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMediaPlaylist_GetNext_Statics::NewProp_InOutIndex = { "InOutIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MediaPlaylist_eventGetNext_Parms, InOutIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMediaPlaylist_GetNext_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MediaPlaylist_eventGetNext_Parms, ReturnValue), Z_Construct_UClass_UMediaSource_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlaylist_GetNext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlaylist_GetNext_Statics::NewProp_InOutIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlaylist_GetNext_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaPlaylist_GetNext_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlaylist" },
		{ "Comment", "/**\n\x09 * Get the next media source in the play list.\n\x09 *\n\x09 * @param InOutIndex Index of the current media source (will contain the new index).\n\x09 * @return The media source after the current one, or nullptr if the list is empty.\n\x09 * @see , GetPrevious, GetRandom\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlaylist.h" },
		{ "ToolTip", "Get the next media source in the play list.\n\n@param InOutIndex Index of the current media source (will contain the new index).\n@return The media source after the current one, or nullptr if the list is empty.\n@see , GetPrevious, GetRandom" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlaylist_GetNext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlaylist, nullptr, "GetNext", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMediaPlaylist_GetNext_Statics::MediaPlaylist_eventGetNext_Parms), Z_Construct_UFunction_UMediaPlaylist_GetNext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlaylist_GetNext_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaPlaylist_GetNext_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlaylist_GetNext_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaPlaylist_GetNext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlaylist_GetNext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaPlaylist_GetPrevious_Statics
	{
		struct MediaPlaylist_eventGetPrevious_Parms
		{
			int32 InOutIndex;
			UMediaSource* ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InOutIndex;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMediaPlaylist_GetPrevious_Statics::NewProp_InOutIndex = { "InOutIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MediaPlaylist_eventGetPrevious_Parms, InOutIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMediaPlaylist_GetPrevious_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MediaPlaylist_eventGetPrevious_Parms, ReturnValue), Z_Construct_UClass_UMediaSource_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlaylist_GetPrevious_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlaylist_GetPrevious_Statics::NewProp_InOutIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlaylist_GetPrevious_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaPlaylist_GetPrevious_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlaylist" },
		{ "Comment", "/**\n\x09 * Get the previous media source in the play list.\n\x09 *\n\x09 * @param InOutIndex Index of the current media source (will contain the new index).\n\x09 * @return The media source before the current one, or nullptr if the list is empty.\n\x09 * @see , GetNext, GetRandom\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlaylist.h" },
		{ "ToolTip", "Get the previous media source in the play list.\n\n@param InOutIndex Index of the current media source (will contain the new index).\n@return The media source before the current one, or nullptr if the list is empty.\n@see , GetNext, GetRandom" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlaylist_GetPrevious_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlaylist, nullptr, "GetPrevious", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMediaPlaylist_GetPrevious_Statics::MediaPlaylist_eventGetPrevious_Parms), Z_Construct_UFunction_UMediaPlaylist_GetPrevious_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlaylist_GetPrevious_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaPlaylist_GetPrevious_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlaylist_GetPrevious_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaPlaylist_GetPrevious()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlaylist_GetPrevious_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaPlaylist_GetRandom_Statics
	{
		struct MediaPlaylist_eventGetRandom_Parms
		{
			int32 OutIndex;
			UMediaSource* ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutIndex;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMediaPlaylist_GetRandom_Statics::NewProp_OutIndex = { "OutIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MediaPlaylist_eventGetRandom_Parms, OutIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMediaPlaylist_GetRandom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MediaPlaylist_eventGetRandom_Parms, ReturnValue), Z_Construct_UClass_UMediaSource_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlaylist_GetRandom_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlaylist_GetRandom_Statics::NewProp_OutIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlaylist_GetRandom_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaPlaylist_GetRandom_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlaylist" },
		{ "Comment", "/**\n\x09 * Get a random media source in the play list.\n\x09 *\n\x09 * @param OutIndex Will contain the index of the returned media source.\n\x09 * @return The random media source, or nullptr if the list is empty.\n\x09 * @see Get, GetNext, GetPrevious\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlaylist.h" },
		{ "ToolTip", "Get a random media source in the play list.\n\n@param OutIndex Will contain the index of the returned media source.\n@return The random media source, or nullptr if the list is empty.\n@see Get, GetNext, GetPrevious" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlaylist_GetRandom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlaylist, nullptr, "GetRandom", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMediaPlaylist_GetRandom_Statics::MediaPlaylist_eventGetRandom_Parms), Z_Construct_UFunction_UMediaPlaylist_GetRandom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlaylist_GetRandom_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaPlaylist_GetRandom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlaylist_GetRandom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaPlaylist_GetRandom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlaylist_GetRandom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaPlaylist_Insert_Statics
	{
		struct MediaPlaylist_eventInsert_Parms
		{
			UMediaSource* MediaSource;
			int32 Index;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MediaSource;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMediaPlaylist_Insert_Statics::NewProp_MediaSource = { "MediaSource", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MediaPlaylist_eventInsert_Parms, MediaSource), Z_Construct_UClass_UMediaSource_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMediaPlaylist_Insert_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MediaPlaylist_eventInsert_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlaylist_Insert_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlaylist_Insert_Statics::NewProp_MediaSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlaylist_Insert_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaPlaylist_Insert_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlaylist" },
		{ "Comment", "/**\n\x09 * Insert a media source into the play list at the given position.\n\x09 *\n\x09 * @param MediaSource The media source to insert.\n\x09 * @param Index The index to insert into.\n\x09 * @see Add, Remove, RemoveAll, Replace\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlaylist.h" },
		{ "ToolTip", "Insert a media source into the play list at the given position.\n\n@param MediaSource The media source to insert.\n@param Index The index to insert into.\n@see Add, Remove, RemoveAll, Replace" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlaylist_Insert_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlaylist, nullptr, "Insert", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMediaPlaylist_Insert_Statics::MediaPlaylist_eventInsert_Parms), Z_Construct_UFunction_UMediaPlaylist_Insert_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlaylist_Insert_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaPlaylist_Insert_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlaylist_Insert_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaPlaylist_Insert()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlaylist_Insert_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaPlaylist_Num_Statics
	{
		struct MediaPlaylist_eventNum_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMediaPlaylist_Num_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MediaPlaylist_eventNum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlaylist_Num_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlaylist_Num_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaPlaylist_Num_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlaylist" },
		{ "Comment", "/**\n\x09 * Get the number of media sources in the play list.\n\x09 *\n\x09 * @return Number of media sources.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlaylist.h" },
		{ "ToolTip", "Get the number of media sources in the play list.\n\n@return Number of media sources." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlaylist_Num_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlaylist, nullptr, "Num", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMediaPlaylist_Num_Statics::MediaPlaylist_eventNum_Parms), Z_Construct_UFunction_UMediaPlaylist_Num_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlaylist_Num_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaPlaylist_Num_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlaylist_Num_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaPlaylist_Num()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlaylist_Num_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaPlaylist_Remove_Statics
	{
		struct MediaPlaylist_eventRemove_Parms
		{
			UMediaSource* MediaSource;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MediaSource;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMediaPlaylist_Remove_Statics::NewProp_MediaSource = { "MediaSource", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MediaPlaylist_eventRemove_Parms, MediaSource), Z_Construct_UClass_UMediaSource_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMediaPlaylist_Remove_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MediaPlaylist_eventRemove_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMediaPlaylist_Remove_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MediaPlaylist_eventRemove_Parms), &Z_Construct_UFunction_UMediaPlaylist_Remove_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlaylist_Remove_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlaylist_Remove_Statics::NewProp_MediaSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlaylist_Remove_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaPlaylist_Remove_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlaylist" },
		{ "Comment", "/**\n\x09 * Remove all occurrences of the given media source in the play list.\n\x09 *\n\x09 * @param MediaSource The media source to remove.\n\x09 * @return true if the media source was removed, false otherwise.\n\x09 * @see Add, Insert, Remove, Replace\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlaylist.h" },
		{ "ToolTip", "Remove all occurrences of the given media source in the play list.\n\n@param MediaSource The media source to remove.\n@return true if the media source was removed, false otherwise.\n@see Add, Insert, Remove, Replace" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlaylist_Remove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlaylist, nullptr, "Remove", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMediaPlaylist_Remove_Statics::MediaPlaylist_eventRemove_Parms), Z_Construct_UFunction_UMediaPlaylist_Remove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlaylist_Remove_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaPlaylist_Remove_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlaylist_Remove_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaPlaylist_Remove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlaylist_Remove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaPlaylist_RemoveAt_Statics
	{
		struct MediaPlaylist_eventRemoveAt_Parms
		{
			int32 Index;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMediaPlaylist_RemoveAt_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MediaPlaylist_eventRemoveAt_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMediaPlaylist_RemoveAt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MediaPlaylist_eventRemoveAt_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMediaPlaylist_RemoveAt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MediaPlaylist_eventRemoveAt_Parms), &Z_Construct_UFunction_UMediaPlaylist_RemoveAt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlaylist_RemoveAt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlaylist_RemoveAt_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlaylist_RemoveAt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaPlaylist_RemoveAt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlaylist" },
		{ "Comment", "/**\n\x09 * Remove the media source at the specified position.\n\x09 *\n\x09 * @param Index The index of the media source to remove.\n\x09 * @return true if the media source was removed, false otherwise.\n\x09 * @see Add, Insert, RemoveAll, Replace\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlaylist.h" },
		{ "ToolTip", "Remove the media source at the specified position.\n\n@param Index The index of the media source to remove.\n@return true if the media source was removed, false otherwise.\n@see Add, Insert, RemoveAll, Replace" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlaylist_RemoveAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlaylist, nullptr, "RemoveAt", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMediaPlaylist_RemoveAt_Statics::MediaPlaylist_eventRemoveAt_Parms), Z_Construct_UFunction_UMediaPlaylist_RemoveAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlaylist_RemoveAt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaPlaylist_RemoveAt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlaylist_RemoveAt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaPlaylist_RemoveAt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlaylist_RemoveAt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaPlaylist_Replace_Statics
	{
		struct MediaPlaylist_eventReplace_Parms
		{
			int32 Index;
			UMediaSource* Replacement;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Replacement;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMediaPlaylist_Replace_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MediaPlaylist_eventReplace_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMediaPlaylist_Replace_Statics::NewProp_Replacement = { "Replacement", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MediaPlaylist_eventReplace_Parms, Replacement), Z_Construct_UClass_UMediaSource_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMediaPlaylist_Replace_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MediaPlaylist_eventReplace_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMediaPlaylist_Replace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MediaPlaylist_eventReplace_Parms), &Z_Construct_UFunction_UMediaPlaylist_Replace_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlaylist_Replace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlaylist_Replace_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlaylist_Replace_Statics::NewProp_Replacement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlaylist_Replace_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaPlaylist_Replace_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlaylist" },
		{ "Comment", "/**\n\x09 * Replace the media source at the specified position.\n\x09 *\n\x09 * @param Index The index of the media source to replace.\n\x09 * @param Replacement The replacement media source.\n\x09 * @return true if the media source was replaced, false otherwise.\n\x09 * @see Add, Insert, RemoveAll, RemoveAt\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlaylist.h" },
		{ "ToolTip", "Replace the media source at the specified position.\n\n@param Index The index of the media source to replace.\n@param Replacement The replacement media source.\n@return true if the media source was replaced, false otherwise.\n@see Add, Insert, RemoveAll, RemoveAt" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlaylist_Replace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlaylist, nullptr, "Replace", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMediaPlaylist_Replace_Statics::MediaPlaylist_eventReplace_Parms), Z_Construct_UFunction_UMediaPlaylist_Replace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlaylist_Replace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaPlaylist_Replace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlaylist_Replace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaPlaylist_Replace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlaylist_Replace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMediaPlaylist);
	UClass* Z_Construct_UClass_UMediaPlaylist_NoRegister()
	{
		return UMediaPlaylist::StaticClass();
	}
	struct Z_Construct_UClass_UMediaPlaylist_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Items_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Items;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMediaPlaylist_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MediaAssets,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMediaPlaylist_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMediaPlaylist_Add, "Add" }, // 2241953305
		{ &Z_Construct_UFunction_UMediaPlaylist_AddFile, "AddFile" }, // 2215204997
		{ &Z_Construct_UFunction_UMediaPlaylist_AddUrl, "AddUrl" }, // 1938176577
		{ &Z_Construct_UFunction_UMediaPlaylist_Get, "Get" }, // 2012734628
		{ &Z_Construct_UFunction_UMediaPlaylist_GetNext, "GetNext" }, // 1958042276
		{ &Z_Construct_UFunction_UMediaPlaylist_GetPrevious, "GetPrevious" }, // 265070400
		{ &Z_Construct_UFunction_UMediaPlaylist_GetRandom, "GetRandom" }, // 566121608
		{ &Z_Construct_UFunction_UMediaPlaylist_Insert, "Insert" }, // 259308170
		{ &Z_Construct_UFunction_UMediaPlaylist_Num, "Num" }, // 2315670890
		{ &Z_Construct_UFunction_UMediaPlaylist_Remove, "Remove" }, // 3064890625
		{ &Z_Construct_UFunction_UMediaPlaylist_RemoveAt, "RemoveAt" }, // 212712719
		{ &Z_Construct_UFunction_UMediaPlaylist_Replace, "Replace" }, // 2131432046
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaPlaylist_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Implements a media play list.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "MediaPlaylist.h" },
		{ "ModuleRelativePath", "Public/MediaPlaylist.h" },
		{ "ToolTip", "Implements a media play list." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMediaPlaylist_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMediaSource_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaPlaylist_Statics::NewProp_Items_MetaData[] = {
		{ "Category", "Playlist" },
		{ "Comment", "/** List of media sources to play. */" },
		{ "ModuleRelativePath", "Public/MediaPlaylist.h" },
		{ "ToolTip", "List of media sources to play." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMediaPlaylist_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMediaPlaylist, Items), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMediaPlaylist_Statics::NewProp_Items_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPlaylist_Statics::NewProp_Items_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMediaPlaylist_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPlaylist_Statics::NewProp_Items_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPlaylist_Statics::NewProp_Items,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMediaPlaylist_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMediaPlaylist>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMediaPlaylist_Statics::ClassParams = {
		&UMediaPlaylist::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMediaPlaylist_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPlaylist_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMediaPlaylist_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPlaylist_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMediaPlaylist()
	{
		if (!Z_Registration_Info_UClass_UMediaPlaylist.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMediaPlaylist.OuterSingleton, Z_Construct_UClass_UMediaPlaylist_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMediaPlaylist.OuterSingleton;
	}
	template<> MEDIAASSETS_API UClass* StaticClass<UMediaPlaylist>()
	{
		return UMediaPlaylist::StaticClass();
	}
	UMediaPlaylist::UMediaPlaylist(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMediaPlaylist);
	UMediaPlaylist::~UMediaPlaylist() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaPlaylist_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaPlaylist_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMediaPlaylist, UMediaPlaylist::StaticClass, TEXT("UMediaPlaylist"), &Z_Registration_Info_UClass_UMediaPlaylist, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMediaPlaylist), 4037096500U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaPlaylist_h_3480743905(TEXT("/Script/MediaAssets"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaPlaylist_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaPlaylist_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
