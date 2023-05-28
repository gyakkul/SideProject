// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayTargetingSystem/Types/TargetingSystemTypes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTargetingSystemTypes() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	TARGETINGSYSTEM_API UClass* Z_Construct_UClass_UTargetingPreset_NoRegister();
	TARGETINGSYSTEM_API UClass* Z_Construct_UClass_UTargetingTask_NoRegister();
	TARGETINGSYSTEM_API UFunction* Z_Construct_UDelegateFunction_TargetingSystem_TargetingRequestDynamicDelegate__DelegateSignature();
	TARGETINGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FTargetingAsyncTaskData();
	TARGETINGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FTargetingDebugData();
	TARGETINGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FTargetingDefaultResultData();
	TARGETINGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FTargetingDefaultResultsSet();
	TARGETINGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FTargetingImmediateTaskData();
	TARGETINGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FTargetingRequestData();
	TARGETINGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FTargetingRequestHandle();
	TARGETINGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FTargetingSourceContext();
	TARGETINGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FTargetingTaskSet();
	UPackage* Z_Construct_UPackage__Script_TargetingSystem();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TargetingRequestHandle;
class UScriptStruct* FTargetingRequestHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TargetingRequestHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TargetingRequestHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTargetingRequestHandle, (UObject*)Z_Construct_UPackage__Script_TargetingSystem(), TEXT("TargetingRequestHandle"));
	}
	return Z_Registration_Info_UScriptStruct_TargetingRequestHandle.OuterSingleton;
}
template<> TARGETINGSYSTEM_API UScriptStruct* StaticStruct<FTargetingRequestHandle>()
{
	return FTargetingRequestHandle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTargetingRequestHandle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetingRequestHandle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n*\x09@struct FTargetingRequestHandle\n*\n*\x09The handle that is created when a user wants to make a targeting request.\n*/" },
		{ "ModuleRelativePath", "Types/TargetingSystemTypes.h" },
		{ "ToolTip", "@struct FTargetingRequestHandle\n\nThe handle that is created when a user wants to make a targeting request." },
	};
