// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../AIModule/Classes/Perception/AISense_Blueprint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISense_Blueprint() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAISense();
	AIMODULE_API UClass* Z_Construct_UClass_UAISense_Blueprint();
	AIMODULE_API UClass* Z_Construct_UClass_UAISense_Blueprint_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseEvent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UUserDefinedStruct_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	DEFINE_FUNCTION(UAISense_Blueprint::execGetAllListenerComponents)
	{
		P_GET_TARRAY_REF(UAIPerceptionComponent*,Z_Param_Out_ListenerComponents);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllListenerComponents(Z_Param_Out_ListenerComponents);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAISense_Blueprint::execGetAllListenerActors)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ListenerActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllListenerActors(Z_Param_Out_ListenerActors);
		P_NATIVE_END;
	}
	struct AISense_Blueprint_eventK2_OnNewPawn_Parms
	{
		APawn* NewPawn;
	};
	struct AISense_Blueprint_eventOnListenerRegistered_Parms
	{
		AActor* ActorListener;
		UAIPerceptionComponent* PerceptionComponent;
	};
	struct AISense_Blueprint_eventOnListenerUnregistered_Parms
	{
		AActor* ActorListener;
		UAIPerceptionComponent* PerceptionComponent;
	};
	struct AISense_Blueprint_eventOnListenerUpdated_Parms
	{
		AActor* ActorListener;
		UAIPerceptionComponent* PerceptionComponent;
	};
	struct AISense_Blueprint_eventOnUpdate_Parms
	{
		TArray<UAISenseEvent*> EventsToProcess;
		float ReturnValue;

		/** Constructor, initializes return property only **/
		AISense_Blueprint_eventOnUpdate_Parms()
			: ReturnValue(0)
		{
		}
	};
	static FName NAME_UAISense_Blueprint_K2_OnNewPawn = FName(TEXT("K2_OnNewPawn"));
	void UAISense_Blueprint::K2_OnNewPawn(APawn* NewPawn)
	{
		AISense_Blueprint_eventK2_OnNewPawn_Parms Parms;
		Parms.NewPawn=NewPawn;
		ProcessEvent(FindFunctionChecked(NAME_UAISense_Blueprint_K2_OnNewPawn),&Parms);
	}
	static FName NAME_UAISense_Blueprint_OnListenerRegistered = FName(TEXT("OnListenerRegistered"));
	void UAISense_Blueprint::OnListenerRegistered(AActor* ActorListener, UAIPerceptionComponent* PerceptionComponent)
	{
		AISense_Blueprint_eventOnListenerRegistered_Parms Parms;
		Parms.ActorListener=ActorListener;
		Parms.PerceptionComponent=PerceptionComponent;
		ProcessEvent(FindFunctionChecked(NAME_UAISense_Blueprint_OnListenerRegistered),&Parms);
	}
	static FName NAME_UAISense_Blueprint_OnListenerUnregistered = FName(TEXT("OnListenerUnregistered"));
	void UAISense_Blueprint::OnListenerUnregistered(AActor* ActorListener, UAIPerceptionComponent* PerceptionComponent)
	{
		AISense_Blueprint_eventOnListenerUnregistered_Parms Parms;
		Parms.ActorListener=ActorListener;
		Parms.PerceptionComponent=PerceptionComponent;
		ProcessEvent(FindFunctionChecked(NAME_UAISense_Blueprint_OnListenerUnregistered),&Parms);
	}
	static FName NAME_UAISense_Blueprint_OnListenerUpdated = FName(TEXT("OnListenerUpdated"));
	void UAISense_Blueprint::OnListenerUpdated(AActor* ActorListener, UAIPerceptionComponent* PerceptionComponent)
	{
		AISense_Blueprint_eventOnListenerUpdated_Parms Parms;
		Parms.ActorListener=ActorListener;
		Parms.PerceptionComponent=PerceptionComponent;
		ProcessEvent(FindFunctionChecked(NAME_UAISense_Blueprint_OnListenerUpdated),&Parms);
	}
	static FName NAME_UAISense_Blueprint_OnUpdate = FName(TEXT("OnUpdate"));
	float UAISense_Blueprint::OnUpdate(TArray<UAISenseEvent*> const& EventsToProcess)
	{
		AISense_Blueprint_eventOnUpdate_Parms Parms;
		Parms.EventsToProcess=EventsToProcess;
		ProcessEvent(FindFunctionChecked(NAME_UAISense_Blueprint_OnUpdate),&Parms);
		return Parms.ReturnValue;
	}
	void UAISense_Blueprint::StaticRegisterNativesUAISense_Blueprint()
	{
		UClass* Class = UAISense_Blueprint::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAllListenerActors", &UAISense_Blueprint::execGetAllListenerActors },
			{ "GetAllListenerComponents", &UAISense_Blueprint::execGetAllListenerComponents },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerActors_Statics
	{
		struct AISense_Blueprint_eventGetAllListenerActors_Parms
		{
			TArray<AActor*> ListenerActors;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ListenerActors_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ListenerActors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerActors_Statics::NewProp_ListenerActors_Inner = { "ListenerActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerActors_Statics::NewProp_ListenerActors = { "ListenerActors", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AISense_Blueprint_eventGetAllListenerActors_Parms, ListenerActors), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerActors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerActors_Statics::NewProp_ListenerActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerActors_Statics::NewProp_ListenerActors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Perception" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Blueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAISense_Blueprint, nullptr, "GetAllListenerActors", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerActors_Statics::AISense_Blueprint_eventGetAllListenerActors_Parms), Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerComponents_Statics
	{
		struct AISense_Blueprint_eventGetAllListenerComponents_Parms
		{
			TArray<UAIPerceptionComponent*> ListenerComponents;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ListenerComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ListenerComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ListenerComponents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerComponents_Statics::NewProp_ListenerComponents_Inner = { "ListenerComponents", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerComponents_Statics::NewProp_ListenerComponents_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerComponents_Statics::NewProp_ListenerComponents = { "ListenerComponents", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AISense_Blueprint_eventGetAllListenerComponents_Parms, ListenerComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerComponents_Statics::NewProp_ListenerComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerComponents_Statics::NewProp_ListenerComponents_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerComponents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerComponents_Statics::NewProp_ListenerComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerComponents_Statics::NewProp_ListenerComponents,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerComponents_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Perception" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Blueprint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAISense_Blueprint, nullptr, "GetAllListenerComponents", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerComponents_Statics::AISense_Blueprint_eventGetAllListenerComponents_Parms), Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerComponents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerComponents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerComponents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerComponents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAISense_Blueprint_K2_OnNewPawn_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewPawn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAISense_Blueprint_K2_OnNewPawn_Statics::NewProp_NewPawn = { "NewPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AISense_Blueprint_eventK2_OnNewPawn_Parms, NewPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAISense_Blueprint_K2_OnNewPawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Blueprint_K2_OnNewPawn_Statics::NewProp_NewPawn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAISense_Blueprint_K2_OnNewPawn_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** called when sense's instance gets notified about new pawn that has just been spawned */" },
		{ "DisplayName", "OnNewPawn" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Blueprint.h" },
		{ "ScriptName", "OnNewPawn" },
		{ "ToolTip", "called when sense's instance gets notified about new pawn that has just been spawned" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAISense_Blueprint_K2_OnNewPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAISense_Blueprint, nullptr, "K2_OnNewPawn", nullptr, nullptr, sizeof(AISense_Blueprint_eventK2_OnNewPawn_Parms), Z_Construct_UFunction_UAISense_Blueprint_K2_OnNewPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAISense_Blueprint_K2_OnNewPawn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAISense_Blueprint_K2_OnNewPawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAISense_Blueprint_K2_OnNewPawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAISense_Blueprint_K2_OnNewPawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAISense_Blueprint_K2_OnNewPawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAISense_Blueprint_OnListenerRegistered_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorListener;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerceptionComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PerceptionComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAISense_Blueprint_OnListenerRegistered_Statics::NewProp_ActorListener = { "ActorListener", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AISense_Blueprint_eventOnListenerRegistered_Parms, ActorListener), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAISense_Blueprint_OnListenerRegistered_Statics::NewProp_PerceptionComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAISense_Blueprint_OnListenerRegistered_Statics::NewProp_PerceptionComponent = { "PerceptionComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AISense_Blueprint_eventOnListenerRegistered_Parms, PerceptionComponent), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAISense_Blueprint_OnListenerRegistered_Statics::NewProp_PerceptionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAISense_Blueprint_OnListenerRegistered_Statics::NewProp_PerceptionComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAISense_Blueprint_OnListenerRegistered_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Blueprint_OnListenerRegistered_Statics::NewProp_ActorListener,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Blueprint_OnListenerRegistered_Statics::NewProp_PerceptionComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAISense_Blueprint_OnListenerRegistered_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 *\x09@param PerceptionComponent is ActorListener's AIPerceptionComponent instance\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Blueprint.h" },
		{ "ToolTip", "@param PerceptionComponent is ActorListener's AIPerceptionComponent instance" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAISense_Blueprint_OnListenerRegistered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAISense_Blueprint, nullptr, "OnListenerRegistered", nullptr, nullptr, sizeof(AISense_Blueprint_eventOnListenerRegistered_Parms), Z_Construct_UFunction_UAISense_Blueprint_OnListenerRegistered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAISense_Blueprint_OnListenerRegistered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAISense_Blueprint_OnListenerRegistered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAISense_Blueprint_OnListenerRegistered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAISense_Blueprint_OnListenerRegistered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAISense_Blueprint_OnListenerRegistered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAISense_Blueprint_OnListenerUnregistered_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorListener;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerceptionComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PerceptionComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAISense_Blueprint_OnListenerUnregistered_Statics::NewProp_ActorListener = { "ActorListener", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AISense_Blueprint_eventOnListenerUnregistered_Parms, ActorListener), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAISense_Blueprint_OnListenerUnregistered_Statics::NewProp_PerceptionComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAISense_Blueprint_OnListenerUnregistered_Statics::NewProp_PerceptionComponent = { "PerceptionComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AISense_Blueprint_eventOnListenerUnregistered_Parms, PerceptionComponent), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAISense_Blueprint_OnListenerUnregistered_Statics::NewProp_PerceptionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAISense_Blueprint_OnListenerUnregistered_Statics::NewProp_PerceptionComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAISense_Blueprint_OnListenerUnregistered_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Blueprint_OnListenerUnregistered_Statics::NewProp_ActorListener,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Blueprint_OnListenerUnregistered_Statics::NewProp_PerceptionComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAISense_Blueprint_OnListenerUnregistered_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** called when a listener unregistered from this sense. Most often this is called due to actor's death\n\x09 *\x09@param PerceptionComponent is ActorListener's AIPerceptionComponent instance\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Blueprint.h" },
		{ "ToolTip", "called when a listener unregistered from this sense. Most often this is called due to actor's death\n    @param PerceptionComponent is ActorListener's AIPerceptionComponent instance" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAISense_Blueprint_OnListenerUnregistered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAISense_Blueprint, nullptr, "OnListenerUnregistered", nullptr, nullptr, sizeof(AISense_Blueprint_eventOnListenerUnregistered_Parms), Z_Construct_UFunction_UAISense_Blueprint_OnListenerUnregistered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAISense_Blueprint_OnListenerUnregistered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAISense_Blueprint_OnListenerUnregistered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAISense_Blueprint_OnListenerUnregistered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAISense_Blueprint_OnListenerUnregistered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAISense_Blueprint_OnListenerUnregistered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAISense_Blueprint_OnListenerUpdated_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorListener;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerceptionComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PerceptionComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAISense_Blueprint_OnListenerUpdated_Statics::NewProp_ActorListener = { "ActorListener", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AISense_Blueprint_eventOnListenerUpdated_Parms, ActorListener), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAISense_Blueprint_OnListenerUpdated_Statics::NewProp_PerceptionComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAISense_Blueprint_OnListenerUpdated_Statics::NewProp_PerceptionComponent = { "PerceptionComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AISense_Blueprint_eventOnListenerUpdated_Parms, PerceptionComponent), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAISense_Blueprint_OnListenerUpdated_Statics::NewProp_PerceptionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAISense_Blueprint_OnListenerUpdated_Statics::NewProp_PerceptionComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAISense_Blueprint_OnListenerUpdated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Blueprint_OnListenerUpdated_Statics::NewProp_ActorListener,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Blueprint_OnListenerUpdated_Statics::NewProp_PerceptionComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAISense_Blueprint_OnListenerUpdated_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 *\x09@param PerceptionComponent is ActorListener's AIPerceptionComponent instance\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Blueprint.h" },
		{ "ToolTip", "@param PerceptionComponent is ActorListener's AIPerceptionComponent instance" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAISense_Blueprint_OnListenerUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAISense_Blueprint, nullptr, "OnListenerUpdated", nullptr, nullptr, sizeof(AISense_Blueprint_eventOnListenerUpdated_Parms), Z_Construct_UFunction_UAISense_Blueprint_OnListenerUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAISense_Blueprint_OnListenerUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAISense_Blueprint_OnListenerUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAISense_Blueprint_OnListenerUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAISense_Blueprint_OnListenerUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAISense_Blueprint_OnListenerUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAISense_Blueprint_OnUpdate_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EventsToProcess_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventsToProcess_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EventsToProcess;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAISense_Blueprint_OnUpdate_Statics::NewProp_EventsToProcess_Inner = { "EventsToProcess", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAISenseEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAISense_Blueprint_OnUpdate_Statics::NewProp_EventsToProcess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAISense_Blueprint_OnUpdate_Statics::NewProp_EventsToProcess = { "EventsToProcess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AISense_Blueprint_eventOnUpdate_Parms, EventsToProcess), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAISense_Blueprint_OnUpdate_Statics::NewProp_EventsToProcess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAISense_Blueprint_OnUpdate_Statics::NewProp_EventsToProcess_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAISense_Blueprint_OnUpdate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AISense_Blueprint_eventOnUpdate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAISense_Blueprint_OnUpdate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Blueprint_OnUpdate_Statics::NewProp_EventsToProcess_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Blueprint_OnUpdate_Statics::NewProp_EventsToProcess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Blueprint_OnUpdate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAISense_Blueprint_OnUpdate_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** returns requested amount of time to pass until next frame. \n\x09 *\x09Return 0 to get update every frame (WARNING: hits performance) */" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Blueprint.h" },
		{ "ToolTip", "returns requested amount of time to pass until next frame.\n    Return 0 to get update every frame (WARNING: hits performance)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAISense_Blueprint_OnUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAISense_Blueprint, nullptr, "OnUpdate", nullptr, nullptr, sizeof(AISense_Blueprint_eventOnUpdate_Parms), Z_Construct_UFunction_UAISense_Blueprint_OnUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAISense_Blueprint_OnUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAISense_Blueprint_OnUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAISense_Blueprint_OnUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAISense_Blueprint_OnUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAISense_Blueprint_OnUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAISense_Blueprint);
	UClass* Z_Construct_UClass_UAISense_Blueprint_NoRegister()
	{
		return UAISense_Blueprint::StaticClass();
	}
	struct Z_Construct_UClass_UAISense_Blueprint_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ListenerDataType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ListenerDataType;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ListenerContainer_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ListenerContainer_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ListenerContainer;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_UnprocessedEvents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnprocessedEvents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UnprocessedEvents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAISense_Blueprint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAISense,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAISense_Blueprint_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerActors, "GetAllListenerActors" }, // 3874021829
		{ &Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerComponents, "GetAllListenerComponents" }, // 1814482605
		{ &Z_Construct_UFunction_UAISense_Blueprint_K2_OnNewPawn, "K2_OnNewPawn" }, // 225762812
		{ &Z_Construct_UFunction_UAISense_Blueprint_OnListenerRegistered, "OnListenerRegistered" }, // 2288899965
		{ &Z_Construct_UFunction_UAISense_Blueprint_OnListenerUnregistered, "OnListenerUnregistered" }, // 2504782507
		{ &Z_Construct_UFunction_UAISense_Blueprint_OnListenerUpdated, "OnListenerUpdated" }, // 2411420345
		{ &Z_Construct_UFunction_UAISense_Blueprint_OnUpdate, "OnUpdate" }, // 1895007627
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISense_Blueprint_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "AI" },
		{ "IncludePath", "Perception/AISense_Blueprint.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Blueprint.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISense_Blueprint_Statics::NewProp_ListenerDataType_MetaData[] = {
		{ "Category", "Sense" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Blueprint.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAISense_Blueprint_Statics::NewProp_ListenerDataType = { "ListenerDataType", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAISense_Blueprint, ListenerDataType), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserDefinedStruct_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAISense_Blueprint_Statics::NewProp_ListenerDataType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISense_Blueprint_Statics::NewProp_ListenerDataType_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAISense_Blueprint_Statics::NewProp_ListenerContainer_Inner = { "ListenerContainer", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISense_Blueprint_Statics::NewProp_ListenerContainer_MetaData[] = {
		{ "Category", "Sense" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Blueprint.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAISense_Blueprint_Statics::NewProp_ListenerContainer = { "ListenerContainer", nullptr, (EPropertyFlags)0x002408800000001c, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAISense_Blueprint, ListenerContainer), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAISense_Blueprint_Statics::NewProp_ListenerContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISense_Blueprint_Statics::NewProp_ListenerContainer_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAISense_Blueprint_Statics::NewProp_UnprocessedEvents_Inner = { "UnprocessedEvents", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAISenseEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISense_Blueprint_Statics::NewProp_UnprocessedEvents_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Perception/AISense_Blueprint.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAISense_Blueprint_Statics::NewProp_UnprocessedEvents = { "UnprocessedEvents", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAISense_Blueprint, UnprocessedEvents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAISense_Blueprint_Statics::NewProp_UnprocessedEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISense_Blueprint_Statics::NewProp_UnprocessedEvents_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAISense_Blueprint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Blueprint_Statics::NewProp_ListenerDataType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Blueprint_Statics::NewProp_ListenerContainer_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Blueprint_Statics::NewProp_ListenerContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Blueprint_Statics::NewProp_UnprocessedEvents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Blueprint_Statics::NewProp_UnprocessedEvents,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAISense_Blueprint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISense_Blueprint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAISense_Blueprint_Statics::ClassParams = {
		&UAISense_Blueprint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAISense_Blueprint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAISense_Blueprint_Statics::PropPointers),
		0,
		0x049000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UAISense_Blueprint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAISense_Blueprint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAISense_Blueprint()
	{
		if (!Z_Registration_Info_UClass_UAISense_Blueprint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAISense_Blueprint.OuterSingleton, Z_Construct_UClass_UAISense_Blueprint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAISense_Blueprint.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<UAISense_Blueprint>()
	{
		return UAISense_Blueprint::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISense_Blueprint);
	UAISense_Blueprint::~UAISense_Blueprint() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Blueprint_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Blueprint_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAISense_Blueprint, UAISense_Blueprint::StaticClass, TEXT("UAISense_Blueprint"), &Z_Registration_Info_UClass_UAISense_Blueprint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAISense_Blueprint), 3300071664U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Blueprint_h_559932023(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Blueprint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Blueprint_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
