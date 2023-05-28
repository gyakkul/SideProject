// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/LODActor.h"
#include "../../Source/Runtime/Engine/Classes/Engine/MaterialMerging.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLODActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ALODActor();
	ENGINE_API UClass* Z_Construct_UClass_ALODActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UHLODProxy_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UHLODProxyDesc_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEndPlayReason();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHLODInstancingKey();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialProxySettings();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HLODInstancingKey;
class UScriptStruct* FHLODInstancingKey::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HLODInstancingKey.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HLODInstancingKey.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHLODInstancingKey, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("HLODInstancingKey"));
	}
	return Z_Registration_Info_UScriptStruct_HLODInstancingKey.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FHLODInstancingKey>()
{
	return FHLODInstancingKey::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHLODInstancingKey_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Material;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHLODInstancingKey_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Mesh/Material pair used as a key to insert/retrieve instances in the LODActor.\n */" },
		{ "ModuleRelativePath", "Classes/Engine/LODActor.h" },
		{ "ToolTip", "Mesh/Material pair used as a key to insert/retrieve instances in the LODActor." },
	};
#endif
	void* Z_Construct_UScriptStruct_FHLODInstancingKey_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHLODInstancingKey>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHLODInstancingKey_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/LODActor.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FHLODInstancingKey_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHLODInstancingKey, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHLODInstancingKey_Statics::NewProp_StaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHLODInstancingKey_Statics::NewProp_StaticMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHLODInstancingKey_Statics::NewProp_Material_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/LODActor.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FHLODInstancingKey_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHLODInstancingKey, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHLODInstancingKey_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHLODInstancingKey_Statics::NewProp_Material_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHLODInstancingKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHLODInstancingKey_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHLODInstancingKey_Statics::NewProp_Material,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHLODInstancingKey_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"HLODInstancingKey",
		sizeof(FHLODInstancingKey),
		alignof(FHLODInstancingKey),
		Z_Construct_UScriptStruct_FHLODInstancingKey_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHLODInstancingKey_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHLODInstancingKey_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHLODInstancingKey_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHLODInstancingKey()
	{
		if (!Z_Registration_Info_UScriptStruct_HLODInstancingKey.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HLODInstancingKey.InnerSingleton, Z_Construct_UScriptStruct_FHLODInstancingKey_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HLODInstancingKey.InnerSingleton;
	}
	DEFINE_FUNCTION(ALODActor::execOnSubActorEndPlay)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_PROPERTY(FByteProperty,Z_Param_Reason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSubActorEndPlay(Z_Param_Actor,EEndPlayReason::Type(Z_Param_Reason));
		P_NATIVE_END;
	}
	void ALODActor::StaticRegisterNativesALODActor()
	{
		UClass* Class = ALODActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnSubActorEndPlay", &ALODActor::execOnSubActorEndPlay },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALODActor_OnSubActorEndPlay_Statics
	{
		struct LODActor_eventOnSubActorEndPlay_Parms
		{
			AActor* Actor;
			TEnumAsByte<EEndPlayReason::Type> Reason;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Reason;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALODActor_OnSubActorEndPlay_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LODActor_eventOnSubActorEndPlay_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ALODActor_OnSubActorEndPlay_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LODActor_eventOnSubActorEndPlay_Parms, Reason), Z_Construct_UEnum_Engine_EEndPlayReason, METADATA_PARAMS(nullptr, 0) }; // 2713016423
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALODActor_OnSubActorEndPlay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALODActor_OnSubActorEndPlay_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALODActor_OnSubActorEndPlay_Statics::NewProp_Reason,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALODActor_OnSubActorEndPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/LODActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALODActor_OnSubActorEndPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALODActor, nullptr, "OnSubActorEndPlay", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALODActor_OnSubActorEndPlay_Statics::LODActor_eventOnSubActorEndPlay_Parms), Z_Construct_UFunction_ALODActor_OnSubActorEndPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALODActor_OnSubActorEndPlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALODActor_OnSubActorEndPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALODActor_OnSubActorEndPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALODActor_OnSubActorEndPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALODActor_OnSubActorEndPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALODActor);
	UClass* Z_Construct_UClass_ALODActor_NoRegister()
	{
		return ALODActor::StaticClass();
	}
	struct Z_Construct_UClass_ALODActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StaticMeshComponent;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InstancedStaticMeshComponents_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InstancedStaticMeshComponents_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstancedStaticMeshComponents_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_InstancedStaticMeshComponents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Proxy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Proxy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODDrawDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LODDrawDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODLevel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODLevel;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SubActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SubActors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedNumHLODLevels_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CachedNumHLODLevels;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumTrianglesInSubActors_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_NumTrianglesInSubActors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumTrianglesInMergedMesh_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_NumTrianglesInMergedMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideMaterialMergeSettings_MetaData[];
