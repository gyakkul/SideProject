// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlackboardKeyType_GameplayTag.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlackboardKeyType_GameplayTag() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardKeyType();
	GAMEPLAYBEHAVIORSMODULE_API UClass* Z_Construct_UClass_UBlackboardKeyType_GameplayTag();
	GAMEPLAYBEHAVIORSMODULE_API UClass* Z_Construct_UClass_UBlackboardKeyType_GameplayTag_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GameplayBehaviorsModule();
// End Cross Module References
	void UBlackboardKeyType_GameplayTag::StaticRegisterNativesUBlackboardKeyType_GameplayTag()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlackboardKeyType_GameplayTag);
	UClass* Z_Construct_UClass_UBlackboardKeyType_GameplayTag_NoRegister()
	{
		return UBlackboardKeyType_GameplayTag::StaticClass();
	}
	struct Z_Construct_UClass_UBlackboardKeyType_GameplayTag_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlackboardKeyType_GameplayTag_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlackboardKeyType,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayBehaviorsModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlackboardKeyType_GameplayTag_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Blackboard" },
		{ "DisplayName", "Gameplay Tag" },
		{ "IncludePath", "BlackboardKeyType_GameplayTag.h" },
		{ "ModuleRelativePath", "Public/BlackboardKeyType_GameplayTag.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlackboardKeyType_GameplayTag_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlackboardKeyType_GameplayTag>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlackboardKeyType_GameplayTag_Statics::ClassParams = {
		&UBlackboardKeyType_GameplayTag::StaticClass,
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
		0x001030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBlackboardKeyType_GameplayTag_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlackboardKeyType_GameplayTag_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlackboardKeyType_GameplayTag()
	{
		if (!Z_Registration_Info_UClass_UBlackboardKeyType_GameplayTag.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlackboardKeyType_GameplayTag.OuterSingleton, Z_Construct_UClass_UBlackboardKeyType_GameplayTag_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBlackboardKeyType_GameplayTag.OuterSingleton;
	}
	template<> GAMEPLAYBEHAVIORSMODULE_API UClass* StaticClass<UBlackboardKeyType_GameplayTag>()
	{
		return UBlackboardKeyType_GameplayTag::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlackboardKeyType_GameplayTag);
	UBlackboardKeyType_GameplayTag::~UBlackboardKeyType_GameplayTag() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_BlackboardKeyType_GameplayTag_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_BlackboardKeyType_GameplayTag_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBlackboardKeyType_GameplayTag, UBlackboardKeyType_GameplayTag::StaticClass, TEXT("UBlackboardKeyType_GameplayTag"), &Z_Registration_Info_UClass_UBlackboardKeyType_GameplayTag, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlackboardKeyType_GameplayTag), 2234747183U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_BlackboardKeyType_GameplayTag_h_3971140375(TEXT("/Script/GameplayBehaviorsModule"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_BlackboardKeyType_GameplayTag_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_BlackboardKeyType_GameplayTag_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
