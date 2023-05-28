// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EditorLevelLibrary.h"
#include "../../Source/Runtime/Engine/Classes/Engine/MeshMerging.h"
#include "StaticMeshEditorSubsystemHelpers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorLevelLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	EDITORSCRIPTINGUTILITIES_API UClass* Z_Construct_UClass_UEditorLevelLibrary();
	EDITORSCRIPTINGUTILITIES_API UClass* Z_Construct_UClass_UEditorLevelLibrary_NoRegister();
	EDITORSCRIPTINGUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FEditorScriptingCreateProxyMeshActorOptions_Deprecated();
	EDITORSCRIPTINGUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FEditorScriptingJoinStaticMeshActorsOptions_Deprecated();
	EDITORSCRIPTINGUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FEditorScriptingMergeStaticMeshActorsOptions_Deprecated();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshMergingSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshProxySettings();
	STATICMESHEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FCreateProxyMeshActorOptions();
	STATICMESHEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FJoinStaticMeshActorsOptions();
	STATICMESHEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FMergeStaticMeshActorsOptions();
	UPackage* Z_Construct_UPackage__Script_EditorScriptingUtilities();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EditorScriptingJoinStaticMeshActorsOptions_Deprecated;
class UScriptStruct* FEditorScriptingJoinStaticMeshActorsOptions_Deprecated::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EditorScriptingJoinStaticMeshActorsOptions_Deprecated.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EditorScriptingJoinStaticMeshActorsOptions_Deprecated.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditorScriptingJoinStaticMeshActorsOptions_Deprecated, (UObject*)Z_Construct_UPackage__Script_EditorScriptingUtilities(), TEXT("EditorScriptingJoinStaticMeshActorsOptions_Deprecated"));
	}
	return Z_Registration_Info_UScriptStruct_EditorScriptingJoinStaticMeshActorsOptions_Deprecated.OuterSingleton;
}
template<> EDITORSCRIPTINGUTILITIES_API UScriptStruct* StaticStruct<FEditorScriptingJoinStaticMeshActorsOptions_Deprecated>()
{
	return FEditorScriptingJoinStaticMeshActorsOptions_Deprecated::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEditorScriptingJoinStaticMeshActorsOptions_Deprecated_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDestroySourceActors_MetaData[];
#endif
		static void NewProp_bDestroySourceActors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDestroySourceActors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewActorLabel_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NewActorLabel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRenameComponentsFromSource_MetaData[];
#endif
		static void NewProp_bRenameComponentsFromSource_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRenameComponentsFromSource;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorScriptingJoinStaticMeshActorsOptions_Deprecated_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EditorLevelLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEditorScriptingJoinStaticMeshActorsOptions_Deprecated_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditorScriptingJoinStaticMeshActorsOptions_Deprecated>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorScriptingJoinStaticMeshActorsOptions_Deprecated_Statics::NewProp_bDestroySourceActors_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "// Destroy the provided Actors after the operation.\n" },
		{ "ModuleRelativePath", "Public/EditorLevelLibrary.h" },
		{ "ToolTip", "Destroy the provided Actors after the operation." },
	};
