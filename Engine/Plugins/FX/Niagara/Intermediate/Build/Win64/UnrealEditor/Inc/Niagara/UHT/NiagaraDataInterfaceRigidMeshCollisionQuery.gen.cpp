// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/NiagaraDataInterfaceRigidMeshCollisionQuery.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceRigidMeshCollisionQuery() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDIRigidMeshCollisionFunctionLibrary();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDIRigidMeshCollisionFunctionLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	void UNiagaraDataInterfaceRigidMeshCollisionQuery::StaticRegisterNativesUNiagaraDataInterfaceRigidMeshCollisionQuery()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceRigidMeshCollisionQuery);
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_NoRegister()
	{
		return UNiagaraDataInterfaceRigidMeshCollisionQuery::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Tag;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FNamePropertyParams NewProp_ActorTags_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorTags_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorTags;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ComponentTags_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentTags_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ComponentTags;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SourceActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SourceActors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnlyUseMoveable_MetaData[];
#endif
		static void NewProp_OnlyUseMoveable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_OnlyUseMoveable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseComplexCollisions_MetaData[];
#endif
		static void NewProp_UseComplexCollisions_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseComplexCollisions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlobalSearchAllowed_MetaData[];
#endif
		static void NewProp_GlobalSearchAllowed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_GlobalSearchAllowed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlobalSearchForced_MetaData[];
#endif
		static void NewProp_GlobalSearchForced_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_GlobalSearchForced;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlobalSearchFallback_Unscripted_MetaData[];
#endif
		static void NewProp_GlobalSearchFallback_Unscripted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_GlobalSearchFallback_Unscripted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxNumPrimitives_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_MaxNumPrimitives;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::Class_MetaDataParams[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** Data Interface used to collide against static meshes - whether it is the mesh distance field or a physics asset's collision primitive */" },
		{ "DisplayName", "Rigid Mesh Collision Query" },
		{ "IncludePath", "NiagaraDataInterfaceRigidMeshCollisionQuery.h" },
		{ "ModuleRelativePath", "Public/NiagaraDataInterfaceRigidMeshCollisionQuery.h" },
		{ "ToolTip", "Data Interface used to collide against static meshes - whether it is the mesh distance field or a physics asset's collision primitive" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::NewProp_Tag_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraDataInterfaceRigidMeshCollisionQuery.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceRigidMeshCollisionQuery, Tag_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::NewProp_Tag_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::NewProp_ActorTags_Inner = { "ActorTags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::NewProp_ActorTags_MetaData[] = {
		{ "Category", "Search" },
		{ "Comment", "/** Set of tags used to match against actors when searching for RigidBody providers.  Empty tags will be ignored, and only a single \n\x09\x09tag is required for an actor to be matched. */" },
		{ "ModuleRelativePath", "Public/NiagaraDataInterfaceRigidMeshCollisionQuery.h" },
		{ "ToolTip", "Set of tags used to match against actors when searching for RigidBody providers.  Empty tags will be ignored, and only a single\n              tag is required for an actor to be matched." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::NewProp_ActorTags = { "ActorTags", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceRigidMeshCollisionQuery, ActorTags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::NewProp_ActorTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::NewProp_ActorTags_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::NewProp_ComponentTags_Inner = { "ComponentTags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::NewProp_ComponentTags_MetaData[] = {
		{ "Category", "Source" },
		{ "Comment", "/** Set of tags used to match against components when searching for RigidBody providers.  Empty tags will be ignored, and only a\n\x09\x09single tag is required for a component to be matched. */" },
		{ "ModuleRelativePath", "Public/NiagaraDataInterfaceRigidMeshCollisionQuery.h" },
		{ "ToolTip", "Set of tags used to match against components when searching for RigidBody providers.  Empty tags will be ignored, and only a\n              single tag is required for a component to be matched." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::NewProp_ComponentTags = { "ComponentTags", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceRigidMeshCollisionQuery, ComponentTags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::NewProp_ComponentTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::NewProp_ComponentTags_MetaData)) };
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::NewProp_SourceActors_Inner = { "SourceActors", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::NewProp_SourceActors_MetaData[] = {
		{ "Category", "Source" },
		{ "Comment", "/** Hardcoded references to actors that will be used as RigidBody providers. */" },
		{ "ModuleRelativePath", "Public/NiagaraDataInterfaceRigidMeshCollisionQuery.h" },
		{ "ToolTip", "Hardcoded references to actors that will be used as RigidBody providers." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::NewProp_SourceActors = { "SourceActors", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceRigidMeshCollisionQuery, SourceActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::NewProp_SourceActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::NewProp_SourceActors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::NewProp_OnlyUseMoveable_MetaData[] = {
		{ "Category", "Source" },
		{ "Comment", "/** If enabled only actors that are considered moveable will be searched for RigidBodies. */" },
		{ "ModuleRelativePath", "Public/NiagaraDataInterfaceRigidMeshCollisionQuery.h" },
		{ "ToolTip", "If enabled only actors that are considered moveable will be searched for RigidBodies." },
	};
#endif
	void Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::NewProp_OnlyUseMoveable_SetBit(void* Obj)
	{
		((UNiagaraDataInterfaceRigidMeshCollisionQuery*)Obj)->OnlyUseMoveable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::NewProp_OnlyUseMoveable = { "OnlyUseMoveable", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraDataInterfaceRigidMeshCollisionQuery), &Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::NewProp_OnlyUseMoveable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::NewProp_OnlyUseMoveable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::NewProp_OnlyUseMoveable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::NewProp_UseComplexCollisions_MetaData[] = {
		{ "Category", "Source" },
		{ "Comment", "/** If enabled, complex collisions will be searched for. */" },
		{ "ModuleRelativePath", "Public/NiagaraDataInterfaceRigidMeshCollisionQuery.h" },
		{ "ToolTip", "If enabled, complex collisions will be searched for." },
	};
#endif
	void Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::NewProp_UseComplexCollisions_SetBit(void* Obj)
	{
		((UNiagaraDataInterfaceRigidMeshCollisionQuery*)Obj)->UseComplexCollisions = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::NewProp_UseComplexCollisions = { "UseComplexCollisions", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraDataInterfaceRigidMeshCollisionQuery), &Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::NewProp_UseComplexCollisions_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::NewProp_UseComplexCollisions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::NewProp_UseComplexCollisions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::NewProp_GlobalSearchAllowed_MetaData[] = {
		{ "Category", "Source" },
		{ "DisplayName", "Global Search Allowed" },
		{ "ModuleRelativePath", "Public/NiagaraDataInterfaceRigidMeshCollisionQuery.h" },
	};
#endif
	void Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::NewProp_GlobalSearchAllowed_SetBit(void* Obj)
	{
		((UNiagaraDataInterfaceRigidMeshCollisionQuery*)Obj)->GlobalSearchAllowed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::NewProp_GlobalSearchAllowed = { "GlobalSearchAllowed", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraDataInterfaceRigidMeshCollisionQuery), &Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::NewProp_GlobalSearchAllowed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::NewProp_GlobalSearchAllowed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::NewProp_GlobalSearchAllowed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::NewProp_GlobalSearchForced_MetaData[] = {
		{ "Category", "Source" },
		{ "DisplayName", "Global Search Forced" },
		{ "EditCondition", "GlobalSearchAllowed" },
		{ "ModuleRelativePath", "Public/NiagaraDataInterfaceRigidMeshCollisionQuery.h" },
	};
#endif
	void Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::NewProp_GlobalSearchForced_SetBit(void* Obj)
	{
		((UNiagaraDataInterfaceRigidMeshCollisionQuery*)Obj)->GlobalSearchForced = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::NewProp_GlobalSearchForced = { "GlobalSearchForced", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraDataInterfaceRigidMeshCollisionQuery), &Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::NewProp_GlobalSearchForced_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::NewProp_GlobalSearchForced_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::NewProp_GlobalSearchForced_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::NewProp_GlobalSearchFallback_Unscripted_MetaData[] = {
		{ "Category", "Source" },
		{ "DisplayName", "Global Search Only If Unscripted" },
		{ "EditCondition", "GlobalSearchAllowed" },
		{ "ModuleRelativePath", "Public/NiagaraDataInterfaceRigidMeshCollisionQuery.h" },
	};
#endif
	void Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::NewProp_GlobalSearchFallback_Unscripted_SetBit(void* Obj)
	{
		((UNiagaraDataInterfaceRigidMeshCollisionQuery*)Obj)->GlobalSearchFallback_Unscripted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::NewProp_GlobalSearchFallback_Unscripted = { "GlobalSearchFallback_Unscripted", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraDataInterfaceRigidMeshCollisionQuery), &Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::NewProp_GlobalSearchFallback_Unscripted_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::NewProp_GlobalSearchFallback_Unscripted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::NewProp_GlobalSearchFallback_Unscripted_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::NewProp_MaxNumPrimitives_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Maximum number of RigidBody represented by this DataInterface. */" },
		{ "ModuleRelativePath", "Public/NiagaraDataInterfaceRigidMeshCollisionQuery.h" },
		{ "ToolTip", "Maximum number of RigidBody represented by this DataInterface." },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::NewProp_MaxNumPrimitives = { "MaxNumPrimitives", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceRigidMeshCollisionQuery, MaxNumPrimitives), METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::NewProp_MaxNumPrimitives_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::NewProp_MaxNumPrimitives_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::NewProp_Tag,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::NewProp_ActorTags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::NewProp_ActorTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::NewProp_ComponentTags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::NewProp_ComponentTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::NewProp_SourceActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::NewProp_SourceActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::NewProp_OnlyUseMoveable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::NewProp_UseComplexCollisions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::NewProp_GlobalSearchAllowed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::NewProp_GlobalSearchForced,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::NewProp_GlobalSearchFallback_Unscripted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::NewProp_MaxNumPrimitives,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceRigidMeshCollisionQuery>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::ClassParams = {
		&UNiagaraDataInterfaceRigidMeshCollisionQuery::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery()
	{
		if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceRigidMeshCollisionQuery>()
	{
		return UNiagaraDataInterfaceRigidMeshCollisionQuery::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceRigidMeshCollisionQuery);
	UNiagaraDataInterfaceRigidMeshCollisionQuery::~UNiagaraDataInterfaceRigidMeshCollisionQuery() {}
	DEFINE_FUNCTION(UNiagaraDIRigidMeshCollisionFunctionLibrary::execSetSourceActors)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraSystem);
		P_GET_PROPERTY(FNameProperty,Z_Param_OverrideName);
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_SourceActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNiagaraDIRigidMeshCollisionFunctionLibrary::SetSourceActors(Z_Param_NiagaraSystem,Z_Param_OverrideName,Z_Param_Out_SourceActors);
		P_NATIVE_END;
	}
	void UNiagaraDIRigidMeshCollisionFunctionLibrary::StaticRegisterNativesUNiagaraDIRigidMeshCollisionFunctionLibrary()
	{
		UClass* Class = UNiagaraDIRigidMeshCollisionFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetSourceActors", &UNiagaraDIRigidMeshCollisionFunctionLibrary::execSetSourceActors },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNiagaraDIRigidMeshCollisionFunctionLibrary_SetSourceActors_Statics
	{
		struct NiagaraDIRigidMeshCollisionFunctionLibrary_eventSetSourceActors_Parms
		{
			UNiagaraComponent* NiagaraSystem;
			FName OverrideName;
			TArray<AActor*> SourceActors;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
		static const UECodeGen_Private::FNamePropertyParams NewProp_OverrideName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SourceActors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDIRigidMeshCollisionFunctionLibrary_SetSourceActors_Statics::NewProp_NiagaraSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDIRigidMeshCollisionFunctionLibrary_SetSourceActors_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDIRigidMeshCollisionFunctionLibrary_eventSetSourceActors_Parms, NiagaraSystem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDIRigidMeshCollisionFunctionLibrary_SetSourceActors_Statics::NewProp_NiagaraSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDIRigidMeshCollisionFunctionLibrary_SetSourceActors_Statics::NewProp_NiagaraSystem_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDIRigidMeshCollisionFunctionLibrary_SetSourceActors_Statics::NewProp_OverrideName = { "OverrideName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDIRigidMeshCollisionFunctionLibrary_eventSetSourceActors_Parms, OverrideName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDIRigidMeshCollisionFunctionLibrary_SetSourceActors_Statics::NewProp_SourceActors_Inner = { "SourceActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDIRigidMeshCollisionFunctionLibrary_SetSourceActors_Statics::NewProp_SourceActors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNiagaraDIRigidMeshCollisionFunctionLibrary_SetSourceActors_Statics::NewProp_SourceActors = { "SourceActors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDIRigidMeshCollisionFunctionLibrary_eventSetSourceActors_Parms, SourceActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDIRigidMeshCollisionFunctionLibrary_SetSourceActors_Statics::NewProp_SourceActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDIRigidMeshCollisionFunctionLibrary_SetSourceActors_Statics::NewProp_SourceActors_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDIRigidMeshCollisionFunctionLibrary_SetSourceActors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDIRigidMeshCollisionFunctionLibrary_SetSourceActors_Statics::NewProp_NiagaraSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDIRigidMeshCollisionFunctionLibrary_SetSourceActors_Statics::NewProp_OverrideName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDIRigidMeshCollisionFunctionLibrary_SetSourceActors_Statics::NewProp_SourceActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDIRigidMeshCollisionFunctionLibrary_SetSourceActors_Statics::NewProp_SourceActors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDIRigidMeshCollisionFunctionLibrary_SetSourceActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "DisplayName", "Niagara Set Source Actors" },
		{ "ModuleRelativePath", "Public/NiagaraDataInterfaceRigidMeshCollisionQuery.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDIRigidMeshCollisionFunctionLibrary_SetSourceActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDIRigidMeshCollisionFunctionLibrary, nullptr, "SetSourceActors", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraDIRigidMeshCollisionFunctionLibrary_SetSourceActors_Statics::NiagaraDIRigidMeshCollisionFunctionLibrary_eventSetSourceActors_Parms), Z_Construct_UFunction_UNiagaraDIRigidMeshCollisionFunctionLibrary_SetSourceActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDIRigidMeshCollisionFunctionLibrary_SetSourceActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDIRigidMeshCollisionFunctionLibrary_SetSourceActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDIRigidMeshCollisionFunctionLibrary_SetSourceActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDIRigidMeshCollisionFunctionLibrary_SetSourceActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDIRigidMeshCollisionFunctionLibrary_SetSourceActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDIRigidMeshCollisionFunctionLibrary);
	UClass* Z_Construct_UClass_UNiagaraDIRigidMeshCollisionFunctionLibrary_NoRegister()
	{
		return UNiagaraDIRigidMeshCollisionFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDIRigidMeshCollisionFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDIRigidMeshCollisionFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNiagaraDIRigidMeshCollisionFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNiagaraDIRigidMeshCollisionFunctionLibrary_SetSourceActors, "SetSourceActors" }, // 1744053575
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDIRigidMeshCollisionFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* C++ and Blueprint library for accessing array types\n*/" },
		{ "IncludePath", "NiagaraDataInterfaceRigidMeshCollisionQuery.h" },
		{ "ModuleRelativePath", "Public/NiagaraDataInterfaceRigidMeshCollisionQuery.h" },
		{ "ToolTip", "C++ and Blueprint library for accessing array types" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDIRigidMeshCollisionFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDIRigidMeshCollisionFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDIRigidMeshCollisionFunctionLibrary_Statics::ClassParams = {
		&UNiagaraDIRigidMeshCollisionFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDIRigidMeshCollisionFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDIRigidMeshCollisionFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDIRigidMeshCollisionFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UNiagaraDIRigidMeshCollisionFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDIRigidMeshCollisionFunctionLibrary.OuterSingleton, Z_Construct_UClass_UNiagaraDIRigidMeshCollisionFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraDIRigidMeshCollisionFunctionLibrary.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraDIRigidMeshCollisionFunctionLibrary>()
	{
		return UNiagaraDIRigidMeshCollisionFunctionLibrary::StaticClass();
	}
	UNiagaraDIRigidMeshCollisionFunctionLibrary::UNiagaraDIRigidMeshCollisionFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDIRigidMeshCollisionFunctionLibrary);
	UNiagaraDIRigidMeshCollisionFunctionLibrary::~UNiagaraDIRigidMeshCollisionFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataInterfaceRigidMeshCollisionQuery_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataInterfaceRigidMeshCollisionQuery_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery, UNiagaraDataInterfaceRigidMeshCollisionQuery::StaticClass, TEXT("UNiagaraDataInterfaceRigidMeshCollisionQuery"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceRigidMeshCollisionQuery), 1768525146U) },
		{ Z_Construct_UClass_UNiagaraDIRigidMeshCollisionFunctionLibrary, UNiagaraDIRigidMeshCollisionFunctionLibrary::StaticClass, TEXT("UNiagaraDIRigidMeshCollisionFunctionLibrary"), &Z_Registration_Info_UClass_UNiagaraDIRigidMeshCollisionFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDIRigidMeshCollisionFunctionLibrary), 125393200U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataInterfaceRigidMeshCollisionQuery_h_466185125(TEXT("/Script/Niagara"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataInterfaceRigidMeshCollisionQuery_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataInterfaceRigidMeshCollisionQuery_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
