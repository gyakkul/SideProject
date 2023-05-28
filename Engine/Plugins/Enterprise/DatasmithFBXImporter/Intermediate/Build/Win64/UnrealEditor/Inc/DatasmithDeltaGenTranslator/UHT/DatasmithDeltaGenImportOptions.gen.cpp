// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/DatasmithDeltaGenImportOptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatasmithDeltaGenImportOptions() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
	DATASMITHDELTAGENTRANSLATOR_API UClass* Z_Construct_UClass_UDatasmithDeltaGenImportOptions();
	DATASMITHDELTAGENTRANSLATOR_API UClass* Z_Construct_UClass_UDatasmithDeltaGenImportOptions_NoRegister();
	DATASMITHDELTAGENTRANSLATOR_API UEnum* Z_Construct_UEnum_DatasmithDeltaGenTranslator_EShadowTextureMode();
	DATASMITHFBXTRANSLATOR_API UClass* Z_Construct_UClass_UDatasmithFBXImportOptions();
	UPackage* Z_Construct_UPackage__Script_DatasmithDeltaGenTranslator();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EShadowTextureMode;
	static UEnum* EShadowTextureMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EShadowTextureMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EShadowTextureMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DatasmithDeltaGenTranslator_EShadowTextureMode, (UObject*)Z_Construct_UPackage__Script_DatasmithDeltaGenTranslator(), TEXT("EShadowTextureMode"));
		}
		return Z_Registration_Info_UEnum_EShadowTextureMode.OuterSingleton;
	}
	template<> DATASMITHDELTAGENTRANSLATOR_API UEnum* StaticEnum<EShadowTextureMode>()
	{
		return EShadowTextureMode_StaticEnum();
	}
	struct Z_Construct_UEnum_DatasmithDeltaGenTranslator_EShadowTextureMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DatasmithDeltaGenTranslator_EShadowTextureMode_Statics::Enumerators[] = {
		{ "EShadowTextureMode::Ignore", (int64)EShadowTextureMode::Ignore },
		{ "EShadowTextureMode::AmbientOcclusion", (int64)EShadowTextureMode::AmbientOcclusion },
		{ "EShadowTextureMode::Multiplier", (int64)EShadowTextureMode::Multiplier },
		{ "EShadowTextureMode::AmbientOcclusionAndMultiplier", (int64)EShadowTextureMode::AmbientOcclusionAndMultiplier },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DatasmithDeltaGenTranslator_EShadowTextureMode_Statics::Enum_MetaDataParams[] = {
		{ "AmbientOcclusion.Name", "EShadowTextureMode::AmbientOcclusion" },
		{ "AmbientOcclusion.Tooltip", "Use shadow textures as ambient occlusion maps" },
		{ "AmbientOcclusionAndMultiplier.Name", "EShadowTextureMode::AmbientOcclusionAndMultiplier" },
		{ "AmbientOcclusionAndMultiplier.Tooltip", "Use shadow textures as ambient occlusion maps as well as multipliers for base color and specular" },
		{ "Ignore.Name", "EShadowTextureMode::Ignore" },
		{ "Ignore.Tooltip", "Ignore exported shadow textures" },
		{ "ModuleRelativePath", "Private/DatasmithDeltaGenImportOptions.h" },
		{ "Multiplier.Name", "EShadowTextureMode::Multiplier" },
		{ "Multiplier.Tooltip", "Use shadow textures as multipliers for base color and specular" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DatasmithDeltaGenTranslator_EShadowTextureMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DatasmithDeltaGenTranslator,
		nullptr,
		"EShadowTextureMode",
		"EShadowTextureMode",
		Z_Construct_UEnum_DatasmithDeltaGenTranslator_EShadowTextureMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DatasmithDeltaGenTranslator_EShadowTextureMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DatasmithDeltaGenTranslator_EShadowTextureMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DatasmithDeltaGenTranslator_EShadowTextureMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DatasmithDeltaGenTranslator_EShadowTextureMode()
	{
		if (!Z_Registration_Info_UEnum_EShadowTextureMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EShadowTextureMode.InnerSingleton, Z_Construct_UEnum_DatasmithDeltaGenTranslator_EShadowTextureMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EShadowTextureMode.InnerSingleton;
	}
	void UDatasmithDeltaGenImportOptions::StaticRegisterNativesUDatasmithDeltaGenImportOptions()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithDeltaGenImportOptions);
	UClass* Z_Construct_UClass_UDatasmithDeltaGenImportOptions_NoRegister()
	{
		return UDatasmithDeltaGenImportOptions::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithDeltaGenImportOptions_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveInvisibleNodes_MetaData[];
#endif
		static void NewProp_bRemoveInvisibleNodes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveInvisibleNodes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSimplifyNodeHierarchy_MetaData[];
#endif
		static void NewProp_bSimplifyNodeHierarchy_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSimplifyNodeHierarchy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bImportVar_MetaData[];
#endif
		static void NewProp_bImportVar_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportVar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VarPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VarPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bImportPos_MetaData[];
#endif
		static void NewProp_bImportPos_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportPos;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PosPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PosPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bImportTml_MetaData[];
#endif
		static void NewProp_bImportTml_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportTml;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TmlPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TmlPath;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ShadowTextureMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShadowTextureMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ShadowTextureMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithDeltaGenImportOptions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDatasmithFBXImportOptions,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithDeltaGenTranslator,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithDeltaGenImportOptions_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Debug DebugProperty" },
		{ "IncludePath", "DatasmithDeltaGenImportOptions.h" },
		{ "ModuleRelativePath", "Private/DatasmithDeltaGenImportOptions.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithDeltaGenImportOptions_Statics::NewProp_bRemoveInvisibleNodes_MetaData[] = {
		{ "Category", "Processing" },
		{ "ModuleRelativePath", "Private/DatasmithDeltaGenImportOptions.h" },
		{ "ToolTip", "Don't keep nodes that marked invisible in FBX(an din the original scene), except switch variants" },
	};
#endif
	void Z_Construct_UClass_UDatasmithDeltaGenImportOptions_Statics::NewProp_bRemoveInvisibleNodes_SetBit(void* Obj)
	{
		((UDatasmithDeltaGenImportOptions*)Obj)->bRemoveInvisibleNodes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDatasmithDeltaGenImportOptions_Statics::NewProp_bRemoveInvisibleNodes = { "bRemoveInvisibleNodes", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDatasmithDeltaGenImportOptions), &Z_Construct_UClass_UDatasmithDeltaGenImportOptions_Statics::NewProp_bRemoveInvisibleNodes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDatasmithDeltaGenImportOptions_Statics::NewProp_bRemoveInvisibleNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithDeltaGenImportOptions_Statics::NewProp_bRemoveInvisibleNodes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithDeltaGenImportOptions_Statics::NewProp_bSimplifyNodeHierarchy_MetaData[] = {
		{ "Category", "Processing" },
		{ "ModuleRelativePath", "Private/DatasmithDeltaGenImportOptions.h" },
		{ "ToolTip", "Collapse nodes that have identity transform, have no mesh and not used in animation/variants/switches" },
	};
#endif
	void Z_Construct_UClass_UDatasmithDeltaGenImportOptions_Statics::NewProp_bSimplifyNodeHierarchy_SetBit(void* Obj)
	{
		((UDatasmithDeltaGenImportOptions*)Obj)->bSimplifyNodeHierarchy = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDatasmithDeltaGenImportOptions_Statics::NewProp_bSimplifyNodeHierarchy = { "bSimplifyNodeHierarchy", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDatasmithDeltaGenImportOptions), &Z_Construct_UClass_UDatasmithDeltaGenImportOptions_Statics::NewProp_bSimplifyNodeHierarchy_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDatasmithDeltaGenImportOptions_Statics::NewProp_bSimplifyNodeHierarchy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithDeltaGenImportOptions_Statics::NewProp_bSimplifyNodeHierarchy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithDeltaGenImportOptions_Statics::NewProp_bImportVar_MetaData[] = {
		{ "Category", "AssetImporting" },
		{ "DisplayName", "Import Variants" },
		{ "ModuleRelativePath", "Private/DatasmithDeltaGenImportOptions.h" },
		{ "ToolTip", "import VAR files" },
	};
#endif
	void Z_Construct_UClass_UDatasmithDeltaGenImportOptions_Statics::NewProp_bImportVar_SetBit(void* Obj)
	{
		((UDatasmithDeltaGenImportOptions*)Obj)->bImportVar = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDatasmithDeltaGenImportOptions_Statics::NewProp_bImportVar = { "bImportVar", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDatasmithDeltaGenImportOptions), &Z_Construct_UClass_UDatasmithDeltaGenImportOptions_Statics::NewProp_bImportVar_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDatasmithDeltaGenImportOptions_Statics::NewProp_bImportVar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithDeltaGenImportOptions_Statics::NewProp_bImportVar_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithDeltaGenImportOptions_Statics::NewProp_VarPath_MetaData[] = {
		{ "Category", "AssetImporting" },
		{ "DisplayName", "Variants file path" },
		{ "EditCondition", "bImportVar" },
		{ "FilePathFilter", "var" },
		{ "ModuleRelativePath", "Private/DatasmithDeltaGenImportOptions.h" },
		{ "ToolTip", "Path to the *.var file. By default it will search for a *.var file in the same folder as the FBX file, with the same base filename as it" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDatasmithDeltaGenImportOptions_Statics::NewProp_VarPath = { "VarPath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithDeltaGenImportOptions, VarPath), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UClass_UDatasmithDeltaGenImportOptions_Statics::NewProp_VarPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithDeltaGenImportOptions_Statics::NewProp_VarPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithDeltaGenImportOptions_Statics::NewProp_bImportPos_MetaData[] = {
		{ "Category", "AssetImporting" },
		{ "DisplayName", "Import POS States" },
		{ "ModuleRelativePath", "Private/DatasmithDeltaGenImportOptions.h" },
		{ "ToolTip", "import POS files" },
	};
#endif
	void Z_Construct_UClass_UDatasmithDeltaGenImportOptions_Statics::NewProp_bImportPos_SetBit(void* Obj)
	{
		((UDatasmithDeltaGenImportOptions*)Obj)->bImportPos = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDatasmithDeltaGenImportOptions_Statics::NewProp_bImportPos = { "bImportPos", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDatasmithDeltaGenImportOptions), &Z_Construct_UClass_UDatasmithDeltaGenImportOptions_Statics::NewProp_bImportPos_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDatasmithDeltaGenImportOptions_Statics::NewProp_bImportPos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithDeltaGenImportOptions_Statics::NewProp_bImportPos_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithDeltaGenImportOptions_Statics::NewProp_PosPath_MetaData[] = {
		{ "Category", "AssetImporting" },
		{ "DisplayName", "POS file path" },
		{ "EditCondition", "bImportPos" },
		{ "FilePathFilter", "pos" },
		{ "ModuleRelativePath", "Private/DatasmithDeltaGenImportOptions.h" },
		{ "ToolTip", "Path to the *.pos file. By default it will search for a *.pos file in the same folder as the FBX file, with the same base filename as it" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDatasmithDeltaGenImportOptions_Statics::NewProp_PosPath = { "PosPath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithDeltaGenImportOptions, PosPath), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UClass_UDatasmithDeltaGenImportOptions_Statics::NewProp_PosPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithDeltaGenImportOptions_Statics::NewProp_PosPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithDeltaGenImportOptions_Statics::NewProp_bImportTml_MetaData[] = {
		{ "Category", "AssetImporting" },
		{ "DisplayName", "Import TML Animations" },
		{ "ModuleRelativePath", "Private/DatasmithDeltaGenImportOptions.h" },
		{ "ToolTip", "import TML files" },
	};
#endif
	void Z_Construct_UClass_UDatasmithDeltaGenImportOptions_Statics::NewProp_bImportTml_SetBit(void* Obj)
	{
		((UDatasmithDeltaGenImportOptions*)Obj)->bImportTml = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDatasmithDeltaGenImportOptions_Statics::NewProp_bImportTml = { "bImportTml", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDatasmithDeltaGenImportOptions), &Z_Construct_UClass_UDatasmithDeltaGenImportOptions_Statics::NewProp_bImportTml_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDatasmithDeltaGenImportOptions_Statics::NewProp_bImportTml_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithDeltaGenImportOptions_Statics::NewProp_bImportTml_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithDeltaGenImportOptions_Statics::NewProp_TmlPath_MetaData[] = {
		{ "Category", "AssetImporting" },
		{ "DisplayName", "TML file path" },
		{ "EditCondition", "bImportTml" },
		{ "FilePathFilter", "tml" },
		{ "ModuleRelativePath", "Private/DatasmithDeltaGenImportOptions.h" },
		{ "ToolTip", "Path to the *.tml file. By default it will search for a *.tml file in the same folder as the FBX file, with the same base filename as it" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDatasmithDeltaGenImportOptions_Statics::NewProp_TmlPath = { "TmlPath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithDeltaGenImportOptions, TmlPath), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UClass_UDatasmithDeltaGenImportOptions_Statics::NewProp_TmlPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithDeltaGenImportOptions_Statics::NewProp_TmlPath_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDatasmithDeltaGenImportOptions_Statics::NewProp_ShadowTextureMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithDeltaGenImportOptions_Statics::NewProp_ShadowTextureMode_MetaData[] = {
		{ "Category", "AssetImporting" },
		{ "DisplayName", "Shadow Textures" },
		{ "ModuleRelativePath", "Private/DatasmithDeltaGenImportOptions.h" },
		{ "ToolTip", "How to handle shadow textures" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDatasmithDeltaGenImportOptions_Statics::NewProp_ShadowTextureMode = { "ShadowTextureMode", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithDeltaGenImportOptions, ShadowTextureMode), Z_Construct_UEnum_DatasmithDeltaGenTranslator_EShadowTextureMode, METADATA_PARAMS(Z_Construct_UClass_UDatasmithDeltaGenImportOptions_Statics::NewProp_ShadowTextureMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithDeltaGenImportOptions_Statics::NewProp_ShadowTextureMode_MetaData)) }; // 3215450231
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatasmithDeltaGenImportOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithDeltaGenImportOptions_Statics::NewProp_bRemoveInvisibleNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithDeltaGenImportOptions_Statics::NewProp_bSimplifyNodeHierarchy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithDeltaGenImportOptions_Statics::NewProp_bImportVar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithDeltaGenImportOptions_Statics::NewProp_VarPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithDeltaGenImportOptions_Statics::NewProp_bImportPos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithDeltaGenImportOptions_Statics::NewProp_PosPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithDeltaGenImportOptions_Statics::NewProp_bImportTml,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithDeltaGenImportOptions_Statics::NewProp_TmlPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithDeltaGenImportOptions_Statics::NewProp_ShadowTextureMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithDeltaGenImportOptions_Statics::NewProp_ShadowTextureMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithDeltaGenImportOptions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithDeltaGenImportOptions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithDeltaGenImportOptions_Statics::ClassParams = {
		&UDatasmithDeltaGenImportOptions::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDatasmithDeltaGenImportOptions_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithDeltaGenImportOptions_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithDeltaGenImportOptions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithDeltaGenImportOptions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithDeltaGenImportOptions()
	{
		if (!Z_Registration_Info_UClass_UDatasmithDeltaGenImportOptions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithDeltaGenImportOptions.OuterSingleton, Z_Construct_UClass_UDatasmithDeltaGenImportOptions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDatasmithDeltaGenImportOptions.OuterSingleton;
	}
	template<> DATASMITHDELTAGENTRANSLATOR_API UClass* StaticClass<UDatasmithDeltaGenImportOptions>()
	{
		return UDatasmithDeltaGenImportOptions::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithDeltaGenImportOptions);
	UDatasmithDeltaGenImportOptions::~UDatasmithDeltaGenImportOptions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithFBXImporter_Source_DatasmithDeltaGenTranslator_Private_DatasmithDeltaGenImportOptions_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithFBXImporter_Source_DatasmithDeltaGenTranslator_Private_DatasmithDeltaGenImportOptions_h_Statics::EnumInfo[] = {
		{ EShadowTextureMode_StaticEnum, TEXT("EShadowTextureMode"), &Z_Registration_Info_UEnum_EShadowTextureMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3215450231U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithFBXImporter_Source_DatasmithDeltaGenTranslator_Private_DatasmithDeltaGenImportOptions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDatasmithDeltaGenImportOptions, UDatasmithDeltaGenImportOptions::StaticClass, TEXT("UDatasmithDeltaGenImportOptions"), &Z_Registration_Info_UClass_UDatasmithDeltaGenImportOptions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithDeltaGenImportOptions), 1516337913U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithFBXImporter_Source_DatasmithDeltaGenTranslator_Private_DatasmithDeltaGenImportOptions_h_1397937918(TEXT("/Script/DatasmithDeltaGenTranslator"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithFBXImporter_Source_DatasmithDeltaGenTranslator_Private_DatasmithDeltaGenImportOptions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithFBXImporter_Source_DatasmithDeltaGenTranslator_Private_DatasmithDeltaGenImportOptions_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithFBXImporter_Source_DatasmithDeltaGenTranslator_Private_DatasmithDeltaGenImportOptions_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithFBXImporter_Source_DatasmithDeltaGenTranslator_Private_DatasmithDeltaGenImportOptions_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
