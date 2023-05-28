// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../AIModule/Classes/Perception/AIPerceptionComponent.h"
#include "../../AIModule/Classes/Perception/AIPerceptionTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIPerceptionComponent() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionComponent();
	AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAISense_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_NoRegister();
	AIMODULE_API UFunction* Z_Construct_UDelegateFunction_AIModule_ActorPerceptionForgetUpdatedDelegate__DelegateSignature();
	AIMODULE_API UFunction* Z_Construct_UDelegateFunction_AIModule_ActorPerceptionInfoUpdatedDelegate__DelegateSignature();
	AIMODULE_API UFunction* Z_Construct_UDelegateFunction_AIModule_ActorPerceptionUpdatedDelegate__DelegateSignature();
	AIMODULE_API UFunction* Z_Construct_UDelegateFunction_AIModule_PerceptionUpdatedDelegate__DelegateSignature();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FActorPerceptionUpdateInfo();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIStimulus();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEndPlayReason();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AIModule_PerceptionUpdatedDelegate__DelegateSignature_Statics
	{
		struct _Script_AIModule_eventPerceptionUpdatedDelegate_Parms
		{
			TArray<AActor*> UpdatedActors;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UpdatedActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpdatedActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UpdatedActors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AIModule_PerceptionUpdatedDelegate__DelegateSignature_Statics::NewProp_UpdatedActors_Inner = { "UpdatedActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AIModule_PerceptionUpdatedDelegate__DelegateSignature_Statics::NewProp_UpdatedActors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_AIModule_PerceptionUpdatedDelegate__DelegateSignature_Statics::NewProp_UpdatedActors = { "UpdatedActors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_AIModule_eventPerceptionUpdatedDelegate_Parms, UpdatedActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_AIModule_PerceptionUpdatedDelegate__DelegateSignature_Statics::NewProp_UpdatedActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AIModule_PerceptionUpdatedDelegate__DelegateSignature_Statics::NewProp_UpdatedActors_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AIModule_PerceptionUpdatedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AIModule_PerceptionUpdatedDelegate__DelegateSignature_Statics::NewProp_UpdatedActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AIModule_PerceptionUpdatedDelegate__DelegateSignature_Statics::NewProp_UpdatedActors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AIModule_PerceptionUpdatedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AIModule_PerceptionUpdatedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AIModule, nullptr, "PerceptionUpdatedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_AIModule_PerceptionUpdatedDelegate__DelegateSignature_Statics::_Script_AIModule_eventPerceptionUpdatedDelegate_Parms), Z_Construct_UDelegateFunction_AIModule_PerceptionUpdatedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AIModule_PerceptionUpdatedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AIModule_PerceptionUpdatedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AIModule_PerceptionUpdatedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AIModule_PerceptionUpdatedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AIModule_PerceptionUpdatedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FPerceptionUpdatedDelegate_DelegateWrapper(const FMulticastScriptDelegate& PerceptionUpdatedDelegate, TArray<AActor*> const& UpdatedActors)
{
	struct _Script_AIModule_eventPerceptionUpdatedDelegate_Parms
	{
		TArray<AActor*> UpdatedActors;
	};
	_Script_AIModule_eventPerceptionUpdatedDelegate_Parms Parms;
	Parms.UpdatedActors=UpdatedActors;
	PerceptionUpdatedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AIModule_ActorPerceptionUpdatedDelegate__DelegateSignature_Statics
	{
		struct _Script_AIModule_eventActorPerceptionUpdatedDelegate_Parms
		{
			AActor* Actor;
			FAIStimulus Stimulus;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stimulus;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AIModule_ActorPerceptionUpdatedDelegate__DelegateSignature_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_AIModule_eventActorPerceptionUpdatedDelegate_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AIModule_ActorPerceptionUpdatedDelegate__DelegateSignature_Statics::NewProp_Stimulus = { "Stimulus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_AIModule_eventActorPerceptionUpdatedDelegate_Parms, Stimulus), Z_Construct_UScriptStruct_FAIStimulus, METADATA_PARAMS(nullptr, 0) }; // 576118341
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AIModule_ActorPerceptionUpdatedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AIModule_ActorPerceptionUpdatedDelegate__DelegateSignature_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AIModule_ActorPerceptionUpdatedDelegate__DelegateSignature_Statics::NewProp_Stimulus,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AIModule_ActorPerceptionUpdatedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AIModule_ActorPerceptionUpdatedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AIModule, nullptr, "ActorPerceptionUpdatedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_AIModule_ActorPerceptionUpdatedDelegate__DelegateSignature_Statics::_Script_AIModule_eventActorPerceptionUpdatedDelegate_Parms), Z_Construct_UDelegateFunction_AIModule_ActorPerceptionUpdatedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AIModule_ActorPerceptionUpdatedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AIModule_ActorPerceptionUpdatedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AIModule_ActorPerceptionUpdatedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AIModule_ActorPerceptionUpdatedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AIModule_ActorPerceptionUpdatedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FActorPerceptionUpdatedDelegate_DelegateWrapper(const FMulticastScriptDelegate& ActorPerceptionUpdatedDelegate, AActor* Actor, FAIStimulus Stimulus)
{
	struct _Script_AIModule_eventActorPerceptionUpdatedDelegate_Parms
	{
		AActor* Actor;
		FAIStimulus Stimulus;
	};
	_Script_AIModule_eventActorPerceptionUpdatedDelegate_Parms Parms;
	Parms.Actor=Actor;
	Parms.Stimulus=Stimulus;
	ActorPerceptionUpdatedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AIModule_ActorPerceptionForgetUpdatedDelegate__DelegateSignature_Statics
	{
		struct _Script_AIModule_eventActorPerceptionForgetUpdatedDelegate_Parms
		{
			AActor* Actor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AIModule_ActorPerceptionForgetUpdatedDelegate__DelegateSignature_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_AIModule_eventActorPerceptionForgetUpdatedDelegate_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AIModule_ActorPerceptionForgetUpdatedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AIModule_ActorPerceptionForgetUpdatedDelegate__DelegateSignature_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AIModule_ActorPerceptionForgetUpdatedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AIModule_ActorPerceptionForgetUpdatedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AIModule, nullptr, "ActorPerceptionForgetUpdatedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_AIModule_ActorPerceptionForgetUpdatedDelegate__DelegateSignature_Statics::_Script_AIModule_eventActorPerceptionForgetUpdatedDelegate_Parms), Z_Construct_UDelegateFunction_AIModule_ActorPerceptionForgetUpdatedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AIModule_ActorPerceptionForgetUpdatedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AIModule_ActorPerceptionForgetUpdatedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AIModule_ActorPerceptionForgetUpdatedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AIModule_ActorPerceptionForgetUpdatedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AIModule_ActorPerceptionForgetUpdatedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FActorPerceptionForgetUpdatedDelegate_DelegateWrapper(const FMulticastScriptDelegate& ActorPerceptionForgetUpdatedDelegate, AActor* Actor)
{
	struct _Script_AIModule_eventActorPerceptionForgetUpdatedDelegate_Parms
	{
		AActor* Actor;
	};
	_Script_AIModule_eventActorPerceptionForgetUpdatedDelegate_Parms Parms;
	Parms.Actor=Actor;
	ActorPerceptionForgetUpdatedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActorPerceptionUpdateInfo;
class UScriptStruct* FActorPerceptionUpdateInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActorPerceptionUpdateInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActorPerceptionUpdateInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorPerceptionUpdateInfo, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("ActorPerceptionUpdateInfo"));
	}
	return Z_Registration_Info_UScriptStruct_ActorPerceptionUpdateInfo.OuterSingleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FActorPerceptionUpdateInfo>()
{
	return FActorPerceptionUpdateInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FActorPerceptionUpdateInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TargetId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Stimulus_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stimulus;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorPerceptionUpdateInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Sensed Actor's Update Data" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FActorPerceptionUpdateInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorPerceptionUpdateInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorPerceptionUpdateInfo_Statics::NewProp_TargetId_MetaData[] = {
		{ "Category", "AI|Perception" },
		{ "Comment", "/** Id of to the stimulus source */" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
		{ "ToolTip", "Id of to the stimulus source" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FActorPerceptionUpdateInfo_Statics::NewProp_TargetId = { "TargetId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FActorPerceptionUpdateInfo, TargetId), METADATA_PARAMS(Z_Construct_UScriptStruct_FActorPerceptionUpdateInfo_Statics::NewProp_TargetId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorPerceptionUpdateInfo_Statics::NewProp_TargetId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorPerceptionUpdateInfo_Statics::NewProp_Target_MetaData[] = {
		{ "Category", "AI|Perception" },
		{ "Comment", "/** Actor associated to the stimulus (can be null) */" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
		{ "ToolTip", "Actor associated to the stimulus (can be null)" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FActorPerceptionUpdateInfo_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FActorPerceptionUpdateInfo, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorPerceptionUpdateInfo_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorPerceptionUpdateInfo_Statics::NewProp_Target_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorPerceptionUpdateInfo_Statics::NewProp_Stimulus_MetaData[] = {
		{ "Category", "AI|Perception" },
		{ "Comment", "/** Updated stimulus */" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
		{ "ToolTip", "Updated stimulus" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActorPerceptionUpdateInfo_Statics::NewProp_Stimulus = { "Stimulus", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FActorPerceptionUpdateInfo, Stimulus), Z_Construct_UScriptStruct_FAIStimulus, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorPerceptionUpdateInfo_Statics::NewProp_Stimulus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorPerceptionUpdateInfo_Statics::NewProp_Stimulus_MetaData)) }; // 576118341
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActorPerceptionUpdateInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorPerceptionUpdateInfo_Statics::NewProp_TargetId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorPerceptionUpdateInfo_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorPerceptionUpdateInfo_Statics::NewProp_Stimulus,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorPerceptionUpdateInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		&NewStructOps,
		"ActorPerceptionUpdateInfo",
		sizeof(FActorPerceptionUpdateInfo),
		alignof(FActorPerceptionUpdateInfo),
		Z_Construct_UScriptStruct_FActorPerceptionUpdateInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorPerceptionUpdateInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FActorPerceptionUpdateInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorPerceptionUpdateInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FActorPerceptionUpdateInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_ActorPerceptionUpdateInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActorPerceptionUpdateInfo.InnerSingleton, Z_Construct_UScriptStruct_FActorPerceptionUpdateInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ActorPerceptionUpdateInfo.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_AIModule_ActorPerceptionInfoUpdatedDelegate__DelegateSignature_Statics
	{
		struct _Script_AIModule_eventActorPerceptionInfoUpdatedDelegate_Parms
		{
			FActorPerceptionUpdateInfo UpdateInfo;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpdateInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UpdateInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AIModule_ActorPerceptionInfoUpdatedDelegate__DelegateSignature_Statics::NewProp_UpdateInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AIModule_ActorPerceptionInfoUpdatedDelegate__DelegateSignature_Statics::NewProp_UpdateInfo = { "UpdateInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_AIModule_eventActorPerceptionInfoUpdatedDelegate_Parms, UpdateInfo), Z_Construct_UScriptStruct_FActorPerceptionUpdateInfo, METADATA_PARAMS(Z_Construct_UDelegateFunction_AIModule_ActorPerceptionInfoUpdatedDelegate__DelegateSignature_Statics::NewProp_UpdateInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AIModule_ActorPerceptionInfoUpdatedDelegate__DelegateSignature_Statics::NewProp_UpdateInfo_MetaData)) }; // 1836066591
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AIModule_ActorPerceptionInfoUpdatedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AIModule_ActorPerceptionInfoUpdatedDelegate__DelegateSignature_Statics::NewProp_UpdateInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AIModule_ActorPerceptionInfoUpdatedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AIModule_ActorPerceptionInfoUpdatedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AIModule, nullptr, "ActorPerceptionInfoUpdatedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_AIModule_ActorPerceptionInfoUpdatedDelegate__DelegateSignature_Statics::_Script_AIModule_eventActorPerceptionInfoUpdatedDelegate_Parms), Z_Construct_UDelegateFunction_AIModule_ActorPerceptionInfoUpdatedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AIModule_ActorPerceptionInfoUpdatedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AIModule_ActorPerceptionInfoUpdatedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AIModule_ActorPerceptionInfoUpdatedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AIModule_ActorPerceptionInfoUpdatedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AIModule_ActorPerceptionInfoUpdatedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FActorPerceptionInfoUpdatedDelegate_DelegateWrapper(const FMulticastScriptDelegate& ActorPerceptionInfoUpdatedDelegate, FActorPerceptionUpdateInfo const& UpdateInfo)
{
	struct _Script_AIModule_eventActorPerceptionInfoUpdatedDelegate_Parms
	{
		FActorPerceptionUpdateInfo UpdateInfo;
	};
	_Script_AIModule_eventActorPerceptionInfoUpdatedDelegate_Parms Parms;
	Parms.UpdateInfo=UpdateInfo;
	ActorPerceptionInfoUpdatedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActorPerceptionBlueprintInfo;
class UScriptStruct* FActorPerceptionBlueprintInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActorPerceptionBlueprintInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActorPerceptionBlueprintInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("ActorPerceptionBlueprintInfo"));
	}
	return Z_Registration_Info_UScriptStruct_ActorPerceptionBlueprintInfo.OuterSingleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FActorPerceptionBlueprintInfo>()
{
	return FActorPerceptionBlueprintInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Target;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LastSensedStimuli_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastSensedStimuli_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LastSensedStimuli;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsHostile_MetaData[];
#endif
		static void NewProp_bIsHostile_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsHostile;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Sensed Actor's Data" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorPerceptionBlueprintInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Statics::NewProp_Target_MetaData[] = {
		{ "Category", "AI|Perception" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FActorPerceptionBlueprintInfo, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Statics::NewProp_Target_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Statics::NewProp_LastSensedStimuli_Inner = { "LastSensedStimuli", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAIStimulus, METADATA_PARAMS(nullptr, 0) }; // 576118341
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Statics::NewProp_LastSensedStimuli_MetaData[] = {
		{ "Category", "AI|Perception" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Statics::NewProp_LastSensedStimuli = { "LastSensedStimuli", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FActorPerceptionBlueprintInfo, LastSensedStimuli), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Statics::NewProp_LastSensedStimuli_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Statics::NewProp_LastSensedStimuli_MetaData)) }; // 576118341
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Statics::NewProp_bIsHostile_MetaData[] = {
		{ "Category", "AI|Perception" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Statics::NewProp_bIsHostile_SetBit(void* Obj)
	{
		((FActorPerceptionBlueprintInfo*)Obj)->bIsHostile = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Statics::NewProp_bIsHostile = { "bIsHostile", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FActorPerceptionBlueprintInfo), &Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Statics::NewProp_bIsHostile_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Statics::NewProp_bIsHostile_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Statics::NewProp_bIsHostile_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Statics::NewProp_LastSensedStimuli_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Statics::NewProp_LastSensedStimuli,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Statics::NewProp_bIsHostile,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		&NewStructOps,
		"ActorPerceptionBlueprintInfo",
		sizeof(FActorPerceptionBlueprintInfo),
		alignof(FActorPerceptionBlueprintInfo),
		Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_ActorPerceptionBlueprintInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActorPerceptionBlueprintInfo.InnerSingleton, Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ActorPerceptionBlueprintInfo.InnerSingleton;
	}
	DEFINE_FUNCTION(UAIPerceptionComponent::execSetSenseEnabled)
	{
		P_GET_OBJECT(UClass,Z_Param_SenseClass);
		P_GET_UBOOL(Z_Param_bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSenseEnabled(Z_Param_SenseClass,Z_Param_bEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAIPerceptionComponent::execGetActorsPerception)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_STRUCT_REF(FActorPerceptionBlueprintInfo,Z_Param_Out_Info);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetActorsPerception(Z_Param_Actor,Z_Param_Out_Info);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAIPerceptionComponent::execGetPerceivedActors)
	{
		P_GET_OBJECT(UClass,Z_Param_SenseToUse);
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetPerceivedActors(Z_Param_SenseToUse,Z_Param_Out_OutActors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAIPerceptionComponent::execGetKnownPerceivedActors)
	{
		P_GET_OBJECT(UClass,Z_Param_SenseToUse);
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetKnownPerceivedActors(Z_Param_SenseToUse,Z_Param_Out_OutActors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAIPerceptionComponent::execGetCurrentlyPerceivedActors)
	{
		P_GET_OBJECT(UClass,Z_Param_SenseToUse);
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetCurrentlyPerceivedActors(Z_Param_SenseToUse,Z_Param_Out_OutActors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAIPerceptionComponent::execGetPerceivedHostileActorsBySense)
	{
		P_GET_OBJECT(UClass,Z_Param_SenseToUse);
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetPerceivedHostileActorsBySense(Z_Param_SenseToUse,Z_Param_Out_OutActors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAIPerceptionComponent::execGetPerceivedHostileActors)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetPerceivedHostileActors(Z_Param_Out_OutActors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAIPerceptionComponent::execForgetAll)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ForgetAll();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAIPerceptionComponent::execRequestStimuliListenerUpdate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestStimuliListenerUpdate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAIPerceptionComponent::execOnOwnerEndPlay)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_PROPERTY(FByteProperty,Z_Param_EndPlayReason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOwnerEndPlay(Z_Param_Actor,EEndPlayReason::Type(Z_Param_EndPlayReason));
		P_NATIVE_END;
	}
	void UAIPerceptionComponent::StaticRegisterNativesUAIPerceptionComponent()
	{
		UClass* Class = UAIPerceptionComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ForgetAll", &UAIPerceptionComponent::execForgetAll },
			{ "GetActorsPerception", &UAIPerceptionComponent::execGetActorsPerception },
			{ "GetCurrentlyPerceivedActors", &UAIPerceptionComponent::execGetCurrentlyPerceivedActors },
			{ "GetKnownPerceivedActors", &UAIPerceptionComponent::execGetKnownPerceivedActors },
			{ "GetPerceivedActors", &UAIPerceptionComponent::execGetPerceivedActors },
			{ "GetPerceivedHostileActors", &UAIPerceptionComponent::execGetPerceivedHostileActors },
			{ "GetPerceivedHostileActorsBySense", &UAIPerceptionComponent::execGetPerceivedHostileActorsBySense },
			{ "OnOwnerEndPlay", &UAIPerceptionComponent::execOnOwnerEndPlay },
			{ "RequestStimuliListenerUpdate", &UAIPerceptionComponent::execRequestStimuliListenerUpdate },
			{ "SetSenseEnabled", &UAIPerceptionComponent::execSetSenseEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAIPerceptionComponent_ForgetAll_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIPerceptionComponent_ForgetAll_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Perception" },
		{ "Comment", "/** basically cleans up PerceptualData, resulting in loss of all previous perception */" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
		{ "ToolTip", "basically cleans up PerceptualData, resulting in loss of all previous perception" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIPerceptionComponent_ForgetAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIPerceptionComponent, nullptr, "ForgetAll", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIPerceptionComponent_ForgetAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionComponent_ForgetAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIPerceptionComponent_ForgetAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIPerceptionComponent_ForgetAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIPerceptionComponent_GetActorsPerception_Statics
	{
		struct AIPerceptionComponent_eventGetActorsPerception_Parms
		{
			AActor* Actor;
			FActorPerceptionBlueprintInfo Info;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Info;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIPerceptionComponent_GetActorsPerception_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AIPerceptionComponent_eventGetActorsPerception_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAIPerceptionComponent_GetActorsPerception_Statics::NewProp_Info = { "Info", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AIPerceptionComponent_eventGetActorsPerception_Parms, Info), Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo, METADATA_PARAMS(nullptr, 0) }; // 3273487934
	void Z_Construct_UFunction_UAIPerceptionComponent_GetActorsPerception_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AIPerceptionComponent_eventGetActorsPerception_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAIPerceptionComponent_GetActorsPerception_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AIPerceptionComponent_eventGetActorsPerception_Parms), &Z_Construct_UFunction_UAIPerceptionComponent_GetActorsPerception_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIPerceptionComponent_GetActorsPerception_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionComponent_GetActorsPerception_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionComponent_GetActorsPerception_Statics::NewProp_Info,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionComponent_GetActorsPerception_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIPerceptionComponent_GetActorsPerception_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Perception" },
		{ "Comment", "/** Retrieves whatever has been sensed about given actor */" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
		{ "ToolTip", "Retrieves whatever has been sensed about given actor" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIPerceptionComponent_GetActorsPerception_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIPerceptionComponent, nullptr, "GetActorsPerception", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAIPerceptionComponent_GetActorsPerception_Statics::AIPerceptionComponent_eventGetActorsPerception_Parms), Z_Construct_UFunction_UAIPerceptionComponent_GetActorsPerception_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionComponent_GetActorsPerception_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIPerceptionComponent_GetActorsPerception_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionComponent_GetActorsPerception_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIPerceptionComponent_GetActorsPerception()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIPerceptionComponent_GetActorsPerception_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIPerceptionComponent_GetCurrentlyPerceivedActors_Statics
	{
		struct AIPerceptionComponent_eventGetCurrentlyPerceivedActors_Parms
		{
			TSubclassOf<UAISense>  SenseToUse;
			TArray<AActor*> OutActors;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_SenseToUse;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutActors_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutActors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAIPerceptionComponent_GetCurrentlyPerceivedActors_Statics::NewProp_SenseToUse = { "SenseToUse", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AIPerceptionComponent_eventGetCurrentlyPerceivedActors_Parms, SenseToUse), Z_Construct_UClass_UClass, Z_Construct_UClass_UAISense_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIPerceptionComponent_GetCurrentlyPerceivedActors_Statics::NewProp_OutActors_Inner = { "OutActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAIPerceptionComponent_GetCurrentlyPerceivedActors_Statics::NewProp_OutActors = { "OutActors", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AIPerceptionComponent_eventGetCurrentlyPerceivedActors_Parms, OutActors), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIPerceptionComponent_GetCurrentlyPerceivedActors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionComponent_GetCurrentlyPerceivedActors_Statics::NewProp_SenseToUse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionComponent_GetCurrentlyPerceivedActors_Statics::NewProp_OutActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionComponent_GetCurrentlyPerceivedActors_Statics::NewProp_OutActors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIPerceptionComponent_GetCurrentlyPerceivedActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Perception" },
		{ "Comment", "/** If SenseToUse is none all actors currently perceived in any way will get fetched */" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
		{ "ToolTip", "If SenseToUse is none all actors currently perceived in any way will get fetched" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIPerceptionComponent_GetCurrentlyPerceivedActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIPerceptionComponent, nullptr, "GetCurrentlyPerceivedActors", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAIPerceptionComponent_GetCurrentlyPerceivedActors_Statics::AIPerceptionComponent_eventGetCurrentlyPerceivedActors_Parms), Z_Construct_UFunction_UAIPerceptionComponent_GetCurrentlyPerceivedActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionComponent_GetCurrentlyPerceivedActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIPerceptionComponent_GetCurrentlyPerceivedActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionComponent_GetCurrentlyPerceivedActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIPerceptionComponent_GetCurrentlyPerceivedActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIPerceptionComponent_GetCurrentlyPerceivedActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIPerceptionComponent_GetKnownPerceivedActors_Statics
	{
		struct AIPerceptionComponent_eventGetKnownPerceivedActors_Parms
		{
			TSubclassOf<UAISense>  SenseToUse;
			TArray<AActor*> OutActors;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_SenseToUse;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutActors_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutActors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAIPerceptionComponent_GetKnownPerceivedActors_Statics::NewProp_SenseToUse = { "SenseToUse", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AIPerceptionComponent_eventGetKnownPerceivedActors_Parms, SenseToUse), Z_Construct_UClass_UClass, Z_Construct_UClass_UAISense_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIPerceptionComponent_GetKnownPerceivedActors_Statics::NewProp_OutActors_Inner = { "OutActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAIPerceptionComponent_GetKnownPerceivedActors_Statics::NewProp_OutActors = { "OutActors", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AIPerceptionComponent_eventGetKnownPerceivedActors_Parms, OutActors), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIPerceptionComponent_GetKnownPerceivedActors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionComponent_GetKnownPerceivedActors_Statics::NewProp_SenseToUse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionComponent_GetKnownPerceivedActors_Statics::NewProp_OutActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionComponent_GetKnownPerceivedActors_Statics::NewProp_OutActors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIPerceptionComponent_GetKnownPerceivedActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Perception" },
		{ "Comment", "/** If SenseToUse is none all actors ever perceived in any way (and not forgotten yet) will get fetched */" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
		{ "ToolTip", "If SenseToUse is none all actors ever perceived in any way (and not forgotten yet) will get fetched" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIPerceptionComponent_GetKnownPerceivedActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIPerceptionComponent, nullptr, "GetKnownPerceivedActors", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAIPerceptionComponent_GetKnownPerceivedActors_Statics::AIPerceptionComponent_eventGetKnownPerceivedActors_Parms), Z_Construct_UFunction_UAIPerceptionComponent_GetKnownPerceivedActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionComponent_GetKnownPerceivedActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIPerceptionComponent_GetKnownPerceivedActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionComponent_GetKnownPerceivedActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIPerceptionComponent_GetKnownPerceivedActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIPerceptionComponent_GetKnownPerceivedActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedActors_Statics
	{
		struct AIPerceptionComponent_eventGetPerceivedActors_Parms
		{
			TSubclassOf<UAISense>  SenseToUse;
			TArray<AActor*> OutActors;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_SenseToUse;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutActors_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutActors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedActors_Statics::NewProp_SenseToUse = { "SenseToUse", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AIPerceptionComponent_eventGetPerceivedActors_Parms, SenseToUse), Z_Construct_UClass_UClass, Z_Construct_UClass_UAISense_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedActors_Statics::NewProp_OutActors_Inner = { "OutActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedActors_Statics::NewProp_OutActors = { "OutActors", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AIPerceptionComponent_eventGetPerceivedActors_Parms, OutActors), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedActors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedActors_Statics::NewProp_SenseToUse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedActors_Statics::NewProp_OutActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedActors_Statics::NewProp_OutActors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Perception" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIPerceptionComponent, nullptr, "GetPerceivedActors", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedActors_Statics::AIPerceptionComponent_eventGetPerceivedActors_Parms), Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedHostileActors_Statics
	{
		struct AIPerceptionComponent_eventGetPerceivedHostileActors_Parms
		{
			TArray<AActor*> OutActors;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutActors_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutActors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedHostileActors_Statics::NewProp_OutActors_Inner = { "OutActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedHostileActors_Statics::NewProp_OutActors = { "OutActors", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AIPerceptionComponent_eventGetPerceivedHostileActors_Parms, OutActors), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedHostileActors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedHostileActors_Statics::NewProp_OutActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedHostileActors_Statics::NewProp_OutActors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedHostileActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Perception" },
		{ "Comment", "//----------------------------------------------------------------------//\n// blueprint interface\n//----------------------------------------------------------------------//\n" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
		{ "ToolTip", "blueprint interface" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedHostileActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIPerceptionComponent, nullptr, "GetPerceivedHostileActors", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedHostileActors_Statics::AIPerceptionComponent_eventGetPerceivedHostileActors_Parms), Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedHostileActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedHostileActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedHostileActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedHostileActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedHostileActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedHostileActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedHostileActorsBySense_Statics
	{
		struct AIPerceptionComponent_eventGetPerceivedHostileActorsBySense_Parms
		{
			const TSubclassOf<UAISense>  SenseToUse;
			TArray<AActor*> OutActors;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SenseToUse_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_SenseToUse;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutActors_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutActors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedHostileActorsBySense_Statics::NewProp_SenseToUse_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedHostileActorsBySense_Statics::NewProp_SenseToUse = { "SenseToUse", nullptr, (EPropertyFlags)0x0014000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AIPerceptionComponent_eventGetPerceivedHostileActorsBySense_Parms, SenseToUse), Z_Construct_UClass_UClass, Z_Construct_UClass_UAISense_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedHostileActorsBySense_Statics::NewProp_SenseToUse_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedHostileActorsBySense_Statics::NewProp_SenseToUse_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedHostileActorsBySense_Statics::NewProp_OutActors_Inner = { "OutActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedHostileActorsBySense_Statics::NewProp_OutActors = { "OutActors", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AIPerceptionComponent_eventGetPerceivedHostileActorsBySense_Parms, OutActors), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedHostileActorsBySense_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedHostileActorsBySense_Statics::NewProp_SenseToUse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedHostileActorsBySense_Statics::NewProp_OutActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedHostileActorsBySense_Statics::NewProp_OutActors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedHostileActorsBySense_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Perception" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedHostileActorsBySense_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIPerceptionComponent, nullptr, "GetPerceivedHostileActorsBySense", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedHostileActorsBySense_Statics::AIPerceptionComponent_eventGetPerceivedHostileActorsBySense_Parms), Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedHostileActorsBySense_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedHostileActorsBySense_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedHostileActorsBySense_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedHostileActorsBySense_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedHostileActorsBySense()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedHostileActorsBySense_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIPerceptionComponent_OnOwnerEndPlay_Statics
	{
		struct AIPerceptionComponent_eventOnOwnerEndPlay_Parms
		{
			AActor* Actor;
			TEnumAsByte<EEndPlayReason::Type> EndPlayReason;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FBytePropertyParams NewProp_EndPlayReason;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIPerceptionComponent_OnOwnerEndPlay_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AIPerceptionComponent_eventOnOwnerEndPlay_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAIPerceptionComponent_OnOwnerEndPlay_Statics::NewProp_EndPlayReason = { "EndPlayReason", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AIPerceptionComponent_eventOnOwnerEndPlay_Parms, EndPlayReason), Z_Construct_UEnum_Engine_EEndPlayReason, METADATA_PARAMS(nullptr, 0) }; // 2713016423
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIPerceptionComponent_OnOwnerEndPlay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionComponent_OnOwnerEndPlay_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionComponent_OnOwnerEndPlay_Statics::NewProp_EndPlayReason,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIPerceptionComponent_OnOwnerEndPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIPerceptionComponent_OnOwnerEndPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIPerceptionComponent, nullptr, "OnOwnerEndPlay", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAIPerceptionComponent_OnOwnerEndPlay_Statics::AIPerceptionComponent_eventOnOwnerEndPlay_Parms), Z_Construct_UFunction_UAIPerceptionComponent_OnOwnerEndPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionComponent_OnOwnerEndPlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIPerceptionComponent_OnOwnerEndPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionComponent_OnOwnerEndPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIPerceptionComponent_OnOwnerEndPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIPerceptionComponent_OnOwnerEndPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIPerceptionComponent_RequestStimuliListenerUpdate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIPerceptionComponent_RequestStimuliListenerUpdate_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Perception" },
		{ "Comment", "/** Notifies AIPerceptionSystem to update properties for this \"stimuli listener\" */" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
		{ "ToolTip", "Notifies AIPerceptionSystem to update properties for this \"stimuli listener\"" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIPerceptionComponent_RequestStimuliListenerUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIPerceptionComponent, nullptr, "RequestStimuliListenerUpdate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIPerceptionComponent_RequestStimuliListenerUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionComponent_RequestStimuliListenerUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIPerceptionComponent_RequestStimuliListenerUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIPerceptionComponent_RequestStimuliListenerUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIPerceptionComponent_SetSenseEnabled_Statics
	{
		struct AIPerceptionComponent_eventSetSenseEnabled_Parms
		{
			TSubclassOf<UAISense>  SenseClass;
			bool bEnable;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_SenseClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnable_MetaData[];
#endif
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAIPerceptionComponent_SetSenseEnabled_Statics::NewProp_SenseClass = { "SenseClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AIPerceptionComponent_eventSetSenseEnabled_Parms, SenseClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UAISense_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIPerceptionComponent_SetSenseEnabled_Statics::NewProp_bEnable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UAIPerceptionComponent_SetSenseEnabled_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((AIPerceptionComponent_eventSetSenseEnabled_Parms*)Obj)->bEnable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAIPerceptionComponent_SetSenseEnabled_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AIPerceptionComponent_eventSetSenseEnabled_Parms), &Z_Construct_UFunction_UAIPerceptionComponent_SetSenseEnabled_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UAIPerceptionComponent_SetSenseEnabled_Statics::NewProp_bEnable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionComponent_SetSenseEnabled_Statics::NewProp_bEnable_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIPerceptionComponent_SetSenseEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionComponent_SetSenseEnabled_Statics::NewProp_SenseClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionComponent_SetSenseEnabled_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIPerceptionComponent_SetSenseEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Perception" },
		{ "Comment", "/** Note that this works only if given sense has been already configured for\n\x09 *\x09this component instance */" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
		{ "ToolTip", "Note that this works only if given sense has been already configured for\n    this component instance" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIPerceptionComponent_SetSenseEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIPerceptionComponent, nullptr, "SetSenseEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAIPerceptionComponent_SetSenseEnabled_Statics::AIPerceptionComponent_eventSetSenseEnabled_Parms), Z_Construct_UFunction_UAIPerceptionComponent_SetSenseEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionComponent_SetSenseEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIPerceptionComponent_SetSenseEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionComponent_SetSenseEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIPerceptionComponent_SetSenseEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIPerceptionComponent_SetSenseEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAIPerceptionComponent);
	UClass* Z_Construct_UClass_UAIPerceptionComponent_NoRegister()
	{
		return UAIPerceptionComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAIPerceptionComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SensesConfig_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SensesConfig_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SensesConfig_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SensesConfig;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DominantSense_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DominantSense;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AIOwner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AIOwner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPerceptionUpdated_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPerceptionUpdated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnTargetPerceptionForgotten_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTargetPerceptionForgotten;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnTargetPerceptionUpdated_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTargetPerceptionUpdated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnTargetPerceptionInfoUpdated_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTargetPerceptionInfoUpdated;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAIPerceptionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAIPerceptionComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAIPerceptionComponent_ForgetAll, "ForgetAll" }, // 4051858296
		{ &Z_Construct_UFunction_UAIPerceptionComponent_GetActorsPerception, "GetActorsPerception" }, // 440617336
		{ &Z_Construct_UFunction_UAIPerceptionComponent_GetCurrentlyPerceivedActors, "GetCurrentlyPerceivedActors" }, // 2642752543
		{ &Z_Construct_UFunction_UAIPerceptionComponent_GetKnownPerceivedActors, "GetKnownPerceivedActors" }, // 3126039799
		{ &Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedActors, "GetPerceivedActors" }, // 426709856
		{ &Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedHostileActors, "GetPerceivedHostileActors" }, // 3398530271
		{ &Z_Construct_UFunction_UAIPerceptionComponent_GetPerceivedHostileActorsBySense, "GetPerceivedHostileActorsBySense" }, // 406156269
		{ &Z_Construct_UFunction_UAIPerceptionComponent_OnOwnerEndPlay, "OnOwnerEndPlay" }, // 3611631845
		{ &Z_Construct_UFunction_UAIPerceptionComponent_RequestStimuliListenerUpdate, "RequestStimuliListenerUpdate" }, // 1599624763
		{ &Z_Construct_UFunction_UAIPerceptionComponent_SetSenseEnabled, "SetSenseEnabled" }, // 665705025
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIPerceptionComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "AI" },
		{ "Comment", "/**\n *\x09""AIPerceptionComponent is used to register as stimuli listener in AIPerceptionSystem\n *\x09""and gathers registered stimuli. UpdatePerception is called when component gets new stimuli (batched)\n */" },
		{ "HideCategories", "Activation Collision" },
		{ "IncludePath", "Perception/AIPerceptionComponent.h" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
		{ "ToolTip", "AIPerceptionComponent is used to register as stimuli listener in AIPerceptionSystem\nand gathers registered stimuli. UpdatePerception is called when component gets new stimuli (batched)" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_SensesConfig_Inner_MetaData[] = {
		{ "Category", "AI Perception" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_SensesConfig_Inner = { "SensesConfig", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAISenseConfig_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_SensesConfig_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_SensesConfig_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_SensesConfig_MetaData[] = {
		{ "Category", "AI Perception" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_SensesConfig = { "SensesConfig", nullptr, (EPropertyFlags)0x0024088000010009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAIPerceptionComponent, SensesConfig), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_SensesConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_SensesConfig_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_DominantSense_MetaData[] = {
		{ "Category", "AI Perception" },
		{ "Comment", "/** Indicated sense that takes precedence over other senses when determining sensed actor's location. \n\x09 *\x09Should be set to one of the senses configured in SensesConfig, or None. */" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
		{ "ToolTip", "Indicated sense that takes precedence over other senses when determining sensed actor's location.\n    Should be set to one of the senses configured in SensesConfig, or None." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_DominantSense = { "DominantSense", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAIPerceptionComponent, DominantSense), Z_Construct_UClass_UClass, Z_Construct_UClass_UAISense_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_DominantSense_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_DominantSense_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_AIOwner_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_AIOwner = { "AIOwner", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAIPerceptionComponent, AIOwner), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_AIOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_AIOwner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_OnPerceptionUpdated_MetaData[] = {
		{ "Comment", "//////////////////////////////////////////////////////////////////////////\n// Might want to move these to special \"BP_AIPerceptionComponent\"\n//////////////////////////////////////////////////////////////////////////\n" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
		{ "ToolTip", "Might want to move these to special \"BP_AIPerceptionComponent\"" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_OnPerceptionUpdated = { "OnPerceptionUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAIPerceptionComponent, OnPerceptionUpdated), Z_Construct_UDelegateFunction_AIModule_PerceptionUpdatedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_OnPerceptionUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_OnPerceptionUpdated_MetaData)) }; // 3649755259
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_OnTargetPerceptionForgotten_MetaData[] = {
		{ "Comment", "/**\n\x09 * Notifies all bound delegates that the perception info has been forgotten for a given target.\n\x09 * The notification get broadcast when all stimuli of a given target expire. Note that this\n\x09 * functionality requires the the actor forgetting must be enabled via AIPerceptionSystem.bForgetStaleActors.\n\x09 *\n\x09 * @param\x09SourceActor\x09""Actor associated to the stimulus (can not be null)\n\x09 * @param\x09Stimulus\x09Updated stimulus\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
		{ "ToolTip", "Notifies all bound delegates that the perception info has been forgotten for a given target.\nThe notification get broadcast when all stimuli of a given target expire. Note that this\nfunctionality requires the the actor forgetting must be enabled via AIPerceptionSystem.bForgetStaleActors.\n\n@param       SourceActor     Actor associated to the stimulus (can not be null)\n@param       Stimulus        Updated stimulus" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_OnTargetPerceptionForgotten = { "OnTargetPerceptionForgotten", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAIPerceptionComponent, OnTargetPerceptionForgotten), Z_Construct_UDelegateFunction_AIModule_ActorPerceptionForgetUpdatedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_OnTargetPerceptionForgotten_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_OnTargetPerceptionForgotten_MetaData)) }; // 2044684279
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_OnTargetPerceptionUpdated_MetaData[] = {
		{ "Comment", "/**\n\x09 * Notifies all bound objects that perception info has been updated for a given target.\n\x09 * The notification is broadcasted for any received stimulus or on change of state\n\x09 * according to the stimulus configuration.\n\x09 * \n\x09 * Note - This delegate will not be called if source actor is no longer valid \n\x09 * by the time a stimulus gets processed. \n\x09 * Use OnTargetPerceptionInfoUpdated providing a source id to handle those cases.\n\x09 *\n\x09 * @param\x09SourceActor\x09""Actor associated to the stimulus (can not be null)\n\x09 * @param\x09Stimulus\x09Updated stimulus\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
		{ "ToolTip", "Notifies all bound objects that perception info has been updated for a given target.\nThe notification is broadcasted for any received stimulus or on change of state\naccording to the stimulus configuration.\n\nNote - This delegate will not be called if source actor is no longer valid\nby the time a stimulus gets processed.\nUse OnTargetPerceptionInfoUpdated providing a source id to handle those cases.\n\n@param       SourceActor     Actor associated to the stimulus (can not be null)\n@param       Stimulus        Updated stimulus" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_OnTargetPerceptionUpdated = { "OnTargetPerceptionUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAIPerceptionComponent, OnTargetPerceptionUpdated), Z_Construct_UDelegateFunction_AIModule_ActorPerceptionUpdatedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_OnTargetPerceptionUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_OnTargetPerceptionUpdated_MetaData)) }; // 4208591201
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_OnTargetPerceptionInfoUpdated_MetaData[] = {
		{ "Comment", "/**\n\x09 * Notifies all bound objects that perception info has been updated for a given target.\n\x09 * The notification is broadcasted for any received stimulus or on change of state\n\x09 * according to the stimulus configuration.\n\x09 *\n\x09 * Note - This delegate will be called even if source actor is no longer valid \n\x09 * by the time a stimulus gets processed so it is better to use source id for bookkeeping.\n\x09 *\n\x09 * @param\x09UpdateInfo\x09""Data structure providing information related to the updated perceptual data\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionComponent.h" },
		{ "ToolTip", "Notifies all bound objects that perception info has been updated for a given target.\nThe notification is broadcasted for any received stimulus or on change of state\naccording to the stimulus configuration.\n\nNote - This delegate will be called even if source actor is no longer valid\nby the time a stimulus gets processed so it is better to use source id for bookkeeping.\n\n@param       UpdateInfo      Data structure providing information related to the updated perceptual data" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_OnTargetPerceptionInfoUpdated = { "OnTargetPerceptionInfoUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAIPerceptionComponent, OnTargetPerceptionInfoUpdated), Z_Construct_UDelegateFunction_AIModule_ActorPerceptionInfoUpdatedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_OnTargetPerceptionInfoUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_OnTargetPerceptionInfoUpdated_MetaData)) }; // 3453942332
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAIPerceptionComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_SensesConfig_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_SensesConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_DominantSense,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_AIOwner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_OnPerceptionUpdated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_OnTargetPerceptionForgotten,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_OnTargetPerceptionUpdated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIPerceptionComponent_Statics::NewProp_OnTargetPerceptionInfoUpdated,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAIPerceptionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAIPerceptionComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAIPerceptionComponent_Statics::ClassParams = {
		&UAIPerceptionComponent::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAIPerceptionComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAIPerceptionComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAIPerceptionComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAIPerceptionComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAIPerceptionComponent()
	{
		if (!Z_Registration_Info_UClass_UAIPerceptionComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAIPerceptionComponent.OuterSingleton, Z_Construct_UClass_UAIPerceptionComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAIPerceptionComponent.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<UAIPerceptionComponent>()
	{
		return UAIPerceptionComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAIPerceptionComponent);
	UAIPerceptionComponent::~UAIPerceptionComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h_Statics::ScriptStructInfo[] = {
		{ FActorPerceptionUpdateInfo::StaticStruct, Z_Construct_UScriptStruct_FActorPerceptionUpdateInfo_Statics::NewStructOps, TEXT("ActorPerceptionUpdateInfo"), &Z_Registration_Info_UScriptStruct_ActorPerceptionUpdateInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActorPerceptionUpdateInfo), 1836066591U) },
		{ FActorPerceptionBlueprintInfo::StaticStruct, Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Statics::NewStructOps, TEXT("ActorPerceptionBlueprintInfo"), &Z_Registration_Info_UScriptStruct_ActorPerceptionBlueprintInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActorPerceptionBlueprintInfo), 3273487934U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAIPerceptionComponent, UAIPerceptionComponent::StaticClass, TEXT("UAIPerceptionComponent"), &Z_Registration_Info_UClass_UAIPerceptionComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAIPerceptionComponent), 1443722928U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h_3285684837(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
