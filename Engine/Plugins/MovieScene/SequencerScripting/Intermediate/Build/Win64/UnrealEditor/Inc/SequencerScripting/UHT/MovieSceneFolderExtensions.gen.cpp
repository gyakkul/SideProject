// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ExtensionLibraries/MovieSceneFolderExtensions.h"
#include "MovieSceneBindingProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneFolderExtensions() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneFolder_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrack_NoRegister();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneBindingProxy();
	SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneFolderExtensions();
	SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneFolderExtensions_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SequencerScripting();
// End Cross Module References
	DEFINE_FUNCTION(UMovieSceneFolderExtensions::execRemoveChildObjectBinding)
	{
		P_GET_OBJECT(UMovieSceneFolder,Z_Param_Folder);
		P_GET_STRUCT(FMovieSceneBindingProxy,Z_Param_InObjectBinding);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMovieSceneFolderExtensions::RemoveChildObjectBinding(Z_Param_Folder,Z_Param_InObjectBinding);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneFolderExtensions::execAddChildObjectBinding)
	{
		P_GET_OBJECT(UMovieSceneFolder,Z_Param_Folder);
		P_GET_STRUCT(FMovieSceneBindingProxy,Z_Param_InObjectBinding);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMovieSceneFolderExtensions::AddChildObjectBinding(Z_Param_Folder,Z_Param_InObjectBinding);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneFolderExtensions::execGetChildObjectBindings)
	{
		P_GET_OBJECT(UMovieSceneFolder,Z_Param_Folder);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FMovieSceneBindingProxy>*)Z_Param__Result=UMovieSceneFolderExtensions::GetChildObjectBindings(Z_Param_Folder);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneFolderExtensions::execRemoveChildMasterTrack)
	{
		P_GET_OBJECT(UMovieSceneFolder,Z_Param_Folder);
		P_GET_OBJECT(UMovieSceneTrack,Z_Param_InTrack);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMovieSceneFolderExtensions::RemoveChildMasterTrack(Z_Param_Folder,Z_Param_InTrack);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneFolderExtensions::execRemoveChildTrack)
	{
		P_GET_OBJECT(UMovieSceneFolder,Z_Param_Folder);
		P_GET_OBJECT(UMovieSceneTrack,Z_Param_InTrack);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMovieSceneFolderExtensions::RemoveChildTrack(Z_Param_Folder,Z_Param_InTrack);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneFolderExtensions::execAddChildMasterTrack)
	{
		P_GET_OBJECT(UMovieSceneFolder,Z_Param_Folder);
		P_GET_OBJECT(UMovieSceneTrack,Z_Param_InTrack);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMovieSceneFolderExtensions::AddChildMasterTrack(Z_Param_Folder,Z_Param_InTrack);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneFolderExtensions::execAddChildTrack)
	{
		P_GET_OBJECT(UMovieSceneFolder,Z_Param_Folder);
		P_GET_OBJECT(UMovieSceneTrack,Z_Param_InTrack);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMovieSceneFolderExtensions::AddChildTrack(Z_Param_Folder,Z_Param_InTrack);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneFolderExtensions::execGetChildMasterTracks)
	{
		P_GET_OBJECT(UMovieSceneFolder,Z_Param_Folder);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UMovieSceneTrack*>*)Z_Param__Result=UMovieSceneFolderExtensions::GetChildMasterTracks(Z_Param_Folder);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneFolderExtensions::execGetChildTracks)
	{
		P_GET_OBJECT(UMovieSceneFolder,Z_Param_Folder);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UMovieSceneTrack*>*)Z_Param__Result=UMovieSceneFolderExtensions::GetChildTracks(Z_Param_Folder);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneFolderExtensions::execRemoveChildFolder)
	{
		P_GET_OBJECT(UMovieSceneFolder,Z_Param_TargetFolder);
		P_GET_OBJECT(UMovieSceneFolder,Z_Param_FolderToRemove);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMovieSceneFolderExtensions::RemoveChildFolder(Z_Param_TargetFolder,Z_Param_FolderToRemove);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneFolderExtensions::execAddChildFolder)
	{
		P_GET_OBJECT(UMovieSceneFolder,Z_Param_TargetFolder);
		P_GET_OBJECT(UMovieSceneFolder,Z_Param_FolderToAdd);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMovieSceneFolderExtensions::AddChildFolder(Z_Param_TargetFolder,Z_Param_FolderToAdd);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneFolderExtensions::execGetChildFolders)
	{
		P_GET_OBJECT(UMovieSceneFolder,Z_Param_Folder);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UMovieSceneFolder*>*)Z_Param__Result=UMovieSceneFolderExtensions::GetChildFolders(Z_Param_Folder);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneFolderExtensions::execSetFolderColor)
	{
		P_GET_OBJECT(UMovieSceneFolder,Z_Param_Folder);
		P_GET_STRUCT(FColor,Z_Param_InFolderColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMovieSceneFolderExtensions::SetFolderColor(Z_Param_Folder,Z_Param_InFolderColor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneFolderExtensions::execGetFolderColor)
	{
		P_GET_OBJECT(UMovieSceneFolder,Z_Param_Folder);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FColor*)Z_Param__Result=UMovieSceneFolderExtensions::GetFolderColor(Z_Param_Folder);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneFolderExtensions::execSetFolderName)
	{
		P_GET_OBJECT(UMovieSceneFolder,Z_Param_Folder);
		P_GET_PROPERTY(FNameProperty,Z_Param_InFolderName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMovieSceneFolderExtensions::SetFolderName(Z_Param_Folder,Z_Param_InFolderName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneFolderExtensions::execGetFolderName)
	{
		P_GET_OBJECT(UMovieSceneFolder,Z_Param_Folder);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=UMovieSceneFolderExtensions::GetFolderName(Z_Param_Folder);
		P_NATIVE_END;
	}
	void UMovieSceneFolderExtensions::StaticRegisterNativesUMovieSceneFolderExtensions()
	{
		UClass* Class = UMovieSceneFolderExtensions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddChildFolder", &UMovieSceneFolderExtensions::execAddChildFolder },
			{ "AddChildMasterTrack", &UMovieSceneFolderExtensions::execAddChildMasterTrack },
			{ "AddChildObjectBinding", &UMovieSceneFolderExtensions::execAddChildObjectBinding },
			{ "AddChildTrack", &UMovieSceneFolderExtensions::execAddChildTrack },
			{ "GetChildFolders", &UMovieSceneFolderExtensions::execGetChildFolders },
			{ "GetChildMasterTracks", &UMovieSceneFolderExtensions::execGetChildMasterTracks },
			{ "GetChildObjectBindings", &UMovieSceneFolderExtensions::execGetChildObjectBindings },
			{ "GetChildTracks", &UMovieSceneFolderExtensions::execGetChildTracks },
			{ "GetFolderColor", &UMovieSceneFolderExtensions::execGetFolderColor },
			{ "GetFolderName", &UMovieSceneFolderExtensions::execGetFolderName },
			{ "RemoveChildFolder", &UMovieSceneFolderExtensions::execRemoveChildFolder },
			{ "RemoveChildMasterTrack", &UMovieSceneFolderExtensions::execRemoveChildMasterTrack },
			{ "RemoveChildObjectBinding", &UMovieSceneFolderExtensions::execRemoveChildObjectBinding },
			{ "RemoveChildTrack", &UMovieSceneFolderExtensions::execRemoveChildTrack },
			{ "SetFolderColor", &UMovieSceneFolderExtensions::execSetFolderColor },
			{ "SetFolderName", &UMovieSceneFolderExtensions::execSetFolderName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildFolder_Statics
	{
		struct MovieSceneFolderExtensions_eventAddChildFolder_Parms
		{
			UMovieSceneFolder* TargetFolder;
			UMovieSceneFolder* FolderToAdd;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetFolder_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetFolder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FolderToAdd_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FolderToAdd;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildFolder_Statics::NewProp_TargetFolder_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildFolder_Statics::NewProp_TargetFolder = { "TargetFolder", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneFolderExtensions_eventAddChildFolder_Parms, TargetFolder), Z_Construct_UClass_UMovieSceneFolder_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildFolder_Statics::NewProp_TargetFolder_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildFolder_Statics::NewProp_TargetFolder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildFolder_Statics::NewProp_FolderToAdd_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildFolder_Statics::NewProp_FolderToAdd = { "FolderToAdd", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneFolderExtensions_eventAddChildFolder_Parms, FolderToAdd), Z_Construct_UClass_UMovieSceneFolder_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildFolder_Statics::NewProp_FolderToAdd_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildFolder_Statics::NewProp_FolderToAdd_MetaData)) };
	void Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildFolder_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieSceneFolderExtensions_eventAddChildFolder_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildFolder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MovieSceneFolderExtensions_eventAddChildFolder_Parms), &Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildFolder_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildFolder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildFolder_Statics::NewProp_TargetFolder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildFolder_Statics::NewProp_FolderToAdd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildFolder_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildFolder_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Add a child folder to the target folder\n\x09 *\n\x09 * @param TargetFolder\x09The folder to add a child folder to\n\x09 * @param FolderToAdd\x09The child folder to be added\n\x09 * @return True if the addition is successful\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneFolderExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Add a child folder to the target folder\n\n@param TargetFolder  The folder to add a child folder to\n@param FolderToAdd   The child folder to be added\n@return True if the addition is successful" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildFolder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneFolderExtensions, nullptr, "AddChildFolder", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildFolder_Statics::MovieSceneFolderExtensions_eventAddChildFolder_Parms), Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildFolder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildFolder_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildFolder_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildFolder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildFolder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildFolder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildMasterTrack_Statics
	{
		struct MovieSceneFolderExtensions_eventAddChildMasterTrack_Parms
		{
			UMovieSceneFolder* Folder;
			UMovieSceneTrack* InTrack;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Folder_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Folder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InTrack_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InTrack;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildMasterTrack_Statics::NewProp_Folder_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildMasterTrack_Statics::NewProp_Folder = { "Folder", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneFolderExtensions_eventAddChildMasterTrack_Parms, Folder), Z_Construct_UClass_UMovieSceneFolder_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildMasterTrack_Statics::NewProp_Folder_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildMasterTrack_Statics::NewProp_Folder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildMasterTrack_Statics::NewProp_InTrack_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildMasterTrack_Statics::NewProp_InTrack = { "InTrack", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneFolderExtensions_eventAddChildMasterTrack_Parms, InTrack), Z_Construct_UClass_UMovieSceneTrack_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildMasterTrack_Statics::NewProp_InTrack_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildMasterTrack_Statics::NewProp_InTrack_MetaData)) };
	void Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildMasterTrack_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieSceneFolderExtensions_eventAddChildMasterTrack_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildMasterTrack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MovieSceneFolderExtensions_eventAddChildMasterTrack_Parms), &Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildMasterTrack_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildMasterTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildMasterTrack_Statics::NewProp_Folder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildMasterTrack_Statics::NewProp_InTrack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildMasterTrack_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildMasterTrack_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "AddChildMasterTrack is deprecated. Please use AddChildTrack instead" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneFolderExtensions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildMasterTrack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneFolderExtensions, nullptr, "AddChildMasterTrack", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildMasterTrack_Statics::MovieSceneFolderExtensions_eventAddChildMasterTrack_Parms), Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildMasterTrack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildMasterTrack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildMasterTrack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildMasterTrack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildMasterTrack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildMasterTrack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildObjectBinding_Statics
	{
		struct MovieSceneFolderExtensions_eventAddChildObjectBinding_Parms
		{
			UMovieSceneFolder* Folder;
			FMovieSceneBindingProxy InObjectBinding;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Folder_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Folder;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InObjectBinding;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildObjectBinding_Statics::NewProp_Folder_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildObjectBinding_Statics::NewProp_Folder = { "Folder", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneFolderExtensions_eventAddChildObjectBinding_Parms, Folder), Z_Construct_UClass_UMovieSceneFolder_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildObjectBinding_Statics::NewProp_Folder_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildObjectBinding_Statics::NewProp_Folder_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildObjectBinding_Statics::NewProp_InObjectBinding = { "InObjectBinding", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneFolderExtensions_eventAddChildObjectBinding_Parms, InObjectBinding), Z_Construct_UScriptStruct_FMovieSceneBindingProxy, METADATA_PARAMS(nullptr, 0) }; // 716961670
	void Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildObjectBinding_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieSceneFolderExtensions_eventAddChildObjectBinding_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildObjectBinding_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MovieSceneFolderExtensions_eventAddChildObjectBinding_Parms), &Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildObjectBinding_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildObjectBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildObjectBinding_Statics::NewProp_Folder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildObjectBinding_Statics::NewProp_InObjectBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildObjectBinding_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildObjectBinding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/** \n\x09 * Add a guid for an object binding to this folder \n\x09 *\n\x09 * @param Folder\x09\x09\x09The folder to add a child object to\n\x09 * @param InObjectBinding\x09The binding to add to the folder\n\x09 * @return True if the addition is successful\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneFolderExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Add a guid for an object binding to this folder\n\n@param Folder                        The folder to add a child object to\n@param InObjectBinding       The binding to add to the folder\n@return True if the addition is successful" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildObjectBinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneFolderExtensions, nullptr, "AddChildObjectBinding", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildObjectBinding_Statics::MovieSceneFolderExtensions_eventAddChildObjectBinding_Parms), Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildObjectBinding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildObjectBinding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildObjectBinding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildObjectBinding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildObjectBinding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildObjectBinding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildTrack_Statics
	{
		struct MovieSceneFolderExtensions_eventAddChildTrack_Parms
		{
			UMovieSceneFolder* Folder;
			UMovieSceneTrack* InTrack;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Folder_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Folder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InTrack_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InTrack;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildTrack_Statics::NewProp_Folder_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildTrack_Statics::NewProp_Folder = { "Folder", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneFolderExtensions_eventAddChildTrack_Parms, Folder), Z_Construct_UClass_UMovieSceneFolder_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildTrack_Statics::NewProp_Folder_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildTrack_Statics::NewProp_Folder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildTrack_Statics::NewProp_InTrack_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildTrack_Statics::NewProp_InTrack = { "InTrack", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneFolderExtensions_eventAddChildTrack_Parms, InTrack), Z_Construct_UClass_UMovieSceneTrack_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildTrack_Statics::NewProp_InTrack_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildTrack_Statics::NewProp_InTrack_MetaData)) };
	void Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildTrack_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieSceneFolderExtensions_eventAddChildTrack_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildTrack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MovieSceneFolderExtensions_eventAddChildTrack_Parms), &Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildTrack_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildTrack_Statics::NewProp_Folder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildTrack_Statics::NewProp_InTrack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildTrack_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildTrack_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Add a track to this folder\n\x09 *\n\x09 * @param Folder\x09\x09\x09The folder to add a child track to\n\x09 * @param InTrack\x09\x09    The track to add to the folder\n\x09 * @return True if the addition is successful\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneFolderExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Add a track to this folder\n\n@param Folder                        The folder to add a child track to\n@param InTrack                   The track to add to the folder\n@return True if the addition is successful" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildTrack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneFolderExtensions, nullptr, "AddChildTrack", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildTrack_Statics::MovieSceneFolderExtensions_eventAddChildTrack_Parms), Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildTrack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildTrack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildTrack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildTrack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildTrack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildTrack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildFolders_Statics
	{
		struct MovieSceneFolderExtensions_eventGetChildFolders_Parms
		{
			UMovieSceneFolder* Folder;
			TArray<UMovieSceneFolder*> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Folder_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Folder;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildFolders_Statics::NewProp_Folder_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildFolders_Statics::NewProp_Folder = { "Folder", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneFolderExtensions_eventGetChildFolders_Parms, Folder), Z_Construct_UClass_UMovieSceneFolder_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildFolders_Statics::NewProp_Folder_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildFolders_Statics::NewProp_Folder_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildFolders_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMovieSceneFolder_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildFolders_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildFolders_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneFolderExtensions_eventGetChildFolders_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildFolders_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildFolders_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildFolders_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildFolders_Statics::NewProp_Folder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildFolders_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildFolders_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildFolders_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Get the child folders of a given folder\n\x09 *\n\x09 * @param Folder\x09The folder to get the child folders of\n\x09 * @return The child folders associated with the given folder\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneFolderExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get the child folders of a given folder\n\n@param Folder        The folder to get the child folders of\n@return The child folders associated with the given folder" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildFolders_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneFolderExtensions, nullptr, "GetChildFolders", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildFolders_Statics::MovieSceneFolderExtensions_eventGetChildFolders_Parms), Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildFolders_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildFolders_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildFolders_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildFolders_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildFolders()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildFolders_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildMasterTracks_Statics
	{
		struct MovieSceneFolderExtensions_eventGetChildMasterTracks_Parms
		{
			UMovieSceneFolder* Folder;
			TArray<UMovieSceneTrack*> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Folder_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Folder;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildMasterTracks_Statics::NewProp_Folder_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildMasterTracks_Statics::NewProp_Folder = { "Folder", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneFolderExtensions_eventGetChildMasterTracks_Parms, Folder), Z_Construct_UClass_UMovieSceneFolder_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildMasterTracks_Statics::NewProp_Folder_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildMasterTracks_Statics::NewProp_Folder_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildMasterTracks_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMovieSceneTrack_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildMasterTracks_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildMasterTracks_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneFolderExtensions_eventGetChildMasterTracks_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildMasterTracks_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildMasterTracks_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildMasterTracks_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildMasterTracks_Statics::NewProp_Folder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildMasterTracks_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildMasterTracks_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildMasterTracks_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "GetChildMasterTracks is deprecated. Please use GetChildTracks instead" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneFolderExtensions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildMasterTracks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneFolderExtensions, nullptr, "GetChildMasterTracks", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildMasterTracks_Statics::MovieSceneFolderExtensions_eventGetChildMasterTracks_Parms), Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildMasterTracks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildMasterTracks_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildMasterTracks_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildMasterTracks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildMasterTracks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildMasterTracks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildObjectBindings_Statics
	{
		struct MovieSceneFolderExtensions_eventGetChildObjectBindings_Parms
		{
			UMovieSceneFolder* Folder;
			TArray<FMovieSceneBindingProxy> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Folder_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Folder;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildObjectBindings_Statics::NewProp_Folder_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildObjectBindings_Statics::NewProp_Folder = { "Folder", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneFolderExtensions_eventGetChildObjectBindings_Parms, Folder), Z_Construct_UClass_UMovieSceneFolder_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildObjectBindings_Statics::NewProp_Folder_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildObjectBindings_Statics::NewProp_Folder_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildObjectBindings_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMovieSceneBindingProxy, METADATA_PARAMS(nullptr, 0) }; // 716961670
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildObjectBindings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneFolderExtensions_eventGetChildObjectBindings_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 716961670
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildObjectBindings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildObjectBindings_Statics::NewProp_Folder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildObjectBindings_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildObjectBindings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildObjectBindings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Get the object bindings contained by this folder\n\x09 *\n\x09 * @param Folder\x09The folder to get the bindings of\n\x09 * @return The object bindings under the given folder\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneFolderExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get the object bindings contained by this folder\n\n@param Folder        The folder to get the bindings of\n@return The object bindings under the given folder" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildObjectBindings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneFolderExtensions, nullptr, "GetChildObjectBindings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildObjectBindings_Statics::MovieSceneFolderExtensions_eventGetChildObjectBindings_Parms), Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildObjectBindings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildObjectBindings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildObjectBindings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildObjectBindings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildObjectBindings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildObjectBindings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildTracks_Statics
	{
		struct MovieSceneFolderExtensions_eventGetChildTracks_Parms
		{
			UMovieSceneFolder* Folder;
			TArray<UMovieSceneTrack*> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Folder_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Folder;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildTracks_Statics::NewProp_Folder_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildTracks_Statics::NewProp_Folder = { "Folder", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneFolderExtensions_eventGetChildTracks_Parms, Folder), Z_Construct_UClass_UMovieSceneFolder_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildTracks_Statics::NewProp_Folder_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildTracks_Statics::NewProp_Folder_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildTracks_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMovieSceneTrack_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildTracks_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildTracks_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneFolderExtensions_eventGetChildTracks_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildTracks_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildTracks_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildTracks_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildTracks_Statics::NewProp_Folder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildTracks_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildTracks_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildTracks_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Get the tracks contained by this folder\n\x09 *\n\x09 * @param Folder\x09The folder to get the tracks of\n\x09 * @return The tracks under the given folder\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneFolderExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get the tracks contained by this folder\n\n@param Folder        The folder to get the tracks of\n@return The tracks under the given folder" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildTracks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneFolderExtensions, nullptr, "GetChildTracks", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildTracks_Statics::MovieSceneFolderExtensions_eventGetChildTracks_Parms), Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildTracks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildTracks_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildTracks_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildTracks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildTracks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildTracks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneFolderExtensions_GetFolderColor_Statics
	{
		struct MovieSceneFolderExtensions_eventGetFolderColor_Parms
		{
			UMovieSceneFolder* Folder;
			FColor ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Folder_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Folder;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneFolderExtensions_GetFolderColor_Statics::NewProp_Folder_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneFolderExtensions_GetFolderColor_Statics::NewProp_Folder = { "Folder", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneFolderExtensions_eventGetFolderColor_Parms, Folder), Z_Construct_UClass_UMovieSceneFolder_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneFolderExtensions_GetFolderColor_Statics::NewProp_Folder_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneFolderExtensions_GetFolderColor_Statics::NewProp_Folder_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneFolderExtensions_GetFolderColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneFolderExtensions_eventGetFolderColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneFolderExtensions_GetFolderColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneFolderExtensions_GetFolderColor_Statics::NewProp_Folder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneFolderExtensions_GetFolderColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneFolderExtensions_GetFolderColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Get the display color of the given folder\n\x09 *\n\x09 * @param Folder\x09The folder to get the display color of\n\x09 * @return The display color of the given folder\n\x09 */" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneFolderExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get the display color of the given folder\n\n@param Folder        The folder to get the display color of\n@return The display color of the given folder" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneFolderExtensions_GetFolderColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneFolderExtensions, nullptr, "GetFolderColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneFolderExtensions_GetFolderColor_Statics::MovieSceneFolderExtensions_eventGetFolderColor_Parms), Z_Construct_UFunction_UMovieSceneFolderExtensions_GetFolderColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneFolderExtensions_GetFolderColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneFolderExtensions_GetFolderColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneFolderExtensions_GetFolderColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneFolderExtensions_GetFolderColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneFolderExtensions_GetFolderColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneFolderExtensions_GetFolderName_Statics
	{
		struct MovieSceneFolderExtensions_eventGetFolderName_Parms
		{
			UMovieSceneFolder* Folder;
			FName ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Folder_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Folder;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneFolderExtensions_GetFolderName_Statics::NewProp_Folder_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneFolderExtensions_GetFolderName_Statics::NewProp_Folder = { "Folder", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneFolderExtensions_eventGetFolderName_Parms, Folder), Z_Construct_UClass_UMovieSceneFolder_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneFolderExtensions_GetFolderName_Statics::NewProp_Folder_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneFolderExtensions_GetFolderName_Statics::NewProp_Folder_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMovieSceneFolderExtensions_GetFolderName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneFolderExtensions_eventGetFolderName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneFolderExtensions_GetFolderName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneFolderExtensions_GetFolderName_Statics::NewProp_Folder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneFolderExtensions_GetFolderName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneFolderExtensions_GetFolderName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Get the given folder's display name\n\x09 *\n\x09 * @param Folder\x09The folder to use\n\x09 * @return The target folder's name\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneFolderExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get the given folder's display name\n\n@param Folder        The folder to use\n@return The target folder's name" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneFolderExtensions_GetFolderName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneFolderExtensions, nullptr, "GetFolderName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneFolderExtensions_GetFolderName_Statics::MovieSceneFolderExtensions_eventGetFolderName_Parms), Z_Construct_UFunction_UMovieSceneFolderExtensions_GetFolderName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneFolderExtensions_GetFolderName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneFolderExtensions_GetFolderName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneFolderExtensions_GetFolderName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneFolderExtensions_GetFolderName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneFolderExtensions_GetFolderName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildFolder_Statics
	{
		struct MovieSceneFolderExtensions_eventRemoveChildFolder_Parms
		{
			UMovieSceneFolder* TargetFolder;
			UMovieSceneFolder* FolderToRemove;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetFolder_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetFolder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FolderToRemove_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FolderToRemove;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildFolder_Statics::NewProp_TargetFolder_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildFolder_Statics::NewProp_TargetFolder = { "TargetFolder", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneFolderExtensions_eventRemoveChildFolder_Parms, TargetFolder), Z_Construct_UClass_UMovieSceneFolder_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildFolder_Statics::NewProp_TargetFolder_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildFolder_Statics::NewProp_TargetFolder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildFolder_Statics::NewProp_FolderToRemove_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildFolder_Statics::NewProp_FolderToRemove = { "FolderToRemove", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneFolderExtensions_eventRemoveChildFolder_Parms, FolderToRemove), Z_Construct_UClass_UMovieSceneFolder_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildFolder_Statics::NewProp_FolderToRemove_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildFolder_Statics::NewProp_FolderToRemove_MetaData)) };
	void Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildFolder_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieSceneFolderExtensions_eventRemoveChildFolder_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildFolder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MovieSceneFolderExtensions_eventRemoveChildFolder_Parms), &Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildFolder_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildFolder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildFolder_Statics::NewProp_TargetFolder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildFolder_Statics::NewProp_FolderToRemove,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildFolder_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildFolder_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Remove a child folder from the given folder\n\x09 *\n\x09 * @param TargetFolder\x09\x09The folder from which to remove a child folder\n\x09 * @param FolderToRemove\x09The child folder to be removed\n\x09 * @return True if the removal succeeds\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneFolderExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Remove a child folder from the given folder\n\n@param TargetFolder          The folder from which to remove a child folder\n@param FolderToRemove        The child folder to be removed\n@return True if the removal succeeds" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildFolder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneFolderExtensions, nullptr, "RemoveChildFolder", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildFolder_Statics::MovieSceneFolderExtensions_eventRemoveChildFolder_Parms), Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildFolder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildFolder_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildFolder_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildFolder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildFolder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildFolder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildMasterTrack_Statics
	{
		struct MovieSceneFolderExtensions_eventRemoveChildMasterTrack_Parms
		{
			UMovieSceneFolder* Folder;
			UMovieSceneTrack* InTrack;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Folder_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Folder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InTrack_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InTrack;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildMasterTrack_Statics::NewProp_Folder_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildMasterTrack_Statics::NewProp_Folder = { "Folder", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneFolderExtensions_eventRemoveChildMasterTrack_Parms, Folder), Z_Construct_UClass_UMovieSceneFolder_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildMasterTrack_Statics::NewProp_Folder_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildMasterTrack_Statics::NewProp_Folder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildMasterTrack_Statics::NewProp_InTrack_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildMasterTrack_Statics::NewProp_InTrack = { "InTrack", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneFolderExtensions_eventRemoveChildMasterTrack_Parms, InTrack), Z_Construct_UClass_UMovieSceneTrack_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildMasterTrack_Statics::NewProp_InTrack_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildMasterTrack_Statics::NewProp_InTrack_MetaData)) };
	void Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildMasterTrack_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieSceneFolderExtensions_eventRemoveChildMasterTrack_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildMasterTrack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MovieSceneFolderExtensions_eventRemoveChildMasterTrack_Parms), &Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildMasterTrack_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildMasterTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildMasterTrack_Statics::NewProp_Folder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildMasterTrack_Statics::NewProp_InTrack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildMasterTrack_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildMasterTrack_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "RemoveChildMasterTrack is deprecated. Please use RemoveChildTrack instead" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneFolderExtensions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildMasterTrack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneFolderExtensions, nullptr, "RemoveChildMasterTrack", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildMasterTrack_Statics::MovieSceneFolderExtensions_eventRemoveChildMasterTrack_Parms), Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildMasterTrack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildMasterTrack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildMasterTrack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildMasterTrack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildMasterTrack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildMasterTrack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildObjectBinding_Statics
	{
		struct MovieSceneFolderExtensions_eventRemoveChildObjectBinding_Parms
		{
			UMovieSceneFolder* Folder;
			FMovieSceneBindingProxy InObjectBinding;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Folder_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Folder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InObjectBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InObjectBinding;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildObjectBinding_Statics::NewProp_Folder_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildObjectBinding_Statics::NewProp_Folder = { "Folder", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneFolderExtensions_eventRemoveChildObjectBinding_Parms, Folder), Z_Construct_UClass_UMovieSceneFolder_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildObjectBinding_Statics::NewProp_Folder_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildObjectBinding_Statics::NewProp_Folder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildObjectBinding_Statics::NewProp_InObjectBinding_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildObjectBinding_Statics::NewProp_InObjectBinding = { "InObjectBinding", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneFolderExtensions_eventRemoveChildObjectBinding_Parms, InObjectBinding), Z_Construct_UScriptStruct_FMovieSceneBindingProxy, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildObjectBinding_Statics::NewProp_InObjectBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildObjectBinding_Statics::NewProp_InObjectBinding_MetaData)) }; // 716961670
	void Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildObjectBinding_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieSceneFolderExtensions_eventRemoveChildObjectBinding_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildObjectBinding_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MovieSceneFolderExtensions_eventRemoveChildObjectBinding_Parms), &Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildObjectBinding_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildObjectBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildObjectBinding_Statics::NewProp_Folder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildObjectBinding_Statics::NewProp_InObjectBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildObjectBinding_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildObjectBinding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/** \n\x09 * Remove an object binding from the given folder\n\x09 *\n\x09 * @param Folder\x09\x09\x09The folder from which to remove an object binding\n\x09 * @param InObjectBinding\x09The object binding to remove\n\x09 * @return True if the operation succeeds\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneFolderExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Remove an object binding from the given folder\n\n@param Folder                        The folder from which to remove an object binding\n@param InObjectBinding       The object binding to remove\n@return True if the operation succeeds" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildObjectBinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneFolderExtensions, nullptr, "RemoveChildObjectBinding", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildObjectBinding_Statics::MovieSceneFolderExtensions_eventRemoveChildObjectBinding_Parms), Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildObjectBinding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildObjectBinding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildObjectBinding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildObjectBinding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildObjectBinding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildObjectBinding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildTrack_Statics
	{
		struct MovieSceneFolderExtensions_eventRemoveChildTrack_Parms
		{
			UMovieSceneFolder* Folder;
			UMovieSceneTrack* InTrack;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Folder_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Folder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InTrack_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InTrack;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildTrack_Statics::NewProp_Folder_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildTrack_Statics::NewProp_Folder = { "Folder", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneFolderExtensions_eventRemoveChildTrack_Parms, Folder), Z_Construct_UClass_UMovieSceneFolder_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildTrack_Statics::NewProp_Folder_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildTrack_Statics::NewProp_Folder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildTrack_Statics::NewProp_InTrack_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildTrack_Statics::NewProp_InTrack = { "InTrack", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneFolderExtensions_eventRemoveChildTrack_Parms, InTrack), Z_Construct_UClass_UMovieSceneTrack_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildTrack_Statics::NewProp_InTrack_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildTrack_Statics::NewProp_InTrack_MetaData)) };
	void Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildTrack_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieSceneFolderExtensions_eventRemoveChildTrack_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildTrack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MovieSceneFolderExtensions_eventRemoveChildTrack_Parms), &Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildTrack_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildTrack_Statics::NewProp_Folder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildTrack_Statics::NewProp_InTrack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildTrack_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildTrack_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Remove a track from the given folder\n\x09 *\n\x09 * @param Folder\x09\x09\x09The folder from which to remove a track\n\x09 * @param InTrack\x09\x09    The track to remove\n\x09 * @return True if the removal succeeds\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneFolderExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Remove a track from the given folder\n\n@param Folder                        The folder from which to remove a track\n@param InTrack                   The track to remove\n@return True if the removal succeeds" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildTrack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneFolderExtensions, nullptr, "RemoveChildTrack", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildTrack_Statics::MovieSceneFolderExtensions_eventRemoveChildTrack_Parms), Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildTrack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildTrack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildTrack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildTrack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildTrack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildTrack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneFolderExtensions_SetFolderColor_Statics
	{
		struct MovieSceneFolderExtensions_eventSetFolderColor_Parms
		{
			UMovieSceneFolder* Folder;
			FColor InFolderColor;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Folder_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Folder;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InFolderColor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneFolderExtensions_SetFolderColor_Statics::NewProp_Folder_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneFolderExtensions_SetFolderColor_Statics::NewProp_Folder = { "Folder", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneFolderExtensions_eventSetFolderColor_Parms, Folder), Z_Construct_UClass_UMovieSceneFolder_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneFolderExtensions_SetFolderColor_Statics::NewProp_Folder_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneFolderExtensions_SetFolderColor_Statics::NewProp_Folder_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneFolderExtensions_SetFolderColor_Statics::NewProp_InFolderColor = { "InFolderColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneFolderExtensions_eventSetFolderColor_Parms, InFolderColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMovieSceneFolderExtensions_SetFolderColor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieSceneFolderExtensions_eventSetFolderColor_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneFolderExtensions_SetFolderColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MovieSceneFolderExtensions_eventSetFolderColor_Parms), &Z_Construct_UFunction_UMovieSceneFolderExtensions_SetFolderColor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneFolderExtensions_SetFolderColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneFolderExtensions_SetFolderColor_Statics::NewProp_Folder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneFolderExtensions_SetFolderColor_Statics::NewProp_InFolderColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneFolderExtensions_SetFolderColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneFolderExtensions_SetFolderColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Set the display color of the given folder\n\x09 *\n\x09 * @param Folder\x09\x09\x09The folder to set the display color of\n\x09 * @param InFolderColor\x09\x09The new display color for the folder\n\x09 * @return True if the folder's display color is set successfully\n\x09 */" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneFolderExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Set the display color of the given folder\n\n@param Folder                        The folder to set the display color of\n@param InFolderColor         The new display color for the folder\n@return True if the folder's display color is set successfully" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneFolderExtensions_SetFolderColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneFolderExtensions, nullptr, "SetFolderColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneFolderExtensions_SetFolderColor_Statics::MovieSceneFolderExtensions_eventSetFolderColor_Parms), Z_Construct_UFunction_UMovieSceneFolderExtensions_SetFolderColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneFolderExtensions_SetFolderColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneFolderExtensions_SetFolderColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneFolderExtensions_SetFolderColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneFolderExtensions_SetFolderColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneFolderExtensions_SetFolderColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneFolderExtensions_SetFolderName_Statics
	{
		struct MovieSceneFolderExtensions_eventSetFolderName_Parms
		{
			UMovieSceneFolder* Folder;
			FName InFolderName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Folder_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Folder;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InFolderName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneFolderExtensions_SetFolderName_Statics::NewProp_Folder_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneFolderExtensions_SetFolderName_Statics::NewProp_Folder = { "Folder", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneFolderExtensions_eventSetFolderName_Parms, Folder), Z_Construct_UClass_UMovieSceneFolder_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneFolderExtensions_SetFolderName_Statics::NewProp_Folder_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneFolderExtensions_SetFolderName_Statics::NewProp_Folder_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMovieSceneFolderExtensions_SetFolderName_Statics::NewProp_InFolderName = { "InFolderName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneFolderExtensions_eventSetFolderName_Parms, InFolderName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMovieSceneFolderExtensions_SetFolderName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieSceneFolderExtensions_eventSetFolderName_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneFolderExtensions_SetFolderName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MovieSceneFolderExtensions_eventSetFolderName_Parms), &Z_Construct_UFunction_UMovieSceneFolderExtensions_SetFolderName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneFolderExtensions_SetFolderName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneFolderExtensions_SetFolderName_Statics::NewProp_Folder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneFolderExtensions_SetFolderName_Statics::NewProp_InFolderName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneFolderExtensions_SetFolderName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneFolderExtensions_SetFolderName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Set the name of the given folder\n\x09 *\n\x09 * @param Folder\x09\x09The folder to set the name of\n\x09 * @param InFolderName\x09The new name for the folder\n\x09 * @return True if the setting of the folder name succeeds\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneFolderExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Set the name of the given folder\n\n@param Folder                The folder to set the name of\n@param InFolderName  The new name for the folder\n@return True if the setting of the folder name succeeds" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneFolderExtensions_SetFolderName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneFolderExtensions, nullptr, "SetFolderName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneFolderExtensions_SetFolderName_Statics::MovieSceneFolderExtensions_eventSetFolderName_Parms), Z_Construct_UFunction_UMovieSceneFolderExtensions_SetFolderName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneFolderExtensions_SetFolderName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneFolderExtensions_SetFolderName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneFolderExtensions_SetFolderName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneFolderExtensions_SetFolderName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneFolderExtensions_SetFolderName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneFolderExtensions);
	UClass* Z_Construct_UClass_UMovieSceneFolderExtensions_NoRegister()
	{
		return UMovieSceneFolderExtensions::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneFolderExtensions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneFolderExtensions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SequencerScripting,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMovieSceneFolderExtensions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildFolder, "AddChildFolder" }, // 4107090030
		{ &Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildMasterTrack, "AddChildMasterTrack" }, // 190171764
		{ &Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildObjectBinding, "AddChildObjectBinding" }, // 2268234813
		{ &Z_Construct_UFunction_UMovieSceneFolderExtensions_AddChildTrack, "AddChildTrack" }, // 2368809129
		{ &Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildFolders, "GetChildFolders" }, // 3550794546
		{ &Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildMasterTracks, "GetChildMasterTracks" }, // 3473563366
		{ &Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildObjectBindings, "GetChildObjectBindings" }, // 2337997775
		{ &Z_Construct_UFunction_UMovieSceneFolderExtensions_GetChildTracks, "GetChildTracks" }, // 3792262789
		{ &Z_Construct_UFunction_UMovieSceneFolderExtensions_GetFolderColor, "GetFolderColor" }, // 3000999369
		{ &Z_Construct_UFunction_UMovieSceneFolderExtensions_GetFolderName, "GetFolderName" }, // 3378054348
		{ &Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildFolder, "RemoveChildFolder" }, // 293290317
		{ &Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildMasterTrack, "RemoveChildMasterTrack" }, // 4288045313
		{ &Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildObjectBinding, "RemoveChildObjectBinding" }, // 1276229371
		{ &Z_Construct_UFunction_UMovieSceneFolderExtensions_RemoveChildTrack, "RemoveChildTrack" }, // 714603013
		{ &Z_Construct_UFunction_UMovieSceneFolderExtensions_SetFolderColor, "SetFolderColor" }, // 3584600278
		{ &Z_Construct_UFunction_UMovieSceneFolderExtensions_SetFolderName, "SetFolderName" }, // 2235349476
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneFolderExtensions_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Function library containing methods that should be hoisted onto UMovieSceneFolders for scripting\n */" },
		{ "IncludePath", "ExtensionLibraries/MovieSceneFolderExtensions.h" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneFolderExtensions.h" },
		{ "ToolTip", "Function library containing methods that should be hoisted onto UMovieSceneFolders for scripting" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneFolderExtensions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneFolderExtensions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneFolderExtensions_Statics::ClassParams = {
		&UMovieSceneFolderExtensions::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneFolderExtensions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneFolderExtensions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneFolderExtensions()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneFolderExtensions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneFolderExtensions.OuterSingleton, Z_Construct_UClass_UMovieSceneFolderExtensions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneFolderExtensions.OuterSingleton;
	}
	template<> SEQUENCERSCRIPTING_API UClass* StaticClass<UMovieSceneFolderExtensions>()
	{
		return UMovieSceneFolderExtensions::StaticClass();
	}
	UMovieSceneFolderExtensions::UMovieSceneFolderExtensions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneFolderExtensions);
	UMovieSceneFolderExtensions::~UMovieSceneFolderExtensions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneFolderExtensions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneFolderExtensions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneFolderExtensions, UMovieSceneFolderExtensions::StaticClass, TEXT("UMovieSceneFolderExtensions"), &Z_Registration_Info_UClass_UMovieSceneFolderExtensions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneFolderExtensions), 2656130208U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneFolderExtensions_h_4074044653(TEXT("/Script/SequencerScripting"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneFolderExtensions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneFolderExtensions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
