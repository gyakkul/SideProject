// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassProcessor.h"
#include "MassProcessingTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassProcessor() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MASSENTITY_API UClass* Z_Construct_UClass_UMassCompositeProcessor();
	MASSENTITY_API UClass* Z_Construct_UClass_UMassCompositeProcessor_NoRegister();
	MASSENTITY_API UClass* Z_Construct_UClass_UMassProcessor();
	MASSENTITY_API UClass* Z_Construct_UClass_UMassProcessor_NoRegister();
	MASSENTITY_API UEnum* Z_Construct_UEnum_MassEntity_EMassProcessingPhase();
	MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassProcessorExecutionOrder();
	MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassRuntimePipeline();
	UPackage* Z_Construct_UPackage__Script_MassEntity();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassProcessorExecutionOrder;
class UScriptStruct* FMassProcessorExecutionOrder::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassProcessorExecutionOrder.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassProcessorExecutionOrder.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassProcessorExecutionOrder, (UObject*)Z_Construct_UPackage__Script_MassEntity(), TEXT("MassProcessorExecutionOrder"));
	}
	return Z_Registration_Info_UScriptStruct_MassProcessorExecutionOrder.OuterSingleton;
}
template<> MASSENTITY_API UScriptStruct* StaticStruct<FMassProcessorExecutionOrder>()
{
	return FMassProcessorExecutionOrder::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassProcessorExecutionOrder_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExecuteInGroup_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ExecuteInGroup;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ExecuteBefore_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExecuteBefore_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExecuteBefore;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ExecuteAfter_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExecuteAfter_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExecuteAfter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassProcessorExecutionOrder_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassProcessor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassProcessorExecutionOrder_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassProcessorExecutionOrder>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassProcessorExecutionOrder_Statics::NewProp_ExecuteInGroup_MetaData[] = {
		{ "Category", "Processor" },
		{ "Comment", "/** Determines which processing group this processor will be placed in. Leaving it empty (\"None\") means \"top-most group for my ProcessingPhase\" */" },
		{ "ModuleRelativePath", "Public/MassProcessor.h" },
		{ "ToolTip", "Determines which processing group this processor will be placed in. Leaving it empty (\"None\") means \"top-most group for my ProcessingPhase\"" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMassProcessorExecutionOrder_Statics::NewProp_ExecuteInGroup = { "ExecuteInGroup", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassProcessorExecutionOrder, ExecuteInGroup), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassProcessorExecutionOrder_Statics::NewProp_ExecuteInGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassProcessorExecutionOrder_Statics::NewProp_ExecuteInGroup_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMassProcessorExecutionOrder_Statics::NewProp_ExecuteBefore_Inner = { "ExecuteBefore", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassProcessorExecutionOrder_Statics::NewProp_ExecuteBefore_MetaData[] = {
		{ "Category", "Processor" },
		{ "ModuleRelativePath", "Public/MassProcessor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMassProcessorExecutionOrder_Statics::NewProp_ExecuteBefore = { "ExecuteBefore", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassProcessorExecutionOrder, ExecuteBefore), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassProcessorExecutionOrder_Statics::NewProp_ExecuteBefore_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassProcessorExecutionOrder_Statics::NewProp_ExecuteBefore_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMassProcessorExecutionOrder_Statics::NewProp_ExecuteAfter_Inner = { "ExecuteAfter", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassProcessorExecutionOrder_Statics::NewProp_ExecuteAfter_MetaData[] = {
		{ "Category", "Processor" },
		{ "ModuleRelativePath", "Public/MassProcessor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMassProcessorExecutionOrder_Statics::NewProp_ExecuteAfter = { "ExecuteAfter", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassProcessorExecutionOrder, ExecuteAfter), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassProcessorExecutionOrder_Statics::NewProp_ExecuteAfter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassProcessorExecutionOrder_Statics::NewProp_ExecuteAfter_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassProcessorExecutionOrder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassProcessorExecutionOrder_Statics::NewProp_ExecuteInGroup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassProcessorExecutionOrder_Statics::NewProp_ExecuteBefore_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassProcessorExecutionOrder_Statics::NewProp_ExecuteBefore,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassProcessorExecutionOrder_Statics::NewProp_ExecuteAfter_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassProcessorExecutionOrder_Statics::NewProp_ExecuteAfter,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassProcessorExecutionOrder_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassEntity,
		nullptr,
		&NewStructOps,
		"MassProcessorExecutionOrder",
		sizeof(FMassProcessorExecutionOrder),
		alignof(FMassProcessorExecutionOrder),
		Z_Construct_UScriptStruct_FMassProcessorExecutionOrder_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassProcessorExecutionOrder_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassProcessorExecutionOrder_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassProcessorExecutionOrder_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassProcessorExecutionOrder()
	{
		if (!Z_Registration_Info_UScriptStruct_MassProcessorExecutionOrder.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassProcessorExecutionOrder.InnerSingleton, Z_Construct_UScriptStruct_FMassProcessorExecutionOrder_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassProcessorExecutionOrder.InnerSingleton;
	}
	void UMassProcessor::StaticRegisterNativesUMassProcessor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassProcessor);
	UClass* Z_Construct_UClass_UMassProcessor_NoRegister()
	{
		return UMassProcessor::StaticClass();
	}
	struct Z_Construct_UClass_UMassProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExecutionFlags_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ExecutionFlags;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ProcessingPhase_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProcessingPhase_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ProcessingPhase;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExecutionOrder_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExecutionOrder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoRegisterWithProcessingPhases_MetaData[];
#endif
		static void NewProp_bAutoRegisterWithProcessingPhases_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoRegisterWithProcessingPhases;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRequiresGameThreadExecution_MetaData[];
#endif
		static void NewProp_bRequiresGameThreadExecution_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequiresGameThreadExecution;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanShowUpInSettings_MetaData[];
#endif
		static void NewProp_bCanShowUpInSettings_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanShowUpInSettings;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MassEntity,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassProcessor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MassProcessor.h" },
		{ "ModuleRelativePath", "Public/MassProcessor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassProcessor_Statics::NewProp_ExecutionFlags_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/MassEntity.EProcessorExecutionFlags" },
		{ "Category", "Pipeline" },
		{ "Comment", "/** Whether this processor should be executed on StandAlone or Server or Client */" },
		{ "ModuleRelativePath", "Public/MassProcessor.h" },
		{ "ToolTip", "Whether this processor should be executed on StandAlone or Server or Client" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMassProcessor_Statics::NewProp_ExecutionFlags = { "ExecutionFlags", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassProcessor, ExecutionFlags), METADATA_PARAMS(Z_Construct_UClass_UMassProcessor_Statics::NewProp_ExecutionFlags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassProcessor_Statics::NewProp_ExecutionFlags_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMassProcessor_Statics::NewProp_ProcessingPhase_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassProcessor_Statics::NewProp_ProcessingPhase_MetaData[] = {
		{ "Category", "Processor" },
		{ "Comment", "/** Processing phase this processor will be automatically run as part of. */" },
		{ "ModuleRelativePath", "Public/MassProcessor.h" },
		{ "ToolTip", "Processing phase this processor will be automatically run as part of." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMassProcessor_Statics::NewProp_ProcessingPhase = { "ProcessingPhase", nullptr, (EPropertyFlags)0x0020080000014001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassProcessor, ProcessingPhase), Z_Construct_UEnum_MassEntity_EMassProcessingPhase, METADATA_PARAMS(Z_Construct_UClass_UMassProcessor_Statics::NewProp_ProcessingPhase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassProcessor_Statics::NewProp_ProcessingPhase_MetaData)) }; // 2829345331
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassProcessor_Statics::NewProp_ExecutionOrder_MetaData[] = {
		{ "Category", "Processor" },
		{ "Comment", "/** Configures when this given processor can be executed in relation to other processors and processing groups, within its processing phase. */" },
		{ "ModuleRelativePath", "Public/MassProcessor.h" },
		{ "ToolTip", "Configures when this given processor can be executed in relation to other processors and processing groups, within its processing phase." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassProcessor_Statics::NewProp_ExecutionOrder = { "ExecutionOrder", nullptr, (EPropertyFlags)0x0020080000014001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassProcessor, ExecutionOrder), Z_Construct_UScriptStruct_FMassProcessorExecutionOrder, METADATA_PARAMS(Z_Construct_UClass_UMassProcessor_Statics::NewProp_ExecutionOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassProcessor_Statics::NewProp_ExecutionOrder_MetaData)) }; // 762909384
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassProcessor_Statics::NewProp_bAutoRegisterWithProcessingPhases_MetaData[] = {
		{ "Category", "Processor" },
		{ "Comment", "/** Configures whether this processor should be automatically included in the global list of processors executed every tick (see ProcessingPhase and ExecutionOrder). */" },
		{ "ModuleRelativePath", "Public/MassProcessor.h" },
		{ "ToolTip", "Configures whether this processor should be automatically included in the global list of processors executed every tick (see ProcessingPhase and ExecutionOrder)." },
	};
#endif
	void Z_Construct_UClass_UMassProcessor_Statics::NewProp_bAutoRegisterWithProcessingPhases_SetBit(void* Obj)
	{
		((UMassProcessor*)Obj)->bAutoRegisterWithProcessingPhases = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMassProcessor_Statics::NewProp_bAutoRegisterWithProcessingPhases = { "bAutoRegisterWithProcessingPhases", nullptr, (EPropertyFlags)0x0020080000014001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMassProcessor), &Z_Construct_UClass_UMassProcessor_Statics::NewProp_bAutoRegisterWithProcessingPhases_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMassProcessor_Statics::NewProp_bAutoRegisterWithProcessingPhases_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassProcessor_Statics::NewProp_bAutoRegisterWithProcessingPhases_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassProcessor_Statics::NewProp_bRequiresGameThreadExecution_MetaData[] = {
		{ "Category", "Processor" },
		{ "ModuleRelativePath", "Public/MassProcessor.h" },
	};
#endif
	void Z_Construct_UClass_UMassProcessor_Statics::NewProp_bRequiresGameThreadExecution_SetBit(void* Obj)
	{
		((UMassProcessor*)Obj)->bRequiresGameThreadExecution = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMassProcessor_Statics::NewProp_bRequiresGameThreadExecution = { "bRequiresGameThreadExecution", nullptr, (EPropertyFlags)0x0020080000014001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMassProcessor), &Z_Construct_UClass_UMassProcessor_Statics::NewProp_bRequiresGameThreadExecution_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMassProcessor_Statics::NewProp_bRequiresGameThreadExecution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassProcessor_Statics::NewProp_bRequiresGameThreadExecution_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassProcessor_Statics::NewProp_bCanShowUpInSettings_MetaData[] = {
		{ "Comment", "/** Used to permanently remove a given processor class from PipeSetting's listing. Used primarily for test-time \n\x09 *  processor classes, but can also be used by project-specific code to prune the processor list. */" },
		{ "ModuleRelativePath", "Public/MassProcessor.h" },
		{ "ToolTip", "Used to permanently remove a given processor class from PipeSetting's listing. Used primarily for test-time\nprocessor classes, but can also be used by project-specific code to prune the processor list." },
	};
#endif
	void Z_Construct_UClass_UMassProcessor_Statics::NewProp_bCanShowUpInSettings_SetBit(void* Obj)
	{
		((UMassProcessor*)Obj)->bCanShowUpInSettings = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMassProcessor_Statics::NewProp_bCanShowUpInSettings = { "bCanShowUpInSettings", nullptr, (EPropertyFlags)0x0020080800004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMassProcessor), &Z_Construct_UClass_UMassProcessor_Statics::NewProp_bCanShowUpInSettings_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMassProcessor_Statics::NewProp_bCanShowUpInSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassProcessor_Statics::NewProp_bCanShowUpInSettings_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassProcessor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassProcessor_Statics::NewProp_ExecutionFlags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassProcessor_Statics::NewProp_ProcessingPhase_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassProcessor_Statics::NewProp_ProcessingPhase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassProcessor_Statics::NewProp_ExecutionOrder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassProcessor_Statics::NewProp_bAutoRegisterWithProcessingPhases,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassProcessor_Statics::NewProp_bRequiresGameThreadExecution,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassProcessor_Statics::NewProp_bCanShowUpInSettings,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassProcessor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassProcessor_Statics::ClassParams = {
		&UMassProcessor::StaticClass,
		"Mass",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMassProcessor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMassProcessor_Statics::PropPointers),
		0,
		0x401030A7u,
		METADATA_PARAMS(Z_Construct_UClass_UMassProcessor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassProcessor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassProcessor()
	{
		if (!Z_Registration_Info_UClass_UMassProcessor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassProcessor.OuterSingleton, Z_Construct_UClass_UMassProcessor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassProcessor.OuterSingleton;
	}
	template<> MASSENTITY_API UClass* StaticClass<UMassProcessor>()
	{
		return UMassProcessor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassProcessor);
	UMassProcessor::~UMassProcessor() {}
	void UMassCompositeProcessor::StaticRegisterNativesUMassCompositeProcessor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassCompositeProcessor);
	UClass* Z_Construct_UClass_UMassCompositeProcessor_NoRegister()
	{
		return UMassCompositeProcessor::StaticClass();
	}
	struct Z_Construct_UClass_UMassCompositeProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChildPipeline_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChildPipeline;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_GroupName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassCompositeProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_MassEntity,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassCompositeProcessor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MassProcessor.h" },
		{ "ModuleRelativePath", "Public/MassProcessor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassCompositeProcessor_Statics::NewProp_ChildPipeline_MetaData[] = {
		{ "Category", "Mass" },
		{ "ModuleRelativePath", "Public/MassProcessor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassCompositeProcessor_Statics::NewProp_ChildPipeline = { "ChildPipeline", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassCompositeProcessor, ChildPipeline), Z_Construct_UScriptStruct_FMassRuntimePipeline, METADATA_PARAMS(Z_Construct_UClass_UMassCompositeProcessor_Statics::NewProp_ChildPipeline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassCompositeProcessor_Statics::NewProp_ChildPipeline_MetaData)) }; // 113845191
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassCompositeProcessor_Statics::NewProp_GroupName_MetaData[] = {
		{ "Comment", "/** Group name that will be used when resolving processor dependencies and grouping */" },
		{ "ModuleRelativePath", "Public/MassProcessor.h" },
		{ "ToolTip", "Group name that will be used when resolving processor dependencies and grouping" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMassCompositeProcessor_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassCompositeProcessor, GroupName), METADATA_PARAMS(Z_Construct_UClass_UMassCompositeProcessor_Statics::NewProp_GroupName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassCompositeProcessor_Statics::NewProp_GroupName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassCompositeProcessor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassCompositeProcessor_Statics::NewProp_ChildPipeline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassCompositeProcessor_Statics::NewProp_GroupName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassCompositeProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassCompositeProcessor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassCompositeProcessor_Statics::ClassParams = {
		&UMassCompositeProcessor::StaticClass,
		"Mass",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMassCompositeProcessor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMassCompositeProcessor_Statics::PropPointers),
		0,
		0x401030A6u,
		METADATA_PARAMS(Z_Construct_UClass_UMassCompositeProcessor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassCompositeProcessor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassCompositeProcessor()
	{
		if (!Z_Registration_Info_UClass_UMassCompositeProcessor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassCompositeProcessor.OuterSingleton, Z_Construct_UClass_UMassCompositeProcessor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassCompositeProcessor.OuterSingleton;
	}
	template<> MASSENTITY_API UClass* StaticClass<UMassCompositeProcessor>()
	{
		return UMassCompositeProcessor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassCompositeProcessor);
	UMassCompositeProcessor::~UMassCompositeProcessor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntity_Public_MassProcessor_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntity_Public_MassProcessor_h_Statics::ScriptStructInfo[] = {
		{ FMassProcessorExecutionOrder::StaticStruct, Z_Construct_UScriptStruct_FMassProcessorExecutionOrder_Statics::NewStructOps, TEXT("MassProcessorExecutionOrder"), &Z_Registration_Info_UScriptStruct_MassProcessorExecutionOrder, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassProcessorExecutionOrder), 762909384U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntity_Public_MassProcessor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassProcessor, UMassProcessor::StaticClass, TEXT("UMassProcessor"), &Z_Registration_Info_UClass_UMassProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassProcessor), 3804036860U) },
		{ Z_Construct_UClass_UMassCompositeProcessor, UMassCompositeProcessor::StaticClass, TEXT("UMassCompositeProcessor"), &Z_Registration_Info_UClass_UMassCompositeProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassCompositeProcessor), 3499136972U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntity_Public_MassProcessor_h_2237750904(TEXT("/Script/MassEntity"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntity_Public_MassProcessor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntity_Public_MassProcessor_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntity_Public_MassProcessor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntity_Public_MassProcessor_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
