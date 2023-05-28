// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../ImgMediaEditor/Private/Widgets/ImgMediaProcessEXROptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeImgMediaProcessEXROptions() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	IMGMEDIAEDITOR_API UClass* Z_Construct_UClass_UImgMediaProcessEXROptions();
	IMGMEDIAEDITOR_API UClass* Z_Construct_UClass_UImgMediaProcessEXROptions_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ImgMediaEditor();
// End Cross Module References
	void UImgMediaProcessEXROptions::StaticRegisterNativesUImgMediaProcessEXROptions()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UImgMediaProcessEXROptions);
	UClass* Z_Construct_UClass_UImgMediaProcessEXROptions_NoRegister()
	{
		return UImgMediaProcessEXROptions::StaticClass();
	}
	struct Z_Construct_UClass_UImgMediaProcessEXROptions_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutputPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableMipMapping_MetaData[];
#endif
		static void NewProp_bEnableMipMapping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableMipMapping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableTiling_MetaData[];
#endif
		static void NewProp_bEnableTiling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableTiling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TileSizeX_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TileSizeX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TileSizeY_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TileSizeY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumThreads_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumThreads;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUsePlayer_MetaData[];
#endif
		static void NewProp_bUsePlayer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePlayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumTilesX_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumTilesX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumTilesY_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumTilesY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableMipLevelTint_MetaData[];
