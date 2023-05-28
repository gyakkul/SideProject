// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Abilities/Tasks/AbilityTask_ApplyRootMotion_Base.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityTask_ApplyRootMotion_Base() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERootMotionFinishVelocityMode();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_ApplyRootMotion_Base();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_ApplyRootMotion_Base_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References
	void UAbilityTask_ApplyRootMotion_Base::StaticRegisterNativesUAbilityTask_ApplyRootMotion_Base()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityTask_ApplyRootMotion_Base);
	UClass* Z_Construct_UClass_UAbilityTask_ApplyRootMotion_Base_NoRegister()
	{
		return UAbilityTask_ApplyRootMotion_Base::StaticClass();
	}
	struct Z_Construct_UClass_UAbilityTask_ApplyRootMotion_Base_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForceName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ForceName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FinishVelocityMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FinishVelocityMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FinishVelocityMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FinishSetVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FinishSetVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FinishClampVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FinishClampVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MovementComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAbilityTask_ApplyRootMotion_Base_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilityTask,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_ApplyRootMotion_Base_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Base class for ability tasks that apply root motion */" },
		{ "IncludePath", "Abilities/Tasks/AbilityTask_ApplyRootMotion_Base.h" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_ApplyRootMotion_Base.h" },
		{ "ToolTip", "Base class for ability tasks that apply root motion" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_ApplyRootMotion_Base_Statics::NewProp_ForceName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_ApplyRootMotion_Base.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAbilityTask_ApplyRootMotion_Base_Statics::NewProp_ForceName = { "ForceName", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAbilityTask_ApplyRootMotion_Base, ForceName), METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_ApplyRootMotion_Base_Statics::NewProp_ForceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_ApplyRootMotion_Base_Statics::NewProp_ForceName_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAbilityTask_ApplyRootMotion_Base_Statics::NewProp_FinishVelocityMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_ApplyRootMotion_Base_Statics::NewProp_FinishVelocityMode_MetaData[] = {
		{ "Comment", "/** What to do with character's Velocity when root motion finishes */" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_ApplyRootMotion_Base.h" },
		{ "ToolTip", "What to do with character's Velocity when root motion finishes" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAbilityTask_ApplyRootMotion_Base_Statics::NewProp_FinishVelocityMode = { "FinishVelocityMode", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAbilityTask_ApplyRootMotion_Base, FinishVelocityMode), Z_Construct_UEnum_Engine_ERootMotionFinishVelocityMode, METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_ApplyRootMotion_Base_Statics::NewProp_FinishVelocityMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_ApplyRootMotion_Base_Statics::NewProp_FinishVelocityMode_MetaData)) }; // 2218287550
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_ApplyRootMotion_Base_Statics::NewProp_FinishSetVelocity_MetaData[] = {
		{ "Comment", "/** If FinishVelocityMode mode is \"SetVelocity\", character velocity is set to this value when root motion finishes */" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_ApplyRootMotion_Base.h" },
		{ "ToolTip", "If FinishVelocityMode mode is \"SetVelocity\", character velocity is set to this value when root motion finishes" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbilityTask_ApplyRootMotion_Base_Statics::NewProp_FinishSetVelocity = { "FinishSetVelocity", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAbilityTask_ApplyRootMotion_Base, FinishSetVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_ApplyRootMotion_Base_Statics::NewProp_FinishSetVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_ApplyRootMotion_Base_Statics::NewProp_FinishSetVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_ApplyRootMotion_Base_Statics::NewProp_FinishClampVelocity_MetaData[] = {
		{ "Comment", "/** If FinishVelocityMode mode is \"ClampVelocity\", character velocity is clamped to this value when root motion finishes */" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_ApplyRootMotion_Base.h" },
		{ "ToolTip", "If FinishVelocityMode mode is \"ClampVelocity\", character velocity is clamped to this value when root motion finishes" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAbilityTask_ApplyRootMotion_Base_Statics::NewProp_FinishClampVelocity = { "FinishClampVelocity", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAbilityTask_ApplyRootMotion_Base, FinishClampVelocity), METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_ApplyRootMotion_Base_Statics::NewProp_FinishClampVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_ApplyRootMotion_Base_Statics::NewProp_FinishClampVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_ApplyRootMotion_Base_Statics::NewProp_MovementComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_ApplyRootMotion_Base.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAbilityTask_ApplyRootMotion_Base_Statics::NewProp_MovementComponent = { "MovementComponent", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAbilityTask_ApplyRootMotion_Base, MovementComponent), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_ApplyRootMotion_Base_Statics::NewProp_MovementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_ApplyRootMotion_Base_Statics::NewProp_MovementComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityTask_ApplyRootMotion_Base_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_ApplyRootMotion_Base_Statics::NewProp_ForceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_ApplyRootMotion_Base_Statics::NewProp_FinishVelocityMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_ApplyRootMotion_Base_Statics::NewProp_FinishVelocityMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_ApplyRootMotion_Base_Statics::NewProp_FinishSetVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_ApplyRootMotion_Base_Statics::NewProp_FinishClampVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_ApplyRootMotion_Base_Statics::NewProp_MovementComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAbilityTask_ApplyRootMotion_Base_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityTask_ApplyRootMotion_Base>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityTask_ApplyRootMotion_Base_Statics::ClassParams = {
		&UAbilityTask_ApplyRootMotion_Base::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAbilityTask_ApplyRootMotion_Base_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_ApplyRootMotion_Base_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_ApplyRootMotion_Base_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_ApplyRootMotion_Base_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAbilityTask_ApplyRootMotion_Base()
	{
		if (!Z_Registration_Info_UClass_UAbilityTask_ApplyRootMotion_Base.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityTask_ApplyRootMotion_Base.OuterSingleton, Z_Construct_UClass_UAbilityTask_ApplyRootMotion_Base_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAbilityTask_ApplyRootMotion_Base.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UClass* StaticClass<UAbilityTask_ApplyRootMotion_Base>()
	{
		return UAbilityTask_ApplyRootMotion_Base::StaticClass();
	}

	void UAbilityTask_ApplyRootMotion_Base::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_ForceName(TEXT("ForceName"));
		static const FName Name_FinishVelocityMode(TEXT("FinishVelocityMode"));
		static const FName Name_FinishSetVelocity(TEXT("FinishSetVelocity"));
		static const FName Name_FinishClampVelocity(TEXT("FinishClampVelocity"));

		const bool bIsValid = true
			&& Name_ForceName == ClassReps[(int32)ENetFields_Private::ForceName].Property->GetFName()
			&& Name_FinishVelocityMode == ClassReps[(int32)ENetFields_Private::FinishVelocityMode].Property->GetFName()
			&& Name_FinishSetVelocity == ClassReps[(int32)ENetFields_Private::FinishSetVelocity].Property->GetFName()
			&& Name_FinishClampVelocity == ClassReps[(int32)ENetFields_Private::FinishClampVelocity].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UAbilityTask_ApplyRootMotion_Base"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityTask_ApplyRootMotion_Base);
	UAbilityTask_ApplyRootMotion_Base::~UAbilityTask_ApplyRootMotion_Base() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotion_Base_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotion_Base_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityTask_ApplyRootMotion_Base, UAbilityTask_ApplyRootMotion_Base::StaticClass, TEXT("UAbilityTask_ApplyRootMotion_Base"), &Z_Registration_Info_UClass_UAbilityTask_ApplyRootMotion_Base, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityTask_ApplyRootMotion_Base), 1013290878U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotion_Base_h_3109831658(TEXT("/Script/GameplayAbilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotion_Base_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotion_Base_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
