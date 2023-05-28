// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../AIModule/Classes/EnvironmentQuery/EQSTestingPawn.h"
#include "../../AIModule/Classes/EnvironmentQuery/EnvQueryTypes.h"
#include "../../Source/Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEQSTestingPawn() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_AEQSTestingPawn();
	AIMODULE_API UClass* Z_Construct_UClass_AEQSTestingPawn_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQuery_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEQSQueryResultSourceInterface_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEQSRenderingComponent_NoRegister();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEnvQueryHightlightMode();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEnvQueryRunMode();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDynamicParam();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FEnvNamedValue();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNavAgentProperties();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEnvQueryHightlightMode;
	static UEnum* EEnvQueryHightlightMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEnvQueryHightlightMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEnvQueryHightlightMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvQueryHightlightMode, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("EEnvQueryHightlightMode"));
		}
		return Z_Registration_Info_UEnum_EEnvQueryHightlightMode.OuterSingleton;
	}
	template<> AIMODULE_API UEnum* StaticEnum<EEnvQueryHightlightMode>()
	{
		return EEnvQueryHightlightMode_StaticEnum();
	}
	struct Z_Construct_UEnum_AIModule_EEnvQueryHightlightMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AIModule_EEnvQueryHightlightMode_Statics::Enumerators[] = {
		{ "EEnvQueryHightlightMode::All", (int64)EEnvQueryHightlightMode::All },
		{ "EEnvQueryHightlightMode::Best5Pct", (int64)EEnvQueryHightlightMode::Best5Pct },
		{ "EEnvQueryHightlightMode::Best25Pct", (int64)EEnvQueryHightlightMode::Best25Pct },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AIModule_EEnvQueryHightlightMode_Statics::Enum_MetaDataParams[] = {
		{ "All.Name", "EEnvQueryHightlightMode::All" },
		{ "Best25Pct.DisplayName", "Best 25%" },
		{ "Best25Pct.Name", "EEnvQueryHightlightMode::Best25Pct" },
		{ "Best5Pct.DisplayName", "Best 5%" },
		{ "Best5Pct.Name", "EEnvQueryHightlightMode::Best5Pct" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EQSTestingPawn.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AIModule_EEnvQueryHightlightMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		"EEnvQueryHightlightMode",
		"EEnvQueryHightlightMode",
		Z_Construct_UEnum_AIModule_EEnvQueryHightlightMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EEnvQueryHightlightMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AIModule_EEnvQueryHightlightMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EEnvQueryHightlightMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AIModule_EEnvQueryHightlightMode()
	{
		if (!Z_Registration_Info_UEnum_EEnvQueryHightlightMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEnvQueryHightlightMode.InnerSingleton, Z_Construct_UEnum_AIModule_EEnvQueryHightlightMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEnvQueryHightlightMode.InnerSingleton;
	}
	void AEQSTestingPawn::StaticRegisterNativesAEQSTestingPawn()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEQSTestingPawn);
	UClass* Z_Construct_UClass_AEQSTestingPawn_NoRegister()
	{
		return AEQSTestingPawn::StaticClass();
	}
	struct Z_Construct_UClass_AEQSTestingPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QueryTemplate_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_QueryTemplate;
		static const UECodeGen_Private::FStructPropertyParams NewProp_QueryParams_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QueryParams_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_QueryParams;
		static const UECodeGen_Private::FStructPropertyParams NewProp_QueryConfig_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QueryConfig_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_QueryConfig;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeLimitPerStep_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeLimitPerStep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StepToDebugDraw_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StepToDebugDraw;
		static const UECodeGen_Private::FBytePropertyParams NewProp_HighlightMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HighlightMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_HighlightMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawLabels_MetaData[];
#endif
		static void NewProp_bDrawLabels_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawLabels;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawFailedItems_MetaData[];
#endif
		static void NewProp_bDrawFailedItems_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawFailedItems;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReRunQueryOnlyOnFinishedMove_MetaData[];
#endif
		static void NewProp_bReRunQueryOnlyOnFinishedMove_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReRunQueryOnlyOnFinishedMove;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldBeVisibleInGame_MetaData[];
#endif
		static void NewProp_bShouldBeVisibleInGame_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldBeVisibleInGame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTickDuringGame_MetaData[];
#endif
		static void NewProp_bTickDuringGame_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTickDuringGame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QueryingMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_QueryingMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NavAgentProperties_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NavAgentProperties;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EdRenderComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EdRenderComp;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEQSTestingPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEQSTestingPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Advanced Attachment Mesh Animation Clothing Physics Rendering Lighting Activation CharacterMovement AgentPhysics Avoidance MovementComponent Velocity Shape Camera Input Layers SkeletalMesh Optimization Pawn Replication Actor Navigation" },
		{ "IncludePath", "EnvironmentQuery/EQSTestingPawn.h" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EQSTestingPawn.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_QueryTemplate_MetaData[] = {
		{ "Category", "EQS" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EQSTestingPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_QueryTemplate = { "QueryTemplate", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AEQSTestingPawn, QueryTemplate), Z_Construct_UClass_UEnvQuery_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_QueryTemplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_QueryTemplate_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_QueryParams_Inner = { "QueryParams", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FEnvNamedValue, METADATA_PARAMS(nullptr, 0) }; // 764008598
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_QueryParams_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EQSTestingPawn.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_QueryParams = { "QueryParams", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AEQSTestingPawn, QueryParams), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_QueryParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_QueryParams_MetaData)) }; // 764008598
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_QueryConfig_Inner = { "QueryConfig", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAIDynamicParam, METADATA_PARAMS(nullptr, 0) }; // 206899154
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_QueryConfig_MetaData[] = {
		{ "Category", "EQS" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EQSTestingPawn.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_QueryConfig = { "QueryConfig", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AEQSTestingPawn, QueryConfig), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_QueryConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_QueryConfig_MetaData)) }; // 206899154
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_TimeLimitPerStep_MetaData[] = {
		{ "Category", "EQS" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EQSTestingPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_TimeLimitPerStep = { "TimeLimitPerStep", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AEQSTestingPawn, TimeLimitPerStep), METADATA_PARAMS(Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_TimeLimitPerStep_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_TimeLimitPerStep_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_StepToDebugDraw_MetaData[] = {
		{ "Category", "EQS" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EQSTestingPawn.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_StepToDebugDraw = { "StepToDebugDraw", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AEQSTestingPawn, StepToDebugDraw), METADATA_PARAMS(Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_StepToDebugDraw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_StepToDebugDraw_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_HighlightMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_HighlightMode_MetaData[] = {
		{ "Category", "EQS" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EQSTestingPawn.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_HighlightMode = { "HighlightMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AEQSTestingPawn, HighlightMode), Z_Construct_UEnum_AIModule_EEnvQueryHightlightMode, METADATA_PARAMS(Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_HighlightMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_HighlightMode_MetaData)) }; // 3168922944
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_bDrawLabels_MetaData[] = {
		{ "Category", "EQS" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EQSTestingPawn.h" },
	};
#endif
	void Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_bDrawLabels_SetBit(void* Obj)
	{
		((AEQSTestingPawn*)Obj)->bDrawLabels = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_bDrawLabels = { "bDrawLabels", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(AEQSTestingPawn), &Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_bDrawLabels_SetBit, METADATA_PARAMS(Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_bDrawLabels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_bDrawLabels_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_bDrawFailedItems_MetaData[] = {
		{ "Category", "EQS" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EQSTestingPawn.h" },
	};
#endif
	void Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_bDrawFailedItems_SetBit(void* Obj)
	{
		((AEQSTestingPawn*)Obj)->bDrawFailedItems = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_bDrawFailedItems = { "bDrawFailedItems", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(AEQSTestingPawn), &Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_bDrawFailedItems_SetBit, METADATA_PARAMS(Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_bDrawFailedItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_bDrawFailedItems_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_bReRunQueryOnlyOnFinishedMove_MetaData[] = {
		{ "Category", "EQS" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EQSTestingPawn.h" },
	};
#endif
	void Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_bReRunQueryOnlyOnFinishedMove_SetBit(void* Obj)
	{
		((AEQSTestingPawn*)Obj)->bReRunQueryOnlyOnFinishedMove = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_bReRunQueryOnlyOnFinishedMove = { "bReRunQueryOnlyOnFinishedMove", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(AEQSTestingPawn), &Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_bReRunQueryOnlyOnFinishedMove_SetBit, METADATA_PARAMS(Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_bReRunQueryOnlyOnFinishedMove_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_bReRunQueryOnlyOnFinishedMove_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_bShouldBeVisibleInGame_MetaData[] = {
		{ "Category", "EQS" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EQSTestingPawn.h" },
	};
#endif
	void Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_bShouldBeVisibleInGame_SetBit(void* Obj)
	{
		((AEQSTestingPawn*)Obj)->bShouldBeVisibleInGame = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_bShouldBeVisibleInGame = { "bShouldBeVisibleInGame", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(AEQSTestingPawn), &Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_bShouldBeVisibleInGame_SetBit, METADATA_PARAMS(Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_bShouldBeVisibleInGame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_bShouldBeVisibleInGame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_bTickDuringGame_MetaData[] = {
		{ "Category", "EQS" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EQSTestingPawn.h" },
	};
#endif
	void Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_bTickDuringGame_SetBit(void* Obj)
	{
		((AEQSTestingPawn*)Obj)->bTickDuringGame = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_bTickDuringGame = { "bTickDuringGame", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(AEQSTestingPawn), &Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_bTickDuringGame_SetBit, METADATA_PARAMS(Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_bTickDuringGame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_bTickDuringGame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_QueryingMode_MetaData[] = {
		{ "Category", "EQS" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EQSTestingPawn.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_QueryingMode = { "QueryingMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AEQSTestingPawn, QueryingMode), Z_Construct_UEnum_AIModule_EEnvQueryRunMode, METADATA_PARAMS(Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_QueryingMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_QueryingMode_MetaData)) }; // 61795048
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_NavAgentProperties_MetaData[] = {
		{ "Category", "EQS" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EQSTestingPawn.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_NavAgentProperties = { "NavAgentProperties", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AEQSTestingPawn, NavAgentProperties), Z_Construct_UScriptStruct_FNavAgentProperties, METADATA_PARAMS(Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_NavAgentProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_NavAgentProperties_MetaData)) }; // 54026142
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_EdRenderComp_MetaData[] = {
		{ "Comment", "/** Editor Preview */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EQSTestingPawn.h" },
		{ "ToolTip", "Editor Preview" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_EdRenderComp = { "EdRenderComp", nullptr, (EPropertyFlags)0x0044000800082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AEQSTestingPawn, EdRenderComp), Z_Construct_UClass_UEQSRenderingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_EdRenderComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_EdRenderComp_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEQSTestingPawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_QueryTemplate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_QueryParams_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_QueryParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_QueryConfig_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_QueryConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_TimeLimitPerStep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_StepToDebugDraw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_HighlightMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_HighlightMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_bDrawLabels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_bDrawFailedItems,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_bReRunQueryOnlyOnFinishedMove,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_bShouldBeVisibleInGame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_bTickDuringGame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_QueryingMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_NavAgentProperties,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEQSTestingPawn_Statics::NewProp_EdRenderComp,
#endif // WITH_EDITORONLY_DATA
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEQSTestingPawn_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UEQSQueryResultSourceInterface_NoRegister, (int32)VTABLE_OFFSET(AEQSTestingPawn, IEQSQueryResultSourceInterface), false },  // 2873600889
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEQSTestingPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEQSTestingPawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEQSTestingPawn_Statics::ClassParams = {
		&AEQSTestingPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEQSTestingPawn_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEQSTestingPawn_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x049000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEQSTestingPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEQSTestingPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEQSTestingPawn()
	{
		if (!Z_Registration_Info_UClass_AEQSTestingPawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEQSTestingPawn.OuterSingleton, Z_Construct_UClass_AEQSTestingPawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEQSTestingPawn.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<AEQSTestingPawn>()
	{
		return AEQSTestingPawn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEQSTestingPawn);
	AEQSTestingPawn::~AEQSTestingPawn() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSTestingPawn_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSTestingPawn_h_Statics::EnumInfo[] = {
		{ EEnvQueryHightlightMode_StaticEnum, TEXT("EEnvQueryHightlightMode"), &Z_Registration_Info_UEnum_EEnvQueryHightlightMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3168922944U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSTestingPawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEQSTestingPawn, AEQSTestingPawn::StaticClass, TEXT("AEQSTestingPawn"), &Z_Registration_Info_UClass_AEQSTestingPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEQSTestingPawn), 2804079475U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSTestingPawn_h_4192909983(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSTestingPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSTestingPawn_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSTestingPawn_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EQSTestingPawn_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
