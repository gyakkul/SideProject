// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../AIModule/Classes/BehaviorTree/Tasks/BTTask_WaitBlackboardTime.h"
#include "../../AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_WaitBlackboardTime() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_Wait();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_WaitBlackboardTime();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_WaitBlackboardTime_NoRegister();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UBTTask_WaitBlackboardTime::StaticRegisterNativesUBTTask_WaitBlackboardTime()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_WaitBlackboardTime);
	UClass* Z_Construct_UClass_UBTTask_WaitBlackboardTime_NoRegister()
	{
		return UBTTask_WaitBlackboardTime::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_WaitBlackboardTime_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlackboardKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BlackboardKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_WaitBlackboardTime_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTask_Wait,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_WaitBlackboardTime_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Wait task node.\n * Wait for the time specified by a Blackboard key when executed.\n */" },
		{ "HideCategories", "Wait" },
		{ "IncludePath", "BehaviorTree/Tasks/BTTask_WaitBlackboardTime.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_WaitBlackboardTime.h" },
		{ "ToolTip", "Wait task node.\nWait for the time specified by a Blackboard key when executed." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_WaitBlackboardTime_Statics::NewProp_BlackboardKey_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "Comment", "/** blackboard key selector */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_WaitBlackboardTime.h" },
		{ "ToolTip", "blackboard key selector" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_WaitBlackboardTime_Statics::NewProp_BlackboardKey = { "BlackboardKey", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBTTask_WaitBlackboardTime, BlackboardKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UBTTask_WaitBlackboardTime_Statics::NewProp_BlackboardKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_WaitBlackboardTime_Statics::NewProp_BlackboardKey_MetaData)) }; // 3376895314
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_WaitBlackboardTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_WaitBlackboardTime_Statics::NewProp_BlackboardKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_WaitBlackboardTime_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_WaitBlackboardTime>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_WaitBlackboardTime_Statics::ClassParams = {
		&UBTTask_WaitBlackboardTime::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTTask_WaitBlackboardTime_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_WaitBlackboardTime_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_WaitBlackboardTime_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_WaitBlackboardTime_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_WaitBlackboardTime()
	{
		if (!Z_Registration_Info_UClass_UBTTask_WaitBlackboardTime.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_WaitBlackboardTime.OuterSingleton, Z_Construct_UClass_UBTTask_WaitBlackboardTime_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTTask_WaitBlackboardTime.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<UBTTask_WaitBlackboardTime>()
	{
		return UBTTask_WaitBlackboardTime::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_WaitBlackboardTime);
	UBTTask_WaitBlackboardTime::~UBTTask_WaitBlackboardTime() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_WaitBlackboardTime_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_WaitBlackboardTime_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_WaitBlackboardTime, UBTTask_WaitBlackboardTime::StaticClass, TEXT("UBTTask_WaitBlackboardTime"), &Z_Registration_Info_UClass_UBTTask_WaitBlackboardTime, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_WaitBlackboardTime), 1375278967U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_WaitBlackboardTime_h_3659333544(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_WaitBlackboardTime_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_WaitBlackboardTime_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
