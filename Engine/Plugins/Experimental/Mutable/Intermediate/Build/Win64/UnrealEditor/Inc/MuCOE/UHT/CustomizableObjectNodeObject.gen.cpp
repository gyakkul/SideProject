// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MuCOE/Nodes/CustomizableObjectNodeObject.h"
#include "../Public/MuCO/CustomizableObjectUIData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizableObjectNodeObject() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	CUSTOMIZABLEOBJECT_API UClass* Z_Construct_UClass_UCustomizableObject_NoRegister();
	CUSTOMIZABLEOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMutableParamUIMetadata();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNode();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeObject();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeObject_NoRegister();
	CUSTOMIZABLEOBJECTEDITOR_API UEnum* Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectAutomaticLODStrategy();
	CUSTOMIZABLEOBJECTEDITOR_API UEnum* Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectSelectionOverride();
	CUSTOMIZABLEOBJECTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectState();
	CUSTOMIZABLEOBJECTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FRealTimeMorphSelectionOverride();
	UPackage* Z_Construct_UPackage__Script_CustomizableObjectEditor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CustomizableObjectState;
class UScriptStruct* FCustomizableObjectState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CustomizableObjectState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CustomizableObjectState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomizableObjectState, (UObject*)Z_Construct_UPackage__Script_CustomizableObjectEditor(), TEXT("CustomizableObjectState"));
	}
	return Z_Registration_Info_UScriptStruct_CustomizableObjectState.OuterSingleton;
}
template<> CUSTOMIZABLEOBJECTEDITOR_API UScriptStruct* StaticStruct<FCustomizableObjectState>()
{
	return FCustomizableObjectState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCustomizableObjectState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FStrPropertyParams NewProp_RuntimeParameters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RuntimeParameters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RuntimeParameters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDontCompressRuntimeTextures_MetaData[];
#endif
		static void NewProp_bDontCompressRuntimeTextures_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDontCompressRuntimeTextures;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLiveUpdateMode_MetaData[];
#endif
		static void NewProp_bLiveUpdateMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLiveUpdateMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReuseInstanceTextures_MetaData[];
#endif
		static void NewProp_bReuseInstanceTextures_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReuseInstanceTextures;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBuildOnlyFirstLOD_MetaData[];
#endif
		static void NewProp_bBuildOnlyFirstLOD_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBuildOnlyFirstLOD;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ForcedParameterValues_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ForcedParameterValues_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForcedParameterValues_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ForcedParameterValues;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateUIMetadata_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StateUIMetadata;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomizableObjectState>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeObject.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizableObjectState, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_RuntimeParameters_Inner = { "RuntimeParameters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_RuntimeParameters_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeObject.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_RuntimeParameters = { "RuntimeParameters", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizableObjectState, RuntimeParameters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_RuntimeParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_RuntimeParameters_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_bDontCompressRuntimeTextures_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeObject.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_bDontCompressRuntimeTextures_SetBit(void* Obj)
	{
		((FCustomizableObjectState*)Obj)->bDontCompressRuntimeTextures = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_bDontCompressRuntimeTextures = { "bDontCompressRuntimeTextures", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FCustomizableObjectState), &Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_bDontCompressRuntimeTextures_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_bDontCompressRuntimeTextures_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_bDontCompressRuntimeTextures_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_bLiveUpdateMode_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "Comment", "/** LiveUpdateMode will reuse instance temp. data between updates and speed up update times, but spend much more memory. Good for customization screens, not for actual gameplay modes. */" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeObject.h" },
		{ "ToolTip", "LiveUpdateMode will reuse instance temp. data between updates and speed up update times, but spend much more memory. Good for customization screens, not for actual gameplay modes." },
	};
#endif
	void Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_bLiveUpdateMode_SetBit(void* Obj)
	{
		((FCustomizableObjectState*)Obj)->bLiveUpdateMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_bLiveUpdateMode = { "bLiveUpdateMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FCustomizableObjectState), &Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_bLiveUpdateMode_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_bLiveUpdateMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_bLiveUpdateMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_bReuseInstanceTextures_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "Comment", "// Enables the reuse of all possible textures when the instance is updated without any changes in geometry or state (the first update after creation doesn't reuse any)\n// It will only work if the textures aren't compressed, so set the instance to a Mutable state with texture compression disabled\n// WARNING! If texture reuse is enabled, do NOT keep external references to the textures of the instance. The instance owns the textures.\n" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeObject.h" },
		{ "ToolTip", "Enables the reuse of all possible textures when the instance is updated without any changes in geometry or state (the first update after creation doesn't reuse any)\nIt will only work if the textures aren't compressed, so set the instance to a Mutable state with texture compression disabled\nWARNING! If texture reuse is enabled, do NOT keep external references to the textures of the instance. The instance owns the textures." },
	};
#endif
	void Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_bReuseInstanceTextures_SetBit(void* Obj)
	{
		((FCustomizableObjectState*)Obj)->bReuseInstanceTextures = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_bReuseInstanceTextures = { "bReuseInstanceTextures", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FCustomizableObjectState), &Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_bReuseInstanceTextures_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_bReuseInstanceTextures_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_bReuseInstanceTextures_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_bBuildOnlyFirstLOD_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeObject.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_bBuildOnlyFirstLOD_SetBit(void* Obj)
	{
		((FCustomizableObjectState*)Obj)->bBuildOnlyFirstLOD = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_bBuildOnlyFirstLOD = { "bBuildOnlyFirstLOD", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FCustomizableObjectState), &Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_bBuildOnlyFirstLOD_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_bBuildOnlyFirstLOD_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_bBuildOnlyFirstLOD_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_ForcedParameterValues_ValueProp = { "ForcedParameterValues", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_ForcedParameterValues_Key_KeyProp = { "ForcedParameterValues_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_ForcedParameterValues_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeObject.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_ForcedParameterValues = { "ForcedParameterValues", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizableObjectState, ForcedParameterValues), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_ForcedParameterValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_ForcedParameterValues_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_StateUIMetadata_MetaData[] = {
		{ "Category", "UI" },
		{ "DisplayName", "State UI Metadata" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeObject.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_StateUIMetadata = { "StateUIMetadata", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizableObjectState, StateUIMetadata), Z_Construct_UScriptStruct_FMutableParamUIMetadata, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_StateUIMetadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_StateUIMetadata_MetaData)) }; // 1713445463
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_RuntimeParameters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_RuntimeParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_bDontCompressRuntimeTextures,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_bLiveUpdateMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_bReuseInstanceTextures,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_bBuildOnlyFirstLOD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_ForcedParameterValues_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_ForcedParameterValues_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_ForcedParameterValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewProp_StateUIMetadata,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
		nullptr,
		&NewStructOps,
		"CustomizableObjectState",
		sizeof(FCustomizableObjectState),
		alignof(FCustomizableObjectState),
		Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectState()
	{
		if (!Z_Registration_Info_UScriptStruct_CustomizableObjectState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CustomizableObjectState.InnerSingleton, Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CustomizableObjectState.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECustomizableObjectAutomaticLODStrategy;
	static UEnum* ECustomizableObjectAutomaticLODStrategy_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECustomizableObjectAutomaticLODStrategy.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECustomizableObjectAutomaticLODStrategy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectAutomaticLODStrategy, (UObject*)Z_Construct_UPackage__Script_CustomizableObjectEditor(), TEXT("ECustomizableObjectAutomaticLODStrategy"));
		}
		return Z_Registration_Info_UEnum_ECustomizableObjectAutomaticLODStrategy.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTEDITOR_API UEnum* StaticEnum<ECustomizableObjectAutomaticLODStrategy>()
	{
		return ECustomizableObjectAutomaticLODStrategy_StaticEnum();
	}
	struct Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectAutomaticLODStrategy_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectAutomaticLODStrategy_Statics::Enumerators[] = {
		{ "ECustomizableObjectAutomaticLODStrategy::Inherited", (int64)ECustomizableObjectAutomaticLODStrategy::Inherited },
		{ "ECustomizableObjectAutomaticLODStrategy::Manual", (int64)ECustomizableObjectAutomaticLODStrategy::Manual },
		{ "ECustomizableObjectAutomaticLODStrategy::AutomaticFromMesh", (int64)ECustomizableObjectAutomaticLODStrategy::AutomaticFromMesh },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectAutomaticLODStrategy_Statics::Enum_MetaDataParams[] = {
		{ "AutomaticFromMesh.Comment", "// Try to generate the same material structure than LOd 0 if the source meshes have LODs.\n" },
		{ "AutomaticFromMesh.DisplayName", "Automatic from mesh" },
		{ "AutomaticFromMesh.Name", "ECustomizableObjectAutomaticLODStrategy::AutomaticFromMesh" },
		{ "AutomaticFromMesh.ToolTip", "Try to generate the same material structure than LOd 0 if the source meshes have LODs." },
		{ "Inherited.Comment", "// Use the same strategy than the parent object. If root, then use \"Manual\".\n" },
		{ "Inherited.DisplayName", "Inherit from parent object" },
		{ "Inherited.Name", "ECustomizableObjectAutomaticLODStrategy::Inherited" },
		{ "Inherited.ToolTip", "Use the same strategy than the parent object. If root, then use \"Manual\"." },
		{ "Manual.Comment", "// Don't try to generate LODs automatically for the child nodes. Only the ones tha explicitely define them will be used.\n" },
		{ "Manual.DisplayName", "Only manually created LODs" },
		{ "Manual.Name", "ECustomizableObjectAutomaticLODStrategy::Manual" },
		{ "Manual.ToolTip", "Don't try to generate LODs automatically for the child nodes. Only the ones tha explicitely define them will be used." },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeObject.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectAutomaticLODStrategy_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
		nullptr,
		"ECustomizableObjectAutomaticLODStrategy",
		"ECustomizableObjectAutomaticLODStrategy",
		Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectAutomaticLODStrategy_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectAutomaticLODStrategy_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectAutomaticLODStrategy_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectAutomaticLODStrategy_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectAutomaticLODStrategy()
	{
		if (!Z_Registration_Info_UEnum_ECustomizableObjectAutomaticLODStrategy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECustomizableObjectAutomaticLODStrategy.InnerSingleton, Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectAutomaticLODStrategy_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECustomizableObjectAutomaticLODStrategy.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECustomizableObjectSelectionOverride;
	static UEnum* ECustomizableObjectSelectionOverride_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECustomizableObjectSelectionOverride.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECustomizableObjectSelectionOverride.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectSelectionOverride, (UObject*)Z_Construct_UPackage__Script_CustomizableObjectEditor(), TEXT("ECustomizableObjectSelectionOverride"));
		}
		return Z_Registration_Info_UEnum_ECustomizableObjectSelectionOverride.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTEDITOR_API UEnum* StaticEnum<ECustomizableObjectSelectionOverride>()
	{
		return ECustomizableObjectSelectionOverride_StaticEnum();
	}
	struct Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectSelectionOverride_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectSelectionOverride_Statics::Enumerators[] = {
		{ "ECustomizableObjectSelectionOverride::NoOverride", (int64)ECustomizableObjectSelectionOverride::NoOverride },
		{ "ECustomizableObjectSelectionOverride::Disable", (int64)ECustomizableObjectSelectionOverride::Disable },
		{ "ECustomizableObjectSelectionOverride::Enable", (int64)ECustomizableObjectSelectionOverride::Enable },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectSelectionOverride_Statics::Enum_MetaDataParams[] = {
		{ "Disable.DisplayName", "Disable" },
		{ "Disable.Name", "ECustomizableObjectSelectionOverride::Disable" },
		{ "Enable.DisplayName", "Enable" },
		{ "Enable.Name", "ECustomizableObjectSelectionOverride::Enable" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeObject.h" },
		{ "NoOverride.DisplayName", "No Override" },
		{ "NoOverride.Name", "ECustomizableObjectSelectionOverride::NoOverride" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectSelectionOverride_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
		nullptr,
		"ECustomizableObjectSelectionOverride",
		"ECustomizableObjectSelectionOverride",
		Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectSelectionOverride_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectSelectionOverride_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectSelectionOverride_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectSelectionOverride_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectSelectionOverride()
	{
		if (!Z_Registration_Info_UEnum_ECustomizableObjectSelectionOverride.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECustomizableObjectSelectionOverride.InnerSingleton, Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectSelectionOverride_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECustomizableObjectSelectionOverride.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RealTimeMorphSelectionOverride;
class UScriptStruct* FRealTimeMorphSelectionOverride::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RealTimeMorphSelectionOverride.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RealTimeMorphSelectionOverride.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRealTimeMorphSelectionOverride, (UObject*)Z_Construct_UPackage__Script_CustomizableObjectEditor(), TEXT("RealTimeMorphSelectionOverride"));
	}
	return Z_Registration_Info_UScriptStruct_RealTimeMorphSelectionOverride.OuterSingleton;
}
template<> CUSTOMIZABLEOBJECTEDITOR_API UScriptStruct* StaticStruct<FRealTimeMorphSelectionOverride>()
{
	return FRealTimeMorphSelectionOverride::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRealTimeMorphSelectionOverride_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MorphName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MorphName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SelectionOverride_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectionOverride_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SelectionOverride;
		static const UECodeGen_Private::FNamePropertyParams NewProp_SkeletalMeshesNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshesNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SkeletalMeshesNames;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Override_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Override_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Override_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Override;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealTimeMorphSelectionOverride_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRealTimeMorphSelectionOverride_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRealTimeMorphSelectionOverride>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealTimeMorphSelectionOverride_Statics::NewProp_MorphName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeObject.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRealTimeMorphSelectionOverride_Statics::NewProp_MorphName = { "MorphName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRealTimeMorphSelectionOverride, MorphName), METADATA_PARAMS(Z_Construct_UScriptStruct_FRealTimeMorphSelectionOverride_Statics::NewProp_MorphName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealTimeMorphSelectionOverride_Statics::NewProp_MorphName_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRealTimeMorphSelectionOverride_Statics::NewProp_SelectionOverride_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealTimeMorphSelectionOverride_Statics::NewProp_SelectionOverride_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeObject.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRealTimeMorphSelectionOverride_Statics::NewProp_SelectionOverride = { "SelectionOverride", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRealTimeMorphSelectionOverride, SelectionOverride), Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectSelectionOverride, METADATA_PARAMS(Z_Construct_UScriptStruct_FRealTimeMorphSelectionOverride_Statics::NewProp_SelectionOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealTimeMorphSelectionOverride_Statics::NewProp_SelectionOverride_MetaData)) }; // 236643486
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRealTimeMorphSelectionOverride_Statics::NewProp_SkeletalMeshesNames_Inner = { "SkeletalMeshesNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealTimeMorphSelectionOverride_Statics::NewProp_SkeletalMeshesNames_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeObject.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRealTimeMorphSelectionOverride_Statics::NewProp_SkeletalMeshesNames = { "SkeletalMeshesNames", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRealTimeMorphSelectionOverride, SkeletalMeshesNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRealTimeMorphSelectionOverride_Statics::NewProp_SkeletalMeshesNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealTimeMorphSelectionOverride_Statics::NewProp_SkeletalMeshesNames_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRealTimeMorphSelectionOverride_Statics::NewProp_Override_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRealTimeMorphSelectionOverride_Statics::NewProp_Override_Inner = { "Override", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectSelectionOverride, METADATA_PARAMS(nullptr, 0) }; // 236643486
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRealTimeMorphSelectionOverride_Statics::NewProp_Override_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeObject.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRealTimeMorphSelectionOverride_Statics::NewProp_Override = { "Override", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRealTimeMorphSelectionOverride, Override), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRealTimeMorphSelectionOverride_Statics::NewProp_Override_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealTimeMorphSelectionOverride_Statics::NewProp_Override_MetaData)) }; // 236643486
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRealTimeMorphSelectionOverride_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealTimeMorphSelectionOverride_Statics::NewProp_MorphName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealTimeMorphSelectionOverride_Statics::NewProp_SelectionOverride_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealTimeMorphSelectionOverride_Statics::NewProp_SelectionOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealTimeMorphSelectionOverride_Statics::NewProp_SkeletalMeshesNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealTimeMorphSelectionOverride_Statics::NewProp_SkeletalMeshesNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealTimeMorphSelectionOverride_Statics::NewProp_Override_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealTimeMorphSelectionOverride_Statics::NewProp_Override_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRealTimeMorphSelectionOverride_Statics::NewProp_Override,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRealTimeMorphSelectionOverride_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
		nullptr,
		&NewStructOps,
		"RealTimeMorphSelectionOverride",
		sizeof(FRealTimeMorphSelectionOverride),
		alignof(FRealTimeMorphSelectionOverride),
		Z_Construct_UScriptStruct_FRealTimeMorphSelectionOverride_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealTimeMorphSelectionOverride_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRealTimeMorphSelectionOverride_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRealTimeMorphSelectionOverride_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRealTimeMorphSelectionOverride()
	{
		if (!Z_Registration_Info_UScriptStruct_RealTimeMorphSelectionOverride.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RealTimeMorphSelectionOverride.InnerSingleton, Z_Construct_UScriptStruct_FRealTimeMorphSelectionOverride_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RealTimeMorphSelectionOverride.InnerSingleton;
	}
	void UCustomizableObjectNodeObject::StaticRegisterNativesUCustomizableObjectNodeObject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomizableObjectNodeObject);
	UClass* Z_Construct_UClass_UCustomizableObjectNodeObject_NoRegister()
	{
		return UCustomizableObjectNodeObject::StaticClass();
	}
	struct Z_Construct_UClass_UCustomizableObjectNodeObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ObjectName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParamUIMetadata_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParamUIMetadata;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumLODs_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumLODs;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AutoLODStrategy_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoLODStrategy_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AutoLODStrategy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumMeshComponents_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumMeshComponents;
		static const UECodeGen_Private::FStructPropertyParams NewProp_States_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_States_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_States;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ParentObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentObjectGroupId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParentObjectGroupId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Identifier;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReferencedSkeletalMeshes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferencedSkeletalMeshes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReferencedSkeletalMeshes;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RealTimeMorphSelectionOverrides_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RealTimeMorphSelectionOverrides_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RealTimeMorphSelectionOverrides;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsBase_MetaData[];
#endif
		static void NewProp_bIsBase_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsBase;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCustomizableObjectNode,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MuCOE/Nodes/CustomizableObjectNodeObject.h" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeObject.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_ObjectName_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeObject.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_ObjectName = { "ObjectName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeObject, ObjectName), METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_ObjectName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_ObjectName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_ParamUIMetadata_MetaData[] = {
		{ "Category", "UI" },
		{ "DisplayName", "Parameter UI Metadata" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeObject.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_ParamUIMetadata = { "ParamUIMetadata", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeObject, ParamUIMetadata), Z_Construct_UScriptStruct_FMutableParamUIMetadata, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_ParamUIMetadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_ParamUIMetadata_MetaData)) }; // 1713445463
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_NumLODs_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeObject.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_NumLODs = { "NumLODs", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeObject, NumLODs), METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_NumLODs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_NumLODs_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_AutoLODStrategy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_AutoLODStrategy_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeObject.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_AutoLODStrategy = { "AutoLODStrategy", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeObject, AutoLODStrategy), Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectAutomaticLODStrategy, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_AutoLODStrategy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_AutoLODStrategy_MetaData)) }; // 892602884
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_NumMeshComponents_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeObject.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_NumMeshComponents = { "NumMeshComponents", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeObject, NumMeshComponents), METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_NumMeshComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_NumMeshComponents_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_States_Inner = { "States", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCustomizableObjectState, METADATA_PARAMS(nullptr, 0) }; // 2103666128
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_States_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeObject.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_States = { "States", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeObject, States), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_States_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_States_MetaData)) }; // 2103666128
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_ParentObject_MetaData[] = {
		{ "Category", "AttachedToExternalObject" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeObject.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_ParentObject = { "ParentObject", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeObject, ParentObject), Z_Construct_UClass_UCustomizableObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_ParentObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_ParentObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_ParentObjectGroupId_MetaData[] = {
		{ "Category", "AttachedToExternalObject" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeObject.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_ParentObjectGroupId = { "ParentObjectGroupId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeObject, ParentObjectGroupId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_ParentObjectGroupId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_ParentObjectGroupId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_Identifier_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeObject.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeObject, Identifier), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_Identifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_Identifier_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_ReferencedSkeletalMeshes_Inner = { "ReferencedSkeletalMeshes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_ReferencedSkeletalMeshes_MetaData[] = {
		{ "Comment", "// Soft references SkeletalMeshes found in the provoius compilation.\n// Only populated if the node is the root.\n" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeObject.h" },
		{ "ToolTip", "Soft references SkeletalMeshes found in the provoius compilation.\nOnly populated if the node is the root." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_ReferencedSkeletalMeshes = { "ReferencedSkeletalMeshes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeObject, ReferencedSkeletalMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_ReferencedSkeletalMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_ReferencedSkeletalMeshes_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_RealTimeMorphSelectionOverrides_Inner = { "RealTimeMorphSelectionOverrides", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRealTimeMorphSelectionOverride, METADATA_PARAMS(nullptr, 0) }; // 852896095
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_RealTimeMorphSelectionOverrides_MetaData[] = {
		{ "Comment", "// Information about the realtime morph targets usage. It indexes to ReferncedSkeletakMeshes array\n// so it is need to keep them syncronized. \n// This overrides the per skeletal mesh node selection \n" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeObject.h" },
		{ "ToolTip", "Information about the realtime morph targets usage. It indexes to ReferncedSkeletakMeshes array\nso it is need to keep them syncronized.\nThis overrides the per skeletal mesh node selection" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_RealTimeMorphSelectionOverrides = { "RealTimeMorphSelectionOverrides", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeObject, RealTimeMorphSelectionOverrides), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_RealTimeMorphSelectionOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_RealTimeMorphSelectionOverrides_MetaData)) }; // 852896095
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_bIsBase_MetaData[] = {
		{ "Comment", "// Own interface\n" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeObject.h" },
		{ "ToolTip", "Own interface" },
	};
#endif
	void Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_bIsBase_SetBit(void* Obj)
	{
		((UCustomizableObjectNodeObject*)Obj)->bIsBase = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_bIsBase = { "bIsBase", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCustomizableObjectNodeObject), &Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_bIsBase_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_bIsBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_bIsBase_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_ObjectName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_ParamUIMetadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_NumLODs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_AutoLODStrategy_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_AutoLODStrategy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_NumMeshComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_States_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_States,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_ParentObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_ParentObjectGroupId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_Identifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_ReferencedSkeletalMeshes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_ReferencedSkeletalMeshes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_RealTimeMorphSelectionOverrides_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_RealTimeMorphSelectionOverrides,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::NewProp_bIsBase,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizableObjectNodeObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::ClassParams = {
		&UCustomizableObjectNodeObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomizableObjectNodeObject()
	{
		if (!Z_Registration_Info_UClass_UCustomizableObjectNodeObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomizableObjectNodeObject.OuterSingleton, Z_Construct_UClass_UCustomizableObjectNodeObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomizableObjectNodeObject.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTEDITOR_API UClass* StaticClass<UCustomizableObjectNodeObject>()
	{
		return UCustomizableObjectNodeObject::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizableObjectNodeObject);
	UCustomizableObjectNodeObject::~UCustomizableObjectNodeObject() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeObject_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeObject_h_Statics::EnumInfo[] = {
		{ ECustomizableObjectAutomaticLODStrategy_StaticEnum, TEXT("ECustomizableObjectAutomaticLODStrategy"), &Z_Registration_Info_UEnum_ECustomizableObjectAutomaticLODStrategy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 892602884U) },
		{ ECustomizableObjectSelectionOverride_StaticEnum, TEXT("ECustomizableObjectSelectionOverride"), &Z_Registration_Info_UEnum_ECustomizableObjectSelectionOverride, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 236643486U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeObject_h_Statics::ScriptStructInfo[] = {
		{ FCustomizableObjectState::StaticStruct, Z_Construct_UScriptStruct_FCustomizableObjectState_Statics::NewStructOps, TEXT("CustomizableObjectState"), &Z_Registration_Info_UScriptStruct_CustomizableObjectState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCustomizableObjectState), 2103666128U) },
		{ FRealTimeMorphSelectionOverride::StaticStruct, Z_Construct_UScriptStruct_FRealTimeMorphSelectionOverride_Statics::NewStructOps, TEXT("RealTimeMorphSelectionOverride"), &Z_Registration_Info_UScriptStruct_RealTimeMorphSelectionOverride, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRealTimeMorphSelectionOverride), 852896095U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCustomizableObjectNodeObject, UCustomizableObjectNodeObject::StaticClass, TEXT("UCustomizableObjectNodeObject"), &Z_Registration_Info_UClass_UCustomizableObjectNodeObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomizableObjectNodeObject), 1822352976U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeObject_h_1073615463(TEXT("/Script/CustomizableObjectEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeObject_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeObject_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeObject_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeObject_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeObject_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
