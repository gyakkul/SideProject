// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TraceQueryTestResults.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTraceQueryTestResults() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	FUNCTIONALTESTING_API UClass* Z_Construct_UClass_UTraceQueryTestResults();
	FUNCTIONALTESTING_API UClass* Z_Construct_UClass_UTraceQueryTestResults_NoRegister();
	FUNCTIONALTESTING_API UScriptStruct* Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions();
	FUNCTIONALTESTING_API UScriptStruct* Z_Construct_UScriptStruct_FTraceQueryTestNames();
	FUNCTIONALTESTING_API UScriptStruct* Z_Construct_UScriptStruct_FTraceQueryTestResultsInner();
	FUNCTIONALTESTING_API UScriptStruct* Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost();
	UPackage* Z_Construct_UPackage__Script_FunctionalTesting();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TraceChannelTestBatchOptions;
class UScriptStruct* FTraceChannelTestBatchOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TraceChannelTestBatchOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TraceChannelTestBatchOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions, (UObject*)Z_Construct_UPackage__Script_FunctionalTesting(), TEXT("TraceChannelTestBatchOptions"));
	}
	return Z_Registration_Info_UScriptStruct_TraceChannelTestBatchOptions.OuterSingleton;
}
template<> FUNCTIONALTESTING_API UScriptStruct* StaticStruct<FTraceChannelTestBatchOptions>()
{
	return FTraceChannelTestBatchOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLineTrace_MetaData[];
#endif
		static void NewProp_bLineTrace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLineTrace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSphereTrace_MetaData[];
#endif
		static void NewProp_bSphereTrace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSphereTrace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCapsuleTrace_MetaData[];
#endif
		static void NewProp_bCapsuleTrace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCapsuleTrace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBoxTrace_MetaData[];
#endif
		static void NewProp_bBoxTrace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBoxTrace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bChannelTrace_MetaData[];
#endif
		static void NewProp_bChannelTrace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bChannelTrace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bObjectsTrace_MetaData[];
#endif
		static void NewProp_bObjectsTrace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bObjectsTrace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bProfileTrace_MetaData[];
#endif
		static void NewProp_bProfileTrace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bProfileTrace;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/TraceQueryTestResults.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTraceChannelTestBatchOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bLineTrace_MetaData[] = {
		{ "Category", "Utility|Collision" },
		{ "Comment", "/** Whether to do line traces */" },
		{ "ModuleRelativePath", "Classes/TraceQueryTestResults.h" },
		{ "ToolTip", "Whether to do line traces" },
	};
#endif
	void Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bLineTrace_SetBit(void* Obj)
	{
		((FTraceChannelTestBatchOptions*)Obj)->bLineTrace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bLineTrace = { "bLineTrace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FTraceChannelTestBatchOptions), &Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bLineTrace_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bLineTrace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bLineTrace_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bSphereTrace_MetaData[] = {
		{ "Category", "Utility|Collision" },
		{ "Comment", "/** Whether to do sphere traces */" },
		{ "ModuleRelativePath", "Classes/TraceQueryTestResults.h" },
		{ "ToolTip", "Whether to do sphere traces" },
	};
#endif
	void Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bSphereTrace_SetBit(void* Obj)
	{
		((FTraceChannelTestBatchOptions*)Obj)->bSphereTrace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bSphereTrace = { "bSphereTrace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FTraceChannelTestBatchOptions), &Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bSphereTrace_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bSphereTrace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bSphereTrace_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bCapsuleTrace_MetaData[] = {
		{ "Category", "Utility|Collision" },
		{ "Comment", "/** Whether to do capsule traces */" },
		{ "ModuleRelativePath", "Classes/TraceQueryTestResults.h" },
		{ "ToolTip", "Whether to do capsule traces" },
	};
#endif
	void Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bCapsuleTrace_SetBit(void* Obj)
	{
		((FTraceChannelTestBatchOptions*)Obj)->bCapsuleTrace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bCapsuleTrace = { "bCapsuleTrace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FTraceChannelTestBatchOptions), &Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bCapsuleTrace_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bCapsuleTrace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bCapsuleTrace_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bBoxTrace_MetaData[] = {
		{ "Category", "Utility|Collision" },
		{ "Comment", "/** Whether to do box traces */" },
		{ "ModuleRelativePath", "Classes/TraceQueryTestResults.h" },
		{ "ToolTip", "Whether to do box traces" },
	};
#endif
	void Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bBoxTrace_SetBit(void* Obj)
	{
		((FTraceChannelTestBatchOptions*)Obj)->bBoxTrace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bBoxTrace = { "bBoxTrace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FTraceChannelTestBatchOptions), &Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bBoxTrace_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bBoxTrace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bBoxTrace_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bChannelTrace_MetaData[] = {
		{ "Category", "Utility|Collision" },
		{ "Comment", "/** Whether to do channel traces */" },
		{ "ModuleRelativePath", "Classes/TraceQueryTestResults.h" },
		{ "ToolTip", "Whether to do channel traces" },
	};
#endif
	void Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bChannelTrace_SetBit(void* Obj)
	{
		((FTraceChannelTestBatchOptions*)Obj)->bChannelTrace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bChannelTrace = { "bChannelTrace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FTraceChannelTestBatchOptions), &Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bChannelTrace_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bChannelTrace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bChannelTrace_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bObjectsTrace_MetaData[] = {
		{ "Category", "Utility|Collision" },
		{ "Comment", "/** Whether to do object traces */" },
		{ "ModuleRelativePath", "Classes/TraceQueryTestResults.h" },
		{ "ToolTip", "Whether to do object traces" },
	};
#endif
	void Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bObjectsTrace_SetBit(void* Obj)
	{
		((FTraceChannelTestBatchOptions*)Obj)->bObjectsTrace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bObjectsTrace = { "bObjectsTrace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FTraceChannelTestBatchOptions), &Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bObjectsTrace_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bObjectsTrace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bObjectsTrace_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bProfileTrace_MetaData[] = {
		{ "Category", "Utility|Collision" },
		{ "Comment", "/** Whether to do profile traces */" },
		{ "ModuleRelativePath", "Classes/TraceQueryTestResults.h" },
		{ "ToolTip", "Whether to do profile traces" },
	};
#endif
	void Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bProfileTrace_SetBit(void* Obj)
	{
		((FTraceChannelTestBatchOptions*)Obj)->bProfileTrace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bProfileTrace = { "bProfileTrace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FTraceChannelTestBatchOptions), &Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bProfileTrace_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bProfileTrace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bProfileTrace_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bLineTrace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bSphereTrace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bCapsuleTrace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bBoxTrace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bChannelTrace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bObjectsTrace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bProfileTrace,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FunctionalTesting,
		nullptr,
		&NewStructOps,
		"TraceChannelTestBatchOptions",
		sizeof(FTraceChannelTestBatchOptions),
		alignof(FTraceChannelTestBatchOptions),
		Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_TraceChannelTestBatchOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TraceChannelTestBatchOptions.InnerSingleton, Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TraceChannelTestBatchOptions.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TraceQueryTestNames;
class UScriptStruct* FTraceQueryTestNames::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TraceQueryTestNames.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TraceQueryTestNames.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTraceQueryTestNames, (UObject*)Z_Construct_UPackage__Script_FunctionalTesting(), TEXT("TraceQueryTestNames"));
	}
	return Z_Registration_Info_UScriptStruct_TraceQueryTestNames.OuterSingleton;
}
template<> FUNCTIONALTESTING_API UScriptStruct* StaticStruct<FTraceQueryTestNames>()
{
	return FTraceQueryTestNames::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTraceQueryTestNames_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ComponentName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysicalMaterialName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PhysicalMaterialName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ActorName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTraceQueryTestNames_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/TraceQueryTestResults.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTraceQueryTestNames_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTraceQueryTestNames>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTraceQueryTestNames_Statics::NewProp_ComponentName_MetaData[] = {
		{ "Category", "Utility|Collision" },
		{ "ModuleRelativePath", "Classes/TraceQueryTestResults.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTraceQueryTestNames_Statics::NewProp_ComponentName = { "ComponentName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTraceQueryTestNames, ComponentName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTraceQueryTestNames_Statics::NewProp_ComponentName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceQueryTestNames_Statics::NewProp_ComponentName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTraceQueryTestNames_Statics::NewProp_PhysicalMaterialName_MetaData[] = {
		{ "Category", "Utility|Collision" },
		{ "ModuleRelativePath", "Classes/TraceQueryTestResults.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTraceQueryTestNames_Statics::NewProp_PhysicalMaterialName = { "PhysicalMaterialName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTraceQueryTestNames, PhysicalMaterialName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTraceQueryTestNames_Statics::NewProp_PhysicalMaterialName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceQueryTestNames_Statics::NewProp_PhysicalMaterialName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTraceQueryTestNames_Statics::NewProp_ActorName_MetaData[] = {
		{ "Category", "Utility|Collision" },
		{ "ModuleRelativePath", "Classes/TraceQueryTestResults.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTraceQueryTestNames_Statics::NewProp_ActorName = { "ActorName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTraceQueryTestNames, ActorName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTraceQueryTestNames_Statics::NewProp_ActorName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceQueryTestNames_Statics::NewProp_ActorName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTraceQueryTestNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceQueryTestNames_Statics::NewProp_ComponentName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceQueryTestNames_Statics::NewProp_PhysicalMaterialName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceQueryTestNames_Statics::NewProp_ActorName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTraceQueryTestNames_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FunctionalTesting,
		nullptr,
		&NewStructOps,
		"TraceQueryTestNames",
		sizeof(FTraceQueryTestNames),
		alignof(FTraceQueryTestNames),
		Z_Construct_UScriptStruct_FTraceQueryTestNames_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceQueryTestNames_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTraceQueryTestNames_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceQueryTestNames_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTraceQueryTestNames()
	{
		if (!Z_Registration_Info_UScriptStruct_TraceQueryTestNames.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TraceQueryTestNames.InnerSingleton, Z_Construct_UScriptStruct_FTraceQueryTestNames_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TraceQueryTestNames.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TraceQueryTestResultsInnerMost;
class UScriptStruct* FTraceQueryTestResultsInnerMost::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TraceQueryTestResultsInnerMost.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TraceQueryTestResultsInnerMost.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost, (UObject*)Z_Construct_UPackage__Script_FunctionalTesting(), TEXT("TraceQueryTestResultsInnerMost"));
	}
	return Z_Registration_Info_UScriptStruct_TraceQueryTestResultsInnerMost.OuterSingleton;
}
template<> FUNCTIONALTESTING_API UScriptStruct* StaticStruct<FTraceQueryTestResultsInnerMost>()
{
	return FTraceQueryTestResultsInnerMost::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SingleHit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SingleHit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SingleNames_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SingleNames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSingleResult_MetaData[];
#endif
		static void NewProp_bSingleResult_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSingleResult;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MultiHits_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MultiHits_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MultiHits;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MultiNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MultiNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MultiNames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMultiResult_MetaData[];
#endif
		static void NewProp_bMultiResult_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMultiResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/TraceQueryTestResults.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTraceQueryTestResultsInnerMost>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewProp_SingleHit_MetaData[] = {
		{ "Category", "Utility|Collision" },
		{ "Comment", "/** Result from doing a single sweep*/" },
		{ "ModuleRelativePath", "Classes/TraceQueryTestResults.h" },
		{ "ToolTip", "Result from doing a single sweep" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewProp_SingleHit = { "SingleHit", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTraceQueryTestResultsInnerMost, SingleHit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewProp_SingleHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewProp_SingleHit_MetaData)) }; // 1287526515
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewProp_SingleNames_MetaData[] = {
		{ "Category", "Utility|Collision" },
		{ "Comment", "/** Names found from doing a single sweep*/" },
		{ "ModuleRelativePath", "Classes/TraceQueryTestResults.h" },
		{ "ToolTip", "Names found from doing a single sweep" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewProp_SingleNames = { "SingleNames", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTraceQueryTestResultsInnerMost, SingleNames), Z_Construct_UScriptStruct_FTraceQueryTestNames, METADATA_PARAMS(Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewProp_SingleNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewProp_SingleNames_MetaData)) }; // 3300133196
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewProp_bSingleResult_MetaData[] = {
		{ "Category", "Utility|Collision" },
		{ "Comment", "/** The true/false value returned from the single sweep */" },
		{ "ModuleRelativePath", "Classes/TraceQueryTestResults.h" },
		{ "ToolTip", "The true/false value returned from the single sweep" },
	};
#endif
	void Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewProp_bSingleResult_SetBit(void* Obj)
	{
		((FTraceQueryTestResultsInnerMost*)Obj)->bSingleResult = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewProp_bSingleResult = { "bSingleResult", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FTraceQueryTestResultsInnerMost), &Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewProp_bSingleResult_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewProp_bSingleResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewProp_bSingleResult_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewProp_MultiHits_Inner = { "MultiHits", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) }; // 1287526515
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewProp_MultiHits_MetaData[] = {
		{ "Category", "Utility|Collision" },
		{ "Comment", "/** Result from doing a multi sweep */" },
		{ "ModuleRelativePath", "Classes/TraceQueryTestResults.h" },
		{ "ToolTip", "Result from doing a multi sweep" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewProp_MultiHits = { "MultiHits", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTraceQueryTestResultsInnerMost, MultiHits), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewProp_MultiHits_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewProp_MultiHits_MetaData)) }; // 1287526515
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewProp_MultiNames_Inner = { "MultiNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTraceQueryTestNames, METADATA_PARAMS(nullptr, 0) }; // 3300133196
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewProp_MultiNames_MetaData[] = {
		{ "Category", "Utility|Collision" },
		{ "Comment", "/** Names found from doing a multi sweep*/" },
		{ "ModuleRelativePath", "Classes/TraceQueryTestResults.h" },
		{ "ToolTip", "Names found from doing a multi sweep" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewProp_MultiNames = { "MultiNames", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTraceQueryTestResultsInnerMost, MultiNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewProp_MultiNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewProp_MultiNames_MetaData)) }; // 3300133196
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewProp_bMultiResult_MetaData[] = {
		{ "Category", "Utility|Collision" },
		{ "Comment", "/** The true/false value returned from the multi sweep */" },
		{ "ModuleRelativePath", "Classes/TraceQueryTestResults.h" },
		{ "ToolTip", "The true/false value returned from the multi sweep" },
	};
#endif
	void Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewProp_bMultiResult_SetBit(void* Obj)
	{
		((FTraceQueryTestResultsInnerMost*)Obj)->bMultiResult = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewProp_bMultiResult = { "bMultiResult", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FTraceQueryTestResultsInnerMost), &Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewProp_bMultiResult_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewProp_bMultiResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewProp_bMultiResult_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewProp_SingleHit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewProp_SingleNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewProp_bSingleResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewProp_MultiHits_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewProp_MultiHits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewProp_MultiNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewProp_MultiNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewProp_bMultiResult,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FunctionalTesting,
		nullptr,
		&NewStructOps,
		"TraceQueryTestResultsInnerMost",
		sizeof(FTraceQueryTestResultsInnerMost),
		alignof(FTraceQueryTestResultsInnerMost),
		Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost()
	{
		if (!Z_Registration_Info_UScriptStruct_TraceQueryTestResultsInnerMost.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TraceQueryTestResultsInnerMost.InnerSingleton, Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TraceQueryTestResultsInnerMost.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TraceQueryTestResultsInner;
class UScriptStruct* FTraceQueryTestResultsInner::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TraceQueryTestResultsInner.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TraceQueryTestResultsInner.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTraceQueryTestResultsInner, (UObject*)Z_Construct_UPackage__Script_FunctionalTesting(), TEXT("TraceQueryTestResultsInner"));
	}
	return Z_Registration_Info_UScriptStruct_TraceQueryTestResultsInner.OuterSingleton;
}
template<> FUNCTIONALTESTING_API UScriptStruct* StaticStruct<FTraceQueryTestResultsInner>()
{
	return FTraceQueryTestResultsInner::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTraceQueryTestResultsInner_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LineResults_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LineResults;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SphereResults_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SphereResults;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleResults_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CapsuleResults;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoxResults_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoxResults;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTraceQueryTestResultsInner_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/TraceQueryTestResults.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTraceQueryTestResultsInner_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTraceQueryTestResultsInner>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTraceQueryTestResultsInner_Statics::NewProp_LineResults_MetaData[] = {
		{ "Category", "Utility|Collision" },
		{ "Comment", "/** The results associated with the line trace */" },
		{ "ModuleRelativePath", "Classes/TraceQueryTestResults.h" },
		{ "ToolTip", "The results associated with the line trace" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTraceQueryTestResultsInner_Statics::NewProp_LineResults = { "LineResults", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTraceQueryTestResultsInner, LineResults), Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost, METADATA_PARAMS(Z_Construct_UScriptStruct_FTraceQueryTestResultsInner_Statics::NewProp_LineResults_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceQueryTestResultsInner_Statics::NewProp_LineResults_MetaData)) }; // 2110081711
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTraceQueryTestResultsInner_Statics::NewProp_SphereResults_MetaData[] = {
		{ "Category", "Utility|Collision" },
		{ "Comment", "/** The results associated with the sphere */" },
		{ "ModuleRelativePath", "Classes/TraceQueryTestResults.h" },
		{ "ToolTip", "The results associated with the sphere" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTraceQueryTestResultsInner_Statics::NewProp_SphereResults = { "SphereResults", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTraceQueryTestResultsInner, SphereResults), Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost, METADATA_PARAMS(Z_Construct_UScriptStruct_FTraceQueryTestResultsInner_Statics::NewProp_SphereResults_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceQueryTestResultsInner_Statics::NewProp_SphereResults_MetaData)) }; // 2110081711
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTraceQueryTestResultsInner_Statics::NewProp_CapsuleResults_MetaData[] = {
		{ "Category", "Utility|Collision" },
		{ "Comment", "/** The results associated with the capsule*/" },
		{ "ModuleRelativePath", "Classes/TraceQueryTestResults.h" },
		{ "ToolTip", "The results associated with the capsule" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTraceQueryTestResultsInner_Statics::NewProp_CapsuleResults = { "CapsuleResults", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTraceQueryTestResultsInner, CapsuleResults), Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost, METADATA_PARAMS(Z_Construct_UScriptStruct_FTraceQueryTestResultsInner_Statics::NewProp_CapsuleResults_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceQueryTestResultsInner_Statics::NewProp_CapsuleResults_MetaData)) }; // 2110081711
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTraceQueryTestResultsInner_Statics::NewProp_BoxResults_MetaData[] = {
		{ "Category", "Utility|Collision" },
		{ "Comment", "/** The results associated with the box*/" },
		{ "ModuleRelativePath", "Classes/TraceQueryTestResults.h" },
		{ "ToolTip", "The results associated with the box" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTraceQueryTestResultsInner_Statics::NewProp_BoxResults = { "BoxResults", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTraceQueryTestResultsInner, BoxResults), Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost, METADATA_PARAMS(Z_Construct_UScriptStruct_FTraceQueryTestResultsInner_Statics::NewProp_BoxResults_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceQueryTestResultsInner_Statics::NewProp_BoxResults_MetaData)) }; // 2110081711
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTraceQueryTestResultsInner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceQueryTestResultsInner_Statics::NewProp_LineResults,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceQueryTestResultsInner_Statics::NewProp_SphereResults,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceQueryTestResultsInner_Statics::NewProp_CapsuleResults,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceQueryTestResultsInner_Statics::NewProp_BoxResults,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTraceQueryTestResultsInner_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FunctionalTesting,
		nullptr,
		&NewStructOps,
		"TraceQueryTestResultsInner",
		sizeof(FTraceQueryTestResultsInner),
		alignof(FTraceQueryTestResultsInner),
		Z_Construct_UScriptStruct_FTraceQueryTestResultsInner_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceQueryTestResultsInner_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTraceQueryTestResultsInner_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceQueryTestResultsInner_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTraceQueryTestResultsInner()
	{
		if (!Z_Registration_Info_UScriptStruct_TraceQueryTestResultsInner.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TraceQueryTestResultsInner.InnerSingleton, Z_Construct_UScriptStruct_FTraceQueryTestResultsInner_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TraceQueryTestResultsInner.InnerSingleton;
	}
	DEFINE_FUNCTION(UTraceQueryTestResults::execToString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->ToString();
		P_NATIVE_END;
	}
	void UTraceQueryTestResults::StaticRegisterNativesUTraceQueryTestResults()
	{
		UClass* Class = UTraceQueryTestResults::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ToString", &UTraceQueryTestResults::execToString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTraceQueryTestResults_ToString_Statics
	{
		struct TraceQueryTestResults_eventToString_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTraceQueryTestResults_ToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TraceQueryTestResults_eventToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTraceQueryTestResults_ToString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceQueryTestResults_ToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTraceQueryTestResults_ToString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utility|Collision" },
		{ "Comment", "/** Output string value */" },
		{ "ModuleRelativePath", "Classes/TraceQueryTestResults.h" },
		{ "ToolTip", "Output string value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTraceQueryTestResults_ToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTraceQueryTestResults, nullptr, "ToString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTraceQueryTestResults_ToString_Statics::TraceQueryTestResults_eventToString_Parms), Z_Construct_UFunction_UTraceQueryTestResults_ToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTraceQueryTestResults_ToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTraceQueryTestResults_ToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTraceQueryTestResults_ToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTraceQueryTestResults_ToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTraceQueryTestResults_ToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTraceQueryTestResults);
	UClass* Z_Construct_UClass_UTraceQueryTestResults_NoRegister()
	{
		return UTraceQueryTestResults::StaticClass();
	}
	struct Z_Construct_UClass_UTraceQueryTestResults_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChannelResults_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChannelResults;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectResults_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectResults;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProfileResults_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProfileResults;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BatchOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BatchOptions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTraceQueryTestResults_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FunctionalTesting,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTraceQueryTestResults_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTraceQueryTestResults_ToString, "ToString" }, // 2535086655
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTraceQueryTestResults_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TraceQueryTestResults.h" },
		{ "ModuleRelativePath", "Classes/TraceQueryTestResults.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTraceQueryTestResults_Statics::NewProp_ChannelResults_MetaData[] = {
		{ "Category", "Utility|Collision" },
		{ "Comment", "/** Results for channel trace */" },
		{ "ModuleRelativePath", "Classes/TraceQueryTestResults.h" },
		{ "ToolTip", "Results for channel trace" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTraceQueryTestResults_Statics::NewProp_ChannelResults = { "ChannelResults", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTraceQueryTestResults, ChannelResults), Z_Construct_UScriptStruct_FTraceQueryTestResultsInner, METADATA_PARAMS(Z_Construct_UClass_UTraceQueryTestResults_Statics::NewProp_ChannelResults_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTraceQueryTestResults_Statics::NewProp_ChannelResults_MetaData)) }; // 735158863
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTraceQueryTestResults_Statics::NewProp_ObjectResults_MetaData[] = {
		{ "Category", "Utility|Collision" },
		{ "Comment", "/** Results for object trace */" },
		{ "ModuleRelativePath", "Classes/TraceQueryTestResults.h" },
		{ "ToolTip", "Results for object trace" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTraceQueryTestResults_Statics::NewProp_ObjectResults = { "ObjectResults", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTraceQueryTestResults, ObjectResults), Z_Construct_UScriptStruct_FTraceQueryTestResultsInner, METADATA_PARAMS(Z_Construct_UClass_UTraceQueryTestResults_Statics::NewProp_ObjectResults_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTraceQueryTestResults_Statics::NewProp_ObjectResults_MetaData)) }; // 735158863
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTraceQueryTestResults_Statics::NewProp_ProfileResults_MetaData[] = {
		{ "Category", "Utility|Collision" },
		{ "Comment", "/** Results for profile trace */" },
		{ "ModuleRelativePath", "Classes/TraceQueryTestResults.h" },
		{ "ToolTip", "Results for profile trace" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTraceQueryTestResults_Statics::NewProp_ProfileResults = { "ProfileResults", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTraceQueryTestResults, ProfileResults), Z_Construct_UScriptStruct_FTraceQueryTestResultsInner, METADATA_PARAMS(Z_Construct_UClass_UTraceQueryTestResults_Statics::NewProp_ProfileResults_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTraceQueryTestResults_Statics::NewProp_ProfileResults_MetaData)) }; // 735158863
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTraceQueryTestResults_Statics::NewProp_BatchOptions_MetaData[] = {
		{ "Category", "Utility|Collision" },
		{ "ModuleRelativePath", "Classes/TraceQueryTestResults.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTraceQueryTestResults_Statics::NewProp_BatchOptions = { "BatchOptions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTraceQueryTestResults, BatchOptions), Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions, METADATA_PARAMS(Z_Construct_UClass_UTraceQueryTestResults_Statics::NewProp_BatchOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTraceQueryTestResults_Statics::NewProp_BatchOptions_MetaData)) }; // 3236230474
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTraceQueryTestResults_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTraceQueryTestResults_Statics::NewProp_ChannelResults,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTraceQueryTestResults_Statics::NewProp_ObjectResults,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTraceQueryTestResults_Statics::NewProp_ProfileResults,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTraceQueryTestResults_Statics::NewProp_BatchOptions,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTraceQueryTestResults_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTraceQueryTestResults>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTraceQueryTestResults_Statics::ClassParams = {
		&UTraceQueryTestResults::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTraceQueryTestResults_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTraceQueryTestResults_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTraceQueryTestResults_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTraceQueryTestResults_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTraceQueryTestResults()
	{
		if (!Z_Registration_Info_UClass_UTraceQueryTestResults.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTraceQueryTestResults.OuterSingleton, Z_Construct_UClass_UTraceQueryTestResults_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTraceQueryTestResults.OuterSingleton;
	}
	template<> FUNCTIONALTESTING_API UClass* StaticClass<UTraceQueryTestResults>()
	{
		return UTraceQueryTestResults::StaticClass();
	}
	UTraceQueryTestResults::UTraceQueryTestResults(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTraceQueryTestResults);
	UTraceQueryTestResults::~UTraceQueryTestResults() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_TraceQueryTestResults_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_TraceQueryTestResults_h_Statics::ScriptStructInfo[] = {
		{ FTraceChannelTestBatchOptions::StaticStruct, Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewStructOps, TEXT("TraceChannelTestBatchOptions"), &Z_Registration_Info_UScriptStruct_TraceChannelTestBatchOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTraceChannelTestBatchOptions), 3236230474U) },
		{ FTraceQueryTestNames::StaticStruct, Z_Construct_UScriptStruct_FTraceQueryTestNames_Statics::NewStructOps, TEXT("TraceQueryTestNames"), &Z_Registration_Info_UScriptStruct_TraceQueryTestNames, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTraceQueryTestNames), 3300133196U) },
		{ FTraceQueryTestResultsInnerMost::StaticStruct, Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewStructOps, TEXT("TraceQueryTestResultsInnerMost"), &Z_Registration_Info_UScriptStruct_TraceQueryTestResultsInnerMost, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTraceQueryTestResultsInnerMost), 2110081711U) },
		{ FTraceQueryTestResultsInner::StaticStruct, Z_Construct_UScriptStruct_FTraceQueryTestResultsInner_Statics::NewStructOps, TEXT("TraceQueryTestResultsInner"), &Z_Registration_Info_UScriptStruct_TraceQueryTestResultsInner, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTraceQueryTestResultsInner), 735158863U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_TraceQueryTestResults_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTraceQueryTestResults, UTraceQueryTestResults::StaticClass, TEXT("UTraceQueryTestResults"), &Z_Registration_Info_UClass_UTraceQueryTestResults, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTraceQueryTestResults), 3762561704U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_TraceQueryTestResults_h_1718321567(TEXT("/Script/FunctionalTesting"),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_TraceQueryTestResults_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_TraceQueryTestResults_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_TraceQueryTestResults_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_TraceQueryTestResults_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
