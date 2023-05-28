// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../AIModule/Classes/BehaviorTree/Tasks/BTTask_PushPawnAction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_PushPawnAction() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_PawnActionBase();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_PushPawnAction();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_PushPawnAction_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UDEPRECATED_PawnAction_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UBTTask_PushPawnAction::StaticRegisterNativesUBTTask_PushPawnAction()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_PushPawnAction);
	UClass* Z_Construct_UClass_UBTTask_PushPawnAction_NoRegister()
	{
		return UBTTask_PushPawnAction::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_PushPawnAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Action;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_PushPawnAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTask_PawnActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_PushPawnAction_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Action task node.\n * Push pawn action to controller.\n */" },
		{ "IncludePath", "BehaviorTree/Tasks/BTTask_PushPawnAction.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_PushPawnAction.h" },
		{ "ToolTip", "Action task node.\nPush pawn action to controller." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_PushPawnAction_Statics::NewProp_Action_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_PushPawnAction.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBTTask_PushPawnAction_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0026080020080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBTTask_PushPawnAction, Action_DEPRECATED), Z_Construct_UClass_UDEPRECATED_PawnAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBTTask_PushPawnAction_Statics::NewProp_Action_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_PushPawnAction_Statics::NewProp_Action_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_PushPawnAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_PushPawnAction_Statics::NewProp_Action,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_PushPawnAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_PushPawnAction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_PushPawnAction_Statics::ClassParams = {
		&UBTTask_PushPawnAction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTTask_PushPawnAction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_PushPawnAction_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_PushPawnAction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_PushPawnAction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_PushPawnAction()
	{
		if (!Z_Registration_Info_UClass_UBTTask_PushPawnAction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_PushPawnAction.OuterSingleton, Z_Construct_UClass_UBTTask_PushPawnAction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTTask_PushPawnAction.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<UBTTask_PushPawnAction>()
	{
		return UBTTask_PushPawnAction::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_PushPawnAction);
	UBTTask_PushPawnAction::~UBTTask_PushPawnAction() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_PushPawnAction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_PushPawnAction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_PushPawnAction, UBTTask_PushPawnAction::StaticClass, TEXT("UBTTask_PushPawnAction"), &Z_Registration_Info_UClass_UBTTask_PushPawnAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_PushPawnAction), 427140328U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_PushPawnAction_h_975100905(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_PushPawnAction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_PushPawnAction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
