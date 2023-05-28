// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Components/ActorComponent.h"
#include "../../Source/Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "../../Source/Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorComponent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAssetUserData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_AssetUserData_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EComponentCreationMethod();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEndPlayReason();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETickingGroup();
	ENGINE_API UFunction* Z_Construct_USparseDelegateFunction_Engine_ActorComponentActivatedSignature__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_USparseDelegateFunction_Engine_ActorComponentDeactivateSignature__DelegateSignature();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FActorComponentTickFunction();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleMemberReference();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	struct Z_Construct_USparseDelegateFunction_Engine_ActorComponentActivatedSignature__DelegateSignature_Statics
	{
		struct _Script_Engine_eventActorComponentActivatedSignature_Parms
		{
			UActorComponent* Component;
			bool bReset;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
		static void NewProp_bReset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_USparseDelegateFunction_Engine_ActorComponentActivatedSignature__DelegateSignature_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_USparseDelegateFunction_Engine_ActorComponentActivatedSignature__DelegateSignature_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Engine_eventActorComponentActivatedSignature_Parms, Component), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_USparseDelegateFunction_Engine_ActorComponentActivatedSignature__DelegateSignature_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_ActorComponentActivatedSignature__DelegateSignature_Statics::NewProp_Component_MetaData)) };
	void Z_Construct_USparseDelegateFunction_Engine_ActorComponentActivatedSignature__DelegateSignature_Statics::NewProp_bReset_SetBit(void* Obj)
	{
		((_Script_Engine_eventActorComponentActivatedSignature_Parms*)Obj)->bReset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_USparseDelegateFunction_Engine_ActorComponentActivatedSignature__DelegateSignature_Statics::NewProp_bReset = { "bReset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_Engine_eventActorComponentActivatedSignature_Parms), &Z_Construct_USparseDelegateFunction_Engine_ActorComponentActivatedSignature__DelegateSignature_Statics::NewProp_bReset_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_USparseDelegateFunction_Engine_ActorComponentActivatedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_ActorComponentActivatedSignature__DelegateSignature_Statics::NewProp_Component,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_ActorComponentActivatedSignature__DelegateSignature_Statics::NewProp_bReset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_USparseDelegateFunction_Engine_ActorComponentActivatedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/ActorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_USparseDelegateFunction_Engine_ActorComponentActivatedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "ActorComponentActivatedSignature__DelegateSignature", "ActorComponent", "OnComponentActivated", sizeof(Z_Construct_USparseDelegateFunction_Engine_ActorComponentActivatedSignature__DelegateSignature_Statics::_Script_Engine_eventActorComponentActivatedSignature_Parms), Z_Construct_USparseDelegateFunction_Engine_ActorComponentActivatedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_ActorComponentActivatedSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_USparseDelegateFunction_Engine_ActorComponentActivatedSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_ActorComponentActivatedSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_USparseDelegateFunction_Engine_ActorComponentActivatedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_USparseDelegateFunction_Engine_ActorComponentActivatedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FActorComponentActivatedSignature_DelegateWrapper(const FMulticastScriptDelegate& ActorComponentActivatedSignature, UActorComponent* Component, bool bReset)
{
	struct _Script_Engine_eventActorComponentActivatedSignature_Parms
	{
		UActorComponent* Component;
		bool bReset;
	};
	_Script_Engine_eventActorComponentActivatedSignature_Parms Parms;
	Parms.Component=Component;
	Parms.bReset=bReset ? true : false;
	ActorComponentActivatedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_USparseDelegateFunction_Engine_ActorComponentDeactivateSignature__DelegateSignature_Statics
	{
		struct _Script_Engine_eventActorComponentDeactivateSignature_Parms
		{
			UActorComponent* Component;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_USparseDelegateFunction_Engine_ActorComponentDeactivateSignature__DelegateSignature_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_USparseDelegateFunction_Engine_ActorComponentDeactivateSignature__DelegateSignature_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Engine_eventActorComponentDeactivateSignature_Parms, Component), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_USparseDelegateFunction_Engine_ActorComponentDeactivateSignature__DelegateSignature_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_ActorComponentDeactivateSignature__DelegateSignature_Statics::NewProp_Component_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_USparseDelegateFunction_Engine_ActorComponentDeactivateSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_ActorComponentDeactivateSignature__DelegateSignature_Statics::NewProp_Component,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_USparseDelegateFunction_Engine_ActorComponentDeactivateSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/ActorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_USparseDelegateFunction_Engine_ActorComponentDeactivateSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "ActorComponentDeactivateSignature__DelegateSignature", "ActorComponent", "OnComponentDeactivated", sizeof(Z_Construct_USparseDelegateFunction_Engine_ActorComponentDeactivateSignature__DelegateSignature_Statics::_Script_Engine_eventActorComponentDeactivateSignature_Parms), Z_Construct_USparseDelegateFunction_Engine_ActorComponentDeactivateSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_ActorComponentDeactivateSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_USparseDelegateFunction_Engine_ActorComponentDeactivateSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_ActorComponentDeactivateSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_USparseDelegateFunction_Engine_ActorComponentDeactivateSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_USparseDelegateFunction_Engine_ActorComponentDeactivateSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FActorComponentDeactivateSignature_DelegateWrapper(const FMulticastScriptDelegate& ActorComponentDeactivateSignature, UActorComponent* Component)
{
	struct _Script_Engine_eventActorComponentDeactivateSignature_Parms
	{
		UActorComponent* Component;
	};
	_Script_Engine_eventActorComponentDeactivateSignature_Parms Parms;
	Parms.Component=Component;
	ActorComponentDeactivateSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UActorComponent::execRemoveTickPrerequisiteComponent)
	{
		P_GET_OBJECT(UActorComponent,Z_Param_PrerequisiteComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveTickPrerequisiteComponent(Z_Param_PrerequisiteComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActorComponent::execRemoveTickPrerequisiteActor)
	{
		P_GET_OBJECT(AActor,Z_Param_PrerequisiteActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveTickPrerequisiteActor(Z_Param_PrerequisiteActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActorComponent::execAddTickPrerequisiteComponent)
	{
		P_GET_OBJECT(UActorComponent,Z_Param_PrerequisiteComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddTickPrerequisiteComponent(Z_Param_PrerequisiteComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActorComponent::execAddTickPrerequisiteActor)
	{
		P_GET_OBJECT(AActor,Z_Param_PrerequisiteActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddTickPrerequisiteActor(Z_Param_PrerequisiteActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActorComponent::execSetTickGroup)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_NewTickGroup);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTickGroup(ETickingGroup(Z_Param_NewTickGroup));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActorComponent::execK2_DestroyComponent)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_DestroyComponent(Z_Param_Object);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActorComponent::execGetComponentTickInterval)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetComponentTickInterval();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActorComponent::execSetComponentTickIntervalAndCooldown)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_TickInterval);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetComponentTickIntervalAndCooldown(Z_Param_TickInterval);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActorComponent::execSetComponentTickInterval)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_TickInterval);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetComponentTickInterval(Z_Param_TickInterval);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActorComponent::execIsComponentTickEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsComponentTickEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActorComponent::execSetComponentTickEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetComponentTickEnabled(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActorComponent::execSetIsReplicated)
	{
		P_GET_UBOOL(Z_Param_ShouldReplicate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsReplicated(Z_Param_ShouldReplicate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActorComponent::execSetTickableWhenPaused)
	{
		P_GET_UBOOL(Z_Param_bTickableWhenPaused);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTickableWhenPaused(Z_Param_bTickableWhenPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActorComponent::execSetAutoActivate)
	{
		P_GET_UBOOL(Z_Param_bNewAutoActivate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAutoActivate(Z_Param_bNewAutoActivate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActorComponent::execIsActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsActive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActorComponent::execToggleActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleActive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActorComponent::execSetActive)
	{
		P_GET_UBOOL(Z_Param_bNewActive);
		P_GET_UBOOL(Z_Param_bReset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActive(Z_Param_bNewActive,Z_Param_bReset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActorComponent::execDeactivate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Deactivate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActorComponent::execActivate)
	{
		P_GET_UBOOL(Z_Param_bReset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Activate(Z_Param_bReset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActorComponent::execComponentHasTag)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ComponentHasTag(Z_Param_Tag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActorComponent::execGetOwner)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetOwner();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActorComponent::execOnRep_IsActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_IsActive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActorComponent::execIsBeingDestroyed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsBeingDestroyed();
		P_NATIVE_END;
	}
	struct ActorComponent_eventReceiveAsyncPhysicsTick_Parms
	{
		float DeltaSeconds;
		float SimSeconds;
	};
	struct ActorComponent_eventReceiveEndPlay_Parms
	{
		TEnumAsByte<EEndPlayReason::Type> EndPlayReason;
	};
	struct ActorComponent_eventReceiveTick_Parms
	{
		float DeltaSeconds;
	};
	static FName NAME_UActorComponent_ReceiveAsyncPhysicsTick = FName(TEXT("ReceiveAsyncPhysicsTick"));
	void UActorComponent::ReceiveAsyncPhysicsTick(float DeltaSeconds, float SimSeconds)
	{
		ActorComponent_eventReceiveAsyncPhysicsTick_Parms Parms;
		Parms.DeltaSeconds=DeltaSeconds;
		Parms.SimSeconds=SimSeconds;
		ProcessEvent(FindFunctionChecked(NAME_UActorComponent_ReceiveAsyncPhysicsTick),&Parms);
	}
	static FName NAME_UActorComponent_ReceiveBeginPlay = FName(TEXT("ReceiveBeginPlay"));
	void UActorComponent::ReceiveBeginPlay()
	{
		ProcessEvent(FindFunctionChecked(NAME_UActorComponent_ReceiveBeginPlay),NULL);
	}
	static FName NAME_UActorComponent_ReceiveEndPlay = FName(TEXT("ReceiveEndPlay"));
	void UActorComponent::ReceiveEndPlay(EEndPlayReason::Type EndPlayReason)
	{
		ActorComponent_eventReceiveEndPlay_Parms Parms;
		Parms.EndPlayReason=EndPlayReason;
		ProcessEvent(FindFunctionChecked(NAME_UActorComponent_ReceiveEndPlay),&Parms);
	}
	static FName NAME_UActorComponent_ReceiveTick = FName(TEXT("ReceiveTick"));
	void UActorComponent::ReceiveTick(float DeltaSeconds)
	{
		ActorComponent_eventReceiveTick_Parms Parms;
		Parms.DeltaSeconds=DeltaSeconds;
		ProcessEvent(FindFunctionChecked(NAME_UActorComponent_ReceiveTick),&Parms);
	}
	void UActorComponent::StaticRegisterNativesUActorComponent()
	{
		UClass* Class = UActorComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Activate", &UActorComponent::execActivate },
			{ "AddTickPrerequisiteActor", &UActorComponent::execAddTickPrerequisiteActor },
			{ "AddTickPrerequisiteComponent", &UActorComponent::execAddTickPrerequisiteComponent },
			{ "ComponentHasTag", &UActorComponent::execComponentHasTag },
			{ "Deactivate", &UActorComponent::execDeactivate },
			{ "GetComponentTickInterval", &UActorComponent::execGetComponentTickInterval },
			{ "GetOwner", &UActorComponent::execGetOwner },
			{ "IsActive", &UActorComponent::execIsActive },
			{ "IsBeingDestroyed", &UActorComponent::execIsBeingDestroyed },
			{ "IsComponentTickEnabled", &UActorComponent::execIsComponentTickEnabled },
			{ "K2_DestroyComponent", &UActorComponent::execK2_DestroyComponent },
			{ "OnRep_IsActive", &UActorComponent::execOnRep_IsActive },
			{ "RemoveTickPrerequisiteActor", &UActorComponent::execRemoveTickPrerequisiteActor },
			{ "RemoveTickPrerequisiteComponent", &UActorComponent::execRemoveTickPrerequisiteComponent },
			{ "SetActive", &UActorComponent::execSetActive },
			{ "SetAutoActivate", &UActorComponent::execSetAutoActivate },
			{ "SetComponentTickEnabled", &UActorComponent::execSetComponentTickEnabled },
			{ "SetComponentTickInterval", &UActorComponent::execSetComponentTickInterval },
			{ "SetComponentTickIntervalAndCooldown", &UActorComponent::execSetComponentTickIntervalAndCooldown },
			{ "SetIsReplicated", &UActorComponent::execSetIsReplicated },
			{ "SetTickableWhenPaused", &UActorComponent::execSetTickableWhenPaused },
			{ "SetTickGroup", &UActorComponent::execSetTickGroup },
			{ "ToggleActive", &UActorComponent::execToggleActive },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UActorComponent_Activate_Statics
	{
		struct ActorComponent_eventActivate_Parms
		{
			bool bReset;
		};
		static void NewProp_bReset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UActorComponent_Activate_Statics::NewProp_bReset_SetBit(void* Obj)
	{
		((ActorComponent_eventActivate_Parms*)Obj)->bReset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActorComponent_Activate_Statics::NewProp_bReset = { "bReset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ActorComponent_eventActivate_Parms), &Z_Construct_UFunction_UActorComponent_Activate_Statics::NewProp_bReset_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorComponent_Activate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorComponent_Activate_Statics::NewProp_bReset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorComponent_Activate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Activation" },
		{ "Comment", "/**\n\x09 * Activates the SceneComponent, should be overridden by native child classes.\n\x09 * @param bReset - Whether the activation should happen even if ShouldActivate returns false.\n\x09 */" },
		{ "CPP_Default_bReset", "false" },
		{ "ModuleRelativePath", "Classes/Components/ActorComponent.h" },
		{ "ToolTip", "Activates the SceneComponent, should be overridden by native child classes.\n@param bReset - Whether the activation should happen even if ShouldActivate returns false." },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorComponent_Activate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorComponent, nullptr, "Activate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UActorComponent_Activate_Statics::ActorComponent_eventActivate_Parms), Z_Construct_UFunction_UActorComponent_Activate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorComponent_Activate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorComponent_Activate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorComponent_Activate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorComponent_Activate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorComponent_Activate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorComponent_AddTickPrerequisiteActor_Statics
	{
		struct ActorComponent_eventAddTickPrerequisiteActor_Parms
		{
			AActor* PrerequisiteActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PrerequisiteActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorComponent_AddTickPrerequisiteActor_Statics::NewProp_PrerequisiteActor = { "PrerequisiteActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ActorComponent_eventAddTickPrerequisiteActor_Parms, PrerequisiteActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorComponent_AddTickPrerequisiteActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorComponent_AddTickPrerequisiteActor_Statics::NewProp_PrerequisiteActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorComponent_AddTickPrerequisiteActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Tick" },
		{ "Comment", "/** Make this component tick after PrerequisiteActor */" },
		{ "Keywords", "dependency" },
		{ "ModuleRelativePath", "Classes/Components/ActorComponent.h" },
		{ "ToolTip", "Make this component tick after PrerequisiteActor" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorComponent_AddTickPrerequisiteActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorComponent, nullptr, "AddTickPrerequisiteActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UActorComponent_AddTickPrerequisiteActor_Statics::ActorComponent_eventAddTickPrerequisiteActor_Parms), Z_Construct_UFunction_UActorComponent_AddTickPrerequisiteActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorComponent_AddTickPrerequisiteActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorComponent_AddTickPrerequisiteActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorComponent_AddTickPrerequisiteActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorComponent_AddTickPrerequisiteActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorComponent_AddTickPrerequisiteActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorComponent_AddTickPrerequisiteComponent_Statics
	{
		struct ActorComponent_eventAddTickPrerequisiteComponent_Parms
		{
			UActorComponent* PrerequisiteComponent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrerequisiteComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PrerequisiteComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorComponent_AddTickPrerequisiteComponent_Statics::NewProp_PrerequisiteComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorComponent_AddTickPrerequisiteComponent_Statics::NewProp_PrerequisiteComponent = { "PrerequisiteComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ActorComponent_eventAddTickPrerequisiteComponent_Parms, PrerequisiteComponent), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UActorComponent_AddTickPrerequisiteComponent_Statics::NewProp_PrerequisiteComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorComponent_AddTickPrerequisiteComponent_Statics::NewProp_PrerequisiteComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorComponent_AddTickPrerequisiteComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorComponent_AddTickPrerequisiteComponent_Statics::NewProp_PrerequisiteComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorComponent_AddTickPrerequisiteComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Tick" },
		{ "Comment", "/** Make this component tick after PrerequisiteComponent. */" },
		{ "Keywords", "dependency" },
		{ "ModuleRelativePath", "Classes/Components/ActorComponent.h" },
		{ "ToolTip", "Make this component tick after PrerequisiteComponent." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorComponent_AddTickPrerequisiteComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorComponent, nullptr, "AddTickPrerequisiteComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UActorComponent_AddTickPrerequisiteComponent_Statics::ActorComponent_eventAddTickPrerequisiteComponent_Parms), Z_Construct_UFunction_UActorComponent_AddTickPrerequisiteComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorComponent_AddTickPrerequisiteComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorComponent_AddTickPrerequisiteComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorComponent_AddTickPrerequisiteComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorComponent_AddTickPrerequisiteComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorComponent_AddTickPrerequisiteComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorComponent_ComponentHasTag_Statics
	{
		struct ActorComponent_eventComponentHasTag_Parms
		{
			FName Tag;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_Tag;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UActorComponent_ComponentHasTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ActorComponent_eventComponentHasTag_Parms, Tag), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UActorComponent_ComponentHasTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ActorComponent_eventComponentHasTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActorComponent_ComponentHasTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ActorComponent_eventComponentHasTag_Parms), &Z_Construct_UFunction_UActorComponent_ComponentHasTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorComponent_ComponentHasTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorComponent_ComponentHasTag_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorComponent_ComponentHasTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorComponent_ComponentHasTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components" },
		{ "Comment", "/** See if this component contains the supplied tag */" },
		{ "ModuleRelativePath", "Classes/Components/ActorComponent.h" },
		{ "ToolTip", "See if this component contains the supplied tag" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorComponent_ComponentHasTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorComponent, nullptr, "ComponentHasTag", nullptr, nullptr, sizeof(Z_Construct_UFunction_UActorComponent_ComponentHasTag_Statics::ActorComponent_eventComponentHasTag_Parms), Z_Construct_UFunction_UActorComponent_ComponentHasTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorComponent_ComponentHasTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorComponent_ComponentHasTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorComponent_ComponentHasTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorComponent_ComponentHasTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorComponent_ComponentHasTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorComponent_Deactivate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorComponent_Deactivate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Activation" },
		{ "Comment", "/**\n\x09 * Deactivates the SceneComponent.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/ActorComponent.h" },
		{ "ToolTip", "Deactivates the SceneComponent." },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorComponent_Deactivate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorComponent, nullptr, "Deactivate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorComponent_Deactivate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorComponent_Deactivate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorComponent_Deactivate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorComponent_Deactivate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorComponent_GetComponentTickInterval_Statics
	{
		struct ActorComponent_eventGetComponentTickInterval_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UActorComponent_GetComponentTickInterval_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ActorComponent_eventGetComponentTickInterval_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorComponent_GetComponentTickInterval_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorComponent_GetComponentTickInterval_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorComponent_GetComponentTickInterval_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Tick" },
		{ "Comment", "/** Returns the tick interval for this component's primary tick function, which is the frequency in seconds at which it will be executed */" },
		{ "ModuleRelativePath", "Classes/Components/ActorComponent.h" },
		{ "ToolTip", "Returns the tick interval for this component's primary tick function, which is the frequency in seconds at which it will be executed" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorComponent_GetComponentTickInterval_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorComponent, nullptr, "GetComponentTickInterval", nullptr, nullptr, sizeof(Z_Construct_UFunction_UActorComponent_GetComponentTickInterval_Statics::ActorComponent_eventGetComponentTickInterval_Parms), Z_Construct_UFunction_UActorComponent_GetComponentTickInterval_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorComponent_GetComponentTickInterval_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorComponent_GetComponentTickInterval_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorComponent_GetComponentTickInterval_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorComponent_GetComponentTickInterval()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorComponent_GetComponentTickInterval_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorComponent_GetOwner_Statics
	{
		struct ActorComponent_eventGetOwner_Parms
		{
			AActor* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorComponent_GetOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ActorComponent_eventGetOwner_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorComponent_GetOwner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorComponent_GetOwner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorComponent_GetOwner_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components" },
		{ "Comment", "/** Follow the Outer chain to get the  AActor  that 'Owns' this component */" },
		{ "Keywords", "Actor Owning Parent" },
		{ "ModuleRelativePath", "Classes/Components/ActorComponent.h" },
		{ "ToolTip", "Follow the Outer chain to get the  AActor  that 'Owns' this component" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorComponent_GetOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorComponent, nullptr, "GetOwner", nullptr, nullptr, sizeof(Z_Construct_UFunction_UActorComponent_GetOwner_Statics::ActorComponent_eventGetOwner_Parms), Z_Construct_UFunction_UActorComponent_GetOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorComponent_GetOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorComponent_GetOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorComponent_GetOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorComponent_GetOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorComponent_GetOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorComponent_IsActive_Statics
	{
		struct ActorComponent_eventIsActive_Parms
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
	void Z_Construct_UFunction_UActorComponent_IsActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ActorComponent_eventIsActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActorComponent_IsActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ActorComponent_eventIsActive_Parms), &Z_Construct_UFunction_UActorComponent_IsActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorComponent_IsActive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorComponent_IsActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorComponent_IsActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Activation" },
		{ "Comment", "/**\n\x09 * Returns whether the component is active or not\n\x09 * @return - The active state of the component.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/ActorComponent.h" },
		{ "ToolTip", "Returns whether the component is active or not\n@return - The active state of the component." },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorComponent_IsActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorComponent, nullptr, "IsActive", nullptr, nullptr, sizeof(Z_Construct_UFunction_UActorComponent_IsActive_Statics::ActorComponent_eventIsActive_Parms), Z_Construct_UFunction_UActorComponent_IsActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorComponent_IsActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorComponent_IsActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorComponent_IsActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorComponent_IsActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorComponent_IsActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorComponent_IsBeingDestroyed_Statics
	{
		struct ActorComponent_eventIsBeingDestroyed_Parms
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
	void Z_Construct_UFunction_UActorComponent_IsBeingDestroyed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ActorComponent_eventIsBeingDestroyed_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActorComponent_IsBeingDestroyed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ActorComponent_eventIsBeingDestroyed_Parms), &Z_Construct_UFunction_UActorComponent_IsBeingDestroyed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorComponent_IsBeingDestroyed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorComponent_IsBeingDestroyed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorComponent_IsBeingDestroyed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components" },
		{ "Comment", "/**\n\x09 * Returns whether the component is in the process of being destroyed.\n\x09 */" },
		{ "DisplayName", "Is Component Being Destroyed" },
		{ "ModuleRelativePath", "Classes/Components/ActorComponent.h" },
		{ "ToolTip", "Returns whether the component is in the process of being destroyed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorComponent_IsBeingDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorComponent, nullptr, "IsBeingDestroyed", nullptr, nullptr, sizeof(Z_Construct_UFunction_UActorComponent_IsBeingDestroyed_Statics::ActorComponent_eventIsBeingDestroyed_Parms), Z_Construct_UFunction_UActorComponent_IsBeingDestroyed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorComponent_IsBeingDestroyed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorComponent_IsBeingDestroyed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorComponent_IsBeingDestroyed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorComponent_IsBeingDestroyed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorComponent_IsBeingDestroyed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorComponent_IsComponentTickEnabled_Statics
	{
		struct ActorComponent_eventIsComponentTickEnabled_Parms
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
	void Z_Construct_UFunction_UActorComponent_IsComponentTickEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ActorComponent_eventIsComponentTickEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActorComponent_IsComponentTickEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ActorComponent_eventIsComponentTickEnabled_Parms), &Z_Construct_UFunction_UActorComponent_IsComponentTickEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorComponent_IsComponentTickEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorComponent_IsComponentTickEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorComponent_IsComponentTickEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Tick" },
		{ "Comment", "/** \n\x09 * Returns whether this component has tick enabled or not\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/ActorComponent.h" },
		{ "ToolTip", "Returns whether this component has tick enabled or not" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorComponent_IsComponentTickEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorComponent, nullptr, "IsComponentTickEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UActorComponent_IsComponentTickEnabled_Statics::ActorComponent_eventIsComponentTickEnabled_Parms), Z_Construct_UFunction_UActorComponent_IsComponentTickEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorComponent_IsComponentTickEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorComponent_IsComponentTickEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorComponent_IsComponentTickEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorComponent_IsComponentTickEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorComponent_IsComponentTickEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorComponent_K2_DestroyComponent_Statics
	{
		struct ActorComponent_eventK2_DestroyComponent_Parms
		{
			UObject* Object;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorComponent_K2_DestroyComponent_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ActorComponent_eventK2_DestroyComponent_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorComponent_K2_DestroyComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorComponent_K2_DestroyComponent_Statics::NewProp_Object,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorComponent_K2_DestroyComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components" },
		{ "Comment", "/**\n\x09 * Unregister and mark for pending kill a component.  This may not be used to destroy a component that is owned by an actor unless the owning actor is calling the function.\n\x09 */" },
		{ "DefaultToSelf", "Object" },
		{ "DisplayName", "Destroy Component" },
		{ "HidePin", "Object" },
		{ "Keywords", "Delete" },
		{ "ModuleRelativePath", "Classes/Components/ActorComponent.h" },
		{ "ScriptName", "DestroyComponent" },
		{ "ToolTip", "Unregister and mark for pending kill a component.  This may not be used to destroy a component that is owned by an actor unless the owning actor is calling the function." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorComponent_K2_DestroyComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorComponent, nullptr, "K2_DestroyComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UActorComponent_K2_DestroyComponent_Statics::ActorComponent_eventK2_DestroyComponent_Parms), Z_Construct_UFunction_UActorComponent_K2_DestroyComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorComponent_K2_DestroyComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorComponent_K2_DestroyComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorComponent_K2_DestroyComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorComponent_K2_DestroyComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorComponent_K2_DestroyComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorComponent_OnRep_IsActive_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorComponent_OnRep_IsActive_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Handles replication of active state, handles ticking by default but should be overridden as needed */" },
		{ "ModuleRelativePath", "Classes/Components/ActorComponent.h" },
		{ "ToolTip", "Handles replication of active state, handles ticking by default but should be overridden as needed" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorComponent_OnRep_IsActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorComponent, nullptr, "OnRep_IsActive", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorComponent_OnRep_IsActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorComponent_OnRep_IsActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorComponent_OnRep_IsActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorComponent_OnRep_IsActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorComponent_ReceiveAsyncPhysicsTick_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SimSeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UActorComponent_ReceiveAsyncPhysicsTick_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ActorComponent_eventReceiveAsyncPhysicsTick_Parms, DeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UActorComponent_ReceiveAsyncPhysicsTick_Statics::NewProp_SimSeconds = { "SimSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ActorComponent_eventReceiveAsyncPhysicsTick_Parms, SimSeconds), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorComponent_ReceiveAsyncPhysicsTick_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorComponent_ReceiveAsyncPhysicsTick_Statics::NewProp_DeltaSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorComponent_ReceiveAsyncPhysicsTick_Statics::NewProp_SimSeconds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorComponent_ReceiveAsyncPhysicsTick_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event called every async physics tick if bAsyncPhysicsTickEnabled is true */" },
		{ "DisplayName", "Async Physics Tick" },
		{ "ModuleRelativePath", "Classes/Components/ActorComponent.h" },
		{ "ToolTip", "Event called every async physics tick if bAsyncPhysicsTickEnabled is true" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorComponent_ReceiveAsyncPhysicsTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorComponent, nullptr, "ReceiveAsyncPhysicsTick", nullptr, nullptr, sizeof(ActorComponent_eventReceiveAsyncPhysicsTick_Parms), Z_Construct_UFunction_UActorComponent_ReceiveAsyncPhysicsTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorComponent_ReceiveAsyncPhysicsTick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorComponent_ReceiveAsyncPhysicsTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorComponent_ReceiveAsyncPhysicsTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorComponent_ReceiveAsyncPhysicsTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorComponent_ReceiveAsyncPhysicsTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorComponent_ReceiveBeginPlay_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorComponent_ReceiveBeginPlay_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** \n\x09 * Blueprint implementable event for when the component is beginning play, called before its owning actor's BeginPlay\n\x09 * or when the component is dynamically created if the Actor has already BegunPlay. \n\x09 */" },
		{ "DisplayName", "Begin Play" },
		{ "ModuleRelativePath", "Classes/Components/ActorComponent.h" },
		{ "ToolTip", "Blueprint implementable event for when the component is beginning play, called before its owning actor's BeginPlay\nor when the component is dynamically created if the Actor has already BegunPlay." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorComponent_ReceiveBeginPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorComponent, nullptr, "ReceiveBeginPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorComponent_ReceiveBeginPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorComponent_ReceiveBeginPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorComponent_ReceiveBeginPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorComponent_ReceiveBeginPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorComponent_ReceiveEndPlay_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_EndPlayReason;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UActorComponent_ReceiveEndPlay_Statics::NewProp_EndPlayReason = { "EndPlayReason", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ActorComponent_eventReceiveEndPlay_Parms, EndPlayReason), Z_Construct_UEnum_Engine_EEndPlayReason, METADATA_PARAMS(nullptr, 0) }; // 2713016423
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorComponent_ReceiveEndPlay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorComponent_ReceiveEndPlay_Statics::NewProp_EndPlayReason,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorComponent_ReceiveEndPlay_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Blueprint implementable event for when the component ends play, generally via destruction or its Actor's EndPlay. */" },
		{ "DisplayName", "End Play" },
		{ "Keywords", "delete" },
		{ "ModuleRelativePath", "Classes/Components/ActorComponent.h" },
		{ "ToolTip", "Blueprint implementable event for when the component ends play, generally via destruction or its Actor's EndPlay." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorComponent_ReceiveEndPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorComponent, nullptr, "ReceiveEndPlay", nullptr, nullptr, sizeof(ActorComponent_eventReceiveEndPlay_Parms), Z_Construct_UFunction_UActorComponent_ReceiveEndPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorComponent_ReceiveEndPlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorComponent_ReceiveEndPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorComponent_ReceiveEndPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorComponent_ReceiveEndPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorComponent_ReceiveEndPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorComponent_ReceiveTick_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UActorComponent_ReceiveTick_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ActorComponent_eventReceiveTick_Parms, DeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorComponent_ReceiveTick_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorComponent_ReceiveTick_Statics::NewProp_DeltaSeconds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorComponent_ReceiveTick_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event called every frame if tick is enabled */" },
		{ "DisplayName", "Tick" },
		{ "ModuleRelativePath", "Classes/Components/ActorComponent.h" },
		{ "ToolTip", "Event called every frame if tick is enabled" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorComponent_ReceiveTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorComponent, nullptr, "ReceiveTick", nullptr, nullptr, sizeof(ActorComponent_eventReceiveTick_Parms), Z_Construct_UFunction_UActorComponent_ReceiveTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorComponent_ReceiveTick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorComponent_ReceiveTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorComponent_ReceiveTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorComponent_ReceiveTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorComponent_ReceiveTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorComponent_RemoveTickPrerequisiteActor_Statics
	{
		struct ActorComponent_eventRemoveTickPrerequisiteActor_Parms
		{
			AActor* PrerequisiteActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PrerequisiteActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorComponent_RemoveTickPrerequisiteActor_Statics::NewProp_PrerequisiteActor = { "PrerequisiteActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ActorComponent_eventRemoveTickPrerequisiteActor_Parms, PrerequisiteActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorComponent_RemoveTickPrerequisiteActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorComponent_RemoveTickPrerequisiteActor_Statics::NewProp_PrerequisiteActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorComponent_RemoveTickPrerequisiteActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Tick" },
		{ "Comment", "/** Remove tick dependency on PrerequisiteActor. */" },
		{ "Keywords", "dependency" },
		{ "ModuleRelativePath", "Classes/Components/ActorComponent.h" },
		{ "ToolTip", "Remove tick dependency on PrerequisiteActor." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorComponent_RemoveTickPrerequisiteActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorComponent, nullptr, "RemoveTickPrerequisiteActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UActorComponent_RemoveTickPrerequisiteActor_Statics::ActorComponent_eventRemoveTickPrerequisiteActor_Parms), Z_Construct_UFunction_UActorComponent_RemoveTickPrerequisiteActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorComponent_RemoveTickPrerequisiteActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorComponent_RemoveTickPrerequisiteActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorComponent_RemoveTickPrerequisiteActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorComponent_RemoveTickPrerequisiteActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorComponent_RemoveTickPrerequisiteActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorComponent_RemoveTickPrerequisiteComponent_Statics
	{
		struct ActorComponent_eventRemoveTickPrerequisiteComponent_Parms
		{
			UActorComponent* PrerequisiteComponent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrerequisiteComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PrerequisiteComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorComponent_RemoveTickPrerequisiteComponent_Statics::NewProp_PrerequisiteComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorComponent_RemoveTickPrerequisiteComponent_Statics::NewProp_PrerequisiteComponent = { "PrerequisiteComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ActorComponent_eventRemoveTickPrerequisiteComponent_Parms, PrerequisiteComponent), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UActorComponent_RemoveTickPrerequisiteComponent_Statics::NewProp_PrerequisiteComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorComponent_RemoveTickPrerequisiteComponent_Statics::NewProp_PrerequisiteComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorComponent_RemoveTickPrerequisiteComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorComponent_RemoveTickPrerequisiteComponent_Statics::NewProp_PrerequisiteComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorComponent_RemoveTickPrerequisiteComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Tick" },
		{ "Comment", "/** Remove tick dependency on PrerequisiteComponent. */" },
		{ "Keywords", "dependency" },
		{ "ModuleRelativePath", "Classes/Components/ActorComponent.h" },
		{ "ToolTip", "Remove tick dependency on PrerequisiteComponent." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorComponent_RemoveTickPrerequisiteComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorComponent, nullptr, "RemoveTickPrerequisiteComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UActorComponent_RemoveTickPrerequisiteComponent_Statics::ActorComponent_eventRemoveTickPrerequisiteComponent_Parms), Z_Construct_UFunction_UActorComponent_RemoveTickPrerequisiteComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorComponent_RemoveTickPrerequisiteComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorComponent_RemoveTickPrerequisiteComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorComponent_RemoveTickPrerequisiteComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorComponent_RemoveTickPrerequisiteComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorComponent_RemoveTickPrerequisiteComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorComponent_SetActive_Statics
	{
		struct ActorComponent_eventSetActive_Parms
		{
			bool bNewActive;
			bool bReset;
		};
		static void NewProp_bNewActive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewActive;
		static void NewProp_bReset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UActorComponent_SetActive_Statics::NewProp_bNewActive_SetBit(void* Obj)
	{
		((ActorComponent_eventSetActive_Parms*)Obj)->bNewActive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActorComponent_SetActive_Statics::NewProp_bNewActive = { "bNewActive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ActorComponent_eventSetActive_Parms), &Z_Construct_UFunction_UActorComponent_SetActive_Statics::NewProp_bNewActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UActorComponent_SetActive_Statics::NewProp_bReset_SetBit(void* Obj)
	{
		((ActorComponent_eventSetActive_Parms*)Obj)->bReset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActorComponent_SetActive_Statics::NewProp_bReset = { "bReset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ActorComponent_eventSetActive_Parms), &Z_Construct_UFunction_UActorComponent_SetActive_Statics::NewProp_bReset_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorComponent_SetActive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorComponent_SetActive_Statics::NewProp_bNewActive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorComponent_SetActive_Statics::NewProp_bReset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorComponent_SetActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Activation" },
		{ "Comment", "/**\n\x09 * Sets whether the component is active or not\n\x09 * @param bNewActive - The new active state of the component\n\x09 * @param bReset - Whether the activation should happen even if ShouldActivate returns false.\n\x09 */" },
		{ "CPP_Default_bReset", "false" },
		{ "ModuleRelativePath", "Classes/Components/ActorComponent.h" },
		{ "ToolTip", "Sets whether the component is active or not\n@param bNewActive - The new active state of the component\n@param bReset - Whether the activation should happen even if ShouldActivate returns false." },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorComponent_SetActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorComponent, nullptr, "SetActive", nullptr, nullptr, sizeof(Z_Construct_UFunction_UActorComponent_SetActive_Statics::ActorComponent_eventSetActive_Parms), Z_Construct_UFunction_UActorComponent_SetActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorComponent_SetActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorComponent_SetActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorComponent_SetActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorComponent_SetActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorComponent_SetActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorComponent_SetAutoActivate_Statics
	{
		struct ActorComponent_eventSetAutoActivate_Parms
		{
			bool bNewAutoActivate;
		};
		static void NewProp_bNewAutoActivate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewAutoActivate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UActorComponent_SetAutoActivate_Statics::NewProp_bNewAutoActivate_SetBit(void* Obj)
	{
		((ActorComponent_eventSetAutoActivate_Parms*)Obj)->bNewAutoActivate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActorComponent_SetAutoActivate_Statics::NewProp_bNewAutoActivate = { "bNewAutoActivate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ActorComponent_eventSetAutoActivate_Parms), &Z_Construct_UFunction_UActorComponent_SetAutoActivate_Statics::NewProp_bNewAutoActivate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorComponent_SetAutoActivate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorComponent_SetAutoActivate_Statics::NewProp_bNewAutoActivate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorComponent_SetAutoActivate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Activation" },
		{ "Comment", "/**\n\x09 * Sets whether the component should be auto activate or not. Only safe during construction scripts.\n\x09 * @param bNewAutoActivate - The new auto activate state of the component\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/ActorComponent.h" },
		{ "ToolTip", "Sets whether the component should be auto activate or not. Only safe during construction scripts.\n@param bNewAutoActivate - The new auto activate state of the component" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorComponent_SetAutoActivate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorComponent, nullptr, "SetAutoActivate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UActorComponent_SetAutoActivate_Statics::ActorComponent_eventSetAutoActivate_Parms), Z_Construct_UFunction_UActorComponent_SetAutoActivate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorComponent_SetAutoActivate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorComponent_SetAutoActivate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorComponent_SetAutoActivate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorComponent_SetAutoActivate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorComponent_SetAutoActivate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorComponent_SetComponentTickEnabled_Statics
	{
		struct ActorComponent_eventSetComponentTickEnabled_Parms
		{
			bool bEnabled;
		};
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UActorComponent_SetComponentTickEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((ActorComponent_eventSetComponentTickEnabled_Parms*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActorComponent_SetComponentTickEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ActorComponent_eventSetComponentTickEnabled_Parms), &Z_Construct_UFunction_UActorComponent_SetComponentTickEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorComponent_SetComponentTickEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorComponent_SetComponentTickEnabled_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorComponent_SetComponentTickEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Tick" },
		{ "Comment", "/** \n\x09 * Set this component's tick functions to be enabled or disabled. Only has an effect if the function is registered\n\x09 * \n\x09 * @param\x09""bEnabled - Whether it should be enabled or not\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/ActorComponent.h" },
		{ "ToolTip", "Set this component's tick functions to be enabled or disabled. Only has an effect if the function is registered\n\n@param       bEnabled - Whether it should be enabled or not" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorComponent_SetComponentTickEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorComponent, nullptr, "SetComponentTickEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UActorComponent_SetComponentTickEnabled_Statics::ActorComponent_eventSetComponentTickEnabled_Parms), Z_Construct_UFunction_UActorComponent_SetComponentTickEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorComponent_SetComponentTickEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorComponent_SetComponentTickEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorComponent_SetComponentTickEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorComponent_SetComponentTickEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorComponent_SetComponentTickEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorComponent_SetComponentTickInterval_Statics
	{
		struct ActorComponent_eventSetComponentTickInterval_Parms
		{
			float TickInterval;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TickInterval;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UActorComponent_SetComponentTickInterval_Statics::NewProp_TickInterval = { "TickInterval", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ActorComponent_eventSetComponentTickInterval_Parms, TickInterval), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorComponent_SetComponentTickInterval_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorComponent_SetComponentTickInterval_Statics::NewProp_TickInterval,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorComponent_SetComponentTickInterval_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Tick" },
		{ "Comment", "/** \n\x09* Sets the tick interval for this component's primary tick function. Does not enable the tick interval. Takes effect on next tick.\n\x09* @param TickInterval\x09The duration between ticks for this component's primary tick function\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Components/ActorComponent.h" },
		{ "ToolTip", "Sets the tick interval for this component's primary tick function. Does not enable the tick interval. Takes effect on next tick.\n@param TickInterval   The duration between ticks for this component's primary tick function" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorComponent_SetComponentTickInterval_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorComponent, nullptr, "SetComponentTickInterval", nullptr, nullptr, sizeof(Z_Construct_UFunction_UActorComponent_SetComponentTickInterval_Statics::ActorComponent_eventSetComponentTickInterval_Parms), Z_Construct_UFunction_UActorComponent_SetComponentTickInterval_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorComponent_SetComponentTickInterval_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorComponent_SetComponentTickInterval_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorComponent_SetComponentTickInterval_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorComponent_SetComponentTickInterval()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorComponent_SetComponentTickInterval_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorComponent_SetComponentTickIntervalAndCooldown_Statics
	{
		struct ActorComponent_eventSetComponentTickIntervalAndCooldown_Parms
		{
			float TickInterval;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TickInterval;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UActorComponent_SetComponentTickIntervalAndCooldown_Statics::NewProp_TickInterval = { "TickInterval", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ActorComponent_eventSetComponentTickIntervalAndCooldown_Parms, TickInterval), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorComponent_SetComponentTickIntervalAndCooldown_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorComponent_SetComponentTickIntervalAndCooldown_Statics::NewProp_TickInterval,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorComponent_SetComponentTickIntervalAndCooldown_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Tick" },
		{ "Comment", "/**\n\x09* Sets the tick interval for this component's primary tick function. Does not enable the tick interval. Takes effect imediately.\n\x09* @param TickInterval\x09The duration between ticks for this component's primary tick function\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Components/ActorComponent.h" },
		{ "ToolTip", "Sets the tick interval for this component's primary tick function. Does not enable the tick interval. Takes effect imediately.\n@param TickInterval   The duration between ticks for this component's primary tick function" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorComponent_SetComponentTickIntervalAndCooldown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorComponent, nullptr, "SetComponentTickIntervalAndCooldown", nullptr, nullptr, sizeof(Z_Construct_UFunction_UActorComponent_SetComponentTickIntervalAndCooldown_Statics::ActorComponent_eventSetComponentTickIntervalAndCooldown_Parms), Z_Construct_UFunction_UActorComponent_SetComponentTickIntervalAndCooldown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorComponent_SetComponentTickIntervalAndCooldown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorComponent_SetComponentTickIntervalAndCooldown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorComponent_SetComponentTickIntervalAndCooldown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorComponent_SetComponentTickIntervalAndCooldown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorComponent_SetComponentTickIntervalAndCooldown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorComponent_SetIsReplicated_Statics
	{
		struct ActorComponent_eventSetIsReplicated_Parms
		{
			bool ShouldReplicate;
		};
		static void NewProp_ShouldReplicate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ShouldReplicate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UActorComponent_SetIsReplicated_Statics::NewProp_ShouldReplicate_SetBit(void* Obj)
	{
		((ActorComponent_eventSetIsReplicated_Parms*)Obj)->ShouldReplicate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActorComponent_SetIsReplicated_Statics::NewProp_ShouldReplicate = { "ShouldReplicate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ActorComponent_eventSetIsReplicated_Parms), &Z_Construct_UFunction_UActorComponent_SetIsReplicated_Statics::NewProp_ShouldReplicate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorComponent_SetIsReplicated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorComponent_SetIsReplicated_Statics::NewProp_ShouldReplicate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorComponent_SetIsReplicated_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components" },
		{ "Comment", "/** Enable or disable replication. This is the equivalent of RemoteRole for actors (only a bool is required for components) */" },
		{ "ModuleRelativePath", "Classes/Components/ActorComponent.h" },
		{ "ToolTip", "Enable or disable replication. This is the equivalent of RemoteRole for actors (only a bool is required for components)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorComponent_SetIsReplicated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorComponent, nullptr, "SetIsReplicated", nullptr, nullptr, sizeof(Z_Construct_UFunction_UActorComponent_SetIsReplicated_Statics::ActorComponent_eventSetIsReplicated_Parms), Z_Construct_UFunction_UActorComponent_SetIsReplicated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorComponent_SetIsReplicated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorComponent_SetIsReplicated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorComponent_SetIsReplicated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorComponent_SetIsReplicated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorComponent_SetIsReplicated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorComponent_SetTickableWhenPaused_Statics
	{
		struct ActorComponent_eventSetTickableWhenPaused_Parms
		{
			bool bTickableWhenPaused;
		};
		static void NewProp_bTickableWhenPaused_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTickableWhenPaused;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UActorComponent_SetTickableWhenPaused_Statics::NewProp_bTickableWhenPaused_SetBit(void* Obj)
	{
		((ActorComponent_eventSetTickableWhenPaused_Parms*)Obj)->bTickableWhenPaused = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActorComponent_SetTickableWhenPaused_Statics::NewProp_bTickableWhenPaused = { "bTickableWhenPaused", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ActorComponent_eventSetTickableWhenPaused_Parms), &Z_Construct_UFunction_UActorComponent_SetTickableWhenPaused_Statics::NewProp_bTickableWhenPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorComponent_SetTickableWhenPaused_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorComponent_SetTickableWhenPaused_Statics::NewProp_bTickableWhenPaused,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorComponent_SetTickableWhenPaused_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Tick" },
		{ "Comment", "/** Sets whether this component can tick when paused. */" },
		{ "ModuleRelativePath", "Classes/Components/ActorComponent.h" },
		{ "ToolTip", "Sets whether this component can tick when paused." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorComponent_SetTickableWhenPaused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorComponent, nullptr, "SetTickableWhenPaused", nullptr, nullptr, sizeof(Z_Construct_UFunction_UActorComponent_SetTickableWhenPaused_Statics::ActorComponent_eventSetTickableWhenPaused_Parms), Z_Construct_UFunction_UActorComponent_SetTickableWhenPaused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorComponent_SetTickableWhenPaused_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorComponent_SetTickableWhenPaused_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorComponent_SetTickableWhenPaused_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorComponent_SetTickableWhenPaused()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorComponent_SetTickableWhenPaused_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorComponent_SetTickGroup_Statics
	{
		struct ActorComponent_eventSetTickGroup_Parms
		{
			TEnumAsByte<ETickingGroup> NewTickGroup;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewTickGroup;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UActorComponent_SetTickGroup_Statics::NewProp_NewTickGroup = { "NewTickGroup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ActorComponent_eventSetTickGroup_Parms, NewTickGroup), Z_Construct_UEnum_Engine_ETickingGroup, METADATA_PARAMS(nullptr, 0) }; // 4250878082
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorComponent_SetTickGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorComponent_SetTickGroup_Statics::NewProp_NewTickGroup,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorComponent_SetTickGroup_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Tick" },
		{ "Comment", "/** Changes the ticking group for this component */" },
		{ "Keywords", "dependency" },
		{ "ModuleRelativePath", "Classes/Components/ActorComponent.h" },
		{ "ToolTip", "Changes the ticking group for this component" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorComponent_SetTickGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorComponent, nullptr, "SetTickGroup", nullptr, nullptr, sizeof(Z_Construct_UFunction_UActorComponent_SetTickGroup_Statics::ActorComponent_eventSetTickGroup_Parms), Z_Construct_UFunction_UActorComponent_SetTickGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorComponent_SetTickGroup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorComponent_SetTickGroup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorComponent_SetTickGroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorComponent_SetTickGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorComponent_SetTickGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorComponent_ToggleActive_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorComponent_ToggleActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Activation" },
		{ "Comment", "/**\n\x09 * Toggles the active state of the component\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/ActorComponent.h" },
		{ "ToolTip", "Toggles the active state of the component" },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorComponent_ToggleActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorComponent, nullptr, "ToggleActive", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorComponent_ToggleActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorComponent_ToggleActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorComponent_ToggleActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorComponent_ToggleActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorComponent);
	UClass* Z_Construct_UClass_UActorComponent_NoRegister()
	{
		return UActorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UActorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryComponentTick_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PrimaryComponentTick;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ComponentTags_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentTags_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ComponentTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetUserData_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AssetUserData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetUserData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AssetUserData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UCSSerializationIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_UCSSerializationIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNetAddressable_MetaData[];
#endif
		static void NewProp_bNetAddressable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNetAddressable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReplicateUsingRegisteredSubObjectList_MetaData[];
#endif
		static void NewProp_bReplicateUsingRegisteredSubObjectList_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReplicateUsingRegisteredSubObjectList;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReplicates_MetaData[];
#endif
		static void NewProp_bReplicates_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReplicates;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCreatedByConstructionScript_MetaData[];
#endif
		static void NewProp_bCreatedByConstructionScript_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreatedByConstructionScript;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInstanceComponent_MetaData[];
#endif
		static void NewProp_bInstanceComponent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInstanceComponent;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoActivate_MetaData[];
#endif
		static void NewProp_bAutoActivate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoActivate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsActive_MetaData[];
#endif
		static void NewProp_bIsActive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsActive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEditableWhenInherited_MetaData[];
#endif
		static void NewProp_bEditableWhenInherited_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEditableWhenInherited;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanEverAffectNavigation_MetaData[];
#endif
		static void NewProp_bCanEverAffectNavigation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanEverAffectNavigation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsEditorOnly_MetaData[];
#endif
		static void NewProp_bIsEditorOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEditorOnly;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsVisualizationComponent_MetaData[];
#endif
		static void NewProp_bIsVisualizationComponent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsVisualizationComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNeedsUCSSerializationIndexEvaluted_MetaData[];
#endif
		static void NewProp_bNeedsUCSSerializationIndexEvaluted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNeedsUCSSerializationIndexEvaluted;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FBytePropertyParams NewProp_CreationMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CreationMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CreationMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnComponentActivated_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnComponentActivated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnComponentDeactivated_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnComponentDeactivated;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_UCSModifiedProperties_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UCSModifiedProperties_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UCSModifiedProperties;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UActorComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UActorComponent_Activate, "Activate" }, // 3362287951
		{ &Z_Construct_UFunction_UActorComponent_AddTickPrerequisiteActor, "AddTickPrerequisiteActor" }, // 2263626800
		{ &Z_Construct_UFunction_UActorComponent_AddTickPrerequisiteComponent, "AddTickPrerequisiteComponent" }, // 4167916205
		{ &Z_Construct_UFunction_UActorComponent_ComponentHasTag, "ComponentHasTag" }, // 2448170350
		{ &Z_Construct_UFunction_UActorComponent_Deactivate, "Deactivate" }, // 2993295355
		{ &Z_Construct_UFunction_UActorComponent_GetComponentTickInterval, "GetComponentTickInterval" }, // 4292995794
		{ &Z_Construct_UFunction_UActorComponent_GetOwner, "GetOwner" }, // 1693109627
		{ &Z_Construct_UFunction_UActorComponent_IsActive, "IsActive" }, // 1567114058
		{ &Z_Construct_UFunction_UActorComponent_IsBeingDestroyed, "IsBeingDestroyed" }, // 3449890108
		{ &Z_Construct_UFunction_UActorComponent_IsComponentTickEnabled, "IsComponentTickEnabled" }, // 3313739091
		{ &Z_Construct_UFunction_UActorComponent_K2_DestroyComponent, "K2_DestroyComponent" }, // 334619657
		{ &Z_Construct_UFunction_UActorComponent_OnRep_IsActive, "OnRep_IsActive" }, // 2846481419
		{ &Z_Construct_UFunction_UActorComponent_ReceiveAsyncPhysicsTick, "ReceiveAsyncPhysicsTick" }, // 900821379
		{ &Z_Construct_UFunction_UActorComponent_ReceiveBeginPlay, "ReceiveBeginPlay" }, // 1784517727
		{ &Z_Construct_UFunction_UActorComponent_ReceiveEndPlay, "ReceiveEndPlay" }, // 2109528710
		{ &Z_Construct_UFunction_UActorComponent_ReceiveTick, "ReceiveTick" }, // 76995444
		{ &Z_Construct_UFunction_UActorComponent_RemoveTickPrerequisiteActor, "RemoveTickPrerequisiteActor" }, // 2934876841
		{ &Z_Construct_UFunction_UActorComponent_RemoveTickPrerequisiteComponent, "RemoveTickPrerequisiteComponent" }, // 2283315992
		{ &Z_Construct_UFunction_UActorComponent_SetActive, "SetActive" }, // 3958889330
		{ &Z_Construct_UFunction_UActorComponent_SetAutoActivate, "SetAutoActivate" }, // 3162393691
		{ &Z_Construct_UFunction_UActorComponent_SetComponentTickEnabled, "SetComponentTickEnabled" }, // 3984650027
		{ &Z_Construct_UFunction_UActorComponent_SetComponentTickInterval, "SetComponentTickInterval" }, // 3820290980
		{ &Z_Construct_UFunction_UActorComponent_SetComponentTickIntervalAndCooldown, "SetComponentTickIntervalAndCooldown" }, // 1886595738
		{ &Z_Construct_UFunction_UActorComponent_SetIsReplicated, "SetIsReplicated" }, // 1437435525
		{ &Z_Construct_UFunction_UActorComponent_SetTickableWhenPaused, "SetTickableWhenPaused" }, // 183880367
		{ &Z_Construct_UFunction_UActorComponent_SetTickGroup, "SetTickGroup" }, // 76324861
		{ &Z_Construct_UFunction_UActorComponent_ToggleActive, "ToggleActive" }, // 2149839433
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * ActorComponent is the base class for components that define reusable behavior that can be added to different types of Actors.\n * ActorComponents that have a transform are known as SceneComponents and those that can be rendered are PrimitiveComponents.\n *\n * @see [ActorComponent](https://docs.unrealengine.com/latest/INT/Programming/UnrealArchitecture/Actors/Components/index.html#actorcomponents)\n * @see USceneComponent\n * @see UPrimitiveComponent\n */" },
		{ "IncludePath", "Components/ActorComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/ActorComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShortTooltip", "An ActorComponent is a reusable component that can be added to any actor." },
		{ "ToolTip", "ActorComponent is the base class for components that define reusable behavior that can be added to different types of Actors.\nActorComponents that have a transform are known as SceneComponents and those that can be rendered are PrimitiveComponents.\n\n@see [ActorComponent](https://docs.unrealengine.com/latest/INT/Programming/UnrealArchitecture/Actors/Components/index.html#actorcomponents)\n@see USceneComponent\n@see UPrimitiveComponent" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorComponent_Statics::NewProp_PrimaryComponentTick_MetaData[] = {
		{ "Category", "ComponentTick" },
		{ "Comment", "/** Main tick function for the Component */" },
		{ "ModuleRelativePath", "Classes/Components/ActorComponent.h" },
		{ "ToolTip", "Main tick function for the Component" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UActorComponent_Statics::NewProp_PrimaryComponentTick = { "PrimaryComponentTick", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UActorComponent, PrimaryComponentTick), Z_Construct_UScriptStruct_FActorComponentTickFunction, METADATA_PARAMS(Z_Construct_UClass_UActorComponent_Statics::NewProp_PrimaryComponentTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorComponent_Statics::NewProp_PrimaryComponentTick_MetaData)) }; // 1546393060
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UActorComponent_Statics::NewProp_ComponentTags_Inner = { "ComponentTags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorComponent_Statics::NewProp_ComponentTags_MetaData[] = {
		{ "Category", "Tags" },
		{ "Comment", "/** Array of tags that can be used for grouping and categorizing. Can also be accessed from scripting. */" },
		{ "ModuleRelativePath", "Classes/Components/ActorComponent.h" },
		{ "ToolTip", "Array of tags that can be used for grouping and categorizing. Can also be accessed from scripting." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UActorComponent_Statics::NewProp_ComponentTags = { "ComponentTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UActorComponent, ComponentTags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UActorComponent_Statics::NewProp_ComponentTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorComponent_Statics::NewProp_ComponentTags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorComponent_Statics::NewProp_AssetUserData_Inner_MetaData[] = {
		{ "Category", "AssetUserData" },
		{ "Comment", "/** Array of user data stored with the component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Components/ActorComponent.h" },
		{ "ToolTip", "Array of user data stored with the component" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UActorComponent_Statics::NewProp_AssetUserData_Inner = { "AssetUserData", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAssetUserData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UActorComponent_Statics::NewProp_AssetUserData_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorComponent_Statics::NewProp_AssetUserData_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorComponent_Statics::NewProp_AssetUserData_MetaData[] = {
		{ "Category", "AssetUserData" },
		{ "Comment", "/** Array of user data stored with the component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Components/ActorComponent.h" },
		{ "ToolTip", "Array of user data stored with the component" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UActorComponent_Statics::NewProp_AssetUserData = { "AssetUserData", nullptr, (EPropertyFlags)0x00240c8000000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UActorComponent, AssetUserData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UActorComponent_Statics::NewProp_AssetUserData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorComponent_Statics::NewProp_AssetUserData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorComponent_Statics::NewProp_UCSSerializationIndex_MetaData[] = {
		{ "Comment", "/** Populated when the component is created and tracks the often used order of creation on a per archetype/per actor basis */" },
		{ "ModuleRelativePath", "Classes/Components/ActorComponent.h" },
		{ "ToolTip", "Populated when the component is created and tracks the often used order of creation on a per archetype/per actor basis" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UActorComponent_Statics::NewProp_UCSSerializationIndex = { "UCSSerializationIndex", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UActorComponent, UCSSerializationIndex), METADATA_PARAMS(Z_Construct_UClass_UActorComponent_Statics::NewProp_UCSSerializationIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorComponent_Statics::NewProp_UCSSerializationIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorComponent_Statics::NewProp_bNetAddressable_MetaData[] = {
		{ "Comment", "/** Is this component safe to ID over the network by name?  */" },
		{ "ModuleRelativePath", "Classes/Components/ActorComponent.h" },
		{ "ToolTip", "Is this component safe to ID over the network by name?" },
	};
#endif
	void Z_Construct_UClass_UActorComponent_Statics::NewProp_bNetAddressable_SetBit(void* Obj)
	{
		((UActorComponent*)Obj)->bNetAddressable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UActorComponent_Statics::NewProp_bNetAddressable = { "bNetAddressable", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UActorComponent), &Z_Construct_UClass_UActorComponent_Statics::NewProp_bNetAddressable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UActorComponent_Statics::NewProp_bNetAddressable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorComponent_Statics::NewProp_bNetAddressable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorComponent_Statics::NewProp_bReplicateUsingRegisteredSubObjectList_MetaData[] = {
		{ "Category", "Replication" },
		{ "Comment", "/**\n\x09* When true the replication system will only replicate the registered subobjects list\n\x09* When false the replication system will instead call the virtual ReplicateSubObjects() function where the subobjects need to be manually replicated.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Components/ActorComponent.h" },
		{ "ToolTip", "When true the replication system will only replicate the registered subobjects list\nWhen false the replication system will instead call the virtual ReplicateSubObjects() function where the subobjects need to be manually replicated." },
	};
#endif
	void Z_Construct_UClass_UActorComponent_Statics::NewProp_bReplicateUsingRegisteredSubObjectList_SetBit(void* Obj)
	{
		((UActorComponent*)Obj)->bReplicateUsingRegisteredSubObjectList = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UActorComponent_Statics::NewProp_bReplicateUsingRegisteredSubObjectList = { "bReplicateUsingRegisteredSubObjectList", nullptr, (EPropertyFlags)0x00200c0000014015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UActorComponent), &Z_Construct_UClass_UActorComponent_Statics::NewProp_bReplicateUsingRegisteredSubObjectList_SetBit, METADATA_PARAMS(Z_Construct_UClass_UActorComponent_Statics::NewProp_bReplicateUsingRegisteredSubObjectList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorComponent_Statics::NewProp_bReplicateUsingRegisteredSubObjectList_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorComponent_Statics::NewProp_bReplicates_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ComponentReplication" },
		{ "Comment", "/** Is this component currently replicating? Should the network code consider it for replication? Owning Actor must be replicating first! */" },
		{ "DisplayName", "Component Replicates" },
		{ "ModuleRelativePath", "Classes/Components/ActorComponent.h" },
		{ "ToolTip", "Is this component currently replicating? Should the network code consider it for replication? Owning Actor must be replicating first!" },
	};
#endif
	void Z_Construct_UClass_UActorComponent_Statics::NewProp_bReplicates_SetBit(void* Obj)
	{
		((UActorComponent*)Obj)->bReplicates = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UActorComponent_Statics::NewProp_bReplicates = { "bReplicates", nullptr, (EPropertyFlags)0x0040000000010035, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UActorComponent), &Z_Construct_UClass_UActorComponent_Statics::NewProp_bReplicates_SetBit, METADATA_PARAMS(Z_Construct_UClass_UActorComponent_Statics::NewProp_bReplicates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorComponent_Statics::NewProp_bReplicates_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorComponent_Statics::NewProp_bCreatedByConstructionScript_MetaData[] = {
		{ "Comment", "/** @deprecated Replaced by CreationMethod */" },
		{ "ModuleRelativePath", "Classes/Components/ActorComponent.h" },
		{ "ToolTip", "@deprecated Replaced by CreationMethod" },
	};
#endif
	void Z_Construct_UClass_UActorComponent_Statics::NewProp_bCreatedByConstructionScript_SetBit(void* Obj)
	{
		((UActorComponent*)Obj)->bCreatedByConstructionScript_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UActorComponent_Statics::NewProp_bCreatedByConstructionScript = { "bCreatedByConstructionScript", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UActorComponent), &Z_Construct_UClass_UActorComponent_Statics::NewProp_bCreatedByConstructionScript_SetBit, METADATA_PARAMS(Z_Construct_UClass_UActorComponent_Statics::NewProp_bCreatedByConstructionScript_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorComponent_Statics::NewProp_bCreatedByConstructionScript_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorComponent_Statics::NewProp_bInstanceComponent_MetaData[] = {
		{ "Comment", "/** @deprecated Replaced by CreationMethod */" },
		{ "ModuleRelativePath", "Classes/Components/ActorComponent.h" },
		{ "ToolTip", "@deprecated Replaced by CreationMethod" },
	};
#endif
	void Z_Construct_UClass_UActorComponent_Statics::NewProp_bInstanceComponent_SetBit(void* Obj)
	{
		((UActorComponent*)Obj)->bInstanceComponent_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UActorComponent_Statics::NewProp_bInstanceComponent = { "bInstanceComponent", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UActorComponent), &Z_Construct_UClass_UActorComponent_Statics::NewProp_bInstanceComponent_SetBit, METADATA_PARAMS(Z_Construct_UClass_UActorComponent_Statics::NewProp_bInstanceComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorComponent_Statics::NewProp_bInstanceComponent_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorComponent_Statics::NewProp_bAutoActivate_MetaData[] = {
		{ "Category", "Activation" },
		{ "Comment", "/** Whether the component is activated at creation or must be explicitly activated. */" },
		{ "ModuleRelativePath", "Classes/Components/ActorComponent.h" },
		{ "ToolTip", "Whether the component is activated at creation or must be explicitly activated." },
	};
#endif
	void Z_Construct_UClass_UActorComponent_Statics::NewProp_bAutoActivate_SetBit(void* Obj)
	{
		((UActorComponent*)Obj)->bAutoActivate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UActorComponent_Statics::NewProp_bAutoActivate = { "bAutoActivate", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UActorComponent), &Z_Construct_UClass_UActorComponent_Statics::NewProp_bAutoActivate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UActorComponent_Statics::NewProp_bAutoActivate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorComponent_Statics::NewProp_bAutoActivate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorComponent_Statics::NewProp_bIsActive_MetaData[] = {
		{ "Comment", "/** Whether the component is currently active. */" },
		{ "ModuleRelativePath", "Classes/Components/ActorComponent.h" },
		{ "ToolTip", "Whether the component is currently active." },
	};
#endif
	void Z_Construct_UClass_UActorComponent_Statics::NewProp_bIsActive_SetBit(void* Obj)
	{
		((UActorComponent*)Obj)->bIsActive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UActorComponent_Statics::NewProp_bIsActive = { "bIsActive", "OnRep_IsActive", (EPropertyFlags)0x0040000100002020, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UActorComponent), &Z_Construct_UClass_UActorComponent_Statics::NewProp_bIsActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_UActorComponent_Statics::NewProp_bIsActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorComponent_Statics::NewProp_bIsActive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorComponent_Statics::NewProp_bEditableWhenInherited_MetaData[] = {
		{ "Category", "Variable" },
		{ "Comment", "/** True if this component can be modified when it was inherited from a parent actor class */" },
		{ "ModuleRelativePath", "Classes/Components/ActorComponent.h" },
		{ "ToolTip", "True if this component can be modified when it was inherited from a parent actor class" },
	};
#endif
	void Z_Construct_UClass_UActorComponent_Statics::NewProp_bEditableWhenInherited_SetBit(void* Obj)
	{
		((UActorComponent*)Obj)->bEditableWhenInherited = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UActorComponent_Statics::NewProp_bEditableWhenInherited = { "bEditableWhenInherited", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UActorComponent), &Z_Construct_UClass_UActorComponent_Statics::NewProp_bEditableWhenInherited_SetBit, METADATA_PARAMS(Z_Construct_UClass_UActorComponent_Statics::NewProp_bEditableWhenInherited_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorComponent_Statics::NewProp_bEditableWhenInherited_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorComponent_Statics::NewProp_bCanEverAffectNavigation_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** Whether this component can potentially influence navigation */" },
		{ "ModuleRelativePath", "Classes/Components/ActorComponent.h" },
		{ "ToolTip", "Whether this component can potentially influence navigation" },
	};
#endif
	void Z_Construct_UClass_UActorComponent_Statics::NewProp_bCanEverAffectNavigation_SetBit(void* Obj)
	{
		((UActorComponent*)Obj)->bCanEverAffectNavigation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UActorComponent_Statics::NewProp_bCanEverAffectNavigation = { "bCanEverAffectNavigation", nullptr, (EPropertyFlags)0x00200c0000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UActorComponent), &Z_Construct_UClass_UActorComponent_Statics::NewProp_bCanEverAffectNavigation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UActorComponent_Statics::NewProp_bCanEverAffectNavigation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorComponent_Statics::NewProp_bCanEverAffectNavigation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorComponent_Statics::NewProp_bIsEditorOnly_MetaData[] = {
		{ "Category", "Cooking" },
		{ "Comment", "/** If true, the component will be excluded from non-editor builds */" },
		{ "ModuleRelativePath", "Classes/Components/ActorComponent.h" },
		{ "ToolTip", "If true, the component will be excluded from non-editor builds" },
	};
#endif
	void Z_Construct_UClass_UActorComponent_Statics::NewProp_bIsEditorOnly_SetBit(void* Obj)
	{
		((UActorComponent*)Obj)->bIsEditorOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UActorComponent_Statics::NewProp_bIsEditorOnly = { "bIsEditorOnly", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UActorComponent), &Z_Construct_UClass_UActorComponent_Statics::NewProp_bIsEditorOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_UActorComponent_Statics::NewProp_bIsEditorOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorComponent_Statics::NewProp_bIsEditorOnly_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorComponent_Statics::NewProp_bIsVisualizationComponent_MetaData[] = {
		{ "Comment", "/** True if this component is only used for visualization, usually a sprite or text */" },
		{ "ModuleRelativePath", "Classes/Components/ActorComponent.h" },
		{ "ToolTip", "True if this component is only used for visualization, usually a sprite or text" },
	};
#endif
	void Z_Construct_UClass_UActorComponent_Statics::NewProp_bIsVisualizationComponent_SetBit(void* Obj)
	{
		((UActorComponent*)Obj)->bIsVisualizationComponent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UActorComponent_Statics::NewProp_bIsVisualizationComponent = { "bIsVisualizationComponent", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UActorComponent), &Z_Construct_UClass_UActorComponent_Statics::NewProp_bIsVisualizationComponent_SetBit, METADATA_PARAMS(Z_Construct_UClass_UActorComponent_Statics::NewProp_bIsVisualizationComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorComponent_Statics::NewProp_bIsVisualizationComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorComponent_Statics::NewProp_bNeedsUCSSerializationIndexEvaluted_MetaData[] = {
		{ "Comment", "/** Marks this component pending kill once PostLoad occurs. Used to clean up old native default subobjects that were removed from code */" },
		{ "ModuleRelativePath", "Classes/Components/ActorComponent.h" },
		{ "ToolTip", "Marks this component pending kill once PostLoad occurs. Used to clean up old native default subobjects that were removed from code" },
	};
#endif
	void Z_Construct_UClass_UActorComponent_Statics::NewProp_bNeedsUCSSerializationIndexEvaluted_SetBit(void* Obj)
	{
		((UActorComponent*)Obj)->bNeedsUCSSerializationIndexEvaluted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UActorComponent_Statics::NewProp_bNeedsUCSSerializationIndexEvaluted = { "bNeedsUCSSerializationIndexEvaluted", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UActorComponent), &Z_Construct_UClass_UActorComponent_Statics::NewProp_bNeedsUCSSerializationIndexEvaluted_SetBit, METADATA_PARAMS(Z_Construct_UClass_UActorComponent_Statics::NewProp_bNeedsUCSSerializationIndexEvaluted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorComponent_Statics::NewProp_bNeedsUCSSerializationIndexEvaluted_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UActorComponent_Statics::NewProp_CreationMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorComponent_Statics::NewProp_CreationMethod_MetaData[] = {
		{ "Comment", "/** Describes how a component instance will be created */" },
		{ "ModuleRelativePath", "Classes/Components/ActorComponent.h" },
		{ "ToolTip", "Describes how a component instance will be created" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UActorComponent_Statics::NewProp_CreationMethod = { "CreationMethod", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UActorComponent, CreationMethod), Z_Construct_UEnum_Engine_EComponentCreationMethod, METADATA_PARAMS(Z_Construct_UClass_UActorComponent_Statics::NewProp_CreationMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorComponent_Statics::NewProp_CreationMethod_MetaData)) }; // 609420841
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorComponent_Statics::NewProp_OnComponentActivated_MetaData[] = {
		{ "Category", "Components|Activation" },
		{ "Comment", "/** Called when the component has been activated, with parameter indicating if it was from a reset */" },
		{ "ModuleRelativePath", "Classes/Components/ActorComponent.h" },
		{ "ToolTip", "Called when the component has been activated, with parameter indicating if it was from a reset" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UActorComponent_Statics::NewProp_OnComponentActivated = { "OnComponentActivated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::SparseMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UActorComponent, OnComponentActivated), Z_Construct_USparseDelegateFunction_Engine_ActorComponentActivatedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UActorComponent_Statics::NewProp_OnComponentActivated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorComponent_Statics::NewProp_OnComponentActivated_MetaData)) }; // 2629159590
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorComponent_Statics::NewProp_OnComponentDeactivated_MetaData[] = {
		{ "Category", "Components|Activation" },
		{ "Comment", "/** Called when the component has been deactivated */" },
		{ "ModuleRelativePath", "Classes/Components/ActorComponent.h" },
		{ "ToolTip", "Called when the component has been deactivated" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UActorComponent_Statics::NewProp_OnComponentDeactivated = { "OnComponentDeactivated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::SparseMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UActorComponent, OnComponentDeactivated), Z_Construct_USparseDelegateFunction_Engine_ActorComponentDeactivateSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UActorComponent_Statics::NewProp_OnComponentDeactivated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorComponent_Statics::NewProp_OnComponentDeactivated_MetaData)) }; // 2637386945
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UActorComponent_Statics::NewProp_UCSModifiedProperties_Inner = { "UCSModifiedProperties", nullptr, (EPropertyFlags)0x0000000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSimpleMemberReference, METADATA_PARAMS(nullptr, 0) }; // 3400071855
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorComponent_Statics::NewProp_UCSModifiedProperties_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/ActorComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UActorComponent_Statics::NewProp_UCSModifiedProperties = { "UCSModifiedProperties", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UActorComponent, UCSModifiedProperties_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UActorComponent_Statics::NewProp_UCSModifiedProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorComponent_Statics::NewProp_UCSModifiedProperties_MetaData)) }; // 3400071855
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActorComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorComponent_Statics::NewProp_PrimaryComponentTick,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorComponent_Statics::NewProp_ComponentTags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorComponent_Statics::NewProp_ComponentTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorComponent_Statics::NewProp_AssetUserData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorComponent_Statics::NewProp_AssetUserData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorComponent_Statics::NewProp_UCSSerializationIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorComponent_Statics::NewProp_bNetAddressable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorComponent_Statics::NewProp_bReplicateUsingRegisteredSubObjectList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorComponent_Statics::NewProp_bReplicates,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorComponent_Statics::NewProp_bCreatedByConstructionScript,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorComponent_Statics::NewProp_bInstanceComponent,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorComponent_Statics::NewProp_bAutoActivate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorComponent_Statics::NewProp_bIsActive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorComponent_Statics::NewProp_bEditableWhenInherited,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorComponent_Statics::NewProp_bCanEverAffectNavigation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorComponent_Statics::NewProp_bIsEditorOnly,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorComponent_Statics::NewProp_bIsVisualizationComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorComponent_Statics::NewProp_bNeedsUCSSerializationIndexEvaluted,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorComponent_Statics::NewProp_CreationMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorComponent_Statics::NewProp_CreationMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorComponent_Statics::NewProp_OnComponentActivated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorComponent_Statics::NewProp_OnComponentDeactivated,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorComponent_Statics::NewProp_UCSModifiedProperties_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorComponent_Statics::NewProp_UCSModifiedProperties,
#endif // WITH_EDITORONLY_DATA
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UActorComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInterface_AssetUserData_NoRegister, (int32)VTABLE_OFFSET(UActorComponent, IInterface_AssetUserData), false },  // 1283872964
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorComponent_Statics::ClassParams = {
		&UActorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UActorComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UActorComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UActorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorComponent()
	{
		if (!Z_Registration_Info_UClass_UActorComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorComponent.OuterSingleton, Z_Construct_UClass_UActorComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActorComponent.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UActorComponent>()
	{
		return UActorComponent::StaticClass();
	}

	void UActorComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bReplicates(TEXT("bReplicates"));
		static const FName Name_bIsActive(TEXT("bIsActive"));

		const bool bIsValid = true
			&& Name_bReplicates == ClassReps[(int32)ENetFields_Private::bReplicates].Property->GetFName()
			&& Name_bIsActive == ClassReps[(int32)ENetFields_Private::bIsActive].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UActorComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorComponent);
	UActorComponent::~UActorComponent() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UActorComponent)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_ActorComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_ActorComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActorComponent, UActorComponent::StaticClass, TEXT("UActorComponent"), &Z_Registration_Info_UClass_UActorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorComponent), 1202102334U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_ActorComponent_h_3699625756(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_ActorComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_ActorComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