#endif
	void Z_Construct_UScriptStruct_FEditorScriptingJoinStaticMeshActorsOptions_Deprecated_Statics::NewProp_bDestroySourceActors_SetBit(void* Obj)
	{
		((FEditorScriptingJoinStaticMeshActorsOptions_Deprecated*)Obj)->bDestroySourceActors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEditorScriptingJoinStaticMeshActorsOptions_Deprecated_Statics::NewProp_bDestroySourceActors = { "bDestroySourceActors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FEditorScriptingJoinStaticMeshActorsOptions_Deprecated), &Z_Construct_UScriptStruct_FEditorScriptingJoinStaticMeshActorsOptions_Deprecated_Statics::NewProp_bDestroySourceActors_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorScriptingJoinStaticMeshActorsOptions_Deprecated_Statics::NewProp_bDestroySourceActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorScriptingJoinStaticMeshActorsOptions_Deprecated_Statics::NewProp_bDestroySourceActors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorScriptingJoinStaticMeshActorsOptions_Deprecated_Statics::NewProp_NewActorLabel_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "// Name of the new spawned Actor to replace the provided Actors.\n" },
		{ "ModuleRelativePath", "Public/EditorLevelLibrary.h" },
		{ "ToolTip", "Name of the new spawned Actor to replace the provided Actors." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEditorScriptingJoinStaticMeshActorsOptions_Deprecated_Statics::NewProp_NewActorLabel = { "NewActorLabel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEditorScriptingJoinStaticMeshActorsOptions_Deprecated, NewActorLabel), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorScriptingJoinStaticMeshActorsOptions_Deprecated_Statics::NewProp_NewActorLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorScriptingJoinStaticMeshActorsOptions_Deprecated_Statics::NewProp_NewActorLabel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorScriptingJoinStaticMeshActorsOptions_Deprecated_Statics::NewProp_bRenameComponentsFromSource_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "// Rename StaticMeshComponents based on source Actor's name.\n" },
		{ "ModuleRelativePath", "Public/EditorLevelLibrary.h" },
		{ "ToolTip", "Rename StaticMeshComponents based on source Actor's name." },
	};
#endif
	void Z_Construct_UScriptStruct_FEditorScriptingJoinStaticMeshActorsOptions_Deprecated_Statics::NewProp_bRenameComponentsFromSource_SetBit(void* Obj)
	{
		((FEditorScriptingJoinStaticMeshActorsOptions_Deprecated*)Obj)->bRenameComponentsFromSource = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEditorScriptingJoinStaticMeshActorsOptions_Deprecated_Statics::NewProp_bRenameComponentsFromSource = { "bRenameComponentsFromSource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FEditorScriptingJoinStaticMeshActorsOptions_Deprecated), &Z_Construct_UScriptStruct_FEditorScriptingJoinStaticMeshActorsOptions_Deprecated_Statics::NewProp_bRenameComponentsFromSource_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorScriptingJoinStaticMeshActorsOptions_Deprecated_Statics::NewProp_bRenameComponentsFromSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorScriptingJoinStaticMeshActorsOptions_Deprecated_Statics::NewProp_bRenameComponentsFromSource_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEditorScriptingJoinStaticMeshActorsOptions_Deprecated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorScriptingJoinStaticMeshActorsOptions_Deprecated_Statics::NewProp_bDestroySourceActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorScriptingJoinStaticMeshActorsOptions_Deprecated_Statics::NewProp_NewActorLabel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorScriptingJoinStaticMeshActorsOptions_Deprecated_Statics::NewProp_bRenameComponentsFromSource,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditorScriptingJoinStaticMeshActorsOptions_Deprecated_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EditorScriptingUtilities,
		nullptr,
		&NewStructOps,
		"EditorScriptingJoinStaticMeshActorsOptions_Deprecated",
		sizeof(FEditorScriptingJoinStaticMeshActorsOptions_Deprecated),
		alignof(FEditorScriptingJoinStaticMeshActorsOptions_Deprecated),
		Z_Construct_UScriptStruct_FEditorScriptingJoinStaticMeshActorsOptions_Deprecated_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorScriptingJoinStaticMeshActorsOptions_Deprecated_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorScriptingJoinStaticMeshActorsOptions_Deprecated_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorScriptingJoinStaticMeshActorsOptions_Deprecated_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEditorScriptingJoinStaticMeshActorsOptions_Deprecated()
	{
		if (!Z_Registration_Info_UScriptStruct_EditorScriptingJoinStaticMeshActorsOptions_Deprecated.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EditorScriptingJoinStaticMeshActorsOptions_Deprecated.InnerSingleton, Z_Construct_UScriptStruct_FEditorScriptingJoinStaticMeshActorsOptions_Deprecated_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EditorScriptingJoinStaticMeshActorsOptions_Deprecated.InnerSingleton;
	}

static_assert(std::is_polymorphic<FEditorScriptingMergeStaticMeshActorsOptions_Deprecated>() == std::is_polymorphic<FEditorScriptingJoinStaticMeshActorsOptions_Deprecated>(), "USTRUCT FEditorScriptingMergeStaticMeshActorsOptions_Deprecated cannot be polymorphic unless super FEditorScriptingJoinStaticMeshActorsOptions_Deprecated is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EditorScriptingMergeStaticMeshActorsOptions_Deprecated;
class UScriptStruct* FEditorScriptingMergeStaticMeshActorsOptions_Deprecated::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EditorScriptingMergeStaticMeshActorsOptions_Deprecated.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EditorScriptingMergeStaticMeshActorsOptions_Deprecated.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditorScriptingMergeStaticMeshActorsOptions_Deprecated, (UObject*)Z_Construct_UPackage__Script_EditorScriptingUtilities(), TEXT("EditorScriptingMergeStaticMeshActorsOptions_Deprecated"));
	}
	return Z_Registration_Info_UScriptStruct_EditorScriptingMergeStaticMeshActorsOptions_Deprecated.OuterSingleton;
}
template<> EDITORSCRIPTINGUTILITIES_API UScriptStruct* StaticStruct<FEditorScriptingMergeStaticMeshActorsOptions_Deprecated>()
{
	return FEditorScriptingMergeStaticMeshActorsOptions_Deprecated::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEditorScriptingMergeStaticMeshActorsOptions_Deprecated_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSpawnMergedActor_MetaData[];
#endif
		static void NewProp_bSpawnMergedActor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSpawnMergedActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BasePackageName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BasePackageName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshMergingSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeshMergingSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorScriptingMergeStaticMeshActorsOptions_Deprecated_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EditorLevelLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEditorScriptingMergeStaticMeshActorsOptions_Deprecated_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditorScriptingMergeStaticMeshActorsOptions_Deprecated>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorScriptingMergeStaticMeshActorsOptions_Deprecated_Statics::NewProp_bSpawnMergedActor_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "// Spawn the new merged actors\n" },
		{ "ModuleRelativePath", "Public/EditorLevelLibrary.h" },
		{ "ToolTip", "Spawn the new merged actors" },
	};
#endif
	void Z_Construct_UScriptStruct_FEditorScriptingMergeStaticMeshActorsOptions_Deprecated_Statics::NewProp_bSpawnMergedActor_SetBit(void* Obj)
	{
		((FEditorScriptingMergeStaticMeshActorsOptions_Deprecated*)Obj)->bSpawnMergedActor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEditorScriptingMergeStaticMeshActorsOptions_Deprecated_Statics::NewProp_bSpawnMergedActor = { "bSpawnMergedActor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FEditorScriptingMergeStaticMeshActorsOptions_Deprecated), &Z_Construct_UScriptStruct_FEditorScriptingMergeStaticMeshActorsOptions_Deprecated_Statics::NewProp_bSpawnMergedActor_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorScriptingMergeStaticMeshActorsOptions_Deprecated_Statics::NewProp_bSpawnMergedActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorScriptingMergeStaticMeshActorsOptions_Deprecated_Statics::NewProp_bSpawnMergedActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorScriptingMergeStaticMeshActorsOptions_Deprecated_Statics::NewProp_BasePackageName_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "// The package path you want to save to. ie: /Game/MyFolder\n" },
		{ "ModuleRelativePath", "Public/EditorLevelLibrary.h" },
		{ "ToolTip", "The package path you want to save to. ie: /Game/MyFolder" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEditorScriptingMergeStaticMeshActorsOptions_Deprecated_Statics::NewProp_BasePackageName = { "BasePackageName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEditorScriptingMergeStaticMeshActorsOptions_Deprecated, BasePackageName), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorScriptingMergeStaticMeshActorsOptions_Deprecated_Statics::NewProp_BasePackageName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorScriptingMergeStaticMeshActorsOptions_Deprecated_Statics::NewProp_BasePackageName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorScriptingMergeStaticMeshActorsOptions_Deprecated_Statics::NewProp_MeshMergingSettings_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/EditorLevelLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditorScriptingMergeStaticMeshActorsOptions_Deprecated_Statics::NewProp_MeshMergingSettings = { "MeshMergingSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEditorScriptingMergeStaticMeshActorsOptions_Deprecated, MeshMergingSettings), Z_Construct_UScriptStruct_FMeshMergingSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorScriptingMergeStaticMeshActorsOptions_Deprecated_Statics::NewProp_MeshMergingSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorScriptingMergeStaticMeshActorsOptions_Deprecated_Statics::NewProp_MeshMergingSettings_MetaData)) }; // 1528135240
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEditorScriptingMergeStaticMeshActorsOptions_Deprecated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorScriptingMergeStaticMeshActorsOptions_Deprecated_Statics::NewProp_bSpawnMergedActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorScriptingMergeStaticMeshActorsOptions_Deprecated_Statics::NewProp_BasePackageName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorScriptingMergeStaticMeshActorsOptions_Deprecated_Statics::NewProp_MeshMergingSettings,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditorScriptingMergeStaticMeshActorsOptions_Deprecated_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EditorScriptingUtilities,
		Z_Construct_UScriptStruct_FEditorScriptingJoinStaticMeshActorsOptions_Deprecated,
		&NewStructOps,
		"EditorScriptingMergeStaticMeshActorsOptions_Deprecated",
		sizeof(FEditorScriptingMergeStaticMeshActorsOptions_Deprecated),
		alignof(FEditorScriptingMergeStaticMeshActorsOptions_Deprecated),
		Z_Construct_UScriptStruct_FEditorScriptingMergeStaticMeshActorsOptions_Deprecated_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorScriptingMergeStaticMeshActorsOptions_Deprecated_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorScriptingMergeStaticMeshActorsOptions_Deprecated_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorScriptingMergeStaticMeshActorsOptions_Deprecated_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEditorScriptingMergeStaticMeshActorsOptions_Deprecated()
	{
		if (!Z_Registration_Info_UScriptStruct_EditorScriptingMergeStaticMeshActorsOptions_Deprecated.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EditorScriptingMergeStaticMeshActorsOptions_Deprecated.InnerSingleton, Z_Construct_UScriptStruct_FEditorScriptingMergeStaticMeshActorsOptions_Deprecated_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EditorScriptingMergeStaticMeshActorsOptions_Deprecated.InnerSingleton;
	}

static_assert(std::is_polymorphic<FEditorScriptingCreateProxyMeshActorOptions_Deprecated>() == std::is_polymorphic<FEditorScriptingJoinStaticMeshActorsOptions_Deprecated>(), "USTRUCT FEditorScriptingCreateProxyMeshActorOptions_Deprecated cannot be polymorphic unless super FEditorScriptingJoinStaticMeshActorsOptions_Deprecated is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EditorScriptingCreateProxyMeshActorOptions_Deprecated;
class UScriptStruct* FEditorScriptingCreateProxyMeshActorOptions_Deprecated::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EditorScriptingCreateProxyMeshActorOptions_Deprecated.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EditorScriptingCreateProxyMeshActorOptions_Deprecated.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditorScriptingCreateProxyMeshActorOptions_Deprecated, (UObject*)Z_Construct_UPackage__Script_EditorScriptingUtilities(), TEXT("EditorScriptingCreateProxyMeshActorOptions_Deprecated"));
	}
	return Z_Registration_Info_UScriptStruct_EditorScriptingCreateProxyMeshActorOptions_Deprecated.OuterSingleton;
}
template<> EDITORSCRIPTINGUTILITIES_API UScriptStruct* StaticStruct<FEditorScriptingCreateProxyMeshActorOptions_Deprecated>()
{
	return FEditorScriptingCreateProxyMeshActorOptions_Deprecated::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEditorScriptingCreateProxyMeshActorOptions_Deprecated_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSpawnMergedActor_MetaData[];
#endif
		static void NewProp_bSpawnMergedActor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSpawnMergedActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BasePackageName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BasePackageName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshProxySettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeshProxySettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorScriptingCreateProxyMeshActorOptions_Deprecated_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EditorLevelLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEditorScriptingCreateProxyMeshActorOptions_Deprecated_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditorScriptingCreateProxyMeshActorOptions_Deprecated>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorScriptingCreateProxyMeshActorOptions_Deprecated_Statics::NewProp_bSpawnMergedActor_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "// Spawn the new merged actors\n" },
		{ "ModuleRelativePath", "Public/EditorLevelLibrary.h" },
		{ "ToolTip", "Spawn the new merged actors" },
	};
#endif
	void Z_Construct_UScriptStruct_FEditorScriptingCreateProxyMeshActorOptions_Deprecated_Statics::NewProp_bSpawnMergedActor_SetBit(void* Obj)
	{
		((FEditorScriptingCreateProxyMeshActorOptions_Deprecated*)Obj)->bSpawnMergedActor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEditorScriptingCreateProxyMeshActorOptions_Deprecated_Statics::NewProp_bSpawnMergedActor = { "bSpawnMergedActor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FEditorScriptingCreateProxyMeshActorOptions_Deprecated), &Z_Construct_UScriptStruct_FEditorScriptingCreateProxyMeshActorOptions_Deprecated_Statics::NewProp_bSpawnMergedActor_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorScriptingCreateProxyMeshActorOptions_Deprecated_Statics::NewProp_bSpawnMergedActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorScriptingCreateProxyMeshActorOptions_Deprecated_Statics::NewProp_bSpawnMergedActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorScriptingCreateProxyMeshActorOptions_Deprecated_Statics::NewProp_BasePackageName_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "// The package path you want to save to. ie: /Game/MyFolder\n" },
		{ "ModuleRelativePath", "Public/EditorLevelLibrary.h" },
		{ "ToolTip", "The package path you want to save to. ie: /Game/MyFolder" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEditorScriptingCreateProxyMeshActorOptions_Deprecated_Statics::NewProp_BasePackageName = { "BasePackageName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEditorScriptingCreateProxyMeshActorOptions_Deprecated, BasePackageName), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorScriptingCreateProxyMeshActorOptions_Deprecated_Statics::NewProp_BasePackageName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorScriptingCreateProxyMeshActorOptions_Deprecated_Statics::NewProp_BasePackageName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorScriptingCreateProxyMeshActorOptions_Deprecated_Statics::NewProp_MeshProxySettings_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/EditorLevelLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditorScriptingCreateProxyMeshActorOptions_Deprecated_Statics::NewProp_MeshProxySettings = { "MeshProxySettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEditorScriptingCreateProxyMeshActorOptions_Deprecated, MeshProxySettings), Z_Construct_UScriptStruct_FMeshProxySettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorScriptingCreateProxyMeshActorOptions_Deprecated_Statics::NewProp_MeshProxySettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorScriptingCreateProxyMeshActorOptions_Deprecated_Statics::NewProp_MeshProxySettings_MetaData)) }; // 1902887107
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEditorScriptingCreateProxyMeshActorOptions_Deprecated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorScriptingCreateProxyMeshActorOptions_Deprecated_Statics::NewProp_bSpawnMergedActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorScriptingCreateProxyMeshActorOptions_Deprecated_Statics::NewProp_BasePackageName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorScriptingCreateProxyMeshActorOptions_Deprecated_Statics::NewProp_MeshProxySettings,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditorScriptingCreateProxyMeshActorOptions_Deprecated_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EditorScriptingUtilities,
		Z_Construct_UScriptStruct_FEditorScriptingJoinStaticMeshActorsOptions_Deprecated,
		&NewStructOps,
		"EditorScriptingCreateProxyMeshActorOptions_Deprecated",
		sizeof(FEditorScriptingCreateProxyMeshActorOptions_Deprecated),
		alignof(FEditorScriptingCreateProxyMeshActorOptions_Deprecated),
		Z_Construct_UScriptStruct_FEditorScriptingCreateProxyMeshActorOptions_Deprecated_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorScriptingCreateProxyMeshActorOptions_Deprecated_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorScriptingCreateProxyMeshActorOptions_Deprecated_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorScriptingCreateProxyMeshActorOptions_Deprecated_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEditorScriptingCreateProxyMeshActorOptions_Deprecated()
	{
		if (!Z_Registration_Info_UScriptStruct_EditorScriptingCreateProxyMeshActorOptions_Deprecated.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EditorScriptingCreateProxyMeshActorOptions_Deprecated.InnerSingleton, Z_Construct_UScriptStruct_FEditorScriptingCreateProxyMeshActorOptions_Deprecated_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EditorScriptingCreateProxyMeshActorOptions_Deprecated.InnerSingleton;
	}
	DEFINE_FUNCTION(UEditorLevelLibrary::execCreateProxyMeshActor)
	{
		P_GET_TARRAY_REF(AStaticMeshActor*,Z_Param_Out_ActorsToMerge);
		P_GET_STRUCT_REF(FCreateProxyMeshActorOptions,Z_Param_Out_MergeOptions);
		P_GET_OBJECT_REF(AStaticMeshActor,Z_Param_Out_OutMergedActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEditorLevelLibrary::CreateProxyMeshActor(Z_Param_Out_ActorsToMerge,Z_Param_Out_MergeOptions,Z_Param_Out_OutMergedActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorLevelLibrary::execMergeStaticMeshActors)
	{
		P_GET_TARRAY_REF(AStaticMeshActor*,Z_Param_Out_ActorsToMerge);
		P_GET_STRUCT_REF(FMergeStaticMeshActorsOptions,Z_Param_Out_MergeOptions);
		P_GET_OBJECT_REF(AStaticMeshActor,Z_Param_Out_OutMergedActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEditorLevelLibrary::MergeStaticMeshActors(Z_Param_Out_ActorsToMerge,Z_Param_Out_MergeOptions,Z_Param_Out_OutMergedActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorLevelLibrary::execJoinStaticMeshActors)
	{
		P_GET_TARRAY_REF(AStaticMeshActor*,Z_Param_Out_ActorsToJoin);
		P_GET_STRUCT_REF(FJoinStaticMeshActorsOptions,Z_Param_Out_JoinOptions);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=UEditorLevelLibrary::JoinStaticMeshActors(Z_Param_Out_ActorsToJoin,Z_Param_Out_JoinOptions);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorLevelLibrary::execConvertActors)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_Actors);
		P_GET_OBJECT(UClass,Z_Param_ActorClass);
		P_GET_PROPERTY(FStrProperty,Z_Param_StaticMeshPackagePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AActor*>*)Z_Param__Result=UEditorLevelLibrary::ConvertActors(Z_Param_Out_Actors,Z_Param_ActorClass,Z_Param_StaticMeshPackagePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorLevelLibrary::execReplaceMeshComponentsMeshesOnActors)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_Actors);
		P_GET_OBJECT(UStaticMesh,Z_Param_MeshToBeReplaced);
		P_GET_OBJECT(UStaticMesh,Z_Param_NewMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEditorLevelLibrary::ReplaceMeshComponentsMeshesOnActors(Z_Param_Out_Actors,Z_Param_MeshToBeReplaced,Z_Param_NewMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorLevelLibrary::execReplaceMeshComponentsMeshes)
	{
		P_GET_TARRAY_REF(UStaticMeshComponent*,Z_Param_Out_MeshComponents);
		P_GET_OBJECT(UStaticMesh,Z_Param_MeshToBeReplaced);
		P_GET_OBJECT(UStaticMesh,Z_Param_NewMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEditorLevelLibrary::ReplaceMeshComponentsMeshes(Z_Param_Out_MeshComponents,Z_Param_MeshToBeReplaced,Z_Param_NewMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorLevelLibrary::execReplaceMeshComponentsMaterialsOnActors)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_Actors);
		P_GET_OBJECT(UMaterialInterface,Z_Param_MaterialToBeReplaced);
		P_GET_OBJECT(UMaterialInterface,Z_Param_NewMaterial);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEditorLevelLibrary::ReplaceMeshComponentsMaterialsOnActors(Z_Param_Out_Actors,Z_Param_MaterialToBeReplaced,Z_Param_NewMaterial);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorLevelLibrary::execReplaceMeshComponentsMaterials)
	{
		P_GET_TARRAY_REF(UMeshComponent*,Z_Param_Out_MeshComponents);
		P_GET_OBJECT(UMaterialInterface,Z_Param_MaterialToBeReplaced);
		P_GET_OBJECT(UMaterialInterface,Z_Param_NewMaterial);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEditorLevelLibrary::ReplaceMeshComponentsMaterials(Z_Param_Out_MeshComponents,Z_Param_MaterialToBeReplaced,Z_Param_NewMaterial);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorLevelLibrary::execSetCurrentLevelByName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_LevelName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEditorLevelLibrary::SetCurrentLevelByName(Z_Param_LevelName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorLevelLibrary::execSaveAllDirtyLevels)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEditorLevelLibrary::SaveAllDirtyLevels();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorLevelLibrary::execSaveCurrentLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEditorLevelLibrary::SaveCurrentLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorLevelLibrary::execLoadLevel)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AssetPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEditorLevelLibrary::LoadLevel(Z_Param_AssetPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorLevelLibrary::execNewLevelFromTemplate)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AssetPath);
		P_GET_PROPERTY(FStrProperty,Z_Param_TemplateAssetPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEditorLevelLibrary::NewLevelFromTemplate(Z_Param_AssetPath,Z_Param_TemplateAssetPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorLevelLibrary::execNewLevel)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AssetPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEditorLevelLibrary::NewLevel(Z_Param_AssetPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorLevelLibrary::execGetPIEWorlds)
	{
		P_GET_UBOOL(Z_Param_bIncludeDedicatedServer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UWorld*>*)Z_Param__Result=UEditorLevelLibrary::GetPIEWorlds(Z_Param_bIncludeDedicatedServer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorLevelLibrary::execGetGameWorld)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWorld**)Z_Param__Result=UEditorLevelLibrary::GetGameWorld();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorLevelLibrary::execGetEditorWorld)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWorld**)Z_Param__Result=UEditorLevelLibrary::GetEditorWorld();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorLevelLibrary::execDestroyActor)
	{
		P_GET_OBJECT(AActor,Z_Param_ActorToDestroy);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEditorLevelLibrary::DestroyActor(Z_Param_ActorToDestroy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorLevelLibrary::execSpawnActorFromClass)
	{
		P_GET_OBJECT(UClass,Z_Param_ActorClass);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_STRUCT(FRotator,Z_Param_Rotation);
		P_GET_UBOOL(Z_Param_bTransient);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=UEditorLevelLibrary::SpawnActorFromClass(Z_Param_ActorClass,Z_Param_Location,Z_Param_Rotation,Z_Param_bTransient);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorLevelLibrary::execSpawnActorFromObject)
	{
		P_GET_OBJECT(UObject,Z_Param_ObjectToUse);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_STRUCT(FRotator,Z_Param_Rotation);
		P_GET_UBOOL(Z_Param_bTransient);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=UEditorLevelLibrary::SpawnActorFromObject(Z_Param_ObjectToUse,Z_Param_Location,Z_Param_Rotation,Z_Param_bTransient);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorLevelLibrary::execEditorSetGameView)
	{
		P_GET_UBOOL(Z_Param_bGameView);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEditorLevelLibrary::EditorSetGameView(Z_Param_bGameView);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorLevelLibrary::execGetActorReference)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PathToActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=UEditorLevelLibrary::GetActorReference(Z_Param_PathToActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorLevelLibrary::execSetActorSelectionState)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_UBOOL(Z_Param_bShouldBeSelected);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEditorLevelLibrary::SetActorSelectionState(Z_Param_Actor,Z_Param_bShouldBeSelected);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorLevelLibrary::execSelectNothing)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UEditorLevelLibrary::SelectNothing();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorLevelLibrary::execClearActorSelectionSet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UEditorLevelLibrary::ClearActorSelectionSet();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorLevelLibrary::execSetLevelViewportCameraInfo)
	{
		P_GET_STRUCT(FVector,Z_Param_CameraLocation);
		P_GET_STRUCT(FRotator,Z_Param_CameraRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEditorLevelLibrary::SetLevelViewportCameraInfo(Z_Param_CameraLocation,Z_Param_CameraRotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorLevelLibrary::execGetLevelViewportCameraInfo)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_CameraLocation);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_CameraRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEditorLevelLibrary::GetLevelViewportCameraInfo(Z_Param_Out_CameraLocation,Z_Param_Out_CameraRotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorLevelLibrary::execEjectPilotLevelActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UEditorLevelLibrary::EjectPilotLevelActor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorLevelLibrary::execPilotLevelActor)
	{
		P_GET_OBJECT(AActor,Z_Param_ActorToPilot);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEditorLevelLibrary::PilotLevelActor(Z_Param_ActorToPilot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorLevelLibrary::execSetSelectedLevelActors)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToSelect);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEditorLevelLibrary::SetSelectedLevelActors(Z_Param_Out_ActorsToSelect);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorLevelLibrary::execGetSelectedLevelActors)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AActor*>*)Z_Param__Result=UEditorLevelLibrary::GetSelectedLevelActors();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorLevelLibrary::execGetAllLevelActorsComponents)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UActorComponent*>*)Z_Param__Result=UEditorLevelLibrary::GetAllLevelActorsComponents();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorLevelLibrary::execGetAllLevelActors)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AActor*>*)Z_Param__Result=UEditorLevelLibrary::GetAllLevelActors();
		P_NATIVE_END;
	}
