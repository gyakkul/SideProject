// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ImageWriteBlueprintLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeImageWriteBlueprintLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	IMAGEWRITEQUEUE_API UClass* Z_Construct_UClass_UImageWriteBlueprintLibrary();
	IMAGEWRITEQUEUE_API UClass* Z_Construct_UClass_UImageWriteBlueprintLibrary_NoRegister();
	IMAGEWRITEQUEUE_API UEnum* Z_Construct_UEnum_ImageWriteQueue_EDesiredImageFormat();
	IMAGEWRITEQUEUE_API UFunction* Z_Construct_UDelegateFunction_ImageWriteQueue_OnImageWriteComplete__DelegateSignature();
	IMAGEWRITEQUEUE_API UScriptStruct* Z_Construct_UScriptStruct_FImageWriteOptions();
	UPackage* Z_Construct_UPackage__Script_ImageWriteQueue();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ImageWriteQueue_OnImageWriteComplete__DelegateSignature_Statics
	{
		struct _Script_ImageWriteQueue_eventOnImageWriteComplete_Parms
		{
			bool bSuccess;
		};
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_ImageWriteQueue_OnImageWriteComplete__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((_Script_ImageWriteQueue_eventOnImageWriteComplete_Parms*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_ImageWriteQueue_OnImageWriteComplete__DelegateSignature_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_ImageWriteQueue_eventOnImageWriteComplete_Parms), &Z_Construct_UDelegateFunction_ImageWriteQueue_OnImageWriteComplete__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ImageWriteQueue_OnImageWriteComplete__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ImageWriteQueue_OnImageWriteComplete__DelegateSignature_Statics::NewProp_bSuccess,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ImageWriteQueue_OnImageWriteComplete__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ImageWriteBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ImageWriteQueue_OnImageWriteComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ImageWriteQueue, nullptr, "OnImageWriteComplete__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_ImageWriteQueue_OnImageWriteComplete__DelegateSignature_Statics::_Script_ImageWriteQueue_eventOnImageWriteComplete_Parms), Z_Construct_UDelegateFunction_ImageWriteQueue_OnImageWriteComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ImageWriteQueue_OnImageWriteComplete__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ImageWriteQueue_OnImageWriteComplete__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ImageWriteQueue_OnImageWriteComplete__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ImageWriteQueue_OnImageWriteComplete__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ImageWriteQueue_OnImageWriteComplete__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnImageWriteComplete_DelegateWrapper(const FScriptDelegate& OnImageWriteComplete, bool bSuccess)
{
	struct _Script_ImageWriteQueue_eventOnImageWriteComplete_Parms
	{
		bool bSuccess;
	};
	_Script_ImageWriteQueue_eventOnImageWriteComplete_Parms Parms;
	Parms.bSuccess=bSuccess ? true : false;
	OnImageWriteComplete.ProcessDelegate<UObject>(&Parms);
}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ImageWriteOptions;
class UScriptStruct* FImageWriteOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ImageWriteOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ImageWriteOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FImageWriteOptions, (UObject*)Z_Construct_UPackage__Script_ImageWriteQueue(), TEXT("ImageWriteOptions"));
	}
	return Z_Registration_Info_UScriptStruct_ImageWriteOptions.OuterSingleton;
}
template<> IMAGEWRITEQUEUE_API UScriptStruct* StaticStruct<FImageWriteOptions>()
{
	return FImageWriteOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FImageWriteOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Format_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Format_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Format;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnComplete_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnComplete;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompressionQuality_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CompressionQuality;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverwriteFile_MetaData[];
#endif
		static void NewProp_bOverwriteFile_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverwriteFile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAsync_MetaData[];
#endif
		static void NewProp_bAsync_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAsync;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImageWriteOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Options specific to writing image files to disk\n */" },
		{ "ModuleRelativePath", "Public/ImageWriteBlueprintLibrary.h" },
		{ "ToolTip", "Options specific to writing image files to disk" },
	};
