// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialLayersFunctions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialLayersFunctions() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialFunctionInterface_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialLayerLinkState();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialLayersFunctions();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialLayersFunctionsEditorOnlyData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialLayersFunctionsRuntimeData();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMaterialLayerLinkState;
	static UEnum* EMaterialLayerLinkState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMaterialLayerLinkState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMaterialLayerLinkState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMaterialLayerLinkState, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EMaterialLayerLinkState"));
		}
		return Z_Registration_Info_UEnum_EMaterialLayerLinkState.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EMaterialLayerLinkState>()
	{
		return EMaterialLayerLinkState_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EMaterialLayerLinkState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EMaterialLayerLinkState_Statics::Enumerators[] = {
		{ "EMaterialLayerLinkState::Uninitialized", (int64)EMaterialLayerLinkState::Uninitialized },
		{ "EMaterialLayerLinkState::LinkedToParent", (int64)EMaterialLayerLinkState::LinkedToParent },
		{ "EMaterialLayerLinkState::UnlinkedFromParent", (int64)EMaterialLayerLinkState::UnlinkedFromParent },
		{ "EMaterialLayerLinkState::NotFromParent", (int64)EMaterialLayerLinkState::NotFromParent },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EMaterialLayerLinkState_Statics::Enum_MetaDataParams[] = {
		{ "LinkedToParent.Comment", "// Saved with previous engine version\n" },
		{ "LinkedToParent.Name", "EMaterialLayerLinkState::LinkedToParent" },
		{ "LinkedToParent.ToolTip", "Saved with previous engine version" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialLayersFunctions.h" },
		{ "NotFromParent.Comment", "// Layer is based on parent material, but should not mirror changes\n" },
		{ "NotFromParent.Name", "EMaterialLayerLinkState::NotFromParent" },
		{ "NotFromParent.ToolTip", "Layer is based on parent material, but should not mirror changes" },
		{ "Uninitialized.Name", "EMaterialLayerLinkState::Uninitialized" },
		{ "UnlinkedFromParent.Comment", "// Layer should mirror changes from parent material\n" },
		{ "UnlinkedFromParent.Name", "EMaterialLayerLinkState::UnlinkedFromParent" },
		{ "UnlinkedFromParent.ToolTip", "Layer should mirror changes from parent material" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EMaterialLayerLinkState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EMaterialLayerLinkState",
		"EMaterialLayerLinkState",
		Z_Construct_UEnum_Engine_EMaterialLayerLinkState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMaterialLayerLinkState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EMaterialLayerLinkState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMaterialLayerLinkState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EMaterialLayerLinkState()
	{
		if (!Z_Registration_Info_UEnum_EMaterialLayerLinkState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMaterialLayerLinkState.InnerSingleton, Z_Construct_UEnum_Engine_EMaterialLayerLinkState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMaterialLayerLinkState.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MaterialLayersFunctionsEditorOnlyData;
class UScriptStruct* FMaterialLayersFunctionsEditorOnlyData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MaterialLayersFunctionsEditorOnlyData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MaterialLayersFunctionsEditorOnlyData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialLayersFunctionsEditorOnlyData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("MaterialLayersFunctionsEditorOnlyData"));
	}
	return Z_Registration_Info_UScriptStruct_MaterialLayersFunctionsEditorOnlyData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FMaterialLayersFunctionsEditorOnlyData>()
{
	return FMaterialLayersFunctionsEditorOnlyData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMaterialLayersFunctionsEditorOnlyData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBoolPropertyParams NewProp_LayerStates_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerStates_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LayerStates;
		static const UECodeGen_Private::FTextPropertyParams NewProp_LayerNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LayerNames;
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RestrictToLayerRelatives_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RestrictToLayerRelatives_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RestrictToLayerRelatives;
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RestrictToBlendRelatives_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RestrictToBlendRelatives_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RestrictToBlendRelatives;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LayerGuids_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerGuids_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LayerGuids;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LayerLinkStates_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LayerLinkStates_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerLinkStates_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LayerLinkStates;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DeletedParentLayerGuids_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeletedParentLayerGuids_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DeletedParentLayerGuids;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialLayersFunctionsEditorOnlyData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialLayersFunctions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMaterialLayersFunctionsEditorOnlyData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialLayersFunctionsEditorOnlyData>();
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialLayersFunctionsEditorOnlyData_Statics::NewProp_LayerStates_Inner = { "LayerStates", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialLayersFunctionsEditorOnlyData_Statics::NewProp_LayerStates_MetaData[] = {
		{ "Category", "MaterialLayers" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialLayersFunctions.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialLayersFunctionsEditorOnlyData_Statics::NewProp_LayerStates = { "LayerStates", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMaterialLayersFunctionsEditorOnlyData, LayerStates), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialLayersFunctionsEditorOnlyData_Statics::NewProp_LayerStates_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialLayersFunctionsEditorOnlyData_Statics::NewProp_LayerStates_MetaData)) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FMaterialLayersFunctionsEditorOnlyData_Statics::NewProp_LayerNames_Inner = { "LayerNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialLayersFunctionsEditorOnlyData_Statics::NewProp_LayerNames_MetaData[] = {
		{ "Category", "MaterialLayers" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialLayersFunctions.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialLayersFunctionsEditorOnlyData_Statics::NewProp_LayerNames = { "LayerNames", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMaterialLayersFunctionsEditorOnlyData, LayerNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialLayersFunctionsEditorOnlyData_Statics::NewProp_LayerNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialLayersFunctionsEditorOnlyData_Statics::NewProp_LayerNames_MetaData)) };
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialLayersFunctionsEditorOnlyData_Statics::NewProp_RestrictToLayerRelatives_Inner = { "RestrictToLayerRelatives", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialLayersFunctionsEditorOnlyData_Statics::NewProp_RestrictToLayerRelatives_MetaData[] = {
		{ "Category", "MaterialLayers" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialLayersFunctions.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialLayersFunctionsEditorOnlyData_Statics::NewProp_RestrictToLayerRelatives = { "RestrictToLayerRelatives", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMaterialLayersFunctionsEditorOnlyData, RestrictToLayerRelatives), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialLayersFunctionsEditorOnlyData_Statics::NewProp_RestrictToLayerRelatives_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialLayersFunctionsEditorOnlyData_Statics::NewProp_RestrictToLayerRelatives_MetaData)) };
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialLayersFunctionsEditorOnlyData_Statics::NewProp_RestrictToBlendRelatives_Inner = { "RestrictToBlendRelatives", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialLayersFunctionsEditorOnlyData_Statics::NewProp_RestrictToBlendRelatives_MetaData[] = {
		{ "Category", "MaterialLayers" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialLayersFunctions.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialLayersFunctionsEditorOnlyData_Statics::NewProp_RestrictToBlendRelatives = { "RestrictToBlendRelatives", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMaterialLayersFunctionsEditorOnlyData, RestrictToBlendRelatives), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialLayersFunctionsEditorOnlyData_Statics::NewProp_RestrictToBlendRelatives_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialLayersFunctionsEditorOnlyData_Statics::NewProp_RestrictToBlendRelatives_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialLayersFunctionsEditorOnlyData_Statics::NewProp_LayerGuids_Inner = { "LayerGuids", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialLayersFunctionsEditorOnlyData_Statics::NewProp_LayerGuids_MetaData[] = {
		{ "Category", "MaterialLayers" },
		{ "Comment", "/** Guid that identifies each layer in this stack */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialLayersFunctions.h" },
		{ "ToolTip", "Guid that identifies each layer in this stack" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialLayersFunctionsEditorOnlyData_Statics::NewProp_LayerGuids = { "LayerGuids", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMaterialLayersFunctionsEditorOnlyData, LayerGuids), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialLayersFunctionsEditorOnlyData_Statics::NewProp_LayerGuids_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialLayersFunctionsEditorOnlyData_Statics::NewProp_LayerGuids_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMaterialLayersFunctionsEditorOnlyData_Statics::NewProp_LayerLinkStates_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMaterialLayersFunctionsEditorOnlyData_Statics::NewProp_LayerLinkStates_Inner = { "LayerLinkStates", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_Engine_EMaterialLayerLinkState, METADATA_PARAMS(nullptr, 0) }; // 2450674260
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialLayersFunctionsEditorOnlyData_Statics::NewProp_LayerLinkStates_MetaData[] = {
		{ "Category", "MaterialLayers" },
		{ "Comment", "/**\n\x09 * State of each layer's link to parent material\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialLayersFunctions.h" },
		{ "ToolTip", "State of each layer's link to parent material" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialLayersFunctionsEditorOnlyData_Statics::NewProp_LayerLinkStates = { "LayerLinkStates", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMaterialLayersFunctionsEditorOnlyData, LayerLinkStates), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialLayersFunctionsEditorOnlyData_Statics::NewProp_LayerLinkStates_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialLayersFunctionsEditorOnlyData_Statics::NewProp_LayerLinkStates_MetaData)) }; // 2450674260
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialLayersFunctionsEditorOnlyData_Statics::NewProp_DeletedParentLayerGuids_Inner = { "DeletedParentLayerGuids", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialLayersFunctionsEditorOnlyData_Statics::NewProp_DeletedParentLayerGuids_MetaData[] = {
		{ "Category", "MaterialLayers" },
		{ "Comment", "/**\n\x09 * List of Guids that exist in the parent material that have been explicitly deleted\n\x09 * This is needed to distinguish these layers from newly added layers in the parent material\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialLayersFunctions.h" },
		{ "ToolTip", "List of Guids that exist in the parent material that have been explicitly deleted\nThis is needed to distinguish these layers from newly added layers in the parent material" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialLayersFunctionsEditorOnlyData_Statics::NewProp_DeletedParentLayerGuids = { "DeletedParentLayerGuids", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMaterialLayersFunctionsEditorOnlyData, DeletedParentLayerGuids), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialLayersFunctionsEditorOnlyData_Statics::NewProp_DeletedParentLayerGuids_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialLayersFunctionsEditorOnlyData_Statics::NewProp_DeletedParentLayerGuids_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialLayersFunctionsEditorOnlyData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialLayersFunctionsEditorOnlyData_Statics::NewProp_LayerStates_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialLayersFunctionsEditorOnlyData_Statics::NewProp_LayerStates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialLayersFunctionsEditorOnlyData_Statics::NewProp_LayerNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialLayersFunctionsEditorOnlyData_Statics::NewProp_LayerNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialLayersFunctionsEditorOnlyData_Statics::NewProp_RestrictToLayerRelatives_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialLayersFunctionsEditorOnlyData_Statics::NewProp_RestrictToLayerRelatives,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialLayersFunctionsEditorOnlyData_Statics::NewProp_RestrictToBlendRelatives_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialLayersFunctionsEditorOnlyData_Statics::NewProp_RestrictToBlendRelatives,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialLayersFunctionsEditorOnlyData_Statics::NewProp_LayerGuids_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialLayersFunctionsEditorOnlyData_Statics::NewProp_LayerGuids,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialLayersFunctionsEditorOnlyData_Statics::NewProp_LayerLinkStates_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialLayersFunctionsEditorOnlyData_Statics::NewProp_LayerLinkStates_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialLayersFunctionsEditorOnlyData_Statics::NewProp_LayerLinkStates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialLayersFunctionsEditorOnlyData_Statics::NewProp_DeletedParentLayerGuids_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialLayersFunctionsEditorOnlyData_Statics::NewProp_DeletedParentLayerGuids,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialLayersFunctionsEditorOnlyData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"MaterialLayersFunctionsEditorOnlyData",
		sizeof(FMaterialLayersFunctionsEditorOnlyData),
		alignof(FMaterialLayersFunctionsEditorOnlyData),
		Z_Construct_UScriptStruct_FMaterialLayersFunctionsEditorOnlyData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialLayersFunctionsEditorOnlyData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialLayersFunctionsEditorOnlyData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialLayersFunctionsEditorOnlyData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMaterialLayersFunctionsEditorOnlyData()
	{
		if (!Z_Registration_Info_UScriptStruct_MaterialLayersFunctionsEditorOnlyData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MaterialLayersFunctionsEditorOnlyData.InnerSingleton, Z_Construct_UScriptStruct_FMaterialLayersFunctionsEditorOnlyData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MaterialLayersFunctionsEditorOnlyData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MaterialLayersFunctionsRuntimeData;
class UScriptStruct* FMaterialLayersFunctionsRuntimeData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MaterialLayersFunctionsRuntimeData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MaterialLayersFunctionsRuntimeData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialLayersFunctionsRuntimeData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("MaterialLayersFunctionsRuntimeData"));
	}
	return Z_Registration_Info_UScriptStruct_MaterialLayersFunctionsRuntimeData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FMaterialLayersFunctionsRuntimeData>()
{
	return FMaterialLayersFunctionsRuntimeData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMaterialLayersFunctionsRuntimeData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Layers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Layers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Layers;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Blends_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Blends_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Blends;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialLayersFunctionsRuntimeData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialLayersFunctions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMaterialLayersFunctionsRuntimeData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialLayersFunctionsRuntimeData>();
	}
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMaterialLayersFunctionsRuntimeData_Statics::NewProp_Layers_Inner = { "Layers", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMaterialFunctionInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialLayersFunctionsRuntimeData_Statics::NewProp_Layers_MetaData[] = {
		{ "Category", "MaterialLayers" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialLayersFunctions.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialLayersFunctionsRuntimeData_Statics::NewProp_Layers = { "Layers", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMaterialLayersFunctionsRuntimeData, Layers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialLayersFunctionsRuntimeData_Statics::NewProp_Layers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialLayersFunctionsRuntimeData_Statics::NewProp_Layers_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMaterialLayersFunctionsRuntimeData_Statics::NewProp_Blends_Inner = { "Blends", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMaterialFunctionInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialLayersFunctionsRuntimeData_Statics::NewProp_Blends_MetaData[] = {
		{ "Category", "MaterialLayers" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialLayersFunctions.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialLayersFunctionsRuntimeData_Statics::NewProp_Blends = { "Blends", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMaterialLayersFunctionsRuntimeData, Blends), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialLayersFunctionsRuntimeData_Statics::NewProp_Blends_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialLayersFunctionsRuntimeData_Statics::NewProp_Blends_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialLayersFunctionsRuntimeData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialLayersFunctionsRuntimeData_Statics::NewProp_Layers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialLayersFunctionsRuntimeData_Statics::NewProp_Layers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialLayersFunctionsRuntimeData_Statics::NewProp_Blends_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialLayersFunctionsRuntimeData_Statics::NewProp_Blends,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialLayersFunctionsRuntimeData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"MaterialLayersFunctionsRuntimeData",
		sizeof(FMaterialLayersFunctionsRuntimeData),
		alignof(FMaterialLayersFunctionsRuntimeData),
		Z_Construct_UScriptStruct_FMaterialLayersFunctionsRuntimeData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialLayersFunctionsRuntimeData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialLayersFunctionsRuntimeData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialLayersFunctionsRuntimeData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMaterialLayersFunctionsRuntimeData()
	{
		if (!Z_Registration_Info_UScriptStruct_MaterialLayersFunctionsRuntimeData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MaterialLayersFunctionsRuntimeData.InnerSingleton, Z_Construct_UScriptStruct_FMaterialLayersFunctionsRuntimeData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MaterialLayersFunctionsRuntimeData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMaterialLayersFunctions>() == std::is_polymorphic<FMaterialLayersFunctionsRuntimeData>(), "USTRUCT FMaterialLayersFunctions cannot be polymorphic unless super FMaterialLayersFunctionsRuntimeData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MaterialLayersFunctions;
class UScriptStruct* FMaterialLayersFunctions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MaterialLayersFunctions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MaterialLayersFunctions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialLayersFunctions, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("MaterialLayersFunctions"));
	}
	return Z_Registration_Info_UScriptStruct_MaterialLayersFunctions.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FMaterialLayersFunctions>()
{
	return FMaterialLayersFunctions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorOnly_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EditorOnly;
		static const UECodeGen_Private::FBoolPropertyParams NewProp_LayerStates_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerStates_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LayerStates;
		static const UECodeGen_Private::FTextPropertyParams NewProp_LayerNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LayerNames;
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RestrictToLayerRelatives_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RestrictToLayerRelatives_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RestrictToLayerRelatives;
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RestrictToBlendRelatives_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RestrictToBlendRelatives_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RestrictToBlendRelatives;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LayerGuids_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerGuids_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LayerGuids;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LayerLinkStates_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LayerLinkStates_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerLinkStates_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LayerLinkStates;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DeletedParentLayerGuids_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeletedParentLayerGuids_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DeletedParentLayerGuids;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialLayersFunctions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialLayersFunctions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_EditorOnly_MetaData[] = {
		{ "Category", "MaterialLayers" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialLayersFunctions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_EditorOnly = { "EditorOnly", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMaterialLayersFunctions, EditorOnly), Z_Construct_UScriptStruct_FMaterialLayersFunctionsEditorOnlyData, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_EditorOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_EditorOnly_MetaData)) }; // 2884659739
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_LayerStates_Inner = { "LayerStates", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_LayerStates_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialLayersFunctions.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_LayerStates = { "LayerStates", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMaterialLayersFunctions, LayerStates_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_LayerStates_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_LayerStates_MetaData)) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_LayerNames_Inner = { "LayerNames", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_LayerNames_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialLayersFunctions.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_LayerNames = { "LayerNames", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMaterialLayersFunctions, LayerNames_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_LayerNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_LayerNames_MetaData)) };
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_RestrictToLayerRelatives_Inner = { "RestrictToLayerRelatives", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_RestrictToLayerRelatives_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialLayersFunctions.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_RestrictToLayerRelatives = { "RestrictToLayerRelatives", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMaterialLayersFunctions, RestrictToLayerRelatives_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_RestrictToLayerRelatives_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_RestrictToLayerRelatives_MetaData)) };
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_RestrictToBlendRelatives_Inner = { "RestrictToBlendRelatives", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_RestrictToBlendRelatives_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialLayersFunctions.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_RestrictToBlendRelatives = { "RestrictToBlendRelatives", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMaterialLayersFunctions, RestrictToBlendRelatives_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_RestrictToBlendRelatives_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_RestrictToBlendRelatives_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_LayerGuids_Inner = { "LayerGuids", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_LayerGuids_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialLayersFunctions.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_LayerGuids = { "LayerGuids", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMaterialLayersFunctions, LayerGuids_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_LayerGuids_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_LayerGuids_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_LayerLinkStates_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_LayerLinkStates_Inner = { "LayerLinkStates", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_Engine_EMaterialLayerLinkState, METADATA_PARAMS(nullptr, 0) }; // 2450674260
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_LayerLinkStates_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialLayersFunctions.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_LayerLinkStates = { "LayerLinkStates", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMaterialLayersFunctions, LayerLinkStates_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_LayerLinkStates_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_LayerLinkStates_MetaData)) }; // 2450674260
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_DeletedParentLayerGuids_Inner = { "DeletedParentLayerGuids", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_DeletedParentLayerGuids_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialLayersFunctions.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_DeletedParentLayerGuids = { "DeletedParentLayerGuids", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMaterialLayersFunctions, DeletedParentLayerGuids_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_DeletedParentLayerGuids_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_DeletedParentLayerGuids_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_EditorOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_LayerStates_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_LayerStates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_LayerNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_LayerNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_RestrictToLayerRelatives_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_RestrictToLayerRelatives,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_RestrictToBlendRelatives_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_RestrictToBlendRelatives,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_LayerGuids_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_LayerGuids,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_LayerLinkStates_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_LayerLinkStates_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_LayerLinkStates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_DeletedParentLayerGuids_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewProp_DeletedParentLayerGuids,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FMaterialLayersFunctionsRuntimeData,
		&NewStructOps,
		"MaterialLayersFunctions",
		sizeof(FMaterialLayersFunctions),
		alignof(FMaterialLayersFunctions),
		Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMaterialLayersFunctions()
	{
		if (!Z_Registration_Info_UScriptStruct_MaterialLayersFunctions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MaterialLayersFunctions.InnerSingleton, Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MaterialLayersFunctions.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialLayersFunctions_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialLayersFunctions_h_Statics::EnumInfo[] = {
		{ EMaterialLayerLinkState_StaticEnum, TEXT("EMaterialLayerLinkState"), &Z_Registration_Info_UEnum_EMaterialLayerLinkState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2450674260U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialLayersFunctions_h_Statics::ScriptStructInfo[] = {
		{ FMaterialLayersFunctionsEditorOnlyData::StaticStruct, Z_Construct_UScriptStruct_FMaterialLayersFunctionsEditorOnlyData_Statics::NewStructOps, TEXT("MaterialLayersFunctionsEditorOnlyData"), &Z_Registration_Info_UScriptStruct_MaterialLayersFunctionsEditorOnlyData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMaterialLayersFunctionsEditorOnlyData), 2884659739U) },
		{ FMaterialLayersFunctionsRuntimeData::StaticStruct, Z_Construct_UScriptStruct_FMaterialLayersFunctionsRuntimeData_Statics::NewStructOps, TEXT("MaterialLayersFunctionsRuntimeData"), &Z_Registration_Info_UScriptStruct_MaterialLayersFunctionsRuntimeData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMaterialLayersFunctionsRuntimeData), 1752719197U) },
		{ FMaterialLayersFunctions::StaticStruct, Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics::NewStructOps, TEXT("MaterialLayersFunctions"), &Z_Registration_Info_UScriptStruct_MaterialLayersFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMaterialLayersFunctions), 1695911908U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialLayersFunctions_h_382397324(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialLayersFunctions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialLayersFunctions_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialLayersFunctions_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialLayersFunctions_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
