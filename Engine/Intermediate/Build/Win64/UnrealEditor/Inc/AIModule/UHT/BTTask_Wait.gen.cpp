// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../AIModule/Classes/BehaviorTree/Tasks/BTTask_Wait.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_Wait() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_Wait();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_Wait_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UBTTask_Wait::StaticRegisterNativesUBTTask_Wait()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_Wait);
	UClass* Z_Construct_UClass_UBTTask_Wait_NoRegister()
	{
		return UBTTask_Wait::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_Wait_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaitTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WaitTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RandomDeviation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RandomDeviation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_Wait_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_Wait_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Wait task node.\n * Wait for the specified time when executed.\n */" },
		{ "IncludePath", "BehaviorTree/Tasks/BTTask_Wait.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_Wait.h" },
		{ "ToolTip", "Wait task node.\nWait for the specified time when executed." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_Wait_Statics::NewProp_WaitTime_MetaData[] = {
		{ "Category", "Wait" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** wait time in seconds */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_Wait.h" },
		{ "ToolTip", "wait time in seconds" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTTask_Wait_Statics::NewProp_WaitTime = { "WaitTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBTTask_Wait, WaitTime), METADATA_PARAMS(Z_Construct_UClass_UBTTask_Wait_Statics::NewProp_WaitTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_Wait_Statics::NewProp_WaitTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_Wait_Statics::NewProp_RandomDeviation_MetaData[] = {
		{ "Category", "Wait" },
		{ "ClampMin", "0" },
		{ "Comment", "/** allows adding random time to wait time */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_Wait.h" },
		{ "ToolTip", "allows adding random time to wait time" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTTask_Wait_Statics::NewProp_RandomDeviation = { "RandomDeviation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBTTask_Wait, RandomDeviation), METADATA_PARAMS(Z_Construct_UClass_UBTTask_Wait_Statics::NewProp_RandomDeviation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_Wait_Statics::NewProp_RandomDeviation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_Wait_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_Wait_Statics::NewProp_WaitTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_Wait_Statics::NewProp_RandomDeviation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_Wait_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_Wait>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_Wait_Statics::ClassParams = {
		&UBTTask_Wait::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTTask_Wait_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_Wait_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_Wait_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_Wait_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_Wait()
	{
		if (!Z_Registration_Info_UClass_UBTTask_Wait.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_Wait.OuterSingleton, Z_Construct_UClass_UBTTask_Wait_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTTask_Wait.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<UBTTask_Wait>()
	{
		return UBTTask_Wait::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_Wait);
	UBTTask_Wait::~UBTTask_Wait() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_Wait_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_Wait_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_Wait, UBTTask_Wait::StaticClass, TEXT("UBTTask_Wait"), &Z_Registration_Info_UClass_UBTTask_Wait, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_Wait), 448981286U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_Wait_h_878135526(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_Wait_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_Wait_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