#endif
	void* Z_Construct_UScriptStruct_FImageWriteOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FImageWriteOptions>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FImageWriteOptions_Statics::NewProp_Format_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImageWriteOptions_Statics::NewProp_Format_MetaData[] = {
		{ "Category", "Image" },
		{ "Comment", "/** The desired output image format to write to disk */" },
		{ "ModuleRelativePath", "Public/ImageWriteBlueprintLibrary.h" },
		{ "ToolTip", "The desired output image format to write to disk" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FImageWriteOptions_Statics::NewProp_Format = { "Format", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FImageWriteOptions, Format), Z_Construct_UEnum_ImageWriteQueue_EDesiredImageFormat, METADATA_PARAMS(Z_Construct_UScriptStruct_FImageWriteOptions_Statics::NewProp_Format_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImageWriteOptions_Statics::NewProp_Format_MetaData)) }; // 4030740911
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImageWriteOptions_Statics::NewProp_OnComplete_MetaData[] = {
		{ "Category", "Image" },
		{ "Comment", "/** A callback to invoke when the image has been written, or there was an error */" },
		{ "ModuleRelativePath", "Public/ImageWriteBlueprintLibrary.h" },
		{ "ToolTip", "A callback to invoke when the image has been written, or there was an error" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UScriptStruct_FImageWriteOptions_Statics::NewProp_OnComplete = { "OnComplete", nullptr, (EPropertyFlags)0x0010000000080004, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FImageWriteOptions, OnComplete), Z_Construct_UDelegateFunction_ImageWriteQueue_OnImageWriteComplete__DelegateSignature, METADATA_PARAMS(Z_Construct_UScriptStruct_FImageWriteOptions_Statics::NewProp_OnComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImageWriteOptions_Statics::NewProp_OnComplete_MetaData)) }; // 55299700
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImageWriteOptions_Statics::NewProp_CompressionQuality_MetaData[] = {
		{ "Category", "Image" },
		{ "Comment", "/** An image format specific compression setting. Either 0 (Default) or 1 (Uncompressed) for EXRs, or a value between 0 and 100. */" },
		{ "ModuleRelativePath", "Public/ImageWriteBlueprintLibrary.h" },
		{ "ToolTip", "An image format specific compression setting. Either 0 (Default) or 1 (Uncompressed) for EXRs, or a value between 0 and 100." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FImageWriteOptions_Statics::NewProp_CompressionQuality = { "CompressionQuality", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FImageWriteOptions, CompressionQuality), METADATA_PARAMS(Z_Construct_UScriptStruct_FImageWriteOptions_Statics::NewProp_CompressionQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImageWriteOptions_Statics::NewProp_CompressionQuality_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImageWriteOptions_Statics::NewProp_bOverwriteFile_MetaData[] = {
		{ "Category", "Image" },
		{ "Comment", "/** Whether to overwrite the image if it already exists */" },
		{ "ModuleRelativePath", "Public/ImageWriteBlueprintLibrary.h" },
		{ "ToolTip", "Whether to overwrite the image if it already exists" },
	};
#endif
	void Z_Construct_UScriptStruct_FImageWriteOptions_Statics::NewProp_bOverwriteFile_SetBit(void* Obj)
	{
		((FImageWriteOptions*)Obj)->bOverwriteFile = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FImageWriteOptions_Statics::NewProp_bOverwriteFile = { "bOverwriteFile", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FImageWriteOptions), &Z_Construct_UScriptStruct_FImageWriteOptions_Statics::NewProp_bOverwriteFile_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FImageWriteOptions_Statics::NewProp_bOverwriteFile_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImageWriteOptions_Statics::NewProp_bOverwriteFile_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImageWriteOptions_Statics::NewProp_bAsync_MetaData[] = {
		{ "Category", "Image" },
		{ "Comment", "/** Whether to perform the writing asynchronously, or to block the game thread until it is complete */" },
		{ "ModuleRelativePath", "Public/ImageWriteBlueprintLibrary.h" },
		{ "ToolTip", "Whether to perform the writing asynchronously, or to block the game thread until it is complete" },
	};
#endif
	void Z_Construct_UScriptStruct_FImageWriteOptions_Statics::NewProp_bAsync_SetBit(void* Obj)
	{
		((FImageWriteOptions*)Obj)->bAsync = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FImageWriteOptions_Statics::NewProp_bAsync = { "bAsync", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FImageWriteOptions), &Z_Construct_UScriptStruct_FImageWriteOptions_Statics::NewProp_bAsync_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FImageWriteOptions_Statics::NewProp_bAsync_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImageWriteOptions_Statics::NewProp_bAsync_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FImageWriteOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageWriteOptions_Statics::NewProp_Format_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageWriteOptions_Statics::NewProp_Format,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageWriteOptions_Statics::NewProp_OnComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageWriteOptions_Statics::NewProp_CompressionQuality,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageWriteOptions_Statics::NewProp_bOverwriteFile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageWriteOptions_Statics::NewProp_bAsync,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FImageWriteOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ImageWriteQueue,
		nullptr,
		&NewStructOps,
		"ImageWriteOptions",
		sizeof(FImageWriteOptions),
		alignof(FImageWriteOptions),
		Z_Construct_UScriptStruct_FImageWriteOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImageWriteOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FImageWriteOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImageWriteOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FImageWriteOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_ImageWriteOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ImageWriteOptions.InnerSingleton, Z_Construct_UScriptStruct_FImageWriteOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ImageWriteOptions.InnerSingleton;
	}
	DEFINE_FUNCTION(UImageWriteBlueprintLibrary::execExportToDisk)
	{
		P_GET_OBJECT(UTexture,Z_Param_Texture);
		P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
		P_GET_STRUCT_REF(FImageWriteOptions,Z_Param_Out_Options);
		P_FINISH;
		P_NATIVE_BEGIN;
		UImageWriteBlueprintLibrary::ExportToDisk(Z_Param_Texture,Z_Param_Filename,Z_Param_Out_Options);
		P_NATIVE_END;
	}
	void UImageWriteBlueprintLibrary::StaticRegisterNativesUImageWriteBlueprintLibrary()
	{
		UClass* Class = UImageWriteBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExportToDisk", &UImageWriteBlueprintLibrary::execExportToDisk },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UImageWriteBlueprintLibrary_ExportToDisk_Statics
	{
		struct ImageWriteBlueprintLibrary_eventExportToDisk_Parms
		{
			UTexture* Texture;
			FString Filename;
			FImageWriteOptions Options;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UImageWriteBlueprintLibrary_ExportToDisk_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImageWriteBlueprintLibrary_eventExportToDisk_Parms, Texture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImageWriteBlueprintLibrary_ExportToDisk_Statics::NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UImageWriteBlueprintLibrary_ExportToDisk_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImageWriteBlueprintLibrary_eventExportToDisk_Parms, Filename), METADATA_PARAMS(Z_Construct_UFunction_UImageWriteBlueprintLibrary_ExportToDisk_Statics::NewProp_Filename_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UImageWriteBlueprintLibrary_ExportToDisk_Statics::NewProp_Filename_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImageWriteBlueprintLibrary_ExportToDisk_Statics::NewProp_Options_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UImageWriteBlueprintLibrary_ExportToDisk_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImageWriteBlueprintLibrary_eventExportToDisk_Parms, Options), Z_Construct_UScriptStruct_FImageWriteOptions, METADATA_PARAMS(Z_Construct_UFunction_UImageWriteBlueprintLibrary_ExportToDisk_Statics::NewProp_Options_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UImageWriteBlueprintLibrary_ExportToDisk_Statics::NewProp_Options_MetaData)) }; // 2307588783
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImageWriteBlueprintLibrary_ExportToDisk_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageWriteBlueprintLibrary_ExportToDisk_Statics::NewProp_Texture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageWriteBlueprintLibrary_ExportToDisk_Statics::NewProp_Filename,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageWriteBlueprintLibrary_ExportToDisk_Statics::NewProp_Options,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImageWriteBlueprintLibrary_ExportToDisk_Statics::Function_MetaDataParams[] = {
		{ "Category", "Texture" },
		{ "Comment", "/**\n\x09 * Export the specified texture to disk\n\x09 *\n\x09 * @param Texture         The texture or render target to export\n\x09 * @param Filename        The filename on disk to save as\n\x09 * @param Options         Parameters defining the various export options\n\x09 */" },
		{ "ModuleRelativePath", "Public/ImageWriteBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Export the specified texture to disk\n\n@param Texture         The texture or render target to export\n@param Filename        The filename on disk to save as\n@param Options         Parameters defining the various export options" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImageWriteBlueprintLibrary_ExportToDisk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImageWriteBlueprintLibrary, nullptr, "ExportToDisk", nullptr, nullptr, sizeof(Z_Construct_UFunction_UImageWriteBlueprintLibrary_ExportToDisk_Statics::ImageWriteBlueprintLibrary_eventExportToDisk_Parms), Z_Construct_UFunction_UImageWriteBlueprintLibrary_ExportToDisk_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImageWriteBlueprintLibrary_ExportToDisk_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImageWriteBlueprintLibrary_ExportToDisk_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UImageWriteBlueprintLibrary_ExportToDisk_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImageWriteBlueprintLibrary_ExportToDisk()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImageWriteBlueprintLibrary_ExportToDisk_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UImageWriteBlueprintLibrary);
	UClass* Z_Construct_UClass_UImageWriteBlueprintLibrary_NoRegister()
	{
		return UImageWriteBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UImageWriteBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UImageWriteBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ImageWriteQueue,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UImageWriteBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UImageWriteBlueprintLibrary_ExportToDisk, "ExportToDisk" }, // 1302793443
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImageWriteBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Function library containing utility methods for writing images on a global async queue\n */" },
		{ "IncludePath", "ImageWriteBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/ImageWriteBlueprintLibrary.h" },
		{ "ToolTip", "Function library containing utility methods for writing images on a global async queue" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UImageWriteBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UImageWriteBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UImageWriteBlueprintLibrary_Statics::ClassParams = {
		&UImageWriteBlueprintLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UImageWriteBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UImageWriteBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UImageWriteBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_UImageWriteBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UImageWriteBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UImageWriteBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UImageWriteBlueprintLibrary.OuterSingleton;
	}
	template<> IMAGEWRITEQUEUE_API UClass* StaticClass<UImageWriteBlueprintLibrary>()
	{
		return UImageWriteBlueprintLibrary::StaticClass();
	}
	UImageWriteBlueprintLibrary::UImageWriteBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UImageWriteBlueprintLibrary);
	UImageWriteBlueprintLibrary::~UImageWriteBlueprintLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ImageWriteQueue_Public_ImageWriteBlueprintLibrary_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ImageWriteQueue_Public_ImageWriteBlueprintLibrary_h_Statics::ScriptStructInfo[] = {
		{ FImageWriteOptions::StaticStruct, Z_Construct_UScriptStruct_FImageWriteOptions_Statics::NewStructOps, TEXT("ImageWriteOptions"), &Z_Registration_Info_UScriptStruct_ImageWriteOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FImageWriteOptions), 2307588783U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ImageWriteQueue_Public_ImageWriteBlueprintLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UImageWriteBlueprintLibrary, UImageWriteBlueprintLibrary::StaticClass, TEXT("UImageWriteBlueprintLibrary"), &Z_Registration_Info_UClass_UImageWriteBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UImageWriteBlueprintLibrary), 2216773752U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ImageWriteQueue_Public_ImageWriteBlueprintLibrary_h_1079240363(TEXT("/Script/ImageWriteQueue"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ImageWriteQueue_Public_ImageWriteBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ImageWriteQueue_Public_ImageWriteBlueprintLibrary_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ImageWriteQueue_Public_ImageWriteBlueprintLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ImageWriteQueue_Public_ImageWriteBlueprintLibrary_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
