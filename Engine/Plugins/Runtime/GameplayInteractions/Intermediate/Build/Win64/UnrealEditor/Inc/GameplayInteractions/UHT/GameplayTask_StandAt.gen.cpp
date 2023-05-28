// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayTask_StandAt.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayTask_StandAt() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
	GAMEPLAYINTERACTIONSMODULE_API UClass* Z_Construct_UClass_UGameplayActuationStateProvider_NoRegister();
	GAMEPLAYINTERACTIONSMODULE_API UClass* Z_Construct_UClass_UGameplayTask_StandAt();
	GAMEPLAYINTERACTIONSMODULE_API UClass* Z_Construct_UClass_UGameplayTask_StandAt_NoRegister();
	GAMEPLAYINTERACTIONSMODULE_API UFunction* Z_Construct_UDelegateFunction_GameplayInteractionsModule_GameplayTaskActuationCompleted__DelegateSignature();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTask();
	GAMEPLAYTASKS_API UFunction* Z_Construct_UDelegateFunction_UGameplayTask_GenericGameplayTaskDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_GameplayInteractionsModule();
// End Cross Module References
	DEFINE_FUNCTION(UGameplayTask_StandAt::execStandAt)
	{
		P_GET_OBJECT(APawn,Z_Param_Pawn);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGameplayTask_StandAt**)Z_Param__Result=UGameplayTask_StandAt::StandAt(Z_Param_Pawn,Z_Param_Duration);
		P_NATIVE_END;
	}
	void UGameplayTask_StandAt::StaticRegisterNativesUGameplayTask_StandAt()
	{
		UClass* Class = UGameplayTask_StandAt::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StandAt", &UGameplayTask_StandAt::execStandAt },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameplayTask_StandAt_StandAt_Statics
	{
		struct GameplayTask_StandAt_eventStandAt_Parms
		{
			APawn* Pawn;
			float Duration;
			UGameplayTask_StandAt* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Pawn;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayTask_StandAt_StandAt_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayTask_StandAt_eventStandAt_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayTask_StandAt_StandAt_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayTask_StandAt_eventStandAt_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayTask_StandAt_StandAt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayTask_StandAt_eventStandAt_Parms, ReturnValue), Z_Construct_UClass_UGameplayTask_StandAt_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayTask_StandAt_StandAt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTask_StandAt_StandAt_Statics::NewProp_Pawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTask_StandAt_StandAt_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTask_StandAt_StandAt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayTask_StandAt_StandAt_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "AcceptanceRadius,StopOnOverlap,AcceptPartialPath,bUsePathfinding,bUseContinuousGoalTracking,ProjectGoalOnNavigation" },
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "AI|Tasks" },
		{ "DefaultToSelf", "Pawn" },
		{ "DisplayName", "GP Stand At" },
		{ "ModuleRelativePath", "Public/GameplayTask_StandAt.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayTask_StandAt_StandAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayTask_StandAt, nullptr, "StandAt", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameplayTask_StandAt_StandAt_Statics::GameplayTask_StandAt_eventStandAt_Parms), Z_Construct_UFunction_UGameplayTask_StandAt_StandAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTask_StandAt_StandAt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayTask_StandAt_StandAt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTask_StandAt_StandAt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayTask_StandAt_StandAt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayTask_StandAt_StandAt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayTask_StandAt);
	UClass* Z_Construct_UClass_UGameplayTask_StandAt_NoRegister()
	{
		return UGameplayTask_StandAt::StaticClass();
	}
	struct Z_Construct_UClass_UGameplayTask_StandAt_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MovementComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameplayTask_StandAt_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayTask,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayInteractionsModule,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameplayTask_StandAt_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameplayTask_StandAt_StandAt, "StandAt" }, // 3161041775
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTask_StandAt_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameplayTask_StandAt.h" },
		{ "ModuleRelativePath", "Public/GameplayTask_StandAt.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTask_StandAt_Statics::NewProp_OnRequestFailed_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayTask_StandAt.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGameplayTask_StandAt_Statics::NewProp_OnRequestFailed = { "OnRequestFailed", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayTask_StandAt, OnRequestFailed), Z_Construct_UDelegateFunction_UGameplayTask_GenericGameplayTaskDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGameplayTask_StandAt_Statics::NewProp_OnRequestFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTask_StandAt_Statics::NewProp_OnRequestFailed_MetaData)) }; // 2832075636
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTask_StandAt_Statics::NewProp_OnCompleted_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayTask_StandAt.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGameplayTask_StandAt_Statics::NewProp_OnCompleted = { "OnCompleted", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayTask_StandAt, OnCompleted), Z_Construct_UDelegateFunction_GameplayInteractionsModule_GameplayTaskActuationCompleted__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGameplayTask_StandAt_Statics::NewProp_OnCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTask_StandAt_Statics::NewProp_OnCompleted_MetaData)) }; // 3436453873
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTask_StandAt_Statics::NewProp_MovementComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameplayTask_StandAt.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGameplayTask_StandAt_Statics::NewProp_MovementComponent = { "MovementComponent", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayTask_StandAt, MovementComponent), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameplayTask_StandAt_Statics::NewProp_MovementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTask_StandAt_Statics::NewProp_MovementComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameplayTask_StandAt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTask_StandAt_Statics::NewProp_OnRequestFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTask_StandAt_Statics::NewProp_OnCompleted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTask_StandAt_Statics::NewProp_MovementComponent,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UGameplayTask_StandAt_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGameplayActuationStateProvider_NoRegister, (int32)VTABLE_OFFSET(UGameplayTask_StandAt, IGameplayActuationStateProvider), false },  // 4292633833
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameplayTask_StandAt_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayTask_StandAt>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayTask_StandAt_Statics::ClassParams = {
		&UGameplayTask_StandAt::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGameplayTask_StandAt_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTask_StandAt_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGameplayTask_StandAt_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTask_StandAt_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameplayTask_StandAt()
	{
		if (!Z_Registration_Info_UClass_UGameplayTask_StandAt.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayTask_StandAt.OuterSingleton, Z_Construct_UClass_UGameplayTask_StandAt_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameplayTask_StandAt.OuterSingleton;
	}
	template<> GAMEPLAYINTERACTIONSMODULE_API UClass* StaticClass<UGameplayTask_StandAt>()
	{
		return UGameplayTask_StandAt::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayTask_StandAt);
	UGameplayTask_StandAt::~UGameplayTask_StandAt() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayTask_StandAt_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayTask_StandAt_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayTask_StandAt, UGameplayTask_StandAt::StaticClass, TEXT("UGameplayTask_StandAt"), &Z_Registration_Info_UClass_UGameplayTask_StandAt, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayTask_StandAt), 982673242U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayTask_StandAt_h_1021635497(TEXT("/Script/GameplayInteractionsModule"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayTask_StandAt_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayTask_StandAt_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
