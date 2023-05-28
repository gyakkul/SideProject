// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../AIModule/Classes/BehaviorTree/BTService.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTService() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTAuxiliaryNode();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UBTService::StaticRegisterNativesUBTService()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTService);
	UClass* Z_Construct_UClass_UBTService_NoRegister()
	{
		return UBTService::StaticClass();
	}
	struct Z_Construct_UClass_UBTService_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Interval_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Interval;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RandomDeviation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RandomDeviation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCallTickOnSearchStart_MetaData[];
#endif
		static void NewProp_bCallTickOnSearchStart_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCallTickOnSearchStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRestartTimerOnEachActivation_MetaData[];
#endif
		static void NewProp_bRestartTimerOnEachActivation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRestartTimerOnEachActivation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTService_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTAuxiliaryNode,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n *\x09""Behavior Tree service nodes is designed to perform \"background\" tasks that update AI's knowledge.\n *\n *  Services are being executed when underlying branch of behavior tree becomes active,\n *  but unlike tasks they don't return any results and can't directly affect execution flow.\n *\n *  Usually they perform periodical checks (see TickNode) and often store results in blackboard.\n *  If any decorator node below requires results of check beforehand, use OnSearchStart function.\n *   Keep in mind that any checks performed there have to be instantaneous!\n *\x09\n *  Other typical use case is creating a marker when specific branch is being executed\n *  (see OnBecomeRelevant, OnCeaseRelevant), by setting a flag in blackboard.\n *\n *  Because some of them can be instanced for specific AI, following virtual functions are not marked as const:\n *   - OnBecomeRelevant (from UBTAuxiliaryNode)\n *   - OnCeaseRelevant (from UBTAuxiliaryNode)\n *   - TickNode (from UBTAuxiliaryNode)\n *   - OnSearchStart\n *\n *  If your node is not being instanced (default behavior), DO NOT change any properties of object within those functions!\n *  Template nodes are shared across all behavior tree components using the same tree asset and must store\n *  their runtime properties in provided NodeMemory block (allocation size determined by GetInstanceMemorySize() )\n */" },
		{ "IncludePath", "BehaviorTree/BTService.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTService.h" },
		{ "ToolTip", "Behavior Tree service nodes is designed to perform \"background\" tasks that update AI's knowledge.\n\nServices are being executed when underlying branch of behavior tree becomes active,\nbut unlike tasks they don't return any results and can't directly affect execution flow.\n\nUsually they perform periodical checks (see TickNode) and often store results in blackboard.\nIf any decorator node below requires results of check beforehand, use OnSearchStart function.\nKeep in mind that any checks performed there have to be instantaneous!\n\nOther typical use case is creating a marker when specific branch is being executed\n(see OnBecomeRelevant, OnCeaseRelevant), by setting a flag in blackboard.\n\nBecause some of them can be instanced for specific AI, following virtual functions are not marked as const:\n- OnBecomeRelevant (from UBTAuxiliaryNode)\n- OnCeaseRelevant (from UBTAuxiliaryNode)\n- TickNode (from UBTAuxiliaryNode)\n- OnSearchStart\n\nIf your node is not being instanced (default behavior), DO NOT change any properties of object within those functions!\nTemplate nodes are shared across all behavior tree components using the same tree asset and must store\ntheir runtime properties in provided NodeMemory block (allocation size determined by GetInstanceMemorySize() )" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_Statics::NewProp_Interval_MetaData[] = {
		{ "Category", "Service" },
		{ "ClampMin", "0.001" },
		{ "Comment", "/** defines time span between subsequent ticks of the service */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTService.h" },
		{ "ToolTip", "defines time span between subsequent ticks of the service" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTService_Statics::NewProp_Interval = { "Interval", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBTService, Interval), METADATA_PARAMS(Z_Construct_UClass_UBTService_Statics::NewProp_Interval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_Statics::NewProp_Interval_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_Statics::NewProp_RandomDeviation_MetaData[] = {
		{ "Category", "Service" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** adds random range to service's Interval */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTService.h" },
		{ "ToolTip", "adds random range to service's Interval" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTService_Statics::NewProp_RandomDeviation = { "RandomDeviation", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBTService, RandomDeviation), METADATA_PARAMS(Z_Construct_UClass_UBTService_Statics::NewProp_RandomDeviation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_Statics::NewProp_RandomDeviation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_Statics::NewProp_bCallTickOnSearchStart_MetaData[] = {
		{ "Category", "Service" },
		{ "Comment", "/** call Tick event when task search enters this node (SearchStart will be called as well) */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTService.h" },
		{ "ToolTip", "call Tick event when task search enters this node (SearchStart will be called as well)" },
	};
#endif
	void Z_Construct_UClass_UBTService_Statics::NewProp_bCallTickOnSearchStart_SetBit(void* Obj)
	{
		((UBTService*)Obj)->bCallTickOnSearchStart = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTService_Statics::NewProp_bCallTickOnSearchStart = { "bCallTickOnSearchStart", nullptr, (EPropertyFlags)0x00200c0000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UBTService), &Z_Construct_UClass_UBTService_Statics::NewProp_bCallTickOnSearchStart_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBTService_Statics::NewProp_bCallTickOnSearchStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_Statics::NewProp_bCallTickOnSearchStart_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_Statics::NewProp_bRestartTimerOnEachActivation_MetaData[] = {
		{ "Category", "Service" },
		{ "Comment", "/** if set, next tick time will be always reset to service's interval when node is activated */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTService.h" },
		{ "ToolTip", "if set, next tick time will be always reset to service's interval when node is activated" },
	};
#endif
	void Z_Construct_UClass_UBTService_Statics::NewProp_bRestartTimerOnEachActivation_SetBit(void* Obj)
	{
		((UBTService*)Obj)->bRestartTimerOnEachActivation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTService_Statics::NewProp_bRestartTimerOnEachActivation = { "bRestartTimerOnEachActivation", nullptr, (EPropertyFlags)0x00200c0000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UBTService), &Z_Construct_UClass_UBTService_Statics::NewProp_bRestartTimerOnEachActivation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBTService_Statics::NewProp_bRestartTimerOnEachActivation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_Statics::NewProp_bRestartTimerOnEachActivation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTService_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_Statics::NewProp_Interval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_Statics::NewProp_RandomDeviation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_Statics::NewProp_bCallTickOnSearchStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_Statics::NewProp_bRestartTimerOnEachActivation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTService_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTService>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTService_Statics::ClassParams = {
		&UBTService::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTService_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UBTService_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTService()
	{
		if (!Z_Registration_Info_UClass_UBTService.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTService.OuterSingleton, Z_Construct_UClass_UBTService_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTService.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<UBTService>()
	{
		return UBTService::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTService);
	UBTService::~UBTService() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTService_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTService_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTService, UBTService::StaticClass, TEXT("UBTService"), &Z_Registration_Info_UClass_UBTService, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTService), 2081286369U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTService_h_3141683879(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTService_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTService_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