#endif
		static void NewProp_bEnableMipLevelTint_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableMipLevelTint;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MipLevelTints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MipLevelTints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MipLevelTints;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UImgMediaProcessEXROptions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ImgMediaEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImgMediaProcessEXROptions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Widgets/ImgMediaProcessEXROptions.h" },
		{ "ModuleRelativePath", "Private/Widgets/ImgMediaProcessEXROptions.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImgMediaProcessEXROptions_Statics::NewProp_InputPath_MetaData[] = {
		{ "Category", "Sequence" },
		{ "Comment", "/** The directory that contains the image sequence files. */" },
		{ "ModuleRelativePath", "Private/Widgets/ImgMediaProcessEXROptions.h" },
		{ "ToolTip", "The directory that contains the image sequence files." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UImgMediaProcessEXROptions_Statics::NewProp_InputPath = { "InputPath", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UImgMediaProcessEXROptions, InputPath), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UClass_UImgMediaProcessEXROptions_Statics::NewProp_InputPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UImgMediaProcessEXROptions_Statics::NewProp_InputPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImgMediaProcessEXROptions_Statics::NewProp_OutputPath_MetaData[] = {
		{ "Category", "Sequence" },
		{ "Comment", "/** The directory to output the processed image sequence files to. */" },
		{ "ModuleRelativePath", "Private/Widgets/ImgMediaProcessEXROptions.h" },
		{ "ToolTip", "The directory to output the processed image sequence files to." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UImgMediaProcessEXROptions_Statics::NewProp_OutputPath = { "OutputPath", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UImgMediaProcessEXROptions, OutputPath), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_UImgMediaProcessEXROptions_Statics::NewProp_OutputPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UImgMediaProcessEXROptions_Statics::NewProp_OutputPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImgMediaProcessEXROptions_Statics::NewProp_bEnableMipMapping_MetaData[] = {
		{ "Category", "Sequence" },
		{ "Comment", "/** If checked, then enable mip mapping. */" },
		{ "ModuleRelativePath", "Private/Widgets/ImgMediaProcessEXROptions.h" },
		{ "ToolTip", "If checked, then enable mip mapping." },
	};
#endif
	void Z_Construct_UClass_UImgMediaProcessEXROptions_Statics::NewProp_bEnableMipMapping_SetBit(void* Obj)
	{
		((UImgMediaProcessEXROptions*)Obj)->bEnableMipMapping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UImgMediaProcessEXROptions_Statics::NewProp_bEnableMipMapping = { "bEnableMipMapping", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UImgMediaProcessEXROptions), &Z_Construct_UClass_UImgMediaProcessEXROptions_Statics::NewProp_bEnableMipMapping_SetBit, METADATA_PARAMS(Z_Construct_UClass_UImgMediaProcessEXROptions_Statics::NewProp_bEnableMipMapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UImgMediaProcessEXROptions_Statics::NewProp_bEnableMipMapping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImgMediaProcessEXROptions_Statics::NewProp_bEnableTiling_MetaData[] = {
		{ "Category", "Tiles" },
		{ "Comment", "/** If checked, then enable tiling. */" },
		{ "ModuleRelativePath", "Private/Widgets/ImgMediaProcessEXROptions.h" },
		{ "ToolTip", "If checked, then enable tiling." },
	};
#endif
	void Z_Construct_UClass_UImgMediaProcessEXROptions_Statics::NewProp_bEnableTiling_SetBit(void* Obj)
	{
		((UImgMediaProcessEXROptions*)Obj)->bEnableTiling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UImgMediaProcessEXROptions_Statics::NewProp_bEnableTiling = { "bEnableTiling", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UImgMediaProcessEXROptions), &Z_Construct_UClass_UImgMediaProcessEXROptions_Statics::NewProp_bEnableTiling_SetBit, METADATA_PARAMS(Z_Construct_UClass_UImgMediaProcessEXROptions_Statics::NewProp_bEnableTiling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UImgMediaProcessEXROptions_Statics::NewProp_bEnableTiling_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImgMediaProcessEXROptions_Statics::NewProp_TileSizeX_MetaData[] = {
		{ "Category", "Tiles" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Width of a tile in pixels. If 0, then do not make tiles. */" },
		{ "EditCondition", "bEnableTiling" },
		{ "ModuleRelativePath", "Private/Widgets/ImgMediaProcessEXROptions.h" },
		{ "ToolTip", "Width of a tile in pixels. If 0, then do not make tiles." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UImgMediaProcessEXROptions_Statics::NewProp_TileSizeX = { "TileSizeX", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UImgMediaProcessEXROptions, TileSizeX), METADATA_PARAMS(Z_Construct_UClass_UImgMediaProcessEXROptions_Statics::NewProp_TileSizeX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UImgMediaProcessEXROptions_Statics::NewProp_TileSizeX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImgMediaProcessEXROptions_Statics::NewProp_TileSizeY_MetaData[] = {
		{ "Category", "Tiles" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Height of a tile in pixels. If 0, then do not make tiles. */" },
		{ "EditCondition", "bEnableTiling" },
		{ "ModuleRelativePath", "Private/Widgets/ImgMediaProcessEXROptions.h" },
		{ "ToolTip", "Height of a tile in pixels. If 0, then do not make tiles." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UImgMediaProcessEXROptions_Statics::NewProp_TileSizeY = { "TileSizeY", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UImgMediaProcessEXROptions, TileSizeY), METADATA_PARAMS(Z_Construct_UClass_UImgMediaProcessEXROptions_Statics::NewProp_TileSizeY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UImgMediaProcessEXROptions_Statics::NewProp_TileSizeY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImgMediaProcessEXROptions_Statics::NewProp_NumThreads_MetaData[] = {
		{ "Category", "Processing" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Number of threads to use when processing. If 0 then this number is set automatically. */" },
		{ "ModuleRelativePath", "Private/Widgets/ImgMediaProcessEXROptions.h" },
		{ "ToolTip", "Number of threads to use when processing. If 0 then this number is set automatically." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UImgMediaProcessEXROptions_Statics::NewProp_NumThreads = { "NumThreads", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UImgMediaProcessEXROptions, NumThreads), METADATA_PARAMS(Z_Construct_UClass_UImgMediaProcessEXROptions_Statics::NewProp_NumThreads_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UImgMediaProcessEXROptions_Statics::NewProp_NumThreads_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImgMediaProcessEXROptions_Statics::NewProp_bUsePlayer_MetaData[] = {
		{ "Category", "Processing" },
		{ "Comment", "/** Use a player to read in the image. */" },
		{ "ModuleRelativePath", "Private/Widgets/ImgMediaProcessEXROptions.h" },
		{ "ToolTip", "Use a player to read in the image." },
	};
#endif
	void Z_Construct_UClass_UImgMediaProcessEXROptions_Statics::NewProp_bUsePlayer_SetBit(void* Obj)
	{
		((UImgMediaProcessEXROptions*)Obj)->bUsePlayer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UImgMediaProcessEXROptions_Statics::NewProp_bUsePlayer = { "bUsePlayer", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UImgMediaProcessEXROptions), &Z_Construct_UClass_UImgMediaProcessEXROptions_Statics::NewProp_bUsePlayer_SetBit, METADATA_PARAMS(Z_Construct_UClass_UImgMediaProcessEXROptions_Statics::NewProp_bUsePlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UImgMediaProcessEXROptions_Statics::NewProp_bUsePlayer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImgMediaProcessEXROptions_Statics::NewProp_NumTilesX_MetaData[] = {
		{ "Category", "Tiles" },
		{ "Comment", "/** Number of tiles in the X direction. If 0, then there are no tiles. */" },
		{ "ModuleRelativePath", "Private/Widgets/ImgMediaProcessEXROptions.h" },
		{ "ToolTip", "Number of tiles in the X direction. If 0, then there are no tiles." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UImgMediaProcessEXROptions_Statics::NewProp_NumTilesX = { "NumTilesX", nullptr, (EPropertyFlags)0x0010000000022001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UImgMediaProcessEXROptions, NumTilesX), METADATA_PARAMS(Z_Construct_UClass_UImgMediaProcessEXROptions_Statics::NewProp_NumTilesX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UImgMediaProcessEXROptions_Statics::NewProp_NumTilesX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImgMediaProcessEXROptions_Statics::NewProp_NumTilesY_MetaData[] = {
		{ "Category", "Tiles" },
		{ "Comment", "/** Number of tiles in the Y direction. If 0, then there are no tiles. */" },
		{ "ModuleRelativePath", "Private/Widgets/ImgMediaProcessEXROptions.h" },
		{ "ToolTip", "Number of tiles in the Y direction. If 0, then there are no tiles." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UImgMediaProcessEXROptions_Statics::NewProp_NumTilesY = { "NumTilesY", nullptr, (EPropertyFlags)0x0010000000022001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UImgMediaProcessEXROptions, NumTilesY), METADATA_PARAMS(Z_Construct_UClass_UImgMediaProcessEXROptions_Statics::NewProp_NumTilesY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UImgMediaProcessEXROptions_Statics::NewProp_NumTilesY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImgMediaProcessEXROptions_Statics::NewProp_bEnableMipLevelTint_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** Tint each mip level a different colour to help with debugging. */" },
		{ "ModuleRelativePath", "Private/Widgets/ImgMediaProcessEXROptions.h" },
		{ "ToolTip", "Tint each mip level a different colour to help with debugging." },
	};
#endif
	void Z_Construct_UClass_UImgMediaProcessEXROptions_Statics::NewProp_bEnableMipLevelTint_SetBit(void* Obj)
	{
		((UImgMediaProcessEXROptions*)Obj)->bEnableMipLevelTint = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UImgMediaProcessEXROptions_Statics::NewProp_bEnableMipLevelTint = { "bEnableMipLevelTint", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UImgMediaProcessEXROptions), &Z_Construct_UClass_UImgMediaProcessEXROptions_Statics::NewProp_bEnableMipLevelTint_SetBit, METADATA_PARAMS(Z_Construct_UClass_UImgMediaProcessEXROptions_Statics::NewProp_bEnableMipLevelTint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UImgMediaProcessEXROptions_Statics::NewProp_bEnableMipLevelTint_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UImgMediaProcessEXROptions_Statics::NewProp_MipLevelTints_Inner = { "MipLevelTints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImgMediaProcessEXROptions_Statics::NewProp_MipLevelTints_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** Colour to tint each mip level. */" },
		{ "ModuleRelativePath", "Private/Widgets/ImgMediaProcessEXROptions.h" },
		{ "ToolTip", "Colour to tint each mip level." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UImgMediaProcessEXROptions_Statics::NewProp_MipLevelTints = { "MipLevelTints", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UImgMediaProcessEXROptions, MipLevelTints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UImgMediaProcessEXROptions_Statics::NewProp_MipLevelTints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UImgMediaProcessEXROptions_Statics::NewProp_MipLevelTints_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UImgMediaProcessEXROptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImgMediaProcessEXROptions_Statics::NewProp_InputPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImgMediaProcessEXROptions_Statics::NewProp_OutputPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImgMediaProcessEXROptions_Statics::NewProp_bEnableMipMapping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImgMediaProcessEXROptions_Statics::NewProp_bEnableTiling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImgMediaProcessEXROptions_Statics::NewProp_TileSizeX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImgMediaProcessEXROptions_Statics::NewProp_TileSizeY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImgMediaProcessEXROptions_Statics::NewProp_NumThreads,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImgMediaProcessEXROptions_Statics::NewProp_bUsePlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImgMediaProcessEXROptions_Statics::NewProp_NumTilesX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImgMediaProcessEXROptions_Statics::NewProp_NumTilesY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImgMediaProcessEXROptions_Statics::NewProp_bEnableMipLevelTint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImgMediaProcessEXROptions_Statics::NewProp_MipLevelTints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImgMediaProcessEXROptions_Statics::NewProp_MipLevelTints,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UImgMediaProcessEXROptions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UImgMediaProcessEXROptions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UImgMediaProcessEXROptions_Statics::ClassParams = {
		&UImgMediaProcessEXROptions::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UImgMediaProcessEXROptions_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UImgMediaProcessEXROptions_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UImgMediaProcessEXROptions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UImgMediaProcessEXROptions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UImgMediaProcessEXROptions()
	{
		if (!Z_Registration_Info_UClass_UImgMediaProcessEXROptions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UImgMediaProcessEXROptions.OuterSingleton, Z_Construct_UClass_UImgMediaProcessEXROptions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UImgMediaProcessEXROptions.OuterSingleton;
	}
	template<> IMGMEDIAEDITOR_API UClass* StaticClass<UImgMediaProcessEXROptions>()
	{
		return UImgMediaProcessEXROptions::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UImgMediaProcessEXROptions);
	UImgMediaProcessEXROptions::~UImgMediaProcessEXROptions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_ImgMedia_Source_ImgMediaEditor_Private_Widgets_ImgMediaProcessEXROptions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_ImgMedia_Source_ImgMediaEditor_Private_Widgets_ImgMediaProcessEXROptions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UImgMediaProcessEXROptions, UImgMediaProcessEXROptions::StaticClass, TEXT("UImgMediaProcessEXROptions"), &Z_Registration_Info_UClass_UImgMediaProcessEXROptions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UImgMediaProcessEXROptions), 2590742897U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_ImgMedia_Source_ImgMediaEditor_Private_Widgets_ImgMediaProcessEXROptions_h_1349501881(TEXT("/Script/ImgMediaEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_ImgMedia_Source_ImgMediaEditor_Private_Widgets_ImgMediaProcessEXROptions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_ImgMedia_Source_ImgMediaEditor_Private_Widgets_ImgMediaProcessEXROptions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
