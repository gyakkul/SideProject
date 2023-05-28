// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FileMediaOutput.h"
#include "ImageWriteBlueprintLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFileMediaOutput() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	IMAGEWRITEQUEUE_API UScriptStruct* Z_Construct_UScriptStruct_FImageWriteOptions();
	MEDIAIOCORE_API UClass* Z_Construct_UClass_UFileMediaOutput();
	MEDIAIOCORE_API UClass* Z_Construct_UClass_UFileMediaOutput_NoRegister();
	MEDIAIOCORE_API UClass* Z_Construct_UClass_UMediaOutput();
	MEDIAIOCORE_API UEnum* Z_Construct_UEnum_MediaIOCore_EFileMediaOutputPixelFormat();
	UPackage* Z_Construct_UPackage__Script_MediaIOCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFileMediaOutputPixelFormat;
	static UEnum* EFileMediaOutputPixelFormat_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFileMediaOutputPixelFormat.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFileMediaOutputPixelFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MediaIOCore_EFileMediaOutputPixelFormat, (UObject*)Z_Construct_UPackage__Script_MediaIOCore(), TEXT("EFileMediaOutputPixelFormat"));
		}
		return Z_Registration_Info_UEnum_EFileMediaOutputPixelFormat.OuterSingleton;
	}
	template<> MEDIAIOCORE_API UEnum* StaticEnum<EFileMediaOutputPixelFormat>()
	{
		return EFileMediaOutputPixelFormat_StaticEnum();
	}
	struct Z_Construct_UEnum_MediaIOCore_EFileMediaOutputPixelFormat_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MediaIOCore_EFileMediaOutputPixelFormat_Statics::Enumerators[] = {
		{ "EFileMediaOutputPixelFormat::B8G8R8A8", (int64)EFileMediaOutputPixelFormat::B8G8R8A8 },
		{ "EFileMediaOutputPixelFormat::FloatRGBA", (int64)EFileMediaOutputPixelFormat::FloatRGBA },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MediaIOCore_EFileMediaOutputPixelFormat_Statics::Enum_MetaDataParams[] = {
		{ "B8G8R8A8.DisplayName", "8bit RGBA" },
		{ "B8G8R8A8.Name", "EFileMediaOutputPixelFormat::B8G8R8A8" },
		{ "Comment", "/** Texture format supported by UFileMediaOutput. */" },
		{ "FloatRGBA.DisplayName", "Float RGBA" },
		{ "FloatRGBA.Name", "EFileMediaOutputPixelFormat::FloatRGBA" },
		{ "ModuleRelativePath", "Public/FileMediaOutput.h" },
		{ "ToolTip", "Texture format supported by UFileMediaOutput." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MediaIOCore_EFileMediaOutputPixelFormat_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MediaIOCore,
		nullptr,
		"EFileMediaOutputPixelFormat",
		"EFileMediaOutputPixelFormat",
		Z_Construct_UEnum_MediaIOCore_EFileMediaOutputPixelFormat_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MediaIOCore_EFileMediaOutputPixelFormat_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MediaIOCore_EFileMediaOutputPixelFormat_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MediaIOCore_EFileMediaOutputPixelFormat_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MediaIOCore_EFileMediaOutputPixelFormat()
	{
		if (!Z_Registration_Info_UEnum_EFileMediaOutputPixelFormat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFileMediaOutputPixelFormat.InnerSingleton, Z_Construct_UEnum_MediaIOCore_EFileMediaOutputPixelFormat_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFileMediaOutputPixelFormat.InnerSingleton;
	}
	void UFileMediaOutput::StaticRegisterNativesUFileMediaOutput()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFileMediaOutput);
	UClass* Z_Construct_UClass_UFileMediaOutput_NoRegister()
	{
		return UFileMediaOutput::StaticClass();
	}
	struct Z_Construct_UClass_UFileMediaOutput_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WriteOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WriteOptions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FilePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseFileName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BaseFileName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideDesiredSize_MetaData[];
#endif
		static void NewProp_bOverrideDesiredSize_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideDesiredSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DesiredSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DesiredSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverridePixelFormat_MetaData[];
#endif
		static void NewProp_bOverridePixelFormat_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverridePixelFormat;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_DesiredPixelFormat_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DesiredPixelFormat_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DesiredPixelFormat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInvertAlpha_MetaData[];
#endif
		static void NewProp_bInvertAlpha_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvertAlpha;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFileMediaOutput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMediaOutput,
		(UObject* (*)())Z_Construct_UPackage__Script_MediaIOCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFileMediaOutput_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Output information for a file media capture.\n * @note\x09'Frame Buffer Pixel Format' must be set to at least 8 bits of alpha to enabled the Key.\n * @note\x09'Enable alpha channel support in post-processing' must be set to 'Allow through tonemapper' to enabled the Key.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "FileMediaOutput.h" },
		{ "ModuleRelativePath", "Public/FileMediaOutput.h" },
		{ "ToolTip", "Output information for a file media capture.\n@note       'Frame Buffer Pixel Format' must be set to at least 8 bits of alpha to enabled the Key.\n@note       'Enable alpha channel support in post-processing' must be set to 'Allow through tonemapper' to enabled the Key." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFileMediaOutput_Statics::NewProp_WriteOptions_MetaData[] = {
		{ "Category", "File" },
		{ "Comment", "/** Options on how to save the images. */" },
		{ "ModuleRelativePath", "Public/FileMediaOutput.h" },
		{ "ToolTip", "Options on how to save the images." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFileMediaOutput_Statics::NewProp_WriteOptions = { "WriteOptions", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFileMediaOutput, WriteOptions), Z_Construct_UScriptStruct_FImageWriteOptions, METADATA_PARAMS(Z_Construct_UClass_UFileMediaOutput_Statics::NewProp_WriteOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFileMediaOutput_Statics::NewProp_WriteOptions_MetaData)) }; // 2307588783
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFileMediaOutput_Statics::NewProp_FilePath_MetaData[] = {
		{ "Category", "File" },
		{ "Comment", "/** The file path for the images. */" },
		{ "ModuleRelativePath", "Public/FileMediaOutput.h" },
		{ "RelativePath", "" },
		{ "ToolTip", "The file path for the images." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFileMediaOutput_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFileMediaOutput, FilePath), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_UFileMediaOutput_Statics::NewProp_FilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFileMediaOutput_Statics::NewProp_FilePath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFileMediaOutput_Statics::NewProp_BaseFileName_MetaData[] = {
		{ "Category", "File" },
		{ "Comment", "/** The base file name of the images. The frame number will be append to the base file name. */" },
		{ "ModuleRelativePath", "Public/FileMediaOutput.h" },
		{ "RelativePath", "" },
		{ "ToolTip", "The base file name of the images. The frame number will be append to the base file name." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFileMediaOutput_Statics::NewProp_BaseFileName = { "BaseFileName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFileMediaOutput, BaseFileName), METADATA_PARAMS(Z_Construct_UClass_UFileMediaOutput_Statics::NewProp_BaseFileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFileMediaOutput_Statics::NewProp_BaseFileName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFileMediaOutput_Statics::NewProp_bOverrideDesiredSize_MetaData[] = {
		{ "Category", "Media" },
		{ "Comment", "/** Use the default back buffer size or specify a specific size to capture. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/FileMediaOutput.h" },
		{ "ToolTip", "Use the default back buffer size or specify a specific size to capture." },
	};
#endif
	void Z_Construct_UClass_UFileMediaOutput_Statics::NewProp_bOverrideDesiredSize_SetBit(void* Obj)
	{
		((UFileMediaOutput*)Obj)->bOverrideDesiredSize = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFileMediaOutput_Statics::NewProp_bOverrideDesiredSize = { "bOverrideDesiredSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UFileMediaOutput), &Z_Construct_UClass_UFileMediaOutput_Statics::NewProp_bOverrideDesiredSize_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFileMediaOutput_Statics::NewProp_bOverrideDesiredSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFileMediaOutput_Statics::NewProp_bOverrideDesiredSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFileMediaOutput_Statics::NewProp_DesiredSize_MetaData[] = {
		{ "Category", "Media" },
		{ "Comment", "/** Use the default back buffer size or specify a specific size to capture. */" },
		{ "EditCondition", "bOverrideDesiredSize" },
		{ "ModuleRelativePath", "Public/FileMediaOutput.h" },
		{ "ToolTip", "Use the default back buffer size or specify a specific size to capture." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFileMediaOutput_Statics::NewProp_DesiredSize = { "DesiredSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFileMediaOutput, DesiredSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UClass_UFileMediaOutput_Statics::NewProp_DesiredSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFileMediaOutput_Statics::NewProp_DesiredSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFileMediaOutput_Statics::NewProp_bOverridePixelFormat_MetaData[] = {
		{ "Category", "Media" },
		{ "Comment", "/** Use the default back buffer pixel format or specify a specific the pixel format to capture. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/FileMediaOutput.h" },
		{ "ToolTip", "Use the default back buffer pixel format or specify a specific the pixel format to capture." },
	};
#endif
	void Z_Construct_UClass_UFileMediaOutput_Statics::NewProp_bOverridePixelFormat_SetBit(void* Obj)
	{
		((UFileMediaOutput*)Obj)->bOverridePixelFormat = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFileMediaOutput_Statics::NewProp_bOverridePixelFormat = { "bOverridePixelFormat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UFileMediaOutput), &Z_Construct_UClass_UFileMediaOutput_Statics::NewProp_bOverridePixelFormat_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFileMediaOutput_Statics::NewProp_bOverridePixelFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFileMediaOutput_Statics::NewProp_bOverridePixelFormat_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UFileMediaOutput_Statics::NewProp_DesiredPixelFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFileMediaOutput_Statics::NewProp_DesiredPixelFormat_MetaData[] = {
		{ "Category", "Media" },
		{ "Comment", "/** Use the default back buffer pixel format or specify a specific the pixel format to capture. */" },
		{ "EditCondition", "bOverridePixelFormat" },
		{ "ModuleRelativePath", "Public/FileMediaOutput.h" },
		{ "ToolTip", "Use the default back buffer pixel format or specify a specific the pixel format to capture." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFileMediaOutput_Statics::NewProp_DesiredPixelFormat = { "DesiredPixelFormat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFileMediaOutput, DesiredPixelFormat), Z_Construct_UEnum_MediaIOCore_EFileMediaOutputPixelFormat, METADATA_PARAMS(Z_Construct_UClass_UFileMediaOutput_Statics::NewProp_DesiredPixelFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFileMediaOutput_Statics::NewProp_DesiredPixelFormat_MetaData)) }; // 1766794876
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFileMediaOutput_Statics::NewProp_bInvertAlpha_MetaData[] = {
		{ "Category", "Media" },
		{ "Comment", "/** Invert the alpha for formats that support alpha. */" },
		{ "ModuleRelativePath", "Public/FileMediaOutput.h" },
		{ "ToolTip", "Invert the alpha for formats that support alpha." },
	};
#endif
	void Z_Construct_UClass_UFileMediaOutput_Statics::NewProp_bInvertAlpha_SetBit(void* Obj)
	{
		((UFileMediaOutput*)Obj)->bInvertAlpha = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFileMediaOutput_Statics::NewProp_bInvertAlpha = { "bInvertAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UFileMediaOutput), &Z_Construct_UClass_UFileMediaOutput_Statics::NewProp_bInvertAlpha_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFileMediaOutput_Statics::NewProp_bInvertAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFileMediaOutput_Statics::NewProp_bInvertAlpha_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFileMediaOutput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFileMediaOutput_Statics::NewProp_WriteOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFileMediaOutput_Statics::NewProp_FilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFileMediaOutput_Statics::NewProp_BaseFileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFileMediaOutput_Statics::NewProp_bOverrideDesiredSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFileMediaOutput_Statics::NewProp_DesiredSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFileMediaOutput_Statics::NewProp_bOverridePixelFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFileMediaOutput_Statics::NewProp_DesiredPixelFormat_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFileMediaOutput_Statics::NewProp_DesiredPixelFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFileMediaOutput_Statics::NewProp_bInvertAlpha,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFileMediaOutput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFileMediaOutput>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFileMediaOutput_Statics::ClassParams = {
		&UFileMediaOutput::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFileMediaOutput_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFileMediaOutput_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFileMediaOutput_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFileMediaOutput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFileMediaOutput()
	{
		if (!Z_Registration_Info_UClass_UFileMediaOutput.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFileMediaOutput.OuterSingleton, Z_Construct_UClass_UFileMediaOutput_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFileMediaOutput.OuterSingleton;
	}
	template<> MEDIAIOCORE_API UClass* StaticClass<UFileMediaOutput>()
	{
		return UFileMediaOutput::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFileMediaOutput);
	UFileMediaOutput::~UFileMediaOutput() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_FileMediaOutput_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_FileMediaOutput_h_Statics::EnumInfo[] = {
		{ EFileMediaOutputPixelFormat_StaticEnum, TEXT("EFileMediaOutputPixelFormat"), &Z_Registration_Info_UEnum_EFileMediaOutputPixelFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1766794876U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_FileMediaOutput_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFileMediaOutput, UFileMediaOutput::StaticClass, TEXT("UFileMediaOutput"), &Z_Registration_Info_UClass_UFileMediaOutput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFileMediaOutput), 3041175338U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_FileMediaOutput_h_2286059660(TEXT("/Script/MediaIOCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_FileMediaOutput_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_FileMediaOutput_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_FileMediaOutput_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_FileMediaOutput_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
