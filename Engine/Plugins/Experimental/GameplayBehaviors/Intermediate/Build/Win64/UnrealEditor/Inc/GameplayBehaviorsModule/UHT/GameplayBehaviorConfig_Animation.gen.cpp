// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayBehaviorConfig_Animation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayBehaviorConfig_Animation() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	GAMEPLAYBEHAVIORSMODULE_API UClass* Z_Construct_UClass_UGameplayBehaviorConfig();
	GAMEPLAYBEHAVIORSMODULE_API UClass* Z_Construct_UClass_UGameplayBehaviorConfig_Animation();
	GAMEPLAYBEHAVIORSMODULE_API UClass* Z_Construct_UClass_UGameplayBehaviorConfig_Animation_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GameplayBehaviorsModule();
// End Cross Module References
	void UGameplayBehaviorConfig_Animation::StaticRegisterNativesUGameplayBehaviorConfig_Animation()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayBehaviorConfig_Animation);
	UClass* Z_Construct_UClass_UGameplayBehaviorConfig_Animation_NoRegister()
	{
		return UGameplayBehaviorConfig_Animation::StaticClass();
	}
	struct Z_Construct_UClass_UGameplayBehaviorConfig_Animation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimMontage_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_AnimMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartSectionName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_StartSectionName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLoop_MetaData[];
#endif
		static void NewProp_bLoop_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoop;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameplayBehaviorConfig_Animation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayBehaviorConfig,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayBehaviorsModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayBehaviorConfig_Animation_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameplayBehaviorConfig_Animation.h" },
		{ "ModuleRelativePath", "Public/GameplayBehaviorConfig_Animation.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayBehaviorConfig_Animation_Statics::NewProp_AnimMontage_MetaData[] = {
		{ "Category", "SmartObject" },
		{ "Comment", "/*UPROPERTY(EditDefaultsOnly, Category = GameplayBehavior)\n\x09TSubclassOf<UGameplayBehavior> BehaviorClass;*/" },
		{ "ModuleRelativePath", "Public/GameplayBehaviorConfig_Animation.h" },
		{ "ToolTip", "UPROPERTY(EditDefaultsOnly, Category = GameplayBehavior)\n       TSubclassOf<UGameplayBehavior> BehaviorClass;" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UGameplayBehaviorConfig_Animation_Statics::NewProp_AnimMontage = { "AnimMontage", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayBehaviorConfig_Animation, AnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameplayBehaviorConfig_Animation_Statics::NewProp_AnimMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayBehaviorConfig_Animation_Statics::NewProp_AnimMontage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayBehaviorConfig_Animation_Statics::NewProp_PlayRate_MetaData[] = {
		{ "Category", "SmartObject" },
		{ "ModuleRelativePath", "Public/GameplayBehaviorConfig_Animation.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGameplayBehaviorConfig_Animation_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayBehaviorConfig_Animation, PlayRate), METADATA_PARAMS(Z_Construct_UClass_UGameplayBehaviorConfig_Animation_Statics::NewProp_PlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayBehaviorConfig_Animation_Statics::NewProp_PlayRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayBehaviorConfig_Animation_Statics::NewProp_StartSectionName_MetaData[] = {
		{ "Category", "SmartObject" },
		{ "ModuleRelativePath", "Public/GameplayBehaviorConfig_Animation.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UGameplayBehaviorConfig_Animation_Statics::NewProp_StartSectionName = { "StartSectionName", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayBehaviorConfig_Animation, StartSectionName), METADATA_PARAMS(Z_Construct_UClass_UGameplayBehaviorConfig_Animation_Statics::NewProp_StartSectionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayBehaviorConfig_Animation_Statics::NewProp_StartSectionName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayBehaviorConfig_Animation_Statics::NewProp_bLoop_MetaData[] = {
		{ "Category", "SmartObject" },
		{ "ModuleRelativePath", "Public/GameplayBehaviorConfig_Animation.h" },
	};
#endif
	void Z_Construct_UClass_UGameplayBehaviorConfig_Animation_Statics::NewProp_bLoop_SetBit(void* Obj)
	{
		((UGameplayBehaviorConfig_Animation*)Obj)->bLoop = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameplayBehaviorConfig_Animation_Statics::NewProp_bLoop = { "bLoop", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UGameplayBehaviorConfig_Animation), &Z_Construct_UClass_UGameplayBehaviorConfig_Animation_Statics::NewProp_bLoop_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGameplayBehaviorConfig_Animation_Statics::NewProp_bLoop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayBehaviorConfig_Animation_Statics::NewProp_bLoop_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameplayBehaviorConfig_Animation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayBehaviorConfig_Animation_Statics::NewProp_AnimMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayBehaviorConfig_Animation_Statics::NewProp_PlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayBehaviorConfig_Animation_Statics::NewProp_StartSectionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayBehaviorConfig_Animation_Statics::NewProp_bLoop,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameplayBehaviorConfig_Animation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayBehaviorConfig_Animation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayBehaviorConfig_Animation_Statics::ClassParams = {
		&UGameplayBehaviorConfig_Animation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGameplayBehaviorConfig_Animation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayBehaviorConfig_Animation_Statics::PropPointers),
		0,
		0x001030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameplayBehaviorConfig_Animation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayBehaviorConfig_Animation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameplayBehaviorConfig_Animation()
	{
		if (!Z_Registration_Info_UClass_UGameplayBehaviorConfig_Animation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayBehaviorConfig_Animation.OuterSingleton, Z_Construct_UClass_UGameplayBehaviorConfig_Animation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameplayBehaviorConfig_Animation.OuterSingleton;
	}
	template<> GAMEPLAYBEHAVIORSMODULE_API UClass* StaticClass<UGameplayBehaviorConfig_Animation>()
	{
		return UGameplayBehaviorConfig_Animation::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayBehaviorConfig_Animation);
	UGameplayBehaviorConfig_Animation::~UGameplayBehaviorConfig_Animation() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehaviorConfig_Animation_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehaviorConfig_Animation_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayBehaviorConfig_Animation, UGameplayBehaviorConfig_Animation::StaticClass, TEXT("UGameplayBehaviorConfig_Animation"), &Z_Registration_Info_UClass_UGameplayBehaviorConfig_Animation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayBehaviorConfig_Animation), 1236576734U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehaviorConfig_Animation_h_1970697992(TEXT("/Script/GameplayBehaviorsModule"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehaviorConfig_Animation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehaviorConfig_Animation_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
