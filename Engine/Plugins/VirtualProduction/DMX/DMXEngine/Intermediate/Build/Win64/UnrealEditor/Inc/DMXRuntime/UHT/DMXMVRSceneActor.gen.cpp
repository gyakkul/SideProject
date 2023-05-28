// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MVR/DMXMVRSceneActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXMVRSceneActor() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	DMXRUNTIME_API UClass* Z_Construct_UClass_ADMXMVRSceneActor();
	DMXRUNTIME_API UClass* Z_Construct_UClass_ADMXMVRSceneActor_NoRegister();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXImportGDTF_NoRegister();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXLibrary_NoRegister();
	DMXRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDMXMVRSceneGDTFToActorClassPair();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DMXRuntime();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DMXMVRSceneGDTFToActorClassPair;
class UScriptStruct* FDMXMVRSceneGDTFToActorClassPair::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DMXMVRSceneGDTFToActorClassPair.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DMXMVRSceneGDTFToActorClassPair.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDMXMVRSceneGDTFToActorClassPair, (UObject*)Z_Construct_UPackage__Script_DMXRuntime(), TEXT("DMXMVRSceneGDTFToActorClassPair"));
	}
	return Z_Registration_Info_UScriptStruct_DMXMVRSceneGDTFToActorClassPair.OuterSingleton;
}
template<> DMXRUNTIME_API UScriptStruct* StaticStruct<FDMXMVRSceneGDTFToActorClassPair>()
{
	return FDMXMVRSceneGDTFToActorClassPair::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDMXMVRSceneGDTFToActorClassPair_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GDTF_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_GDTF;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_ActorClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXMVRSceneGDTFToActorClassPair_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MVR/DMXMVRSceneActor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDMXMVRSceneGDTFToActorClassPair_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDMXMVRSceneGDTFToActorClassPair>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXMVRSceneGDTFToActorClassPair_Statics::NewProp_GDTF_MetaData[] = {
		{ "Category", "MVR" },
		{ "Comment", "/** The GDTF of the Actor (may not correlate with its Patch after the Patch changed) */" },
		{ "ModuleRelativePath", "Public/MVR/DMXMVRSceneActor.h" },
		{ "ToolTip", "The GDTF of the Actor (may not correlate with its Patch after the Patch changed)" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FDMXMVRSceneGDTFToActorClassPair_Statics::NewProp_GDTF = { "GDTF", nullptr, (EPropertyFlags)0x0014000000020001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXMVRSceneGDTFToActorClassPair, GDTF), Z_Construct_UClass_UDMXImportGDTF_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXMVRSceneGDTFToActorClassPair_Statics::NewProp_GDTF_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXMVRSceneGDTFToActorClassPair_Statics::NewProp_GDTF_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXMVRSceneGDTFToActorClassPair_Statics::NewProp_ActorClass_MetaData[] = {
		{ "Category", "MVR" },
		{ "Comment", "/** The Actor Class that should be or was spawned */" },
		{ "ModuleRelativePath", "Public/MVR/DMXMVRSceneActor.h" },
		{ "MustImplement", "/Script/DMXFixtureActorInterface.DMXMVRFixtureActorInterface" },
		{ "ToolTip", "The Actor Class that should be or was spawned" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FDMXMVRSceneGDTFToActorClassPair_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000002000015, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXMVRSceneGDTFToActorClassPair, ActorClass), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXMVRSceneGDTFToActorClassPair_Statics::NewProp_ActorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXMVRSceneGDTFToActorClassPair_Statics::NewProp_ActorClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDMXMVRSceneGDTFToActorClassPair_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXMVRSceneGDTFToActorClassPair_Statics::NewProp_GDTF,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXMVRSceneGDTFToActorClassPair_Statics::NewProp_ActorClass,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDMXMVRSceneGDTFToActorClassPair_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DMXRuntime,
		nullptr,
		&NewStructOps,
		"DMXMVRSceneGDTFToActorClassPair",
		sizeof(FDMXMVRSceneGDTFToActorClassPair),
		alignof(FDMXMVRSceneGDTFToActorClassPair),
		Z_Construct_UScriptStruct_FDMXMVRSceneGDTFToActorClassPair_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXMVRSceneGDTFToActorClassPair_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXMVRSceneGDTFToActorClassPair_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXMVRSceneGDTFToActorClassPair_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDMXMVRSceneGDTFToActorClassPair()
	{
		if (!Z_Registration_Info_UScriptStruct_DMXMVRSceneGDTFToActorClassPair.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DMXMVRSceneGDTFToActorClassPair.InnerSingleton, Z_Construct_UScriptStruct_FDMXMVRSceneGDTFToActorClassPair_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DMXMVRSceneGDTFToActorClassPair.InnerSingleton;
	}
	void ADMXMVRSceneActor::StaticRegisterNativesADMXMVRSceneActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADMXMVRSceneActor);
	UClass* Z_Construct_UClass_ADMXMVRSceneActor_NoRegister()
	{
		return ADMXMVRSceneActor::StaticClass();
	}
	struct Z_Construct_UClass_ADMXMVRSceneActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRespawnDeletedActorsOnRefresh_MetaData[];
#endif
		static void NewProp_bRespawnDeletedActorsOnRefresh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRespawnDeletedActorsOnRefresh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateTransformsOnRefresh_MetaData[];
#endif
		static void NewProp_bUpdateTransformsOnRefresh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateTransformsOnRefresh;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DMXLibrary_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DMXLibrary;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_RelatedActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RelatedActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RelatedActors;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GDTFToDefaultActorClasses_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GDTFToDefaultActorClasses_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GDTFToDefaultActorClasses;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DeletedMVRFixtureUUIDs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeletedMVRFixtureUUIDs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DeletedMVRFixtureUUIDs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MVRSceneRoot_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MVRSceneRoot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADMXMVRSceneActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADMXMVRSceneActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MVR/DMXMVRSceneActor.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/MVR/DMXMVRSceneActor.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADMXMVRSceneActor_Statics::NewProp_bRespawnDeletedActorsOnRefresh_MetaData[] = {
		{ "Category", "MVR" },
		{ "Comment", "/** If checked, respawns Fixture Actors deleted from the MVR Scene */" },
		{ "DisplayName", "Respawn Deleted Actors" },
		{ "ModuleRelativePath", "Public/MVR/DMXMVRSceneActor.h" },
		{ "ToolTip", "If checked, respawns Fixture Actors deleted from the MVR Scene" },
	};
#endif
	void Z_Construct_UClass_ADMXMVRSceneActor_Statics::NewProp_bRespawnDeletedActorsOnRefresh_SetBit(void* Obj)
	{
		((ADMXMVRSceneActor*)Obj)->bRespawnDeletedActorsOnRefresh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADMXMVRSceneActor_Statics::NewProp_bRespawnDeletedActorsOnRefresh = { "bRespawnDeletedActorsOnRefresh", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ADMXMVRSceneActor), &Z_Construct_UClass_ADMXMVRSceneActor_Statics::NewProp_bRespawnDeletedActorsOnRefresh_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADMXMVRSceneActor_Statics::NewProp_bRespawnDeletedActorsOnRefresh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADMXMVRSceneActor_Statics::NewProp_bRespawnDeletedActorsOnRefresh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADMXMVRSceneActor_Statics::NewProp_bUpdateTransformsOnRefresh_MetaData[] = {
		{ "Category", "MVR" },
		{ "Comment", "/** If checked, updates transforms from the DMX Library */" },
		{ "DisplayName", "Update Transforms" },
		{ "ModuleRelativePath", "Public/MVR/DMXMVRSceneActor.h" },
		{ "ToolTip", "If checked, updates transforms from the DMX Library" },
	};
#endif
	void Z_Construct_UClass_ADMXMVRSceneActor_Statics::NewProp_bUpdateTransformsOnRefresh_SetBit(void* Obj)
	{
		((ADMXMVRSceneActor*)Obj)->bUpdateTransformsOnRefresh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADMXMVRSceneActor_Statics::NewProp_bUpdateTransformsOnRefresh = { "bUpdateTransformsOnRefresh", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ADMXMVRSceneActor), &Z_Construct_UClass_ADMXMVRSceneActor_Statics::NewProp_bUpdateTransformsOnRefresh_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADMXMVRSceneActor_Statics::NewProp_bUpdateTransformsOnRefresh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADMXMVRSceneActor_Statics::NewProp_bUpdateTransformsOnRefresh_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADMXMVRSceneActor_Statics::NewProp_DMXLibrary_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MVR" },
		{ "Comment", "/** The DMX Library this Scene Actor uses */" },
		{ "ModuleRelativePath", "Public/MVR/DMXMVRSceneActor.h" },
		{ "ToolTip", "The DMX Library this Scene Actor uses" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ADMXMVRSceneActor_Statics::NewProp_DMXLibrary = { "DMXLibrary", nullptr, (EPropertyFlags)0x0044000000020015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADMXMVRSceneActor, DMXLibrary), Z_Construct_UClass_UDMXLibrary_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADMXMVRSceneActor_Statics::NewProp_DMXLibrary_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADMXMVRSceneActor_Statics::NewProp_DMXLibrary_MetaData)) };
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_ADMXMVRSceneActor_Statics::NewProp_RelatedActors_Inner = { "RelatedActors", nullptr, (EPropertyFlags)0x0004000000020000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADMXMVRSceneActor_Statics::NewProp_RelatedActors_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Actor" },
		{ "Comment", "/** The actors that created along with this scene */" },
		{ "ModuleRelativePath", "Public/MVR/DMXMVRSceneActor.h" },
		{ "ToolTip", "The actors that created along with this scene" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADMXMVRSceneActor_Statics::NewProp_RelatedActors = { "RelatedActors", nullptr, (EPropertyFlags)0x0044040000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADMXMVRSceneActor, RelatedActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ADMXMVRSceneActor_Statics::NewProp_RelatedActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADMXMVRSceneActor_Statics::NewProp_RelatedActors_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADMXMVRSceneActor_Statics::NewProp_GDTFToDefaultActorClasses_Inner = { "GDTFToDefaultActorClasses", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDMXMVRSceneGDTFToActorClassPair, METADATA_PARAMS(nullptr, 0) }; // 4041260296
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADMXMVRSceneActor_Statics::NewProp_GDTFToDefaultActorClasses_MetaData[] = {
		{ "Category", "MVR" },
		{ "Comment", "/** The actor class that is spawned for a specific GDTF by default (can be overriden per MVR UUID, see below) */" },
		{ "DispayName", "Default Actor used for GDTF" },
		{ "ModuleRelativePath", "Public/MVR/DMXMVRSceneActor.h" },
		{ "ToolTip", "The actor class that is spawned for a specific GDTF by default (can be overriden per MVR UUID, see below)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADMXMVRSceneActor_Statics::NewProp_GDTFToDefaultActorClasses = { "GDTFToDefaultActorClasses", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADMXMVRSceneActor, GDTFToDefaultActorClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ADMXMVRSceneActor_Statics::NewProp_GDTFToDefaultActorClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADMXMVRSceneActor_Statics::NewProp_GDTFToDefaultActorClasses_MetaData)) }; // 4041260296
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADMXMVRSceneActor_Statics::NewProp_DeletedMVRFixtureUUIDs_Inner = { "DeletedMVRFixtureUUIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADMXMVRSceneActor_Statics::NewProp_DeletedMVRFixtureUUIDs_MetaData[] = {
		{ "Comment", "/** Array holding MVR Fixture UUIDs that were explicitly removed from the scene */" },
		{ "ModuleRelativePath", "Public/MVR/DMXMVRSceneActor.h" },
		{ "ToolTip", "Array holding MVR Fixture UUIDs that were explicitly removed from the scene" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADMXMVRSceneActor_Statics::NewProp_DeletedMVRFixtureUUIDs = { "DeletedMVRFixtureUUIDs", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADMXMVRSceneActor, DeletedMVRFixtureUUIDs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ADMXMVRSceneActor_Statics::NewProp_DeletedMVRFixtureUUIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADMXMVRSceneActor_Statics::NewProp_DeletedMVRFixtureUUIDs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADMXMVRSceneActor_Statics::NewProp_MVRSceneRoot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Actor" },
		{ "Comment", "/** The root component to which all actors are attached initially */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MVR/DMXMVRSceneActor.h" },
		{ "ToolTip", "The root component to which all actors are attached initially" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ADMXMVRSceneActor_Statics::NewProp_MVRSceneRoot = { "MVRSceneRoot", nullptr, (EPropertyFlags)0x00440400000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADMXMVRSceneActor, MVRSceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADMXMVRSceneActor_Statics::NewProp_MVRSceneRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADMXMVRSceneActor_Statics::NewProp_MVRSceneRoot_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADMXMVRSceneActor_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADMXMVRSceneActor_Statics::NewProp_bRespawnDeletedActorsOnRefresh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADMXMVRSceneActor_Statics::NewProp_bUpdateTransformsOnRefresh,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADMXMVRSceneActor_Statics::NewProp_DMXLibrary,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADMXMVRSceneActor_Statics::NewProp_RelatedActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADMXMVRSceneActor_Statics::NewProp_RelatedActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADMXMVRSceneActor_Statics::NewProp_GDTFToDefaultActorClasses_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADMXMVRSceneActor_Statics::NewProp_GDTFToDefaultActorClasses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADMXMVRSceneActor_Statics::NewProp_DeletedMVRFixtureUUIDs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADMXMVRSceneActor_Statics::NewProp_DeletedMVRFixtureUUIDs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADMXMVRSceneActor_Statics::NewProp_MVRSceneRoot,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADMXMVRSceneActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADMXMVRSceneActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADMXMVRSceneActor_Statics::ClassParams = {
		&ADMXMVRSceneActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADMXMVRSceneActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADMXMVRSceneActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADMXMVRSceneActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADMXMVRSceneActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADMXMVRSceneActor()
	{
		if (!Z_Registration_Info_UClass_ADMXMVRSceneActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADMXMVRSceneActor.OuterSingleton, Z_Construct_UClass_ADMXMVRSceneActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADMXMVRSceneActor.OuterSingleton;
	}
	template<> DMXRUNTIME_API UClass* StaticClass<ADMXMVRSceneActor>()
	{
		return ADMXMVRSceneActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADMXMVRSceneActor);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_MVR_DMXMVRSceneActor_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_MVR_DMXMVRSceneActor_h_Statics::ScriptStructInfo[] = {
		{ FDMXMVRSceneGDTFToActorClassPair::StaticStruct, Z_Construct_UScriptStruct_FDMXMVRSceneGDTFToActorClassPair_Statics::NewStructOps, TEXT("DMXMVRSceneGDTFToActorClassPair"), &Z_Registration_Info_UScriptStruct_DMXMVRSceneGDTFToActorClassPair, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDMXMVRSceneGDTFToActorClassPair), 4041260296U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_MVR_DMXMVRSceneActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADMXMVRSceneActor, ADMXMVRSceneActor::StaticClass, TEXT("ADMXMVRSceneActor"), &Z_Registration_Info_UClass_ADMXMVRSceneActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADMXMVRSceneActor), 3229910565U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_MVR_DMXMVRSceneActor_h_934314011(TEXT("/Script/DMXRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_MVR_DMXMVRSceneActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_MVR_DMXMVRSceneActor_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_MVR_DMXMVRSceneActor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_MVR_DMXMVRSceneActor_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
