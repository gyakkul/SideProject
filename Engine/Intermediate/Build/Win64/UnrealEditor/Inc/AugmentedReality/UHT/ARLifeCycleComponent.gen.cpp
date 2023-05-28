// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ARLifeCycleComponent.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARLifeCycleComponent() {}
// Cross Module References
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_AARActor_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARLifeCycleComponent();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARLifeCycleComponent_NoRegister();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UDelegateFunction_UARLifeCycleComponent_InstanceARActorSpawnedDelegate__DelegateSignature();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UDelegateFunction_UARLifeCycleComponent_InstanceARActorToBeDestroyedDelegate__DelegateSignature();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_AugmentedReality();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UARLifeCycleComponent_InstanceARActorSpawnedDelegate__DelegateSignature_Statics
	{
		struct ARLifeCycleComponent_eventInstanceARActorSpawnedDelegate_Parms
		{
			UClass* ComponentClass;
			FGuid NativeID;
			AARActor* SpawnedActor;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_ComponentClass;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NativeID;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UDelegateFunction_UARLifeCycleComponent_InstanceARActorSpawnedDelegate__DelegateSignature_Statics::NewProp_ComponentClass = { "ComponentClass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARLifeCycleComponent_eventInstanceARActorSpawnedDelegate_Parms, ComponentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UARLifeCycleComponent_InstanceARActorSpawnedDelegate__DelegateSignature_Statics::NewProp_NativeID = { "NativeID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARLifeCycleComponent_eventInstanceARActorSpawnedDelegate_Parms, NativeID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UARLifeCycleComponent_InstanceARActorSpawnedDelegate__DelegateSignature_Statics::NewProp_SpawnedActor = { "SpawnedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARLifeCycleComponent_eventInstanceARActorSpawnedDelegate_Parms, SpawnedActor), Z_Construct_UClass_AARActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UARLifeCycleComponent_InstanceARActorSpawnedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UARLifeCycleComponent_InstanceARActorSpawnedDelegate__DelegateSignature_Statics::NewProp_ComponentClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UARLifeCycleComponent_InstanceARActorSpawnedDelegate__DelegateSignature_Statics::NewProp_NativeID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UARLifeCycleComponent_InstanceARActorSpawnedDelegate__DelegateSignature_Statics::NewProp_SpawnedActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UARLifeCycleComponent_InstanceARActorSpawnedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Called when an AR actor is spawned on the server */" },
		{ "ModuleRelativePath", "Public/ARLifeCycleComponent.h" },
		{ "ToolTip", "Called when an AR actor is spawned on the server" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UARLifeCycleComponent_InstanceARActorSpawnedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARLifeCycleComponent, nullptr, "InstanceARActorSpawnedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UARLifeCycleComponent_InstanceARActorSpawnedDelegate__DelegateSignature_Statics::ARLifeCycleComponent_eventInstanceARActorSpawnedDelegate_Parms), Z_Construct_UDelegateFunction_UARLifeCycleComponent_InstanceARActorSpawnedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UARLifeCycleComponent_InstanceARActorSpawnedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00930000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UARLifeCycleComponent_InstanceARActorSpawnedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UARLifeCycleComponent_InstanceARActorSpawnedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UARLifeCycleComponent_InstanceARActorSpawnedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UARLifeCycleComponent_InstanceARActorSpawnedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UARLifeCycleComponent::FInstanceARActorSpawnedDelegate_DelegateWrapper(const FMulticastScriptDelegate& InstanceARActorSpawnedDelegate, UClass* ComponentClass, FGuid NativeID, AARActor* SpawnedActor)
{
	struct ARLifeCycleComponent_eventInstanceARActorSpawnedDelegate_Parms
	{
		UClass* ComponentClass;
		FGuid NativeID;
		AARActor* SpawnedActor;
	};
	ARLifeCycleComponent_eventInstanceARActorSpawnedDelegate_Parms Parms;
	Parms.ComponentClass=ComponentClass;
	Parms.NativeID=NativeID;
	Parms.SpawnedActor=SpawnedActor;
	InstanceARActorSpawnedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UARLifeCycleComponent_InstanceARActorToBeDestroyedDelegate__DelegateSignature_Statics
	{
		struct ARLifeCycleComponent_eventInstanceARActorToBeDestroyedDelegate_Parms
		{
			AARActor* Actor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UARLifeCycleComponent_InstanceARActorToBeDestroyedDelegate__DelegateSignature_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARLifeCycleComponent_eventInstanceARActorToBeDestroyedDelegate_Parms, Actor), Z_Construct_UClass_AARActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UARLifeCycleComponent_InstanceARActorToBeDestroyedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UARLifeCycleComponent_InstanceARActorToBeDestroyedDelegate__DelegateSignature_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UARLifeCycleComponent_InstanceARActorToBeDestroyedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Called just before the AR actor is destroyed on the server */" },
		{ "ModuleRelativePath", "Public/ARLifeCycleComponent.h" },
		{ "ToolTip", "Called just before the AR actor is destroyed on the server" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UARLifeCycleComponent_InstanceARActorToBeDestroyedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARLifeCycleComponent, nullptr, "InstanceARActorToBeDestroyedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UARLifeCycleComponent_InstanceARActorToBeDestroyedDelegate__DelegateSignature_Statics::ARLifeCycleComponent_eventInstanceARActorToBeDestroyedDelegate_Parms), Z_Construct_UDelegateFunction_UARLifeCycleComponent_InstanceARActorToBeDestroyedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UARLifeCycleComponent_InstanceARActorToBeDestroyedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UARLifeCycleComponent_InstanceARActorToBeDestroyedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UARLifeCycleComponent_InstanceARActorToBeDestroyedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UARLifeCycleComponent_InstanceARActorToBeDestroyedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UARLifeCycleComponent_InstanceARActorToBeDestroyedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UARLifeCycleComponent::FInstanceARActorToBeDestroyedDelegate_DelegateWrapper(const FMulticastScriptDelegate& InstanceARActorToBeDestroyedDelegate, AARActor* Actor)
{
	struct ARLifeCycleComponent_eventInstanceARActorToBeDestroyedDelegate_Parms
	{
		AARActor* Actor;
	};
	ARLifeCycleComponent_eventInstanceARActorToBeDestroyedDelegate_Parms Parms;
	Parms.Actor=Actor;
	InstanceARActorToBeDestroyedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UARLifeCycleComponent::execServerDestroyARActor)
	{
		P_GET_OBJECT(AARActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerDestroyARActor_Validate(Z_Param_Actor))
		{
			RPC_ValidateFailed(TEXT("ServerDestroyARActor_Validate"));
			return;
		}
		P_THIS->ServerDestroyARActor_Implementation(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARLifeCycleComponent::execServerSpawnARActor)
	{
		P_GET_OBJECT(UClass,Z_Param_ComponentClass);
		P_GET_STRUCT(FGuid,Z_Param_NativeID);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerSpawnARActor_Validate(Z_Param_ComponentClass,Z_Param_NativeID))
		{
			RPC_ValidateFailed(TEXT("ServerSpawnARActor_Validate"));
			return;
		}
		P_THIS->ServerSpawnARActor_Implementation(Z_Param_ComponentClass,Z_Param_NativeID);
		P_NATIVE_END;
	}
	struct ARLifeCycleComponent_eventServerDestroyARActor_Parms
	{
		AARActor* Actor;
	};
	struct ARLifeCycleComponent_eventServerSpawnARActor_Parms
	{
		UClass* ComponentClass;
		FGuid NativeID;
	};
	static FName NAME_UARLifeCycleComponent_ServerDestroyARActor = FName(TEXT("ServerDestroyARActor"));
	void UARLifeCycleComponent::ServerDestroyARActor(AARActor* Actor)
	{
		ARLifeCycleComponent_eventServerDestroyARActor_Parms Parms;
		Parms.Actor=Actor;
		ProcessEvent(FindFunctionChecked(NAME_UARLifeCycleComponent_ServerDestroyARActor),&Parms);
	}
	static FName NAME_UARLifeCycleComponent_ServerSpawnARActor = FName(TEXT("ServerSpawnARActor"));
	void UARLifeCycleComponent::ServerSpawnARActor(UClass* ComponentClass, FGuid NativeID)
	{
		ARLifeCycleComponent_eventServerSpawnARActor_Parms Parms;
		Parms.ComponentClass=ComponentClass;
		Parms.NativeID=NativeID;
		ProcessEvent(FindFunctionChecked(NAME_UARLifeCycleComponent_ServerSpawnARActor),&Parms);
	}
	void UARLifeCycleComponent::StaticRegisterNativesUARLifeCycleComponent()
	{
		UClass* Class = UARLifeCycleComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ServerDestroyARActor", &UARLifeCycleComponent::execServerDestroyARActor },
			{ "ServerSpawnARActor", &UARLifeCycleComponent::execServerSpawnARActor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UARLifeCycleComponent_ServerDestroyARActor_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARLifeCycleComponent_ServerDestroyARActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARLifeCycleComponent_eventServerDestroyARActor_Parms, Actor), Z_Construct_UClass_AARActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARLifeCycleComponent_ServerDestroyARActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARLifeCycleComponent_ServerDestroyARActor_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARLifeCycleComponent_ServerDestroyARActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ARLifeCycleComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARLifeCycleComponent_ServerDestroyARActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARLifeCycleComponent, nullptr, "ServerDestroyARActor", nullptr, nullptr, sizeof(ARLifeCycleComponent_eventServerDestroyARActor_Parms), Z_Construct_UFunction_UARLifeCycleComponent_ServerDestroyARActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARLifeCycleComponent_ServerDestroyARActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARLifeCycleComponent_ServerDestroyARActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARLifeCycleComponent_ServerDestroyARActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARLifeCycleComponent_ServerDestroyARActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARLifeCycleComponent_ServerDestroyARActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARLifeCycleComponent_ServerSpawnARActor_Statics
	{
		static const UECodeGen_Private::FClassPropertyParams NewProp_ComponentClass;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NativeID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UARLifeCycleComponent_ServerSpawnARActor_Statics::NewProp_ComponentClass = { "ComponentClass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARLifeCycleComponent_eventServerSpawnARActor_Parms, ComponentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UARLifeCycleComponent_ServerSpawnARActor_Statics::NewProp_NativeID = { "NativeID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARLifeCycleComponent_eventServerSpawnARActor_Parms, NativeID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARLifeCycleComponent_ServerSpawnARActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARLifeCycleComponent_ServerSpawnARActor_Statics::NewProp_ComponentClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARLifeCycleComponent_ServerSpawnARActor_Statics::NewProp_NativeID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARLifeCycleComponent_ServerSpawnARActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ARLifeCycleComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARLifeCycleComponent_ServerSpawnARActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARLifeCycleComponent, nullptr, "ServerSpawnARActor", nullptr, nullptr, sizeof(ARLifeCycleComponent_eventServerSpawnARActor_Parms), Z_Construct_UFunction_UARLifeCycleComponent_ServerSpawnARActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARLifeCycleComponent_ServerSpawnARActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80A40CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARLifeCycleComponent_ServerSpawnARActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARLifeCycleComponent_ServerSpawnARActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARLifeCycleComponent_ServerSpawnARActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARLifeCycleComponent_ServerSpawnARActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UARLifeCycleComponent);
	UClass* Z_Construct_UClass_UARLifeCycleComponent_NoRegister()
	{
		return UARLifeCycleComponent::StaticClass();
	}
	struct Z_Construct_UClass_UARLifeCycleComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnARActorSpawnedDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnARActorSpawnedDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnARActorToBeDestroyedDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnARActorToBeDestroyedDelegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARLifeCycleComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UARLifeCycleComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UARLifeCycleComponent_InstanceARActorSpawnedDelegate__DelegateSignature, "InstanceARActorSpawnedDelegate__DelegateSignature" }, // 2523263171
		{ &Z_Construct_UDelegateFunction_UARLifeCycleComponent_InstanceARActorToBeDestroyedDelegate__DelegateSignature, "InstanceARActorToBeDestroyedDelegate__DelegateSignature" }, // 555864091
		{ &Z_Construct_UFunction_UARLifeCycleComponent_ServerDestroyARActor, "ServerDestroyARActor" }, // 3382955300
		{ &Z_Construct_UFunction_UARLifeCycleComponent_ServerSpawnARActor, "ServerSpawnARActor" }, // 3858714075
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARLifeCycleComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "AR Gameplay" },
		{ "DevelopmentStatus", "Experimental" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "ARLifeCycleComponent.h" },
		{ "ModuleRelativePath", "Public/ARLifeCycleComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARLifeCycleComponent_Statics::NewProp_OnARActorSpawnedDelegate_MetaData[] = {
		{ "DisplayName", "OnARActorSpawned" },
		{ "ModuleRelativePath", "Public/ARLifeCycleComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UARLifeCycleComponent_Statics::NewProp_OnARActorSpawnedDelegate = { "OnARActorSpawnedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARLifeCycleComponent, OnARActorSpawnedDelegate), Z_Construct_UDelegateFunction_UARLifeCycleComponent_InstanceARActorSpawnedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UARLifeCycleComponent_Statics::NewProp_OnARActorSpawnedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARLifeCycleComponent_Statics::NewProp_OnARActorSpawnedDelegate_MetaData)) }; // 2523263171
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARLifeCycleComponent_Statics::NewProp_OnARActorToBeDestroyedDelegate_MetaData[] = {
		{ "DisplayName", "OnARActorToBeDestroyed" },
		{ "ModuleRelativePath", "Public/ARLifeCycleComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UARLifeCycleComponent_Statics::NewProp_OnARActorToBeDestroyedDelegate = { "OnARActorToBeDestroyedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARLifeCycleComponent, OnARActorToBeDestroyedDelegate), Z_Construct_UDelegateFunction_UARLifeCycleComponent_InstanceARActorToBeDestroyedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UARLifeCycleComponent_Statics::NewProp_OnARActorToBeDestroyedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARLifeCycleComponent_Statics::NewProp_OnARActorToBeDestroyedDelegate_MetaData)) }; // 555864091
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UARLifeCycleComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARLifeCycleComponent_Statics::NewProp_OnARActorSpawnedDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARLifeCycleComponent_Statics::NewProp_OnARActorToBeDestroyedDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARLifeCycleComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARLifeCycleComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UARLifeCycleComponent_Statics::ClassParams = {
		&UARLifeCycleComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UARLifeCycleComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UARLifeCycleComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UARLifeCycleComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UARLifeCycleComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARLifeCycleComponent()
	{
		if (!Z_Registration_Info_UClass_UARLifeCycleComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UARLifeCycleComponent.OuterSingleton, Z_Construct_UClass_UARLifeCycleComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UARLifeCycleComponent.OuterSingleton;
	}
	template<> AUGMENTEDREALITY_API UClass* StaticClass<UARLifeCycleComponent>()
	{
		return UARLifeCycleComponent::StaticClass();
	}
	UARLifeCycleComponent::UARLifeCycleComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARLifeCycleComponent);
	UARLifeCycleComponent::~UARLifeCycleComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARLifeCycleComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARLifeCycleComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UARLifeCycleComponent, UARLifeCycleComponent::StaticClass, TEXT("UARLifeCycleComponent"), &Z_Registration_Info_UClass_UARLifeCycleComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UARLifeCycleComponent), 3136835559U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARLifeCycleComponent_h_1106667951(TEXT("/Script/AugmentedReality"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARLifeCycleComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARLifeCycleComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
