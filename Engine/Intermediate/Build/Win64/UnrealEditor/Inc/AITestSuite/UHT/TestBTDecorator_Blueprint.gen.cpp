// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BehaviorTree/TestBTDecorator_Blueprint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestBTDecorator_Blueprint() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_BlueprintBase();
	AITESTSUITE_API UClass* Z_Construct_UClass_UTestBTDecorator_Blueprint();
	AITESTSUITE_API UClass* Z_Construct_UClass_UTestBTDecorator_Blueprint_NoRegister();
	AITESTSUITE_API UEnum* Z_Construct_UEnum_AITestSuite_EBPConditionType();
	UPackage* Z_Construct_UPackage__Script_AITestSuite();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBPConditionType;
	static UEnum* EBPConditionType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBPConditionType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBPConditionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AITestSuite_EBPConditionType, (UObject*)Z_Construct_UPackage__Script_AITestSuite(), TEXT("EBPConditionType"));
		}
		return Z_Registration_Info_UEnum_EBPConditionType.OuterSingleton;
	}
	template<> AITESTSUITE_API UEnum* StaticEnum<EBPConditionType>()
	{
		return EBPConditionType_StaticEnum();
	}
	struct Z_Construct_UEnum_AITestSuite_EBPConditionType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AITestSuite_EBPConditionType_Statics::Enumerators[] = {
		{ "EBPConditionType::NoCondition", (int64)EBPConditionType::NoCondition },
		{ "EBPConditionType::TrueCondition", (int64)EBPConditionType::TrueCondition },
		{ "EBPConditionType::FalseCondition", (int64)EBPConditionType::FalseCondition },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AITestSuite_EBPConditionType_Statics::Enum_MetaDataParams[] = {
		{ "FalseCondition.Name", "EBPConditionType::FalseCondition" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTDecorator_Blueprint.h" },
		{ "NoCondition.Name", "EBPConditionType::NoCondition" },
		{ "TrueCondition.Name", "EBPConditionType::TrueCondition" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AITestSuite_EBPConditionType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AITestSuite,
		nullptr,
		"EBPConditionType",
		"EBPConditionType",
		Z_Construct_UEnum_AITestSuite_EBPConditionType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AITestSuite_EBPConditionType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AITestSuite_EBPConditionType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AITestSuite_EBPConditionType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AITestSuite_EBPConditionType()
	{
		if (!Z_Registration_Info_UEnum_EBPConditionType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBPConditionType.InnerSingleton, Z_Construct_UEnum_AITestSuite_EBPConditionType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBPConditionType.InnerSingleton;
	}
	void UTestBTDecorator_Blueprint::StaticRegisterNativesUTestBTDecorator_Blueprint()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTestBTDecorator_Blueprint);
	UClass* Z_Construct_UClass_UTestBTDecorator_Blueprint_NoRegister()
	{
		return UTestBTDecorator_Blueprint::StaticClass();
	}
	struct Z_Construct_UClass_UTestBTDecorator_Blueprint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_BPConditionType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BPConditionType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BPConditionType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LogIndexBecomeRelevant_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LogIndexBecomeRelevant;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LogIndexCeaseRelevant_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LogIndexCeaseRelevant;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LogIndexCalculate_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LogIndexCalculate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObservingKeyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ObservingKeyName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTestBTDecorator_Blueprint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTDecorator_BlueprintBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AITestSuite,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestBTDecorator_Blueprint_Statics::Class_MetaDataParams[] = {
		{ "HiddenNode", "" },
		{ "IncludePath", "BehaviorTree/TestBTDecorator_Blueprint.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTDecorator_Blueprint.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UTestBTDecorator_Blueprint_Statics::NewProp_BPConditionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestBTDecorator_Blueprint_Statics::NewProp_BPConditionType_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTDecorator_Blueprint.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTestBTDecorator_Blueprint_Statics::NewProp_BPConditionType = { "BPConditionType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTestBTDecorator_Blueprint, BPConditionType), Z_Construct_UEnum_AITestSuite_EBPConditionType, METADATA_PARAMS(Z_Construct_UClass_UTestBTDecorator_Blueprint_Statics::NewProp_BPConditionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTDecorator_Blueprint_Statics::NewProp_BPConditionType_MetaData)) }; // 3808221802
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestBTDecorator_Blueprint_Statics::NewProp_LogIndexBecomeRelevant_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTDecorator_Blueprint.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTestBTDecorator_Blueprint_Statics::NewProp_LogIndexBecomeRelevant = { "LogIndexBecomeRelevant", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTestBTDecorator_Blueprint, LogIndexBecomeRelevant), METADATA_PARAMS(Z_Construct_UClass_UTestBTDecorator_Blueprint_Statics::NewProp_LogIndexBecomeRelevant_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTDecorator_Blueprint_Statics::NewProp_LogIndexBecomeRelevant_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestBTDecorator_Blueprint_Statics::NewProp_LogIndexCeaseRelevant_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTDecorator_Blueprint.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTestBTDecorator_Blueprint_Statics::NewProp_LogIndexCeaseRelevant = { "LogIndexCeaseRelevant", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTestBTDecorator_Blueprint, LogIndexCeaseRelevant), METADATA_PARAMS(Z_Construct_UClass_UTestBTDecorator_Blueprint_Statics::NewProp_LogIndexCeaseRelevant_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTDecorator_Blueprint_Statics::NewProp_LogIndexCeaseRelevant_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestBTDecorator_Blueprint_Statics::NewProp_LogIndexCalculate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTDecorator_Blueprint.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTestBTDecorator_Blueprint_Statics::NewProp_LogIndexCalculate = { "LogIndexCalculate", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTestBTDecorator_Blueprint, LogIndexCalculate), METADATA_PARAMS(Z_Construct_UClass_UTestBTDecorator_Blueprint_Statics::NewProp_LogIndexCalculate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTDecorator_Blueprint_Statics::NewProp_LogIndexCalculate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestBTDecorator_Blueprint_Statics::NewProp_ObservingKeyName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/TestBTDecorator_Blueprint.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTestBTDecorator_Blueprint_Statics::NewProp_ObservingKeyName = { "ObservingKeyName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTestBTDecorator_Blueprint, ObservingKeyName), METADATA_PARAMS(Z_Construct_UClass_UTestBTDecorator_Blueprint_Statics::NewProp_ObservingKeyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTDecorator_Blueprint_Statics::NewProp_ObservingKeyName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTestBTDecorator_Blueprint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTDecorator_Blueprint_Statics::NewProp_BPConditionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTDecorator_Blueprint_Statics::NewProp_BPConditionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTDecorator_Blueprint_Statics::NewProp_LogIndexBecomeRelevant,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTDecorator_Blueprint_Statics::NewProp_LogIndexCeaseRelevant,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTDecorator_Blueprint_Statics::NewProp_LogIndexCalculate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestBTDecorator_Blueprint_Statics::NewProp_ObservingKeyName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTestBTDecorator_Blueprint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestBTDecorator_Blueprint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTestBTDecorator_Blueprint_Statics::ClassParams = {
		&UTestBTDecorator_Blueprint::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTestBTDecorator_Blueprint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTDecorator_Blueprint_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTestBTDecorator_Blueprint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTestBTDecorator_Blueprint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTestBTDecorator_Blueprint()
	{
		if (!Z_Registration_Info_UClass_UTestBTDecorator_Blueprint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTestBTDecorator_Blueprint.OuterSingleton, Z_Construct_UClass_UTestBTDecorator_Blueprint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTestBTDecorator_Blueprint.OuterSingleton;
	}
	template<> AITESTSUITE_API UClass* StaticClass<UTestBTDecorator_Blueprint>()
	{
		return UTestBTDecorator_Blueprint::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTestBTDecorator_Blueprint);
	UTestBTDecorator_Blueprint::~UTestBTDecorator_Blueprint() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTDecorator_Blueprint_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTDecorator_Blueprint_h_Statics::EnumInfo[] = {
		{ EBPConditionType_StaticEnum, TEXT("EBPConditionType"), &Z_Registration_Info_UEnum_EBPConditionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3808221802U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTDecorator_Blueprint_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTestBTDecorator_Blueprint, UTestBTDecorator_Blueprint::StaticClass, TEXT("UTestBTDecorator_Blueprint"), &Z_Registration_Info_UClass_UTestBTDecorator_Blueprint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTestBTDecorator_Blueprint), 2852936443U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTDecorator_Blueprint_h_477710874(TEXT("/Script/AITestSuite"),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTDecorator_Blueprint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTDecorator_Blueprint_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTDecorator_Blueprint_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTDecorator_Blueprint_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
