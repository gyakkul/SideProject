// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../AIModule/Classes/BehaviorTree/Decorators/BTDecorator_ConeCheck.h"
#include "../../AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTDecorator_ConeCheck() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_ConeCheck();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_ConeCheck_NoRegister();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UBTDecorator_ConeCheck::StaticRegisterNativesUBTDecorator_ConeCheck()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTDecorator_ConeCheck);
	UClass* Z_Construct_UClass_UBTDecorator_ConeCheck_NoRegister()
	{
		return UBTDecorator_ConeCheck::StaticClass();
	}
	struct Z_Construct_UClass_UBTDecorator_ConeCheck_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConeHalfAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ConeHalfAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConeOrigin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConeOrigin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConeDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConeDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Observed_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Observed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTDecorator_ConeCheck_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTDecorator,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_ConeCheck_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Cone check decorator node.\n * A decorator node that bases its condition on a cone check, using Blackboard entries to form the parameters of the check.\n */" },
		{ "IncludePath", "BehaviorTree/Decorators/BTDecorator_ConeCheck.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_ConeCheck.h" },
		{ "ToolTip", "Cone check decorator node.\nA decorator node that bases its condition on a cone check, using Blackboard entries to form the parameters of the check." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_ConeCheck_Statics::NewProp_ConeHalfAngle_MetaData[] = {
		{ "Category", "Decorator" },
		{ "Comment", "/** Angle between cone direction and code cone edge, or a half of the total cone angle */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_ConeCheck.h" },
		{ "ToolTip", "Angle between cone direction and code cone edge, or a half of the total cone angle" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTDecorator_ConeCheck_Statics::NewProp_ConeHalfAngle = { "ConeHalfAngle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBTDecorator_ConeCheck, ConeHalfAngle), METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_ConeCheck_Statics::NewProp_ConeHalfAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_ConeCheck_Statics::NewProp_ConeHalfAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_ConeCheck_Statics::NewProp_ConeOrigin_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "Comment", "/** blackboard key selector */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_ConeCheck.h" },
		{ "ToolTip", "blackboard key selector" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTDecorator_ConeCheck_Statics::NewProp_ConeOrigin = { "ConeOrigin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBTDecorator_ConeCheck, ConeOrigin), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_ConeCheck_Statics::NewProp_ConeOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_ConeCheck_Statics::NewProp_ConeOrigin_MetaData)) }; // 3376895314
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_ConeCheck_Statics::NewProp_ConeDirection_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "Comment", "/** \"None\" means \"use ConeOrigin's direction\" */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_ConeCheck.h" },
		{ "ToolTip", "\"None\" means \"use ConeOrigin's direction\"" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTDecorator_ConeCheck_Statics::NewProp_ConeDirection = { "ConeDirection", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBTDecorator_ConeCheck, ConeDirection), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_ConeCheck_Statics::NewProp_ConeDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_ConeCheck_Statics::NewProp_ConeDirection_MetaData)) }; // 3376895314
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_ConeCheck_Statics::NewProp_Observed_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "Comment", "/** blackboard key selector */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_ConeCheck.h" },
		{ "ToolTip", "blackboard key selector" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTDecorator_ConeCheck_Statics::NewProp_Observed = { "Observed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBTDecorator_ConeCheck, Observed), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_ConeCheck_Statics::NewProp_Observed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_ConeCheck_Statics::NewProp_Observed_MetaData)) }; // 3376895314
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTDecorator_ConeCheck_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_ConeCheck_Statics::NewProp_ConeHalfAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_ConeCheck_Statics::NewProp_ConeOrigin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_ConeCheck_Statics::NewProp_ConeDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_ConeCheck_Statics::NewProp_Observed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTDecorator_ConeCheck_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTDecorator_ConeCheck>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTDecorator_ConeCheck_Statics::ClassParams = {
		&UBTDecorator_ConeCheck::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTDecorator_ConeCheck_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_ConeCheck_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_ConeCheck_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_ConeCheck_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTDecorator_ConeCheck()
	{
		if (!Z_Registration_Info_UClass_UBTDecorator_ConeCheck.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTDecorator_ConeCheck.OuterSingleton, Z_Construct_UClass_UBTDecorator_ConeCheck_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTDecorator_ConeCheck.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<UBTDecorator_ConeCheck>()
	{
		return UBTDecorator_ConeCheck::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTDecorator_ConeCheck);
	UBTDecorator_ConeCheck::~UBTDecorator_ConeCheck() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_ConeCheck_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_ConeCheck_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTDecorator_ConeCheck, UBTDecorator_ConeCheck::StaticClass, TEXT("UBTDecorator_ConeCheck"), &Z_Registration_Info_UClass_UBTDecorator_ConeCheck, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTDecorator_ConeCheck), 1696945686U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_ConeCheck_h_2408602041(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_ConeCheck_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_ConeCheck_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
