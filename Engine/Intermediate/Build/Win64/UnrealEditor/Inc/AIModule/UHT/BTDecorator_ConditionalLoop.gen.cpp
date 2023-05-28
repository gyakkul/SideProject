// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../AIModule/Classes/BehaviorTree/Decorators/BTDecorator_ConditionalLoop.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTDecorator_ConditionalLoop() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_Blackboard();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_ConditionalLoop();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_ConditionalLoop_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UBTDecorator_ConditionalLoop::StaticRegisterNativesUBTDecorator_ConditionalLoop()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTDecorator_ConditionalLoop);
	UClass* Z_Construct_UClass_UBTDecorator_ConditionalLoop_NoRegister()
	{
		return UBTDecorator_ConditionalLoop::StaticClass();
	}
	struct Z_Construct_UClass_UBTDecorator_ConditionalLoop_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTDecorator_ConditionalLoop_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTDecorator_Blackboard,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_ConditionalLoop_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Conditional loop decorator node.\n * A decorator node that loops execution as long as condition is satisfied.\n */" },
		{ "HideCategories", "FlowControl Condition" },
		{ "IncludePath", "BehaviorTree/Decorators/BTDecorator_ConditionalLoop.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_ConditionalLoop.h" },
		{ "ToolTip", "Conditional loop decorator node.\nA decorator node that loops execution as long as condition is satisfied." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTDecorator_ConditionalLoop_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTDecorator_ConditionalLoop>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTDecorator_ConditionalLoop_Statics::ClassParams = {
		&UBTDecorator_ConditionalLoop::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_ConditionalLoop_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_ConditionalLoop_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTDecorator_ConditionalLoop()
	{
		if (!Z_Registration_Info_UClass_UBTDecorator_ConditionalLoop.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTDecorator_ConditionalLoop.OuterSingleton, Z_Construct_UClass_UBTDecorator_ConditionalLoop_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTDecorator_ConditionalLoop.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<UBTDecorator_ConditionalLoop>()
	{
		return UBTDecorator_ConditionalLoop::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTDecorator_ConditionalLoop);
	UBTDecorator_ConditionalLoop::~UBTDecorator_ConditionalLoop() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_ConditionalLoop_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_ConditionalLoop_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTDecorator_ConditionalLoop, UBTDecorator_ConditionalLoop::StaticClass, TEXT("UBTDecorator_ConditionalLoop"), &Z_Registration_Info_UClass_UBTDecorator_ConditionalLoop, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTDecorator_ConditionalLoop), 1170874750U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_ConditionalLoop_h_2295083069(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_ConditionalLoop_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_ConditionalLoop_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
