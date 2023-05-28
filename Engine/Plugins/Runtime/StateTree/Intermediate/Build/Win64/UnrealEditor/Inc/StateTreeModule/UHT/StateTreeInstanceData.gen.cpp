// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StateTreeInstanceData.h"
#include "InstancedStruct.h"
#include "InstancedStructContainer.h"
#include "StateTreeEvents.h"
#include "StateTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateTreeInstanceData() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeEventQueue();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeInstanceData();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeInstanceStorage();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeTransitionRequest();
	STRUCTUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStruct();
	STRUCTUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStructContainer();
	UPackage* Z_Construct_UPackage__Script_StateTreeModule();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeInstanceStorage;
class UScriptStruct* FStateTreeInstanceStorage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeInstanceStorage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeInstanceStorage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeInstanceStorage, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeInstanceStorage"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeInstanceStorage.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeInstanceStorage>()
{
	return FStateTreeInstanceStorage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStateTreeInstanceStorage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstanceStructs_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InstanceStructs;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InstanceObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstanceObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InstanceObjects;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventQueue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EventQueue;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransitionRequests_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransitionRequests_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TransitionRequests;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeInstanceStorage_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Storage for the actual instance data. */" },
		{ "ModuleRelativePath", "Public/StateTreeInstanceData.h" },
		{ "ToolTip", "Storage for the actual instance data." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStateTreeInstanceStorage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeInstanceStorage>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeInstanceStorage_Statics::NewProp_InstanceStructs_MetaData[] = {
		{ "Comment", "/** Struct instances */" },
		{ "ModuleRelativePath", "Public/StateTreeInstanceData.h" },
		{ "ToolTip", "Struct instances" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeInstanceStorage_Statics::NewProp_InstanceStructs = { "InstanceStructs", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreeInstanceStorage, InstanceStructs), Z_Construct_UScriptStruct_FInstancedStructContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeInstanceStorage_Statics::NewProp_InstanceStructs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeInstanceStorage_Statics::NewProp_InstanceStructs_MetaData)) }; // 334302854
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FStateTreeInstanceStorage_Statics::NewProp_InstanceObjects_Inner = { "InstanceObjects", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeInstanceStorage_Statics::NewProp_InstanceObjects_MetaData[] = {
		{ "Comment", "/** Object instances. */" },
		{ "ModuleRelativePath", "Public/StateTreeInstanceData.h" },
		{ "ToolTip", "Object instances." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStateTreeInstanceStorage_Statics::NewProp_InstanceObjects = { "InstanceObjects", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreeInstanceStorage, InstanceObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeInstanceStorage_Statics::NewProp_InstanceObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeInstanceStorage_Statics::NewProp_InstanceObjects_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeInstanceStorage_Statics::NewProp_EventQueue_MetaData[] = {
		{ "Comment", "/** Events */" },
		{ "ModuleRelativePath", "Public/StateTreeInstanceData.h" },
		{ "ToolTip", "Events" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeInstanceStorage_Statics::NewProp_EventQueue = { "EventQueue", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreeInstanceStorage, EventQueue), Z_Construct_UScriptStruct_FStateTreeEventQueue, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeInstanceStorage_Statics::NewProp_EventQueue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeInstanceStorage_Statics::NewProp_EventQueue_MetaData)) }; // 508240784
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeInstanceStorage_Statics::NewProp_TransitionRequests_Inner = { "TransitionRequests", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FStateTreeTransitionRequest, METADATA_PARAMS(nullptr, 0) }; // 1507413356
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeInstanceStorage_Statics::NewProp_TransitionRequests_MetaData[] = {
		{ "Comment", "/** Requested transitions */" },
		{ "ModuleRelativePath", "Public/StateTreeInstanceData.h" },
		{ "ToolTip", "Requested transitions" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStateTreeInstanceStorage_Statics::NewProp_TransitionRequests = { "TransitionRequests", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreeInstanceStorage, TransitionRequests), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeInstanceStorage_Statics::NewProp_TransitionRequests_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeInstanceStorage_Statics::NewProp_TransitionRequests_MetaData)) }; // 1507413356
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeInstanceStorage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeInstanceStorage_Statics::NewProp_InstanceStructs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeInstanceStorage_Statics::NewProp_InstanceObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeInstanceStorage_Statics::NewProp_InstanceObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeInstanceStorage_Statics::NewProp_EventQueue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeInstanceStorage_Statics::NewProp_TransitionRequests_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeInstanceStorage_Statics::NewProp_TransitionRequests,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeInstanceStorage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		&NewStructOps,
		"StateTreeInstanceStorage",
		sizeof(FStateTreeInstanceStorage),
		alignof(FStateTreeInstanceStorage),
		Z_Construct_UScriptStruct_FStateTreeInstanceStorage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeInstanceStorage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeInstanceStorage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeInstanceStorage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStateTreeInstanceStorage()
	{
		if (!Z_Registration_Info_UScriptStruct_StateTreeInstanceStorage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeInstanceStorage.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeInstanceStorage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StateTreeInstanceStorage.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeInstanceData;
class UScriptStruct* FStateTreeInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeInstanceData, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeInstanceData.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeInstanceData>()
{
	return FStateTreeInstanceData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStateTreeInstanceData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstanceStorage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InstanceStorage;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstanceStructs_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InstanceStructs;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InstanceObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstanceObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InstanceObjects;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeInstanceData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * StateTree instance data is used to store the runtime state of a StateTree.\n * The layout of the data is described in a FStateTreeInstanceDataLayout.\n *\n * Note: If FStateTreeInstanceData is placed on an struct, you must call AddStructReferencedObjects() manually,\n *\x09\x09 as it is not automatically called recursively.   \n * Note: Serialization is supported only for FArchive::IsModifyingWeakAndStrongReferences(), that is replacing object references.\n */" },
		{ "ModuleRelativePath", "Public/StateTreeInstanceData.h" },
		{ "ToolTip", "StateTree instance data is used to store the runtime state of a StateTree.\nThe layout of the data is described in a FStateTreeInstanceDataLayout.\n\nNote: If FStateTreeInstanceData is placed on an struct, you must call AddStructReferencedObjects() manually,\n             as it is not automatically called recursively.\nNote: Serialization is supported only for FArchive::IsModifyingWeakAndStrongReferences(), that is replacing object references." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStateTreeInstanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeInstanceData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeInstanceData_Statics::NewProp_InstanceStorage_MetaData[] = {
		{ "Comment", "/** Storage for the actual instance data, always stores FStateTreeInstanceStorage. */" },
		{ "ModuleRelativePath", "Public/StateTreeInstanceData.h" },
		{ "ToolTip", "Storage for the actual instance data, always stores FStateTreeInstanceStorage." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeInstanceData_Statics::NewProp_InstanceStorage = { "InstanceStorage", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreeInstanceData, InstanceStorage), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeInstanceData_Statics::NewProp_InstanceStorage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeInstanceData_Statics::NewProp_InstanceStorage_MetaData)) }; // 3026308664
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeInstanceData_Statics::NewProp_InstanceStructs_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/StateTreeInstanceData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeInstanceData_Statics::NewProp_InstanceStructs = { "InstanceStructs", nullptr, (EPropertyFlags)0x0020080820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreeInstanceData, InstanceStructs_DEPRECATED), Z_Construct_UScriptStruct_FInstancedStructContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeInstanceData_Statics::NewProp_InstanceStructs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeInstanceData_Statics::NewProp_InstanceStructs_MetaData)) }; // 334302854
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FStateTreeInstanceData_Statics::NewProp_InstanceObjects_Inner = { "InstanceObjects", nullptr, (EPropertyFlags)0x0004000820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeInstanceData_Statics::NewProp_InstanceObjects_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/StateTreeInstanceData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStateTreeInstanceData_Statics::NewProp_InstanceObjects = { "InstanceObjects", nullptr, (EPropertyFlags)0x0024080820000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreeInstanceData, InstanceObjects_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeInstanceData_Statics::NewProp_InstanceObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeInstanceData_Statics::NewProp_InstanceObjects_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeInstanceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeInstanceData_Statics::NewProp_InstanceStorage,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeInstanceData_Statics::NewProp_InstanceStructs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeInstanceData_Statics::NewProp_InstanceObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeInstanceData_Statics::NewProp_InstanceObjects,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeInstanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		&NewStructOps,
		"StateTreeInstanceData",
		sizeof(FStateTreeInstanceData),
		alignof(FStateTreeInstanceData),
		Z_Construct_UScriptStruct_FStateTreeInstanceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeInstanceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeInstanceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeInstanceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStateTreeInstanceData()
	{
		if (!Z_Registration_Info_UScriptStruct_StateTreeInstanceData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeInstanceData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StateTreeInstanceData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeInstanceData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeInstanceData_h_Statics::ScriptStructInfo[] = {
		{ FStateTreeInstanceStorage::StaticStruct, Z_Construct_UScriptStruct_FStateTreeInstanceStorage_Statics::NewStructOps, TEXT("StateTreeInstanceStorage"), &Z_Registration_Info_UScriptStruct_StateTreeInstanceStorage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeInstanceStorage), 3535702064U) },
		{ FStateTreeInstanceData::StaticStruct, Z_Construct_UScriptStruct_FStateTreeInstanceData_Statics::NewStructOps, TEXT("StateTreeInstanceData"), &Z_Registration_Info_UScriptStruct_StateTreeInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeInstanceData), 4128275611U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeInstanceData_h_3926240942(TEXT("/Script/StateTreeModule"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeInstanceData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeInstanceData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