#if WITH_EDITOR
	DEFINE_FUNCTION(UEditorLevelLibrary::execReplaceSelectedActors)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InAssetPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEditorLevelLibrary::ReplaceSelectedActors(Z_Param_InAssetPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorLevelLibrary::execEditorInvalidateViewports)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UEditorLevelLibrary::EditorInvalidateViewports();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorLevelLibrary::execEditorEndPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UEditorLevelLibrary::EditorEndPlay();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorLevelLibrary::execEditorPlaySimulate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UEditorLevelLibrary::EditorPlaySimulate();
		P_NATIVE_END;
	}
#endif //WITH_EDITOR
	void UEditorLevelLibrary::StaticRegisterNativesUEditorLevelLibrary()
	{
		UClass* Class = UEditorLevelLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearActorSelectionSet", &UEditorLevelLibrary::execClearActorSelectionSet },
			{ "ConvertActors", &UEditorLevelLibrary::execConvertActors },
			{ "CreateProxyMeshActor", &UEditorLevelLibrary::execCreateProxyMeshActor },
			{ "DestroyActor", &UEditorLevelLibrary::execDestroyActor },
#if WITH_EDITOR
			{ "EditorEndPlay", &UEditorLevelLibrary::execEditorEndPlay },
			{ "EditorInvalidateViewports", &UEditorLevelLibrary::execEditorInvalidateViewports },
			{ "EditorPlaySimulate", &UEditorLevelLibrary::execEditorPlaySimulate },
#endif // WITH_EDITOR
			{ "EditorSetGameView", &UEditorLevelLibrary::execEditorSetGameView },
			{ "EjectPilotLevelActor", &UEditorLevelLibrary::execEjectPilotLevelActor },
			{ "GetActorReference", &UEditorLevelLibrary::execGetActorReference },
			{ "GetAllLevelActors", &UEditorLevelLibrary::execGetAllLevelActors },
			{ "GetAllLevelActorsComponents", &UEditorLevelLibrary::execGetAllLevelActorsComponents },
			{ "GetEditorWorld", &UEditorLevelLibrary::execGetEditorWorld },
			{ "GetGameWorld", &UEditorLevelLibrary::execGetGameWorld },
			{ "GetLevelViewportCameraInfo", &UEditorLevelLibrary::execGetLevelViewportCameraInfo },
			{ "GetPIEWorlds", &UEditorLevelLibrary::execGetPIEWorlds },
			{ "GetSelectedLevelActors", &UEditorLevelLibrary::execGetSelectedLevelActors },
			{ "JoinStaticMeshActors", &UEditorLevelLibrary::execJoinStaticMeshActors },
			{ "LoadLevel", &UEditorLevelLibrary::execLoadLevel },
			{ "MergeStaticMeshActors", &UEditorLevelLibrary::execMergeStaticMeshActors },
			{ "NewLevel", &UEditorLevelLibrary::execNewLevel },
			{ "NewLevelFromTemplate", &UEditorLevelLibrary::execNewLevelFromTemplate },
			{ "PilotLevelActor", &UEditorLevelLibrary::execPilotLevelActor },
			{ "ReplaceMeshComponentsMaterials", &UEditorLevelLibrary::execReplaceMeshComponentsMaterials },
			{ "ReplaceMeshComponentsMaterialsOnActors", &UEditorLevelLibrary::execReplaceMeshComponentsMaterialsOnActors },
			{ "ReplaceMeshComponentsMeshes", &UEditorLevelLibrary::execReplaceMeshComponentsMeshes },
			{ "ReplaceMeshComponentsMeshesOnActors", &UEditorLevelLibrary::execReplaceMeshComponentsMeshesOnActors },
#if WITH_EDITOR
			{ "ReplaceSelectedActors", &UEditorLevelLibrary::execReplaceSelectedActors },
#endif // WITH_EDITOR
			{ "SaveAllDirtyLevels", &UEditorLevelLibrary::execSaveAllDirtyLevels },
			{ "SaveCurrentLevel", &UEditorLevelLibrary::execSaveCurrentLevel },
			{ "SelectNothing", &UEditorLevelLibrary::execSelectNothing },
			{ "SetActorSelectionState", &UEditorLevelLibrary::execSetActorSelectionState },
			{ "SetCurrentLevelByName", &UEditorLevelLibrary::execSetCurrentLevelByName },
			{ "SetLevelViewportCameraInfo", &UEditorLevelLibrary::execSetLevelViewportCameraInfo },
			{ "SetSelectedLevelActors", &UEditorLevelLibrary::execSetSelectedLevelActors },
			{ "SpawnActorFromClass", &UEditorLevelLibrary::execSpawnActorFromClass },
			{ "SpawnActorFromObject", &UEditorLevelLibrary::execSpawnActorFromObject },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEditorLevelLibrary_ClearActorSelectionSet_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelLibrary_ClearActorSelectionSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "Development|Editor" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The Editor Scripting Utilities Plugin is deprecated - Use the function in Editor Actor Utilities Subsystem" },
		{ "ModuleRelativePath", "Public/EditorLevelLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLevelLibrary_ClearActorSelectionSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLevelLibrary, nullptr, "ClearActorSelectionSet", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelLibrary_ClearActorSelectionSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_ClearActorSelectionSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLevelLibrary_ClearActorSelectionSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorLevelLibrary_ClearActorSelectionSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorLevelLibrary_ConvertActors_Statics
	{
		struct EditorLevelLibrary_eventConvertActors_Parms
		{
			TArray<AActor*> Actors;
			TSubclassOf<AActor>  ActorClass;
			FString StaticMeshPackagePath;
			TArray<AActor*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Actors;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshPackagePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StaticMeshPackagePath;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_ConvertActors_Statics::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelLibrary_ConvertActors_Statics::NewProp_Actors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_ConvertActors_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorLevelLibrary_eventConvertActors_Parms, Actors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelLibrary_ConvertActors_Statics::NewProp_Actors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_ConvertActors_Statics::NewProp_Actors_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_ConvertActors_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorLevelLibrary_eventConvertActors_Parms, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelLibrary_ConvertActors_Statics::NewProp_StaticMeshPackagePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_ConvertActors_Statics::NewProp_StaticMeshPackagePath = { "StaticMeshPackagePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorLevelLibrary_eventConvertActors_Parms, StaticMeshPackagePath), METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelLibrary_ConvertActors_Statics::NewProp_StaticMeshPackagePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_ConvertActors_Statics::NewProp_StaticMeshPackagePath_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_ConvertActors_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_ConvertActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorLevelLibrary_eventConvertActors_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorLevelLibrary_ConvertActors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_ConvertActors_Statics::NewProp_Actors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_ConvertActors_Statics::NewProp_Actors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_ConvertActors_Statics::NewProp_ActorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_ConvertActors_Statics::NewProp_StaticMeshPackagePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_ConvertActors_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_ConvertActors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelLibrary_ConvertActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Dataprep" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The Editor Scripting Utilities Plugin is deprecated - Use the function in Editor Actor Utilities Subsystem" },
		{ "DeterminesOutputType", "ActorClass" },
		{ "ModuleRelativePath", "Public/EditorLevelLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLevelLibrary_ConvertActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLevelLibrary, nullptr, "ConvertActors", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorLevelLibrary_ConvertActors_Statics::EditorLevelLibrary_eventConvertActors_Parms), Z_Construct_UFunction_UEditorLevelLibrary_ConvertActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_ConvertActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelLibrary_ConvertActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_ConvertActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLevelLibrary_ConvertActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorLevelLibrary_ConvertActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorLevelLibrary_CreateProxyMeshActor_Statics
	{
		struct EditorLevelLibrary_eventCreateProxyMeshActor_Parms
		{
			TArray<AStaticMeshActor*> ActorsToMerge;
			FCreateProxyMeshActorOptions MergeOptions;
			AStaticMeshActor* OutMergedActor;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorsToMerge_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorsToMerge_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorsToMerge;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MergeOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MergeOptions;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutMergedActor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_CreateProxyMeshActor_Statics::NewProp_ActorsToMerge_Inner = { "ActorsToMerge", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AStaticMeshActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelLibrary_CreateProxyMeshActor_Statics::NewProp_ActorsToMerge_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_CreateProxyMeshActor_Statics::NewProp_ActorsToMerge = { "ActorsToMerge", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorLevelLibrary_eventCreateProxyMeshActor_Parms, ActorsToMerge), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelLibrary_CreateProxyMeshActor_Statics::NewProp_ActorsToMerge_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_CreateProxyMeshActor_Statics::NewProp_ActorsToMerge_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelLibrary_CreateProxyMeshActor_Statics::NewProp_MergeOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_CreateProxyMeshActor_Statics::NewProp_MergeOptions = { "MergeOptions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorLevelLibrary_eventCreateProxyMeshActor_Parms, MergeOptions), Z_Construct_UScriptStruct_FCreateProxyMeshActorOptions, METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelLibrary_CreateProxyMeshActor_Statics::NewProp_MergeOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_CreateProxyMeshActor_Statics::NewProp_MergeOptions_MetaData)) }; // 3005345854
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_CreateProxyMeshActor_Statics::NewProp_OutMergedActor = { "OutMergedActor", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorLevelLibrary_eventCreateProxyMeshActor_Parms, OutMergedActor), Z_Construct_UClass_AStaticMeshActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEditorLevelLibrary_CreateProxyMeshActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorLevelLibrary_eventCreateProxyMeshActor_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_CreateProxyMeshActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorLevelLibrary_eventCreateProxyMeshActor_Parms), &Z_Construct_UFunction_UEditorLevelLibrary_CreateProxyMeshActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorLevelLibrary_CreateProxyMeshActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_CreateProxyMeshActor_Statics::NewProp_ActorsToMerge_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_CreateProxyMeshActor_Statics::NewProp_ActorsToMerge,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_CreateProxyMeshActor_Statics::NewProp_MergeOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_CreateProxyMeshActor_Statics::NewProp_OutMergedActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_CreateProxyMeshActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelLibrary_CreateProxyMeshActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Dataprep" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The Editor Scripting Utilities Plugin is deprecated - Use the function in Static Mesh Editor Subsystem" },
		{ "ModuleRelativePath", "Public/EditorLevelLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLevelLibrary_CreateProxyMeshActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLevelLibrary, nullptr, "CreateProxyMeshActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorLevelLibrary_CreateProxyMeshActor_Statics::EditorLevelLibrary_eventCreateProxyMeshActor_Parms), Z_Construct_UFunction_UEditorLevelLibrary_CreateProxyMeshActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_CreateProxyMeshActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelLibrary_CreateProxyMeshActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_CreateProxyMeshActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLevelLibrary_CreateProxyMeshActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorLevelLibrary_CreateProxyMeshActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorLevelLibrary_DestroyActor_Statics
	{
		struct EditorLevelLibrary_eventDestroyActor_Parms
		{
			AActor* ActorToDestroy;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorToDestroy;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_DestroyActor_Statics::NewProp_ActorToDestroy = { "ActorToDestroy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorLevelLibrary_eventDestroyActor_Parms, ActorToDestroy), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEditorLevelLibrary_DestroyActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorLevelLibrary_eventDestroyActor_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_DestroyActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorLevelLibrary_eventDestroyActor_Parms), &Z_Construct_UFunction_UEditorLevelLibrary_DestroyActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorLevelLibrary_DestroyActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_DestroyActor_Statics::NewProp_ActorToDestroy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_DestroyActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelLibrary_DestroyActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Level Utility" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The Editor Scripting Utilities Plugin is deprecated - Use the function in Editor Actor Utilities Subsystem" },
		{ "ModuleRelativePath", "Public/EditorLevelLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLevelLibrary_DestroyActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLevelLibrary, nullptr, "DestroyActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorLevelLibrary_DestroyActor_Statics::EditorLevelLibrary_eventDestroyActor_Parms), Z_Construct_UFunction_UEditorLevelLibrary_DestroyActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_DestroyActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelLibrary_DestroyActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_DestroyActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLevelLibrary_DestroyActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorLevelLibrary_DestroyActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UEditorLevelLibrary_EditorEndPlay_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelLibrary_EditorEndPlay_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Level Utility" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/EditorLevelLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLevelLibrary_EditorEndPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLevelLibrary, nullptr, "EditorEndPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelLibrary_EditorEndPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_EditorEndPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLevelLibrary_EditorEndPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorLevelLibrary_EditorEndPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UEditorLevelLibrary_EditorInvalidateViewports_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelLibrary_EditorInvalidateViewports_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Level Utility" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The Editor Scripting Utilities Plugin is deprecated - Use the function in Level Editor Subsystem" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/EditorLevelLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLevelLibrary_EditorInvalidateViewports_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLevelLibrary, nullptr, "EditorInvalidateViewports", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelLibrary_EditorInvalidateViewports_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_EditorInvalidateViewports_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLevelLibrary_EditorInvalidateViewports()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorLevelLibrary_EditorInvalidateViewports_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UEditorLevelLibrary_EditorPlaySimulate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelLibrary_EditorPlaySimulate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Level Utility" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The Editor Scripting Utilities Plugin is deprecated - Use the function in Level Editor Subsystem" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/EditorLevelLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLevelLibrary_EditorPlaySimulate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLevelLibrary, nullptr, "EditorPlaySimulate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelLibrary_EditorPlaySimulate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_EditorPlaySimulate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLevelLibrary_EditorPlaySimulate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorLevelLibrary_EditorPlaySimulate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	struct Z_Construct_UFunction_UEditorLevelLibrary_EditorSetGameView_Statics
	{
		struct EditorLevelLibrary_eventEditorSetGameView_Parms
		{
			bool bGameView;
		};
		static void NewProp_bGameView_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGameView;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditorLevelLibrary_EditorSetGameView_Statics::NewProp_bGameView_SetBit(void* Obj)
	{
		((EditorLevelLibrary_eventEditorSetGameView_Parms*)Obj)->bGameView = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_EditorSetGameView_Statics::NewProp_bGameView = { "bGameView", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorLevelLibrary_eventEditorSetGameView_Parms), &Z_Construct_UFunction_UEditorLevelLibrary_EditorSetGameView_Statics::NewProp_bGameView_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorLevelLibrary_EditorSetGameView_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_EditorSetGameView_Statics::NewProp_bGameView,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelLibrary_EditorSetGameView_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Level Utility" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The Editor Scripting Utilities Plugin is deprecated - Use the function in Level Editor Subsystem" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/EditorLevelLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLevelLibrary_EditorSetGameView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLevelLibrary, nullptr, "EditorSetGameView", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorLevelLibrary_EditorSetGameView_Statics::EditorLevelLibrary_eventEditorSetGameView_Parms), Z_Construct_UFunction_UEditorLevelLibrary_EditorSetGameView_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_EditorSetGameView_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelLibrary_EditorSetGameView_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_EditorSetGameView_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLevelLibrary_EditorSetGameView()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorLevelLibrary_EditorSetGameView_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorLevelLibrary_EjectPilotLevelActor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelLibrary_EjectPilotLevelActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Level Utility" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The Editor Scripting Utilities Plugin is deprecated - Use the function in Level Editor Subsystem" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/EditorLevelLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLevelLibrary_EjectPilotLevelActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLevelLibrary, nullptr, "EjectPilotLevelActor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelLibrary_EjectPilotLevelActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_EjectPilotLevelActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLevelLibrary_EjectPilotLevelActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorLevelLibrary_EjectPilotLevelActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorLevelLibrary_GetActorReference_Statics
	{
		struct EditorLevelLibrary_eventGetActorReference_Parms
		{
			FString PathToActor;
			AActor* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_PathToActor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_GetActorReference_Statics::NewProp_PathToActor = { "PathToActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorLevelLibrary_eventGetActorReference_Parms, PathToActor), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_GetActorReference_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorLevelLibrary_eventGetActorReference_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorLevelLibrary_GetActorReference_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_GetActorReference_Statics::NewProp_PathToActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_GetActorReference_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelLibrary_GetActorReference_Statics::Function_MetaDataParams[] = {
		{ "Category", "Development|Editor" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The Editor Scripting Utilities Plugin is deprecated - Use the function in Editor Actor Utilities Subsystem" },
		{ "ModuleRelativePath", "Public/EditorLevelLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLevelLibrary_GetActorReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLevelLibrary, nullptr, "GetActorReference", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorLevelLibrary_GetActorReference_Statics::EditorLevelLibrary_eventGetActorReference_Parms), Z_Construct_UFunction_UEditorLevelLibrary_GetActorReference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_GetActorReference_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelLibrary_GetActorReference_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_GetActorReference_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLevelLibrary_GetActorReference()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorLevelLibrary_GetActorReference_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorLevelLibrary_GetAllLevelActors_Statics
	{
		struct EditorLevelLibrary_eventGetAllLevelActors_Parms
		{
			TArray<AActor*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_GetAllLevelActors_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_GetAllLevelActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorLevelLibrary_eventGetAllLevelActors_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorLevelLibrary_GetAllLevelActors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_GetAllLevelActors_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_GetAllLevelActors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelLibrary_GetAllLevelActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Level Utility" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The Editor Scripting Utilities Plugin is deprecated - Use the function in Editor Actor Utilities Subsystem" },
		{ "ModuleRelativePath", "Public/EditorLevelLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLevelLibrary_GetAllLevelActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLevelLibrary, nullptr, "GetAllLevelActors", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorLevelLibrary_GetAllLevelActors_Statics::EditorLevelLibrary_eventGetAllLevelActors_Parms), Z_Construct_UFunction_UEditorLevelLibrary_GetAllLevelActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_GetAllLevelActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelLibrary_GetAllLevelActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_GetAllLevelActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLevelLibrary_GetAllLevelActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorLevelLibrary_GetAllLevelActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorLevelLibrary_GetAllLevelActorsComponents_Statics
	{
		struct EditorLevelLibrary_eventGetAllLevelActorsComponents_Parms
		{
			TArray<UActorComponent*> ReturnValue;
		};
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_GetAllLevelActorsComponents_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelLibrary_GetAllLevelActorsComponents_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_GetAllLevelActorsComponents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorLevelLibrary_eventGetAllLevelActorsComponents_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelLibrary_GetAllLevelActorsComponents_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_GetAllLevelActorsComponents_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorLevelLibrary_GetAllLevelActorsComponents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_GetAllLevelActorsComponents_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_GetAllLevelActorsComponents_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelLibrary_GetAllLevelActorsComponents_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Level Utility" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The Editor Scripting Utilities Plugin is deprecated - Use the function in Editor Actor Utilities Subsystem" },
		{ "ModuleRelativePath", "Public/EditorLevelLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLevelLibrary_GetAllLevelActorsComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLevelLibrary, nullptr, "GetAllLevelActorsComponents", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorLevelLibrary_GetAllLevelActorsComponents_Statics::EditorLevelLibrary_eventGetAllLevelActorsComponents_Parms), Z_Construct_UFunction_UEditorLevelLibrary_GetAllLevelActorsComponents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_GetAllLevelActorsComponents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelLibrary_GetAllLevelActorsComponents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_GetAllLevelActorsComponents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLevelLibrary_GetAllLevelActorsComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorLevelLibrary_GetAllLevelActorsComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorLevelLibrary_GetEditorWorld_Statics
	{
		struct EditorLevelLibrary_eventGetEditorWorld_Parms
		{
			UWorld* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_GetEditorWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorLevelLibrary_eventGetEditorWorld_Parms, ReturnValue), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorLevelLibrary_GetEditorWorld_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_GetEditorWorld_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelLibrary_GetEditorWorld_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Level Utility" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The Editor Scripting Utilities Plugin is deprecated - Use the function in Unreal Editor Subsystem" },
		{ "ModuleRelativePath", "Public/EditorLevelLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLevelLibrary_GetEditorWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLevelLibrary, nullptr, "GetEditorWorld", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorLevelLibrary_GetEditorWorld_Statics::EditorLevelLibrary_eventGetEditorWorld_Parms), Z_Construct_UFunction_UEditorLevelLibrary_GetEditorWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_GetEditorWorld_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelLibrary_GetEditorWorld_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_GetEditorWorld_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLevelLibrary_GetEditorWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorLevelLibrary_GetEditorWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorLevelLibrary_GetGameWorld_Statics
	{
		struct EditorLevelLibrary_eventGetGameWorld_Parms
		{
			UWorld* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_GetGameWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorLevelLibrary_eventGetGameWorld_Parms, ReturnValue), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorLevelLibrary_GetGameWorld_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_GetGameWorld_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelLibrary_GetGameWorld_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Level Utility" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The Editor Scripting Utilities Plugin is deprecated - Use the function in Unreal Editor Subsystem" },
		{ "ModuleRelativePath", "Public/EditorLevelLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLevelLibrary_GetGameWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLevelLibrary, nullptr, "GetGameWorld", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorLevelLibrary_GetGameWorld_Statics::EditorLevelLibrary_eventGetGameWorld_Parms), Z_Construct_UFunction_UEditorLevelLibrary_GetGameWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_GetGameWorld_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelLibrary_GetGameWorld_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_GetGameWorld_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLevelLibrary_GetGameWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorLevelLibrary_GetGameWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorLevelLibrary_GetLevelViewportCameraInfo_Statics
	{
		struct EditorLevelLibrary_eventGetLevelViewportCameraInfo_Parms
		{
			FVector CameraLocation;
			FRotator CameraRotation;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraLocation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraRotation;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_GetLevelViewportCameraInfo_Statics::NewProp_CameraLocation = { "CameraLocation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorLevelLibrary_eventGetLevelViewportCameraInfo_Parms, CameraLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_GetLevelViewportCameraInfo_Statics::NewProp_CameraRotation = { "CameraRotation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorLevelLibrary_eventGetLevelViewportCameraInfo_Parms, CameraRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEditorLevelLibrary_GetLevelViewportCameraInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorLevelLibrary_eventGetLevelViewportCameraInfo_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_GetLevelViewportCameraInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorLevelLibrary_eventGetLevelViewportCameraInfo_Parms), &Z_Construct_UFunction_UEditorLevelLibrary_GetLevelViewportCameraInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorLevelLibrary_GetLevelViewportCameraInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_GetLevelViewportCameraInfo_Statics::NewProp_CameraLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_GetLevelViewportCameraInfo_Statics::NewProp_CameraRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_GetLevelViewportCameraInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelLibrary_GetLevelViewportCameraInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Development|Editor" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The Editor Scripting Utilities Plugin is deprecated - Use the function in Unreal Editor Subsystem" },
		{ "ModuleRelativePath", "Public/EditorLevelLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLevelLibrary_GetLevelViewportCameraInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLevelLibrary, nullptr, "GetLevelViewportCameraInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorLevelLibrary_GetLevelViewportCameraInfo_Statics::EditorLevelLibrary_eventGetLevelViewportCameraInfo_Parms), Z_Construct_UFunction_UEditorLevelLibrary_GetLevelViewportCameraInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_GetLevelViewportCameraInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelLibrary_GetLevelViewportCameraInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_GetLevelViewportCameraInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLevelLibrary_GetLevelViewportCameraInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorLevelLibrary_GetLevelViewportCameraInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorLevelLibrary_GetPIEWorlds_Statics
	{
		struct EditorLevelLibrary_eventGetPIEWorlds_Parms
		{
			bool bIncludeDedicatedServer;
			TArray<UWorld*> ReturnValue;
		};
		static void NewProp_bIncludeDedicatedServer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeDedicatedServer;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditorLevelLibrary_GetPIEWorlds_Statics::NewProp_bIncludeDedicatedServer_SetBit(void* Obj)
	{
		((EditorLevelLibrary_eventGetPIEWorlds_Parms*)Obj)->bIncludeDedicatedServer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_GetPIEWorlds_Statics::NewProp_bIncludeDedicatedServer = { "bIncludeDedicatedServer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorLevelLibrary_eventGetPIEWorlds_Parms), &Z_Construct_UFunction_UEditorLevelLibrary_GetPIEWorlds_Statics::NewProp_bIncludeDedicatedServer_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_GetPIEWorlds_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_GetPIEWorlds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorLevelLibrary_eventGetPIEWorlds_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorLevelLibrary_GetPIEWorlds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_GetPIEWorlds_Statics::NewProp_bIncludeDedicatedServer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_GetPIEWorlds_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_GetPIEWorlds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelLibrary_GetPIEWorlds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Level Utility" },
		{ "ModuleRelativePath", "Public/EditorLevelLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLevelLibrary_GetPIEWorlds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLevelLibrary, nullptr, "GetPIEWorlds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorLevelLibrary_GetPIEWorlds_Statics::EditorLevelLibrary_eventGetPIEWorlds_Parms), Z_Construct_UFunction_UEditorLevelLibrary_GetPIEWorlds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_GetPIEWorlds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelLibrary_GetPIEWorlds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_GetPIEWorlds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLevelLibrary_GetPIEWorlds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorLevelLibrary_GetPIEWorlds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorLevelLibrary_GetSelectedLevelActors_Statics
	{
		struct EditorLevelLibrary_eventGetSelectedLevelActors_Parms
		{
			TArray<AActor*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_GetSelectedLevelActors_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_GetSelectedLevelActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorLevelLibrary_eventGetSelectedLevelActors_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorLevelLibrary_GetSelectedLevelActors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_GetSelectedLevelActors_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_GetSelectedLevelActors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelLibrary_GetSelectedLevelActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Level Utility" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The Editor Scripting Utilities Plugin is deprecated - Use the function in Editor Actor Utilities Subsystem" },
		{ "ModuleRelativePath", "Public/EditorLevelLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLevelLibrary_GetSelectedLevelActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLevelLibrary, nullptr, "GetSelectedLevelActors", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorLevelLibrary_GetSelectedLevelActors_Statics::EditorLevelLibrary_eventGetSelectedLevelActors_Parms), Z_Construct_UFunction_UEditorLevelLibrary_GetSelectedLevelActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_GetSelectedLevelActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelLibrary_GetSelectedLevelActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_GetSelectedLevelActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLevelLibrary_GetSelectedLevelActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorLevelLibrary_GetSelectedLevelActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorLevelLibrary_JoinStaticMeshActors_Statics
	{
		struct EditorLevelLibrary_eventJoinStaticMeshActors_Parms
		{
			TArray<AStaticMeshActor*> ActorsToJoin;
			FJoinStaticMeshActorsOptions JoinOptions;
			AActor* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorsToJoin_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorsToJoin_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorsToJoin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JoinOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_JoinOptions;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_JoinStaticMeshActors_Statics::NewProp_ActorsToJoin_Inner = { "ActorsToJoin", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AStaticMeshActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelLibrary_JoinStaticMeshActors_Statics::NewProp_ActorsToJoin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_JoinStaticMeshActors_Statics::NewProp_ActorsToJoin = { "ActorsToJoin", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorLevelLibrary_eventJoinStaticMeshActors_Parms, ActorsToJoin), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelLibrary_JoinStaticMeshActors_Statics::NewProp_ActorsToJoin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_JoinStaticMeshActors_Statics::NewProp_ActorsToJoin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelLibrary_JoinStaticMeshActors_Statics::NewProp_JoinOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_JoinStaticMeshActors_Statics::NewProp_JoinOptions = { "JoinOptions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorLevelLibrary_eventJoinStaticMeshActors_Parms, JoinOptions), Z_Construct_UScriptStruct_FJoinStaticMeshActorsOptions, METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelLibrary_JoinStaticMeshActors_Statics::NewProp_JoinOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_JoinStaticMeshActors_Statics::NewProp_JoinOptions_MetaData)) }; // 2587761173
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_JoinStaticMeshActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorLevelLibrary_eventJoinStaticMeshActors_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorLevelLibrary_JoinStaticMeshActors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_JoinStaticMeshActors_Statics::NewProp_ActorsToJoin_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_JoinStaticMeshActors_Statics::NewProp_ActorsToJoin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_JoinStaticMeshActors_Statics::NewProp_JoinOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_JoinStaticMeshActors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelLibrary_JoinStaticMeshActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Dataprep" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The Editor Scripting Utilities Plugin is deprecated - Use the function in Static Mesh Editor Subsystem" },
		{ "ModuleRelativePath", "Public/EditorLevelLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLevelLibrary_JoinStaticMeshActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLevelLibrary, nullptr, "JoinStaticMeshActors", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorLevelLibrary_JoinStaticMeshActors_Statics::EditorLevelLibrary_eventJoinStaticMeshActors_Parms), Z_Construct_UFunction_UEditorLevelLibrary_JoinStaticMeshActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_JoinStaticMeshActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelLibrary_JoinStaticMeshActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_JoinStaticMeshActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLevelLibrary_JoinStaticMeshActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorLevelLibrary_JoinStaticMeshActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorLevelLibrary_LoadLevel_Statics
	{
		struct EditorLevelLibrary_eventLoadLevel_Parms
		{
			FString AssetPath;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssetPath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelLibrary_LoadLevel_Statics::NewProp_AssetPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_LoadLevel_Statics::NewProp_AssetPath = { "AssetPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorLevelLibrary_eventLoadLevel_Parms, AssetPath), METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelLibrary_LoadLevel_Statics::NewProp_AssetPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_LoadLevel_Statics::NewProp_AssetPath_MetaData)) };
	void Z_Construct_UFunction_UEditorLevelLibrary_LoadLevel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorLevelLibrary_eventLoadLevel_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_LoadLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorLevelLibrary_eventLoadLevel_Parms), &Z_Construct_UFunction_UEditorLevelLibrary_LoadLevel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorLevelLibrary_LoadLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_LoadLevel_Statics::NewProp_AssetPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_LoadLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelLibrary_LoadLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Level Utility" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The Editor Scripting Utilities Plugin is deprecated - Use the function in Level Editor Subsystem" },
		{ "ModuleRelativePath", "Public/EditorLevelLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLevelLibrary_LoadLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLevelLibrary, nullptr, "LoadLevel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorLevelLibrary_LoadLevel_Statics::EditorLevelLibrary_eventLoadLevel_Parms), Z_Construct_UFunction_UEditorLevelLibrary_LoadLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_LoadLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelLibrary_LoadLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_LoadLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLevelLibrary_LoadLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorLevelLibrary_LoadLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorLevelLibrary_MergeStaticMeshActors_Statics
	{
		struct EditorLevelLibrary_eventMergeStaticMeshActors_Parms
		{
			TArray<AStaticMeshActor*> ActorsToMerge;
			FMergeStaticMeshActorsOptions MergeOptions;
			AStaticMeshActor* OutMergedActor;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorsToMerge_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorsToMerge_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorsToMerge;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MergeOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MergeOptions;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutMergedActor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_MergeStaticMeshActors_Statics::NewProp_ActorsToMerge_Inner = { "ActorsToMerge", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AStaticMeshActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelLibrary_MergeStaticMeshActors_Statics::NewProp_ActorsToMerge_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_MergeStaticMeshActors_Statics::NewProp_ActorsToMerge = { "ActorsToMerge", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorLevelLibrary_eventMergeStaticMeshActors_Parms, ActorsToMerge), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelLibrary_MergeStaticMeshActors_Statics::NewProp_ActorsToMerge_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_MergeStaticMeshActors_Statics::NewProp_ActorsToMerge_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelLibrary_MergeStaticMeshActors_Statics::NewProp_MergeOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_MergeStaticMeshActors_Statics::NewProp_MergeOptions = { "MergeOptions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorLevelLibrary_eventMergeStaticMeshActors_Parms, MergeOptions), Z_Construct_UScriptStruct_FMergeStaticMeshActorsOptions, METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelLibrary_MergeStaticMeshActors_Statics::NewProp_MergeOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_MergeStaticMeshActors_Statics::NewProp_MergeOptions_MetaData)) }; // 3823753245
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_MergeStaticMeshActors_Statics::NewProp_OutMergedActor = { "OutMergedActor", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorLevelLibrary_eventMergeStaticMeshActors_Parms, OutMergedActor), Z_Construct_UClass_AStaticMeshActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEditorLevelLibrary_MergeStaticMeshActors_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorLevelLibrary_eventMergeStaticMeshActors_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_MergeStaticMeshActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorLevelLibrary_eventMergeStaticMeshActors_Parms), &Z_Construct_UFunction_UEditorLevelLibrary_MergeStaticMeshActors_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorLevelLibrary_MergeStaticMeshActors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_MergeStaticMeshActors_Statics::NewProp_ActorsToMerge_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_MergeStaticMeshActors_Statics::NewProp_ActorsToMerge,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_MergeStaticMeshActors_Statics::NewProp_MergeOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_MergeStaticMeshActors_Statics::NewProp_OutMergedActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_MergeStaticMeshActors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelLibrary_MergeStaticMeshActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Dataprep" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The Editor Scripting Utilities Plugin is deprecated - Use the function in Static Mesh Editor Subsystem" },
		{ "ModuleRelativePath", "Public/EditorLevelLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLevelLibrary_MergeStaticMeshActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLevelLibrary, nullptr, "MergeStaticMeshActors", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorLevelLibrary_MergeStaticMeshActors_Statics::EditorLevelLibrary_eventMergeStaticMeshActors_Parms), Z_Construct_UFunction_UEditorLevelLibrary_MergeStaticMeshActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_MergeStaticMeshActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelLibrary_MergeStaticMeshActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_MergeStaticMeshActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLevelLibrary_MergeStaticMeshActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorLevelLibrary_MergeStaticMeshActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorLevelLibrary_NewLevel_Statics
	{
		struct EditorLevelLibrary_eventNewLevel_Parms
		{
			FString AssetPath;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssetPath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelLibrary_NewLevel_Statics::NewProp_AssetPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_NewLevel_Statics::NewProp_AssetPath = { "AssetPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorLevelLibrary_eventNewLevel_Parms, AssetPath), METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelLibrary_NewLevel_Statics::NewProp_AssetPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_NewLevel_Statics::NewProp_AssetPath_MetaData)) };
	void Z_Construct_UFunction_UEditorLevelLibrary_NewLevel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorLevelLibrary_eventNewLevel_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_NewLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorLevelLibrary_eventNewLevel_Parms), &Z_Construct_UFunction_UEditorLevelLibrary_NewLevel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorLevelLibrary_NewLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_NewLevel_Statics::NewProp_AssetPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_NewLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelLibrary_NewLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Level Utility" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The Editor Scripting Utilities Plugin is deprecated - Use the function in Level Editor Subsystem" },
		{ "ModuleRelativePath", "Public/EditorLevelLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLevelLibrary_NewLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLevelLibrary, nullptr, "NewLevel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorLevelLibrary_NewLevel_Statics::EditorLevelLibrary_eventNewLevel_Parms), Z_Construct_UFunction_UEditorLevelLibrary_NewLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_NewLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelLibrary_NewLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_NewLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLevelLibrary_NewLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorLevelLibrary_NewLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorLevelLibrary_NewLevelFromTemplate_Statics
	{
		struct EditorLevelLibrary_eventNewLevelFromTemplate_Parms
		{
			FString AssetPath;
			FString TemplateAssetPath;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssetPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TemplateAssetPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TemplateAssetPath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelLibrary_NewLevelFromTemplate_Statics::NewProp_AssetPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_NewLevelFromTemplate_Statics::NewProp_AssetPath = { "AssetPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorLevelLibrary_eventNewLevelFromTemplate_Parms, AssetPath), METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelLibrary_NewLevelFromTemplate_Statics::NewProp_AssetPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_NewLevelFromTemplate_Statics::NewProp_AssetPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelLibrary_NewLevelFromTemplate_Statics::NewProp_TemplateAssetPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_NewLevelFromTemplate_Statics::NewProp_TemplateAssetPath = { "TemplateAssetPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorLevelLibrary_eventNewLevelFromTemplate_Parms, TemplateAssetPath), METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelLibrary_NewLevelFromTemplate_Statics::NewProp_TemplateAssetPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_NewLevelFromTemplate_Statics::NewProp_TemplateAssetPath_MetaData)) };
	void Z_Construct_UFunction_UEditorLevelLibrary_NewLevelFromTemplate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorLevelLibrary_eventNewLevelFromTemplate_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_NewLevelFromTemplate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorLevelLibrary_eventNewLevelFromTemplate_Parms), &Z_Construct_UFunction_UEditorLevelLibrary_NewLevelFromTemplate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorLevelLibrary_NewLevelFromTemplate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_NewLevelFromTemplate_Statics::NewProp_AssetPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_NewLevelFromTemplate_Statics::NewProp_TemplateAssetPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_NewLevelFromTemplate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelLibrary_NewLevelFromTemplate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Level Utility" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The Editor Scripting Utilities Plugin is deprecated - Use the function in Level Editor Subsystem" },
		{ "ModuleRelativePath", "Public/EditorLevelLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLevelLibrary_NewLevelFromTemplate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLevelLibrary, nullptr, "NewLevelFromTemplate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorLevelLibrary_NewLevelFromTemplate_Statics::EditorLevelLibrary_eventNewLevelFromTemplate_Parms), Z_Construct_UFunction_UEditorLevelLibrary_NewLevelFromTemplate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_NewLevelFromTemplate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelLibrary_NewLevelFromTemplate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_NewLevelFromTemplate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLevelLibrary_NewLevelFromTemplate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorLevelLibrary_NewLevelFromTemplate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorLevelLibrary_PilotLevelActor_Statics
	{
		struct EditorLevelLibrary_eventPilotLevelActor_Parms
		{
			AActor* ActorToPilot;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorToPilot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_PilotLevelActor_Statics::NewProp_ActorToPilot = { "ActorToPilot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorLevelLibrary_eventPilotLevelActor_Parms, ActorToPilot), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorLevelLibrary_PilotLevelActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_PilotLevelActor_Statics::NewProp_ActorToPilot,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelLibrary_PilotLevelActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Level Utility" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The Editor Scripting Utilities Plugin is deprecated - Use the function in Level Editor Subsystem" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/EditorLevelLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLevelLibrary_PilotLevelActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLevelLibrary, nullptr, "PilotLevelActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorLevelLibrary_PilotLevelActor_Statics::EditorLevelLibrary_eventPilotLevelActor_Parms), Z_Construct_UFunction_UEditorLevelLibrary_PilotLevelActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_PilotLevelActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelLibrary_PilotLevelActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_PilotLevelActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLevelLibrary_PilotLevelActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorLevelLibrary_PilotLevelActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMaterials_Statics
	{
		struct EditorLevelLibrary_eventReplaceMeshComponentsMaterials_Parms
		{
			TArray<UMeshComponent*> MeshComponents;
			UMaterialInterface* MaterialToBeReplaced;
			UMaterialInterface* NewMaterial;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MeshComponents;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialToBeReplaced;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMaterials_Statics::NewProp_MeshComponents_Inner = { "MeshComponents", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMaterials_Statics::NewProp_MeshComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMaterials_Statics::NewProp_MeshComponents = { "MeshComponents", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorLevelLibrary_eventReplaceMeshComponentsMaterials_Parms, MeshComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMaterials_Statics::NewProp_MeshComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMaterials_Statics::NewProp_MeshComponents_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMaterials_Statics::NewProp_MaterialToBeReplaced = { "MaterialToBeReplaced", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorLevelLibrary_eventReplaceMeshComponentsMaterials_Parms, MaterialToBeReplaced), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMaterials_Statics::NewProp_NewMaterial = { "NewMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorLevelLibrary_eventReplaceMeshComponentsMaterials_Parms, NewMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMaterials_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMaterials_Statics::NewProp_MeshComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMaterials_Statics::NewProp_MeshComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMaterials_Statics::NewProp_MaterialToBeReplaced,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMaterials_Statics::NewProp_NewMaterial,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMaterials_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Dataprep" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The Editor Scripting Utilities Plugin is deprecated - Use the function in Static Mesh Editor Subsystem" },
		{ "ModuleRelativePath", "Public/EditorLevelLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMaterials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLevelLibrary, nullptr, "ReplaceMeshComponentsMaterials", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMaterials_Statics::EditorLevelLibrary_eventReplaceMeshComponentsMaterials_Parms), Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMaterials_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMaterials_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMaterials_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMaterials_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMaterials()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMaterials_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMaterialsOnActors_Statics
	{
		struct EditorLevelLibrary_eventReplaceMeshComponentsMaterialsOnActors_Parms
		{
			TArray<AActor*> Actors;
			UMaterialInterface* MaterialToBeReplaced;
			UMaterialInterface* NewMaterial;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Actors;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialToBeReplaced;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMaterialsOnActors_Statics::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMaterialsOnActors_Statics::NewProp_Actors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMaterialsOnActors_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorLevelLibrary_eventReplaceMeshComponentsMaterialsOnActors_Parms, Actors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMaterialsOnActors_Statics::NewProp_Actors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMaterialsOnActors_Statics::NewProp_Actors_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMaterialsOnActors_Statics::NewProp_MaterialToBeReplaced = { "MaterialToBeReplaced", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorLevelLibrary_eventReplaceMeshComponentsMaterialsOnActors_Parms, MaterialToBeReplaced), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMaterialsOnActors_Statics::NewProp_NewMaterial = { "NewMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorLevelLibrary_eventReplaceMeshComponentsMaterialsOnActors_Parms, NewMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMaterialsOnActors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMaterialsOnActors_Statics::NewProp_Actors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMaterialsOnActors_Statics::NewProp_Actors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMaterialsOnActors_Statics::NewProp_MaterialToBeReplaced,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMaterialsOnActors_Statics::NewProp_NewMaterial,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMaterialsOnActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Dataprep" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The Editor Scripting Utilities Plugin is deprecated - Use the function in Static Mesh Editor Subsystem" },
		{ "ModuleRelativePath", "Public/EditorLevelLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMaterialsOnActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLevelLibrary, nullptr, "ReplaceMeshComponentsMaterialsOnActors", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMaterialsOnActors_Statics::EditorLevelLibrary_eventReplaceMeshComponentsMaterialsOnActors_Parms), Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMaterialsOnActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMaterialsOnActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMaterialsOnActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMaterialsOnActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMaterialsOnActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMaterialsOnActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMeshes_Statics
	{
		struct EditorLevelLibrary_eventReplaceMeshComponentsMeshes_Parms
		{
			TArray<UStaticMeshComponent*> MeshComponents;
			UStaticMesh* MeshToBeReplaced;
			UStaticMesh* NewMesh;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MeshComponents;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshToBeReplaced;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMeshes_Statics::NewProp_MeshComponents_Inner = { "MeshComponents", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMeshes_Statics::NewProp_MeshComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMeshes_Statics::NewProp_MeshComponents = { "MeshComponents", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorLevelLibrary_eventReplaceMeshComponentsMeshes_Parms, MeshComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMeshes_Statics::NewProp_MeshComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMeshes_Statics::NewProp_MeshComponents_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMeshes_Statics::NewProp_MeshToBeReplaced = { "MeshToBeReplaced", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorLevelLibrary_eventReplaceMeshComponentsMeshes_Parms, MeshToBeReplaced), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMeshes_Statics::NewProp_NewMesh = { "NewMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorLevelLibrary_eventReplaceMeshComponentsMeshes_Parms, NewMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMeshes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMeshes_Statics::NewProp_MeshComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMeshes_Statics::NewProp_MeshComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMeshes_Statics::NewProp_MeshToBeReplaced,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMeshes_Statics::NewProp_NewMesh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMeshes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Dataprep" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The Editor Scripting Utilities Plugin is deprecated - Use the function in Static Mesh Editor Subsystem" },
		{ "ModuleRelativePath", "Public/EditorLevelLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMeshes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLevelLibrary, nullptr, "ReplaceMeshComponentsMeshes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMeshes_Statics::EditorLevelLibrary_eventReplaceMeshComponentsMeshes_Parms), Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMeshes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMeshes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMeshes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMeshes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMeshes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMeshes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMeshesOnActors_Statics
	{
		struct EditorLevelLibrary_eventReplaceMeshComponentsMeshesOnActors_Parms
		{
			TArray<AActor*> Actors;
			UStaticMesh* MeshToBeReplaced;
			UStaticMesh* NewMesh;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Actors;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshToBeReplaced;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMeshesOnActors_Statics::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMeshesOnActors_Statics::NewProp_Actors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMeshesOnActors_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorLevelLibrary_eventReplaceMeshComponentsMeshesOnActors_Parms, Actors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMeshesOnActors_Statics::NewProp_Actors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMeshesOnActors_Statics::NewProp_Actors_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMeshesOnActors_Statics::NewProp_MeshToBeReplaced = { "MeshToBeReplaced", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorLevelLibrary_eventReplaceMeshComponentsMeshesOnActors_Parms, MeshToBeReplaced), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMeshesOnActors_Statics::NewProp_NewMesh = { "NewMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorLevelLibrary_eventReplaceMeshComponentsMeshesOnActors_Parms, NewMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMeshesOnActors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMeshesOnActors_Statics::NewProp_Actors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMeshesOnActors_Statics::NewProp_Actors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMeshesOnActors_Statics::NewProp_MeshToBeReplaced,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMeshesOnActors_Statics::NewProp_NewMesh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMeshesOnActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Dataprep" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The Editor Scripting Utilities Plugin is deprecated - Use the function in Static Mesh Editor Subsystem" },
		{ "ModuleRelativePath", "Public/EditorLevelLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMeshesOnActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLevelLibrary, nullptr, "ReplaceMeshComponentsMeshesOnActors", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMeshesOnActors_Statics::EditorLevelLibrary_eventReplaceMeshComponentsMeshesOnActors_Parms), Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMeshesOnActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMeshesOnActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMeshesOnActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMeshesOnActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMeshesOnActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMeshesOnActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UEditorLevelLibrary_ReplaceSelectedActors_Statics
	{
		struct EditorLevelLibrary_eventReplaceSelectedActors_Parms
		{
			FString InAssetPath;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InAssetPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InAssetPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelLibrary_ReplaceSelectedActors_Statics::NewProp_InAssetPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_ReplaceSelectedActors_Statics::NewProp_InAssetPath = { "InAssetPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorLevelLibrary_eventReplaceSelectedActors_Parms, InAssetPath), METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelLibrary_ReplaceSelectedActors_Statics::NewProp_InAssetPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_ReplaceSelectedActors_Statics::NewProp_InAssetPath_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorLevelLibrary_ReplaceSelectedActors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_ReplaceSelectedActors_Statics::NewProp_InAssetPath,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelLibrary_ReplaceSelectedActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Level Utility" },
		{ "Comment", "/**\n\x09 * Replaces the selected Actors with the same number of a different kind of Actor using the specified factory to spawn the new Actors\n\x09 * note that only Location, Rotation, Drawscale, Drawscale3D, Tag, and Group are copied from the old Actors\n\x09 */" },
		{ "ModuleRelativePath", "Public/EditorLevelLibrary.h" },
		{ "ToolTip", "Replaces the selected Actors with the same number of a different kind of Actor using the specified factory to spawn the new Actors\nnote that only Location, Rotation, Drawscale, Drawscale3D, Tag, and Group are copied from the old Actors" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLevelLibrary_ReplaceSelectedActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLevelLibrary, nullptr, "ReplaceSelectedActors", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorLevelLibrary_ReplaceSelectedActors_Statics::EditorLevelLibrary_eventReplaceSelectedActors_Parms), Z_Construct_UFunction_UEditorLevelLibrary_ReplaceSelectedActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_ReplaceSelectedActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelLibrary_ReplaceSelectedActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_ReplaceSelectedActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLevelLibrary_ReplaceSelectedActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorLevelLibrary_ReplaceSelectedActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	struct Z_Construct_UFunction_UEditorLevelLibrary_SaveAllDirtyLevels_Statics
	{
		struct EditorLevelLibrary_eventSaveAllDirtyLevels_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditorLevelLibrary_SaveAllDirtyLevels_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorLevelLibrary_eventSaveAllDirtyLevels_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_SaveAllDirtyLevels_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorLevelLibrary_eventSaveAllDirtyLevels_Parms), &Z_Construct_UFunction_UEditorLevelLibrary_SaveAllDirtyLevels_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorLevelLibrary_SaveAllDirtyLevels_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_SaveAllDirtyLevels_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelLibrary_SaveAllDirtyLevels_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Level Utility" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The Editor Scripting Utilities Plugin is deprecated - Use the function in Level Editor Subsystem" },
		{ "ModuleRelativePath", "Public/EditorLevelLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLevelLibrary_SaveAllDirtyLevels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLevelLibrary, nullptr, "SaveAllDirtyLevels", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorLevelLibrary_SaveAllDirtyLevels_Statics::EditorLevelLibrary_eventSaveAllDirtyLevels_Parms), Z_Construct_UFunction_UEditorLevelLibrary_SaveAllDirtyLevels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_SaveAllDirtyLevels_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelLibrary_SaveAllDirtyLevels_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_SaveAllDirtyLevels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLevelLibrary_SaveAllDirtyLevels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorLevelLibrary_SaveAllDirtyLevels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorLevelLibrary_SaveCurrentLevel_Statics
	{
		struct EditorLevelLibrary_eventSaveCurrentLevel_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditorLevelLibrary_SaveCurrentLevel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorLevelLibrary_eventSaveCurrentLevel_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_SaveCurrentLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorLevelLibrary_eventSaveCurrentLevel_Parms), &Z_Construct_UFunction_UEditorLevelLibrary_SaveCurrentLevel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorLevelLibrary_SaveCurrentLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_SaveCurrentLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelLibrary_SaveCurrentLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Level Utility" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The Editor Scripting Utilities Plugin is deprecated - Use the function in Level Editor Subsystem" },
		{ "ModuleRelativePath", "Public/EditorLevelLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLevelLibrary_SaveCurrentLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLevelLibrary, nullptr, "SaveCurrentLevel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorLevelLibrary_SaveCurrentLevel_Statics::EditorLevelLibrary_eventSaveCurrentLevel_Parms), Z_Construct_UFunction_UEditorLevelLibrary_SaveCurrentLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_SaveCurrentLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelLibrary_SaveCurrentLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_SaveCurrentLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLevelLibrary_SaveCurrentLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorLevelLibrary_SaveCurrentLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorLevelLibrary_SelectNothing_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelLibrary_SelectNothing_Statics::Function_MetaDataParams[] = {
		{ "Category", "Development|Editor" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The Editor Scripting Utilities Plugin is deprecated - Use the function in Editor Actor Utilities Subsystem" },
		{ "ModuleRelativePath", "Public/EditorLevelLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLevelLibrary_SelectNothing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLevelLibrary, nullptr, "SelectNothing", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelLibrary_SelectNothing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_SelectNothing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLevelLibrary_SelectNothing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorLevelLibrary_SelectNothing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorLevelLibrary_SetActorSelectionState_Statics
	{
		struct EditorLevelLibrary_eventSetActorSelectionState_Parms
		{
			AActor* Actor;
			bool bShouldBeSelected;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static void NewProp_bShouldBeSelected_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldBeSelected;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_SetActorSelectionState_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorLevelLibrary_eventSetActorSelectionState_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEditorLevelLibrary_SetActorSelectionState_Statics::NewProp_bShouldBeSelected_SetBit(void* Obj)
	{
		((EditorLevelLibrary_eventSetActorSelectionState_Parms*)Obj)->bShouldBeSelected = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_SetActorSelectionState_Statics::NewProp_bShouldBeSelected = { "bShouldBeSelected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorLevelLibrary_eventSetActorSelectionState_Parms), &Z_Construct_UFunction_UEditorLevelLibrary_SetActorSelectionState_Statics::NewProp_bShouldBeSelected_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorLevelLibrary_SetActorSelectionState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_SetActorSelectionState_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_SetActorSelectionState_Statics::NewProp_bShouldBeSelected,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelLibrary_SetActorSelectionState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Development|Editor" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The Editor Scripting Utilities Plugin is deprecated - Use the function in Editor Actor Utilities Subsystem" },
		{ "ModuleRelativePath", "Public/EditorLevelLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLevelLibrary_SetActorSelectionState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLevelLibrary, nullptr, "SetActorSelectionState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorLevelLibrary_SetActorSelectionState_Statics::EditorLevelLibrary_eventSetActorSelectionState_Parms), Z_Construct_UFunction_UEditorLevelLibrary_SetActorSelectionState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_SetActorSelectionState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelLibrary_SetActorSelectionState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_SetActorSelectionState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLevelLibrary_SetActorSelectionState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorLevelLibrary_SetActorSelectionState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorLevelLibrary_SetCurrentLevelByName_Statics
	{
		struct EditorLevelLibrary_eventSetCurrentLevelByName_Parms
		{
			FName LevelName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_LevelName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEditorLevelLibrary_SetCurrentLevelByName_Statics::NewProp_LevelName = { "LevelName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorLevelLibrary_eventSetCurrentLevelByName_Parms, LevelName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEditorLevelLibrary_SetCurrentLevelByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorLevelLibrary_eventSetCurrentLevelByName_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_SetCurrentLevelByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorLevelLibrary_eventSetCurrentLevelByName_Parms), &Z_Construct_UFunction_UEditorLevelLibrary_SetCurrentLevelByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorLevelLibrary_SetCurrentLevelByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_SetCurrentLevelByName_Statics::NewProp_LevelName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_SetCurrentLevelByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelLibrary_SetCurrentLevelByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Level Utility" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The Editor Scripting Utilities Plugin is deprecated - Use the function in Level Editor Subsystem" },
		{ "ModuleRelativePath", "Public/EditorLevelLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLevelLibrary_SetCurrentLevelByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLevelLibrary, nullptr, "SetCurrentLevelByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorLevelLibrary_SetCurrentLevelByName_Statics::EditorLevelLibrary_eventSetCurrentLevelByName_Parms), Z_Construct_UFunction_UEditorLevelLibrary_SetCurrentLevelByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_SetCurrentLevelByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelLibrary_SetCurrentLevelByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_SetCurrentLevelByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLevelLibrary_SetCurrentLevelByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorLevelLibrary_SetCurrentLevelByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorLevelLibrary_SetLevelViewportCameraInfo_Statics
	{
		struct EditorLevelLibrary_eventSetLevelViewportCameraInfo_Parms
		{
			FVector CameraLocation;
			FRotator CameraRotation;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraLocation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_SetLevelViewportCameraInfo_Statics::NewProp_CameraLocation = { "CameraLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorLevelLibrary_eventSetLevelViewportCameraInfo_Parms, CameraLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_SetLevelViewportCameraInfo_Statics::NewProp_CameraRotation = { "CameraRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorLevelLibrary_eventSetLevelViewportCameraInfo_Parms, CameraRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorLevelLibrary_SetLevelViewportCameraInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_SetLevelViewportCameraInfo_Statics::NewProp_CameraLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_SetLevelViewportCameraInfo_Statics::NewProp_CameraRotation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelLibrary_SetLevelViewportCameraInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Development|Editor" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The Editor Scripting Utilities Plugin is deprecated - Use the function in Unreal Editor Subsystem" },
		{ "ModuleRelativePath", "Public/EditorLevelLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLevelLibrary_SetLevelViewportCameraInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLevelLibrary, nullptr, "SetLevelViewportCameraInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorLevelLibrary_SetLevelViewportCameraInfo_Statics::EditorLevelLibrary_eventSetLevelViewportCameraInfo_Parms), Z_Construct_UFunction_UEditorLevelLibrary_SetLevelViewportCameraInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_SetLevelViewportCameraInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelLibrary_SetLevelViewportCameraInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_SetLevelViewportCameraInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLevelLibrary_SetLevelViewportCameraInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorLevelLibrary_SetLevelViewportCameraInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorLevelLibrary_SetSelectedLevelActors_Statics
	{
		struct EditorLevelLibrary_eventSetSelectedLevelActors_Parms
		{
			TArray<AActor*> ActorsToSelect;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorsToSelect_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorsToSelect_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorsToSelect;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_SetSelectedLevelActors_Statics::NewProp_ActorsToSelect_Inner = { "ActorsToSelect", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelLibrary_SetSelectedLevelActors_Statics::NewProp_ActorsToSelect_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_SetSelectedLevelActors_Statics::NewProp_ActorsToSelect = { "ActorsToSelect", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorLevelLibrary_eventSetSelectedLevelActors_Parms, ActorsToSelect), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelLibrary_SetSelectedLevelActors_Statics::NewProp_ActorsToSelect_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_SetSelectedLevelActors_Statics::NewProp_ActorsToSelect_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorLevelLibrary_SetSelectedLevelActors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_SetSelectedLevelActors_Statics::NewProp_ActorsToSelect_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_SetSelectedLevelActors_Statics::NewProp_ActorsToSelect,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelLibrary_SetSelectedLevelActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Level Utility" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The Editor Scripting Utilities Plugin is deprecated - Use the function in Editor Actor Utilities Subsystem" },
		{ "ModuleRelativePath", "Public/EditorLevelLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLevelLibrary_SetSelectedLevelActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLevelLibrary, nullptr, "SetSelectedLevelActors", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorLevelLibrary_SetSelectedLevelActors_Statics::EditorLevelLibrary_eventSetSelectedLevelActors_Parms), Z_Construct_UFunction_UEditorLevelLibrary_SetSelectedLevelActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_SetSelectedLevelActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelLibrary_SetSelectedLevelActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_SetSelectedLevelActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLevelLibrary_SetSelectedLevelActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorLevelLibrary_SetSelectedLevelActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorLevelLibrary_SpawnActorFromClass_Statics
	{
		struct EditorLevelLibrary_eventSpawnActorFromClass_Parms
		{
			TSubclassOf<AActor>  ActorClass;
			FVector Location;
			FRotator Rotation;
			bool bTransient;
			AActor* ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static void NewProp_bTransient_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTransient;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_SpawnActorFromClass_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorLevelLibrary_eventSpawnActorFromClass_Parms, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_SpawnActorFromClass_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorLevelLibrary_eventSpawnActorFromClass_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_SpawnActorFromClass_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorLevelLibrary_eventSpawnActorFromClass_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEditorLevelLibrary_SpawnActorFromClass_Statics::NewProp_bTransient_SetBit(void* Obj)
	{
		((EditorLevelLibrary_eventSpawnActorFromClass_Parms*)Obj)->bTransient = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_SpawnActorFromClass_Statics::NewProp_bTransient = { "bTransient", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorLevelLibrary_eventSpawnActorFromClass_Parms), &Z_Construct_UFunction_UEditorLevelLibrary_SpawnActorFromClass_Statics::NewProp_bTransient_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_SpawnActorFromClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorLevelLibrary_eventSpawnActorFromClass_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorLevelLibrary_SpawnActorFromClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_SpawnActorFromClass_Statics::NewProp_ActorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_SpawnActorFromClass_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_SpawnActorFromClass_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_SpawnActorFromClass_Statics::NewProp_bTransient,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_SpawnActorFromClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelLibrary_SpawnActorFromClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Level Utility" },
		{ "CPP_Default_bTransient", "false" },
		{ "CPP_Default_Rotation", "" },
		{ "DeterminesOutputType", "ActorClass" },
		{ "KeyWords", "Transient" },
		{ "ModuleRelativePath", "Public/EditorLevelLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLevelLibrary_SpawnActorFromClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLevelLibrary, nullptr, "SpawnActorFromClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorLevelLibrary_SpawnActorFromClass_Statics::EditorLevelLibrary_eventSpawnActorFromClass_Parms), Z_Construct_UFunction_UEditorLevelLibrary_SpawnActorFromClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_SpawnActorFromClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelLibrary_SpawnActorFromClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_SpawnActorFromClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLevelLibrary_SpawnActorFromClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorLevelLibrary_SpawnActorFromClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorLevelLibrary_SpawnActorFromObject_Statics
	{
		struct EditorLevelLibrary_eventSpawnActorFromObject_Parms
		{
			UObject* ObjectToUse;
			FVector Location;
			FRotator Rotation;
			bool bTransient;
			AActor* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectToUse;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static void NewProp_bTransient_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTransient;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_SpawnActorFromObject_Statics::NewProp_ObjectToUse = { "ObjectToUse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorLevelLibrary_eventSpawnActorFromObject_Parms, ObjectToUse), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_SpawnActorFromObject_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorLevelLibrary_eventSpawnActorFromObject_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_SpawnActorFromObject_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorLevelLibrary_eventSpawnActorFromObject_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEditorLevelLibrary_SpawnActorFromObject_Statics::NewProp_bTransient_SetBit(void* Obj)
	{
		((EditorLevelLibrary_eventSpawnActorFromObject_Parms*)Obj)->bTransient = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_SpawnActorFromObject_Statics::NewProp_bTransient = { "bTransient", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorLevelLibrary_eventSpawnActorFromObject_Parms), &Z_Construct_UFunction_UEditorLevelLibrary_SpawnActorFromObject_Statics::NewProp_bTransient_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLevelLibrary_SpawnActorFromObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorLevelLibrary_eventSpawnActorFromObject_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorLevelLibrary_SpawnActorFromObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_SpawnActorFromObject_Statics::NewProp_ObjectToUse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_SpawnActorFromObject_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_SpawnActorFromObject_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_SpawnActorFromObject_Statics::NewProp_bTransient,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelLibrary_SpawnActorFromObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelLibrary_SpawnActorFromObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Level Utility" },
		{ "CPP_Default_bTransient", "false" },
		{ "CPP_Default_Rotation", "" },
		{ "KeyWords", "Transient" },
		{ "ModuleRelativePath", "Public/EditorLevelLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLevelLibrary_SpawnActorFromObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLevelLibrary, nullptr, "SpawnActorFromObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorLevelLibrary_SpawnActorFromObject_Statics::EditorLevelLibrary_eventSpawnActorFromObject_Parms), Z_Construct_UFunction_UEditorLevelLibrary_SpawnActorFromObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_SpawnActorFromObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelLibrary_SpawnActorFromObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelLibrary_SpawnActorFromObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLevelLibrary_SpawnActorFromObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorLevelLibrary_SpawnActorFromObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditorLevelLibrary);
	UClass* Z_Construct_UClass_UEditorLevelLibrary_NoRegister()
	{
		return UEditorLevelLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UEditorLevelLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorLevelLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_EditorScriptingUtilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEditorLevelLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEditorLevelLibrary_ClearActorSelectionSet, "ClearActorSelectionSet" }, // 129065022
		{ &Z_Construct_UFunction_UEditorLevelLibrary_ConvertActors, "ConvertActors" }, // 15548690
		{ &Z_Construct_UFunction_UEditorLevelLibrary_CreateProxyMeshActor, "CreateProxyMeshActor" }, // 1092135185
		{ &Z_Construct_UFunction_UEditorLevelLibrary_DestroyActor, "DestroyActor" }, // 1416793280
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UEditorLevelLibrary_EditorEndPlay, "EditorEndPlay" }, // 2960525413
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UEditorLevelLibrary_EditorInvalidateViewports, "EditorInvalidateViewports" }, // 1368422352
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UEditorLevelLibrary_EditorPlaySimulate, "EditorPlaySimulate" }, // 231999332
#endif //WITH_EDITOR
		{ &Z_Construct_UFunction_UEditorLevelLibrary_EditorSetGameView, "EditorSetGameView" }, // 2169997044
		{ &Z_Construct_UFunction_UEditorLevelLibrary_EjectPilotLevelActor, "EjectPilotLevelActor" }, // 3689471056
		{ &Z_Construct_UFunction_UEditorLevelLibrary_GetActorReference, "GetActorReference" }, // 1416981662
		{ &Z_Construct_UFunction_UEditorLevelLibrary_GetAllLevelActors, "GetAllLevelActors" }, // 1191806434
		{ &Z_Construct_UFunction_UEditorLevelLibrary_GetAllLevelActorsComponents, "GetAllLevelActorsComponents" }, // 1013201687
		{ &Z_Construct_UFunction_UEditorLevelLibrary_GetEditorWorld, "GetEditorWorld" }, // 1833422825
		{ &Z_Construct_UFunction_UEditorLevelLibrary_GetGameWorld, "GetGameWorld" }, // 2832836895
		{ &Z_Construct_UFunction_UEditorLevelLibrary_GetLevelViewportCameraInfo, "GetLevelViewportCameraInfo" }, // 1219562052
		{ &Z_Construct_UFunction_UEditorLevelLibrary_GetPIEWorlds, "GetPIEWorlds" }, // 4051628661
		{ &Z_Construct_UFunction_UEditorLevelLibrary_GetSelectedLevelActors, "GetSelectedLevelActors" }, // 806452919
		{ &Z_Construct_UFunction_UEditorLevelLibrary_JoinStaticMeshActors, "JoinStaticMeshActors" }, // 603523679
		{ &Z_Construct_UFunction_UEditorLevelLibrary_LoadLevel, "LoadLevel" }, // 3961528644
		{ &Z_Construct_UFunction_UEditorLevelLibrary_MergeStaticMeshActors, "MergeStaticMeshActors" }, // 3034288761
		{ &Z_Construct_UFunction_UEditorLevelLibrary_NewLevel, "NewLevel" }, // 35100065
		{ &Z_Construct_UFunction_UEditorLevelLibrary_NewLevelFromTemplate, "NewLevelFromTemplate" }, // 3303413579
		{ &Z_Construct_UFunction_UEditorLevelLibrary_PilotLevelActor, "PilotLevelActor" }, // 3744010646
		{ &Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMaterials, "ReplaceMeshComponentsMaterials" }, // 2723528796
		{ &Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMaterialsOnActors, "ReplaceMeshComponentsMaterialsOnActors" }, // 3400950339
		{ &Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMeshes, "ReplaceMeshComponentsMeshes" }, // 624843654
		{ &Z_Construct_UFunction_UEditorLevelLibrary_ReplaceMeshComponentsMeshesOnActors, "ReplaceMeshComponentsMeshesOnActors" }, // 4136932340
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UEditorLevelLibrary_ReplaceSelectedActors, "ReplaceSelectedActors" }, // 2691319013
#endif //WITH_EDITOR
		{ &Z_Construct_UFunction_UEditorLevelLibrary_SaveAllDirtyLevels, "SaveAllDirtyLevels" }, // 3422010405
		{ &Z_Construct_UFunction_UEditorLevelLibrary_SaveCurrentLevel, "SaveCurrentLevel" }, // 3076310694
		{ &Z_Construct_UFunction_UEditorLevelLibrary_SelectNothing, "SelectNothing" }, // 3690220238
		{ &Z_Construct_UFunction_UEditorLevelLibrary_SetActorSelectionState, "SetActorSelectionState" }, // 4036449540
		{ &Z_Construct_UFunction_UEditorLevelLibrary_SetCurrentLevelByName, "SetCurrentLevelByName" }, // 3230829454
		{ &Z_Construct_UFunction_UEditorLevelLibrary_SetLevelViewportCameraInfo, "SetLevelViewportCameraInfo" }, // 2513762290
		{ &Z_Construct_UFunction_UEditorLevelLibrary_SetSelectedLevelActors, "SetSelectedLevelActors" }, // 4091265823
		{ &Z_Construct_UFunction_UEditorLevelLibrary_SpawnActorFromClass, "SpawnActorFromClass" }, // 1714068606
		{ &Z_Construct_UFunction_UEditorLevelLibrary_SpawnActorFromObject, "SpawnActorFromObject" }, // 4135705498
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorLevelLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Utility class to do most of the common functionalities in the World Editor.\n * The editor should not be in play in editor mode.\n */" },
		{ "IncludePath", "EditorLevelLibrary.h" },
		{ "ModuleRelativePath", "Public/EditorLevelLibrary.h" },
		{ "ToolTip", "Utility class to do most of the common functionalities in the World Editor.\nThe editor should not be in play in editor mode." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorLevelLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorLevelLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorLevelLibrary_Statics::ClassParams = {
		&UEditorLevelLibrary::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorLevelLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorLevelLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorLevelLibrary()
	{
		if (!Z_Registration_Info_UClass_UEditorLevelLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorLevelLibrary.OuterSingleton, Z_Construct_UClass_UEditorLevelLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditorLevelLibrary.OuterSingleton;
	}
	template<> EDITORSCRIPTINGUTILITIES_API UClass* StaticClass<UEditorLevelLibrary>()
	{
		return UEditorLevelLibrary::StaticClass();
	}
	UEditorLevelLibrary::UEditorLevelLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorLevelLibrary);
	UEditorLevelLibrary::~UEditorLevelLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorLevelLibrary_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorLevelLibrary_h_Statics::ScriptStructInfo[] = {
		{ FEditorScriptingJoinStaticMeshActorsOptions_Deprecated::StaticStruct, Z_Construct_UScriptStruct_FEditorScriptingJoinStaticMeshActorsOptions_Deprecated_Statics::NewStructOps, TEXT("EditorScriptingJoinStaticMeshActorsOptions_Deprecated"), &Z_Registration_Info_UScriptStruct_EditorScriptingJoinStaticMeshActorsOptions_Deprecated, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEditorScriptingJoinStaticMeshActorsOptions_Deprecated), 1348925132U) },
		{ FEditorScriptingMergeStaticMeshActorsOptions_Deprecated::StaticStruct, Z_Construct_UScriptStruct_FEditorScriptingMergeStaticMeshActorsOptions_Deprecated_Statics::NewStructOps, TEXT("EditorScriptingMergeStaticMeshActorsOptions_Deprecated"), &Z_Registration_Info_UScriptStruct_EditorScriptingMergeStaticMeshActorsOptions_Deprecated, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEditorScriptingMergeStaticMeshActorsOptions_Deprecated), 2397782004U) },
		{ FEditorScriptingCreateProxyMeshActorOptions_Deprecated::StaticStruct, Z_Construct_UScriptStruct_FEditorScriptingCreateProxyMeshActorOptions_Deprecated_Statics::NewStructOps, TEXT("EditorScriptingCreateProxyMeshActorOptions_Deprecated"), &Z_Registration_Info_UScriptStruct_EditorScriptingCreateProxyMeshActorOptions_Deprecated, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEditorScriptingCreateProxyMeshActorOptions_Deprecated), 1369146457U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorLevelLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEditorLevelLibrary, UEditorLevelLibrary::StaticClass, TEXT("UEditorLevelLibrary"), &Z_Registration_Info_UClass_UEditorLevelLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorLevelLibrary), 1180563802U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorLevelLibrary_h_2979250048(TEXT("/Script/EditorScriptingUtilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorLevelLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorLevelLibrary_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorLevelLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorLevelLibrary_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
