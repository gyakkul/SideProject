// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../AIModule/Classes/BehaviorTree/Decorators/BTDecorator_DoesPathExist.h"
#include "../../AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTDecorator_DoesPathExist() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_DoesPathExist();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_DoesPathExist_NoRegister();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EPathExistanceQueryType();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationQueryFilter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPathExistanceQueryType;
	static UEnum* EPathExistanceQueryType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPathExistanceQueryType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPathExistanceQueryType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EPathExistanceQueryType, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("EPathExistanceQueryType"));
		}
		return Z_Registration_Info_UEnum_EPathExistanceQueryType.OuterSingleton;
	}
	template<> AIMODULE_API UEnum* StaticEnum<EPathExistanceQueryType::Type>()
	{
		return EPathExistanceQueryType_StaticEnum();
	}
	struct Z_Construct_UEnum_AIModule_EPathExistanceQueryType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AIModule_EPathExistanceQueryType_Statics::Enumerators[] = {
		{ "EPathExistanceQueryType::NavmeshRaycast2D", (int64)EPathExistanceQueryType::NavmeshRaycast2D },
		{ "EPathExistanceQueryType::HierarchicalQuery", (int64)EPathExistanceQueryType::HierarchicalQuery },
		{ "EPathExistanceQueryType::RegularPathFinding", (int64)EPathExistanceQueryType::RegularPathFinding },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AIModule_EPathExistanceQueryType_Statics::Enum_MetaDataParams[] = {
		{ "HierarchicalQuery.Name", "EPathExistanceQueryType::HierarchicalQuery" },
		{ "HierarchicalQuery.ToolTip", "Fast" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_DoesPathExist.h" },
		{ "NavmeshRaycast2D.Name", "EPathExistanceQueryType::NavmeshRaycast2D" },
		{ "NavmeshRaycast2D.ToolTip", "Really Fast" },
		{ "RegularPathFinding.Name", "EPathExistanceQueryType::RegularPathFinding" },
		{ "RegularPathFinding.ToolTip", "Slow" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AIModule_EPathExistanceQueryType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		"EPathExistanceQueryType",
		"EPathExistanceQueryType::Type",
		Z_Construct_UEnum_AIModule_EPathExistanceQueryType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EPathExistanceQueryType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_AIModule_EPathExistanceQueryType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EPathExistanceQueryType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AIModule_EPathExistanceQueryType()
	{
		if (!Z_Registration_Info_UEnum_EPathExistanceQueryType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPathExistanceQueryType.InnerSingleton, Z_Construct_UEnum_AIModule_EPathExistanceQueryType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPathExistanceQueryType.InnerSingleton;
	}
	void UBTDecorator_DoesPathExist::StaticRegisterNativesUBTDecorator_DoesPathExist()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTDecorator_DoesPathExist);
	UClass* Z_Construct_UClass_UBTDecorator_DoesPathExist_NoRegister()
	{
		return UBTDecorator_DoesPathExist::StaticClass();
	}
	struct Z_Construct_UClass_UBTDecorator_DoesPathExist_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlackboardKeyA_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BlackboardKeyA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlackboardKeyB_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BlackboardKeyB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseSelf_MetaData[];
#endif
		static void NewProp_bUseSelf_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSelf;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PathQueryType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_PathQueryType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilterClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_FilterClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTDecorator_DoesPathExist_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTDecorator,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_DoesPathExist_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Cooldown decorator node.\n * A decorator node that bases its condition on whether a path exists between two points from the Blackboard.\n */" },
		{ "IncludePath", "BehaviorTree/Decorators/BTDecorator_DoesPathExist.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_DoesPathExist.h" },
		{ "ToolTip", "Cooldown decorator node.\nA decorator node that bases its condition on whether a path exists between two points from the Blackboard." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_DoesPathExist_Statics::NewProp_BlackboardKeyA_MetaData[] = {
		{ "Category", "Condition" },
		{ "Comment", "/** blackboard key selector */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_DoesPathExist.h" },
		{ "ToolTip", "blackboard key selector" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTDecorator_DoesPathExist_Statics::NewProp_BlackboardKeyA = { "BlackboardKeyA", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBTDecorator_DoesPathExist, BlackboardKeyA), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_DoesPathExist_Statics::NewProp_BlackboardKeyA_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_DoesPathExist_Statics::NewProp_BlackboardKeyA_MetaData)) }; // 3376895314
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_DoesPathExist_Statics::NewProp_BlackboardKeyB_MetaData[] = {
		{ "Category", "Condition" },
		{ "Comment", "/** blackboard key selector */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_DoesPathExist.h" },
		{ "ToolTip", "blackboard key selector" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTDecorator_DoesPathExist_Statics::NewProp_BlackboardKeyB = { "BlackboardKeyB", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBTDecorator_DoesPathExist, BlackboardKeyB), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_DoesPathExist_Statics::NewProp_BlackboardKeyB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_DoesPathExist_Statics::NewProp_BlackboardKeyB_MetaData)) }; // 3376895314
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_DoesPathExist_Statics::NewProp_bUseSelf_MetaData[] = {
		{ "Comment", "// deprecated, set value of blackboard key A on initialization\n" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_DoesPathExist.h" },
		{ "ToolTip", "deprecated, set value of blackboard key A on initialization" },
	};
#endif
	void Z_Construct_UClass_UBTDecorator_DoesPathExist_Statics::NewProp_bUseSelf_SetBit(void* Obj)
	{
		((UBTDecorator_DoesPathExist*)Obj)->bUseSelf = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTDecorator_DoesPathExist_Statics::NewProp_bUseSelf = { "bUseSelf", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UBTDecorator_DoesPathExist), &Z_Construct_UClass_UBTDecorator_DoesPathExist_Statics::NewProp_bUseSelf_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_DoesPathExist_Statics::NewProp_bUseSelf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_DoesPathExist_Statics::NewProp_bUseSelf_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_DoesPathExist_Statics::NewProp_PathQueryType_MetaData[] = {
		{ "Category", "Condition" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_DoesPathExist.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBTDecorator_DoesPathExist_Statics::NewProp_PathQueryType = { "PathQueryType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBTDecorator_DoesPathExist, PathQueryType), Z_Construct_UEnum_AIModule_EPathExistanceQueryType, METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_DoesPathExist_Statics::NewProp_PathQueryType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_DoesPathExist_Statics::NewProp_PathQueryType_MetaData)) }; // 195958863
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_DoesPathExist_Statics::NewProp_FilterClass_MetaData[] = {
		{ "Category", "Node" },
		{ "Comment", "/** \"None\" will result in default filter being used */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_DoesPathExist.h" },
		{ "ToolTip", "\"None\" will result in default filter being used" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UBTDecorator_DoesPathExist_Statics::NewProp_FilterClass = { "FilterClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBTDecorator_DoesPathExist, FilterClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UNavigationQueryFilter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_DoesPathExist_Statics::NewProp_FilterClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_DoesPathExist_Statics::NewProp_FilterClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTDecorator_DoesPathExist_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_DoesPathExist_Statics::NewProp_BlackboardKeyA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_DoesPathExist_Statics::NewProp_BlackboardKeyB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_DoesPathExist_Statics::NewProp_bUseSelf,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_DoesPathExist_Statics::NewProp_PathQueryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_DoesPathExist_Statics::NewProp_FilterClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTDecorator_DoesPathExist_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTDecorator_DoesPathExist>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTDecorator_DoesPathExist_Statics::ClassParams = {
		&UBTDecorator_DoesPathExist::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTDecorator_DoesPathExist_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_DoesPathExist_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_DoesPathExist_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_DoesPathExist_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTDecorator_DoesPathExist()
	{
		if (!Z_Registration_Info_UClass_UBTDecorator_DoesPathExist.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTDecorator_DoesPathExist.OuterSingleton, Z_Construct_UClass_UBTDecorator_DoesPathExist_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTDecorator_DoesPathExist.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<UBTDecorator_DoesPathExist>()
	{
		return UBTDecorator_DoesPathExist::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTDecorator_DoesPathExist);
	UBTDecorator_DoesPathExist::~UBTDecorator_DoesPathExist() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_DoesPathExist_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_DoesPathExist_h_Statics::EnumInfo[] = {
		{ EPathExistanceQueryType_StaticEnum, TEXT("EPathExistanceQueryType"), &Z_Registration_Info_UEnum_EPathExistanceQueryType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 195958863U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_DoesPathExist_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTDecorator_DoesPathExist, UBTDecorator_DoesPathExist::StaticClass, TEXT("UBTDecorator_DoesPathExist"), &Z_Registration_Info_UClass_UBTDecorator_DoesPathExist, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTDecorator_DoesPathExist), 413001699U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_DoesPathExist_h_2964087823(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_DoesPathExist_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_DoesPathExist_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_DoesPathExist_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_DoesPathExist_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
