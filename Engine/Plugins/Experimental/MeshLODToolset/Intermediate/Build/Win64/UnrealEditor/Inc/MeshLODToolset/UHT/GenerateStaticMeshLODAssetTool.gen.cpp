// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tools/GenerateStaticMeshLODAssetTool.h"
#include "Graphs/GenerateStaticMeshLODProcess.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGenerateStaticMeshLODAssetTool() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	MESHLODTOOLSET_API UClass* Z_Construct_UClass_UGenerateStaticMeshLODAssetTool();
	MESHLODTOOLSET_API UClass* Z_Construct_UClass_UGenerateStaticMeshLODAssetTool_NoRegister();
	MESHLODTOOLSET_API UClass* Z_Construct_UClass_UGenerateStaticMeshLODAssetToolBuilder();
	MESHLODTOOLSET_API UClass* Z_Construct_UClass_UGenerateStaticMeshLODAssetToolBuilder_NoRegister();
	MESHLODTOOLSET_API UClass* Z_Construct_UClass_UGenerateStaticMeshLODAssetToolOutputProperties();
	MESHLODTOOLSET_API UClass* Z_Construct_UClass_UGenerateStaticMeshLODAssetToolOutputProperties_NoRegister();
	MESHLODTOOLSET_API UClass* Z_Construct_UClass_UGenerateStaticMeshLODAssetToolPresetProperties();
	MESHLODTOOLSET_API UClass* Z_Construct_UClass_UGenerateStaticMeshLODAssetToolPresetProperties_NoRegister();
	MESHLODTOOLSET_API UClass* Z_Construct_UClass_UGenerateStaticMeshLODAssetToolProperties();
	MESHLODTOOLSET_API UClass* Z_Construct_UClass_UGenerateStaticMeshLODAssetToolProperties_NoRegister();
	MESHLODTOOLSET_API UClass* Z_Construct_UClass_UGenerateStaticMeshLODAssetToolTextureProperties();
	MESHLODTOOLSET_API UClass* Z_Construct_UClass_UGenerateStaticMeshLODAssetToolTextureProperties_NoRegister();
	MESHLODTOOLSET_API UClass* Z_Construct_UClass_UGenerateStaticMeshLODProcess_NoRegister();
	MESHLODTOOLSET_API UClass* Z_Construct_UClass_UStaticMeshLODGenerationSettings_NoRegister();
	MESHLODTOOLSET_API UEnum* Z_Construct_UEnum_MeshLODToolset_EGenerateLODAssetOutputMode();
	MESHLODTOOLSET_API UEnum* Z_Construct_UEnum_MeshLODToolset_EGenerateLODAssetToolPresetAction();
	MESHLODTOOLSET_API UEnum* Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLOD_BakeConstraint();
	MESHLODTOOLSET_API UScriptStruct* Z_Construct_UScriptStruct_FGenerateStaticMeshLOD_MaterialConfig();
	MESHLODTOOLSET_API UScriptStruct* Z_Construct_UScriptStruct_FGenerateStaticMeshLOD_TextureConfig();
	MESHLODTOOLSET_API UScriptStruct* Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_CollisionSettings();
	MESHLODTOOLSET_API UScriptStruct* Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_NormalsSettings();
	MESHLODTOOLSET_API UScriptStruct* Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_PreprocessSettings();
	MESHLODTOOLSET_API UScriptStruct* Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_SimplifySettings();
	MESHLODTOOLSET_API UScriptStruct* Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_TextureSettings();
	MESHLODTOOLSET_API UScriptStruct* Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_UVSettings();
	MESHLODTOOLSET_API UScriptStruct* Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcessSettings();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UCollisionGeometryVisualizationProperties_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UPhysicsObjectToolPropertySet_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMultiSelectionMeshEditingTool();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPreviewGeometry_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MeshLODToolset();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGenerateLODAssetOutputMode;
	static UEnum* EGenerateLODAssetOutputMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGenerateLODAssetOutputMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGenerateLODAssetOutputMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshLODToolset_EGenerateLODAssetOutputMode, (UObject*)Z_Construct_UPackage__Script_MeshLODToolset(), TEXT("EGenerateLODAssetOutputMode"));
		}
		return Z_Registration_Info_UEnum_EGenerateLODAssetOutputMode.OuterSingleton;
	}
	template<> MESHLODTOOLSET_API UEnum* StaticEnum<EGenerateLODAssetOutputMode>()
	{
		return EGenerateLODAssetOutputMode_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshLODToolset_EGenerateLODAssetOutputMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshLODToolset_EGenerateLODAssetOutputMode_Statics::Enumerators[] = {
		{ "EGenerateLODAssetOutputMode::CreateNewAsset", (int64)EGenerateLODAssetOutputMode::CreateNewAsset },
		{ "EGenerateLODAssetOutputMode::UpdateExistingAsset", (int64)EGenerateLODAssetOutputMode::UpdateExistingAsset },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshLODToolset_EGenerateLODAssetOutputMode_Statics::Enum_MetaDataParams[] = {
		{ "CreateNewAsset.Name", "EGenerateLODAssetOutputMode::CreateNewAsset" },
		{ "ModuleRelativePath", "Public/Tools/GenerateStaticMeshLODAssetTool.h" },
		{ "UpdateExistingAsset.Name", "EGenerateLODAssetOutputMode::UpdateExistingAsset" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshLODToolset_EGenerateLODAssetOutputMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshLODToolset,
		nullptr,
		"EGenerateLODAssetOutputMode",
		"EGenerateLODAssetOutputMode",
		Z_Construct_UEnum_MeshLODToolset_EGenerateLODAssetOutputMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshLODToolset_EGenerateLODAssetOutputMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MeshLODToolset_EGenerateLODAssetOutputMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MeshLODToolset_EGenerateLODAssetOutputMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MeshLODToolset_EGenerateLODAssetOutputMode()
	{
		if (!Z_Registration_Info_UEnum_EGenerateLODAssetOutputMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGenerateLODAssetOutputMode.InnerSingleton, Z_Construct_UEnum_MeshLODToolset_EGenerateLODAssetOutputMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGenerateLODAssetOutputMode.InnerSingleton;
	}
	void UGenerateStaticMeshLODAssetToolBuilder::StaticRegisterNativesUGenerateStaticMeshLODAssetToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGenerateStaticMeshLODAssetToolBuilder);
	UClass* Z_Construct_UClass_UGenerateStaticMeshLODAssetToolBuilder_NoRegister()
	{
		return UGenerateStaticMeshLODAssetToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UGenerateStaticMeshLODAssetToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGenerateStaticMeshLODAssetToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshLODToolset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateStaticMeshLODAssetToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Tool builder\n */" },
		{ "IncludePath", "Tools/GenerateStaticMeshLODAssetTool.h" },
		{ "ModuleRelativePath", "Public/Tools/GenerateStaticMeshLODAssetTool.h" },
		{ "ToolTip", "Tool builder" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGenerateStaticMeshLODAssetToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGenerateStaticMeshLODAssetToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGenerateStaticMeshLODAssetToolBuilder_Statics::ClassParams = {
		&UGenerateStaticMeshLODAssetToolBuilder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UGenerateStaticMeshLODAssetToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateStaticMeshLODAssetToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGenerateStaticMeshLODAssetToolBuilder()
	{
		if (!Z_Registration_Info_UClass_UGenerateStaticMeshLODAssetToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGenerateStaticMeshLODAssetToolBuilder.OuterSingleton, Z_Construct_UClass_UGenerateStaticMeshLODAssetToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGenerateStaticMeshLODAssetToolBuilder.OuterSingleton;
	}
	template<> MESHLODTOOLSET_API UClass* StaticClass<UGenerateStaticMeshLODAssetToolBuilder>()
	{
		return UGenerateStaticMeshLODAssetToolBuilder::StaticClass();
	}
	UGenerateStaticMeshLODAssetToolBuilder::UGenerateStaticMeshLODAssetToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGenerateStaticMeshLODAssetToolBuilder);
	UGenerateStaticMeshLODAssetToolBuilder::~UGenerateStaticMeshLODAssetToolBuilder() {}
	void UGenerateStaticMeshLODAssetToolOutputProperties::StaticRegisterNativesUGenerateStaticMeshLODAssetToolOutputProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGenerateStaticMeshLODAssetToolOutputProperties);
	UClass* Z_Construct_UClass_UGenerateStaticMeshLODAssetToolOutputProperties_NoRegister()
	{
		return UGenerateStaticMeshLODAssetToolOutputProperties::StaticClass();
	}
	struct Z_Construct_UClass_UGenerateStaticMeshLODAssetToolOutputProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutputMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutputMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewAssetName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NewAssetName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSaveInputAsHiResSource_MetaData[];
#endif
		static void NewProp_bSaveInputAsHiResSource_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSaveInputAsHiResSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedSuffix_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_GeneratedSuffix;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowOutputMode_MetaData[];
#endif
		static void NewProp_bShowOutputMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowOutputMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGenerateStaticMeshLODAssetToolOutputProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshLODToolset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateStaticMeshLODAssetToolOutputProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tools/GenerateStaticMeshLODAssetTool.h" },
		{ "ModuleRelativePath", "Public/Tools/GenerateStaticMeshLODAssetTool.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGenerateStaticMeshLODAssetToolOutputProperties_Statics::NewProp_OutputMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateStaticMeshLODAssetToolOutputProperties_Statics::NewProp_OutputMode_MetaData[] = {
		{ "Category", "Output Options" },
		{ "Comment", "/** Whether to modify the static mesh in place or create a new one. */" },
		{ "EditCondition", "bShowOutputMode" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Tools/GenerateStaticMeshLODAssetTool.h" },
		{ "ToolTip", "Whether to modify the static mesh in place or create a new one." },
		{ "TransientToolProperty", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGenerateStaticMeshLODAssetToolOutputProperties_Statics::NewProp_OutputMode = { "OutputMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGenerateStaticMeshLODAssetToolOutputProperties, OutputMode), Z_Construct_UEnum_MeshLODToolset_EGenerateLODAssetOutputMode, METADATA_PARAMS(Z_Construct_UClass_UGenerateStaticMeshLODAssetToolOutputProperties_Statics::NewProp_OutputMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateStaticMeshLODAssetToolOutputProperties_Statics::NewProp_OutputMode_MetaData)) }; // 2818454331
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateStaticMeshLODAssetToolOutputProperties_Statics::NewProp_NewAssetName_MetaData[] = {
		{ "Category", "Output Options" },
		{ "Comment", "/** Base name for newly-generated asset */" },
		{ "EditCondition", "OutputMode == EGenerateLODAssetOutputMode::CreateNewAsset" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Tools/GenerateStaticMeshLODAssetTool.h" },
		{ "ToolTip", "Base name for newly-generated asset" },
		{ "TransientToolProperty", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGenerateStaticMeshLODAssetToolOutputProperties_Statics::NewProp_NewAssetName = { "NewAssetName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGenerateStaticMeshLODAssetToolOutputProperties, NewAssetName), METADATA_PARAMS(Z_Construct_UClass_UGenerateStaticMeshLODAssetToolOutputProperties_Statics::NewProp_NewAssetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateStaticMeshLODAssetToolOutputProperties_Statics::NewProp_NewAssetName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateStaticMeshLODAssetToolOutputProperties_Statics::NewProp_bSaveInputAsHiResSource_MetaData[] = {
		{ "Category", "Output Options" },
		{ "Comment", "/** If the Asset doesn't already have a HiRes source, store the input mesh as the HiRes source */" },
		{ "EditCondition", "OutputMode == EGenerateLODAssetOutputMode::UpdateExistingAsset" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Tools/GenerateStaticMeshLODAssetTool.h" },
		{ "ToolTip", "If the Asset doesn't already have a HiRes source, store the input mesh as the HiRes source" },
	};
#endif
	void Z_Construct_UClass_UGenerateStaticMeshLODAssetToolOutputProperties_Statics::NewProp_bSaveInputAsHiResSource_SetBit(void* Obj)
	{
		((UGenerateStaticMeshLODAssetToolOutputProperties*)Obj)->bSaveInputAsHiResSource = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGenerateStaticMeshLODAssetToolOutputProperties_Statics::NewProp_bSaveInputAsHiResSource = { "bSaveInputAsHiResSource", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGenerateStaticMeshLODAssetToolOutputProperties), &Z_Construct_UClass_UGenerateStaticMeshLODAssetToolOutputProperties_Statics::NewProp_bSaveInputAsHiResSource_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGenerateStaticMeshLODAssetToolOutputProperties_Statics::NewProp_bSaveInputAsHiResSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateStaticMeshLODAssetToolOutputProperties_Statics::NewProp_bSaveInputAsHiResSource_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateStaticMeshLODAssetToolOutputProperties_Statics::NewProp_GeneratedSuffix_MetaData[] = {
		{ "Category", "Output Options" },
		{ "Comment", "/** Suffix to append to newly-generated Asset (Meshes, Textures, Materials, etc) */" },
		{ "ModuleRelativePath", "Public/Tools/GenerateStaticMeshLODAssetTool.h" },
		{ "ToolTip", "Suffix to append to newly-generated Asset (Meshes, Textures, Materials, etc)" },
		{ "TransientToolProperty", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGenerateStaticMeshLODAssetToolOutputProperties_Statics::NewProp_GeneratedSuffix = { "GeneratedSuffix", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGenerateStaticMeshLODAssetToolOutputProperties, GeneratedSuffix), METADATA_PARAMS(Z_Construct_UClass_UGenerateStaticMeshLODAssetToolOutputProperties_Statics::NewProp_GeneratedSuffix_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateStaticMeshLODAssetToolOutputProperties_Statics::NewProp_GeneratedSuffix_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateStaticMeshLODAssetToolOutputProperties_Statics::NewProp_bShowOutputMode_MetaData[] = {
		{ "Comment", "/** If false, then OutputMode will not be shown in DetailsView panels (otherwise no effect) */" },
		{ "ModuleRelativePath", "Public/Tools/GenerateStaticMeshLODAssetTool.h" },
		{ "ToolTip", "If false, then OutputMode will not be shown in DetailsView panels (otherwise no effect)" },
		{ "TransientToolProperty", "" },
	};
#endif
	void Z_Construct_UClass_UGenerateStaticMeshLODAssetToolOutputProperties_Statics::NewProp_bShowOutputMode_SetBit(void* Obj)
	{
		((UGenerateStaticMeshLODAssetToolOutputProperties*)Obj)->bShowOutputMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGenerateStaticMeshLODAssetToolOutputProperties_Statics::NewProp_bShowOutputMode = { "bShowOutputMode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGenerateStaticMeshLODAssetToolOutputProperties), &Z_Construct_UClass_UGenerateStaticMeshLODAssetToolOutputProperties_Statics::NewProp_bShowOutputMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGenerateStaticMeshLODAssetToolOutputProperties_Statics::NewProp_bShowOutputMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateStaticMeshLODAssetToolOutputProperties_Statics::NewProp_bShowOutputMode_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGenerateStaticMeshLODAssetToolOutputProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateStaticMeshLODAssetToolOutputProperties_Statics::NewProp_OutputMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateStaticMeshLODAssetToolOutputProperties_Statics::NewProp_OutputMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateStaticMeshLODAssetToolOutputProperties_Statics::NewProp_NewAssetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateStaticMeshLODAssetToolOutputProperties_Statics::NewProp_bSaveInputAsHiResSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateStaticMeshLODAssetToolOutputProperties_Statics::NewProp_GeneratedSuffix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateStaticMeshLODAssetToolOutputProperties_Statics::NewProp_bShowOutputMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGenerateStaticMeshLODAssetToolOutputProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGenerateStaticMeshLODAssetToolOutputProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGenerateStaticMeshLODAssetToolOutputProperties_Statics::ClassParams = {
		&UGenerateStaticMeshLODAssetToolOutputProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGenerateStaticMeshLODAssetToolOutputProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateStaticMeshLODAssetToolOutputProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UGenerateStaticMeshLODAssetToolOutputProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateStaticMeshLODAssetToolOutputProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGenerateStaticMeshLODAssetToolOutputProperties()
	{
		if (!Z_Registration_Info_UClass_UGenerateStaticMeshLODAssetToolOutputProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGenerateStaticMeshLODAssetToolOutputProperties.OuterSingleton, Z_Construct_UClass_UGenerateStaticMeshLODAssetToolOutputProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGenerateStaticMeshLODAssetToolOutputProperties.OuterSingleton;
	}
	template<> MESHLODTOOLSET_API UClass* StaticClass<UGenerateStaticMeshLODAssetToolOutputProperties>()
	{
		return UGenerateStaticMeshLODAssetToolOutputProperties::StaticClass();
	}
	UGenerateStaticMeshLODAssetToolOutputProperties::UGenerateStaticMeshLODAssetToolOutputProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGenerateStaticMeshLODAssetToolOutputProperties);
	UGenerateStaticMeshLODAssetToolOutputProperties::~UGenerateStaticMeshLODAssetToolOutputProperties() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGenerateLODAssetToolPresetAction;
	static UEnum* EGenerateLODAssetToolPresetAction_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGenerateLODAssetToolPresetAction.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGenerateLODAssetToolPresetAction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshLODToolset_EGenerateLODAssetToolPresetAction, (UObject*)Z_Construct_UPackage__Script_MeshLODToolset(), TEXT("EGenerateLODAssetToolPresetAction"));
		}
		return Z_Registration_Info_UEnum_EGenerateLODAssetToolPresetAction.OuterSingleton;
	}
	template<> MESHLODTOOLSET_API UEnum* StaticEnum<EGenerateLODAssetToolPresetAction>()
	{
		return EGenerateLODAssetToolPresetAction_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshLODToolset_EGenerateLODAssetToolPresetAction_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshLODToolset_EGenerateLODAssetToolPresetAction_Statics::Enumerators[] = {
		{ "EGenerateLODAssetToolPresetAction::ReadFromPreset", (int64)EGenerateLODAssetToolPresetAction::ReadFromPreset },
		{ "EGenerateLODAssetToolPresetAction::WriteToPreset", (int64)EGenerateLODAssetToolPresetAction::WriteToPreset },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshLODToolset_EGenerateLODAssetToolPresetAction_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tools/GenerateStaticMeshLODAssetTool.h" },
		{ "ReadFromPreset.Name", "EGenerateLODAssetToolPresetAction::ReadFromPreset" },
		{ "WriteToPreset.Name", "EGenerateLODAssetToolPresetAction::WriteToPreset" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshLODToolset_EGenerateLODAssetToolPresetAction_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshLODToolset,
		nullptr,
		"EGenerateLODAssetToolPresetAction",
		"EGenerateLODAssetToolPresetAction",
		Z_Construct_UEnum_MeshLODToolset_EGenerateLODAssetToolPresetAction_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshLODToolset_EGenerateLODAssetToolPresetAction_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MeshLODToolset_EGenerateLODAssetToolPresetAction_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MeshLODToolset_EGenerateLODAssetToolPresetAction_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MeshLODToolset_EGenerateLODAssetToolPresetAction()
	{
		if (!Z_Registration_Info_UEnum_EGenerateLODAssetToolPresetAction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGenerateLODAssetToolPresetAction.InnerSingleton, Z_Construct_UEnum_MeshLODToolset_EGenerateLODAssetToolPresetAction_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGenerateLODAssetToolPresetAction.InnerSingleton;
	}
	DEFINE_FUNCTION(UGenerateStaticMeshLODAssetToolPresetProperties::execWriteToPreset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->WriteToPreset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGenerateStaticMeshLODAssetToolPresetProperties::execReadFromPreset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReadFromPreset();
		P_NATIVE_END;
	}
	void UGenerateStaticMeshLODAssetToolPresetProperties::StaticRegisterNativesUGenerateStaticMeshLODAssetToolPresetProperties()
	{
		UClass* Class = UGenerateStaticMeshLODAssetToolPresetProperties::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReadFromPreset", &UGenerateStaticMeshLODAssetToolPresetProperties::execReadFromPreset },
			{ "WriteToPreset", &UGenerateStaticMeshLODAssetToolPresetProperties::execWriteToPreset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGenerateStaticMeshLODAssetToolPresetProperties_ReadFromPreset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGenerateStaticMeshLODAssetToolPresetProperties_ReadFromPreset_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Preset" },
		{ "Comment", "/** Save the current Tool settings to the Preset Asset */" },
		{ "DisplayPriority", "0" },
		{ "ModuleRelativePath", "Public/Tools/GenerateStaticMeshLODAssetTool.h" },
		{ "ToolTip", "Save the current Tool settings to the Preset Asset" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGenerateStaticMeshLODAssetToolPresetProperties_ReadFromPreset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGenerateStaticMeshLODAssetToolPresetProperties, nullptr, "ReadFromPreset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGenerateStaticMeshLODAssetToolPresetProperties_ReadFromPreset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGenerateStaticMeshLODAssetToolPresetProperties_ReadFromPreset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGenerateStaticMeshLODAssetToolPresetProperties_ReadFromPreset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGenerateStaticMeshLODAssetToolPresetProperties_ReadFromPreset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGenerateStaticMeshLODAssetToolPresetProperties_WriteToPreset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGenerateStaticMeshLODAssetToolPresetProperties_WriteToPreset_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Preset" },
		{ "Comment", "/** Read the current Tool settings from the Preset Asset */" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Public/Tools/GenerateStaticMeshLODAssetTool.h" },
		{ "ToolTip", "Read the current Tool settings from the Preset Asset" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGenerateStaticMeshLODAssetToolPresetProperties_WriteToPreset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGenerateStaticMeshLODAssetToolPresetProperties, nullptr, "WriteToPreset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGenerateStaticMeshLODAssetToolPresetProperties_WriteToPreset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGenerateStaticMeshLODAssetToolPresetProperties_WriteToPreset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGenerateStaticMeshLODAssetToolPresetProperties_WriteToPreset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGenerateStaticMeshLODAssetToolPresetProperties_WriteToPreset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGenerateStaticMeshLODAssetToolPresetProperties);
	UClass* Z_Construct_UClass_UGenerateStaticMeshLODAssetToolPresetProperties_NoRegister()
	{
		return UGenerateStaticMeshLODAssetToolPresetProperties::StaticClass();
	}
	struct Z_Construct_UClass_UGenerateStaticMeshLODAssetToolPresetProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Preset_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Preset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGenerateStaticMeshLODAssetToolPresetProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshLODToolset,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGenerateStaticMeshLODAssetToolPresetProperties_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGenerateStaticMeshLODAssetToolPresetProperties_ReadFromPreset, "ReadFromPreset" }, // 3755090766
		{ &Z_Construct_UFunction_UGenerateStaticMeshLODAssetToolPresetProperties_WriteToPreset, "WriteToPreset" }, // 3108465727
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateStaticMeshLODAssetToolPresetProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tools/GenerateStaticMeshLODAssetTool.h" },
		{ "ModuleRelativePath", "Public/Tools/GenerateStaticMeshLODAssetTool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateStaticMeshLODAssetToolPresetProperties_Statics::NewProp_Preset_MetaData[] = {
		{ "Category", "Preset" },
		{ "Comment", "/** Preset Asset represents a set of Saved Settings for this Tool */" },
		{ "DisplayName", "Settings Preset" },
		{ "ModuleRelativePath", "Public/Tools/GenerateStaticMeshLODAssetTool.h" },
		{ "ToolTip", "Preset Asset represents a set of Saved Settings for this Tool" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UGenerateStaticMeshLODAssetToolPresetProperties_Statics::NewProp_Preset = { "Preset", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGenerateStaticMeshLODAssetToolPresetProperties, Preset), Z_Construct_UClass_UStaticMeshLODGenerationSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGenerateStaticMeshLODAssetToolPresetProperties_Statics::NewProp_Preset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateStaticMeshLODAssetToolPresetProperties_Statics::NewProp_Preset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGenerateStaticMeshLODAssetToolPresetProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateStaticMeshLODAssetToolPresetProperties_Statics::NewProp_Preset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGenerateStaticMeshLODAssetToolPresetProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGenerateStaticMeshLODAssetToolPresetProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGenerateStaticMeshLODAssetToolPresetProperties_Statics::ClassParams = {
		&UGenerateStaticMeshLODAssetToolPresetProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGenerateStaticMeshLODAssetToolPresetProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateStaticMeshLODAssetToolPresetProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UGenerateStaticMeshLODAssetToolPresetProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateStaticMeshLODAssetToolPresetProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGenerateStaticMeshLODAssetToolPresetProperties()
	{
		if (!Z_Registration_Info_UClass_UGenerateStaticMeshLODAssetToolPresetProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGenerateStaticMeshLODAssetToolPresetProperties.OuterSingleton, Z_Construct_UClass_UGenerateStaticMeshLODAssetToolPresetProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGenerateStaticMeshLODAssetToolPresetProperties.OuterSingleton;
	}
	template<> MESHLODTOOLSET_API UClass* StaticClass<UGenerateStaticMeshLODAssetToolPresetProperties>()
	{
		return UGenerateStaticMeshLODAssetToolPresetProperties::StaticClass();
	}
	UGenerateStaticMeshLODAssetToolPresetProperties::UGenerateStaticMeshLODAssetToolPresetProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGenerateStaticMeshLODAssetToolPresetProperties);
	UGenerateStaticMeshLODAssetToolPresetProperties::~UGenerateStaticMeshLODAssetToolPresetProperties() {}
	DEFINE_FUNCTION(UGenerateStaticMeshLODAssetToolProperties::execGetGroupLayersFunc)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetGroupLayersFunc();
		P_NATIVE_END;
	}
	void UGenerateStaticMeshLODAssetToolProperties::StaticRegisterNativesUGenerateStaticMeshLODAssetToolProperties()
	{
		UClass* Class = UGenerateStaticMeshLODAssetToolProperties::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGroupLayersFunc", &UGenerateStaticMeshLODAssetToolProperties::execGetGroupLayersFunc },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGenerateStaticMeshLODAssetToolProperties_GetGroupLayersFunc_Statics
	{
		struct GenerateStaticMeshLODAssetToolProperties_eventGetGroupLayersFunc_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGenerateStaticMeshLODAssetToolProperties_GetGroupLayersFunc_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGenerateStaticMeshLODAssetToolProperties_GetGroupLayersFunc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GenerateStaticMeshLODAssetToolProperties_eventGetGroupLayersFunc_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGenerateStaticMeshLODAssetToolProperties_GetGroupLayersFunc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenerateStaticMeshLODAssetToolProperties_GetGroupLayersFunc_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGenerateStaticMeshLODAssetToolProperties_GetGroupLayersFunc_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGenerateStaticMeshLODAssetToolProperties_GetGroupLayersFunc_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// this function is called provide set of available group layers\n" },
		{ "ModuleRelativePath", "Public/Tools/GenerateStaticMeshLODAssetTool.h" },
		{ "ToolTip", "this function is called provide set of available group layers" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGenerateStaticMeshLODAssetToolProperties_GetGroupLayersFunc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGenerateStaticMeshLODAssetToolProperties, nullptr, "GetGroupLayersFunc", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGenerateStaticMeshLODAssetToolProperties_GetGroupLayersFunc_Statics::GenerateStaticMeshLODAssetToolProperties_eventGetGroupLayersFunc_Parms), Z_Construct_UFunction_UGenerateStaticMeshLODAssetToolProperties_GetGroupLayersFunc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGenerateStaticMeshLODAssetToolProperties_GetGroupLayersFunc_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGenerateStaticMeshLODAssetToolProperties_GetGroupLayersFunc_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGenerateStaticMeshLODAssetToolProperties_GetGroupLayersFunc_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGenerateStaticMeshLODAssetToolProperties_GetGroupLayersFunc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGenerateStaticMeshLODAssetToolProperties_GetGroupLayersFunc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGenerateStaticMeshLODAssetToolProperties);
	UClass* Z_Construct_UClass_UGenerateStaticMeshLODAssetToolProperties_NoRegister()
	{
		return UGenerateStaticMeshLODAssetToolProperties::StaticClass();
	}
	struct Z_Construct_UClass_UGenerateStaticMeshLODAssetToolProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Preprocessing_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Preprocessing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshGeneration_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeshGeneration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Simplification_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Simplification;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Normals_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Normals;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureBaking_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TextureBaking;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVGeneration_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UVGeneration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimpleCollision_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SimpleCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionGroupLayerName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CollisionGroupLayerName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_GroupLayersList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupLayersList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GroupLayersList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGenerateStaticMeshLODAssetToolProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshLODToolset,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGenerateStaticMeshLODAssetToolProperties_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGenerateStaticMeshLODAssetToolProperties_GetGroupLayersFunc, "GetGroupLayersFunc" }, // 1212851271
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateStaticMeshLODAssetToolProperties_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Standard properties\n */" },
		{ "IncludePath", "Tools/GenerateStaticMeshLODAssetTool.h" },
		{ "ModuleRelativePath", "Public/Tools/GenerateStaticMeshLODAssetTool.h" },
		{ "ToolTip", "Standard properties" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateStaticMeshLODAssetToolProperties_Statics::NewProp_Preprocessing_MetaData[] = {
		{ "Category", "Generator Configuration" },
		{ "ModuleRelativePath", "Public/Tools/GenerateStaticMeshLODAssetTool.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGenerateStaticMeshLODAssetToolProperties_Statics::NewProp_Preprocessing = { "Preprocessing", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGenerateStaticMeshLODAssetToolProperties, Preprocessing), Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_PreprocessSettings, METADATA_PARAMS(Z_Construct_UClass_UGenerateStaticMeshLODAssetToolProperties_Statics::NewProp_Preprocessing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateStaticMeshLODAssetToolProperties_Statics::NewProp_Preprocessing_MetaData)) }; // 2333318121
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateStaticMeshLODAssetToolProperties_Statics::NewProp_MeshGeneration_MetaData[] = {
		{ "Category", "Generator Configuration" },
		{ "ExpandByDefault", "" },
		{ "ModuleRelativePath", "Public/Tools/GenerateStaticMeshLODAssetTool.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGenerateStaticMeshLODAssetToolProperties_Statics::NewProp_MeshGeneration = { "MeshGeneration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGenerateStaticMeshLODAssetToolProperties, MeshGeneration), Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcessSettings, METADATA_PARAMS(Z_Construct_UClass_UGenerateStaticMeshLODAssetToolProperties_Statics::NewProp_MeshGeneration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateStaticMeshLODAssetToolProperties_Statics::NewProp_MeshGeneration_MetaData)) }; // 3183980117
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateStaticMeshLODAssetToolProperties_Statics::NewProp_Simplification_MetaData[] = {
		{ "Category", "Generator Configuration" },
		{ "ExpandByDefault", "" },
		{ "ModuleRelativePath", "Public/Tools/GenerateStaticMeshLODAssetTool.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGenerateStaticMeshLODAssetToolProperties_Statics::NewProp_Simplification = { "Simplification", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGenerateStaticMeshLODAssetToolProperties, Simplification), Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_SimplifySettings, METADATA_PARAMS(Z_Construct_UClass_UGenerateStaticMeshLODAssetToolProperties_Statics::NewProp_Simplification_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateStaticMeshLODAssetToolProperties_Statics::NewProp_Simplification_MetaData)) }; // 1872819562
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateStaticMeshLODAssetToolProperties_Statics::NewProp_Normals_MetaData[] = {
		{ "Category", "Generator Configuration" },
		{ "ExpandByDefault", "" },
		{ "ModuleRelativePath", "Public/Tools/GenerateStaticMeshLODAssetTool.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGenerateStaticMeshLODAssetToolProperties_Statics::NewProp_Normals = { "Normals", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGenerateStaticMeshLODAssetToolProperties, Normals), Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_NormalsSettings, METADATA_PARAMS(Z_Construct_UClass_UGenerateStaticMeshLODAssetToolProperties_Statics::NewProp_Normals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateStaticMeshLODAssetToolProperties_Statics::NewProp_Normals_MetaData)) }; // 1423837322
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateStaticMeshLODAssetToolProperties_Statics::NewProp_TextureBaking_MetaData[] = {
		{ "Category", "Generator Configuration" },
		{ "ExpandByDefault", "" },
		{ "ModuleRelativePath", "Public/Tools/GenerateStaticMeshLODAssetTool.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGenerateStaticMeshLODAssetToolProperties_Statics::NewProp_TextureBaking = { "TextureBaking", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGenerateStaticMeshLODAssetToolProperties, TextureBaking), Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_TextureSettings, METADATA_PARAMS(Z_Construct_UClass_UGenerateStaticMeshLODAssetToolProperties_Statics::NewProp_TextureBaking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateStaticMeshLODAssetToolProperties_Statics::NewProp_TextureBaking_MetaData)) }; // 1273141117
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateStaticMeshLODAssetToolProperties_Statics::NewProp_UVGeneration_MetaData[] = {
		{ "Category", "Generator Configuration" },
		{ "ModuleRelativePath", "Public/Tools/GenerateStaticMeshLODAssetTool.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGenerateStaticMeshLODAssetToolProperties_Statics::NewProp_UVGeneration = { "UVGeneration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGenerateStaticMeshLODAssetToolProperties, UVGeneration), Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_UVSettings, METADATA_PARAMS(Z_Construct_UClass_UGenerateStaticMeshLODAssetToolProperties_Statics::NewProp_UVGeneration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateStaticMeshLODAssetToolProperties_Statics::NewProp_UVGeneration_MetaData)) }; // 3025364498
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateStaticMeshLODAssetToolProperties_Statics::NewProp_SimpleCollision_MetaData[] = {
		{ "Category", "Generator Configuration" },
		{ "ModuleRelativePath", "Public/Tools/GenerateStaticMeshLODAssetTool.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGenerateStaticMeshLODAssetToolProperties_Statics::NewProp_SimpleCollision = { "SimpleCollision", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGenerateStaticMeshLODAssetToolProperties, SimpleCollision), Z_Construct_UScriptStruct_FGenerateStaticMeshLODProcess_CollisionSettings, METADATA_PARAMS(Z_Construct_UClass_UGenerateStaticMeshLODAssetToolProperties_Statics::NewProp_SimpleCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateStaticMeshLODAssetToolProperties_Statics::NewProp_SimpleCollision_MetaData)) }; // 2593582274
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateStaticMeshLODAssetToolProperties_Statics::NewProp_CollisionGroupLayerName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Group layer to use for partitioning the mesh for simple collision generation */" },
		{ "GetOptions", "GetGroupLayersFunc" },
		{ "ModuleRelativePath", "Public/Tools/GenerateStaticMeshLODAssetTool.h" },
		{ "ToolTip", "Group layer to use for partitioning the mesh for simple collision generation" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UGenerateStaticMeshLODAssetToolProperties_Statics::NewProp_CollisionGroupLayerName = { "CollisionGroupLayerName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGenerateStaticMeshLODAssetToolProperties, CollisionGroupLayerName), METADATA_PARAMS(Z_Construct_UClass_UGenerateStaticMeshLODAssetToolProperties_Statics::NewProp_CollisionGroupLayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateStaticMeshLODAssetToolProperties_Statics::NewProp_CollisionGroupLayerName_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGenerateStaticMeshLODAssetToolProperties_Statics::NewProp_GroupLayersList_Inner = { "GroupLayersList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateStaticMeshLODAssetToolProperties_Statics::NewProp_GroupLayersList_MetaData[] = {
		{ "Comment", "// internal list used to implement above\n" },
		{ "ModuleRelativePath", "Public/Tools/GenerateStaticMeshLODAssetTool.h" },
		{ "ToolTip", "internal list used to implement above" },
		{ "TransientToolProperty", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGenerateStaticMeshLODAssetToolProperties_Statics::NewProp_GroupLayersList = { "GroupLayersList", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGenerateStaticMeshLODAssetToolProperties, GroupLayersList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGenerateStaticMeshLODAssetToolProperties_Statics::NewProp_GroupLayersList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateStaticMeshLODAssetToolProperties_Statics::NewProp_GroupLayersList_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGenerateStaticMeshLODAssetToolProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateStaticMeshLODAssetToolProperties_Statics::NewProp_Preprocessing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateStaticMeshLODAssetToolProperties_Statics::NewProp_MeshGeneration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateStaticMeshLODAssetToolProperties_Statics::NewProp_Simplification,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateStaticMeshLODAssetToolProperties_Statics::NewProp_Normals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateStaticMeshLODAssetToolProperties_Statics::NewProp_TextureBaking,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateStaticMeshLODAssetToolProperties_Statics::NewProp_UVGeneration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateStaticMeshLODAssetToolProperties_Statics::NewProp_SimpleCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateStaticMeshLODAssetToolProperties_Statics::NewProp_CollisionGroupLayerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateStaticMeshLODAssetToolProperties_Statics::NewProp_GroupLayersList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateStaticMeshLODAssetToolProperties_Statics::NewProp_GroupLayersList,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGenerateStaticMeshLODAssetToolProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGenerateStaticMeshLODAssetToolProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGenerateStaticMeshLODAssetToolProperties_Statics::ClassParams = {
		&UGenerateStaticMeshLODAssetToolProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGenerateStaticMeshLODAssetToolProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateStaticMeshLODAssetToolProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UGenerateStaticMeshLODAssetToolProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateStaticMeshLODAssetToolProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGenerateStaticMeshLODAssetToolProperties()
	{
		if (!Z_Registration_Info_UClass_UGenerateStaticMeshLODAssetToolProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGenerateStaticMeshLODAssetToolProperties.OuterSingleton, Z_Construct_UClass_UGenerateStaticMeshLODAssetToolProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGenerateStaticMeshLODAssetToolProperties.OuterSingleton;
	}
	template<> MESHLODTOOLSET_API UClass* StaticClass<UGenerateStaticMeshLODAssetToolProperties>()
	{
		return UGenerateStaticMeshLODAssetToolProperties::StaticClass();
	}
	UGenerateStaticMeshLODAssetToolProperties::UGenerateStaticMeshLODAssetToolProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGenerateStaticMeshLODAssetToolProperties);
	UGenerateStaticMeshLODAssetToolProperties::~UGenerateStaticMeshLODAssetToolProperties() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGenerateStaticMeshLOD_BakeConstraint;
	static UEnum* EGenerateStaticMeshLOD_BakeConstraint_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGenerateStaticMeshLOD_BakeConstraint.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGenerateStaticMeshLOD_BakeConstraint.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLOD_BakeConstraint, (UObject*)Z_Construct_UPackage__Script_MeshLODToolset(), TEXT("EGenerateStaticMeshLOD_BakeConstraint"));
		}
		return Z_Registration_Info_UEnum_EGenerateStaticMeshLOD_BakeConstraint.OuterSingleton;
	}
	template<> MESHLODTOOLSET_API UEnum* StaticEnum<EGenerateStaticMeshLOD_BakeConstraint>()
	{
		return EGenerateStaticMeshLOD_BakeConstraint_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLOD_BakeConstraint_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLOD_BakeConstraint_Statics::Enumerators[] = {
		{ "EGenerateStaticMeshLOD_BakeConstraint::NoConstraint", (int64)EGenerateStaticMeshLOD_BakeConstraint::NoConstraint },
		{ "EGenerateStaticMeshLOD_BakeConstraint::DoNotBake", (int64)EGenerateStaticMeshLOD_BakeConstraint::DoNotBake },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLOD_BakeConstraint_Statics::Enum_MetaDataParams[] = {
		{ "DoNotBake.Name", "EGenerateStaticMeshLOD_BakeConstraint::DoNotBake" },
		{ "ModuleRelativePath", "Public/Tools/GenerateStaticMeshLODAssetTool.h" },
		{ "NoConstraint.Name", "EGenerateStaticMeshLOD_BakeConstraint::NoConstraint" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLOD_BakeConstraint_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshLODToolset,
		nullptr,
		"EGenerateStaticMeshLOD_BakeConstraint",
		"EGenerateStaticMeshLOD_BakeConstraint",
		Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLOD_BakeConstraint_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLOD_BakeConstraint_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLOD_BakeConstraint_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLOD_BakeConstraint_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLOD_BakeConstraint()
	{
		if (!Z_Registration_Info_UEnum_EGenerateStaticMeshLOD_BakeConstraint.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGenerateStaticMeshLOD_BakeConstraint.InnerSingleton, Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLOD_BakeConstraint_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGenerateStaticMeshLOD_BakeConstraint.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GenerateStaticMeshLOD_TextureConfig;
class UScriptStruct* FGenerateStaticMeshLOD_TextureConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GenerateStaticMeshLOD_TextureConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GenerateStaticMeshLOD_TextureConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGenerateStaticMeshLOD_TextureConfig, (UObject*)Z_Construct_UPackage__Script_MeshLODToolset(), TEXT("GenerateStaticMeshLOD_TextureConfig"));
	}
	return Z_Registration_Info_UScriptStruct_GenerateStaticMeshLOD_TextureConfig.OuterSingleton;
}
template<> MESHLODTOOLSET_API UScriptStruct* StaticStruct<FGenerateStaticMeshLOD_TextureConfig>()
{
	return FGenerateStaticMeshLOD_TextureConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGenerateStaticMeshLOD_TextureConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Texture;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Constraint_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Constraint_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Constraint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateStaticMeshLOD_TextureConfig_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tools/GenerateStaticMeshLODAssetTool.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGenerateStaticMeshLOD_TextureConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGenerateStaticMeshLOD_TextureConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateStaticMeshLOD_TextureConfig_Statics::NewProp_Texture_MetaData[] = {
		{ "Category", "Texture" },
		{ "ModuleRelativePath", "Public/Tools/GenerateStaticMeshLODAssetTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGenerateStaticMeshLOD_TextureConfig_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0014000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGenerateStaticMeshLOD_TextureConfig, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGenerateStaticMeshLOD_TextureConfig_Statics::NewProp_Texture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateStaticMeshLOD_TextureConfig_Statics::NewProp_Texture_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FGenerateStaticMeshLOD_TextureConfig_Statics::NewProp_Constraint_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateStaticMeshLOD_TextureConfig_Statics::NewProp_Constraint_MetaData[] = {
		{ "Category", "Texture" },
		{ "ModuleRelativePath", "Public/Tools/GenerateStaticMeshLODAssetTool.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGenerateStaticMeshLOD_TextureConfig_Statics::NewProp_Constraint = { "Constraint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGenerateStaticMeshLOD_TextureConfig, Constraint), Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLOD_BakeConstraint, METADATA_PARAMS(Z_Construct_UScriptStruct_FGenerateStaticMeshLOD_TextureConfig_Statics::NewProp_Constraint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateStaticMeshLOD_TextureConfig_Statics::NewProp_Constraint_MetaData)) }; // 1785650432
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGenerateStaticMeshLOD_TextureConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateStaticMeshLOD_TextureConfig_Statics::NewProp_Texture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateStaticMeshLOD_TextureConfig_Statics::NewProp_Constraint_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateStaticMeshLOD_TextureConfig_Statics::NewProp_Constraint,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGenerateStaticMeshLOD_TextureConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MeshLODToolset,
		nullptr,
		&NewStructOps,
		"GenerateStaticMeshLOD_TextureConfig",
		sizeof(FGenerateStaticMeshLOD_TextureConfig),
		alignof(FGenerateStaticMeshLOD_TextureConfig),
		Z_Construct_UScriptStruct_FGenerateStaticMeshLOD_TextureConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateStaticMeshLOD_TextureConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGenerateStaticMeshLOD_TextureConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateStaticMeshLOD_TextureConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGenerateStaticMeshLOD_TextureConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_GenerateStaticMeshLOD_TextureConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GenerateStaticMeshLOD_TextureConfig.InnerSingleton, Z_Construct_UScriptStruct_FGenerateStaticMeshLOD_TextureConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GenerateStaticMeshLOD_TextureConfig.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GenerateStaticMeshLOD_MaterialConfig;
class UScriptStruct* FGenerateStaticMeshLOD_MaterialConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GenerateStaticMeshLOD_MaterialConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GenerateStaticMeshLOD_MaterialConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGenerateStaticMeshLOD_MaterialConfig, (UObject*)Z_Construct_UPackage__Script_MeshLODToolset(), TEXT("GenerateStaticMeshLOD_MaterialConfig"));
	}
	return Z_Registration_Info_UScriptStruct_GenerateStaticMeshLOD_MaterialConfig.OuterSingleton;
}
template<> MESHLODTOOLSET_API UScriptStruct* StaticStruct<FGenerateStaticMeshLOD_MaterialConfig>()
{
	return FGenerateStaticMeshLOD_MaterialConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGenerateStaticMeshLOD_MaterialConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Material;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Constraint_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Constraint_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Constraint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateStaticMeshLOD_MaterialConfig_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tools/GenerateStaticMeshLODAssetTool.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGenerateStaticMeshLOD_MaterialConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGenerateStaticMeshLOD_MaterialConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateStaticMeshLOD_MaterialConfig_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/Tools/GenerateStaticMeshLODAssetTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGenerateStaticMeshLOD_MaterialConfig_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0014000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGenerateStaticMeshLOD_MaterialConfig, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGenerateStaticMeshLOD_MaterialConfig_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateStaticMeshLOD_MaterialConfig_Statics::NewProp_Material_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FGenerateStaticMeshLOD_MaterialConfig_Statics::NewProp_Constraint_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateStaticMeshLOD_MaterialConfig_Statics::NewProp_Constraint_MetaData[] = {
		{ "Category", "Texture" },
		{ "ModuleRelativePath", "Public/Tools/GenerateStaticMeshLODAssetTool.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGenerateStaticMeshLOD_MaterialConfig_Statics::NewProp_Constraint = { "Constraint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGenerateStaticMeshLOD_MaterialConfig, Constraint), Z_Construct_UEnum_MeshLODToolset_EGenerateStaticMeshLOD_BakeConstraint, METADATA_PARAMS(Z_Construct_UScriptStruct_FGenerateStaticMeshLOD_MaterialConfig_Statics::NewProp_Constraint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateStaticMeshLOD_MaterialConfig_Statics::NewProp_Constraint_MetaData)) }; // 1785650432
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGenerateStaticMeshLOD_MaterialConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateStaticMeshLOD_MaterialConfig_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateStaticMeshLOD_MaterialConfig_Statics::NewProp_Constraint_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateStaticMeshLOD_MaterialConfig_Statics::NewProp_Constraint,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGenerateStaticMeshLOD_MaterialConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MeshLODToolset,
		nullptr,
		&NewStructOps,
		"GenerateStaticMeshLOD_MaterialConfig",
		sizeof(FGenerateStaticMeshLOD_MaterialConfig),
		alignof(FGenerateStaticMeshLOD_MaterialConfig),
		Z_Construct_UScriptStruct_FGenerateStaticMeshLOD_MaterialConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateStaticMeshLOD_MaterialConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGenerateStaticMeshLOD_MaterialConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateStaticMeshLOD_MaterialConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGenerateStaticMeshLOD_MaterialConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_GenerateStaticMeshLOD_MaterialConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GenerateStaticMeshLOD_MaterialConfig.InnerSingleton, Z_Construct_UScriptStruct_FGenerateStaticMeshLOD_MaterialConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GenerateStaticMeshLOD_MaterialConfig.InnerSingleton;
	}
	void UGenerateStaticMeshLODAssetToolTextureProperties::StaticRegisterNativesUGenerateStaticMeshLODAssetToolTextureProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGenerateStaticMeshLODAssetToolTextureProperties);
	UClass* Z_Construct_UClass_UGenerateStaticMeshLODAssetToolTextureProperties_NoRegister()
	{
		return UGenerateStaticMeshLODAssetToolTextureProperties::StaticClass();
	}
	struct Z_Construct_UClass_UGenerateStaticMeshLODAssetToolTextureProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Materials_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Materials;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Textures_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Textures_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Textures;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviewTextures_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewTextures_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PreviewTextures;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGenerateStaticMeshLODAssetToolTextureProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshLODToolset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateStaticMeshLODAssetToolTextureProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tools/GenerateStaticMeshLODAssetTool.h" },
		{ "ModuleRelativePath", "Public/Tools/GenerateStaticMeshLODAssetTool.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGenerateStaticMeshLODAssetToolTextureProperties_Statics::NewProp_Materials_Inner = { "Materials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGenerateStaticMeshLOD_MaterialConfig, METADATA_PARAMS(nullptr, 0) }; // 996716787
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateStaticMeshLODAssetToolTextureProperties_Statics::NewProp_Materials_MetaData[] = {
		{ "Category", "Source Materials Configuration" },
		{ "ModuleRelativePath", "Public/Tools/GenerateStaticMeshLODAssetTool.h" },
		{ "TransientToolProperty", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGenerateStaticMeshLODAssetToolTextureProperties_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGenerateStaticMeshLODAssetToolTextureProperties, Materials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGenerateStaticMeshLODAssetToolTextureProperties_Statics::NewProp_Materials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateStaticMeshLODAssetToolTextureProperties_Statics::NewProp_Materials_MetaData)) }; // 996716787
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGenerateStaticMeshLODAssetToolTextureProperties_Statics::NewProp_Textures_Inner = { "Textures", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGenerateStaticMeshLOD_TextureConfig, METADATA_PARAMS(nullptr, 0) }; // 1956220355
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateStaticMeshLODAssetToolTextureProperties_Statics::NewProp_Textures_MetaData[] = {
		{ "Category", "Source Textures Configuration" },
		{ "ModuleRelativePath", "Public/Tools/GenerateStaticMeshLODAssetTool.h" },
		{ "TransientToolProperty", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGenerateStaticMeshLODAssetToolTextureProperties_Statics::NewProp_Textures = { "Textures", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGenerateStaticMeshLODAssetToolTextureProperties, Textures), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGenerateStaticMeshLODAssetToolTextureProperties_Statics::NewProp_Textures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateStaticMeshLODAssetToolTextureProperties_Statics::NewProp_Textures_MetaData)) }; // 1956220355
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGenerateStaticMeshLODAssetToolTextureProperties_Statics::NewProp_PreviewTextures_Inner = { "PreviewTextures", nullptr, (EPropertyFlags)0x0004000000020000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateStaticMeshLODAssetToolTextureProperties_Statics::NewProp_PreviewTextures_MetaData[] = {
		{ "Category", "Baked Texture Previews" },
		{ "ModuleRelativePath", "Public/Tools/GenerateStaticMeshLODAssetTool.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGenerateStaticMeshLODAssetToolTextureProperties_Statics::NewProp_PreviewTextures = { "PreviewTextures", nullptr, (EPropertyFlags)0x0014000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGenerateStaticMeshLODAssetToolTextureProperties, PreviewTextures), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGenerateStaticMeshLODAssetToolTextureProperties_Statics::NewProp_PreviewTextures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateStaticMeshLODAssetToolTextureProperties_Statics::NewProp_PreviewTextures_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGenerateStaticMeshLODAssetToolTextureProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateStaticMeshLODAssetToolTextureProperties_Statics::NewProp_Materials_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateStaticMeshLODAssetToolTextureProperties_Statics::NewProp_Materials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateStaticMeshLODAssetToolTextureProperties_Statics::NewProp_Textures_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateStaticMeshLODAssetToolTextureProperties_Statics::NewProp_Textures,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateStaticMeshLODAssetToolTextureProperties_Statics::NewProp_PreviewTextures_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateStaticMeshLODAssetToolTextureProperties_Statics::NewProp_PreviewTextures,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGenerateStaticMeshLODAssetToolTextureProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGenerateStaticMeshLODAssetToolTextureProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGenerateStaticMeshLODAssetToolTextureProperties_Statics::ClassParams = {
		&UGenerateStaticMeshLODAssetToolTextureProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGenerateStaticMeshLODAssetToolTextureProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateStaticMeshLODAssetToolTextureProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UGenerateStaticMeshLODAssetToolTextureProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateStaticMeshLODAssetToolTextureProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGenerateStaticMeshLODAssetToolTextureProperties()
	{
		if (!Z_Registration_Info_UClass_UGenerateStaticMeshLODAssetToolTextureProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGenerateStaticMeshLODAssetToolTextureProperties.OuterSingleton, Z_Construct_UClass_UGenerateStaticMeshLODAssetToolTextureProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGenerateStaticMeshLODAssetToolTextureProperties.OuterSingleton;
	}
	template<> MESHLODTOOLSET_API UClass* StaticClass<UGenerateStaticMeshLODAssetToolTextureProperties>()
	{
		return UGenerateStaticMeshLODAssetToolTextureProperties::StaticClass();
	}
	UGenerateStaticMeshLODAssetToolTextureProperties::UGenerateStaticMeshLODAssetToolTextureProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGenerateStaticMeshLODAssetToolTextureProperties);
	UGenerateStaticMeshLODAssetToolTextureProperties::~UGenerateStaticMeshLODAssetToolTextureProperties() {}
	void UGenerateStaticMeshLODAssetTool::StaticRegisterNativesUGenerateStaticMeshLODAssetTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGenerateStaticMeshLODAssetTool);
	UClass* Z_Construct_UClass_UGenerateStaticMeshLODAssetTool_NoRegister()
	{
		return UGenerateStaticMeshLODAssetTool::StaticClass();
	}
	struct Z_Construct_UClass_UGenerateStaticMeshLODAssetTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OutputProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BasicProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BasicProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PresetProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PresetProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TextureProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionVizSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CollisionVizSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewWithBackgroundCompute_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviewWithBackgroundCompute;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviewTextures_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewTextures_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PreviewTextures;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviewMaterials_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewMaterials_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PreviewMaterials;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ObjectData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LineMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LineMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionPreview_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CollisionPreview;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GenerateProcess_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GenerateProcess;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGenerateStaticMeshLODAssetTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMultiSelectionMeshEditingTool,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshLODToolset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateStaticMeshLODAssetTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Simple tool to combine multiple meshes into a single mesh asset\n */" },
		{ "IncludePath", "Tools/GenerateStaticMeshLODAssetTool.h" },
		{ "ModuleRelativePath", "Public/Tools/GenerateStaticMeshLODAssetTool.h" },
		{ "ToolTip", "Simple tool to combine multiple meshes into a single mesh asset" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateStaticMeshLODAssetTool_Statics::NewProp_OutputProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tools/GenerateStaticMeshLODAssetTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGenerateStaticMeshLODAssetTool_Statics::NewProp_OutputProperties = { "OutputProperties", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGenerateStaticMeshLODAssetTool, OutputProperties), Z_Construct_UClass_UGenerateStaticMeshLODAssetToolOutputProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGenerateStaticMeshLODAssetTool_Statics::NewProp_OutputProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateStaticMeshLODAssetTool_Statics::NewProp_OutputProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateStaticMeshLODAssetTool_Statics::NewProp_BasicProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tools/GenerateStaticMeshLODAssetTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGenerateStaticMeshLODAssetTool_Statics::NewProp_BasicProperties = { "BasicProperties", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGenerateStaticMeshLODAssetTool, BasicProperties), Z_Construct_UClass_UGenerateStaticMeshLODAssetToolProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGenerateStaticMeshLODAssetTool_Statics::NewProp_BasicProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateStaticMeshLODAssetTool_Statics::NewProp_BasicProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateStaticMeshLODAssetTool_Statics::NewProp_PresetProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tools/GenerateStaticMeshLODAssetTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGenerateStaticMeshLODAssetTool_Statics::NewProp_PresetProperties = { "PresetProperties", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGenerateStaticMeshLODAssetTool, PresetProperties), Z_Construct_UClass_UGenerateStaticMeshLODAssetToolPresetProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGenerateStaticMeshLODAssetTool_Statics::NewProp_PresetProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateStaticMeshLODAssetTool_Statics::NewProp_PresetProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateStaticMeshLODAssetTool_Statics::NewProp_TextureProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tools/GenerateStaticMeshLODAssetTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGenerateStaticMeshLODAssetTool_Statics::NewProp_TextureProperties = { "TextureProperties", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGenerateStaticMeshLODAssetTool, TextureProperties), Z_Construct_UClass_UGenerateStaticMeshLODAssetToolTextureProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGenerateStaticMeshLODAssetTool_Statics::NewProp_TextureProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateStaticMeshLODAssetTool_Statics::NewProp_TextureProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateStaticMeshLODAssetTool_Statics::NewProp_CollisionVizSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tools/GenerateStaticMeshLODAssetTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGenerateStaticMeshLODAssetTool_Statics::NewProp_CollisionVizSettings = { "CollisionVizSettings", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGenerateStaticMeshLODAssetTool, CollisionVizSettings), Z_Construct_UClass_UCollisionGeometryVisualizationProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGenerateStaticMeshLODAssetTool_Statics::NewProp_CollisionVizSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateStaticMeshLODAssetTool_Statics::NewProp_CollisionVizSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateStaticMeshLODAssetTool_Statics::NewProp_PreviewWithBackgroundCompute_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tools/GenerateStaticMeshLODAssetTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGenerateStaticMeshLODAssetTool_Statics::NewProp_PreviewWithBackgroundCompute = { "PreviewWithBackgroundCompute", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGenerateStaticMeshLODAssetTool, PreviewWithBackgroundCompute), Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGenerateStaticMeshLODAssetTool_Statics::NewProp_PreviewWithBackgroundCompute_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateStaticMeshLODAssetTool_Statics::NewProp_PreviewWithBackgroundCompute_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGenerateStaticMeshLODAssetTool_Statics::NewProp_PreviewTextures_Inner = { "PreviewTextures", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateStaticMeshLODAssetTool_Statics::NewProp_PreviewTextures_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tools/GenerateStaticMeshLODAssetTool.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGenerateStaticMeshLODAssetTool_Statics::NewProp_PreviewTextures = { "PreviewTextures", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGenerateStaticMeshLODAssetTool, PreviewTextures), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGenerateStaticMeshLODAssetTool_Statics::NewProp_PreviewTextures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateStaticMeshLODAssetTool_Statics::NewProp_PreviewTextures_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGenerateStaticMeshLODAssetTool_Statics::NewProp_PreviewMaterials_Inner = { "PreviewMaterials", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateStaticMeshLODAssetTool_Statics::NewProp_PreviewMaterials_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tools/GenerateStaticMeshLODAssetTool.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGenerateStaticMeshLODAssetTool_Statics::NewProp_PreviewMaterials = { "PreviewMaterials", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGenerateStaticMeshLODAssetTool, PreviewMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGenerateStaticMeshLODAssetTool_Statics::NewProp_PreviewMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateStaticMeshLODAssetTool_Statics::NewProp_PreviewMaterials_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateStaticMeshLODAssetTool_Statics::NewProp_ObjectData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tools/GenerateStaticMeshLODAssetTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGenerateStaticMeshLODAssetTool_Statics::NewProp_ObjectData = { "ObjectData", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGenerateStaticMeshLODAssetTool, ObjectData), Z_Construct_UClass_UPhysicsObjectToolPropertySet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGenerateStaticMeshLODAssetTool_Statics::NewProp_ObjectData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateStaticMeshLODAssetTool_Statics::NewProp_ObjectData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateStaticMeshLODAssetTool_Statics::NewProp_LineMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tools/GenerateStaticMeshLODAssetTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGenerateStaticMeshLODAssetTool_Statics::NewProp_LineMaterial = { "LineMaterial", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGenerateStaticMeshLODAssetTool, LineMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGenerateStaticMeshLODAssetTool_Statics::NewProp_LineMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateStaticMeshLODAssetTool_Statics::NewProp_LineMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateStaticMeshLODAssetTool_Statics::NewProp_CollisionPreview_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tools/GenerateStaticMeshLODAssetTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGenerateStaticMeshLODAssetTool_Statics::NewProp_CollisionPreview = { "CollisionPreview", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGenerateStaticMeshLODAssetTool, CollisionPreview), Z_Construct_UClass_UPreviewGeometry_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGenerateStaticMeshLODAssetTool_Statics::NewProp_CollisionPreview_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateStaticMeshLODAssetTool_Statics::NewProp_CollisionPreview_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateStaticMeshLODAssetTool_Statics::NewProp_GenerateProcess_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tools/GenerateStaticMeshLODAssetTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGenerateStaticMeshLODAssetTool_Statics::NewProp_GenerateProcess = { "GenerateProcess", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGenerateStaticMeshLODAssetTool, GenerateProcess), Z_Construct_UClass_UGenerateStaticMeshLODProcess_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGenerateStaticMeshLODAssetTool_Statics::NewProp_GenerateProcess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateStaticMeshLODAssetTool_Statics::NewProp_GenerateProcess_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGenerateStaticMeshLODAssetTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateStaticMeshLODAssetTool_Statics::NewProp_OutputProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateStaticMeshLODAssetTool_Statics::NewProp_BasicProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateStaticMeshLODAssetTool_Statics::NewProp_PresetProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateStaticMeshLODAssetTool_Statics::NewProp_TextureProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateStaticMeshLODAssetTool_Statics::NewProp_CollisionVizSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateStaticMeshLODAssetTool_Statics::NewProp_PreviewWithBackgroundCompute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateStaticMeshLODAssetTool_Statics::NewProp_PreviewTextures_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateStaticMeshLODAssetTool_Statics::NewProp_PreviewTextures,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateStaticMeshLODAssetTool_Statics::NewProp_PreviewMaterials_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateStaticMeshLODAssetTool_Statics::NewProp_PreviewMaterials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateStaticMeshLODAssetTool_Statics::NewProp_ObjectData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateStaticMeshLODAssetTool_Statics::NewProp_LineMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateStaticMeshLODAssetTool_Statics::NewProp_CollisionPreview,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGenerateStaticMeshLODAssetTool_Statics::NewProp_GenerateProcess,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGenerateStaticMeshLODAssetTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGenerateStaticMeshLODAssetTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGenerateStaticMeshLODAssetTool_Statics::ClassParams = {
		&UGenerateStaticMeshLODAssetTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGenerateStaticMeshLODAssetTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateStaticMeshLODAssetTool_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UGenerateStaticMeshLODAssetTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateStaticMeshLODAssetTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGenerateStaticMeshLODAssetTool()
	{
		if (!Z_Registration_Info_UClass_UGenerateStaticMeshLODAssetTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGenerateStaticMeshLODAssetTool.OuterSingleton, Z_Construct_UClass_UGenerateStaticMeshLODAssetTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGenerateStaticMeshLODAssetTool.OuterSingleton;
	}
	template<> MESHLODTOOLSET_API UClass* StaticClass<UGenerateStaticMeshLODAssetTool>()
	{
		return UGenerateStaticMeshLODAssetTool::StaticClass();
	}
	UGenerateStaticMeshLODAssetTool::UGenerateStaticMeshLODAssetTool() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGenerateStaticMeshLODAssetTool);
	UGenerateStaticMeshLODAssetTool::~UGenerateStaticMeshLODAssetTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshLODToolset_Source_MeshLODToolset_Public_Tools_GenerateStaticMeshLODAssetTool_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshLODToolset_Source_MeshLODToolset_Public_Tools_GenerateStaticMeshLODAssetTool_h_Statics::EnumInfo[] = {
		{ EGenerateLODAssetOutputMode_StaticEnum, TEXT("EGenerateLODAssetOutputMode"), &Z_Registration_Info_UEnum_EGenerateLODAssetOutputMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2818454331U) },
		{ EGenerateLODAssetToolPresetAction_StaticEnum, TEXT("EGenerateLODAssetToolPresetAction"), &Z_Registration_Info_UEnum_EGenerateLODAssetToolPresetAction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3334738319U) },
		{ EGenerateStaticMeshLOD_BakeConstraint_StaticEnum, TEXT("EGenerateStaticMeshLOD_BakeConstraint"), &Z_Registration_Info_UEnum_EGenerateStaticMeshLOD_BakeConstraint, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1785650432U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshLODToolset_Source_MeshLODToolset_Public_Tools_GenerateStaticMeshLODAssetTool_h_Statics::ScriptStructInfo[] = {
		{ FGenerateStaticMeshLOD_TextureConfig::StaticStruct, Z_Construct_UScriptStruct_FGenerateStaticMeshLOD_TextureConfig_Statics::NewStructOps, TEXT("GenerateStaticMeshLOD_TextureConfig"), &Z_Registration_Info_UScriptStruct_GenerateStaticMeshLOD_TextureConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGenerateStaticMeshLOD_TextureConfig), 1956220355U) },
		{ FGenerateStaticMeshLOD_MaterialConfig::StaticStruct, Z_Construct_UScriptStruct_FGenerateStaticMeshLOD_MaterialConfig_Statics::NewStructOps, TEXT("GenerateStaticMeshLOD_MaterialConfig"), &Z_Registration_Info_UScriptStruct_GenerateStaticMeshLOD_MaterialConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGenerateStaticMeshLOD_MaterialConfig), 996716787U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshLODToolset_Source_MeshLODToolset_Public_Tools_GenerateStaticMeshLODAssetTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGenerateStaticMeshLODAssetToolBuilder, UGenerateStaticMeshLODAssetToolBuilder::StaticClass, TEXT("UGenerateStaticMeshLODAssetToolBuilder"), &Z_Registration_Info_UClass_UGenerateStaticMeshLODAssetToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGenerateStaticMeshLODAssetToolBuilder), 1654864879U) },
		{ Z_Construct_UClass_UGenerateStaticMeshLODAssetToolOutputProperties, UGenerateStaticMeshLODAssetToolOutputProperties::StaticClass, TEXT("UGenerateStaticMeshLODAssetToolOutputProperties"), &Z_Registration_Info_UClass_UGenerateStaticMeshLODAssetToolOutputProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGenerateStaticMeshLODAssetToolOutputProperties), 3207230524U) },
		{ Z_Construct_UClass_UGenerateStaticMeshLODAssetToolPresetProperties, UGenerateStaticMeshLODAssetToolPresetProperties::StaticClass, TEXT("UGenerateStaticMeshLODAssetToolPresetProperties"), &Z_Registration_Info_UClass_UGenerateStaticMeshLODAssetToolPresetProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGenerateStaticMeshLODAssetToolPresetProperties), 1341732617U) },
		{ Z_Construct_UClass_UGenerateStaticMeshLODAssetToolProperties, UGenerateStaticMeshLODAssetToolProperties::StaticClass, TEXT("UGenerateStaticMeshLODAssetToolProperties"), &Z_Registration_Info_UClass_UGenerateStaticMeshLODAssetToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGenerateStaticMeshLODAssetToolProperties), 736373116U) },
		{ Z_Construct_UClass_UGenerateStaticMeshLODAssetToolTextureProperties, UGenerateStaticMeshLODAssetToolTextureProperties::StaticClass, TEXT("UGenerateStaticMeshLODAssetToolTextureProperties"), &Z_Registration_Info_UClass_UGenerateStaticMeshLODAssetToolTextureProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGenerateStaticMeshLODAssetToolTextureProperties), 1520448594U) },
		{ Z_Construct_UClass_UGenerateStaticMeshLODAssetTool, UGenerateStaticMeshLODAssetTool::StaticClass, TEXT("UGenerateStaticMeshLODAssetTool"), &Z_Registration_Info_UClass_UGenerateStaticMeshLODAssetTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGenerateStaticMeshLODAssetTool), 3165086903U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshLODToolset_Source_MeshLODToolset_Public_Tools_GenerateStaticMeshLODAssetTool_h_3355202408(TEXT("/Script/MeshLODToolset"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshLODToolset_Source_MeshLODToolset_Public_Tools_GenerateStaticMeshLODAssetTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshLODToolset_Source_MeshLODToolset_Public_Tools_GenerateStaticMeshLODAssetTool_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshLODToolset_Source_MeshLODToolset_Public_Tools_GenerateStaticMeshLODAssetTool_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshLODToolset_Source_MeshLODToolset_Public_Tools_GenerateStaticMeshLODAssetTool_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshLODToolset_Source_MeshLODToolset_Public_Tools_GenerateStaticMeshLODAssetTool_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshLODToolset_Source_MeshLODToolset_Public_Tools_GenerateStaticMeshLODAssetTool_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
