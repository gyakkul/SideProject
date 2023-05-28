// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/WorldPartition/WorldPartition.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldPartition() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UActorDescContainer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UHLODLayer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorldPartition();
	ENGINE_API UClass* Z_Construct_UClass_UWorldPartition_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionEditorHash_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionEditorLoaderAdapter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionRuntimeHash_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionStreamingPolicy_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UWorldPartition::StaticRegisterNativesUWorldPartition()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldPartition);
	UClass* Z_Construct_UClass_UWorldPartition_NoRegister()
	{
		return UWorldPartition::StaticClass();
	}
	struct Z_Construct_UClass_UWorldPartition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorHash_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EditorHash;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldPartitionStreamingPolicyClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_WorldPartitionStreamingPolicyClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStreamingWasEnabled_MetaData[];
#endif
		static void NewProp_bStreamingWasEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStreamingWasEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanBeUsedByLevelInstance_MetaData[];
#endif
		static void NewProp_bCanBeUsedByLevelInstance_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanBeUsedByLevelInstance;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorDescContainer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActorDescContainer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RuntimeHash_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RuntimeHash;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_World;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableStreaming_MetaData[];
#endif
		static void NewProp_bEnableStreaming_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableStreaming;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultHLODLayer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DefaultHLODLayer;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StreamingPolicy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StreamingPolicy;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RegisteredEditorLoaderAdapters_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegisteredEditorLoaderAdapters_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_RegisteredEditorLoaderAdapters;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWorldPartition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartition_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "WorldPartition" },
		{ "IncludePath", "WorldPartition/WorldPartition.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartition.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartition_Statics::NewProp_EditorHash_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartition.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWorldPartition_Statics::NewProp_EditorHash = { "EditorHash", nullptr, (EPropertyFlags)0x0014000800200000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldPartition, EditorHash), Z_Construct_UClass_UWorldPartitionEditorHash_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWorldPartition_Statics::NewProp_EditorHash_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartition_Statics::NewProp_EditorHash_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartition_Statics::NewProp_WorldPartitionStreamingPolicyClass_MetaData[] = {
		{ "Comment", "/** Class of WorldPartitionStreamingPolicy to be used to manage world partition streaming. */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartition.h" },
		{ "ToolTip", "Class of WorldPartitionStreamingPolicy to be used to manage world partition streaming." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UWorldPartition_Statics::NewProp_WorldPartitionStreamingPolicyClass = { "WorldPartitionStreamingPolicyClass", nullptr, (EPropertyFlags)0x0044000800000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldPartition, WorldPartitionStreamingPolicyClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UWorldPartitionStreamingPolicy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWorldPartition_Statics::NewProp_WorldPartitionStreamingPolicyClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartition_Statics::NewProp_WorldPartitionStreamingPolicyClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartition_Statics::NewProp_bStreamingWasEnabled_MetaData[] = {
		{ "Comment", "/** Used to know if it's the first time streaming is enabled on this world. */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartition.h" },
		{ "ToolTip", "Used to know if it's the first time streaming is enabled on this world." },
	};
#endif
	void Z_Construct_UClass_UWorldPartition_Statics::NewProp_bStreamingWasEnabled_SetBit(void* Obj)
	{
		((UWorldPartition*)Obj)->bStreamingWasEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorldPartition_Statics::NewProp_bStreamingWasEnabled = { "bStreamingWasEnabled", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWorldPartition), &Z_Construct_UClass_UWorldPartition_Statics::NewProp_bStreamingWasEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWorldPartition_Statics::NewProp_bStreamingWasEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartition_Statics::NewProp_bStreamingWasEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartition_Statics::NewProp_bCanBeUsedByLevelInstance_MetaData[] = {
		{ "Category", "WorldPartitionSetup" },
		{ "Comment", "/** Whether Level Instance can reference this partition. */" },
		{ "EditCondition", "!bEnableStreaming" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartition.h" },
		{ "ToolTip", "Whether Level Instance can reference this partition." },
	};
#endif
	void Z_Construct_UClass_UWorldPartition_Statics::NewProp_bCanBeUsedByLevelInstance_SetBit(void* Obj)
	{
		((UWorldPartition*)Obj)->bCanBeUsedByLevelInstance = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorldPartition_Statics::NewProp_bCanBeUsedByLevelInstance = { "bCanBeUsedByLevelInstance", nullptr, (EPropertyFlags)0x0040040800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWorldPartition), &Z_Construct_UClass_UWorldPartition_Statics::NewProp_bCanBeUsedByLevelInstance_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWorldPartition_Statics::NewProp_bCanBeUsedByLevelInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartition_Statics::NewProp_bCanBeUsedByLevelInstance_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartition_Statics::NewProp_ActorDescContainer_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartition.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWorldPartition_Statics::NewProp_ActorDescContainer = { "ActorDescContainer", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldPartition, ActorDescContainer), Z_Construct_UClass_UActorDescContainer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWorldPartition_Statics::NewProp_ActorDescContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartition_Statics::NewProp_ActorDescContainer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartition_Statics::NewProp_RuntimeHash_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartition.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWorldPartition_Statics::NewProp_RuntimeHash = { "RuntimeHash", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldPartition, RuntimeHash), Z_Construct_UClass_UWorldPartitionRuntimeHash_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWorldPartition_Statics::NewProp_RuntimeHash_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartition_Statics::NewProp_RuntimeHash_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartition_Statics::NewProp_World_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartition.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWorldPartition_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldPartition, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWorldPartition_Statics::NewProp_World_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartition_Statics::NewProp_World_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartition_Statics::NewProp_bEnableStreaming_MetaData[] = {
		{ "Comment", "/** Enables streaming for this world. */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartition.h" },
		{ "ToolTip", "Enables streaming for this world." },
	};
#endif
	void Z_Construct_UClass_UWorldPartition_Statics::NewProp_bEnableStreaming_SetBit(void* Obj)
	{
		((UWorldPartition*)Obj)->bEnableStreaming = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorldPartition_Statics::NewProp_bEnableStreaming = { "bEnableStreaming", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWorldPartition), &Z_Construct_UClass_UWorldPartition_Statics::NewProp_bEnableStreaming_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWorldPartition_Statics::NewProp_bEnableStreaming_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartition_Statics::NewProp_bEnableStreaming_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartition_Statics::NewProp_DefaultHLODLayer_MetaData[] = {
		{ "Category", "WorldPartitionSetup" },
		{ "Comment", "// Default HLOD layer\n" },
		{ "DisplayName", "Default HLOD Layer" },
		{ "EditCondition", "bEnableStreaming" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartition.h" },
		{ "ToolTip", "Default HLOD layer" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWorldPartition_Statics::NewProp_DefaultHLODLayer = { "DefaultHLODLayer", nullptr, (EPropertyFlags)0x0044000800000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldPartition, DefaultHLODLayer), Z_Construct_UClass_UHLODLayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWorldPartition_Statics::NewProp_DefaultHLODLayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartition_Statics::NewProp_DefaultHLODLayer_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartition_Statics::NewProp_StreamingPolicy_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartition.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWorldPartition_Statics::NewProp_StreamingPolicy = { "StreamingPolicy", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldPartition, StreamingPolicy), Z_Construct_UClass_UWorldPartitionStreamingPolicy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWorldPartition_Statics::NewProp_StreamingPolicy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartition_Statics::NewProp_StreamingPolicy_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWorldPartition_Statics::NewProp_RegisteredEditorLoaderAdapters_ElementProp = { "RegisteredEditorLoaderAdapters", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UWorldPartitionEditorLoaderAdapter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartition_Statics::NewProp_RegisteredEditorLoaderAdapters_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartition.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UWorldPartition_Statics::NewProp_RegisteredEditorLoaderAdapters = { "RegisteredEditorLoaderAdapters", nullptr, (EPropertyFlags)0x0044000c00002000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldPartition, RegisteredEditorLoaderAdapters), METADATA_PARAMS(Z_Construct_UClass_UWorldPartition_Statics::NewProp_RegisteredEditorLoaderAdapters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartition_Statics::NewProp_RegisteredEditorLoaderAdapters_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWorldPartition_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartition_Statics::NewProp_EditorHash,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartition_Statics::NewProp_WorldPartitionStreamingPolicyClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartition_Statics::NewProp_bStreamingWasEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartition_Statics::NewProp_bCanBeUsedByLevelInstance,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartition_Statics::NewProp_ActorDescContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartition_Statics::NewProp_RuntimeHash,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartition_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartition_Statics::NewProp_bEnableStreaming,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartition_Statics::NewProp_DefaultHLODLayer,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartition_Statics::NewProp_StreamingPolicy,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartition_Statics::NewProp_RegisteredEditorLoaderAdapters_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartition_Statics::NewProp_RegisteredEditorLoaderAdapters,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWorldPartition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldPartition>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldPartition_Statics::ClassParams = {
		&UWorldPartition::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWorldPartition_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartition_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWorldPartition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWorldPartition()
	{
		if (!Z_Registration_Info_UClass_UWorldPartition.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldPartition.OuterSingleton, Z_Construct_UClass_UWorldPartition_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWorldPartition.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UWorldPartition>()
	{
		return UWorldPartition::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldPartition);
	UWorldPartition::~UWorldPartition() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UWorldPartition)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartition_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartition_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWorldPartition, UWorldPartition::StaticClass, TEXT("UWorldPartition"), &Z_Registration_Info_UClass_UWorldPartition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldPartition), 1819202712U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartition_h_3377890819(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartition_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
