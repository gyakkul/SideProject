// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../AIModule/Classes/BehaviorTree/Decorators/BTDecorator_CompareBBEntries.h"
#include "../../AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTDecorator_CompareBBEntries() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_CompareBBEntries();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_CompareBBEntries_NoRegister();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EBlackBoardEntryComparison();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBlackBoardEntryComparison;
	static UEnum* EBlackBoardEntryComparison_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBlackBoardEntryComparison.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBlackBoardEntryComparison.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EBlackBoardEntryComparison, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("EBlackBoardEntryComparison"));
		}
		return Z_Registration_Info_UEnum_EBlackBoardEntryComparison.OuterSingleton;
	}
	template<> AIMODULE_API UEnum* StaticEnum<EBlackBoardEntryComparison::Type>()
	{
		return EBlackBoardEntryComparison_StaticEnum();
	}
	struct Z_Construct_UEnum_AIModule_EBlackBoardEntryComparison_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AIModule_EBlackBoardEntryComparison_Statics::Enumerators[] = {
		{ "EBlackBoardEntryComparison::Equal", (int64)EBlackBoardEntryComparison::Equal },
		{ "EBlackBoardEntryComparison::NotEqual", (int64)EBlackBoardEntryComparison::NotEqual },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AIModule_EBlackBoardEntryComparison_Statics::Enum_MetaDataParams[] = {
		{ "Equal.DisplayName", "Is Equal To" },
		{ "Equal.Name", "EBlackBoardEntryComparison::Equal" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_CompareBBEntries.h" },
		{ "NotEqual.DisplayName", "Is Not Equal To" },
		{ "NotEqual.Name", "EBlackBoardEntryComparison::NotEqual" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AIModule_EBlackBoardEntryComparison_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		"EBlackBoardEntryComparison",
		"EBlackBoardEntryComparison::Type",
		Z_Construct_UEnum_AIModule_EBlackBoardEntryComparison_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EBlackBoardEntryComparison_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_AIModule_EBlackBoardEntryComparison_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EBlackBoardEntryComparison_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AIModule_EBlackBoardEntryComparison()
	{
		if (!Z_Registration_Info_UEnum_EBlackBoardEntryComparison.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBlackBoardEntryComparison.InnerSingleton, Z_Construct_UEnum_AIModule_EBlackBoardEntryComparison_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBlackBoardEntryComparison.InnerSingleton;
	}
	void UBTDecorator_CompareBBEntries::StaticRegisterNativesUBTDecorator_CompareBBEntries()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTDecorator_CompareBBEntries);
	UClass* Z_Construct_UClass_UBTDecorator_CompareBBEntries_NoRegister()
	{
		return UBTDecorator_CompareBBEntries::StaticClass();
	}
	struct Z_Construct_UClass_UBTDecorator_CompareBBEntries_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Operator_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Operator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlackboardKeyA_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BlackboardKeyA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlackboardKeyB_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BlackboardKeyB;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTDecorator_CompareBBEntries_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTDecorator,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_CompareBBEntries_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Blackboard comparison decorator node.\n * A decorator node that bases its condition on a comparison between two Blackboard keys.\n */" },
		{ "HideCategories", "Condition" },
		{ "IncludePath", "BehaviorTree/Decorators/BTDecorator_CompareBBEntries.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_CompareBBEntries.h" },
		{ "ToolTip", "Blackboard comparison decorator node.\nA decorator node that bases its condition on a comparison between two Blackboard keys." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_CompareBBEntries_Statics::NewProp_Operator_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "Comment", "/** operation type */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_CompareBBEntries.h" },
		{ "ToolTip", "operation type" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBTDecorator_CompareBBEntries_Statics::NewProp_Operator = { "Operator", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBTDecorator_CompareBBEntries, Operator), Z_Construct_UEnum_AIModule_EBlackBoardEntryComparison, METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_CompareBBEntries_Statics::NewProp_Operator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_CompareBBEntries_Statics::NewProp_Operator_MetaData)) }; // 1838036359
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_CompareBBEntries_Statics::NewProp_BlackboardKeyA_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "Comment", "/** blackboard key selector */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_CompareBBEntries.h" },
		{ "ToolTip", "blackboard key selector" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTDecorator_CompareBBEntries_Statics::NewProp_BlackboardKeyA = { "BlackboardKeyA", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBTDecorator_CompareBBEntries, BlackboardKeyA), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_CompareBBEntries_Statics::NewProp_BlackboardKeyA_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_CompareBBEntries_Statics::NewProp_BlackboardKeyA_MetaData)) }; // 3376895314
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_CompareBBEntries_Statics::NewProp_BlackboardKeyB_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "Comment", "/** blackboard key selector */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_CompareBBEntries.h" },
		{ "ToolTip", "blackboard key selector" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTDecorator_CompareBBEntries_Statics::NewProp_BlackboardKeyB = { "BlackboardKeyB", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBTDecorator_CompareBBEntries, BlackboardKeyB), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_CompareBBEntries_Statics::NewProp_BlackboardKeyB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_CompareBBEntries_Statics::NewProp_BlackboardKeyB_MetaData)) }; // 3376895314
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTDecorator_CompareBBEntries_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_CompareBBEntries_Statics::NewProp_Operator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_CompareBBEntries_Statics::NewProp_BlackboardKeyA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_CompareBBEntries_Statics::NewProp_BlackboardKeyB,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTDecorator_CompareBBEntries_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTDecorator_CompareBBEntries>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTDecorator_CompareBBEntries_Statics::ClassParams = {
		&UBTDecorator_CompareBBEntries::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTDecorator_CompareBBEntries_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_CompareBBEntries_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_CompareBBEntries_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_CompareBBEntries_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTDecorator_CompareBBEntries()
	{
		if (!Z_Registration_Info_UClass_UBTDecorator_CompareBBEntries.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTDecorator_CompareBBEntries.OuterSingleton, Z_Construct_UClass_UBTDecorator_CompareBBEntries_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTDecorator_CompareBBEntries.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<UBTDecorator_CompareBBEntries>()
	{
		return UBTDecorator_CompareBBEntries::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTDecorator_CompareBBEntries);
	UBTDecorator_CompareBBEntries::~UBTDecorator_CompareBBEntries() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_CompareBBEntries_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_CompareBBEntries_h_Statics::EnumInfo[] = {
		{ EBlackBoardEntryComparison_StaticEnum, TEXT("EBlackBoardEntryComparison"), &Z_Registration_Info_UEnum_EBlackBoardEntryComparison, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1838036359U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_CompareBBEntries_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTDecorator_CompareBBEntries, UBTDecorator_CompareBBEntries::StaticClass, TEXT("UBTDecorator_CompareBBEntries"), &Z_Registration_Info_UClass_UBTDecorator_CompareBBEntries, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTDecorator_CompareBBEntries), 2669311009U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_CompareBBEntries_h_349382643(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_CompareBBEntries_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_CompareBBEntries_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_CompareBBEntries_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_CompareBBEntries_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
