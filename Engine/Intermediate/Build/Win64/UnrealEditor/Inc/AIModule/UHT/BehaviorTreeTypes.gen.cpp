// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBehaviorTreeTypes() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeTypes();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeTypes_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardKeyType_NoRegister();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EBTFlowAbortMode();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EBTNodeResult();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBTNodeResult;
	static UEnum* EBTNodeResult_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBTNodeResult.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBTNodeResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EBTNodeResult, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("EBTNodeResult"));
		}
		return Z_Registration_Info_UEnum_EBTNodeResult.OuterSingleton;
	}
	template<> AIMODULE_API UEnum* StaticEnum<EBTNodeResult::Type>()
	{
		return EBTNodeResult_StaticEnum();
	}
	struct Z_Construct_UEnum_AIModule_EBTNodeResult_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AIModule_EBTNodeResult_Statics::Enumerators[] = {
		{ "EBTNodeResult::Succeeded", (int64)EBTNodeResult::Succeeded },
		{ "EBTNodeResult::Failed", (int64)EBTNodeResult::Failed },
		{ "EBTNodeResult::Aborted", (int64)EBTNodeResult::Aborted },
		{ "EBTNodeResult::InProgress", (int64)EBTNodeResult::InProgress },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AIModule_EBTNodeResult_Statics::Enum_MetaDataParams[] = {
		{ "Aborted.Comment", "// finished aborting = failure\n" },
		{ "Aborted.Name", "EBTNodeResult::Aborted" },
		{ "Aborted.ToolTip", "finished aborting = failure" },
		{ "BlueprintType", "true" },
		{ "Comment", "// keep in sync with DescribeNodeResult()\n" },
		{ "Failed.Comment", "// finished as failure\n" },
		{ "Failed.Name", "EBTNodeResult::Failed" },
		{ "Failed.ToolTip", "finished as failure" },
		{ "InProgress.Comment", "// not finished yet\n" },
		{ "InProgress.Name", "EBTNodeResult::InProgress" },
		{ "InProgress.ToolTip", "not finished yet" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTreeTypes.h" },
		{ "Succeeded.Comment", "// finished as success\n" },
		{ "Succeeded.Name", "EBTNodeResult::Succeeded" },
		{ "Succeeded.ToolTip", "finished as success" },
		{ "ToolTip", "keep in sync with DescribeNodeResult()" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AIModule_EBTNodeResult_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		"EBTNodeResult",
		"EBTNodeResult::Type",
		Z_Construct_UEnum_AIModule_EBTNodeResult_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EBTNodeResult_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_AIModule_EBTNodeResult_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EBTNodeResult_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AIModule_EBTNodeResult()
	{
		if (!Z_Registration_Info_UEnum_EBTNodeResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBTNodeResult.InnerSingleton, Z_Construct_UEnum_AIModule_EBTNodeResult_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBTNodeResult.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBTFlowAbortMode;
	static UEnum* EBTFlowAbortMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBTFlowAbortMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBTFlowAbortMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EBTFlowAbortMode, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("EBTFlowAbortMode"));
		}
		return Z_Registration_Info_UEnum_EBTFlowAbortMode.OuterSingleton;
	}
	template<> AIMODULE_API UEnum* StaticEnum<EBTFlowAbortMode::Type>()
	{
		return EBTFlowAbortMode_StaticEnum();
	}
	struct Z_Construct_UEnum_AIModule_EBTFlowAbortMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AIModule_EBTFlowAbortMode_Statics::Enumerators[] = {
		{ "EBTFlowAbortMode::None", (int64)EBTFlowAbortMode::None },
		{ "EBTFlowAbortMode::LowerPriority", (int64)EBTFlowAbortMode::LowerPriority },
		{ "EBTFlowAbortMode::Self", (int64)EBTFlowAbortMode::Self },
		{ "EBTFlowAbortMode::Both", (int64)EBTFlowAbortMode::Both },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AIModule_EBTFlowAbortMode_Statics::Enum_MetaDataParams[] = {
		{ "Both.DisplayName", "Both" },
		{ "Both.Name", "EBTFlowAbortMode::Both" },
		{ "Comment", "// keep in sync with DescribeFlowAbortMode()\n" },
		{ "LowerPriority.DisplayName", "Lower Priority" },
		{ "LowerPriority.Name", "EBTFlowAbortMode::LowerPriority" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTreeTypes.h" },
		{ "None.DisplayName", "Nothing" },
		{ "None.Name", "EBTFlowAbortMode::None" },
		{ "Self.DisplayName", "Self" },
		{ "Self.Name", "EBTFlowAbortMode::Self" },
		{ "ToolTip", "keep in sync with DescribeFlowAbortMode()" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AIModule_EBTFlowAbortMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		"EBTFlowAbortMode",
		"EBTFlowAbortMode::Type",
		Z_Construct_UEnum_AIModule_EBTFlowAbortMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EBTFlowAbortMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_AIModule_EBTFlowAbortMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EBTFlowAbortMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AIModule_EBTFlowAbortMode()
	{
		if (!Z_Registration_Info_UEnum_EBTFlowAbortMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBTFlowAbortMode.InnerSingleton, Z_Construct_UEnum_AIModule_EBTFlowAbortMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBTFlowAbortMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BlackboardKeySelector;
class UScriptStruct* FBlackboardKeySelector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BlackboardKeySelector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BlackboardKeySelector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlackboardKeySelector, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("BlackboardKeySelector"));
	}
	return Z_Registration_Info_UScriptStruct_BlackboardKeySelector.OuterSingleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FBlackboardKeySelector>()
{
	return FBlackboardKeySelector::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AllowedTypes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllowedTypes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllowedTypes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedKeyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SelectedKeyName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedKeyType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_SelectedKeyType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedKeyID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SelectedKeyID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNoneIsAllowedValue_MetaData[];
#endif
		static void NewProp_bNoneIsAllowedValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNoneIsAllowedValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** helper struct for defining types of allowed blackboard entries\n *  (e.g. only entries holding points and objects derived form actor class) */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTreeTypes.h" },
		{ "ToolTip", "helper struct for defining types of allowed blackboard entries\n(e.g. only entries holding points and objects derived form actor class)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlackboardKeySelector>();
	}
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::NewProp_AllowedTypes_Inner = { "AllowedTypes", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UBlackboardKeyType_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::NewProp_AllowedTypes_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "Comment", "/** array of allowed types with additional properties (e.g. uobject's base class) \n\x09  * EditAnywhere is required for FBlackboardSelectorDetails::CacheBlackboardData() */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTreeTypes.h" },
		{ "ToolTip", "array of allowed types with additional properties (e.g. uobject's base class)\nEditAnywhere is required for FBlackboardSelectorDetails::CacheBlackboardData()" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::NewProp_AllowedTypes = { "AllowedTypes", nullptr, (EPropertyFlags)0x0014000000002005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBlackboardKeySelector, AllowedTypes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::NewProp_AllowedTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::NewProp_AllowedTypes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::NewProp_SelectedKeyName_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "Comment", "/** name of selected key */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTreeTypes.h" },
		{ "ToolTip", "name of selected key" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::NewProp_SelectedKeyName = { "SelectedKeyName", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBlackboardKeySelector, SelectedKeyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::NewProp_SelectedKeyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::NewProp_SelectedKeyName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::NewProp_SelectedKeyType_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "Comment", "/** class of selected key  */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTreeTypes.h" },
		{ "ToolTip", "class of selected key" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::NewProp_SelectedKeyType = { "SelectedKeyType", nullptr, (EPropertyFlags)0x0014000000002805, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBlackboardKeySelector, SelectedKeyType), Z_Construct_UClass_UClass, Z_Construct_UClass_UBlackboardKeyType_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::NewProp_SelectedKeyType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::NewProp_SelectedKeyType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::NewProp_SelectedKeyID_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ClampMin", "0" },
		{ "Comment", "/** ID of selected key */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTreeTypes.h" },
		{ "ToolTip", "ID of selected key" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::NewProp_SelectedKeyID = { "SelectedKeyID", nullptr, (EPropertyFlags)0x0020080000002805, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBlackboardKeySelector, SelectedKeyID), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::NewProp_SelectedKeyID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::NewProp_SelectedKeyID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::NewProp_bNoneIsAllowedValue_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTreeTypes.h" },
		{ "Tooltip", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::NewProp_bNoneIsAllowedValue_SetBit(void* Obj)
	{
		((FBlackboardKeySelector*)Obj)->bNoneIsAllowedValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::NewProp_bNoneIsAllowedValue = { "bNoneIsAllowedValue", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FBlackboardKeySelector), &Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::NewProp_bNoneIsAllowedValue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::NewProp_bNoneIsAllowedValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::NewProp_bNoneIsAllowedValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::NewProp_AllowedTypes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::NewProp_AllowedTypes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::NewProp_SelectedKeyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::NewProp_SelectedKeyType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::NewProp_SelectedKeyID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::NewProp_bNoneIsAllowedValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		&NewStructOps,
		"BlackboardKeySelector",
		sizeof(FBlackboardKeySelector),
		alignof(FBlackboardKeySelector),
		Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector()
	{
		if (!Z_Registration_Info_UScriptStruct_BlackboardKeySelector.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BlackboardKeySelector.InnerSingleton, Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BlackboardKeySelector.InnerSingleton;
	}
	void UBehaviorTreeTypes::StaticRegisterNativesUBehaviorTreeTypes()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBehaviorTreeTypes);
	UClass* Z_Construct_UClass_UBehaviorTreeTypes_NoRegister()
	{
		return UBehaviorTreeTypes::StaticClass();
	}
	struct Z_Construct_UClass_UBehaviorTreeTypes_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBehaviorTreeTypes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBehaviorTreeTypes_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTree/BehaviorTreeTypes.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BehaviorTreeTypes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBehaviorTreeTypes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBehaviorTreeTypes>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBehaviorTreeTypes_Statics::ClassParams = {
		&UBehaviorTreeTypes::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UBehaviorTreeTypes_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviorTreeTypes_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBehaviorTreeTypes()
	{
		if (!Z_Registration_Info_UClass_UBehaviorTreeTypes.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBehaviorTreeTypes.OuterSingleton, Z_Construct_UClass_UBehaviorTreeTypes_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBehaviorTreeTypes.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<UBehaviorTreeTypes>()
	{
		return UBehaviorTreeTypes::StaticClass();
	}
	UBehaviorTreeTypes::UBehaviorTreeTypes(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBehaviorTreeTypes);
	UBehaviorTreeTypes::~UBehaviorTreeTypes() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeTypes_h_Statics::EnumInfo[] = {
		{ EBTNodeResult_StaticEnum, TEXT("EBTNodeResult"), &Z_Registration_Info_UEnum_EBTNodeResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2843222845U) },
		{ EBTFlowAbortMode_StaticEnum, TEXT("EBTFlowAbortMode"), &Z_Registration_Info_UEnum_EBTFlowAbortMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4294071593U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeTypes_h_Statics::ScriptStructInfo[] = {
		{ FBlackboardKeySelector::StaticStruct, Z_Construct_UScriptStruct_FBlackboardKeySelector_Statics::NewStructOps, TEXT("BlackboardKeySelector"), &Z_Registration_Info_UScriptStruct_BlackboardKeySelector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBlackboardKeySelector), 3376895314U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeTypes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBehaviorTreeTypes, UBehaviorTreeTypes::StaticClass, TEXT("UBehaviorTreeTypes"), &Z_Registration_Info_UClass_UBehaviorTreeTypes, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBehaviorTreeTypes), 423966834U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeTypes_h_2060407175(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeTypes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeTypes_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BehaviorTreeTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