#endif
	void* Z_Construct_UScriptStruct_FTargetingRequestHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTargetingRequestHandle>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTargetingRequestHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TargetingSystem,
		nullptr,
		&NewStructOps,
		"TargetingRequestHandle",
		sizeof(FTargetingRequestHandle),
		alignof(FTargetingRequestHandle),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetingRequestHandle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetingRequestHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTargetingRequestHandle()
	{
		if (!Z_Registration_Info_UScriptStruct_TargetingRequestHandle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TargetingRequestHandle.InnerSingleton, Z_Construct_UScriptStruct_FTargetingRequestHandle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TargetingRequestHandle.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TargetingTaskSet;
class UScriptStruct* FTargetingTaskSet::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TargetingTaskSet.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TargetingTaskSet.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTargetingTaskSet, (UObject*)Z_Construct_UPackage__Script_TargetingSystem(), TEXT("TargetingTaskSet"));
	}
	return Z_Registration_Info_UScriptStruct_TargetingTaskSet.OuterSingleton;
}
template<> TARGETINGSYSTEM_API UScriptStruct* StaticStruct<FTargetingTaskSet>()
{
	return FTargetingTaskSet::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTargetingTaskSet_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tasks_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Tasks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tasks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Tasks;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetingTaskSet_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n*\x09@struct FTargetingTaskSet\n*\n*\x09""A set of tasks to be used by targeting requests to find/processes targets\n*/" },
		{ "ModuleRelativePath", "Types/TargetingSystemTypes.h" },
		{ "ToolTip", "@struct FTargetingTaskSet\n\nA set of tasks to be used by targeting requests to find/processes targets" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTargetingTaskSet_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTargetingTaskSet>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetingTaskSet_Statics::NewProp_Tasks_Inner_MetaData[] = {
		{ "Category", "Targeting Task Set" },
		{ "Comment", "/** The set of tasks that will be used to satisfy a targeting request  */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Types/TargetingSystemTypes.h" },
		{ "ToolTip", "The set of tasks that will be used to satisfy a targeting request" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FTargetingTaskSet_Statics::NewProp_Tasks_Inner = { "Tasks", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UTargetingTask_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetingTaskSet_Statics::NewProp_Tasks_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetingTaskSet_Statics::NewProp_Tasks_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetingTaskSet_Statics::NewProp_Tasks_MetaData[] = {
		{ "Category", "Targeting Task Set" },
		{ "Comment", "/** The set of tasks that will be used to satisfy a targeting request  */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Types/TargetingSystemTypes.h" },
		{ "ToolTip", "The set of tasks that will be used to satisfy a targeting request" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTargetingTaskSet_Statics::NewProp_Tasks = { "Tasks", nullptr, (EPropertyFlags)0x0014008000000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTargetingTaskSet, Tasks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetingTaskSet_Statics::NewProp_Tasks_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetingTaskSet_Statics::NewProp_Tasks_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTargetingTaskSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetingTaskSet_Statics::NewProp_Tasks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetingTaskSet_Statics::NewProp_Tasks,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTargetingTaskSet_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TargetingSystem,
		nullptr,
		&NewStructOps,
		"TargetingTaskSet",
		sizeof(FTargetingTaskSet),
		alignof(FTargetingTaskSet),
		Z_Construct_UScriptStruct_FTargetingTaskSet_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetingTaskSet_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetingTaskSet_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetingTaskSet_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTargetingTaskSet()
	{
		if (!Z_Registration_Info_UScriptStruct_TargetingTaskSet.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TargetingTaskSet.InnerSingleton, Z_Construct_UScriptStruct_FTargetingTaskSet_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TargetingTaskSet.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TargetingDefaultResultData;
class UScriptStruct* FTargetingDefaultResultData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TargetingDefaultResultData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TargetingDefaultResultData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTargetingDefaultResultData, (UObject*)Z_Construct_UPackage__Script_TargetingSystem(), TEXT("TargetingDefaultResultData"));
	}
	return Z_Registration_Info_UScriptStruct_TargetingDefaultResultData.OuterSingleton;
}
template<> TARGETINGSYSTEM_API UScriptStruct* StaticStruct<FTargetingDefaultResultData>()
{
	return FTargetingDefaultResultData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTargetingDefaultResultData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetingDefaultResultData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n*\x09@struct FTargetingDefaultResultData\n*/" },
		{ "ModuleRelativePath", "Types/TargetingSystemTypes.h" },
		{ "ToolTip", "@struct FTargetingDefaultResultData" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTargetingDefaultResultData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTargetingDefaultResultData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetingDefaultResultData_Statics::NewProp_HitResult_MetaData[] = {
		{ "Comment", "/** The hit result for this target */" },
		{ "ModuleRelativePath", "Types/TargetingSystemTypes.h" },
		{ "ToolTip", "The hit result for this target" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTargetingDefaultResultData_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTargetingDefaultResultData, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetingDefaultResultData_Statics::NewProp_HitResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetingDefaultResultData_Statics::NewProp_HitResult_MetaData)) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTargetingDefaultResultData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetingDefaultResultData_Statics::NewProp_HitResult,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTargetingDefaultResultData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TargetingSystem,
		nullptr,
		&NewStructOps,
		"TargetingDefaultResultData",
		sizeof(FTargetingDefaultResultData),
		alignof(FTargetingDefaultResultData),
		Z_Construct_UScriptStruct_FTargetingDefaultResultData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetingDefaultResultData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetingDefaultResultData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetingDefaultResultData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTargetingDefaultResultData()
	{
		if (!Z_Registration_Info_UScriptStruct_TargetingDefaultResultData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TargetingDefaultResultData.InnerSingleton, Z_Construct_UScriptStruct_FTargetingDefaultResultData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TargetingDefaultResultData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TargetingDefaultResultsSet;
class UScriptStruct* FTargetingDefaultResultsSet::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TargetingDefaultResultsSet.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TargetingDefaultResultsSet.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTargetingDefaultResultsSet, (UObject*)Z_Construct_UPackage__Script_TargetingSystem(), TEXT("TargetingDefaultResultsSet"));
	}
	return Z_Registration_Info_UScriptStruct_TargetingDefaultResultsSet.OuterSingleton;
}
template<> TARGETINGSYSTEM_API UScriptStruct* StaticStruct<FTargetingDefaultResultsSet>()
{
	return FTargetingDefaultResultsSet::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTargetingDefaultResultsSet_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetResults_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetResults_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TargetResults;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetingDefaultResultsSet_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n*\x09@struct FTargetingDefaultResultsSet\n*\n*\x09The base targeting result data used by the tasks implemented at the framework level.\n*\x09Provides an array of data (hit result / score) that tasks can add/remove/sort/etc\n*\x09to complete a targeting request.\n*/" },
		{ "ModuleRelativePath", "Types/TargetingSystemTypes.h" },
		{ "ToolTip", "@struct FTargetingDefaultResultsSet\n\nThe base targeting result data used by the tasks implemented at the framework level.\nProvides an array of data (hit result / score) that tasks can add/remove/sort/etc\nto complete a targeting request." },
	};
#endif
	void* Z_Construct_UScriptStruct_FTargetingDefaultResultsSet_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTargetingDefaultResultsSet>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTargetingDefaultResultsSet_Statics::NewProp_TargetResults_Inner = { "TargetResults", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTargetingDefaultResultData, METADATA_PARAMS(nullptr, 0) }; // 2032848819
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetingDefaultResultsSet_Statics::NewProp_TargetResults_MetaData[] = {
		{ "Comment", "/** The hit result for this target */" },
		{ "ModuleRelativePath", "Types/TargetingSystemTypes.h" },
		{ "ToolTip", "The hit result for this target" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTargetingDefaultResultsSet_Statics::NewProp_TargetResults = { "TargetResults", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTargetingDefaultResultsSet, TargetResults), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetingDefaultResultsSet_Statics::NewProp_TargetResults_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetingDefaultResultsSet_Statics::NewProp_TargetResults_MetaData)) }; // 2032848819
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTargetingDefaultResultsSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetingDefaultResultsSet_Statics::NewProp_TargetResults_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetingDefaultResultsSet_Statics::NewProp_TargetResults,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTargetingDefaultResultsSet_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TargetingSystem,
		nullptr,
		&NewStructOps,
		"TargetingDefaultResultsSet",
		sizeof(FTargetingDefaultResultsSet),
		alignof(FTargetingDefaultResultsSet),
		Z_Construct_UScriptStruct_FTargetingDefaultResultsSet_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetingDefaultResultsSet_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetingDefaultResultsSet_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetingDefaultResultsSet_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTargetingDefaultResultsSet()
	{
		if (!Z_Registration_Info_UScriptStruct_TargetingDefaultResultsSet.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TargetingDefaultResultsSet.InnerSingleton, Z_Construct_UScriptStruct_FTargetingDefaultResultsSet_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TargetingDefaultResultsSet.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TargetingSourceContext;
class UScriptStruct* FTargetingSourceContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TargetingSourceContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TargetingSourceContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTargetingSourceContext, (UObject*)Z_Construct_UPackage__Script_TargetingSystem(), TEXT("TargetingSourceContext"));
	}
	return Z_Registration_Info_UScriptStruct_TargetingSourceContext.OuterSingleton;
}
template<> TARGETINGSYSTEM_API UScriptStruct* StaticStruct<FTargetingSourceContext>()
{
	return FTargetingSourceContext::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTargetingSourceContext_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SourceActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstigatorActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InstigatorActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceSocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SourceSocketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SourceObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetingSourceContext_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n*\x09@struct FTargetingSourceContext\n*\n*\x09Stores context information about a targeting request.\n*/" },
		{ "ModuleRelativePath", "Types/TargetingSystemTypes.h" },
		{ "ToolTip", "@struct FTargetingSourceContext\n\nStores context information about a targeting request." },
	};
#endif
	void* Z_Construct_UScriptStruct_FTargetingSourceContext_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTargetingSourceContext>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetingSourceContext_Statics::NewProp_SourceActor_MetaData[] = {
		{ "Category", "Targeting Source Context" },
		{ "Comment", "/** The optional actor the targeting request sources from (i.e. player/projectile/etc) */" },
		{ "ModuleRelativePath", "Types/TargetingSystemTypes.h" },
		{ "ToolTip", "The optional actor the targeting request sources from (i.e. player/projectile/etc)" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FTargetingSourceContext_Statics::NewProp_SourceActor = { "SourceActor", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTargetingSourceContext, SourceActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetingSourceContext_Statics::NewProp_SourceActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetingSourceContext_Statics::NewProp_SourceActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetingSourceContext_Statics::NewProp_InstigatorActor_MetaData[] = {
		{ "Category", "Targeting Source Context" },
		{ "Comment", "/** The optional instigator the targeting request is owned by (i.e. owner of a projectile) */" },
		{ "ModuleRelativePath", "Types/TargetingSystemTypes.h" },
		{ "ToolTip", "The optional instigator the targeting request is owned by (i.e. owner of a projectile)" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FTargetingSourceContext_Statics::NewProp_InstigatorActor = { "InstigatorActor", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTargetingSourceContext, InstigatorActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetingSourceContext_Statics::NewProp_InstigatorActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetingSourceContext_Statics::NewProp_InstigatorActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetingSourceContext_Statics::NewProp_SourceLocation_MetaData[] = {
		{ "Category", "Targeting Source Context" },
		{ "Comment", "/** The optional location the targeting request will source from (i.e. do AOE targeting at x/y/z location) */" },
		{ "ModuleRelativePath", "Types/TargetingSystemTypes.h" },
		{ "ToolTip", "The optional location the targeting request will source from (i.e. do AOE targeting at x/y/z location)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTargetingSourceContext_Statics::NewProp_SourceLocation = { "SourceLocation", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTargetingSourceContext, SourceLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetingSourceContext_Statics::NewProp_SourceLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetingSourceContext_Statics::NewProp_SourceLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetingSourceContext_Statics::NewProp_SourceSocketName_MetaData[] = {
		{ "Category", "Targeting Source Context" },
		{ "Comment", "/** The optional socket name to use on the source actor (if an actor is defined) */" },
		{ "ModuleRelativePath", "Types/TargetingSystemTypes.h" },
		{ "ToolTip", "The optional socket name to use on the source actor (if an actor is defined)" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTargetingSourceContext_Statics::NewProp_SourceSocketName = { "SourceSocketName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTargetingSourceContext, SourceSocketName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetingSourceContext_Statics::NewProp_SourceSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetingSourceContext_Statics::NewProp_SourceSocketName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetingSourceContext_Statics::NewProp_SourceObject_MetaData[] = {
		{ "Category", "Targeting Source Context" },
		{ "Comment", "/** The optional reference to a source uobject to use in the context */" },
		{ "ModuleRelativePath", "Types/TargetingSystemTypes.h" },
		{ "ToolTip", "The optional reference to a source uobject to use in the context" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FTargetingSourceContext_Statics::NewProp_SourceObject = { "SourceObject", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTargetingSourceContext, SourceObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetingSourceContext_Statics::NewProp_SourceObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetingSourceContext_Statics::NewProp_SourceObject_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTargetingSourceContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetingSourceContext_Statics::NewProp_SourceActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetingSourceContext_Statics::NewProp_InstigatorActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetingSourceContext_Statics::NewProp_SourceLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetingSourceContext_Statics::NewProp_SourceSocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetingSourceContext_Statics::NewProp_SourceObject,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTargetingSourceContext_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TargetingSystem,
		nullptr,
		&NewStructOps,
		"TargetingSourceContext",
		sizeof(FTargetingSourceContext),
		alignof(FTargetingSourceContext),
		Z_Construct_UScriptStruct_FTargetingSourceContext_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetingSourceContext_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetingSourceContext_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetingSourceContext_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTargetingSourceContext()
	{
		if (!Z_Registration_Info_UScriptStruct_TargetingSourceContext.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TargetingSourceContext.InnerSingleton, Z_Construct_UScriptStruct_FTargetingSourceContext_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TargetingSourceContext.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_TargetingSystem_TargetingRequestDynamicDelegate__DelegateSignature_Statics
	{
		struct _Script_TargetingSystem_eventTargetingRequestDynamicDelegate_Parms
		{
			FTargetingRequestHandle TargetingRequestHandle;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetingRequestHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_TargetingSystem_TargetingRequestDynamicDelegate__DelegateSignature_Statics::NewProp_TargetingRequestHandle = { "TargetingRequestHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_TargetingSystem_eventTargetingRequestDynamicDelegate_Parms, TargetingRequestHandle), Z_Construct_UScriptStruct_FTargetingRequestHandle, METADATA_PARAMS(nullptr, 0) }; // 951213696
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TargetingSystem_TargetingRequestDynamicDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TargetingSystem_TargetingRequestDynamicDelegate__DelegateSignature_Statics::NewProp_TargetingRequestHandle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TargetingSystem_TargetingRequestDynamicDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Types/TargetingSystemTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TargetingSystem_TargetingRequestDynamicDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TargetingSystem, nullptr, "TargetingRequestDynamicDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_TargetingSystem_TargetingRequestDynamicDelegate__DelegateSignature_Statics::_Script_TargetingSystem_eventTargetingRequestDynamicDelegate_Parms), Z_Construct_UDelegateFunction_TargetingSystem_TargetingRequestDynamicDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TargetingSystem_TargetingRequestDynamicDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TargetingSystem_TargetingRequestDynamicDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TargetingSystem_TargetingRequestDynamicDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TargetingSystem_TargetingRequestDynamicDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TargetingSystem_TargetingRequestDynamicDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FTargetingRequestDynamicDelegate_DelegateWrapper(const FScriptDelegate& TargetingRequestDynamicDelegate, FTargetingRequestHandle TargetingRequestHandle)
{
	struct _Script_TargetingSystem_eventTargetingRequestDynamicDelegate_Parms
	{
		FTargetingRequestHandle TargetingRequestHandle;
	};
	_Script_TargetingSystem_eventTargetingRequestDynamicDelegate_Parms Parms;
	Parms.TargetingRequestHandle=TargetingRequestHandle;
	TargetingRequestDynamicDelegate.ProcessDelegate<UObject>(&Parms);
}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TargetingRequestData;
class UScriptStruct* FTargetingRequestData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TargetingRequestData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TargetingRequestData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTargetingRequestData, (UObject*)Z_Construct_UPackage__Script_TargetingSystem(), TEXT("TargetingRequestData"));
	}
	return Z_Registration_Info_UScriptStruct_TargetingRequestData.OuterSingleton;
}
template<> TARGETINGSYSTEM_API UScriptStruct* StaticStruct<FTargetingRequestData>()
{
	return FTargetingRequestData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTargetingRequestData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetingRequestDynamicDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_TargetingRequestDynamicDelegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetingRequestData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n*\x09@struct FTargetingRequestData\n*\n*\x09General purpose targeting request data. Used for general knowledge about\n*\x09the state of the request.\n*/" },
		{ "ModuleRelativePath", "Types/TargetingSystemTypes.h" },
		{ "ToolTip", "@struct FTargetingRequestData\n\nGeneral purpose targeting request data. Used for general knowledge about\nthe state of the request." },
	};
#endif
	void* Z_Construct_UScriptStruct_FTargetingRequestData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTargetingRequestData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetingRequestData_Statics::NewProp_TargetingRequestDynamicDelegate_MetaData[] = {
		{ "Comment", "/** The dynamic delegate (BP) that fires when the targeting request is complete */" },
		{ "ModuleRelativePath", "Types/TargetingSystemTypes.h" },
		{ "ToolTip", "The dynamic delegate (BP) that fires when the targeting request is complete" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UScriptStruct_FTargetingRequestData_Statics::NewProp_TargetingRequestDynamicDelegate = { "TargetingRequestDynamicDelegate", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTargetingRequestData, TargetingRequestDynamicDelegate), Z_Construct_UDelegateFunction_TargetingSystem_TargetingRequestDynamicDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetingRequestData_Statics::NewProp_TargetingRequestDynamicDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetingRequestData_Statics::NewProp_TargetingRequestDynamicDelegate_MetaData)) }; // 2354339958
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTargetingRequestData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetingRequestData_Statics::NewProp_TargetingRequestDynamicDelegate,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTargetingRequestData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TargetingSystem,
		nullptr,
		&NewStructOps,
		"TargetingRequestData",
		sizeof(FTargetingRequestData),
		alignof(FTargetingRequestData),
		Z_Construct_UScriptStruct_FTargetingRequestData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetingRequestData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetingRequestData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetingRequestData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTargetingRequestData()
	{
		if (!Z_Registration_Info_UScriptStruct_TargetingRequestData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TargetingRequestData.InnerSingleton, Z_Construct_UScriptStruct_FTargetingRequestData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TargetingRequestData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TargetingAsyncTaskData;
class UScriptStruct* FTargetingAsyncTaskData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TargetingAsyncTaskData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TargetingAsyncTaskData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTargetingAsyncTaskData, (UObject*)Z_Construct_UPackage__Script_TargetingSystem(), TEXT("TargetingAsyncTaskData"));
	}
	return Z_Registration_Info_UScriptStruct_TargetingAsyncTaskData.OuterSingleton;
}
template<> TARGETINGSYSTEM_API UScriptStruct* StaticStruct<FTargetingAsyncTaskData>()
{
	return FTargetingAsyncTaskData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTargetingAsyncTaskData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetingAsyncTaskData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n*\x09@struct FTargetingAsyncTaskData\n*\n*\x09The set of task book keeping data for async targeting requests.\n*/" },
		{ "ModuleRelativePath", "Types/TargetingSystemTypes.h" },
		{ "ToolTip", "@struct FTargetingAsyncTaskData\n\nThe set of task book keeping data for async targeting requests." },
	};
#endif
	void* Z_Construct_UScriptStruct_FTargetingAsyncTaskData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTargetingAsyncTaskData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTargetingAsyncTaskData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TargetingSystem,
		nullptr,
		&NewStructOps,
		"TargetingAsyncTaskData",
		sizeof(FTargetingAsyncTaskData),
		alignof(FTargetingAsyncTaskData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetingAsyncTaskData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetingAsyncTaskData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTargetingAsyncTaskData()
	{
		if (!Z_Registration_Info_UScriptStruct_TargetingAsyncTaskData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TargetingAsyncTaskData.InnerSingleton, Z_Construct_UScriptStruct_FTargetingAsyncTaskData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TargetingAsyncTaskData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TargetingImmediateTaskData;
class UScriptStruct* FTargetingImmediateTaskData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TargetingImmediateTaskData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TargetingImmediateTaskData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTargetingImmediateTaskData, (UObject*)Z_Construct_UPackage__Script_TargetingSystem(), TEXT("TargetingImmediateTaskData"));
	}
	return Z_Registration_Info_UScriptStruct_TargetingImmediateTaskData.OuterSingleton;
}
template<> TARGETINGSYSTEM_API UScriptStruct* StaticStruct<FTargetingImmediateTaskData>()
{
	return FTargetingImmediateTaskData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTargetingImmediateTaskData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetingImmediateTaskData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n*\x09@struct FTargetingImmediateTaskData\n*\n*\x09The set of task book keeping data for immediate targeting requests.\n*/" },
		{ "ModuleRelativePath", "Types/TargetingSystemTypes.h" },
		{ "ToolTip", "@struct FTargetingImmediateTaskData\n\nThe set of task book keeping data for immediate targeting requests." },
	};
#endif
	void* Z_Construct_UScriptStruct_FTargetingImmediateTaskData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTargetingImmediateTaskData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTargetingImmediateTaskData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TargetingSystem,
		nullptr,
		&NewStructOps,
		"TargetingImmediateTaskData",
		sizeof(FTargetingImmediateTaskData),
		alignof(FTargetingImmediateTaskData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetingImmediateTaskData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetingImmediateTaskData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTargetingImmediateTaskData()
	{
		if (!Z_Registration_Info_UScriptStruct_TargetingImmediateTaskData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TargetingImmediateTaskData.InnerSingleton, Z_Construct_UScriptStruct_FTargetingImmediateTaskData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TargetingImmediateTaskData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TargetingDebugData;
class UScriptStruct* FTargetingDebugData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TargetingDebugData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TargetingDebugData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTargetingDebugData, (UObject*)Z_Construct_UPackage__Script_TargetingSystem(), TEXT("TargetingDebugData"));
	}
	return Z_Registration_Info_UScriptStruct_TargetingDebugData.OuterSingleton;
}
template<> TARGETINGSYSTEM_API UScriptStruct* StaticStruct<FTargetingDebugData>()
{
	return FTargetingDebugData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTargetingDebugData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetingPreset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TargetingPreset;
		static const UECodeGen_Private::FStrPropertyParams NewProp_DebugScratchPadStrings_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_DebugScratchPadStrings_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugScratchPadStrings_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_DebugScratchPadStrings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedTargetResults_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedTargetResults_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CachedTargetResults;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetingDebugData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n*\x09@struct FTargetingDebugData\n*\n*\x09The set of task book keeping data for async targeting requests.\n*/" },
		{ "ModuleRelativePath", "Types/TargetingSystemTypes.h" },
		{ "ToolTip", "@struct FTargetingDebugData\n\nThe set of task book keeping data for async targeting requests." },
	};
#endif
	void* Z_Construct_UScriptStruct_FTargetingDebugData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTargetingDebugData>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetingDebugData_Statics::NewProp_TargetingPreset_MetaData[] = {
		{ "ModuleRelativePath", "Types/TargetingSystemTypes.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FTargetingDebugData_Statics::NewProp_TargetingPreset = { "TargetingPreset", nullptr, (EPropertyFlags)0x0014000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTargetingDebugData, TargetingPreset), Z_Construct_UClass_UTargetingPreset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetingDebugData_Statics::NewProp_TargetingPreset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetingDebugData_Statics::NewProp_TargetingPreset_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTargetingDebugData_Statics::NewProp_DebugScratchPadStrings_ValueProp = { "DebugScratchPadStrings", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTargetingDebugData_Statics::NewProp_DebugScratchPadStrings_Key_KeyProp = { "DebugScratchPadStrings_Key", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetingDebugData_Statics::NewProp_DebugScratchPadStrings_MetaData[] = {
		{ "ModuleRelativePath", "Types/TargetingSystemTypes.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FTargetingDebugData_Statics::NewProp_DebugScratchPadStrings = { "DebugScratchPadStrings", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTargetingDebugData, DebugScratchPadStrings), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetingDebugData_Statics::NewProp_DebugScratchPadStrings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetingDebugData_Statics::NewProp_DebugScratchPadStrings_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTargetingDebugData_Statics::NewProp_CachedTargetResults_Inner = { "CachedTargetResults", nullptr, (EPropertyFlags)0x0000008800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTargetingDefaultResultData, METADATA_PARAMS(nullptr, 0) }; // 2032848819
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetingDebugData_Statics::NewProp_CachedTargetResults_MetaData[] = {
		{ "ModuleRelativePath", "Types/TargetingSystemTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTargetingDebugData_Statics::NewProp_CachedTargetResults = { "CachedTargetResults", nullptr, (EPropertyFlags)0x0010008800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTargetingDebugData, CachedTargetResults), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetingDebugData_Statics::NewProp_CachedTargetResults_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetingDebugData_Statics::NewProp_CachedTargetResults_MetaData)) }; // 2032848819
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTargetingDebugData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetingDebugData_Statics::NewProp_TargetingPreset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetingDebugData_Statics::NewProp_DebugScratchPadStrings_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetingDebugData_Statics::NewProp_DebugScratchPadStrings_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetingDebugData_Statics::NewProp_DebugScratchPadStrings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetingDebugData_Statics::NewProp_CachedTargetResults_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetingDebugData_Statics::NewProp_CachedTargetResults,
	};
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTargetingDebugData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TargetingSystem,
		nullptr,
		&NewStructOps,
		"TargetingDebugData",
		sizeof(FTargetingDebugData),
		alignof(FTargetingDebugData),
		IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FTargetingDebugData_Statics::PropPointers, nullptr),
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetingDebugData_Statics::PropPointers), 0),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetingDebugData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetingDebugData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTargetingDebugData()
	{
		if (!Z_Registration_Info_UScriptStruct_TargetingDebugData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TargetingDebugData.InnerSingleton, Z_Construct_UScriptStruct_FTargetingDebugData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TargetingDebugData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Types_TargetingSystemTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Types_TargetingSystemTypes_h_Statics::ScriptStructInfo[] = {
		{ FTargetingRequestHandle::StaticStruct, Z_Construct_UScriptStruct_FTargetingRequestHandle_Statics::NewStructOps, TEXT("TargetingRequestHandle"), &Z_Registration_Info_UScriptStruct_TargetingRequestHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTargetingRequestHandle), 951213696U) },
		{ FTargetingTaskSet::StaticStruct, Z_Construct_UScriptStruct_FTargetingTaskSet_Statics::NewStructOps, TEXT("TargetingTaskSet"), &Z_Registration_Info_UScriptStruct_TargetingTaskSet, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTargetingTaskSet), 98691058U) },
		{ FTargetingDefaultResultData::StaticStruct, Z_Construct_UScriptStruct_FTargetingDefaultResultData_Statics::NewStructOps, TEXT("TargetingDefaultResultData"), &Z_Registration_Info_UScriptStruct_TargetingDefaultResultData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTargetingDefaultResultData), 2032848819U) },
		{ FTargetingDefaultResultsSet::StaticStruct, Z_Construct_UScriptStruct_FTargetingDefaultResultsSet_Statics::NewStructOps, TEXT("TargetingDefaultResultsSet"), &Z_Registration_Info_UScriptStruct_TargetingDefaultResultsSet, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTargetingDefaultResultsSet), 3497683306U) },
		{ FTargetingSourceContext::StaticStruct, Z_Construct_UScriptStruct_FTargetingSourceContext_Statics::NewStructOps, TEXT("TargetingSourceContext"), &Z_Registration_Info_UScriptStruct_TargetingSourceContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTargetingSourceContext), 871442416U) },
		{ FTargetingRequestData::StaticStruct, Z_Construct_UScriptStruct_FTargetingRequestData_Statics::NewStructOps, TEXT("TargetingRequestData"), &Z_Registration_Info_UScriptStruct_TargetingRequestData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTargetingRequestData), 3024155592U) },
		{ FTargetingAsyncTaskData::StaticStruct, Z_Construct_UScriptStruct_FTargetingAsyncTaskData_Statics::NewStructOps, TEXT("TargetingAsyncTaskData"), &Z_Registration_Info_UScriptStruct_TargetingAsyncTaskData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTargetingAsyncTaskData), 2995255622U) },
		{ FTargetingImmediateTaskData::StaticStruct, Z_Construct_UScriptStruct_FTargetingImmediateTaskData_Statics::NewStructOps, TEXT("TargetingImmediateTaskData"), &Z_Registration_Info_UScriptStruct_TargetingImmediateTaskData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTargetingImmediateTaskData), 1495653711U) },
		{ FTargetingDebugData::StaticStruct, Z_Construct_UScriptStruct_FTargetingDebugData_Statics::NewStructOps, TEXT("TargetingDebugData"), &Z_Registration_Info_UScriptStruct_TargetingDebugData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTargetingDebugData), 3227844323U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Types_TargetingSystemTypes_h_3177797291(TEXT("/Script/TargetingSystem"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Types_TargetingSystemTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Types_TargetingSystemTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
