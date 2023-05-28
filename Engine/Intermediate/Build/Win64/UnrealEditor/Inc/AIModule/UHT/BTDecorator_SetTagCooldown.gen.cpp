// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../AIModule/Classes/BehaviorTree/Decorators/BTDecorator_SetTagCooldown.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTDecorator_SetTagCooldown() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_SetTagCooldown();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_SetTagCooldown_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UBTDecorator_SetTagCooldown::StaticRegisterNativesUBTDecorator_SetTagCooldown()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTDecorator_SetTagCooldown);
	UClass* Z_Construct_UClass_UBTDecorator_SetTagCooldown_NoRegister()
	{
		return UBTDecorator_SetTagCooldown::StaticClass();
	}
	struct Z_Construct_UClass_UBTDecorator_SetTagCooldown_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CooldownTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CooldownTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CooldownDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CooldownDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAddToExistingDuration_MetaData[];
#endif
		static void NewProp_bAddToExistingDuration_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddToExistingDuration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTDecorator_SetTagCooldown_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTDecorator,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_SetTagCooldown_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Set tag cooldown decorator node.\n * A decorator node that sets a gameplay tag cooldown.\n */" },
		{ "HideCategories", "Condition" },
		{ "IncludePath", "BehaviorTree/Decorators/BTDecorator_SetTagCooldown.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_SetTagCooldown.h" },
		{ "ToolTip", "Set tag cooldown decorator node.\nA decorator node that sets a gameplay tag cooldown." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_SetTagCooldown_Statics::NewProp_CooldownTag_MetaData[] = {
		{ "Category", "Decorator" },
		{ "Comment", "/** Gameplay tag that will be used for the cooldown. */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_SetTagCooldown.h" },
		{ "ToolTip", "Gameplay tag that will be used for the cooldown." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTDecorator_SetTagCooldown_Statics::NewProp_CooldownTag = { "CooldownTag", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBTDecorator_SetTagCooldown, CooldownTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_SetTagCooldown_Statics::NewProp_CooldownTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_SetTagCooldown_Statics::NewProp_CooldownTag_MetaData)) }; // 1225434376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_SetTagCooldown_Statics::NewProp_CooldownDuration_MetaData[] = {
		{ "Category", "Decorator" },
		{ "Comment", "/** Value we will add or set to the Cooldown tag when this task runs. */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_SetTagCooldown.h" },
		{ "ToolTip", "Value we will add or set to the Cooldown tag when this task runs." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTDecorator_SetTagCooldown_Statics::NewProp_CooldownDuration = { "CooldownDuration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBTDecorator_SetTagCooldown, CooldownDuration), METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_SetTagCooldown_Statics::NewProp_CooldownDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_SetTagCooldown_Statics::NewProp_CooldownDuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_SetTagCooldown_Statics::NewProp_bAddToExistingDuration_MetaData[] = {
		{ "Category", "Decorator" },
		{ "Comment", "/** True if we are adding to any existing duration, false if we are setting the duration (potentially invalidating an existing end time). */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_SetTagCooldown.h" },
		{ "ToolTip", "True if we are adding to any existing duration, false if we are setting the duration (potentially invalidating an existing end time)." },
	};
#endif
	void Z_Construct_UClass_UBTDecorator_SetTagCooldown_Statics::NewProp_bAddToExistingDuration_SetBit(void* Obj)
	{
		((UBTDecorator_SetTagCooldown*)Obj)->bAddToExistingDuration = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTDecorator_SetTagCooldown_Statics::NewProp_bAddToExistingDuration = { "bAddToExistingDuration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBTDecorator_SetTagCooldown), &Z_Construct_UClass_UBTDecorator_SetTagCooldown_Statics::NewProp_bAddToExistingDuration_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_SetTagCooldown_Statics::NewProp_bAddToExistingDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_SetTagCooldown_Statics::NewProp_bAddToExistingDuration_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTDecorator_SetTagCooldown_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_SetTagCooldown_Statics::NewProp_CooldownTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_SetTagCooldown_Statics::NewProp_CooldownDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_SetTagCooldown_Statics::NewProp_bAddToExistingDuration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTDecorator_SetTagCooldown_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTDecorator_SetTagCooldown>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTDecorator_SetTagCooldown_Statics::ClassParams = {
		&UBTDecorator_SetTagCooldown::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTDecorator_SetTagCooldown_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_SetTagCooldown_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_SetTagCooldown_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_SetTagCooldown_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTDecorator_SetTagCooldown()
	{
		if (!Z_Registration_Info_UClass_UBTDecorator_SetTagCooldown.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTDecorator_SetTagCooldown.OuterSingleton, Z_Construct_UClass_UBTDecorator_SetTagCooldown_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTDecorator_SetTagCooldown.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<UBTDecorator_SetTagCooldown>()
	{
		return UBTDecorator_SetTagCooldown::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTDecorator_SetTagCooldown);
	UBTDecorator_SetTagCooldown::~UBTDecorator_SetTagCooldown() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_SetTagCooldown_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_SetTagCooldown_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTDecorator_SetTagCooldown, UBTDecorator_SetTagCooldown::StaticClass, TEXT("UBTDecorator_SetTagCooldown"), &Z_Registration_Info_UClass_UBTDecorator_SetTagCooldown, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTDecorator_SetTagCooldown), 3527643493U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_SetTagCooldown_h_765226360(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_SetTagCooldown_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_SetTagCooldown_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
