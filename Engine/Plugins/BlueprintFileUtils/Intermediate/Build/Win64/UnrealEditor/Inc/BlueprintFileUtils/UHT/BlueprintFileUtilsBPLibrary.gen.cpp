// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintFileUtilsBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintFileUtilsBPLibrary() {}
// Cross Module References
	BLUEPRINTFILEUTILS_API UClass* Z_Construct_UClass_UBlueprintFileUtilsBPLibrary();
	BLUEPRINTFILEUTILS_API UClass* Z_Construct_UClass_UBlueprintFileUtilsBPLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_BlueprintFileUtils();
// End Cross Module References
	DEFINE_FUNCTION(UBlueprintFileUtilsBPLibrary::execGetUserDirectory)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UBlueprintFileUtilsBPLibrary::GetUserDirectory();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintFileUtilsBPLibrary::execMoveFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DestFilename);
		P_GET_PROPERTY(FStrProperty,Z_Param_SrcFilename);
		P_GET_UBOOL(Z_Param_bReplace);
		P_GET_UBOOL(Z_Param_bEvenIfReadOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBlueprintFileUtilsBPLibrary::MoveFile(Z_Param_DestFilename,Z_Param_SrcFilename,Z_Param_bReplace,Z_Param_bEvenIfReadOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintFileUtilsBPLibrary::execCopyFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DestFilename);
		P_GET_PROPERTY(FStrProperty,Z_Param_SrcFilename);
		P_GET_UBOOL(Z_Param_bReplace);
		P_GET_UBOOL(Z_Param_bEvenIfReadOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBlueprintFileUtilsBPLibrary::CopyFile(Z_Param_DestFilename,Z_Param_SrcFilename,Z_Param_bReplace,Z_Param_bEvenIfReadOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintFileUtilsBPLibrary::execDeleteFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
		P_GET_UBOOL(Z_Param_bMustExist);
		P_GET_UBOOL(Z_Param_bEvenIfReadOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBlueprintFileUtilsBPLibrary::DeleteFile(Z_Param_Filename,Z_Param_bMustExist,Z_Param_bEvenIfReadOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintFileUtilsBPLibrary::execDeleteDirectory)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Directory);
		P_GET_UBOOL(Z_Param_bMustExist);
		P_GET_UBOOL(Z_Param_bDeleteRecursively);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBlueprintFileUtilsBPLibrary::DeleteDirectory(Z_Param_Directory,Z_Param_bMustExist,Z_Param_bDeleteRecursively);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintFileUtilsBPLibrary::execMakeDirectory)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_GET_UBOOL(Z_Param_bCreateTree);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBlueprintFileUtilsBPLibrary::MakeDirectory(Z_Param_Path,Z_Param_bCreateTree);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintFileUtilsBPLibrary::execDirectoryExists)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Directory);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBlueprintFileUtilsBPLibrary::DirectoryExists(Z_Param_Directory);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintFileUtilsBPLibrary::execFileExists)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBlueprintFileUtilsBPLibrary::FileExists(Z_Param_Filename);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintFileUtilsBPLibrary::execFindRecursive)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_StartDirectory);
		P_GET_TARRAY_REF(FString,Z_Param_Out_FoundPaths);
		P_GET_PROPERTY(FStrProperty,Z_Param_Wildcard);
		P_GET_UBOOL(Z_Param_bFindFiles);
		P_GET_UBOOL(Z_Param_bFindDirectories);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBlueprintFileUtilsBPLibrary::FindRecursive(Z_Param_StartDirectory,Z_Param_Out_FoundPaths,Z_Param_Wildcard,Z_Param_bFindFiles,Z_Param_bFindDirectories);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintFileUtilsBPLibrary::execFindFiles)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Directory);
		P_GET_TARRAY_REF(FString,Z_Param_Out_FoundFiles);
		P_GET_PROPERTY(FStrProperty,Z_Param_FileExtension);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBlueprintFileUtilsBPLibrary::FindFiles(Z_Param_Directory,Z_Param_Out_FoundFiles,Z_Param_FileExtension);
		P_NATIVE_END;
	}
	void UBlueprintFileUtilsBPLibrary::StaticRegisterNativesUBlueprintFileUtilsBPLibrary()
	{
		UClass* Class = UBlueprintFileUtilsBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CopyFile", &UBlueprintFileUtilsBPLibrary::execCopyFile },
			{ "DeleteDirectory", &UBlueprintFileUtilsBPLibrary::execDeleteDirectory },
			{ "DeleteFile", &UBlueprintFileUtilsBPLibrary::execDeleteFile },
			{ "DirectoryExists", &UBlueprintFileUtilsBPLibrary::execDirectoryExists },
			{ "FileExists", &UBlueprintFileUtilsBPLibrary::execFileExists },
			{ "FindFiles", &UBlueprintFileUtilsBPLibrary::execFindFiles },
			{ "FindRecursive", &UBlueprintFileUtilsBPLibrary::execFindRecursive },
			{ "GetUserDirectory", &UBlueprintFileUtilsBPLibrary::execGetUserDirectory },
			{ "MakeDirectory", &UBlueprintFileUtilsBPLibrary::execMakeDirectory },
			{ "MoveFile", &UBlueprintFileUtilsBPLibrary::execMoveFile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_CopyFile_Statics
	{
		struct BlueprintFileUtilsBPLibrary_eventCopyFile_Parms
		{
			FString DestFilename;
			FString SrcFilename;
			bool bReplace;
			bool bEvenIfReadOnly;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestFilename_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DestFilename;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SrcFilename_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SrcFilename;
		static void NewProp_bReplace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReplace;
		static void NewProp_bEvenIfReadOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEvenIfReadOnly;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_CopyFile_Statics::NewProp_DestFilename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_CopyFile_Statics::NewProp_DestFilename = { "DestFilename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintFileUtilsBPLibrary_eventCopyFile_Parms, DestFilename), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_CopyFile_Statics::NewProp_DestFilename_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_CopyFile_Statics::NewProp_DestFilename_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_CopyFile_Statics::NewProp_SrcFilename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_CopyFile_Statics::NewProp_SrcFilename = { "SrcFilename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintFileUtilsBPLibrary_eventCopyFile_Parms, SrcFilename), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_CopyFile_Statics::NewProp_SrcFilename_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_CopyFile_Statics::NewProp_SrcFilename_MetaData)) };
	void Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_CopyFile_Statics::NewProp_bReplace_SetBit(void* Obj)
	{
		((BlueprintFileUtilsBPLibrary_eventCopyFile_Parms*)Obj)->bReplace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_CopyFile_Statics::NewProp_bReplace = { "bReplace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BlueprintFileUtilsBPLibrary_eventCopyFile_Parms), &Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_CopyFile_Statics::NewProp_bReplace_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_CopyFile_Statics::NewProp_bEvenIfReadOnly_SetBit(void* Obj)
	{
		((BlueprintFileUtilsBPLibrary_eventCopyFile_Parms*)Obj)->bEvenIfReadOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_CopyFile_Statics::NewProp_bEvenIfReadOnly = { "bEvenIfReadOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BlueprintFileUtilsBPLibrary_eventCopyFile_Parms), &Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_CopyFile_Statics::NewProp_bEvenIfReadOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_CopyFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlueprintFileUtilsBPLibrary_eventCopyFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_CopyFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BlueprintFileUtilsBPLibrary_eventCopyFile_Parms), &Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_CopyFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_CopyFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_CopyFile_Statics::NewProp_DestFilename,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_CopyFile_Statics::NewProp_SrcFilename,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_CopyFile_Statics::NewProp_bReplace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_CopyFile_Statics::NewProp_bEvenIfReadOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_CopyFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_CopyFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "FileUtils" },
		{ "Comment", "/** Copies a file. */" },
		{ "CPP_Default_bEvenIfReadOnly", "false" },
		{ "CPP_Default_bReplace", "true" },
		{ "ModuleRelativePath", "Public/BlueprintFileUtilsBPLibrary.h" },
		{ "ToolTip", "Copies a file." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_CopyFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintFileUtilsBPLibrary, nullptr, "CopyFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_CopyFile_Statics::BlueprintFileUtilsBPLibrary_eventCopyFile_Parms), Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_CopyFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_CopyFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_CopyFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_CopyFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_CopyFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_CopyFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_DeleteDirectory_Statics
	{
		struct BlueprintFileUtilsBPLibrary_eventDeleteDirectory_Parms
		{
			FString Directory;
			bool bMustExist;
			bool bDeleteRecursively;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Directory_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Directory;
		static void NewProp_bMustExist_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMustExist;
		static void NewProp_bDeleteRecursively_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeleteRecursively;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_DeleteDirectory_Statics::NewProp_Directory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_DeleteDirectory_Statics::NewProp_Directory = { "Directory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintFileUtilsBPLibrary_eventDeleteDirectory_Parms, Directory), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_DeleteDirectory_Statics::NewProp_Directory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_DeleteDirectory_Statics::NewProp_Directory_MetaData)) };
	void Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_DeleteDirectory_Statics::NewProp_bMustExist_SetBit(void* Obj)
	{
		((BlueprintFileUtilsBPLibrary_eventDeleteDirectory_Parms*)Obj)->bMustExist = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_DeleteDirectory_Statics::NewProp_bMustExist = { "bMustExist", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BlueprintFileUtilsBPLibrary_eventDeleteDirectory_Parms), &Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_DeleteDirectory_Statics::NewProp_bMustExist_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_DeleteDirectory_Statics::NewProp_bDeleteRecursively_SetBit(void* Obj)
	{
		((BlueprintFileUtilsBPLibrary_eventDeleteDirectory_Parms*)Obj)->bDeleteRecursively = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_DeleteDirectory_Statics::NewProp_bDeleteRecursively = { "bDeleteRecursively", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BlueprintFileUtilsBPLibrary_eventDeleteDirectory_Parms), &Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_DeleteDirectory_Statics::NewProp_bDeleteRecursively_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_DeleteDirectory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlueprintFileUtilsBPLibrary_eventDeleteDirectory_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_DeleteDirectory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BlueprintFileUtilsBPLibrary_eventDeleteDirectory_Parms), &Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_DeleteDirectory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_DeleteDirectory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_DeleteDirectory_Statics::NewProp_Directory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_DeleteDirectory_Statics::NewProp_bMustExist,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_DeleteDirectory_Statics::NewProp_bDeleteRecursively,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_DeleteDirectory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_DeleteDirectory_Statics::Function_MetaDataParams[] = {
		{ "Category", "FileUtils" },
		{ "Comment", "/**\n\x09 * Deletes a directory and all the files in it and optionally all sub-directories and files within it\n\x09 *\n\x09 * @param Directory\x09\x09\x09\x09The Directory to delete\n\x09 * @param bMustExist\x09\x09\x09If true, the directory must exist or the return value will be false\n\x09 * @param bDeleteRecursively\x09If true, all sub-directories will be deleted as well.  \n\x09\x09\x09\x09\x09\x09\x09\x09\x09If false and there are contents in the directory, the delete operation will fail.\n\x09 * @return\x09\x09\x09\x09\x09\x09true if the directory was succesfully deleted, false otherwise\n\x09 */" },
		{ "CPP_Default_bDeleteRecursively", "false" },
		{ "CPP_Default_bMustExist", "false" },
		{ "ModuleRelativePath", "Public/BlueprintFileUtilsBPLibrary.h" },
		{ "ToolTip", "Deletes a directory and all the files in it and optionally all sub-directories and files within it\n\n@param Directory                             The Directory to delete\n@param bMustExist                    If true, the directory must exist or the return value will be false\n@param bDeleteRecursively    If true, all sub-directories will be deleted as well.\n                                                                       If false and there are contents in the directory, the delete operation will fail.\n@return                                              true if the directory was succesfully deleted, false otherwise" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_DeleteDirectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintFileUtilsBPLibrary, nullptr, "DeleteDirectory", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_DeleteDirectory_Statics::BlueprintFileUtilsBPLibrary_eventDeleteDirectory_Parms), Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_DeleteDirectory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_DeleteDirectory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_DeleteDirectory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_DeleteDirectory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_DeleteDirectory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_DeleteDirectory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_DeleteFile_Statics
	{
		struct BlueprintFileUtilsBPLibrary_eventDeleteFile_Parms
		{
			FString Filename;
			bool bMustExist;
			bool bEvenIfReadOnly;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
		static void NewProp_bMustExist_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMustExist;
		static void NewProp_bEvenIfReadOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEvenIfReadOnly;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_DeleteFile_Statics::NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_DeleteFile_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintFileUtilsBPLibrary_eventDeleteFile_Parms, Filename), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_DeleteFile_Statics::NewProp_Filename_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_DeleteFile_Statics::NewProp_Filename_MetaData)) };
	void Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_DeleteFile_Statics::NewProp_bMustExist_SetBit(void* Obj)
	{
		((BlueprintFileUtilsBPLibrary_eventDeleteFile_Parms*)Obj)->bMustExist = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_DeleteFile_Statics::NewProp_bMustExist = { "bMustExist", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BlueprintFileUtilsBPLibrary_eventDeleteFile_Parms), &Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_DeleteFile_Statics::NewProp_bMustExist_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_DeleteFile_Statics::NewProp_bEvenIfReadOnly_SetBit(void* Obj)
	{
		((BlueprintFileUtilsBPLibrary_eventDeleteFile_Parms*)Obj)->bEvenIfReadOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_DeleteFile_Statics::NewProp_bEvenIfReadOnly = { "bEvenIfReadOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BlueprintFileUtilsBPLibrary_eventDeleteFile_Parms), &Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_DeleteFile_Statics::NewProp_bEvenIfReadOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_DeleteFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlueprintFileUtilsBPLibrary_eventDeleteFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_DeleteFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BlueprintFileUtilsBPLibrary_eventDeleteFile_Parms), &Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_DeleteFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_DeleteFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_DeleteFile_Statics::NewProp_Filename,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_DeleteFile_Statics::NewProp_bMustExist,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_DeleteFile_Statics::NewProp_bEvenIfReadOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_DeleteFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_DeleteFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "FileUtils" },
		{ "Comment", "/** Deletes a file. */" },
		{ "CPP_Default_bEvenIfReadOnly", "false" },
		{ "CPP_Default_bMustExist", "false" },
		{ "ModuleRelativePath", "Public/BlueprintFileUtilsBPLibrary.h" },
		{ "ToolTip", "Deletes a file." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_DeleteFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintFileUtilsBPLibrary, nullptr, "DeleteFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_DeleteFile_Statics::BlueprintFileUtilsBPLibrary_eventDeleteFile_Parms), Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_DeleteFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_DeleteFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_DeleteFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_DeleteFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_DeleteFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_DeleteFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_DirectoryExists_Statics
	{
		struct BlueprintFileUtilsBPLibrary_eventDirectoryExists_Parms
		{
			FString Directory;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Directory_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Directory;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_DirectoryExists_Statics::NewProp_Directory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_DirectoryExists_Statics::NewProp_Directory = { "Directory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintFileUtilsBPLibrary_eventDirectoryExists_Parms, Directory), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_DirectoryExists_Statics::NewProp_Directory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_DirectoryExists_Statics::NewProp_Directory_MetaData)) };
	void Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_DirectoryExists_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlueprintFileUtilsBPLibrary_eventDirectoryExists_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_DirectoryExists_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BlueprintFileUtilsBPLibrary_eventDirectoryExists_Parms), &Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_DirectoryExists_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_DirectoryExists_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_DirectoryExists_Statics::NewProp_Directory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_DirectoryExists_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_DirectoryExists_Statics::Function_MetaDataParams[] = {
		{ "Category", "FileUtils" },
		{ "Comment", "/**\n\x09 * Checks if a directory exists\n\x09 *\n\x09 * @param Directory\x09\x09The directory path to check\n\x09 * @return\x09\x09\x09\x09true if Directory exists, false otherwise\n\x09 */" },
		{ "ModuleRelativePath", "Public/BlueprintFileUtilsBPLibrary.h" },
		{ "ToolTip", "Checks if a directory exists\n\n@param Directory             The directory path to check\n@return                              true if Directory exists, false otherwise" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_DirectoryExists_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintFileUtilsBPLibrary, nullptr, "DirectoryExists", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_DirectoryExists_Statics::BlueprintFileUtilsBPLibrary_eventDirectoryExists_Parms), Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_DirectoryExists_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_DirectoryExists_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_DirectoryExists_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_DirectoryExists_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_DirectoryExists()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_DirectoryExists_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_FileExists_Statics
	{
		struct BlueprintFileUtilsBPLibrary_eventFileExists_Parms
		{
			FString Filename;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_FileExists_Statics::NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_FileExists_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintFileUtilsBPLibrary_eventFileExists_Parms, Filename), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_FileExists_Statics::NewProp_Filename_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_FileExists_Statics::NewProp_Filename_MetaData)) };
	void Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_FileExists_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlueprintFileUtilsBPLibrary_eventFileExists_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_FileExists_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BlueprintFileUtilsBPLibrary_eventFileExists_Parms), &Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_FileExists_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_FileExists_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_FileExists_Statics::NewProp_Filename,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_FileExists_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_FileExists_Statics::Function_MetaDataParams[] = {
		{ "Category", "FileUtils" },
		{ "Comment", "/** \n\x09 * Checks if a file exists\n\x09 * \n\x09 * @param Filename\x09The filename to check \n\x09 * @return\x09\x09\x09true if Filename exists, false otherwise\n\x09 */" },
		{ "ModuleRelativePath", "Public/BlueprintFileUtilsBPLibrary.h" },
		{ "ToolTip", "Checks if a file exists\n\n@param Filename      The filename to check\n@return                      true if Filename exists, false otherwise" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_FileExists_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintFileUtilsBPLibrary, nullptr, "FileExists", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_FileExists_Statics::BlueprintFileUtilsBPLibrary_eventFileExists_Parms), Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_FileExists_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_FileExists_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_FileExists_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_FileExists_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_FileExists()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_FileExists_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_FindFiles_Statics
	{
		struct BlueprintFileUtilsBPLibrary_eventFindFiles_Parms
		{
			FString Directory;
			TArray<FString> FoundFiles;
			FString FileExtension;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Directory_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Directory;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FoundFiles_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FoundFiles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileExtension_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileExtension;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_FindFiles_Statics::NewProp_Directory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_FindFiles_Statics::NewProp_Directory = { "Directory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintFileUtilsBPLibrary_eventFindFiles_Parms, Directory), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_FindFiles_Statics::NewProp_Directory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_FindFiles_Statics::NewProp_Directory_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_FindFiles_Statics::NewProp_FoundFiles_Inner = { "FoundFiles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_FindFiles_Statics::NewProp_FoundFiles = { "FoundFiles", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintFileUtilsBPLibrary_eventFindFiles_Parms, FoundFiles), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_FindFiles_Statics::NewProp_FileExtension_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_FindFiles_Statics::NewProp_FileExtension = { "FileExtension", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintFileUtilsBPLibrary_eventFindFiles_Parms, FileExtension), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_FindFiles_Statics::NewProp_FileExtension_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_FindFiles_Statics::NewProp_FileExtension_MetaData)) };
	void Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_FindFiles_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlueprintFileUtilsBPLibrary_eventFindFiles_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_FindFiles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BlueprintFileUtilsBPLibrary_eventFindFiles_Parms), &Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_FindFiles_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_FindFiles_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_FindFiles_Statics::NewProp_Directory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_FindFiles_Statics::NewProp_FoundFiles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_FindFiles_Statics::NewProp_FoundFiles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_FindFiles_Statics::NewProp_FileExtension,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_FindFiles_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_FindFiles_Statics::Function_MetaDataParams[] = {
		{ "Category", "FileUtils" },
		{ "Comment", "/**\n\x09 * Finds all the files within the given directory, with optional file extension filter.\n\x09 *\n\x09 * @param Directory\x09\x09The absolute path to the directory to search. Ex: \"C:\\UnrealEditor\\Pictures\"\n\x09 * @param FoundFiles\x09""All the files found that matched the optional FileExtension filter, or all files if none was specified.\n\x09 * @param FileExtension\x09If FileExtension is empty string \"\" then all files are found.\n\x09 * \x09\x09\x09\x09\x09\x09Otherwise FileExtension can be of the form .EXT or just EXT and only files with that extension will be returned.\n\x09 * @return\x09\x09\x09\x09true if anything was found, false otherwise\n\x09 */" },
		{ "CPP_Default_FileExtension", "" },
		{ "ModuleRelativePath", "Public/BlueprintFileUtilsBPLibrary.h" },
		{ "ToolTip", "Finds all the files within the given directory, with optional file extension filter.\n\n@param Directory             The absolute path to the directory to search. Ex: \"C:\\UnrealEditor\\Pictures\"\n@param FoundFiles    All the files found that matched the optional FileExtension filter, or all files if none was specified.\n@param FileExtension If FileExtension is empty string \"\" then all files are found.\n                                             Otherwise FileExtension can be of the form .EXT or just EXT and only files with that extension will be returned.\n@return                              true if anything was found, false otherwise" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_FindFiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintFileUtilsBPLibrary, nullptr, "FindFiles", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_FindFiles_Statics::BlueprintFileUtilsBPLibrary_eventFindFiles_Parms), Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_FindFiles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_FindFiles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_FindFiles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_FindFiles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_FindFiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_FindFiles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_FindRecursive_Statics
	{
		struct BlueprintFileUtilsBPLibrary_eventFindRecursive_Parms
		{
			FString StartDirectory;
			TArray<FString> FoundPaths;
			FString Wildcard;
			bool bFindFiles;
			bool bFindDirectories;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartDirectory_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StartDirectory;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FoundPaths_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FoundPaths;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Wildcard_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Wildcard;
		static void NewProp_bFindFiles_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFindFiles;
		static void NewProp_bFindDirectories_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFindDirectories;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_FindRecursive_Statics::NewProp_StartDirectory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_FindRecursive_Statics::NewProp_StartDirectory = { "StartDirectory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintFileUtilsBPLibrary_eventFindRecursive_Parms, StartDirectory), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_FindRecursive_Statics::NewProp_StartDirectory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_FindRecursive_Statics::NewProp_StartDirectory_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_FindRecursive_Statics::NewProp_FoundPaths_Inner = { "FoundPaths", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_FindRecursive_Statics::NewProp_FoundPaths = { "FoundPaths", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintFileUtilsBPLibrary_eventFindRecursive_Parms, FoundPaths), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_FindRecursive_Statics::NewProp_Wildcard_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_FindRecursive_Statics::NewProp_Wildcard = { "Wildcard", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintFileUtilsBPLibrary_eventFindRecursive_Parms, Wildcard), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_FindRecursive_Statics::NewProp_Wildcard_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_FindRecursive_Statics::NewProp_Wildcard_MetaData)) };
	void Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_FindRecursive_Statics::NewProp_bFindFiles_SetBit(void* Obj)
	{
		((BlueprintFileUtilsBPLibrary_eventFindRecursive_Parms*)Obj)->bFindFiles = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_FindRecursive_Statics::NewProp_bFindFiles = { "bFindFiles", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BlueprintFileUtilsBPLibrary_eventFindRecursive_Parms), &Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_FindRecursive_Statics::NewProp_bFindFiles_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_FindRecursive_Statics::NewProp_bFindDirectories_SetBit(void* Obj)
	{
		((BlueprintFileUtilsBPLibrary_eventFindRecursive_Parms*)Obj)->bFindDirectories = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_FindRecursive_Statics::NewProp_bFindDirectories = { "bFindDirectories", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BlueprintFileUtilsBPLibrary_eventFindRecursive_Parms), &Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_FindRecursive_Statics::NewProp_bFindDirectories_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_FindRecursive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlueprintFileUtilsBPLibrary_eventFindRecursive_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_FindRecursive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BlueprintFileUtilsBPLibrary_eventFindRecursive_Parms), &Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_FindRecursive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_FindRecursive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_FindRecursive_Statics::NewProp_StartDirectory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_FindRecursive_Statics::NewProp_FoundPaths_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_FindRecursive_Statics::NewProp_FoundPaths,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_FindRecursive_Statics::NewProp_Wildcard,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_FindRecursive_Statics::NewProp_bFindFiles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_FindRecursive_Statics::NewProp_bFindDirectories,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_FindRecursive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_FindRecursive_Statics::Function_MetaDataParams[] = {
		{ "Category", "FileUtils" },
		{ "Comment", "/**\n\x09 * Finds all the files and/or directories within the given directory and any sub-directories.  Files can be found with anoptional file extension filter.\n\x09 *\n\x09 * @param StartDirectory\x09The absolute path to the directory to start the search. Ex: \"C:\\UnrealEditor\\Pictures\"\n\x09 * @param FoundPaths\x09\x09""All the paths (directories and/or files) found\n\x09 * @param Wildcard\x09\x09\x09Wildcard that can be used to find files or directories with specific text in their name.  \n\x09\x09\x09\x09\x09\x09\x09\x09""E.g *.png to find all files ending with the png extension, *images* to find anything with the word \"images\" in it\n\x09 * \x09\x09\x09\x09\x09\x09\x09Otherwise FileExtension can be of the form .EXT or just EXT and only files with that extension will be returned.\n\x09 *\x09\x09\x09\x09\x09\x09\x09""Does not apply to directories\n\x09 * @param bFindFiles\x09\x09Whether or not to find files\n\x09 * @param bFindDirectories\x09Whether or not to find directories\n\x09 * @return\x09\x09\x09\x09\x09true if anything was found, false otherwise\n\x09 */" },
		{ "CPP_Default_bFindDirectories", "false" },
		{ "CPP_Default_bFindFiles", "true" },
		{ "CPP_Default_Wildcard", "" },
		{ "ModuleRelativePath", "Public/BlueprintFileUtilsBPLibrary.h" },
		{ "ToolTip", "Finds all the files and/or directories within the given directory and any sub-directories.  Files can be found with anoptional file extension filter.\n\n@param StartDirectory        The absolute path to the directory to start the search. Ex: \"C:\\UnrealEditor\\Pictures\"\n@param FoundPaths            All the paths (directories and/or files) found\n@param Wildcard                      Wildcard that can be used to find files or directories with specific text in their name.\n                                                               E.g *.png to find all files ending with the png extension, *images* to find anything with the word \"images\" in it\n                                                     Otherwise FileExtension can be of the form .EXT or just EXT and only files with that extension will be returned.\n                                                     Does not apply to directories\n@param bFindFiles            Whether or not to find files\n@param bFindDirectories      Whether or not to find directories\n@return                                      true if anything was found, false otherwise" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_FindRecursive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintFileUtilsBPLibrary, nullptr, "FindRecursive", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_FindRecursive_Statics::BlueprintFileUtilsBPLibrary_eventFindRecursive_Parms), Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_FindRecursive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_FindRecursive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_FindRecursive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_FindRecursive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_FindRecursive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_FindRecursive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_GetUserDirectory_Statics
	{
		struct BlueprintFileUtilsBPLibrary_eventGetUserDirectory_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_GetUserDirectory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintFileUtilsBPLibrary_eventGetUserDirectory_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_GetUserDirectory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_GetUserDirectory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_GetUserDirectory_Statics::Function_MetaDataParams[] = {
		{ "Category", "FileUtils" },
		{ "Comment", "/** Get the users directory.  Platform specific (usually something like MyDocuments or the users home directory */" },
		{ "ModuleRelativePath", "Public/BlueprintFileUtilsBPLibrary.h" },
		{ "ToolTip", "Get the users directory.  Platform specific (usually something like MyDocuments or the users home directory" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_GetUserDirectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintFileUtilsBPLibrary, nullptr, "GetUserDirectory", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_GetUserDirectory_Statics::BlueprintFileUtilsBPLibrary_eventGetUserDirectory_Parms), Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_GetUserDirectory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_GetUserDirectory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_GetUserDirectory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_GetUserDirectory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_GetUserDirectory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_GetUserDirectory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_MakeDirectory_Statics
	{
		struct BlueprintFileUtilsBPLibrary_eventMakeDirectory_Parms
		{
			FString Path;
			bool bCreateTree;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
		static void NewProp_bCreateTree_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateTree;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_MakeDirectory_Statics::NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_MakeDirectory_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintFileUtilsBPLibrary_eventMakeDirectory_Parms, Path), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_MakeDirectory_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_MakeDirectory_Statics::NewProp_Path_MetaData)) };
	void Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_MakeDirectory_Statics::NewProp_bCreateTree_SetBit(void* Obj)
	{
		((BlueprintFileUtilsBPLibrary_eventMakeDirectory_Parms*)Obj)->bCreateTree = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_MakeDirectory_Statics::NewProp_bCreateTree = { "bCreateTree", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BlueprintFileUtilsBPLibrary_eventMakeDirectory_Parms), &Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_MakeDirectory_Statics::NewProp_bCreateTree_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_MakeDirectory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlueprintFileUtilsBPLibrary_eventMakeDirectory_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_MakeDirectory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BlueprintFileUtilsBPLibrary_eventMakeDirectory_Parms), &Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_MakeDirectory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_MakeDirectory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_MakeDirectory_Statics::NewProp_Path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_MakeDirectory_Statics::NewProp_bCreateTree,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_MakeDirectory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_MakeDirectory_Statics::Function_MetaDataParams[] = {
		{ "Category", "FileUtils" },
		{ "Comment", "/**\n\x09 * Makes a new directory, and optionally sub-directories\n\x09 *\n\x09 * @param Path\x09\x09\x09The directory path to make\n\x09 * @param bCreateTree\x09If true, the entire directory tree will be created if it doesnt exist.  Otherwise only the leaft most directory will be created if possible\n\x09 * @return\x09\x09\x09\x09true if the directory was created, false otherwise\n\x09 */" },
		{ "CPP_Default_bCreateTree", "false" },
		{ "ModuleRelativePath", "Public/BlueprintFileUtilsBPLibrary.h" },
		{ "ToolTip", "Makes a new directory, and optionally sub-directories\n\n@param Path                  The directory path to make\n@param bCreateTree   If true, the entire directory tree will be created if it doesnt exist.  Otherwise only the leaft most directory will be created if possible\n@return                              true if the directory was created, false otherwise" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_MakeDirectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintFileUtilsBPLibrary, nullptr, "MakeDirectory", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_MakeDirectory_Statics::BlueprintFileUtilsBPLibrary_eventMakeDirectory_Parms), Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_MakeDirectory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_MakeDirectory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_MakeDirectory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_MakeDirectory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_MakeDirectory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_MakeDirectory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_MoveFile_Statics
	{
		struct BlueprintFileUtilsBPLibrary_eventMoveFile_Parms
		{
			FString DestFilename;
			FString SrcFilename;
			bool bReplace;
			bool bEvenIfReadOnly;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestFilename_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DestFilename;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SrcFilename_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SrcFilename;
		static void NewProp_bReplace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReplace;
		static void NewProp_bEvenIfReadOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEvenIfReadOnly;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_MoveFile_Statics::NewProp_DestFilename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_MoveFile_Statics::NewProp_DestFilename = { "DestFilename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintFileUtilsBPLibrary_eventMoveFile_Parms, DestFilename), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_MoveFile_Statics::NewProp_DestFilename_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_MoveFile_Statics::NewProp_DestFilename_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_MoveFile_Statics::NewProp_SrcFilename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_MoveFile_Statics::NewProp_SrcFilename = { "SrcFilename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintFileUtilsBPLibrary_eventMoveFile_Parms, SrcFilename), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_MoveFile_Statics::NewProp_SrcFilename_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_MoveFile_Statics::NewProp_SrcFilename_MetaData)) };
	void Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_MoveFile_Statics::NewProp_bReplace_SetBit(void* Obj)
	{
		((BlueprintFileUtilsBPLibrary_eventMoveFile_Parms*)Obj)->bReplace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_MoveFile_Statics::NewProp_bReplace = { "bReplace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BlueprintFileUtilsBPLibrary_eventMoveFile_Parms), &Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_MoveFile_Statics::NewProp_bReplace_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_MoveFile_Statics::NewProp_bEvenIfReadOnly_SetBit(void* Obj)
	{
		((BlueprintFileUtilsBPLibrary_eventMoveFile_Parms*)Obj)->bEvenIfReadOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_MoveFile_Statics::NewProp_bEvenIfReadOnly = { "bEvenIfReadOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BlueprintFileUtilsBPLibrary_eventMoveFile_Parms), &Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_MoveFile_Statics::NewProp_bEvenIfReadOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_MoveFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlueprintFileUtilsBPLibrary_eventMoveFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_MoveFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BlueprintFileUtilsBPLibrary_eventMoveFile_Parms), &Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_MoveFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_MoveFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_MoveFile_Statics::NewProp_DestFilename,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_MoveFile_Statics::NewProp_SrcFilename,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_MoveFile_Statics::NewProp_bReplace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_MoveFile_Statics::NewProp_bEvenIfReadOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_MoveFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_MoveFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "FileUtils" },
		{ "CPP_Default_bEvenIfReadOnly", "false" },
		{ "CPP_Default_bReplace", "true" },
		{ "ModuleRelativePath", "Public/BlueprintFileUtilsBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_MoveFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintFileUtilsBPLibrary, nullptr, "MoveFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_MoveFile_Statics::BlueprintFileUtilsBPLibrary_eventMoveFile_Parms), Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_MoveFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_MoveFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_MoveFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_MoveFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_MoveFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_MoveFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlueprintFileUtilsBPLibrary);
	UClass* Z_Construct_UClass_UBlueprintFileUtilsBPLibrary_NoRegister()
	{
		return UBlueprintFileUtilsBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UBlueprintFileUtilsBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlueprintFileUtilsBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintFileUtils,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBlueprintFileUtilsBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_CopyFile, "CopyFile" }, // 1564657127
		{ &Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_DeleteDirectory, "DeleteDirectory" }, // 1316784224
		{ &Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_DeleteFile, "DeleteFile" }, // 1897114441
		{ &Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_DirectoryExists, "DirectoryExists" }, // 2806522234
		{ &Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_FileExists, "FileExists" }, // 113801972
		{ &Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_FindFiles, "FindFiles" }, // 495336785
		{ &Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_FindRecursive, "FindRecursive" }, // 2524048636
		{ &Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_GetUserDirectory, "GetUserDirectory" }, // 3249969754
		{ &Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_MakeDirectory, "MakeDirectory" }, // 3829937524
		{ &Z_Construct_UFunction_UBlueprintFileUtilsBPLibrary_MoveFile, "MoveFile" }, // 2194789992
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintFileUtilsBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintFileUtilsBPLibrary.h" },
		{ "ModuleRelativePath", "Public/BlueprintFileUtilsBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlueprintFileUtilsBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintFileUtilsBPLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintFileUtilsBPLibrary_Statics::ClassParams = {
		&UBlueprintFileUtilsBPLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBlueprintFileUtilsBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintFileUtilsBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlueprintFileUtilsBPLibrary()
	{
		if (!Z_Registration_Info_UClass_UBlueprintFileUtilsBPLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlueprintFileUtilsBPLibrary.OuterSingleton, Z_Construct_UClass_UBlueprintFileUtilsBPLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBlueprintFileUtilsBPLibrary.OuterSingleton;
	}
	template<> BLUEPRINTFILEUTILS_API UClass* StaticClass<UBlueprintFileUtilsBPLibrary>()
	{
		return UBlueprintFileUtilsBPLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintFileUtilsBPLibrary);
	UBlueprintFileUtilsBPLibrary::~UBlueprintFileUtilsBPLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_BlueprintFileUtils_Source_BlueprintFileUtils_Public_BlueprintFileUtilsBPLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_BlueprintFileUtils_Source_BlueprintFileUtils_Public_BlueprintFileUtilsBPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBlueprintFileUtilsBPLibrary, UBlueprintFileUtilsBPLibrary::StaticClass, TEXT("UBlueprintFileUtilsBPLibrary"), &Z_Registration_Info_UClass_UBlueprintFileUtilsBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlueprintFileUtilsBPLibrary), 1691864368U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_BlueprintFileUtils_Source_BlueprintFileUtils_Public_BlueprintFileUtilsBPLibrary_h_2414747931(TEXT("/Script/BlueprintFileUtils"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_BlueprintFileUtils_Source_BlueprintFileUtils_Public_BlueprintFileUtilsBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_BlueprintFileUtils_Source_BlueprintFileUtils_Public_BlueprintFileUtilsBPLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
