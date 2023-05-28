// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../AIModule/Classes/BehaviorTree/BehaviorTreeComponent.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBehaviorTreeComponent() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeComponent();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBrainComponent();
	AIMODULE_API UClass* Z_Construct_UClass_UBTNode_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	DEFINE_FUNCTION(UBehaviorTreeComponent::execSetDynamicSubtree)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_InjectTag);
		P_GET_OBJECT(UBehaviorTree,Z_Param_BehaviorAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDynamicSubtree(Z_Param_InjectTag,Z_Param_BehaviorAsset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBehaviorTreeComponent::execAddCooldownTagDuration)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_CooldownTag);
		P_GET_PROPERTY(FFloatProperty,Z_Param_CooldownDuration);
		P_GET_UBOOL(Z_Param_bAddToExistingDuration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddCooldownTagDuration(Z_Param_CooldownTag,Z_Param_CooldownDuration,Z_Param_bAddToExistingDuration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBehaviorTreeComponent::execGetTagCooldownEndTime)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_CooldownTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(double*)Z_Param__Result=P_THIS->GetTagCooldownEndTime(Z_Param_CooldownTag);
		P_NATIVE_END;
	}
	void UBehaviorTreeComponent::StaticRegisterNativesUBehaviorTreeComponent()
	{
		UClass* Class = UBehaviorTreeComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddCooldownTagDuration", &UBehaviorTreeComponent::execAddCooldownTagDuration },
			{ "GetTagCooldownEndTime", &UBehaviorTreeComponent::execGetTagCooldownEndTime },
			{ "SetDynamicSubtree", &UBehaviorTreeComponent::execSetDynamicSubtree },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBehaviorTreeComponent_AddCooldownTagDuration_Statics
	{
		struct BehaviorTreeComponent_eventAddCooldownTagDuration_Parms
		{
			FGameplayTag CooldownTag;
			float CooldownDuration;
			bool bAddToExistingDuration;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_CooldownTag;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CooldownDuration;
		static void NewProp_bAddToExistingDuration_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddToExistingDuration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBehaviorTreeComponent_AddCooldownTagDuration_Statics::NewProp_CooldownTag = { "CooldownTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BehaviorTreeComponent_eventAddCooldownTagDuration_Parms, CooldownTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBehaviorTreeComponent_AddCooldownTagDuration_Statics::NewProp_CooldownDuration = { "CooldownDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BehaviorTreeComponent_eventAddCooldownTagDuration_Parms, CooldownDuration), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBehaviorTreeComponent_AddCooldownTagDuration_Statics::NewProp_bAddToExistingDuration_SetBit(void* Obj)
	{
		((BehaviorTreeComponent_eventAddCooldownTagDuration_Parms*)Obj)->bAddToExistingDuration = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBehaviorTreeComponent_AddCooldownTagDuration_Statics::NewProp_bAddToExistingDuration = { "bAddToExistingDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BehaviorTreeComponent_eventAddCooldownTagDuration_Parms), &Z_Construct_UFunction_UBehaviorTreeComponent_AddCooldownTagDuration_Statics::NewProp_bAddToExistingDuration_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBehaviorTreeComponent_AddCooldownTagDuration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviorTreeComponent_AddCooldownTagDuration_Statics::NewProp_CooldownTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviorTreeComponent_AddCooldownTagDuration_Statics::NewProp_CooldownDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviorTreeComponent_AddCooldownTagDuration_Statics::NewProp_bAddToExistingDuration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBehaviorTreeComponent_AddCooldownTagDuration_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Logic" },
		{ "Comment", "/** add to the cooldown tag's duration */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTreeComponent.h" },
		{ "ToolTip", "add to the cooldown tag's duration" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBehaviorTreeComponent_AddCooldownTagDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBehaviorTreeComponent, nullptr, "AddCooldownTagDuration", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBehaviorTreeComponent_AddCooldownTagDuration_Statics::BehaviorTreeComponent_eventAddCooldownTagDuration_Parms), Z_Construct_UFunction_UBehaviorTreeComponent_AddCooldownTagDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviorTreeComponent_AddCooldownTagDuration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBehaviorTreeComponent_AddCooldownTagDuration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviorTreeComponent_AddCooldownTagDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBehaviorTreeComponent_AddCooldownTagDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBehaviorTreeComponent_AddCooldownTagDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBehaviorTreeComponent_GetTagCooldownEndTime_Statics
	{
		struct BehaviorTreeComponent_eventGetTagCooldownEndTime_Parms
		{
			FGameplayTag CooldownTag;
			double ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_CooldownTag;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBehaviorTreeComponent_GetTagCooldownEndTime_Statics::NewProp_CooldownTag = { "CooldownTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BehaviorTreeComponent_eventGetTagCooldownEndTime_Parms, CooldownTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UBehaviorTreeComponent_GetTagCooldownEndTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BehaviorTreeComponent_eventGetTagCooldownEndTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBehaviorTreeComponent_GetTagCooldownEndTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviorTreeComponent_GetTagCooldownEndTime_Statics::NewProp_CooldownTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviorTreeComponent_GetTagCooldownEndTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBehaviorTreeComponent_GetTagCooldownEndTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Logic" },
		{ "Comment", "/** @return the cooldown tag end time, 0.0f if CooldownTag is not found */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTreeComponent.h" },
		{ "ToolTip", "@return the cooldown tag end time, 0.0f if CooldownTag is not found" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBehaviorTreeComponent_GetTagCooldownEndTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBehaviorTreeComponent, nullptr, "GetTagCooldownEndTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBehaviorTreeComponent_GetTagCooldownEndTime_Statics::BehaviorTreeComponent_eventGetTagCooldownEndTime_Parms), Z_Construct_UFunction_UBehaviorTreeComponent_GetTagCooldownEndTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviorTreeComponent_GetTagCooldownEndTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBehaviorTreeComponent_GetTagCooldownEndTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviorTreeComponent_GetTagCooldownEndTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBehaviorTreeComponent_GetTagCooldownEndTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBehaviorTreeComponent_GetTagCooldownEndTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBehaviorTreeComponent_SetDynamicSubtree_Statics
	{
		struct BehaviorTreeComponent_eventSetDynamicSubtree_Parms
		{
			FGameplayTag InjectTag;
			UBehaviorTree* BehaviorAsset;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InjectTag;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BehaviorAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBehaviorTreeComponent_SetDynamicSubtree_Statics::NewProp_InjectTag = { "InjectTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BehaviorTreeComponent_eventSetDynamicSubtree_Parms, InjectTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBehaviorTreeComponent_SetDynamicSubtree_Statics::NewProp_BehaviorAsset = { "BehaviorAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BehaviorTreeComponent_eventSetDynamicSubtree_Parms, BehaviorAsset), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBehaviorTreeComponent_SetDynamicSubtree_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviorTreeComponent_SetDynamicSubtree_Statics::NewProp_InjectTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviorTreeComponent_SetDynamicSubtree_Statics::NewProp_BehaviorAsset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBehaviorTreeComponent_SetDynamicSubtree_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Logic" },
		{ "Comment", "/** assign subtree to RunBehaviorDynamic task specified by tag */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTreeComponent.h" },
		{ "ToolTip", "assign subtree to RunBehaviorDynamic task specified by tag" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBehaviorTreeComponent_SetDynamicSubtree_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBehaviorTreeComponent, nullptr, "SetDynamicSubtree", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBehaviorTreeComponent_SetDynamicSubtree_Statics::BehaviorTreeComponent_eventSetDynamicSubtree_Parms), Z_Construct_UFunction_UBehaviorTreeComponent_SetDynamicSubtree_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviorTreeComponent_SetDynamicSubtree_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBehaviorTreeComponent_SetDynamicSubtree_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviorTreeComponent_SetDynamicSubtree_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBehaviorTreeComponent_SetDynamicSubtree()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBehaviorTreeComponent_SetDynamicSubtree_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBehaviorTreeComponent);
	UClass* Z_Construct_UClass_UBehaviorTreeComponent_NoRegister()
	{
		return UBehaviorTreeComponent::StaticClass();
	}
	struct Z_Construct_UClass_UBehaviorTreeComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_NodeInstances_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeInstances_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NodeInstances;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultBehaviorTreeAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DefaultBehaviorTreeAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBehaviorTreeComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBrainComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBehaviorTreeComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBehaviorTreeComponent_AddCooldownTagDuration, "AddCooldownTagDuration" }, // 1412545137
		{ &Z_Construct_UFunction_UBehaviorTreeComponent_GetTagCooldownEndTime, "GetTagCooldownEndTime" }, // 3965153805
		{ &Z_Construct_UFunction_UBehaviorTreeComponent_SetDynamicSubtree, "SetDynamicSubtree" }, // 3527341765
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBehaviorTreeComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "AI" },
		{ "HideCategories", "Sockets Collision" },
		{ "IncludePath", "BehaviorTree/BehaviorTreeComponent.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTreeComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBehaviorTreeComponent_Statics::NewProp_NodeInstances_Inner = { "NodeInstances", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UBTNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBehaviorTreeComponent_Statics::NewProp_NodeInstances_MetaData[] = {
		{ "Comment", "/** instanced nodes */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTreeComponent.h" },
		{ "ToolTip", "instanced nodes" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBehaviorTreeComponent_Statics::NewProp_NodeInstances = { "NodeInstances", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBehaviorTreeComponent, NodeInstances), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBehaviorTreeComponent_Statics::NewProp_NodeInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviorTreeComponent_Statics::NewProp_NodeInstances_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBehaviorTreeComponent_Statics::NewProp_DefaultBehaviorTreeAsset_MetaData[] = {
		{ "Category", "AI" },
		{ "Comment", "/** data asset defining the tree */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTreeComponent.h" },
		{ "ToolTip", "data asset defining the tree" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBehaviorTreeComponent_Statics::NewProp_DefaultBehaviorTreeAsset = { "DefaultBehaviorTreeAsset", nullptr, (EPropertyFlags)0x0024080000010005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBehaviorTreeComponent, DefaultBehaviorTreeAsset), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBehaviorTreeComponent_Statics::NewProp_DefaultBehaviorTreeAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviorTreeComponent_Statics::NewProp_DefaultBehaviorTreeAsset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBehaviorTreeComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviorTreeComponent_Statics::NewProp_NodeInstances_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviorTreeComponent_Statics::NewProp_NodeInstances,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviorTreeComponent_Statics::NewProp_DefaultBehaviorTreeAsset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBehaviorTreeComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBehaviorTreeComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBehaviorTreeComponent_Statics::ClassParams = {
		&UBehaviorTreeComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBehaviorTreeComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviorTreeComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBehaviorTreeComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviorTreeComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBehaviorTreeComponent()
	{
		if (!Z_Registration_Info_UClass_UBehaviorTreeComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBehaviorTreeComponent.OuterSingleton, Z_Construct_UClass_UBehaviorTreeComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBehaviorTreeComponent.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<UBehaviorTreeComponent>()
	{
		return UBehaviorTreeComponent::StaticClass();
	}
	UBehaviorTreeComponent::~UBehaviorTreeComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBehaviorTreeComponent, UBehaviorTreeComponent::StaticClass, TEXT("UBehaviorTreeComponent"), &Z_Registration_Info_UClass_UBehaviorTreeComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBehaviorTreeComponent), 1277060543U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeComponent_h_1102900319(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
