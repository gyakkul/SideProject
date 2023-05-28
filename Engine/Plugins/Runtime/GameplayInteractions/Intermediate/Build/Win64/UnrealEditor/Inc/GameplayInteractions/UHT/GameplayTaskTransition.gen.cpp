// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayTaskTransition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayTaskTransition() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	GAMEPLAYINTERACTIONSMODULE_API UClass* Z_Construct_UClass_UGameplayTaskTransition();
	GAMEPLAYINTERACTIONSMODULE_API UClass* Z_Construct_UClass_UGameplayTaskTransition_NoRegister();
	GAMEPLAYINTERACTIONSMODULE_API UEnum* Z_Construct_UEnum_GameplayInteractionsModule_EGameplayTransitionResult();
	GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTransitionDesc();
	UPackage* Z_Construct_UPackage__Script_GameplayInteractionsModule();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGameplayTransitionResult;
	static UEnum* EGameplayTransitionResult_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGameplayTransitionResult.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGameplayTransitionResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayInteractionsModule_EGameplayTransitionResult, (UObject*)Z_Construct_UPackage__Script_GameplayInteractionsModule(), TEXT("EGameplayTransitionResult"));
		}
		return Z_Registration_Info_UEnum_EGameplayTransitionResult.OuterSingleton;
	}
	template<> GAMEPLAYINTERACTIONSMODULE_API UEnum* StaticEnum<EGameplayTransitionResult>()
	{
		return EGameplayTransitionResult_StaticEnum();
	}
	struct Z_Construct_UEnum_GameplayInteractionsModule_EGameplayTransitionResult_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GameplayInteractionsModule_EGameplayTransitionResult_Statics::Enumerators[] = {
		{ "EGameplayTransitionResult::Cancelled", (int64)EGameplayTransitionResult::Cancelled },
		{ "EGameplayTransitionResult::Succeeded", (int64)EGameplayTransitionResult::Succeeded },
		{ "EGameplayTransitionResult::Failed", (int64)EGameplayTransitionResult::Failed },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GameplayInteractionsModule_EGameplayTransitionResult_Statics::Enum_MetaDataParams[] = {
		{ "Cancelled.Name", "EGameplayTransitionResult::Cancelled" },
		{ "Comment", "/** Transition task completion result */" },
		{ "Failed.Name", "EGameplayTransitionResult::Failed" },
		{ "ModuleRelativePath", "Public/GameplayTaskTransition.h" },
		{ "Succeeded.Name", "EGameplayTransitionResult::Succeeded" },
		{ "ToolTip", "Transition task completion result" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayInteractionsModule_EGameplayTransitionResult_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GameplayInteractionsModule,
		nullptr,
		"EGameplayTransitionResult",
		"EGameplayTransitionResult",
		Z_Construct_UEnum_GameplayInteractionsModule_EGameplayTransitionResult_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayInteractionsModule_EGameplayTransitionResult_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GameplayInteractionsModule_EGameplayTransitionResult_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayInteractionsModule_EGameplayTransitionResult_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GameplayInteractionsModule_EGameplayTransitionResult()
	{
		if (!Z_Registration_Info_UEnum_EGameplayTransitionResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGameplayTransitionResult.InnerSingleton, Z_Construct_UEnum_GameplayInteractionsModule_EGameplayTransitionResult_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGameplayTransitionResult.InnerSingleton;
	}
	void UGameplayTaskTransition::StaticRegisterNativesUGameplayTaskTransition()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayTaskTransition);
	UClass* Z_Construct_UClass_UGameplayTaskTransition_NoRegister()
	{
		return UGameplayTaskTransition::StaticClass();
	}
	struct Z_Construct_UClass_UGameplayTaskTransition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameplayTaskTransition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayInteractionsModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTaskTransition_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/GameplayTaskTransition.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameplayTaskTransition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IGameplayTaskTransition>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayTaskTransition_Statics::ClassParams = {
		&UGameplayTaskTransition::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UGameplayTaskTransition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTaskTransition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameplayTaskTransition()
	{
		if (!Z_Registration_Info_UClass_UGameplayTaskTransition.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayTaskTransition.OuterSingleton, Z_Construct_UClass_UGameplayTaskTransition_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameplayTaskTransition.OuterSingleton;
	}
	template<> GAMEPLAYINTERACTIONSMODULE_API UClass* StaticClass<UGameplayTaskTransition>()
	{
		return UGameplayTaskTransition::StaticClass();
	}
	UGameplayTaskTransition::UGameplayTaskTransition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayTaskTransition);
	UGameplayTaskTransition::~UGameplayTaskTransition() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayTransitionDesc;
class UScriptStruct* FGameplayTransitionDesc::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayTransitionDesc.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayTransitionDesc.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTransitionDesc, (UObject*)Z_Construct_UPackage__Script_GameplayInteractionsModule(), TEXT("GameplayTransitionDesc"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayTransitionDesc.OuterSingleton;
}
template<> GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* StaticStruct<FGameplayTransitionDesc>()
{
	return FGameplayTransitionDesc::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayTransitionDesc_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTransitionDesc_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Describes and creates a transition task.\n */" },
		{ "ModuleRelativePath", "Public/GameplayTaskTransition.h" },
		{ "ToolTip", "Describes and creates a transition task." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayTransitionDesc_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayTransitionDesc>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayTransitionDesc_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayInteractionsModule,
		nullptr,
		&NewStructOps,
		"GameplayTransitionDesc",
		sizeof(FGameplayTransitionDesc),
		alignof(FGameplayTransitionDesc),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTransitionDesc_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTransitionDesc_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayTransitionDesc()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayTransitionDesc.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayTransitionDesc.InnerSingleton, Z_Construct_UScriptStruct_FGameplayTransitionDesc_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayTransitionDesc.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayTaskTransition_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayTaskTransition_h_Statics::EnumInfo[] = {
		{ EGameplayTransitionResult_StaticEnum, TEXT("EGameplayTransitionResult"), &Z_Registration_Info_UEnum_EGameplayTransitionResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3119420822U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayTaskTransition_h_Statics::ScriptStructInfo[] = {
		{ FGameplayTransitionDesc::StaticStruct, Z_Construct_UScriptStruct_FGameplayTransitionDesc_Statics::NewStructOps, TEXT("GameplayTransitionDesc"), &Z_Registration_Info_UScriptStruct_GameplayTransitionDesc, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayTransitionDesc), 830233594U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayTaskTransition_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayTaskTransition, UGameplayTaskTransition::StaticClass, TEXT("UGameplayTaskTransition"), &Z_Registration_Info_UClass_UGameplayTaskTransition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayTaskTransition), 771245619U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayTaskTransition_h_3728077515(TEXT("/Script/GameplayInteractionsModule"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayTaskTransition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayTaskTransition_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayTaskTransition_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayTaskTransition_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayTaskTransition_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayTaskTransition_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
