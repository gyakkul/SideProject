// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayTask_PlayContextualAnim.h"
#include "ContextualAnimTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayTask_PlayContextualAnim() {}
// Cross Module References
	CONTEXTUALANIMATION_API UClass* Z_Construct_UClass_UContextualAnimSceneAsset_NoRegister();
	CONTEXTUALANIMATION_API UClass* Z_Construct_UClass_UContextualAnimSceneInstance_NoRegister();
	CONTEXTUALANIMATION_API UScriptStruct* Z_Construct_UScriptStruct_FContextualAnimStartSceneParams();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GAMEPLAYINTERACTIONSMODULE_API UClass* Z_Construct_UClass_UGameplayActuationComponent_NoRegister();
	GAMEPLAYINTERACTIONSMODULE_API UClass* Z_Construct_UClass_UGameplayActuationStateProvider_NoRegister();
	GAMEPLAYINTERACTIONSMODULE_API UClass* Z_Construct_UClass_UGameplayTask_PlayContextualAnim();
	GAMEPLAYINTERACTIONSMODULE_API UClass* Z_Construct_UClass_UGameplayTask_PlayContextualAnim_NoRegister();
	GAMEPLAYINTERACTIONSMODULE_API UClass* Z_Construct_UClass_UGameplayTaskTransition_NoRegister();
	GAMEPLAYINTERACTIONSMODULE_API UEnum* Z_Construct_UEnum_GameplayInteractionsModule_EPlayContextualAnimExitMode();
	GAMEPLAYINTERACTIONSMODULE_API UEnum* Z_Construct_UEnum_GameplayInteractionsModule_EPlayContextualAnimStatus();
	GAMEPLAYINTERACTIONSMODULE_API UFunction* Z_Construct_UDelegateFunction_GameplayInteractionsModule_GameplayTaskActuationCompleted__DelegateSignature();
	GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayActuationState_ContextualAnim();
	GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayActuationStateBase();
	GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTransitionDesc();
	GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTransitionDesc_EnterContextualAnim();
	GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTransitionDesc_ExitContextualAnim();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTask();
	GAMEPLAYTASKS_API UFunction* Z_Construct_UDelegateFunction_UGameplayTask_GenericGameplayTaskDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_GameplayInteractionsModule();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPlayContextualAnimExitMode;
	static UEnum* EPlayContextualAnimExitMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPlayContextualAnimExitMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPlayContextualAnimExitMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayInteractionsModule_EPlayContextualAnimExitMode, (UObject*)Z_Construct_UPackage__Script_GameplayInteractionsModule(), TEXT("EPlayContextualAnimExitMode"));
		}
		return Z_Registration_Info_UEnum_EPlayContextualAnimExitMode.OuterSingleton;
	}
	template<> GAMEPLAYINTERACTIONSMODULE_API UEnum* StaticEnum<EPlayContextualAnimExitMode>()
	{
		return EPlayContextualAnimExitMode_StaticEnum();
	}
	struct Z_Construct_UEnum_GameplayInteractionsModule_EPlayContextualAnimExitMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GameplayInteractionsModule_EPlayContextualAnimExitMode_Statics::Enumerators[] = {
		{ "EPlayContextualAnimExitMode::DefaultExit", (int64)EPlayContextualAnimExitMode::DefaultExit },
		{ "EPlayContextualAnimExitMode::FastExit", (int64)EPlayContextualAnimExitMode::FastExit },
		{ "EPlayContextualAnimExitMode::Teleport", (int64)EPlayContextualAnimExitMode::Teleport },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GameplayInteractionsModule_EPlayContextualAnimExitMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DefaultExit.Name", "EPlayContextualAnimExitMode::DefaultExit" },
		{ "FastExit.Comment", "// uses ExitSectionName if specified and available otherwise fallback on Teleport\n" },
		{ "FastExit.Name", "EPlayContextualAnimExitMode::FastExit" },
		{ "FastExit.ToolTip", "uses ExitSectionName if specified and available otherwise fallback on Teleport" },
		{ "ModuleRelativePath", "Public/GameplayTask_PlayContextualAnim.h" },
		{ "Teleport.Comment", "// uses FastExitSectionName if specified and available otherwise fallback on Teleport\n" },
		{ "Teleport.Name", "EPlayContextualAnimExitMode::Teleport" },
		{ "Teleport.ToolTip", "uses FastExitSectionName if specified and available otherwise fallback on Teleport" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayInteractionsModule_EPlayContextualAnimExitMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GameplayInteractionsModule,
		nullptr,
		"EPlayContextualAnimExitMode",
		"EPlayContextualAnimExitMode",
		Z_Construct_UEnum_GameplayInteractionsModule_EPlayContextualAnimExitMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayInteractionsModule_EPlayContextualAnimExitMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GameplayInteractionsModule_EPlayContextualAnimExitMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayInteractionsModule_EPlayContextualAnimExitMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GameplayInteractionsModule_EPlayContextualAnimExitMode()
	{
		if (!Z_Registration_Info_UEnum_EPlayContextualAnimExitMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPlayContextualAnimExitMode.InnerSingleton, Z_Construct_UEnum_GameplayInteractionsModule_EPlayContextualAnimExitMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPlayContextualAnimExitMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPlayContextualAnimStatus;
	static UEnum* EPlayContextualAnimStatus_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPlayContextualAnimStatus.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPlayContextualAnimStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayInteractionsModule_EPlayContextualAnimStatus, (UObject*)Z_Construct_UPackage__Script_GameplayInteractionsModule(), TEXT("EPlayContextualAnimStatus"));
		}
		return Z_Registration_Info_UEnum_EPlayContextualAnimStatus.OuterSingleton;
	}
	template<> GAMEPLAYINTERACTIONSMODULE_API UEnum* StaticEnum<EPlayContextualAnimStatus>()
	{
		return EPlayContextualAnimStatus_StaticEnum();
	}
	struct Z_Construct_UEnum_GameplayInteractionsModule_EPlayContextualAnimStatus_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GameplayInteractionsModule_EPlayContextualAnimStatus_Statics::Enumerators[] = {
		{ "EPlayContextualAnimStatus::Unset", (int64)EPlayContextualAnimStatus::Unset },
		{ "EPlayContextualAnimStatus::Playing", (int64)EPlayContextualAnimStatus::Playing },
		{ "EPlayContextualAnimStatus::DonePlaying", (int64)EPlayContextualAnimStatus::DonePlaying },
		{ "EPlayContextualAnimStatus::Failed", (int64)EPlayContextualAnimStatus::Failed },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GameplayInteractionsModule_EPlayContextualAnimStatus_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Status describing current ticking state. */" },
		{ "DonePlaying.Comment", "// Section is currently playing.\n" },
		{ "DonePlaying.Name", "EPlayContextualAnimStatus::DonePlaying" },
		{ "DonePlaying.ToolTip", "Section is currently playing." },
		{ "Failed.Comment", "// Section was played successfully.\n" },
		{ "Failed.Name", "EPlayContextualAnimStatus::Failed" },
		{ "Failed.ToolTip", "Section was played successfully." },
		{ "ModuleRelativePath", "Public/GameplayTask_PlayContextualAnim.h" },
		{ "Playing.Comment", "// Status not set.\n" },
		{ "Playing.Name", "EPlayContextualAnimStatus::Playing" },
		{ "Playing.ToolTip", "Status not set." },
		{ "ToolTip", "Status describing current ticking state." },
		{ "Unset.Name", "EPlayContextualAnimStatus::Unset" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayInteractionsModule_EPlayContextualAnimStatus_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GameplayInteractionsModule,
		nullptr,
		"EPlayContextualAnimStatus",
		"EPlayContextualAnimStatus",
		Z_Construct_UEnum_GameplayInteractionsModule_EPlayContextualAnimStatus_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayInteractionsModule_EPlayContextualAnimStatus_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GameplayInteractionsModule_EPlayContextualAnimStatus_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayInteractionsModule_EPlayContextualAnimStatus_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GameplayInteractionsModule_EPlayContextualAnimStatus()
	{
		if (!Z_Registration_Info_UEnum_EPlayContextualAnimStatus.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPlayContextualAnimStatus.InnerSingleton, Z_Construct_UEnum_GameplayInteractionsModule_EPlayContextualAnimStatus_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPlayContextualAnimStatus.InnerSingleton;
	}

static_assert(std::is_polymorphic<FGameplayActuationState_ContextualAnim>() == std::is_polymorphic<FGameplayActuationStateBase>(), "USTRUCT FGameplayActuationState_ContextualAnim cannot be polymorphic unless super FGameplayActuationStateBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayActuationState_ContextualAnim;
class UScriptStruct* FGameplayActuationState_ContextualAnim::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayActuationState_ContextualAnim.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayActuationState_ContextualAnim.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayActuationState_ContextualAnim, (UObject*)Z_Construct_UPackage__Script_GameplayInteractionsModule(), TEXT("GameplayActuationState_ContextualAnim"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayActuationState_ContextualAnim.OuterSingleton;
}
template<> GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* StaticStruct<FGameplayActuationState_ContextualAnim>()
{
	return FGameplayActuationState_ContextualAnim::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayActuationState_ContextualAnim_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractorRole_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InteractorRole;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractableObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InteractableObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractableObjectRole_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InteractableObjectRole;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SectionName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SectionName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExitSectionName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ExitSectionName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SceneAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SceneInstance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayActuationState_ContextualAnim_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Contextual Animation actuation state\n */" },
		{ "ModuleRelativePath", "Public/GameplayTask_PlayContextualAnim.h" },
		{ "ToolTip", "Contextual Animation actuation state" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayActuationState_ContextualAnim_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayActuationState_ContextualAnim>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayActuationState_ContextualAnim_Statics::NewProp_InteractorRole_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayTask_PlayContextualAnim.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGameplayActuationState_ContextualAnim_Statics::NewProp_InteractorRole = { "InteractorRole", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayActuationState_ContextualAnim, InteractorRole), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayActuationState_ContextualAnim_Statics::NewProp_InteractorRole_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayActuationState_ContextualAnim_Statics::NewProp_InteractorRole_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayActuationState_ContextualAnim_Statics::NewProp_InteractableObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayTask_PlayContextualAnim.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGameplayActuationState_ContextualAnim_Statics::NewProp_InteractableObject = { "InteractableObject", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayActuationState_ContextualAnim, InteractableObject), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayActuationState_ContextualAnim_Statics::NewProp_InteractableObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayActuationState_ContextualAnim_Statics::NewProp_InteractableObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayActuationState_ContextualAnim_Statics::NewProp_InteractableObjectRole_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayTask_PlayContextualAnim.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGameplayActuationState_ContextualAnim_Statics::NewProp_InteractableObjectRole = { "InteractableObjectRole", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayActuationState_ContextualAnim, InteractableObjectRole), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayActuationState_ContextualAnim_Statics::NewProp_InteractableObjectRole_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayActuationState_ContextualAnim_Statics::NewProp_InteractableObjectRole_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayActuationState_ContextualAnim_Statics::NewProp_SectionName_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayTask_PlayContextualAnim.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGameplayActuationState_ContextualAnim_Statics::NewProp_SectionName = { "SectionName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayActuationState_ContextualAnim, SectionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayActuationState_ContextualAnim_Statics::NewProp_SectionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayActuationState_ContextualAnim_Statics::NewProp_SectionName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayActuationState_ContextualAnim_Statics::NewProp_ExitSectionName_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayTask_PlayContextualAnim.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGameplayActuationState_ContextualAnim_Statics::NewProp_ExitSectionName = { "ExitSectionName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayActuationState_ContextualAnim, ExitSectionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayActuationState_ContextualAnim_Statics::NewProp_ExitSectionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayActuationState_ContextualAnim_Statics::NewProp_ExitSectionName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayActuationState_ContextualAnim_Statics::NewProp_SceneAsset_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayTask_PlayContextualAnim.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGameplayActuationState_ContextualAnim_Statics::NewProp_SceneAsset = { "SceneAsset", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayActuationState_ContextualAnim, SceneAsset), Z_Construct_UClass_UContextualAnimSceneAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayActuationState_ContextualAnim_Statics::NewProp_SceneAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayActuationState_ContextualAnim_Statics::NewProp_SceneAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayActuationState_ContextualAnim_Statics::NewProp_SceneInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayTask_PlayContextualAnim.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGameplayActuationState_ContextualAnim_Statics::NewProp_SceneInstance = { "SceneInstance", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayActuationState_ContextualAnim, SceneInstance), Z_Construct_UClass_UContextualAnimSceneInstance_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayActuationState_ContextualAnim_Statics::NewProp_SceneInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayActuationState_ContextualAnim_Statics::NewProp_SceneInstance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayActuationState_ContextualAnim_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayActuationState_ContextualAnim_Statics::NewProp_InteractorRole,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayActuationState_ContextualAnim_Statics::NewProp_InteractableObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayActuationState_ContextualAnim_Statics::NewProp_InteractableObjectRole,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayActuationState_ContextualAnim_Statics::NewProp_SectionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayActuationState_ContextualAnim_Statics::NewProp_ExitSectionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayActuationState_ContextualAnim_Statics::NewProp_SceneAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayActuationState_ContextualAnim_Statics::NewProp_SceneInstance,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayActuationState_ContextualAnim_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayInteractionsModule,
		Z_Construct_UScriptStruct_FGameplayActuationStateBase,
		&NewStructOps,
		"GameplayActuationState_ContextualAnim",
		sizeof(FGameplayActuationState_ContextualAnim),
		alignof(FGameplayActuationState_ContextualAnim),
		Z_Construct_UScriptStruct_FGameplayActuationState_ContextualAnim_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayActuationState_ContextualAnim_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayActuationState_ContextualAnim_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayActuationState_ContextualAnim_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayActuationState_ContextualAnim()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayActuationState_ContextualAnim.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayActuationState_ContextualAnim.InnerSingleton, Z_Construct_UScriptStruct_FGameplayActuationState_ContextualAnim_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayActuationState_ContextualAnim.InnerSingleton;
	}

static_assert(std::is_polymorphic<FGameplayTransitionDesc_EnterContextualAnim>() == std::is_polymorphic<FGameplayTransitionDesc>(), "USTRUCT FGameplayTransitionDesc_EnterContextualAnim cannot be polymorphic unless super FGameplayTransitionDesc is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayTransitionDesc_EnterContextualAnim;
class UScriptStruct* FGameplayTransitionDesc_EnterContextualAnim::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayTransitionDesc_EnterContextualAnim.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayTransitionDesc_EnterContextualAnim.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTransitionDesc_EnterContextualAnim, (UObject*)Z_Construct_UPackage__Script_GameplayInteractionsModule(), TEXT("GameplayTransitionDesc_EnterContextualAnim"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayTransitionDesc_EnterContextualAnim.OuterSingleton;
}
template<> GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* StaticStruct<FGameplayTransitionDesc_EnterContextualAnim>()
{
	return FGameplayTransitionDesc_EnterContextualAnim::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayTransitionDesc_EnterContextualAnim_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTransitionDesc_EnterContextualAnim_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Contextual animation as enter transition\n */" },
		{ "ModuleRelativePath", "Public/GameplayTask_PlayContextualAnim.h" },
		{ "ToolTip", "Contextual animation as enter transition" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayTransitionDesc_EnterContextualAnim_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayTransitionDesc_EnterContextualAnim>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayTransitionDesc_EnterContextualAnim_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayInteractionsModule,
		Z_Construct_UScriptStruct_FGameplayTransitionDesc,
		&NewStructOps,
		"GameplayTransitionDesc_EnterContextualAnim",
		sizeof(FGameplayTransitionDesc_EnterContextualAnim),
		alignof(FGameplayTransitionDesc_EnterContextualAnim),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTransitionDesc_EnterContextualAnim_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTransitionDesc_EnterContextualAnim_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayTransitionDesc_EnterContextualAnim()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayTransitionDesc_EnterContextualAnim.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayTransitionDesc_EnterContextualAnim.InnerSingleton, Z_Construct_UScriptStruct_FGameplayTransitionDesc_EnterContextualAnim_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayTransitionDesc_EnterContextualAnim.InnerSingleton;
	}

static_assert(std::is_polymorphic<FGameplayTransitionDesc_ExitContextualAnim>() == std::is_polymorphic<FGameplayTransitionDesc>(), "USTRUCT FGameplayTransitionDesc_ExitContextualAnim cannot be polymorphic unless super FGameplayTransitionDesc is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayTransitionDesc_ExitContextualAnim;
class UScriptStruct* FGameplayTransitionDesc_ExitContextualAnim::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayTransitionDesc_ExitContextualAnim.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayTransitionDesc_ExitContextualAnim.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTransitionDesc_ExitContextualAnim, (UObject*)Z_Construct_UPackage__Script_GameplayInteractionsModule(), TEXT("GameplayTransitionDesc_ExitContextualAnim"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayTransitionDesc_ExitContextualAnim.OuterSingleton;
}
template<> GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* StaticStruct<FGameplayTransitionDesc_ExitContextualAnim>()
{
	return FGameplayTransitionDesc_ExitContextualAnim::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayTransitionDesc_ExitContextualAnim_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTransitionDesc_ExitContextualAnim_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Contextual animation as exit transition\n */" },
		{ "ModuleRelativePath", "Public/GameplayTask_PlayContextualAnim.h" },
		{ "ToolTip", "Contextual animation as exit transition" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayTransitionDesc_ExitContextualAnim_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayTransitionDesc_ExitContextualAnim>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayTransitionDesc_ExitContextualAnim_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayInteractionsModule,
		Z_Construct_UScriptStruct_FGameplayTransitionDesc,
		&NewStructOps,
		"GameplayTransitionDesc_ExitContextualAnim",
		sizeof(FGameplayTransitionDesc_ExitContextualAnim),
		alignof(FGameplayTransitionDesc_ExitContextualAnim),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTransitionDesc_ExitContextualAnim_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTransitionDesc_ExitContextualAnim_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayTransitionDesc_ExitContextualAnim()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayTransitionDesc_ExitContextualAnim.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayTransitionDesc_ExitContextualAnim.InnerSingleton, Z_Construct_UScriptStruct_FGameplayTransitionDesc_ExitContextualAnim_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayTransitionDesc_ExitContextualAnim.InnerSingleton;
	}
	DEFINE_FUNCTION(UGameplayTask_PlayContextualAnim::execOnSectionEndTimeReached)
	{
		P_GET_OBJECT(UContextualAnimSceneInstance,Z_Param_SceneInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSectionEndTimeReached(Z_Param_SceneInstance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayTask_PlayContextualAnim::execGetStatus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EPlayContextualAnimStatus*)Z_Param__Result=P_THIS->GetStatus();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayTask_PlayContextualAnim::execSetExit)
	{
		P_GET_ENUM(EPlayContextualAnimExitMode,Z_Param_ExitMode);
		P_GET_PROPERTY(FNameProperty,Z_Param_NewExitSectionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetExit(EPlayContextualAnimExitMode(Z_Param_ExitMode),Z_Param_NewExitSectionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayTask_PlayContextualAnim::execPlayContextualAnim)
	{
		P_GET_OBJECT(AActor,Z_Param_Interactor);
		P_GET_PROPERTY(FNameProperty,Z_Param_InteractorRole);
		P_GET_OBJECT(AActor,Z_Param_InteractableObject);
		P_GET_PROPERTY(FNameProperty,Z_Param_InteractableObjectRole);
		P_GET_PROPERTY(FNameProperty,Z_Param_SectionName);
		P_GET_PROPERTY(FNameProperty,Z_Param_ExitSectionName);
		P_GET_OBJECT(UContextualAnimSceneAsset,Z_Param_SceneAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGameplayTask_PlayContextualAnim**)Z_Param__Result=UGameplayTask_PlayContextualAnim::PlayContextualAnim(Z_Param_Interactor,Z_Param_InteractorRole,Z_Param_InteractableObject,Z_Param_InteractableObjectRole,Z_Param_SectionName,Z_Param_ExitSectionName,Z_Param_SceneAsset);
		P_NATIVE_END;
	}
	void UGameplayTask_PlayContextualAnim::StaticRegisterNativesUGameplayTask_PlayContextualAnim()
	{
		UClass* Class = UGameplayTask_PlayContextualAnim::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetStatus", &UGameplayTask_PlayContextualAnim::execGetStatus },
			{ "OnSectionEndTimeReached", &UGameplayTask_PlayContextualAnim::execOnSectionEndTimeReached },
			{ "PlayContextualAnim", &UGameplayTask_PlayContextualAnim::execPlayContextualAnim },
			{ "SetExit", &UGameplayTask_PlayContextualAnim::execSetExit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameplayTask_PlayContextualAnim_GetStatus_Statics
	{
		struct GameplayTask_PlayContextualAnim_eventGetStatus_Parms
		{
			EPlayContextualAnimStatus ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameplayTask_PlayContextualAnim_GetStatus_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGameplayTask_PlayContextualAnim_GetStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayTask_PlayContextualAnim_eventGetStatus_Parms, ReturnValue), Z_Construct_UEnum_GameplayInteractionsModule_EPlayContextualAnimStatus, METADATA_PARAMS(nullptr, 0) }; // 1059984704
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayTask_PlayContextualAnim_GetStatus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTask_PlayContextualAnim_GetStatus_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTask_PlayContextualAnim_GetStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayTask_PlayContextualAnim_GetStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gameplay|Tasks" },
		{ "ModuleRelativePath", "Public/GameplayTask_PlayContextualAnim.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayTask_PlayContextualAnim_GetStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayTask_PlayContextualAnim, nullptr, "GetStatus", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameplayTask_PlayContextualAnim_GetStatus_Statics::GameplayTask_PlayContextualAnim_eventGetStatus_Parms), Z_Construct_UFunction_UGameplayTask_PlayContextualAnim_GetStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTask_PlayContextualAnim_GetStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayTask_PlayContextualAnim_GetStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTask_PlayContextualAnim_GetStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayTask_PlayContextualAnim_GetStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayTask_PlayContextualAnim_GetStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayTask_PlayContextualAnim_OnSectionEndTimeReached_Statics
	{
		struct GameplayTask_PlayContextualAnim_eventOnSectionEndTimeReached_Parms
		{
			UContextualAnimSceneInstance* SceneInstance;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneInstance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayTask_PlayContextualAnim_OnSectionEndTimeReached_Statics::NewProp_SceneInstance = { "SceneInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayTask_PlayContextualAnim_eventOnSectionEndTimeReached_Parms, SceneInstance), Z_Construct_UClass_UContextualAnimSceneInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayTask_PlayContextualAnim_OnSectionEndTimeReached_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTask_PlayContextualAnim_OnSectionEndTimeReached_Statics::NewProp_SceneInstance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayTask_PlayContextualAnim_OnSectionEndTimeReached_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayTask_PlayContextualAnim.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayTask_PlayContextualAnim_OnSectionEndTimeReached_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayTask_PlayContextualAnim, nullptr, "OnSectionEndTimeReached", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameplayTask_PlayContextualAnim_OnSectionEndTimeReached_Statics::GameplayTask_PlayContextualAnim_eventOnSectionEndTimeReached_Parms), Z_Construct_UFunction_UGameplayTask_PlayContextualAnim_OnSectionEndTimeReached_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTask_PlayContextualAnim_OnSectionEndTimeReached_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayTask_PlayContextualAnim_OnSectionEndTimeReached_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTask_PlayContextualAnim_OnSectionEndTimeReached_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayTask_PlayContextualAnim_OnSectionEndTimeReached()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayTask_PlayContextualAnim_OnSectionEndTimeReached_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayTask_PlayContextualAnim_PlayContextualAnim_Statics
	{
		struct GameplayTask_PlayContextualAnim_eventPlayContextualAnim_Parms
		{
			AActor* Interactor;
			FName InteractorRole;
			AActor* InteractableObject;
			FName InteractableObjectRole;
			FName SectionName;
			FName ExitSectionName;
			const UContextualAnimSceneAsset* SceneAsset;
			UGameplayTask_PlayContextualAnim* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Interactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractorRole_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InteractorRole;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractableObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractableObjectRole_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InteractableObjectRole;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SectionName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SectionName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExitSectionName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ExitSectionName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneAsset;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayTask_PlayContextualAnim_PlayContextualAnim_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayTask_PlayContextualAnim_eventPlayContextualAnim_Parms, Interactor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayTask_PlayContextualAnim_PlayContextualAnim_Statics::NewProp_InteractorRole_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGameplayTask_PlayContextualAnim_PlayContextualAnim_Statics::NewProp_InteractorRole = { "InteractorRole", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayTask_PlayContextualAnim_eventPlayContextualAnim_Parms, InteractorRole), METADATA_PARAMS(Z_Construct_UFunction_UGameplayTask_PlayContextualAnim_PlayContextualAnim_Statics::NewProp_InteractorRole_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTask_PlayContextualAnim_PlayContextualAnim_Statics::NewProp_InteractorRole_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayTask_PlayContextualAnim_PlayContextualAnim_Statics::NewProp_InteractableObject = { "InteractableObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayTask_PlayContextualAnim_eventPlayContextualAnim_Parms, InteractableObject), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayTask_PlayContextualAnim_PlayContextualAnim_Statics::NewProp_InteractableObjectRole_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGameplayTask_PlayContextualAnim_PlayContextualAnim_Statics::NewProp_InteractableObjectRole = { "InteractableObjectRole", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayTask_PlayContextualAnim_eventPlayContextualAnim_Parms, InteractableObjectRole), METADATA_PARAMS(Z_Construct_UFunction_UGameplayTask_PlayContextualAnim_PlayContextualAnim_Statics::NewProp_InteractableObjectRole_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTask_PlayContextualAnim_PlayContextualAnim_Statics::NewProp_InteractableObjectRole_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayTask_PlayContextualAnim_PlayContextualAnim_Statics::NewProp_SectionName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGameplayTask_PlayContextualAnim_PlayContextualAnim_Statics::NewProp_SectionName = { "SectionName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayTask_PlayContextualAnim_eventPlayContextualAnim_Parms, SectionName), METADATA_PARAMS(Z_Construct_UFunction_UGameplayTask_PlayContextualAnim_PlayContextualAnim_Statics::NewProp_SectionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTask_PlayContextualAnim_PlayContextualAnim_Statics::NewProp_SectionName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayTask_PlayContextualAnim_PlayContextualAnim_Statics::NewProp_ExitSectionName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGameplayTask_PlayContextualAnim_PlayContextualAnim_Statics::NewProp_ExitSectionName = { "ExitSectionName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayTask_PlayContextualAnim_eventPlayContextualAnim_Parms, ExitSectionName), METADATA_PARAMS(Z_Construct_UFunction_UGameplayTask_PlayContextualAnim_PlayContextualAnim_Statics::NewProp_ExitSectionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTask_PlayContextualAnim_PlayContextualAnim_Statics::NewProp_ExitSectionName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayTask_PlayContextualAnim_PlayContextualAnim_Statics::NewProp_SceneAsset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayTask_PlayContextualAnim_PlayContextualAnim_Statics::NewProp_SceneAsset = { "SceneAsset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayTask_PlayContextualAnim_eventPlayContextualAnim_Parms, SceneAsset), Z_Construct_UClass_UContextualAnimSceneAsset_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayTask_PlayContextualAnim_PlayContextualAnim_Statics::NewProp_SceneAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTask_PlayContextualAnim_PlayContextualAnim_Statics::NewProp_SceneAsset_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayTask_PlayContextualAnim_PlayContextualAnim_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayTask_PlayContextualAnim_eventPlayContextualAnim_Parms, ReturnValue), Z_Construct_UClass_UGameplayTask_PlayContextualAnim_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayTask_PlayContextualAnim_PlayContextualAnim_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTask_PlayContextualAnim_PlayContextualAnim_Statics::NewProp_Interactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTask_PlayContextualAnim_PlayContextualAnim_Statics::NewProp_InteractorRole,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTask_PlayContextualAnim_PlayContextualAnim_Statics::NewProp_InteractableObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTask_PlayContextualAnim_PlayContextualAnim_Statics::NewProp_InteractableObjectRole,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTask_PlayContextualAnim_PlayContextualAnim_Statics::NewProp_SectionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTask_PlayContextualAnim_PlayContextualAnim_Statics::NewProp_ExitSectionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTask_PlayContextualAnim_PlayContextualAnim_Statics::NewProp_SceneAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTask_PlayContextualAnim_PlayContextualAnim_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayTask_PlayContextualAnim_PlayContextualAnim_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Gameplay|Tasks" },
		{ "DisplayName", "PlayContextualAnim" },
		{ "ModuleRelativePath", "Public/GameplayTask_PlayContextualAnim.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayTask_PlayContextualAnim_PlayContextualAnim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayTask_PlayContextualAnim, nullptr, "PlayContextualAnim", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameplayTask_PlayContextualAnim_PlayContextualAnim_Statics::GameplayTask_PlayContextualAnim_eventPlayContextualAnim_Parms), Z_Construct_UFunction_UGameplayTask_PlayContextualAnim_PlayContextualAnim_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTask_PlayContextualAnim_PlayContextualAnim_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayTask_PlayContextualAnim_PlayContextualAnim_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTask_PlayContextualAnim_PlayContextualAnim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayTask_PlayContextualAnim_PlayContextualAnim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayTask_PlayContextualAnim_PlayContextualAnim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayTask_PlayContextualAnim_SetExit_Statics
	{
		struct GameplayTask_PlayContextualAnim_eventSetExit_Parms
		{
			EPlayContextualAnimExitMode ExitMode;
			FName NewExitSectionName;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ExitMode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ExitMode;
		static const UECodeGen_Private::FNamePropertyParams NewProp_NewExitSectionName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameplayTask_PlayContextualAnim_SetExit_Statics::NewProp_ExitMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGameplayTask_PlayContextualAnim_SetExit_Statics::NewProp_ExitMode = { "ExitMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayTask_PlayContextualAnim_eventSetExit_Parms, ExitMode), Z_Construct_UEnum_GameplayInteractionsModule_EPlayContextualAnimExitMode, METADATA_PARAMS(nullptr, 0) }; // 3758542157
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGameplayTask_PlayContextualAnim_SetExit_Statics::NewProp_NewExitSectionName = { "NewExitSectionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayTask_PlayContextualAnim_eventSetExit_Parms, NewExitSectionName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayTask_PlayContextualAnim_SetExit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTask_PlayContextualAnim_SetExit_Statics::NewProp_ExitMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTask_PlayContextualAnim_SetExit_Statics::NewProp_ExitMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTask_PlayContextualAnim_SetExit_Statics::NewProp_NewExitSectionName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayTask_PlayContextualAnim_SetExit_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gameplay|Tasks" },
		{ "ModuleRelativePath", "Public/GameplayTask_PlayContextualAnim.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayTask_PlayContextualAnim_SetExit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayTask_PlayContextualAnim, nullptr, "SetExit", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameplayTask_PlayContextualAnim_SetExit_Statics::GameplayTask_PlayContextualAnim_eventSetExit_Parms), Z_Construct_UFunction_UGameplayTask_PlayContextualAnim_SetExit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTask_PlayContextualAnim_SetExit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayTask_PlayContextualAnim_SetExit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTask_PlayContextualAnim_SetExit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayTask_PlayContextualAnim_SetExit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayTask_PlayContextualAnim_SetExit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayTask_PlayContextualAnim);
	UClass* Z_Construct_UClass_UGameplayTask_PlayContextualAnim_NoRegister()
	{
		return UGameplayTask_PlayContextualAnim::StaticClass();
	}
	struct Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnRequestFailed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRequestFailed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCompleted_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCompleted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SectionIdx_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SectionIdx;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimSetIdx_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AnimSetIdx;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Pivots_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pivots_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Pivots;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SceneAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractorRole_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InteractorRole;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractableObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InteractableObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractableObjectRole_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InteractableObjectRole;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExitSectionName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ExitSectionName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SceneInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActuationComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActuationComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneParams_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SceneParams;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SafeExitPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SafeExitPoint;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Status_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Status;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTeleportOnTaskEnd_MetaData[];
#endif
		static void NewProp_bTeleportOnTaskEnd_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTeleportOnTaskEnd;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayTask,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayInteractionsModule,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameplayTask_PlayContextualAnim_GetStatus, "GetStatus" }, // 3977128455
		{ &Z_Construct_UFunction_UGameplayTask_PlayContextualAnim_OnSectionEndTimeReached, "OnSectionEndTimeReached" }, // 911497295
		{ &Z_Construct_UFunction_UGameplayTask_PlayContextualAnim_PlayContextualAnim, "PlayContextualAnim" }, // 3805394716
		{ &Z_Construct_UFunction_UGameplayTask_PlayContextualAnim_SetExit, "SetExit" }, // 1536724648
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Simulated GameplayTask that starts a contextual anim scene on multiple actors\n */" },
		{ "IncludePath", "GameplayTask_PlayContextualAnim.h" },
		{ "ModuleRelativePath", "Public/GameplayTask_PlayContextualAnim.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Simulated GameplayTask that starts a contextual anim scene on multiple actors" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics::NewProp_OnRequestFailed_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayTask_PlayContextualAnim.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics::NewProp_OnRequestFailed = { "OnRequestFailed", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayTask_PlayContextualAnim, OnRequestFailed), Z_Construct_UDelegateFunction_UGameplayTask_GenericGameplayTaskDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics::NewProp_OnRequestFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics::NewProp_OnRequestFailed_MetaData)) }; // 2832075636
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics::NewProp_OnCompleted_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayTask_PlayContextualAnim.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics::NewProp_OnCompleted = { "OnCompleted", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayTask_PlayContextualAnim, OnCompleted), Z_Construct_UDelegateFunction_GameplayInteractionsModule_GameplayTaskActuationCompleted__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics::NewProp_OnCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics::NewProp_OnCompleted_MetaData)) }; // 3436453873
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics::NewProp_SectionIdx_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayTask_PlayContextualAnim.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics::NewProp_SectionIdx = { "SectionIdx", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayTask_PlayContextualAnim, SectionIdx), METADATA_PARAMS(Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics::NewProp_SectionIdx_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics::NewProp_SectionIdx_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics::NewProp_AnimSetIdx_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayTask_PlayContextualAnim.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics::NewProp_AnimSetIdx = { "AnimSetIdx", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayTask_PlayContextualAnim, AnimSetIdx), METADATA_PARAMS(Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics::NewProp_AnimSetIdx_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics::NewProp_AnimSetIdx_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics::NewProp_Pivots_Inner = { "Pivots", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics::NewProp_Pivots_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayTask_PlayContextualAnim.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics::NewProp_Pivots = { "Pivots", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayTask_PlayContextualAnim, Pivots), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics::NewProp_Pivots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics::NewProp_Pivots_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics::NewProp_SceneAsset_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayTask_PlayContextualAnim.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics::NewProp_SceneAsset = { "SceneAsset", nullptr, (EPropertyFlags)0x0024080000000020, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayTask_PlayContextualAnim, SceneAsset), Z_Construct_UClass_UContextualAnimSceneAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics::NewProp_SceneAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics::NewProp_SceneAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics::NewProp_InteractorRole_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayTask_PlayContextualAnim.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics::NewProp_InteractorRole = { "InteractorRole", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayTask_PlayContextualAnim, InteractorRole), METADATA_PARAMS(Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics::NewProp_InteractorRole_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics::NewProp_InteractorRole_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics::NewProp_InteractableObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayTask_PlayContextualAnim.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics::NewProp_InteractableObject = { "InteractableObject", nullptr, (EPropertyFlags)0x0024080000000020, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayTask_PlayContextualAnim, InteractableObject), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics::NewProp_InteractableObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics::NewProp_InteractableObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics::NewProp_InteractableObjectRole_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayTask_PlayContextualAnim.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics::NewProp_InteractableObjectRole = { "InteractableObjectRole", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayTask_PlayContextualAnim, InteractableObjectRole), METADATA_PARAMS(Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics::NewProp_InteractableObjectRole_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics::NewProp_InteractableObjectRole_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics::NewProp_ExitSectionName_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayTask_PlayContextualAnim.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics::NewProp_ExitSectionName = { "ExitSectionName", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayTask_PlayContextualAnim, ExitSectionName), METADATA_PARAMS(Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics::NewProp_ExitSectionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics::NewProp_ExitSectionName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics::NewProp_SceneInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayTask_PlayContextualAnim.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics::NewProp_SceneInstance = { "SceneInstance", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayTask_PlayContextualAnim, SceneInstance), Z_Construct_UClass_UContextualAnimSceneInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics::NewProp_SceneInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics::NewProp_SceneInstance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics::NewProp_ActuationComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameplayTask_PlayContextualAnim.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics::NewProp_ActuationComponent = { "ActuationComponent", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayTask_PlayContextualAnim, ActuationComponent), Z_Construct_UClass_UGameplayActuationComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics::NewProp_ActuationComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics::NewProp_ActuationComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics::NewProp_SceneParams_MetaData[] = {
		{ "Comment", "/** Rebuilt locally from replicated data */" },
		{ "ModuleRelativePath", "Public/GameplayTask_PlayContextualAnim.h" },
		{ "ToolTip", "Rebuilt locally from replicated data" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics::NewProp_SceneParams = { "SceneParams", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayTask_PlayContextualAnim, SceneParams), Z_Construct_UScriptStruct_FContextualAnimStartSceneParams, METADATA_PARAMS(Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics::NewProp_SceneParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics::NewProp_SceneParams_MetaData)) }; // 1100142325
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics::NewProp_SafeExitPoint_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayTask_PlayContextualAnim.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics::NewProp_SafeExitPoint = { "SafeExitPoint", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayTask_PlayContextualAnim, SafeExitPoint), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics::NewProp_SafeExitPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics::NewProp_SafeExitPoint_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics::NewProp_Status_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics::NewProp_Status_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayTask_PlayContextualAnim.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayTask_PlayContextualAnim, Status), Z_Construct_UEnum_GameplayInteractionsModule_EPlayContextualAnimStatus, METADATA_PARAMS(Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics::NewProp_Status_MetaData)) }; // 1059984704
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics::NewProp_bTeleportOnTaskEnd_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayTask_PlayContextualAnim.h" },
	};
#endif
	void Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics::NewProp_bTeleportOnTaskEnd_SetBit(void* Obj)
	{
		((UGameplayTask_PlayContextualAnim*)Obj)->bTeleportOnTaskEnd = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics::NewProp_bTeleportOnTaskEnd = { "bTeleportOnTaskEnd", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGameplayTask_PlayContextualAnim), &Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics::NewProp_bTeleportOnTaskEnd_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics::NewProp_bTeleportOnTaskEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics::NewProp_bTeleportOnTaskEnd_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics::NewProp_OnRequestFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics::NewProp_OnCompleted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics::NewProp_SectionIdx,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics::NewProp_AnimSetIdx,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics::NewProp_Pivots_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics::NewProp_Pivots,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics::NewProp_SceneAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics::NewProp_InteractorRole,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics::NewProp_InteractableObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics::NewProp_InteractableObjectRole,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics::NewProp_ExitSectionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics::NewProp_SceneInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics::NewProp_ActuationComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics::NewProp_SceneParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics::NewProp_SafeExitPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics::NewProp_Status_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics::NewProp_Status,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics::NewProp_bTeleportOnTaskEnd,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGameplayTaskTransition_NoRegister, (int32)VTABLE_OFFSET(UGameplayTask_PlayContextualAnim, IGameplayTaskTransition), false },  // 771245619
			{ Z_Construct_UClass_UGameplayActuationStateProvider_NoRegister, (int32)VTABLE_OFFSET(UGameplayTask_PlayContextualAnim, IGameplayActuationStateProvider), false },  // 4292633833
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayTask_PlayContextualAnim>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics::ClassParams = {
		&UGameplayTask_PlayContextualAnim::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameplayTask_PlayContextualAnim()
	{
		if (!Z_Registration_Info_UClass_UGameplayTask_PlayContextualAnim.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayTask_PlayContextualAnim.OuterSingleton, Z_Construct_UClass_UGameplayTask_PlayContextualAnim_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameplayTask_PlayContextualAnim.OuterSingleton;
	}
	template<> GAMEPLAYINTERACTIONSMODULE_API UClass* StaticClass<UGameplayTask_PlayContextualAnim>()
	{
		return UGameplayTask_PlayContextualAnim::StaticClass();
	}

	void UGameplayTask_PlayContextualAnim::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_SectionIdx(TEXT("SectionIdx"));
		static const FName Name_AnimSetIdx(TEXT("AnimSetIdx"));
		static const FName Name_Pivots(TEXT("Pivots"));
		static const FName Name_SceneAsset(TEXT("SceneAsset"));
		static const FName Name_InteractorRole(TEXT("InteractorRole"));
		static const FName Name_InteractableObject(TEXT("InteractableObject"));
		static const FName Name_InteractableObjectRole(TEXT("InteractableObjectRole"));
		static const FName Name_ExitSectionName(TEXT("ExitSectionName"));

		const bool bIsValid = true
			&& Name_SectionIdx == ClassReps[(int32)ENetFields_Private::SectionIdx].Property->GetFName()
			&& Name_AnimSetIdx == ClassReps[(int32)ENetFields_Private::AnimSetIdx].Property->GetFName()
			&& Name_Pivots == ClassReps[(int32)ENetFields_Private::Pivots].Property->GetFName()
			&& Name_SceneAsset == ClassReps[(int32)ENetFields_Private::SceneAsset].Property->GetFName()
			&& Name_InteractorRole == ClassReps[(int32)ENetFields_Private::InteractorRole].Property->GetFName()
			&& Name_InteractableObject == ClassReps[(int32)ENetFields_Private::InteractableObject].Property->GetFName()
			&& Name_InteractableObjectRole == ClassReps[(int32)ENetFields_Private::InteractableObjectRole].Property->GetFName()
			&& Name_ExitSectionName == ClassReps[(int32)ENetFields_Private::ExitSectionName].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UGameplayTask_PlayContextualAnim"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayTask_PlayContextualAnim);
	UGameplayTask_PlayContextualAnim::~UGameplayTask_PlayContextualAnim() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayTask_PlayContextualAnim_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayTask_PlayContextualAnim_h_Statics::EnumInfo[] = {
		{ EPlayContextualAnimExitMode_StaticEnum, TEXT("EPlayContextualAnimExitMode"), &Z_Registration_Info_UEnum_EPlayContextualAnimExitMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3758542157U) },
		{ EPlayContextualAnimStatus_StaticEnum, TEXT("EPlayContextualAnimStatus"), &Z_Registration_Info_UEnum_EPlayContextualAnimStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1059984704U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayTask_PlayContextualAnim_h_Statics::ScriptStructInfo[] = {
		{ FGameplayActuationState_ContextualAnim::StaticStruct, Z_Construct_UScriptStruct_FGameplayActuationState_ContextualAnim_Statics::NewStructOps, TEXT("GameplayActuationState_ContextualAnim"), &Z_Registration_Info_UScriptStruct_GameplayActuationState_ContextualAnim, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayActuationState_ContextualAnim), 2437039914U) },
		{ FGameplayTransitionDesc_EnterContextualAnim::StaticStruct, Z_Construct_UScriptStruct_FGameplayTransitionDesc_EnterContextualAnim_Statics::NewStructOps, TEXT("GameplayTransitionDesc_EnterContextualAnim"), &Z_Registration_Info_UScriptStruct_GameplayTransitionDesc_EnterContextualAnim, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayTransitionDesc_EnterContextualAnim), 794089657U) },
		{ FGameplayTransitionDesc_ExitContextualAnim::StaticStruct, Z_Construct_UScriptStruct_FGameplayTransitionDesc_ExitContextualAnim_Statics::NewStructOps, TEXT("GameplayTransitionDesc_ExitContextualAnim"), &Z_Registration_Info_UScriptStruct_GameplayTransitionDesc_ExitContextualAnim, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayTransitionDesc_ExitContextualAnim), 2535209090U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayTask_PlayContextualAnim_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayTask_PlayContextualAnim, UGameplayTask_PlayContextualAnim::StaticClass, TEXT("UGameplayTask_PlayContextualAnim"), &Z_Registration_Info_UClass_UGameplayTask_PlayContextualAnim, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayTask_PlayContextualAnim), 3045584990U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayTask_PlayContextualAnim_h_3767631423(TEXT("/Script/GameplayInteractionsModule"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayTask_PlayContextualAnim_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayTask_PlayContextualAnim_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayTask_PlayContextualAnim_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayTask_PlayContextualAnim_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayTask_PlayContextualAnim_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayTask_PlayContextualAnim_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
