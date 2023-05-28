// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AI/BTTask_StopGameplayBehavior.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_StopGameplayBehavior() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYBEHAVIORSMODULE_API UClass* Z_Construct_UClass_UBTTask_StopGameplayBehavior();
	GAMEPLAYBEHAVIORSMODULE_API UClass* Z_Construct_UClass_UBTTask_StopGameplayBehavior_NoRegister();
	GAMEPLAYBEHAVIORSMODULE_API UClass* Z_Construct_UClass_UGameplayBehavior_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GameplayBehaviorsModule();
// End Cross Module References
	void UBTTask_StopGameplayBehavior::StaticRegisterNativesUBTTask_StopGameplayBehavior()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_StopGameplayBehavior);
	UClass* Z_Construct_UClass_UBTTask_StopGameplayBehavior_NoRegister()
	{
		return UBTTask_StopGameplayBehavior::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_StopGameplayBehavior_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorToStop_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_BehaviorToStop;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_StopGameplayBehavior_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayBehaviorsModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_StopGameplayBehavior_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n*\n*/" },
		{ "IncludePath", "AI/BTTask_StopGameplayBehavior.h" },
		{ "ModuleRelativePath", "Public/AI/BTTask_StopGameplayBehavior.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_StopGameplayBehavior_Statics::NewProp_BehaviorToStop_MetaData[] = {
		{ "Category", "Node" },
		{ "Comment", "/** If None (the default) will stop any and all gameplay behaviors instigated by the agent*/" },
		{ "ModuleRelativePath", "Public/AI/BTTask_StopGameplayBehavior.h" },
		{ "ToolTip", "If None (the default) will stop any and all gameplay behaviors instigated by the agent" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UBTTask_StopGameplayBehavior_Statics::NewProp_BehaviorToStop = { "BehaviorToStop", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBTTask_StopGameplayBehavior, BehaviorToStop), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayBehavior_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBTTask_StopGameplayBehavior_Statics::NewProp_BehaviorToStop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_StopGameplayBehavior_Statics::NewProp_BehaviorToStop_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_StopGameplayBehavior_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_StopGameplayBehavior_Statics::NewProp_BehaviorToStop,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_StopGameplayBehavior_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_StopGameplayBehavior>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_StopGameplayBehavior_Statics::ClassParams = {
		&UBTTask_StopGameplayBehavior::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTTask_StopGameplayBehavior_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_StopGameplayBehavior_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_StopGameplayBehavior_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_StopGameplayBehavior_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_StopGameplayBehavior()
	{
		if (!Z_Registration_Info_UClass_UBTTask_StopGameplayBehavior.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_StopGameplayBehavior.OuterSingleton, Z_Construct_UClass_UBTTask_StopGameplayBehavior_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTTask_StopGameplayBehavior.OuterSingleton;
	}
	template<> GAMEPLAYBEHAVIORSMODULE_API UClass* StaticClass<UBTTask_StopGameplayBehavior>()
	{
		return UBTTask_StopGameplayBehavior::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_StopGameplayBehavior);
	UBTTask_StopGameplayBehavior::~UBTTask_StopGameplayBehavior() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_AI_BTTask_StopGameplayBehavior_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_AI_BTTask_StopGameplayBehavior_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_StopGameplayBehavior, UBTTask_StopGameplayBehavior::StaticClass, TEXT("UBTTask_StopGameplayBehavior"), &Z_Registration_Info_UClass_UBTTask_StopGameplayBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_StopGameplayBehavior), 3301312426U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_AI_BTTask_StopGameplayBehavior_h_97040507(TEXT("/Script/GameplayBehaviorsModule"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_AI_BTTask_StopGameplayBehavior_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_AI_BTTask_StopGameplayBehavior_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
