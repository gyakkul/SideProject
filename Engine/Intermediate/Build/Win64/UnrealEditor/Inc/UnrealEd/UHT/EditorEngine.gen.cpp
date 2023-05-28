// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Editor/EditorEngine.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorEngine() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UPackage();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPlane();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ANavigationObjectBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBrushBuilder_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEngine();
	ENGINE_API UClass* Z_Construct_UClass_UFont_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UModel();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDetailMode();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UActorGroupingUtils_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UEditorEngine();
	UNREALED_API UClass* Z_Construct_UClass_UEditorEngine_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UEditorWorldExtensionManager_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_ULevelEditorDragDropHandler_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UTransactor_NoRegister();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EMapSetBrushFlags();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EPasteTo();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FCopySelectedInfo();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FSelectionStateOfLevel();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMapSetBrushFlags;
	static UEnum* EMapSetBrushFlags_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMapSetBrushFlags.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMapSetBrushFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_EMapSetBrushFlags, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("EMapSetBrushFlags"));
		}
		return Z_Registration_Info_UEnum_EMapSetBrushFlags.OuterSingleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<EMapSetBrushFlags>()
	{
		return EMapSetBrushFlags_StaticEnum();
	}
	struct Z_Construct_UEnum_UnrealEd_EMapSetBrushFlags_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UnrealEd_EMapSetBrushFlags_Statics::Enumerators[] = {
		{ "MSB_BrushColor", (int64)MSB_BrushColor },
		{ "MSB_Group", (int64)MSB_Group },
		{ "MSB_PolyFlags", (int64)MSB_PolyFlags },
		{ "MSB_BrushType", (int64)MSB_BrushType },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UnrealEd_EMapSetBrushFlags_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "//\n// Things to set in mapSetBrush.\n//\n" },
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "MSB_BrushColor.Comment", "/** Set brush color. */" },
		{ "MSB_BrushColor.Name", "MSB_BrushColor" },
		{ "MSB_BrushColor.ToolTip", "Set brush color." },
		{ "MSB_BrushType.Comment", "/** Set CSG operation. */" },
		{ "MSB_BrushType.Name", "MSB_BrushType" },
		{ "MSB_BrushType.ToolTip", "Set CSG operation." },
		{ "MSB_Group.Comment", "/** Set group. */" },
		{ "MSB_Group.Name", "MSB_Group" },
		{ "MSB_Group.ToolTip", "Set group." },
		{ "MSB_PolyFlags.Comment", "/** Set poly flags. */" },
		{ "MSB_PolyFlags.Name", "MSB_PolyFlags" },
		{ "MSB_PolyFlags.ToolTip", "Set poly flags." },
		{ "ToolTip", "Things to set in mapSetBrush." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UnrealEd_EMapSetBrushFlags_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		"EMapSetBrushFlags",
		"EMapSetBrushFlags",
		Z_Construct_UEnum_UnrealEd_EMapSetBrushFlags_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_EMapSetBrushFlags_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_UnrealEd_EMapSetBrushFlags_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_EMapSetBrushFlags_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UnrealEd_EMapSetBrushFlags()
	{
		if (!Z_Registration_Info_UEnum_EMapSetBrushFlags.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMapSetBrushFlags.InnerSingleton, Z_Construct_UEnum_UnrealEd_EMapSetBrushFlags_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMapSetBrushFlags.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPasteTo;
	static UEnum* EPasteTo_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPasteTo.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPasteTo.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_EPasteTo, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("EPasteTo"));
		}
		return Z_Registration_Info_UEnum_EPasteTo.OuterSingleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<EPasteTo>()
	{
		return EPasteTo_StaticEnum();
	}
	struct Z_Construct_UEnum_UnrealEd_EPasteTo_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UnrealEd_EPasteTo_Statics::Enumerators[] = {
		{ "PT_OriginalLocation", (int64)PT_OriginalLocation },
		{ "PT_Here", (int64)PT_Here },
		{ "PT_WorldOrigin", (int64)PT_WorldOrigin },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UnrealEd_EPasteTo_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "PT_Here.Name", "PT_Here" },
		{ "PT_OriginalLocation.Name", "PT_OriginalLocation" },
		{ "PT_WorldOrigin.Name", "PT_WorldOrigin" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UnrealEd_EPasteTo_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		"EPasteTo",
		"EPasteTo",
		Z_Construct_UEnum_UnrealEd_EPasteTo_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_EPasteTo_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_UnrealEd_EPasteTo_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_EPasteTo_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UnrealEd_EPasteTo()
	{
		if (!Z_Registration_Info_UEnum_EPasteTo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPasteTo.InnerSingleton, Z_Construct_UEnum_UnrealEd_EPasteTo_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPasteTo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CopySelectedInfo;
class UScriptStruct* FCopySelectedInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CopySelectedInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CopySelectedInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCopySelectedInfo, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("CopySelectedInfo"));
	}
	return Z_Registration_Info_UScriptStruct_CopySelectedInfo.OuterSingleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FCopySelectedInfo>()
{
	return FCopySelectedInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCopySelectedInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCopySelectedInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCopySelectedInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCopySelectedInfo>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCopySelectedInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		&NewStructOps,
		"CopySelectedInfo",
		sizeof(FCopySelectedInfo),
		alignof(FCopySelectedInfo),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCopySelectedInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCopySelectedInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCopySelectedInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_CopySelectedInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CopySelectedInfo.InnerSingleton, Z_Construct_UScriptStruct_FCopySelectedInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CopySelectedInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SelectionStateOfLevel;
class UScriptStruct* FSelectionStateOfLevel::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SelectionStateOfLevel.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SelectionStateOfLevel.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSelectionStateOfLevel, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("SelectionStateOfLevel"));
	}
	return Z_Registration_Info_UScriptStruct_SelectionStateOfLevel.OuterSingleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FSelectionStateOfLevel>()
{
	return FSelectionStateOfLevel::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSelectionStateOfLevel_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStrPropertyParams NewProp_SelectedActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectedActors;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SelectedComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectedComponents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSelectionStateOfLevel_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Represents the current selection state of a level (its selected actors and components) from a given point in a time, in a way that can be safely restored later even if the level is reloaded\n */" },
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "Represents the current selection state of a level (its selected actors and components) from a given point in a time, in a way that can be safely restored later even if the level is reloaded" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSelectionStateOfLevel_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSelectionStateOfLevel>();
	}
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSelectionStateOfLevel_Statics::NewProp_SelectedActors_Inner = { "SelectedActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSelectionStateOfLevel_Statics::NewProp_SelectedActors_MetaData[] = {
		{ "Comment", "/** Path names of all the selected actors */" },
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "Path names of all the selected actors" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSelectionStateOfLevel_Statics::NewProp_SelectedActors = { "SelectedActors", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSelectionStateOfLevel, SelectedActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSelectionStateOfLevel_Statics::NewProp_SelectedActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSelectionStateOfLevel_Statics::NewProp_SelectedActors_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSelectionStateOfLevel_Statics::NewProp_SelectedComponents_Inner = { "SelectedComponents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSelectionStateOfLevel_Statics::NewProp_SelectedComponents_MetaData[] = {
		{ "Comment", "/** Path names of all the selected components */" },
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "Path names of all the selected components" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSelectionStateOfLevel_Statics::NewProp_SelectedComponents = { "SelectedComponents", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSelectionStateOfLevel, SelectedComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSelectionStateOfLevel_Statics::NewProp_SelectedComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSelectionStateOfLevel_Statics::NewProp_SelectedComponents_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSelectionStateOfLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSelectionStateOfLevel_Statics::NewProp_SelectedActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSelectionStateOfLevel_Statics::NewProp_SelectedActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSelectionStateOfLevel_Statics::NewProp_SelectedComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSelectionStateOfLevel_Statics::NewProp_SelectedComponents,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSelectionStateOfLevel_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		&NewStructOps,
		"SelectionStateOfLevel",
		sizeof(FSelectionStateOfLevel),
		alignof(FSelectionStateOfLevel),
		Z_Construct_UScriptStruct_FSelectionStateOfLevel_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSelectionStateOfLevel_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSelectionStateOfLevel_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSelectionStateOfLevel_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSelectionStateOfLevel()
	{
		if (!Z_Registration_Info_UScriptStruct_SelectionStateOfLevel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SelectionStateOfLevel.InnerSingleton, Z_Construct_UScriptStruct_FSelectionStateOfLevel_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SelectionStateOfLevel.InnerSingleton;
	}
	void UEditorEngine::StaticRegisterNativesUEditorEngine()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditorEngine);
	UClass* Z_Construct_UClass_UEditorEngine_NoRegister()
	{
		return UEditorEngine::StaticClass();
	}
	struct Z_Construct_UClass_UEditorEngine_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TempModel_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TempModel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConversionTempModel_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ConversionTempModel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Trans_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Trans;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bad_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Bad;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorFont_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EditorFont;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewSoundCue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviewSoundCue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewAudioComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviewAudioComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorCube_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EditorCube;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorSphere_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EditorSphere;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorPlane_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EditorPlane;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorCylinder_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EditorCylinder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFastRebuild_MetaData[];
#endif
		static void NewProp_bFastRebuild_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFastRebuild;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsImportingT3D_MetaData[];
#endif
		static void NewProp_IsImportingT3D_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsImportingT3D;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClickFlags_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_ClickFlags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ParentContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnsnappedClickLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UnsnappedClickLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClickLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClickLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClickPlane_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClickPlane;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MouseMovement_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MouseMovement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DetailMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_DetailMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseSizingBox_MetaData[];
#endif
		static void NewProp_UseSizingBox_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseSizingBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseAxisIndicator_MetaData[];
#endif
		static void NewProp_UseAxisIndicator_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseAxisIndicator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GodMode_MetaData[];
#endif
		static void NewProp_GodMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_GodMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameCommandLine_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_GameCommandLine;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowBrushMarkerPolys_MetaData[];
#endif
		static void NewProp_bShowBrushMarkerPolys_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowBrushMarkerPolys;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableSocketSnapping_MetaData[];
#endif
		static void NewProp_bEnableSocketSnapping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSocketSnapping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableLODLocking_MetaData[];
#endif
		static void NewProp_bEnableLODLocking_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableLODLocking;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeightMapExportClassName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_HeightMapExportClassName;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActorFactories_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorFactories_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorFactories;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserOpenedFile_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UserOpenedFile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InEditorGameURLOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InEditorGameURLOptions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayWorld_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PlayWorld;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsToggleBetweenPIEandSIEQueued_MetaData[];
#endif
		static void NewProp_bIsToggleBetweenPIEandSIEQueued_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsToggleBetweenPIEandSIEQueued;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowMultiplePIEWorlds_MetaData[];
#endif
		static void NewProp_bAllowMultiplePIEWorlds_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowMultiplePIEWorlds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRequestEndPlayMapQueued_MetaData[];
#endif
		static void NewProp_bRequestEndPlayMapQueued_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequestEndPlayMapQueued;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreSelectionChange_MetaData[];
#endif
		static void NewProp_bIgnoreSelectionChange_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreSelectionChange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSuspendBroadcastPostUndoRedo_MetaData[];
#endif
		static void NewProp_bSuspendBroadcastPostUndoRedo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuspendBroadcastPostUndoRedo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSquelchTransactionNotification_MetaData[];
#endif
		static void NewProp_bSquelchTransactionNotification_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSquelchTransactionNotification;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNotifyUndoRedoSelectionChange_MetaData[];
#endif
		static void NewProp_bNotifyUndoRedoSelectionChange_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNotifyUndoRedoSelectionChange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayFromHerePlayerStartClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_PlayFromHerePlayerStartClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorWorld_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EditorWorld;
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_ActorsThatWereSelected_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorsThatWereSelected_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorsThatWereSelected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayWorldDestination_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlayWorldDestination;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPlayWorldDestination_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentPlayWorldDestination;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMobilePreviewPortrait_MetaData[];
#endif
		static void NewProp_bMobilePreviewPortrait_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMobilePreviewPortrait;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuildPlayDevice_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BuildPlayDevice;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserEditedPlayWorldURL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UserEditedPlayWorldURL;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScratchRenderTarget2048_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ScratchRenderTarget2048;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScratchRenderTarget1024_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ScratchRenderTarget1024;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScratchRenderTarget512_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ScratchRenderTarget512;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScratchRenderTarget256_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ScratchRenderTarget256;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewMeshComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviewMeshComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewMeshIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PreviewMeshIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowPreviewMesh_MetaData[];
#endif
		static void NewProp_bShowPreviewMesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowPreviewMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCustomCameraAlignEmitter_MetaData[];
#endif
		static void NewProp_bCustomCameraAlignEmitter_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCustomCameraAlignEmitter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomCameraAlignEmitterDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CustomCameraAlignEmitterDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawSocketsInGMode_MetaData[];
#endif
		static void NewProp_bDrawSocketsInGMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawSocketsInGMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawParticleHelpers_MetaData[];
#endif
		static void NewProp_bDrawParticleHelpers_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawParticleHelpers;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BrushBuilders_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BrushBuilders_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BrushBuilders;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorWorldExtensionsManager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EditorWorldExtensionsManager;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DragDropHandler_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DragDropHandler;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorGroupingUtilsClassName_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActorGroupingUtilsClassName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorGroupingUtils_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActorGroupingUtils;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayWorldLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlayWorldLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayWorldRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlayWorldRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsPlayWorldQueued_MetaData[];
#endif
		static void NewProp_bIsPlayWorldQueued_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPlayWorldQueued;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsSimulateInEditorQueued_MetaData[];
#endif
		static void NewProp_bIsSimulateInEditorQueued_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSimulateInEditorQueued;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasPlayWorldPlacement_MetaData[];
#endif
		static void NewProp_bHasPlayWorldPlacement_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasPlayWorldPlacement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseMobilePreviewForPlayWorld_MetaData[];
#endif
		static void NewProp_bUseMobilePreviewForPlayWorld_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMobilePreviewForPlayWorld;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseVRPreviewForPlayWorld_MetaData[];
#endif
		static void NewProp_bUseVRPreviewForPlayWorld_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseVRPreviewForPlayWorld;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsSimulatingInEditor_MetaData[];
#endif
		static void NewProp_bIsSimulatingInEditor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSimulatingInEditor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayInEditorViewportIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlayInEditorViewportIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorEngine_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEngine,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Editor/EditorEngine.h" },
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_TempModel_MetaData[] = {
		{ "Comment", "// Objects.\n" },
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "Objects." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_TempModel = { "TempModel", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorEngine, TempModel), Z_Construct_UClass_UModel, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_TempModel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_TempModel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_ConversionTempModel_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_ConversionTempModel = { "ConversionTempModel", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorEngine, ConversionTempModel), Z_Construct_UClass_UModel, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_ConversionTempModel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_ConversionTempModel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_Trans_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_Trans = { "Trans", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorEngine, Trans), Z_Construct_UClass_UTransactor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_Trans_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_Trans_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_Bad_MetaData[] = {
		{ "Comment", "// Textures.\n" },
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "Textures." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_Bad = { "Bad", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorEngine, Bad), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_Bad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_Bad_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_EditorFont_MetaData[] = {
		{ "Comment", "// Font used by Canvas-based editors\n" },
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "Font used by Canvas-based editors" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_EditorFont = { "EditorFont", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorEngine, EditorFont), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_EditorFont_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_EditorFont_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_PreviewSoundCue_MetaData[] = {
		{ "Comment", "// Audio\n" },
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "Audio" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_PreviewSoundCue = { "PreviewSoundCue", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorEngine, PreviewSoundCue), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_PreviewSoundCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_PreviewSoundCue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_PreviewAudioComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_PreviewAudioComponent = { "PreviewAudioComponent", nullptr, (EPropertyFlags)0x0014000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorEngine, PreviewAudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_PreviewAudioComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_PreviewAudioComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_EditorCube_MetaData[] = {
		{ "Comment", "// Used in UnrealEd for showing materials\n" },
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "Used in UnrealEd for showing materials" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_EditorCube = { "EditorCube", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorEngine, EditorCube), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_EditorCube_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_EditorCube_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_EditorSphere_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_EditorSphere = { "EditorSphere", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorEngine, EditorSphere), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_EditorSphere_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_EditorSphere_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_EditorPlane_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_EditorPlane = { "EditorPlane", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorEngine, EditorPlane), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_EditorPlane_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_EditorPlane_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_EditorCylinder_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_EditorCylinder = { "EditorCylinder", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorEngine, EditorCylinder), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_EditorCylinder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_EditorCylinder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_bFastRebuild_MetaData[] = {
		{ "Comment", "// Toggles.\n" },
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "Toggles." },
	};
#endif
	void Z_Construct_UClass_UEditorEngine_Statics::NewProp_bFastRebuild_SetBit(void* Obj)
	{
		((UEditorEngine*)Obj)->bFastRebuild = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_bFastRebuild = { "bFastRebuild", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UEditorEngine), &Z_Construct_UClass_UEditorEngine_Statics::NewProp_bFastRebuild_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_bFastRebuild_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_bFastRebuild_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_IsImportingT3D_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
	};
#endif
	void Z_Construct_UClass_UEditorEngine_Statics::NewProp_IsImportingT3D_SetBit(void* Obj)
	{
		((UEditorEngine*)Obj)->IsImportingT3D = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_IsImportingT3D = { "IsImportingT3D", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UEditorEngine), &Z_Construct_UClass_UEditorEngine_Statics::NewProp_IsImportingT3D_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_IsImportingT3D_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_IsImportingT3D_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_ClickFlags_MetaData[] = {
		{ "Comment", "// Other variables.\n" },
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "Other variables." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_ClickFlags = { "ClickFlags", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorEngine, ClickFlags), METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_ClickFlags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_ClickFlags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_ParentContext_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_ParentContext = { "ParentContext", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorEngine, ParentContext), Z_Construct_UClass_UPackage, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_ParentContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_ParentContext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_UnsnappedClickLocation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_UnsnappedClickLocation = { "UnsnappedClickLocation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorEngine, UnsnappedClickLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_UnsnappedClickLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_UnsnappedClickLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_ClickLocation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_ClickLocation = { "ClickLocation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorEngine, ClickLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_ClickLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_ClickLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_ClickPlane_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_ClickPlane = { "ClickPlane", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorEngine, ClickPlane), Z_Construct_UScriptStruct_FPlane, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_ClickPlane_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_ClickPlane_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_MouseMovement_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_MouseMovement = { "MouseMovement", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorEngine, MouseMovement), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_MouseMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_MouseMovement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_DetailMode_MetaData[] = {
		{ "Comment", "// Setting for the detail mode to show in the editor viewports\n" },
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "Setting for the detail mode to show in the editor viewports" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_DetailMode = { "DetailMode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorEngine, DetailMode), Z_Construct_UEnum_Engine_EDetailMode, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_DetailMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_DetailMode_MetaData)) }; // 3777735330
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_UseSizingBox_MetaData[] = {
		{ "Category", "Advanced" },
		{ "Comment", "// Advanced.\n" },
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "Advanced." },
	};
#endif
	void Z_Construct_UClass_UEditorEngine_Statics::NewProp_UseSizingBox_SetBit(void* Obj)
	{
		((UEditorEngine*)Obj)->UseSizingBox = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_UseSizingBox = { "UseSizingBox", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UEditorEngine), &Z_Construct_UClass_UEditorEngine_Statics::NewProp_UseSizingBox_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_UseSizingBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_UseSizingBox_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_UseAxisIndicator_MetaData[] = {
		{ "Category", "Advanced" },
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
	};
#endif
	void Z_Construct_UClass_UEditorEngine_Statics::NewProp_UseAxisIndicator_SetBit(void* Obj)
	{
		((UEditorEngine*)Obj)->UseAxisIndicator = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_UseAxisIndicator = { "UseAxisIndicator", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UEditorEngine), &Z_Construct_UClass_UEditorEngine_Statics::NewProp_UseAxisIndicator_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_UseAxisIndicator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_UseAxisIndicator_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_GodMode_MetaData[] = {
		{ "Category", "Advanced" },
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
	};
#endif
	void Z_Construct_UClass_UEditorEngine_Statics::NewProp_GodMode_SetBit(void* Obj)
	{
		((UEditorEngine*)Obj)->GodMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_GodMode = { "GodMode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UEditorEngine), &Z_Construct_UClass_UEditorEngine_Statics::NewProp_GodMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_GodMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_GodMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_GameCommandLine_MetaData[] = {
		{ "Category", "Advanced" },
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_GameCommandLine = { "GameCommandLine", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorEngine, GameCommandLine), METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_GameCommandLine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_GameCommandLine_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_bShowBrushMarkerPolys_MetaData[] = {
		{ "Category", "Advanced" },
		{ "Comment", "/** If true, show translucent marker polygons on the builder brush and volumes. */" },
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "If true, show translucent marker polygons on the builder brush and volumes." },
	};
#endif
	void Z_Construct_UClass_UEditorEngine_Statics::NewProp_bShowBrushMarkerPolys_SetBit(void* Obj)
	{
		((UEditorEngine*)Obj)->bShowBrushMarkerPolys = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_bShowBrushMarkerPolys = { "bShowBrushMarkerPolys", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UEditorEngine), &Z_Construct_UClass_UEditorEngine_Statics::NewProp_bShowBrushMarkerPolys_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_bShowBrushMarkerPolys_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_bShowBrushMarkerPolys_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_bEnableSocketSnapping_MetaData[] = {
		{ "Category", "Advanced" },
		{ "Comment", "/** If true, socket snapping is enabled in the main level viewports. */" },
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "If true, socket snapping is enabled in the main level viewports." },
	};
#endif
	void Z_Construct_UClass_UEditorEngine_Statics::NewProp_bEnableSocketSnapping_SetBit(void* Obj)
	{
		((UEditorEngine*)Obj)->bEnableSocketSnapping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_bEnableSocketSnapping = { "bEnableSocketSnapping", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UEditorEngine), &Z_Construct_UClass_UEditorEngine_Statics::NewProp_bEnableSocketSnapping_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_bEnableSocketSnapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_bEnableSocketSnapping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_bEnableLODLocking_MetaData[] = {
		{ "Comment", "/** If true, same type views will be camera tied, and ortho views will use perspective view for LOD parenting */" },
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "If true, same type views will be camera tied, and ortho views will use perspective view for LOD parenting" },
	};
#endif
	void Z_Construct_UClass_UEditorEngine_Statics::NewProp_bEnableLODLocking_SetBit(void* Obj)
	{
		((UEditorEngine*)Obj)->bEnableLODLocking = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_bEnableLODLocking = { "bEnableLODLocking", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UEditorEngine), &Z_Construct_UClass_UEditorEngine_Statics::NewProp_bEnableLODLocking_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_bEnableLODLocking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_bEnableLODLocking_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_HeightMapExportClassName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_HeightMapExportClassName = { "HeightMapExportClassName", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorEngine, HeightMapExportClassName), METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_HeightMapExportClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_HeightMapExportClassName_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_ActorFactories_Inner = { "ActorFactories", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UActorFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_ActorFactories_MetaData[] = {
		{ "Comment", "/** Array of actor factories created at editor startup and used by context menu etc. */" },
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "Array of actor factories created at editor startup and used by context menu etc." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_ActorFactories = { "ActorFactories", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorEngine, ActorFactories), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_ActorFactories_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_ActorFactories_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_UserOpenedFile_MetaData[] = {
		{ "Comment", "/** The name of the file currently being opened in the editor. \"\" if no file is being opened. */" },
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "The name of the file currently being opened in the editor. \"\" if no file is being opened." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_UserOpenedFile = { "UserOpenedFile", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorEngine, UserOpenedFile), METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_UserOpenedFile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_UserOpenedFile_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_InEditorGameURLOptions_MetaData[] = {
		{ "Category", "Advanced" },
		{ "Comment", "/** Additional per-user/per-game options set in the .ini file. Should be in the form \"?option1=X?option2?option3=Y\"\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "Additional per-user/per-game options set in the .ini file. Should be in the form \"?option1=X?option2?option3=Y\"" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_InEditorGameURLOptions = { "InEditorGameURLOptions", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorEngine, InEditorGameURLOptions), METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_InEditorGameURLOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_InEditorGameURLOptions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_PlayWorld_MetaData[] = {
		{ "Comment", "/** A pointer to a UWorld that is the duplicated/saved-loaded to be played in with \"Play From Here\" \x09\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "A pointer to a UWorld that is the duplicated/saved-loaded to be played in with \"Play From Here\"" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_PlayWorld = { "PlayWorld", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorEngine, PlayWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_PlayWorld_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_PlayWorld_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_bIsToggleBetweenPIEandSIEQueued_MetaData[] = {
		{ "Comment", "/** Has a request to toggle between PIE and SIE been made? */" },
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "Has a request to toggle between PIE and SIE been made?" },
	};
#endif
	void Z_Construct_UClass_UEditorEngine_Statics::NewProp_bIsToggleBetweenPIEandSIEQueued_SetBit(void* Obj)
	{
		((UEditorEngine*)Obj)->bIsToggleBetweenPIEandSIEQueued = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_bIsToggleBetweenPIEandSIEQueued = { "bIsToggleBetweenPIEandSIEQueued", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UEditorEngine), &Z_Construct_UClass_UEditorEngine_Statics::NewProp_bIsToggleBetweenPIEandSIEQueued_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_bIsToggleBetweenPIEandSIEQueued_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_bIsToggleBetweenPIEandSIEQueued_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_bAllowMultiplePIEWorlds_MetaData[] = {
		{ "Comment", "/** Allows multiple PIE worlds under a single instance. If false, you can only do multiple UE processes for pie networking */" },
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "Allows multiple PIE worlds under a single instance. If false, you can only do multiple UE processes for pie networking" },
	};
#endif
	void Z_Construct_UClass_UEditorEngine_Statics::NewProp_bAllowMultiplePIEWorlds_SetBit(void* Obj)
	{
		((UEditorEngine*)Obj)->bAllowMultiplePIEWorlds = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_bAllowMultiplePIEWorlds = { "bAllowMultiplePIEWorlds", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UEditorEngine), &Z_Construct_UClass_UEditorEngine_Statics::NewProp_bAllowMultiplePIEWorlds_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_bAllowMultiplePIEWorlds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_bAllowMultiplePIEWorlds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_bRequestEndPlayMapQueued_MetaData[] = {
		{ "Comment", "/** True if there is a pending end play map queued */" },
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "True if there is a pending end play map queued" },
	};
#endif
	void Z_Construct_UClass_UEditorEngine_Statics::NewProp_bRequestEndPlayMapQueued_SetBit(void* Obj)
	{
		((UEditorEngine*)Obj)->bRequestEndPlayMapQueued = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_bRequestEndPlayMapQueued = { "bRequestEndPlayMapQueued", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UEditorEngine), &Z_Construct_UClass_UEditorEngine_Statics::NewProp_bRequestEndPlayMapQueued_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_bRequestEndPlayMapQueued_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_bRequestEndPlayMapQueued_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_bIgnoreSelectionChange_MetaData[] = {
		{ "Comment", "/** True if we should ignore noting any changes to selection on undo/redo */" },
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "True if we should ignore noting any changes to selection on undo/redo" },
	};
#endif
	void Z_Construct_UClass_UEditorEngine_Statics::NewProp_bIgnoreSelectionChange_SetBit(void* Obj)
	{
		((UEditorEngine*)Obj)->bIgnoreSelectionChange = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_bIgnoreSelectionChange = { "bIgnoreSelectionChange", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UEditorEngine), &Z_Construct_UClass_UEditorEngine_Statics::NewProp_bIgnoreSelectionChange_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_bIgnoreSelectionChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_bIgnoreSelectionChange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_bSuspendBroadcastPostUndoRedo_MetaData[] = {
		{ "Comment", "/** True if we should suspend notifying clients post undo/redo */" },
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "True if we should suspend notifying clients post undo/redo" },
	};
#endif
	void Z_Construct_UClass_UEditorEngine_Statics::NewProp_bSuspendBroadcastPostUndoRedo_SetBit(void* Obj)
	{
		((UEditorEngine*)Obj)->bSuspendBroadcastPostUndoRedo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_bSuspendBroadcastPostUndoRedo = { "bSuspendBroadcastPostUndoRedo", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UEditorEngine), &Z_Construct_UClass_UEditorEngine_Statics::NewProp_bSuspendBroadcastPostUndoRedo_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_bSuspendBroadcastPostUndoRedo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_bSuspendBroadcastPostUndoRedo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_bSquelchTransactionNotification_MetaData[] = {
		{ "Comment", "/** True if we should not display notifications about undo/redo */" },
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "True if we should not display notifications about undo/redo" },
	};
#endif
	void Z_Construct_UClass_UEditorEngine_Statics::NewProp_bSquelchTransactionNotification_SetBit(void* Obj)
	{
		((UEditorEngine*)Obj)->bSquelchTransactionNotification = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_bSquelchTransactionNotification = { "bSquelchTransactionNotification", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UEditorEngine), &Z_Construct_UClass_UEditorEngine_Statics::NewProp_bSquelchTransactionNotification_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_bSquelchTransactionNotification_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_bSquelchTransactionNotification_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_bNotifyUndoRedoSelectionChange_MetaData[] = {
		{ "Comment", "/** True if we should force a selection change notification during an undo/redo */" },
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "True if we should force a selection change notification during an undo/redo" },
	};
#endif
	void Z_Construct_UClass_UEditorEngine_Statics::NewProp_bNotifyUndoRedoSelectionChange_SetBit(void* Obj)
	{
		((UEditorEngine*)Obj)->bNotifyUndoRedoSelectionChange = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_bNotifyUndoRedoSelectionChange = { "bNotifyUndoRedoSelectionChange", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UEditorEngine), &Z_Construct_UClass_UEditorEngine_Statics::NewProp_bNotifyUndoRedoSelectionChange_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_bNotifyUndoRedoSelectionChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_bNotifyUndoRedoSelectionChange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_PlayFromHerePlayerStartClass_MetaData[] = {
		{ "Comment", "/** The PlayerStart class used when spawning the player at the current camera location. */" },
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "The PlayerStart class used when spawning the player at the current camera location." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_PlayFromHerePlayerStartClass = { "PlayFromHerePlayerStartClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorEngine, PlayFromHerePlayerStartClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ANavigationObjectBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_PlayFromHerePlayerStartClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_PlayFromHerePlayerStartClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_EditorWorld_MetaData[] = {
		{ "Comment", "/** When Simulating In Editor, a pointer to the original (non-simulating) editor world */" },
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "When Simulating In Editor, a pointer to the original (non-simulating) editor world" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_EditorWorld = { "EditorWorld", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorEngine, EditorWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_EditorWorld_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_EditorWorld_MetaData)) };
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_ActorsThatWereSelected_Inner = { "ActorsThatWereSelected", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_ActorsThatWereSelected_MetaData[] = {
		{ "Comment", "/** When Simulating In Editor, an array of all actors that were selected when it began*/" },
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "When Simulating In Editor, an array of all actors that were selected when it began" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_ActorsThatWereSelected = { "ActorsThatWereSelected", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorEngine, ActorsThatWereSelected), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_ActorsThatWereSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_ActorsThatWereSelected_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_PlayWorldDestination_MetaData[] = {
		{ "Comment", "/** Where did the person want to play? Where to play the game - -1 means in editor, 0 or more is an index into the GConsoleSupportContainer\x09*/" },
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "Where did the person want to play? Where to play the game - -1 means in editor, 0 or more is an index into the GConsoleSupportContainer" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_PlayWorldDestination = { "PlayWorldDestination", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorEngine, PlayWorldDestination), METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_PlayWorldDestination_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_PlayWorldDestination_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_CurrentPlayWorldDestination_MetaData[] = {
		{ "Comment", "/** The current play world destination (I.E console).  -1 means no current play world destination, 0 or more is an index into the GConsoleSupportContainer\x09*/" },
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "The current play world destination (I.E console).  -1 means no current play world destination, 0 or more is an index into the GConsoleSupportContainer" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_CurrentPlayWorldDestination = { "CurrentPlayWorldDestination", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorEngine, CurrentPlayWorldDestination), METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_CurrentPlayWorldDestination_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_CurrentPlayWorldDestination_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_bMobilePreviewPortrait_MetaData[] = {
		{ "Comment", "/** Mobile preview settings for what orientation to default to */" },
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "Mobile preview settings for what orientation to default to" },
	};
#endif
	void Z_Construct_UClass_UEditorEngine_Statics::NewProp_bMobilePreviewPortrait_SetBit(void* Obj)
	{
		((UEditorEngine*)Obj)->bMobilePreviewPortrait = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_bMobilePreviewPortrait = { "bMobilePreviewPortrait", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UEditorEngine), &Z_Construct_UClass_UEditorEngine_Statics::NewProp_bMobilePreviewPortrait_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_bMobilePreviewPortrait_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_bMobilePreviewPortrait_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_BuildPlayDevice_MetaData[] = {
		{ "Comment", "/** Currently targeted device for mobile previewer. */" },
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "Currently targeted device for mobile previewer." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_BuildPlayDevice = { "BuildPlayDevice", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorEngine, BuildPlayDevice), METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_BuildPlayDevice_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_BuildPlayDevice_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_UserEditedPlayWorldURL_MetaData[] = {
		{ "Comment", "/** Play world url string edited by a user. */" },
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "Play world url string edited by a user." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_UserEditedPlayWorldURL = { "UserEditedPlayWorldURL", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorEngine, UserEditedPlayWorldURL), METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_UserEditedPlayWorldURL_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_UserEditedPlayWorldURL_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_ScratchRenderTarget2048_MetaData[] = {
		{ "Comment", "/** Temporary render target that can be used by the editor. */" },
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "Temporary render target that can be used by the editor." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_ScratchRenderTarget2048 = { "ScratchRenderTarget2048", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorEngine, ScratchRenderTarget2048), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_ScratchRenderTarget2048_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_ScratchRenderTarget2048_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_ScratchRenderTarget1024_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_ScratchRenderTarget1024 = { "ScratchRenderTarget1024", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorEngine, ScratchRenderTarget1024), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_ScratchRenderTarget1024_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_ScratchRenderTarget1024_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_ScratchRenderTarget512_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_ScratchRenderTarget512 = { "ScratchRenderTarget512", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorEngine, ScratchRenderTarget512), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_ScratchRenderTarget512_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_ScratchRenderTarget512_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_ScratchRenderTarget256_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_ScratchRenderTarget256 = { "ScratchRenderTarget256", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorEngine, ScratchRenderTarget256), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_ScratchRenderTarget256_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_ScratchRenderTarget256_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_PreviewMeshComp_MetaData[] = {
		{ "Comment", "/** A mesh component used to preview in editor without spawning a static mesh actor. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "A mesh component used to preview in editor without spawning a static mesh actor." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_PreviewMeshComp = { "PreviewMeshComp", nullptr, (EPropertyFlags)0x0014000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorEngine, PreviewMeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_PreviewMeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_PreviewMeshComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_PreviewMeshIndex_MetaData[] = {
		{ "Comment", "/** The index of the mesh to use from the list of preview meshes. */" },
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "The index of the mesh to use from the list of preview meshes." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_PreviewMeshIndex = { "PreviewMeshIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorEngine, PreviewMeshIndex), METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_PreviewMeshIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_PreviewMeshIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_bShowPreviewMesh_MetaData[] = {
		{ "Comment", "/** When true, the preview mesh mode is activated. */" },
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "When true, the preview mesh mode is activated." },
	};
#endif
	void Z_Construct_UClass_UEditorEngine_Statics::NewProp_bShowPreviewMesh_SetBit(void* Obj)
	{
		((UEditorEngine*)Obj)->bShowPreviewMesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_bShowPreviewMesh = { "bShowPreviewMesh", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UEditorEngine), &Z_Construct_UClass_UEditorEngine_Statics::NewProp_bShowPreviewMesh_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_bShowPreviewMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_bShowPreviewMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_bCustomCameraAlignEmitter_MetaData[] = {
		{ "Comment", "/** If \"Camera Align\" emitter handling uses a custom zoom or not */" },
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "If \"Camera Align\" emitter handling uses a custom zoom or not" },
	};
#endif
	void Z_Construct_UClass_UEditorEngine_Statics::NewProp_bCustomCameraAlignEmitter_SetBit(void* Obj)
	{
		((UEditorEngine*)Obj)->bCustomCameraAlignEmitter = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_bCustomCameraAlignEmitter = { "bCustomCameraAlignEmitter", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UEditorEngine), &Z_Construct_UClass_UEditorEngine_Statics::NewProp_bCustomCameraAlignEmitter_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_bCustomCameraAlignEmitter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_bCustomCameraAlignEmitter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_CustomCameraAlignEmitterDistance_MetaData[] = {
		{ "Comment", "/** The distance to place the camera from an emitter actor when custom zooming is enabled */" },
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "The distance to place the camera from an emitter actor when custom zooming is enabled" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_CustomCameraAlignEmitterDistance = { "CustomCameraAlignEmitterDistance", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorEngine, CustomCameraAlignEmitterDistance), METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_CustomCameraAlignEmitterDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_CustomCameraAlignEmitterDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_bDrawSocketsInGMode_MetaData[] = {
		{ "Comment", "/** If true, then draw sockets when socket snapping is enabled in 'g' mode */" },
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "If true, then draw sockets when socket snapping is enabled in 'g' mode" },
	};
#endif
	void Z_Construct_UClass_UEditorEngine_Statics::NewProp_bDrawSocketsInGMode_SetBit(void* Obj)
	{
		((UEditorEngine*)Obj)->bDrawSocketsInGMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_bDrawSocketsInGMode = { "bDrawSocketsInGMode", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UEditorEngine), &Z_Construct_UClass_UEditorEngine_Statics::NewProp_bDrawSocketsInGMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_bDrawSocketsInGMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_bDrawSocketsInGMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_bDrawParticleHelpers_MetaData[] = {
		{ "Comment", "/** If true, then draw particle debug helpers in editor viewports */" },
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "If true, then draw particle debug helpers in editor viewports" },
	};
#endif
	void Z_Construct_UClass_UEditorEngine_Statics::NewProp_bDrawParticleHelpers_SetBit(void* Obj)
	{
		((UEditorEngine*)Obj)->bDrawParticleHelpers = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_bDrawParticleHelpers = { "bDrawParticleHelpers", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UEditorEngine), &Z_Construct_UClass_UEditorEngine_Statics::NewProp_bDrawParticleHelpers_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_bDrawParticleHelpers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_bDrawParticleHelpers_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_BrushBuilders_Inner = { "BrushBuilders", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UBrushBuilder_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_BrushBuilders_MetaData[] = {
		{ "Comment", "/** Brush builders that have been created in the editor */" },
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "Brush builders that have been created in the editor" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_BrushBuilders = { "BrushBuilders", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorEngine, BrushBuilders), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_BrushBuilders_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_BrushBuilders_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_EditorWorldExtensionsManager_MetaData[] = {
		{ "Comment", "/** Manager that holds all extensions paired with a world */" },
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "Manager that holds all extensions paired with a world" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_EditorWorldExtensionsManager = { "EditorWorldExtensionsManager", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorEngine, EditorWorldExtensionsManager), Z_Construct_UClass_UEditorWorldExtensionManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_EditorWorldExtensionsManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_EditorWorldExtensionsManager_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_DragDropHandler_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_DragDropHandler = { "DragDropHandler", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorEngine, DragDropHandler), Z_Construct_UClass_ULevelEditorDragDropHandler_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_DragDropHandler_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_DragDropHandler_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_ActorGroupingUtilsClassName_MetaData[] = {
		{ "Category", "Advanced" },
		{ "MetaClass", "/Script/UnrealEd.ActorGroupingUtils" },
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_ActorGroupingUtilsClassName = { "ActorGroupingUtilsClassName", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorEngine, ActorGroupingUtilsClassName), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_ActorGroupingUtilsClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_ActorGroupingUtilsClassName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_ActorGroupingUtils_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_ActorGroupingUtils = { "ActorGroupingUtils", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorEngine, ActorGroupingUtils), Z_Construct_UClass_UActorGroupingUtils_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_ActorGroupingUtils_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_ActorGroupingUtils_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_PlayWorldLocation_MetaData[] = {
		{ "Comment", "/** An optional location for the starting location for \"Play From Here\"\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "An optional location for the starting location for \"Play From Here\"" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_PlayWorldLocation = { "PlayWorldLocation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorEngine, PlayWorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_PlayWorldLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_PlayWorldLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_PlayWorldRotation_MetaData[] = {
		{ "Comment", "/** An optional rotation for the starting location for \"Play From Here\"\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "An optional rotation for the starting location for \"Play From Here\"" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_PlayWorldRotation = { "PlayWorldRotation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorEngine, PlayWorldRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_PlayWorldRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_PlayWorldRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_bIsPlayWorldQueued_MetaData[] = {
		{ "Comment", "/** Has a request for \"Play From Here\" been made?\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09 \x09\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "Has a request for \"Play From Here\" been made?" },
	};
#endif
	void Z_Construct_UClass_UEditorEngine_Statics::NewProp_bIsPlayWorldQueued_SetBit(void* Obj)
	{
		((UEditorEngine*)Obj)->bIsPlayWorldQueued = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_bIsPlayWorldQueued = { "bIsPlayWorldQueued", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UEditorEngine), &Z_Construct_UClass_UEditorEngine_Statics::NewProp_bIsPlayWorldQueued_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_bIsPlayWorldQueued_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_bIsPlayWorldQueued_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_bIsSimulateInEditorQueued_MetaData[] = {
		{ "Comment", "/** True if we are requesting to start a simulation-in-editor session */" },
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "True if we are requesting to start a simulation-in-editor session" },
	};
#endif
	void Z_Construct_UClass_UEditorEngine_Statics::NewProp_bIsSimulateInEditorQueued_SetBit(void* Obj)
	{
		((UEditorEngine*)Obj)->bIsSimulateInEditorQueued = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_bIsSimulateInEditorQueued = { "bIsSimulateInEditorQueued", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UEditorEngine), &Z_Construct_UClass_UEditorEngine_Statics::NewProp_bIsSimulateInEditorQueued_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_bIsSimulateInEditorQueued_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_bIsSimulateInEditorQueued_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_bHasPlayWorldPlacement_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
	};
#endif
	void Z_Construct_UClass_UEditorEngine_Statics::NewProp_bHasPlayWorldPlacement_SetBit(void* Obj)
	{
		((UEditorEngine*)Obj)->bHasPlayWorldPlacement = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_bHasPlayWorldPlacement = { "bHasPlayWorldPlacement", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UEditorEngine), &Z_Construct_UClass_UEditorEngine_Statics::NewProp_bHasPlayWorldPlacement_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_bHasPlayWorldPlacement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_bHasPlayWorldPlacement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_bUseMobilePreviewForPlayWorld_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
	};
#endif
	void Z_Construct_UClass_UEditorEngine_Statics::NewProp_bUseMobilePreviewForPlayWorld_SetBit(void* Obj)
	{
		((UEditorEngine*)Obj)->bUseMobilePreviewForPlayWorld = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_bUseMobilePreviewForPlayWorld = { "bUseMobilePreviewForPlayWorld", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UEditorEngine), &Z_Construct_UClass_UEditorEngine_Statics::NewProp_bUseMobilePreviewForPlayWorld_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_bUseMobilePreviewForPlayWorld_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_bUseMobilePreviewForPlayWorld_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_bUseVRPreviewForPlayWorld_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
	};
#endif
	void Z_Construct_UClass_UEditorEngine_Statics::NewProp_bUseVRPreviewForPlayWorld_SetBit(void* Obj)
	{
		((UEditorEngine*)Obj)->bUseVRPreviewForPlayWorld = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_bUseVRPreviewForPlayWorld = { "bUseVRPreviewForPlayWorld", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UEditorEngine), &Z_Construct_UClass_UEditorEngine_Statics::NewProp_bUseVRPreviewForPlayWorld_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_bUseVRPreviewForPlayWorld_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_bUseVRPreviewForPlayWorld_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_bIsSimulatingInEditor_MetaData[] = {
		{ "Comment", "/** True if we're Simulating In Editor, as opposed to Playing In Editor.  In this mode, simulation takes place right the level editing environment */// UE_DEPRECATED(4.25, \"Use IsSimulateInEditorInProgress instead.\")\n" },
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
		{ "ToolTip", "True if we're Simulating In Editor, as opposed to Playing In Editor.  In this mode, simulation takes place right the level editing environment // UE_DEPRECATED(4.25, \"Use IsSimulateInEditorInProgress instead.\")" },
	};
#endif
	void Z_Construct_UClass_UEditorEngine_Statics::NewProp_bIsSimulatingInEditor_SetBit(void* Obj)
	{
		((UEditorEngine*)Obj)->bIsSimulatingInEditor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_bIsSimulatingInEditor = { "bIsSimulatingInEditor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UEditorEngine), &Z_Construct_UClass_UEditorEngine_Statics::NewProp_bIsSimulatingInEditor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_bIsSimulatingInEditor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_bIsSimulatingInEditor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorEngine_Statics::NewProp_PlayInEditorViewportIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/EditorEngine.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEditorEngine_Statics::NewProp_PlayInEditorViewportIndex = { "PlayInEditorViewportIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorEngine, PlayInEditorViewportIndex), METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::NewProp_PlayInEditorViewportIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::NewProp_PlayInEditorViewportIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditorEngine_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_TempModel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_ConversionTempModel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_Trans,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_Bad,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_EditorFont,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_PreviewSoundCue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_PreviewAudioComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_EditorCube,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_EditorSphere,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_EditorPlane,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_EditorCylinder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_bFastRebuild,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_IsImportingT3D,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_ClickFlags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_ParentContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_UnsnappedClickLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_ClickLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_ClickPlane,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_MouseMovement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_DetailMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_UseSizingBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_UseAxisIndicator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_GodMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_GameCommandLine,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_bShowBrushMarkerPolys,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_bEnableSocketSnapping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_bEnableLODLocking,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_HeightMapExportClassName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_ActorFactories_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_ActorFactories,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_UserOpenedFile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_InEditorGameURLOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_PlayWorld,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_bIsToggleBetweenPIEandSIEQueued,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_bAllowMultiplePIEWorlds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_bRequestEndPlayMapQueued,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_bIgnoreSelectionChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_bSuspendBroadcastPostUndoRedo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_bSquelchTransactionNotification,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_bNotifyUndoRedoSelectionChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_PlayFromHerePlayerStartClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_EditorWorld,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_ActorsThatWereSelected_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_ActorsThatWereSelected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_PlayWorldDestination,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_CurrentPlayWorldDestination,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_bMobilePreviewPortrait,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_BuildPlayDevice,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_UserEditedPlayWorldURL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_ScratchRenderTarget2048,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_ScratchRenderTarget1024,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_ScratchRenderTarget512,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_ScratchRenderTarget256,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_PreviewMeshComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_PreviewMeshIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_bShowPreviewMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_bCustomCameraAlignEmitter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_CustomCameraAlignEmitterDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_bDrawSocketsInGMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_bDrawParticleHelpers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_BrushBuilders_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_BrushBuilders,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_EditorWorldExtensionsManager,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_DragDropHandler,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_ActorGroupingUtilsClassName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_ActorGroupingUtils,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_PlayWorldLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_PlayWorldRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_bIsPlayWorldQueued,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_bIsSimulateInEditorQueued,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_bHasPlayWorldPlacement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_bUseMobilePreviewForPlayWorld,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_bUseVRPreviewForPlayWorld,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_bIsSimulatingInEditor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorEngine_Statics::NewProp_PlayInEditorViewportIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorEngine_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorEngine>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorEngine_Statics::ClassParams = {
		&UEditorEngine::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEditorEngine_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::PropPointers),
		0,
		0x009000AEu,
		METADATA_PARAMS(Z_Construct_UClass_UEditorEngine_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorEngine_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorEngine()
	{
		if (!Z_Registration_Info_UClass_UEditorEngine.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorEngine.OuterSingleton, Z_Construct_UClass_UEditorEngine_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditorEngine.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UEditorEngine>()
	{
		return UEditorEngine::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorEngine);
	UEditorEngine::~UEditorEngine() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Editor_EditorEngine_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Editor_EditorEngine_h_Statics::EnumInfo[] = {
		{ EMapSetBrushFlags_StaticEnum, TEXT("EMapSetBrushFlags"), &Z_Registration_Info_UEnum_EMapSetBrushFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1917499489U) },
		{ EPasteTo_StaticEnum, TEXT("EPasteTo"), &Z_Registration_Info_UEnum_EPasteTo, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1663866262U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Editor_EditorEngine_h_Statics::ScriptStructInfo[] = {
		{ FCopySelectedInfo::StaticStruct, Z_Construct_UScriptStruct_FCopySelectedInfo_Statics::NewStructOps, TEXT("CopySelectedInfo"), &Z_Registration_Info_UScriptStruct_CopySelectedInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCopySelectedInfo), 76328627U) },
		{ FSelectionStateOfLevel::StaticStruct, Z_Construct_UScriptStruct_FSelectionStateOfLevel_Statics::NewStructOps, TEXT("SelectionStateOfLevel"), &Z_Registration_Info_UScriptStruct_SelectionStateOfLevel, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSelectionStateOfLevel), 3272182022U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Editor_EditorEngine_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEditorEngine, UEditorEngine::StaticClass, TEXT("UEditorEngine"), &Z_Registration_Info_UClass_UEditorEngine, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorEngine), 1931126530U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Editor_EditorEngine_h_753800997(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Editor_EditorEngine_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Editor_EditorEngine_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Editor_EditorEngine_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Editor_EditorEngine_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Editor_EditorEngine_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Editor_EditorEngine_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
