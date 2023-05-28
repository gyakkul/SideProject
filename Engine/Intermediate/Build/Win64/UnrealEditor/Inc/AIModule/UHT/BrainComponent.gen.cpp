// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../AIModule/Classes/BrainComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBrainComponent() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAIResourceInterface_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBrainComponent();
	AIMODULE_API UClass* Z_Construct_UClass_UBrainComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	DEFINE_FUNCTION(UBrainComponent::execIsPaused)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPaused();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBrainComponent::execIsRunning)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsRunning();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBrainComponent::execStopLogic)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Reason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopLogic(Z_Param_Reason);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBrainComponent::execRestartLogic)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RestartLogic();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBrainComponent::execStartLogic)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartLogic();
		P_NATIVE_END;
	}
	void UBrainComponent::StaticRegisterNativesUBrainComponent()
	{
		UClass* Class = UBrainComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsPaused", &UBrainComponent::execIsPaused },
			{ "IsRunning", &UBrainComponent::execIsRunning },
			{ "RestartLogic", &UBrainComponent::execRestartLogic },
			{ "StartLogic", &UBrainComponent::execStartLogic },
			{ "StopLogic", &UBrainComponent::execStopLogic },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBrainComponent_IsPaused_Statics
	{
		struct BrainComponent_eventIsPaused_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBrainComponent_IsPaused_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BrainComponent_eventIsPaused_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBrainComponent_IsPaused_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BrainComponent_eventIsPaused_Parms), &Z_Construct_UFunction_UBrainComponent_IsPaused_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBrainComponent_IsPaused_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBrainComponent_IsPaused_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBrainComponent_IsPaused_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Logic" },
		{ "ModuleRelativePath", "Classes/BrainComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBrainComponent_IsPaused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBrainComponent, nullptr, "IsPaused", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBrainComponent_IsPaused_Statics::BrainComponent_eventIsPaused_Parms), Z_Construct_UFunction_UBrainComponent_IsPaused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBrainComponent_IsPaused_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBrainComponent_IsPaused_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBrainComponent_IsPaused_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBrainComponent_IsPaused()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBrainComponent_IsPaused_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBrainComponent_IsRunning_Statics
	{
		struct BrainComponent_eventIsRunning_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBrainComponent_IsRunning_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BrainComponent_eventIsRunning_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBrainComponent_IsRunning_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BrainComponent_eventIsRunning_Parms), &Z_Construct_UFunction_UBrainComponent_IsRunning_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBrainComponent_IsRunning_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBrainComponent_IsRunning_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBrainComponent_IsRunning_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Logic" },
		{ "ModuleRelativePath", "Classes/BrainComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBrainComponent_IsRunning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBrainComponent, nullptr, "IsRunning", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBrainComponent_IsRunning_Statics::BrainComponent_eventIsRunning_Parms), Z_Construct_UFunction_UBrainComponent_IsRunning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBrainComponent_IsRunning_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBrainComponent_IsRunning_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBrainComponent_IsRunning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBrainComponent_IsRunning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBrainComponent_IsRunning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBrainComponent_RestartLogic_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBrainComponent_RestartLogic_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Logic" },
		{ "Comment", "/** Restarts currently running or previously ran brain logic. */" },
		{ "ModuleRelativePath", "Classes/BrainComponent.h" },
		{ "ToolTip", "Restarts currently running or previously ran brain logic." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBrainComponent_RestartLogic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBrainComponent, nullptr, "RestartLogic", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBrainComponent_RestartLogic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBrainComponent_RestartLogic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBrainComponent_RestartLogic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBrainComponent_RestartLogic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBrainComponent_StartLogic_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBrainComponent_StartLogic_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Logic" },
		{ "Comment", "/** Starts brain logic. If brain is already running, will not do anything. */" },
		{ "ModuleRelativePath", "Classes/BrainComponent.h" },
		{ "ToolTip", "Starts brain logic. If brain is already running, will not do anything." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBrainComponent_StartLogic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBrainComponent, nullptr, "StartLogic", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBrainComponent_StartLogic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBrainComponent_StartLogic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBrainComponent_StartLogic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBrainComponent_StartLogic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBrainComponent_StopLogic_Statics
	{
		struct BrainComponent_eventStopLogic_Parms
		{
			FString Reason;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Reason_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Reason;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBrainComponent_StopLogic_Statics::NewProp_Reason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBrainComponent_StopLogic_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BrainComponent_eventStopLogic_Parms, Reason), METADATA_PARAMS(Z_Construct_UFunction_UBrainComponent_StopLogic_Statics::NewProp_Reason_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBrainComponent_StopLogic_Statics::NewProp_Reason_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBrainComponent_StopLogic_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBrainComponent_StopLogic_Statics::NewProp_Reason,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBrainComponent_StopLogic_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Logic" },
		{ "Comment", "/** Stops currently running brain logic. */" },
		{ "ModuleRelativePath", "Classes/BrainComponent.h" },
		{ "ToolTip", "Stops currently running brain logic." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBrainComponent_StopLogic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBrainComponent, nullptr, "StopLogic", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBrainComponent_StopLogic_Statics::BrainComponent_eventStopLogic_Parms), Z_Construct_UFunction_UBrainComponent_StopLogic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBrainComponent_StopLogic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBrainComponent_StopLogic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBrainComponent_StopLogic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBrainComponent_StopLogic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBrainComponent_StopLogic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBrainComponent);
	UClass* Z_Construct_UClass_UBrainComponent_NoRegister()
	{
		return UBrainComponent::StaticClass();
	}
	struct Z_Construct_UClass_UBrainComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlackboardComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BlackboardComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AIOwner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AIOwner;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBrainComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBrainComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBrainComponent_IsPaused, "IsPaused" }, // 2629896186
		{ &Z_Construct_UFunction_UBrainComponent_IsRunning, "IsRunning" }, // 658808535
		{ &Z_Construct_UFunction_UBrainComponent_RestartLogic, "RestartLogic" }, // 4260516493
		{ &Z_Construct_UFunction_UBrainComponent_StartLogic, "StartLogic" }, // 636888495
		{ &Z_Construct_UFunction_UBrainComponent_StopLogic, "StopLogic" }, // 4161912469
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBrainComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "AI" },
		{ "HideCategories", "Sockets Collision" },
		{ "IncludePath", "BrainComponent.h" },
		{ "ModuleRelativePath", "Classes/BrainComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBrainComponent_Statics::NewProp_BlackboardComp_MetaData[] = {
		{ "Comment", "/** blackboard component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/BrainComponent.h" },
		{ "ToolTip", "blackboard component" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBrainComponent_Statics::NewProp_BlackboardComp = { "BlackboardComp", nullptr, (EPropertyFlags)0x0024080000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBrainComponent, BlackboardComp), Z_Construct_UClass_UBlackboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBrainComponent_Statics::NewProp_BlackboardComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBrainComponent_Statics::NewProp_BlackboardComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBrainComponent_Statics::NewProp_AIOwner_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BrainComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBrainComponent_Statics::NewProp_AIOwner = { "AIOwner", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBrainComponent, AIOwner), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBrainComponent_Statics::NewProp_AIOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBrainComponent_Statics::NewProp_AIOwner_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBrainComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrainComponent_Statics::NewProp_BlackboardComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrainComponent_Statics::NewProp_AIOwner,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UBrainComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAIResourceInterface_NoRegister, (int32)VTABLE_OFFSET(UBrainComponent, IAIResourceInterface), false },  // 3634866635
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBrainComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBrainComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBrainComponent_Statics::ClassParams = {
		&UBrainComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBrainComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBrainComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBrainComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBrainComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBrainComponent()
	{
		if (!Z_Registration_Info_UClass_UBrainComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBrainComponent.OuterSingleton, Z_Construct_UClass_UBrainComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBrainComponent.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<UBrainComponent>()
	{
		return UBrainComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBrainComponent);
	UBrainComponent::~UBrainComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BrainComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BrainComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBrainComponent, UBrainComponent::StaticClass, TEXT("UBrainComponent"), &Z_Registration_Info_UClass_UBrainComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBrainComponent), 917759265U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BrainComponent_h_2360348600(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BrainComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BrainComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