#endif
		static void NewProp_bOverrideMaterialMergeSettings_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideMaterialMergeSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideTransitionScreenSize_MetaData[];
#endif
		static void NewProp_bOverrideTransitionScreenSize_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideTransitionScreenSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransitionScreenSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TransitionScreenSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideScreenSize_MetaData[];
#endif
		static void NewProp_bOverrideScreenSize_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideScreenSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScreenSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ScreenSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODActorTag_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LODActorTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBuiltFromHLODDesc_MetaData[];
#endif
		static void NewProp_bBuiltFromHLODDesc_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBuiltFromHLODDesc;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProxyDesc_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ProxyDesc;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALODActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALODActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALODActor_OnSubActorEndPlay, "OnSubActorEndPlay" }, // 1450784801
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALODActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * LODActor is an instance of an autogenerated StaticMesh Actors by Hierarchical LOD System\n * This is essentially just StaticMeshActor that you can't move or edit, but it contains multiple actors reference\n *\n * @see https://docs.unrealengine.com/BuildingWorlds/HLOD\n * @see UStaticMesh\n */" },
		{ "HideCategories", "Object Collision Display Input Blueprint Transform Physics" },
		{ "IncludePath", "Engine/LODActor.h" },
		{ "ModuleRelativePath", "Classes/Engine/LODActor.h" },
		{ "ToolTip", "LODActor is an instance of an autogenerated StaticMesh Actors by Hierarchical LOD System\nThis is essentially just StaticMeshActor that you can't move or edit, but it contains multiple actors reference\n\n@see https://docs.unrealengine.com/BuildingWorlds/HLOD\n@see UStaticMesh" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALODActor_Statics::NewProp_StaticMeshComponent_MetaData[] = {
		{ "Category", "LODActor" },
		{ "Comment", "// disable display of this component\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/LODActor.h" },
		{ "ToolTip", "disable display of this component" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ALODActor_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x00440000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALODActor, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALODActor_Statics::NewProp_StaticMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALODActor_Statics::NewProp_StaticMeshComponent_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ALODActor_Statics::NewProp_InstancedStaticMeshComponents_ValueProp = { "InstancedStaticMeshComponents", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALODActor_Statics::NewProp_InstancedStaticMeshComponents_Key_KeyProp = { "InstancedStaticMeshComponents_Key", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FHLODInstancingKey, METADATA_PARAMS(nullptr, 0) }; // 3987407929
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALODActor_Statics::NewProp_InstancedStaticMeshComponents_MetaData[] = {
		{ "Comment", "/** Imposters to be rendered as instanced static meshes */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/LODActor.h" },
		{ "ToolTip", "Imposters to be rendered as instanced static meshes" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ALODActor_Statics::NewProp_InstancedStaticMeshComponents = { "InstancedStaticMeshComponents", nullptr, (EPropertyFlags)0x0044008000002008, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALODActor, InstancedStaticMeshComponents), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ALODActor_Statics::NewProp_InstancedStaticMeshComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALODActor_Statics::NewProp_InstancedStaticMeshComponents_MetaData)) }; // 3987407929
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALODActor_Statics::NewProp_Proxy_MetaData[] = {
		{ "Category", "LODActor" },
		{ "Comment", "/** The mesh proxy used to display this LOD */" },
		{ "ModuleRelativePath", "Classes/Engine/LODActor.h" },
		{ "ToolTip", "The mesh proxy used to display this LOD" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ALODActor_Statics::NewProp_Proxy = { "Proxy", nullptr, (EPropertyFlags)0x0044000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALODActor, Proxy), Z_Construct_UClass_UHLODProxy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALODActor_Statics::NewProp_Proxy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALODActor_Statics::NewProp_Proxy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALODActor_Statics::NewProp_Key_MetaData[] = {
		{ "Category", "LODActor" },
		{ "Comment", "/** The key used to validate this actor against the proxy */" },
		{ "ModuleRelativePath", "Classes/Engine/LODActor.h" },
		{ "ToolTip", "The key used to validate this actor against the proxy" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ALODActor_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALODActor, Key), METADATA_PARAMS(Z_Construct_UClass_ALODActor_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALODActor_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALODActor_Statics::NewProp_LODDrawDistance_MetaData[] = {
		{ "Category", "LODActor" },
		{ "Comment", "/** what distance do you want this to show up instead of SubActors */" },
		{ "ModuleRelativePath", "Classes/Engine/LODActor.h" },
		{ "ToolTip", "what distance do you want this to show up instead of SubActors" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALODActor_Statics::NewProp_LODDrawDistance = { "LODDrawDistance", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALODActor, LODDrawDistance), METADATA_PARAMS(Z_Construct_UClass_ALODActor_Statics::NewProp_LODDrawDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALODActor_Statics::NewProp_LODDrawDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALODActor_Statics::NewProp_LODLevel_MetaData[] = {
		{ "Category", "LODActor" },
		{ "Comment", "/** The hierarchy level of this actor; the first tier of HLOD is level 1, the second tier is level 2 and so on. */" },
		{ "ModuleRelativePath", "Classes/Engine/LODActor.h" },
		{ "ToolTip", "The hierarchy level of this actor; the first tier of HLOD is level 1, the second tier is level 2 and so on." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ALODActor_Statics::NewProp_LODLevel = { "LODLevel", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALODActor, LODLevel), METADATA_PARAMS(Z_Construct_UClass_ALODActor_Statics::NewProp_LODLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALODActor_Statics::NewProp_LODLevel_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ALODActor_Statics::NewProp_SubActors_Inner = { "SubActors", nullptr, (EPropertyFlags)0x0004000000020000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALODActor_Statics::NewProp_SubActors_MetaData[] = {
		{ "Category", "LODActor" },
		{ "ModuleRelativePath", "Classes/Engine/LODActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALODActor_Statics::NewProp_SubActors = { "SubActors", nullptr, (EPropertyFlags)0x0014000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALODActor, SubActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ALODActor_Statics::NewProp_SubActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALODActor_Statics::NewProp_SubActors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALODActor_Statics::NewProp_CachedNumHLODLevels_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/LODActor.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ALODActor_Statics::NewProp_CachedNumHLODLevels = { "CachedNumHLODLevels", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALODActor, CachedNumHLODLevels), nullptr, METADATA_PARAMS(Z_Construct_UClass_ALODActor_Statics::NewProp_CachedNumHLODLevels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALODActor_Statics::NewProp_CachedNumHLODLevels_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALODActor_Statics::NewProp_NumTrianglesInSubActors_MetaData[] = {
		{ "Comment", "/** Cached number of triangles contained in the SubActors*/" },
		{ "ModuleRelativePath", "Classes/Engine/LODActor.h" },
		{ "ToolTip", "Cached number of triangles contained in the SubActors" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_ALODActor_Statics::NewProp_NumTrianglesInSubActors = { "NumTrianglesInSubActors", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALODActor, NumTrianglesInSubActors), METADATA_PARAMS(Z_Construct_UClass_ALODActor_Statics::NewProp_NumTrianglesInSubActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALODActor_Statics::NewProp_NumTrianglesInSubActors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALODActor_Statics::NewProp_NumTrianglesInMergedMesh_MetaData[] = {
		{ "Comment", "/** Cached number of triangles contained in the SubActors*/" },
		{ "ModuleRelativePath", "Classes/Engine/LODActor.h" },
		{ "ToolTip", "Cached number of triangles contained in the SubActors" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_ALODActor_Statics::NewProp_NumTrianglesInMergedMesh = { "NumTrianglesInMergedMesh", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALODActor, NumTrianglesInMergedMesh), METADATA_PARAMS(Z_Construct_UClass_ALODActor_Statics::NewProp_NumTrianglesInMergedMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALODActor_Statics::NewProp_NumTrianglesInMergedMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALODActor_Statics::NewProp_bOverrideMaterialMergeSettings_MetaData[] = {
		{ "Category", "HierarchicalLODSettings" },
		{ "Comment", "/** Flag whether or not to use the override MaterialSettings when creating the proxy mesh */" },
		{ "ModuleRelativePath", "Classes/Engine/LODActor.h" },
		{ "ToolTip", "Flag whether or not to use the override MaterialSettings when creating the proxy mesh" },
	};
#endif
	void Z_Construct_UClass_ALODActor_Statics::NewProp_bOverrideMaterialMergeSettings_SetBit(void* Obj)
	{
		((ALODActor*)Obj)->bOverrideMaterialMergeSettings = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALODActor_Statics::NewProp_bOverrideMaterialMergeSettings = { "bOverrideMaterialMergeSettings", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ALODActor), &Z_Construct_UClass_ALODActor_Statics::NewProp_bOverrideMaterialMergeSettings_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALODActor_Statics::NewProp_bOverrideMaterialMergeSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALODActor_Statics::NewProp_bOverrideMaterialMergeSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALODActor_Statics::NewProp_MaterialSettings_MetaData[] = {
		{ "Category", "HierarchicalLODSettings" },
		{ "Comment", "/** Override Material Settings, used when creating the proxy mesh */" },
		{ "editcondition", "bOverrideMaterialMergeSettings" },
		{ "ModuleRelativePath", "Classes/Engine/LODActor.h" },
		{ "ToolTip", "Override Material Settings, used when creating the proxy mesh" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALODActor_Statics::NewProp_MaterialSettings = { "MaterialSettings", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALODActor, MaterialSettings), Z_Construct_UScriptStruct_FMaterialProxySettings, METADATA_PARAMS(Z_Construct_UClass_ALODActor_Statics::NewProp_MaterialSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALODActor_Statics::NewProp_MaterialSettings_MetaData)) }; // 3442938596
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALODActor_Statics::NewProp_bOverrideTransitionScreenSize_MetaData[] = {
		{ "Category", "HierarchicalLODSettings" },
		{ "Comment", "/** Flag whether or not to use the override TransitionScreenSize for this proxy mesh */" },
		{ "ModuleRelativePath", "Classes/Engine/LODActor.h" },
		{ "ToolTip", "Flag whether or not to use the override TransitionScreenSize for this proxy mesh" },
	};
#endif
	void Z_Construct_UClass_ALODActor_Statics::NewProp_bOverrideTransitionScreenSize_SetBit(void* Obj)
	{
		((ALODActor*)Obj)->bOverrideTransitionScreenSize = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALODActor_Statics::NewProp_bOverrideTransitionScreenSize = { "bOverrideTransitionScreenSize", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ALODActor), &Z_Construct_UClass_ALODActor_Statics::NewProp_bOverrideTransitionScreenSize_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALODActor_Statics::NewProp_bOverrideTransitionScreenSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALODActor_Statics::NewProp_bOverrideTransitionScreenSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALODActor_Statics::NewProp_TransitionScreenSize_MetaData[] = {
		{ "Category", "HierarchicalLODSettings" },
		{ "Comment", "/** \n\x09 * Override transition screen size value, determines the screen size at which the proxy is visible \n\x09 * The screen size is based around the projected diameter of the bounding \n\x09 * sphere of the model. i.e. 0.5 means half the screen's maximum dimension.\n\x09 */" },
		{ "editcondition", "bOverrideTransitionScreenSize" },
		{ "ModuleRelativePath", "Classes/Engine/LODActor.h" },
		{ "ToolTip", "Override transition screen size value, determines the screen size at which the proxy is visible\nThe screen size is based around the projected diameter of the bounding\nsphere of the model. i.e. 0.5 means half the screen's maximum dimension." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALODActor_Statics::NewProp_TransitionScreenSize = { "TransitionScreenSize", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALODActor, TransitionScreenSize), METADATA_PARAMS(Z_Construct_UClass_ALODActor_Statics::NewProp_TransitionScreenSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALODActor_Statics::NewProp_TransitionScreenSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALODActor_Statics::NewProp_bOverrideScreenSize_MetaData[] = {
		{ "Category", "HierarchicalLODSettings" },
		{ "Comment", "/** Flag whether or not to use the override ScreenSize when creating the proxy mesh */" },
		{ "ModuleRelativePath", "Classes/Engine/LODActor.h" },
		{ "ToolTip", "Flag whether or not to use the override ScreenSize when creating the proxy mesh" },
	};
#endif
	void Z_Construct_UClass_ALODActor_Statics::NewProp_bOverrideScreenSize_SetBit(void* Obj)
	{
		((ALODActor*)Obj)->bOverrideScreenSize = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALODActor_Statics::NewProp_bOverrideScreenSize = { "bOverrideScreenSize", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ALODActor), &Z_Construct_UClass_ALODActor_Statics::NewProp_bOverrideScreenSize_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALODActor_Statics::NewProp_bOverrideScreenSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALODActor_Statics::NewProp_bOverrideScreenSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALODActor_Statics::NewProp_ScreenSize_MetaData[] = {
		{ "Category", "HierarchicalLODSettings" },
		{ "Comment", "/** Override screen size value used in mesh reduction, when creating the proxy mesh */" },
		{ "editcondition", "bOverrideScreenSize" },
		{ "ModuleRelativePath", "Classes/Engine/LODActor.h" },
		{ "ToolTip", "Override screen size value used in mesh reduction, when creating the proxy mesh" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ALODActor_Statics::NewProp_ScreenSize = { "ScreenSize", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALODActor, ScreenSize), METADATA_PARAMS(Z_Construct_UClass_ALODActor_Statics::NewProp_ScreenSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALODActor_Statics::NewProp_ScreenSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALODActor_Statics::NewProp_LODActorTag_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/LODActor.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ALODActor_Statics::NewProp_LODActorTag = { "LODActorTag", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALODActor, LODActorTag), METADATA_PARAMS(Z_Construct_UClass_ALODActor_Statics::NewProp_LODActorTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALODActor_Statics::NewProp_LODActorTag_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALODActor_Statics::NewProp_bBuiltFromHLODDesc_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/LODActor.h" },
	};
#endif
	void Z_Construct_UClass_ALODActor_Statics::NewProp_bBuiltFromHLODDesc_SetBit(void* Obj)
	{
		((ALODActor*)Obj)->bBuiltFromHLODDesc = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALODActor_Statics::NewProp_bBuiltFromHLODDesc = { "bBuiltFromHLODDesc", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ALODActor), &Z_Construct_UClass_ALODActor_Statics::NewProp_bBuiltFromHLODDesc_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALODActor_Statics::NewProp_bBuiltFromHLODDesc_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALODActor_Statics::NewProp_bBuiltFromHLODDesc_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALODActor_Statics::NewProp_ProxyDesc_MetaData[] = {
		{ "Comment", "/** The hlod proxy desc used to build this LODActor */" },
		{ "ModuleRelativePath", "Classes/Engine/LODActor.h" },
		{ "ToolTip", "The hlod proxy desc used to build this LODActor" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ALODActor_Statics::NewProp_ProxyDesc = { "ProxyDesc", nullptr, (EPropertyFlags)0x0044000800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALODActor, ProxyDesc), Z_Construct_UClass_UHLODProxyDesc_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALODActor_Statics::NewProp_ProxyDesc_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALODActor_Statics::NewProp_ProxyDesc_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALODActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALODActor_Statics::NewProp_StaticMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALODActor_Statics::NewProp_InstancedStaticMeshComponents_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALODActor_Statics::NewProp_InstancedStaticMeshComponents_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALODActor_Statics::NewProp_InstancedStaticMeshComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALODActor_Statics::NewProp_Proxy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALODActor_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALODActor_Statics::NewProp_LODDrawDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALODActor_Statics::NewProp_LODLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALODActor_Statics::NewProp_SubActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALODActor_Statics::NewProp_SubActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALODActor_Statics::NewProp_CachedNumHLODLevels,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALODActor_Statics::NewProp_NumTrianglesInSubActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALODActor_Statics::NewProp_NumTrianglesInMergedMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALODActor_Statics::NewProp_bOverrideMaterialMergeSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALODActor_Statics::NewProp_MaterialSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALODActor_Statics::NewProp_bOverrideTransitionScreenSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALODActor_Statics::NewProp_TransitionScreenSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALODActor_Statics::NewProp_bOverrideScreenSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALODActor_Statics::NewProp_ScreenSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALODActor_Statics::NewProp_LODActorTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALODActor_Statics::NewProp_bBuiltFromHLODDesc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALODActor_Statics::NewProp_ProxyDesc,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALODActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALODActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALODActor_Statics::ClassParams = {
		&ALODActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALODActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ALODActor_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALODActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALODActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALODActor()
	{
		if (!Z_Registration_Info_UClass_ALODActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALODActor.OuterSingleton, Z_Construct_UClass_ALODActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALODActor.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<ALODActor>()
	{
		return ALODActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALODActor);
	ALODActor::~ALODActor() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(ALODActor)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LODActor_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LODActor_h_Statics::ScriptStructInfo[] = {
		{ FHLODInstancingKey::StaticStruct, Z_Construct_UScriptStruct_FHLODInstancingKey_Statics::NewStructOps, TEXT("HLODInstancingKey"), &Z_Registration_Info_UScriptStruct_HLODInstancingKey, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHLODInstancingKey), 3987407929U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LODActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALODActor, ALODActor::StaticClass, TEXT("ALODActor"), &Z_Registration_Info_UClass_ALODActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALODActor), 2834988195U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LODActor_h_1962677858(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LODActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LODActor_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LODActor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LODActor_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
