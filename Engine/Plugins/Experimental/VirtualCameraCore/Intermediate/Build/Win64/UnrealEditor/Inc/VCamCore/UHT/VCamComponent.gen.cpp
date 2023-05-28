// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VCamComponent.h"
#include "EnhancedActionKeyMapping.h"
#include "GameplayTagContainer.h"
#include "Input/VCamInputDeviceConfig.h"
#include "InputActionValue.h"
#include "InputCoreTypes.h"
#include "LiveLinkTypes.h"
#include "Modifier/ModifierStackEntry.h"
#include "Roles/LiveLinkCameraTypes.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#include "Util/VCamViewportLocker.h"
#include "VCamInputSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVCamComponent() {}
// Cross Module References
	CINEMATICCAMERA_API UClass* Z_Construct_UClass_UCineCameraComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UInputComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputModifier_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputTrigger_NoRegister();
	ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FEnhancedActionKeyMapping();
	ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkCameraBlueprintData();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubjectName();
	UPackage* Z_Construct_UPackage__Script_VCamCore();
	VCAMCORE_API UClass* Z_Construct_UClass_UInputVCamSubsystem_NoRegister();
	VCAMCORE_API UClass* Z_Construct_UClass_UVCamComponent();
	VCAMCORE_API UClass* Z_Construct_UClass_UVCamComponent_NoRegister();
	VCAMCORE_API UClass* Z_Construct_UClass_UVCamModifier_NoRegister();
	VCAMCORE_API UClass* Z_Construct_UClass_UVCamModifierContext_NoRegister();
	VCAMCORE_API UClass* Z_Construct_UClass_UVCamOutputProviderBase_NoRegister();
	VCAMCORE_API UClass* Z_Construct_UClass_UVCamSubsystem_NoRegister();
	VCAMCORE_API UEnum* Z_Construct_UEnum_VCamCore_EVCamTargetViewportID();
	VCAMCORE_API UFunction* Z_Construct_UDelegateFunction_VCamCore_OnComponentReplaced__DelegateSignature();
	VCAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FModifierStackEntry();
	VCAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FVCamInputDeviceConfig();
	VCAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FVCamViewportLocker();
	VCAMINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FVCamInputProfile();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_VCamCore_OnComponentReplaced__DelegateSignature_Statics
	{
		struct _Script_VCamCore_eventOnComponentReplaced_Parms
		{
			UVCamComponent* NewComponent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VCamCore_OnComponentReplaced__DelegateSignature_Statics::NewProp_NewComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_VCamCore_OnComponentReplaced__DelegateSignature_Statics::NewProp_NewComponent = { "NewComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_VCamCore_eventOnComponentReplaced_Parms, NewComponent), Z_Construct_UClass_UVCamComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_VCamCore_OnComponentReplaced__DelegateSignature_Statics::NewProp_NewComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VCamCore_OnComponentReplaced__DelegateSignature_Statics::NewProp_NewComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_VCamCore_OnComponentReplaced__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VCamCore_OnComponentReplaced__DelegateSignature_Statics::NewProp_NewComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VCamCore_OnComponentReplaced__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VCamComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_VCamCore_OnComponentReplaced__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VCamCore, nullptr, "OnComponentReplaced__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_VCamCore_OnComponentReplaced__DelegateSignature_Statics::_Script_VCamCore_eventOnComponentReplaced_Parms), Z_Construct_UDelegateFunction_VCamCore_OnComponentReplaced__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VCamCore_OnComponentReplaced__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_VCamCore_OnComponentReplaced__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VCamCore_OnComponentReplaced__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_VCamCore_OnComponentReplaced__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_VCamCore_OnComponentReplaced__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnComponentReplaced_DelegateWrapper(const FMulticastScriptDelegate& OnComponentReplaced, UVCamComponent* NewComponent)
{
	struct _Script_VCamCore_eventOnComponentReplaced_Parms
	{
		UVCamComponent* NewComponent;
	};
	_Script_VCamCore_eventOnComponentReplaced_Parms Parms;
	Parms.NewComponent=NewComponent;
	OnComponentReplaced.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UVCamComponent::execGetInputVCamSubsystem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UInputVCamSubsystem**)Z_Param__Result=P_THIS->GetInputVCamSubsystem();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVCamComponent::execGetSubsystemArray)
	{
		P_GET_OBJECT_REF_NO_PTR(TSubclassOf<UVCamSubsystem> ,Z_Param_Out_Class);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UVCamSubsystem*>*)Z_Param__Result=P_THIS->GetSubsystemArray(Z_Param_Out_Class);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVCamComponent::execSetInputDeviceSettings)
	{
		P_GET_STRUCT_REF(FVCamInputDeviceConfig,Z_Param_Out_NewInputProfile);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInputDeviceSettings(Z_Param_Out_NewInputProfile);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVCamComponent::execGetInputDeviceSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVCamInputDeviceConfig*)Z_Param__Result=P_THIS->GetInputDeviceSettings();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVCamComponent::execSetInputProfile)
	{
		P_GET_STRUCT_REF(FVCamInputProfile,Z_Param_Out_NewInputProfile);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInputProfile(Z_Param_Out_NewInputProfile);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVCamComponent::execGetInputProfile)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVCamInputProfile*)Z_Param__Result=P_THIS->GetInputProfile();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVCamComponent::execSetDisableOutputOnMultiUserReceiver)
	{
		P_GET_UBOOL(Z_Param_bValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDisableOutputOnMultiUserReceiver(Z_Param_bValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVCamComponent::execGetDisableOutputOnMultiUserReceiver)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetDisableOutputOnMultiUserReceiver();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVCamComponent::execSetDisableComponentWhenSpawnedBySequencer)
	{
		P_GET_UBOOL(Z_Param_bValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDisableComponentWhenSpawnedBySequencer(Z_Param_bValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVCamComponent::execGetDisableComponentWhenSpawnedBySequencer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetDisableComponentWhenSpawnedBySequencer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVCamComponent::execSetLiveLinkSubobject)
	{
		P_GET_STRUCT(FLiveLinkSubjectName,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLiveLinkSubobject(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVCamComponent::execGetLiveLinkSubobject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLiveLinkSubjectName*)Z_Param__Result=P_THIS->GetLiveLinkSubobject();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVCamComponent::execSetRole)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRole(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVCamComponent::execGetRole)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTag*)Z_Param__Result=P_THIS->GetRole();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVCamComponent::execInjectInputVectorForAction)
	{
		P_GET_OBJECT(UInputAction,Z_Param_Action);
		P_GET_STRUCT(FVector,Z_Param_Value);
		P_GET_TARRAY_REF(UInputModifier*,Z_Param_Out_Modifiers);
		P_GET_TARRAY_REF(UInputTrigger*,Z_Param_Out_Triggers);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InjectInputVectorForAction(Z_Param_Action,Z_Param_Value,Z_Param_Out_Modifiers,Z_Param_Out_Triggers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVCamComponent::execInjectInputForAction)
	{
		P_GET_OBJECT(UInputAction,Z_Param_Action);
		P_GET_STRUCT(FInputActionValue,Z_Param_RawValue);
		P_GET_TARRAY_REF(UInputModifier*,Z_Param_Out_Modifiers);
		P_GET_TARRAY_REF(UInputTrigger*,Z_Param_Out_Triggers);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InjectInputForAction(Z_Param_Action,Z_Param_RawValue,Z_Param_Out_Modifiers,Z_Param_Out_Triggers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVCamComponent::execGetPlayerMappableKeys)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FEnhancedActionKeyMapping>*)Z_Param__Result=P_THIS->GetPlayerMappableKeys();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVCamComponent::execUnregisterObjectForInput)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnregisterObjectForInput(Z_Param_Object);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVCamComponent::execRegisterObjectForInput)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegisterObjectForInput(Z_Param_Object);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVCamComponent::execGetLiveLinkDataForCurrentFrame)
	{
		P_GET_STRUCT_REF(FLiveLinkCameraBlueprintData,Z_Param_Out_LiveLinkData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetLiveLinkDataForCurrentFrame(Z_Param_Out_LiveLinkData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVCamComponent::execGetOutputProvidersByClass)
	{
		P_GET_OBJECT(UClass,Z_Param_ProviderClass);
		P_GET_TARRAY_REF(UVCamOutputProviderBase*,Z_Param_Out_FoundProviders);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetOutputProvidersByClass(Z_Param_ProviderClass,Z_Param_Out_FoundProviders);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVCamComponent::execGetOutputProviderByIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ProviderIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UVCamOutputProviderBase**)Z_Param__Result=P_THIS->GetOutputProviderByIndex(Z_Param_ProviderIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVCamComponent::execGetAllOutputProviders)
	{
		P_GET_TARRAY_REF(UVCamOutputProviderBase*,Z_Param_Out_Providers);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllOutputProviders(Z_Param_Out_Providers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVCamComponent::execGetNumberOfOutputProviders)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumberOfOutputProviders();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVCamComponent::execRemoveOutputProviderByIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ProviderIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveOutputProviderByIndex(Z_Param_ProviderIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVCamComponent::execRemoveOutputProvider)
	{
		P_GET_OBJECT(UVCamOutputProviderBase,Z_Param_Provider);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveOutputProvider(Z_Param_Provider);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVCamComponent::execRemoveAllOutputProviders)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveAllOutputProviders();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVCamComponent::execSetOutputProviderIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_OriginalIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_NewIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetOutputProviderIndex(Z_Param_OriginalIndex,Z_Param_NewIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVCamComponent::execInsertOutputProvider)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_OBJECT(UClass,Z_Param_ProviderClass);
		P_GET_OBJECT_REF(UVCamOutputProviderBase,Z_Param_Out_CreatedProvider);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->InsertOutputProvider(Z_Param_Index,Z_Param_ProviderClass,Z_Param_Out_CreatedProvider);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVCamComponent::execAddOutputProvider)
	{
		P_GET_OBJECT(UClass,Z_Param_ProviderClass);
		P_GET_OBJECT_REF(UVCamOutputProviderBase,Z_Param_Out_CreatedProvider);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddOutputProvider(Z_Param_ProviderClass,Z_Param_Out_CreatedProvider);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVCamComponent::execGetModifierContext)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UVCamModifierContext**)Z_Param__Result=P_THIS->GetModifierContext();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVCamComponent::execSetModifierContextClass)
	{
		P_GET_OBJECT(UClass,Z_Param_ContextClass);
		P_GET_OBJECT_REF(UVCamModifierContext,Z_Param_Out_CreatedContext);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetModifierContextClass(Z_Param_ContextClass,Z_Param_Out_CreatedContext);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVCamComponent::execGetModifiersByInterface)
	{
		P_GET_OBJECT(UClass,Z_Param_InterfaceClass);
		P_GET_TARRAY_REF(UVCamModifier*,Z_Param_Out_FoundModifiers);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetModifiersByInterface(Z_Param_InterfaceClass,Z_Param_Out_FoundModifiers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVCamComponent::execGetModifiersByClass)
	{
		P_GET_OBJECT(UClass,Z_Param_ModifierClass);
		P_GET_TARRAY_REF(UVCamModifier*,Z_Param_Out_FoundModifiers);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetModifiersByClass(Z_Param_ModifierClass,Z_Param_Out_FoundModifiers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVCamComponent::execGetModifierByName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UVCamModifier**)Z_Param__Result=P_THIS->GetModifierByName(Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVCamComponent::execGetModifierByIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UVCamModifier**)Z_Param__Result=P_THIS->GetModifierByIndex(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVCamComponent::execGetAllModifierNames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=P_THIS->GetAllModifierNames();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVCamComponent::execGetAllModifiers)
	{
		P_GET_TARRAY_REF(UVCamModifier*,Z_Param_Out_Modifiers);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllModifiers(Z_Param_Out_Modifiers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVCamComponent::execGetNumberOfModifiers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumberOfModifiers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVCamComponent::execRemoveModifierByName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveModifierByName(Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVCamComponent::execRemoveModifierByIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ModifierIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveModifierByIndex(Z_Param_ModifierIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVCamComponent::execRemoveModifier)
	{
		P_GET_OBJECT(UVCamModifier,Z_Param_Modifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveModifier(Z_Param_Modifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVCamComponent::execRemoveAllModifiers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveAllModifiers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVCamComponent::execSetModifierIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_OriginalIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_NewIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetModifierIndex(Z_Param_OriginalIndex,Z_Param_NewIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVCamComponent::execInsertModifier)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_OBJECT(UClass,Z_Param_ModifierClass);
		P_GET_OBJECT_REF(UVCamModifier,Z_Param_Out_CreatedModifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->InsertModifier(Z_Param_Name,Z_Param_Index,Z_Param_ModifierClass,Z_Param_Out_CreatedModifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVCamComponent::execAddModifier)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_OBJECT(UClass,Z_Param_ModifierClass);
		P_GET_OBJECT_REF(UVCamModifier,Z_Param_Out_CreatedModifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddModifier(Z_Param_Name,Z_Param_ModifierClass,Z_Param_Out_CreatedModifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVCamComponent::execGetTargetCamera)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCineCameraComponent**)Z_Param__Result=P_THIS->GetTargetCamera();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVCamComponent::execIsEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVCamComponent::execSetEnabled)
	{
		P_GET_UBOOL(Z_Param_bNewEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnabled(Z_Param_bNewEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVCamComponent::execGetPlayerMappedKey)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_MappingName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FKey*)Z_Param__Result=P_THIS->GetPlayerMappedKey(Z_Param_MappingName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVCamComponent::execGetAllPlayerMappableActionKeyMappings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FEnhancedActionKeyMapping>*)Z_Param__Result=P_THIS->GetAllPlayerMappableActionKeyMappings();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVCamComponent::execSaveCurrentInputProfileToSettings)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ProfileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SaveCurrentInputProfileToSettings(Z_Param_ProfileName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVCamComponent::execAddInputProfileWithCurrentlyActiveMappings)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ProfileName);
		P_GET_UBOOL(Z_Param_bUpdateIfProfileAlreadyExists);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddInputProfileWithCurrentlyActiveMappings(Z_Param_ProfileName,Z_Param_bUpdateIfProfileAlreadyExists);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVCamComponent::execSetInputProfileFromName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ProfileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetInputProfileFromName(Z_Param_ProfileName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVCamComponent::execHandleObjectReplaced)
	{
		P_GET_TMAP_REF(UObject*,UObject*,Z_Param_Out_ReplacementMap);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleObjectReplaced(Z_Param_Out_ReplacementMap);
		P_NATIVE_END;
	}
	void UVCamComponent::StaticRegisterNativesUVCamComponent()
	{
		UClass* Class = UVCamComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddInputProfileWithCurrentlyActiveMappings", &UVCamComponent::execAddInputProfileWithCurrentlyActiveMappings },
			{ "AddModifier", &UVCamComponent::execAddModifier },
			{ "AddOutputProvider", &UVCamComponent::execAddOutputProvider },
			{ "GetAllModifierNames", &UVCamComponent::execGetAllModifierNames },
			{ "GetAllModifiers", &UVCamComponent::execGetAllModifiers },
			{ "GetAllOutputProviders", &UVCamComponent::execGetAllOutputProviders },
			{ "GetAllPlayerMappableActionKeyMappings", &UVCamComponent::execGetAllPlayerMappableActionKeyMappings },
			{ "GetDisableComponentWhenSpawnedBySequencer", &UVCamComponent::execGetDisableComponentWhenSpawnedBySequencer },
			{ "GetDisableOutputOnMultiUserReceiver", &UVCamComponent::execGetDisableOutputOnMultiUserReceiver },
			{ "GetInputDeviceSettings", &UVCamComponent::execGetInputDeviceSettings },
			{ "GetInputProfile", &UVCamComponent::execGetInputProfile },
			{ "GetInputVCamSubsystem", &UVCamComponent::execGetInputVCamSubsystem },
			{ "GetLiveLinkDataForCurrentFrame", &UVCamComponent::execGetLiveLinkDataForCurrentFrame },
			{ "GetLiveLinkSubobject", &UVCamComponent::execGetLiveLinkSubobject },
			{ "GetModifierByIndex", &UVCamComponent::execGetModifierByIndex },
			{ "GetModifierByName", &UVCamComponent::execGetModifierByName },
			{ "GetModifierContext", &UVCamComponent::execGetModifierContext },
			{ "GetModifiersByClass", &UVCamComponent::execGetModifiersByClass },
			{ "GetModifiersByInterface", &UVCamComponent::execGetModifiersByInterface },
			{ "GetNumberOfModifiers", &UVCamComponent::execGetNumberOfModifiers },
			{ "GetNumberOfOutputProviders", &UVCamComponent::execGetNumberOfOutputProviders },
			{ "GetOutputProviderByIndex", &UVCamComponent::execGetOutputProviderByIndex },
			{ "GetOutputProvidersByClass", &UVCamComponent::execGetOutputProvidersByClass },
			{ "GetPlayerMappableKeys", &UVCamComponent::execGetPlayerMappableKeys },
			{ "GetPlayerMappedKey", &UVCamComponent::execGetPlayerMappedKey },
			{ "GetRole", &UVCamComponent::execGetRole },
			{ "GetSubsystemArray", &UVCamComponent::execGetSubsystemArray },
			{ "GetTargetCamera", &UVCamComponent::execGetTargetCamera },
			{ "HandleObjectReplaced", &UVCamComponent::execHandleObjectReplaced },
			{ "InjectInputForAction", &UVCamComponent::execInjectInputForAction },
			{ "InjectInputVectorForAction", &UVCamComponent::execInjectInputVectorForAction },
			{ "InsertModifier", &UVCamComponent::execInsertModifier },
			{ "InsertOutputProvider", &UVCamComponent::execInsertOutputProvider },
			{ "IsEnabled", &UVCamComponent::execIsEnabled },
			{ "RegisterObjectForInput", &UVCamComponent::execRegisterObjectForInput },
			{ "RemoveAllModifiers", &UVCamComponent::execRemoveAllModifiers },
			{ "RemoveAllOutputProviders", &UVCamComponent::execRemoveAllOutputProviders },
			{ "RemoveModifier", &UVCamComponent::execRemoveModifier },
			{ "RemoveModifierByIndex", &UVCamComponent::execRemoveModifierByIndex },
			{ "RemoveModifierByName", &UVCamComponent::execRemoveModifierByName },
			{ "RemoveOutputProvider", &UVCamComponent::execRemoveOutputProvider },
			{ "RemoveOutputProviderByIndex", &UVCamComponent::execRemoveOutputProviderByIndex },
			{ "SaveCurrentInputProfileToSettings", &UVCamComponent::execSaveCurrentInputProfileToSettings },
			{ "SetDisableComponentWhenSpawnedBySequencer", &UVCamComponent::execSetDisableComponentWhenSpawnedBySequencer },
			{ "SetDisableOutputOnMultiUserReceiver", &UVCamComponent::execSetDisableOutputOnMultiUserReceiver },
			{ "SetEnabled", &UVCamComponent::execSetEnabled },
			{ "SetInputDeviceSettings", &UVCamComponent::execSetInputDeviceSettings },
			{ "SetInputProfile", &UVCamComponent::execSetInputProfile },
			{ "SetInputProfileFromName", &UVCamComponent::execSetInputProfileFromName },
			{ "SetLiveLinkSubobject", &UVCamComponent::execSetLiveLinkSubobject },
			{ "SetModifierContextClass", &UVCamComponent::execSetModifierContextClass },
			{ "SetModifierIndex", &UVCamComponent::execSetModifierIndex },
			{ "SetOutputProviderIndex", &UVCamComponent::execSetOutputProviderIndex },
			{ "SetRole", &UVCamComponent::execSetRole },
			{ "UnregisterObjectForInput", &UVCamComponent::execUnregisterObjectForInput },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVCamComponent_AddInputProfileWithCurrentlyActiveMappings_Statics
	{
		struct VCamComponent_eventAddInputProfileWithCurrentlyActiveMappings_Parms
		{
			FName ProfileName;
			bool bUpdateIfProfileAlreadyExists;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProfileName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ProfileName;
		static void NewProp_bUpdateIfProfileAlreadyExists_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateIfProfileAlreadyExists;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamComponent_AddInputProfileWithCurrentlyActiveMappings_Statics::NewProp_ProfileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVCamComponent_AddInputProfileWithCurrentlyActiveMappings_Statics::NewProp_ProfileName = { "ProfileName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamComponent_eventAddInputProfileWithCurrentlyActiveMappings_Parms, ProfileName), METADATA_PARAMS(Z_Construct_UFunction_UVCamComponent_AddInputProfileWithCurrentlyActiveMappings_Statics::NewProp_ProfileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_AddInputProfileWithCurrentlyActiveMappings_Statics::NewProp_ProfileName_MetaData)) };
	void Z_Construct_UFunction_UVCamComponent_AddInputProfileWithCurrentlyActiveMappings_Statics::NewProp_bUpdateIfProfileAlreadyExists_SetBit(void* Obj)
	{
		((VCamComponent_eventAddInputProfileWithCurrentlyActiveMappings_Parms*)Obj)->bUpdateIfProfileAlreadyExists = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVCamComponent_AddInputProfileWithCurrentlyActiveMappings_Statics::NewProp_bUpdateIfProfileAlreadyExists = { "bUpdateIfProfileAlreadyExists", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VCamComponent_eventAddInputProfileWithCurrentlyActiveMappings_Parms), &Z_Construct_UFunction_UVCamComponent_AddInputProfileWithCurrentlyActiveMappings_Statics::NewProp_bUpdateIfProfileAlreadyExists_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVCamComponent_AddInputProfileWithCurrentlyActiveMappings_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VCamComponent_eventAddInputProfileWithCurrentlyActiveMappings_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVCamComponent_AddInputProfileWithCurrentlyActiveMappings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VCamComponent_eventAddInputProfileWithCurrentlyActiveMappings_Parms), &Z_Construct_UFunction_UVCamComponent_AddInputProfileWithCurrentlyActiveMappings_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVCamComponent_AddInputProfileWithCurrentlyActiveMappings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_AddInputProfileWithCurrentlyActiveMappings_Statics::NewProp_ProfileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_AddInputProfileWithCurrentlyActiveMappings_Statics::NewProp_bUpdateIfProfileAlreadyExists,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_AddInputProfileWithCurrentlyActiveMappings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamComponent_AddInputProfileWithCurrentlyActiveMappings_Statics::Function_MetaDataParams[] = {
		{ "Category", "VCam Input" },
		{ "Comment", "/**\n\x09 * Tries to add a new Input Profile to the VCam Input Settings and populates it with any currently active player mappable keys\n\x09 * Note: The set of currently active player mappable keys may be larger than the set of mappings in this component's Input Profile\n\x09 *\n\x09 * Optionally this function can update an existing profile, this will only add any mappable keys that don't currently exist in the profile but will not remove any existing mappings\n\x09 * Returns whether the profile was successfully added or updated\n\x09 */" },
		{ "CPP_Default_bUpdateIfProfileAlreadyExists", "true" },
		{ "ModuleRelativePath", "Public/VCamComponent.h" },
		{ "ReturnDisplayName", "Success" },
		{ "ToolTip", "Tries to add a new Input Profile to the VCam Input Settings and populates it with any currently active player mappable keys\nNote: The set of currently active player mappable keys may be larger than the set of mappings in this component's Input Profile\n\nOptionally this function can update an existing profile, this will only add any mappable keys that don't currently exist in the profile but will not remove any existing mappings\nReturns whether the profile was successfully added or updated" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVCamComponent_AddInputProfileWithCurrentlyActiveMappings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamComponent, nullptr, "AddInputProfileWithCurrentlyActiveMappings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVCamComponent_AddInputProfileWithCurrentlyActiveMappings_Statics::VCamComponent_eventAddInputProfileWithCurrentlyActiveMappings_Parms), Z_Construct_UFunction_UVCamComponent_AddInputProfileWithCurrentlyActiveMappings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_AddInputProfileWithCurrentlyActiveMappings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVCamComponent_AddInputProfileWithCurrentlyActiveMappings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_AddInputProfileWithCurrentlyActiveMappings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVCamComponent_AddInputProfileWithCurrentlyActiveMappings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVCamComponent_AddInputProfileWithCurrentlyActiveMappings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVCamComponent_AddModifier_Statics
	{
		struct VCamComponent_eventAddModifier_Parms
		{
			FName Name;
			TSubclassOf<UVCamModifier>  ModifierClass;
			UVCamModifier* CreatedModifier;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModifierClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ModifierClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CreatedModifier;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamComponent_AddModifier_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVCamComponent_AddModifier_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamComponent_eventAddModifier_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UVCamComponent_AddModifier_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_AddModifier_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamComponent_AddModifier_Statics::NewProp_ModifierClass_MetaData[] = {
		{ "AllowAbstract", "false" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UVCamComponent_AddModifier_Statics::NewProp_ModifierClass = { "ModifierClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamComponent_eventAddModifier_Parms, ModifierClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UVCamModifier_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVCamComponent_AddModifier_Statics::NewProp_ModifierClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_AddModifier_Statics::NewProp_ModifierClass_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVCamComponent_AddModifier_Statics::NewProp_CreatedModifier = { "CreatedModifier", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamComponent_eventAddModifier_Parms, CreatedModifier), Z_Construct_UClass_UVCamModifier_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVCamComponent_AddModifier_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VCamComponent_eventAddModifier_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVCamComponent_AddModifier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VCamComponent_eventAddModifier_Parms), &Z_Construct_UFunction_UVCamComponent_AddModifier_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVCamComponent_AddModifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_AddModifier_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_AddModifier_Statics::NewProp_ModifierClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_AddModifier_Statics::NewProp_CreatedModifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_AddModifier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamComponent_AddModifier_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera" },
		{ "Comment", "/**\n\x09 * Add a modifier to the stack with a given name.\n\x09 * If that name is already in use then the modifier will not be added.\n\x09 * Returns the created modifier if the Add succeeded\n\x09 */" },
		{ "DeterminesOutputType", "ModifierClass" },
		{ "DynamicOutputParam", "CreatedModifier" },
		{ "ModuleRelativePath", "Public/VCamComponent.h" },
		{ "ReturnDisplayName", "Success" },
		{ "ToolTip", "Add a modifier to the stack with a given name.\nIf that name is already in use then the modifier will not be added.\nReturns the created modifier if the Add succeeded" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVCamComponent_AddModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamComponent, nullptr, "AddModifier", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVCamComponent_AddModifier_Statics::VCamComponent_eventAddModifier_Parms), Z_Construct_UFunction_UVCamComponent_AddModifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_AddModifier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVCamComponent_AddModifier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_AddModifier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVCamComponent_AddModifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVCamComponent_AddModifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVCamComponent_AddOutputProvider_Statics
	{
		struct VCamComponent_eventAddOutputProvider_Parms
		{
			TSubclassOf<UVCamOutputProviderBase>  ProviderClass;
			UVCamOutputProviderBase* CreatedProvider;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProviderClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ProviderClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CreatedProvider;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamComponent_AddOutputProvider_Statics::NewProp_ProviderClass_MetaData[] = {
		{ "AllowAbstract", "false" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UVCamComponent_AddOutputProvider_Statics::NewProp_ProviderClass = { "ProviderClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamComponent_eventAddOutputProvider_Parms, ProviderClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UVCamOutputProviderBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVCamComponent_AddOutputProvider_Statics::NewProp_ProviderClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_AddOutputProvider_Statics::NewProp_ProviderClass_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVCamComponent_AddOutputProvider_Statics::NewProp_CreatedProvider = { "CreatedProvider", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamComponent_eventAddOutputProvider_Parms, CreatedProvider), Z_Construct_UClass_UVCamOutputProviderBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVCamComponent_AddOutputProvider_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VCamComponent_eventAddOutputProvider_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVCamComponent_AddOutputProvider_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VCamComponent_eventAddOutputProvider_Parms), &Z_Construct_UFunction_UVCamComponent_AddOutputProvider_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVCamComponent_AddOutputProvider_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_AddOutputProvider_Statics::NewProp_ProviderClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_AddOutputProvider_Statics::NewProp_CreatedProvider,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_AddOutputProvider_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamComponent_AddOutputProvider_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera" },
		{ "Comment", "/******************** Output Provider access ********************/" },
		{ "DeterminesOutputType", "ProviderClass" },
		{ "DynamicOutputParam", "CreatedProvider" },
		{ "ModuleRelativePath", "Public/VCamComponent.h" },
		{ "ReturnDisplayName", "Success" },
		{ "ToolTip", "***************** Output Provider access *******************" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVCamComponent_AddOutputProvider_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamComponent, nullptr, "AddOutputProvider", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVCamComponent_AddOutputProvider_Statics::VCamComponent_eventAddOutputProvider_Parms), Z_Construct_UFunction_UVCamComponent_AddOutputProvider_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_AddOutputProvider_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVCamComponent_AddOutputProvider_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_AddOutputProvider_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVCamComponent_AddOutputProvider()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVCamComponent_AddOutputProvider_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVCamComponent_GetAllModifierNames_Statics
	{
		struct VCamComponent_eventGetAllModifierNames_Parms
		{
			TArray<FName> ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVCamComponent_GetAllModifierNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVCamComponent_GetAllModifierNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamComponent_eventGetAllModifierNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVCamComponent_GetAllModifierNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_GetAllModifierNames_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_GetAllModifierNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamComponent_GetAllModifierNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera" },
		{ "Comment", "/** Returns all the modifier names used to identifying connection points. */" },
		{ "ModuleRelativePath", "Public/VCamComponent.h" },
		{ "ToolTip", "Returns all the modifier names used to identifying connection points." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVCamComponent_GetAllModifierNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamComponent, nullptr, "GetAllModifierNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVCamComponent_GetAllModifierNames_Statics::VCamComponent_eventGetAllModifierNames_Parms), Z_Construct_UFunction_UVCamComponent_GetAllModifierNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_GetAllModifierNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVCamComponent_GetAllModifierNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_GetAllModifierNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVCamComponent_GetAllModifierNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVCamComponent_GetAllModifierNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVCamComponent_GetAllModifiers_Statics
	{
		struct VCamComponent_eventGetAllModifiers_Parms
		{
			TArray<UVCamModifier*> Modifiers;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Modifiers_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Modifiers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVCamComponent_GetAllModifiers_Statics::NewProp_Modifiers_Inner = { "Modifiers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UVCamModifier_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVCamComponent_GetAllModifiers_Statics::NewProp_Modifiers = { "Modifiers", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamComponent_eventGetAllModifiers_Parms, Modifiers), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVCamComponent_GetAllModifiers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_GetAllModifiers_Statics::NewProp_Modifiers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_GetAllModifiers_Statics::NewProp_Modifiers,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamComponent_GetAllModifiers_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera" },
		{ "Comment", "/**\n\x09 * Returns all the Modifiers in the Component's Stack\n\x09 * Note: It's possible not all Modifiers will be valid (such as if the user has not set a class for the modifier in the details panel)\n\x09 */" },
		{ "ModuleRelativePath", "Public/VCamComponent.h" },
		{ "ToolTip", "Returns all the Modifiers in the Component's Stack\nNote: It's possible not all Modifiers will be valid (such as if the user has not set a class for the modifier in the details panel)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVCamComponent_GetAllModifiers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamComponent, nullptr, "GetAllModifiers", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVCamComponent_GetAllModifiers_Statics::VCamComponent_eventGetAllModifiers_Parms), Z_Construct_UFunction_UVCamComponent_GetAllModifiers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_GetAllModifiers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVCamComponent_GetAllModifiers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_GetAllModifiers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVCamComponent_GetAllModifiers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVCamComponent_GetAllModifiers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVCamComponent_GetAllOutputProviders_Statics
	{
		struct VCamComponent_eventGetAllOutputProviders_Parms
		{
			TArray<UVCamOutputProviderBase*> Providers;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Providers_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Providers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVCamComponent_GetAllOutputProviders_Statics::NewProp_Providers_Inner = { "Providers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UVCamOutputProviderBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVCamComponent_GetAllOutputProviders_Statics::NewProp_Providers = { "Providers", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamComponent_eventGetAllOutputProviders_Parms, Providers), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVCamComponent_GetAllOutputProviders_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_GetAllOutputProviders_Statics::NewProp_Providers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_GetAllOutputProviders_Statics::NewProp_Providers,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamComponent_GetAllOutputProviders_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera" },
		{ "ModuleRelativePath", "Public/VCamComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVCamComponent_GetAllOutputProviders_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamComponent, nullptr, "GetAllOutputProviders", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVCamComponent_GetAllOutputProviders_Statics::VCamComponent_eventGetAllOutputProviders_Parms), Z_Construct_UFunction_UVCamComponent_GetAllOutputProviders_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_GetAllOutputProviders_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVCamComponent_GetAllOutputProviders_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_GetAllOutputProviders_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVCamComponent_GetAllOutputProviders()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVCamComponent_GetAllOutputProviders_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVCamComponent_GetAllPlayerMappableActionKeyMappings_Statics
	{
		struct VCamComponent_eventGetAllPlayerMappableActionKeyMappings_Parms
		{
			TArray<FEnhancedActionKeyMapping> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVCamComponent_GetAllPlayerMappableActionKeyMappings_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FEnhancedActionKeyMapping, METADATA_PARAMS(nullptr, 0) }; // 2762654059
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVCamComponent_GetAllPlayerMappableActionKeyMappings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamComponent_eventGetAllPlayerMappableActionKeyMappings_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2762654059
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVCamComponent_GetAllPlayerMappableActionKeyMappings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_GetAllPlayerMappableActionKeyMappings_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_GetAllPlayerMappableActionKeyMappings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamComponent_GetAllPlayerMappableActionKeyMappings_Statics::Function_MetaDataParams[] = {
		{ "Category", "VCam Input" },
		{ "Comment", "// Searches the currently active input system for all registered key mappings that are marked as Player Mappable.\n" },
		{ "ModuleRelativePath", "Public/VCamComponent.h" },
		{ "ReturnDisplayName", "PlayerMappableActionKeyMappings" },
		{ "ToolTip", "Searches the currently active input system for all registered key mappings that are marked as Player Mappable." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVCamComponent_GetAllPlayerMappableActionKeyMappings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamComponent, nullptr, "GetAllPlayerMappableActionKeyMappings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVCamComponent_GetAllPlayerMappableActionKeyMappings_Statics::VCamComponent_eventGetAllPlayerMappableActionKeyMappings_Parms), Z_Construct_UFunction_UVCamComponent_GetAllPlayerMappableActionKeyMappings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_GetAllPlayerMappableActionKeyMappings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVCamComponent_GetAllPlayerMappableActionKeyMappings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_GetAllPlayerMappableActionKeyMappings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVCamComponent_GetAllPlayerMappableActionKeyMappings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVCamComponent_GetAllPlayerMappableActionKeyMappings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVCamComponent_GetDisableComponentWhenSpawnedBySequencer_Statics
	{
		struct VCamComponent_eventGetDisableComponentWhenSpawnedBySequencer_Parms
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
	void Z_Construct_UFunction_UVCamComponent_GetDisableComponentWhenSpawnedBySequencer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VCamComponent_eventGetDisableComponentWhenSpawnedBySequencer_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVCamComponent_GetDisableComponentWhenSpawnedBySequencer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VCamComponent_eventGetDisableComponentWhenSpawnedBySequencer_Parms), &Z_Construct_UFunction_UVCamComponent_GetDisableComponentWhenSpawnedBySequencer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVCamComponent_GetDisableComponentWhenSpawnedBySequencer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_GetDisableComponentWhenSpawnedBySequencer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamComponent_GetDisableComponentWhenSpawnedBySequencer_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera" },
		{ "ModuleRelativePath", "Public/VCamComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVCamComponent_GetDisableComponentWhenSpawnedBySequencer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamComponent, nullptr, "GetDisableComponentWhenSpawnedBySequencer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVCamComponent_GetDisableComponentWhenSpawnedBySequencer_Statics::VCamComponent_eventGetDisableComponentWhenSpawnedBySequencer_Parms), Z_Construct_UFunction_UVCamComponent_GetDisableComponentWhenSpawnedBySequencer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_GetDisableComponentWhenSpawnedBySequencer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVCamComponent_GetDisableComponentWhenSpawnedBySequencer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_GetDisableComponentWhenSpawnedBySequencer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVCamComponent_GetDisableComponentWhenSpawnedBySequencer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVCamComponent_GetDisableComponentWhenSpawnedBySequencer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVCamComponent_GetDisableOutputOnMultiUserReceiver_Statics
	{
		struct VCamComponent_eventGetDisableOutputOnMultiUserReceiver_Parms
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
	void Z_Construct_UFunction_UVCamComponent_GetDisableOutputOnMultiUserReceiver_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VCamComponent_eventGetDisableOutputOnMultiUserReceiver_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVCamComponent_GetDisableOutputOnMultiUserReceiver_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VCamComponent_eventGetDisableOutputOnMultiUserReceiver_Parms), &Z_Construct_UFunction_UVCamComponent_GetDisableOutputOnMultiUserReceiver_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVCamComponent_GetDisableOutputOnMultiUserReceiver_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_GetDisableOutputOnMultiUserReceiver_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamComponent_GetDisableOutputOnMultiUserReceiver_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera" },
		{ "ModuleRelativePath", "Public/VCamComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVCamComponent_GetDisableOutputOnMultiUserReceiver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamComponent, nullptr, "GetDisableOutputOnMultiUserReceiver", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVCamComponent_GetDisableOutputOnMultiUserReceiver_Statics::VCamComponent_eventGetDisableOutputOnMultiUserReceiver_Parms), Z_Construct_UFunction_UVCamComponent_GetDisableOutputOnMultiUserReceiver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_GetDisableOutputOnMultiUserReceiver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVCamComponent_GetDisableOutputOnMultiUserReceiver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_GetDisableOutputOnMultiUserReceiver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVCamComponent_GetDisableOutputOnMultiUserReceiver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVCamComponent_GetDisableOutputOnMultiUserReceiver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVCamComponent_GetInputDeviceSettings_Statics
	{
		struct VCamComponent_eventGetInputDeviceSettings_Parms
		{
			FVCamInputDeviceConfig ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamComponent_GetInputDeviceSettings_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVCamComponent_GetInputDeviceSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamComponent_eventGetInputDeviceSettings_Parms, ReturnValue), Z_Construct_UScriptStruct_FVCamInputDeviceConfig, METADATA_PARAMS(Z_Construct_UFunction_UVCamComponent_GetInputDeviceSettings_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_GetInputDeviceSettings_Statics::NewProp_ReturnValue_MetaData)) }; // 855388532
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVCamComponent_GetInputDeviceSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_GetInputDeviceSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamComponent_GetInputDeviceSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "VCam Input" },
		{ "Comment", "/** Gets the current input device settings being used (if this component is enabled) or that will be used (if not enabled). */" },
		{ "ModuleRelativePath", "Public/VCamComponent.h" },
		{ "ToolTip", "Gets the current input device settings being used (if this component is enabled) or that will be used (if not enabled)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVCamComponent_GetInputDeviceSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamComponent, nullptr, "GetInputDeviceSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVCamComponent_GetInputDeviceSettings_Statics::VCamComponent_eventGetInputDeviceSettings_Parms), Z_Construct_UFunction_UVCamComponent_GetInputDeviceSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_GetInputDeviceSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVCamComponent_GetInputDeviceSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_GetInputDeviceSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVCamComponent_GetInputDeviceSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVCamComponent_GetInputDeviceSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVCamComponent_GetInputProfile_Statics
	{
		struct VCamComponent_eventGetInputProfile_Parms
		{
			FVCamInputProfile ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamComponent_GetInputProfile_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVCamComponent_GetInputProfile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamComponent_eventGetInputProfile_Parms, ReturnValue), Z_Construct_UScriptStruct_FVCamInputProfile, METADATA_PARAMS(Z_Construct_UFunction_UVCamComponent_GetInputProfile_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_GetInputProfile_Statics::NewProp_ReturnValue_MetaData)) }; // 2324690633
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVCamComponent_GetInputProfile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_GetInputProfile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamComponent_GetInputProfile_Statics::Function_MetaDataParams[] = {
		{ "Category", "VCam Input" },
		{ "ModuleRelativePath", "Public/VCamComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVCamComponent_GetInputProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamComponent, nullptr, "GetInputProfile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVCamComponent_GetInputProfile_Statics::VCamComponent_eventGetInputProfile_Parms), Z_Construct_UFunction_UVCamComponent_GetInputProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_GetInputProfile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVCamComponent_GetInputProfile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_GetInputProfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVCamComponent_GetInputProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVCamComponent_GetInputProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVCamComponent_GetInputVCamSubsystem_Statics
	{
		struct VCamComponent_eventGetInputVCamSubsystem_Parms
		{
			UInputVCamSubsystem* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVCamComponent_GetInputVCamSubsystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamComponent_eventGetInputVCamSubsystem_Parms, ReturnValue), Z_Construct_UClass_UInputVCamSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVCamComponent_GetInputVCamSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_GetInputVCamSubsystem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamComponent_GetInputVCamSubsystem_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera" },
		{ "Comment", "/** Gets the subsystem responsible for input handling. */" },
		{ "ModuleRelativePath", "Public/VCamComponent.h" },
		{ "ToolTip", "Gets the subsystem responsible for input handling." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVCamComponent_GetInputVCamSubsystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamComponent, nullptr, "GetInputVCamSubsystem", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVCamComponent_GetInputVCamSubsystem_Statics::VCamComponent_eventGetInputVCamSubsystem_Parms), Z_Construct_UFunction_UVCamComponent_GetInputVCamSubsystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_GetInputVCamSubsystem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVCamComponent_GetInputVCamSubsystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_GetInputVCamSubsystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVCamComponent_GetInputVCamSubsystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVCamComponent_GetInputVCamSubsystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVCamComponent_GetLiveLinkDataForCurrentFrame_Statics
	{
		struct VCamComponent_eventGetLiveLinkDataForCurrentFrame_Parms
		{
			FLiveLinkCameraBlueprintData LiveLinkData;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_LiveLinkData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVCamComponent_GetLiveLinkDataForCurrentFrame_Statics::NewProp_LiveLinkData = { "LiveLinkData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamComponent_eventGetLiveLinkDataForCurrentFrame_Parms, LiveLinkData), Z_Construct_UScriptStruct_FLiveLinkCameraBlueprintData, METADATA_PARAMS(nullptr, 0) }; // 3001212355
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVCamComponent_GetLiveLinkDataForCurrentFrame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_GetLiveLinkDataForCurrentFrame_Statics::NewProp_LiveLinkData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamComponent_GetLiveLinkDataForCurrentFrame_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera" },
		{ "ModuleRelativePath", "Public/VCamComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVCamComponent_GetLiveLinkDataForCurrentFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamComponent, nullptr, "GetLiveLinkDataForCurrentFrame", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVCamComponent_GetLiveLinkDataForCurrentFrame_Statics::VCamComponent_eventGetLiveLinkDataForCurrentFrame_Parms), Z_Construct_UFunction_UVCamComponent_GetLiveLinkDataForCurrentFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_GetLiveLinkDataForCurrentFrame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVCamComponent_GetLiveLinkDataForCurrentFrame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_GetLiveLinkDataForCurrentFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVCamComponent_GetLiveLinkDataForCurrentFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVCamComponent_GetLiveLinkDataForCurrentFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVCamComponent_GetLiveLinkSubobject_Statics
	{
		struct VCamComponent_eventGetLiveLinkSubobject_Parms
		{
			FLiveLinkSubjectName ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVCamComponent_GetLiveLinkSubobject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamComponent_eventGetLiveLinkSubobject_Parms, ReturnValue), Z_Construct_UScriptStruct_FLiveLinkSubjectName, METADATA_PARAMS(nullptr, 0) }; // 930695248
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVCamComponent_GetLiveLinkSubobject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_GetLiveLinkSubobject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamComponent_GetLiveLinkSubobject_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera" },
		{ "ModuleRelativePath", "Public/VCamComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVCamComponent_GetLiveLinkSubobject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamComponent, nullptr, "GetLiveLinkSubobject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVCamComponent_GetLiveLinkSubobject_Statics::VCamComponent_eventGetLiveLinkSubobject_Parms), Z_Construct_UFunction_UVCamComponent_GetLiveLinkSubobject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_GetLiveLinkSubobject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVCamComponent_GetLiveLinkSubobject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_GetLiveLinkSubobject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVCamComponent_GetLiveLinkSubobject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVCamComponent_GetLiveLinkSubobject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVCamComponent_GetModifierByIndex_Statics
	{
		struct VCamComponent_eventGetModifierByIndex_Parms
		{
			int32 Index;
			UVCamModifier* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamComponent_GetModifierByIndex_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVCamComponent_GetModifierByIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamComponent_eventGetModifierByIndex_Parms, Index), METADATA_PARAMS(Z_Construct_UFunction_UVCamComponent_GetModifierByIndex_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_GetModifierByIndex_Statics::NewProp_Index_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVCamComponent_GetModifierByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamComponent_eventGetModifierByIndex_Parms, ReturnValue), Z_Construct_UClass_UVCamModifier_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVCamComponent_GetModifierByIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_GetModifierByIndex_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_GetModifierByIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamComponent_GetModifierByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera" },
		{ "Comment", "/** Returns the Modifier in the Stack with the given index if it exist. */" },
		{ "ModuleRelativePath", "Public/VCamComponent.h" },
		{ "ToolTip", "Returns the Modifier in the Stack with the given index if it exist." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVCamComponent_GetModifierByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamComponent, nullptr, "GetModifierByIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVCamComponent_GetModifierByIndex_Statics::VCamComponent_eventGetModifierByIndex_Parms), Z_Construct_UFunction_UVCamComponent_GetModifierByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_GetModifierByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVCamComponent_GetModifierByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_GetModifierByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVCamComponent_GetModifierByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVCamComponent_GetModifierByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVCamComponent_GetModifierByName_Statics
	{
		struct VCamComponent_eventGetModifierByName_Parms
		{
			FName Name;
			UVCamModifier* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamComponent_GetModifierByName_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVCamComponent_GetModifierByName_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamComponent_eventGetModifierByName_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UVCamComponent_GetModifierByName_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_GetModifierByName_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVCamComponent_GetModifierByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamComponent_eventGetModifierByName_Parms, ReturnValue), Z_Construct_UClass_UVCamModifier_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVCamComponent_GetModifierByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_GetModifierByName_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_GetModifierByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamComponent_GetModifierByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera" },
		{ "Comment", "/** Tries to find a Modifier in the Stack with the given name. The returned Modifier must be checked before it is used. */" },
		{ "ModuleRelativePath", "Public/VCamComponent.h" },
		{ "ToolTip", "Tries to find a Modifier in the Stack with the given name. The returned Modifier must be checked before it is used." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVCamComponent_GetModifierByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamComponent, nullptr, "GetModifierByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVCamComponent_GetModifierByName_Statics::VCamComponent_eventGetModifierByName_Parms), Z_Construct_UFunction_UVCamComponent_GetModifierByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_GetModifierByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVCamComponent_GetModifierByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_GetModifierByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVCamComponent_GetModifierByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVCamComponent_GetModifierByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVCamComponent_GetModifierContext_Statics
	{
		struct VCamComponent_eventGetModifierContext_Parms
		{
			UVCamModifierContext* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVCamComponent_GetModifierContext_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamComponent_eventGetModifierContext_Parms, ReturnValue), Z_Construct_UClass_UVCamModifierContext_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVCamComponent_GetModifierContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_GetModifierContext_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamComponent_GetModifierContext_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera" },
		{ "Comment", "/**\n\x09 * Get the current Modifier Context\n\x09 * @return Current Context\n\x09 */" },
		{ "ModuleRelativePath", "Public/VCamComponent.h" },
		{ "ToolTip", "Get the current Modifier Context\n@return Current Context" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVCamComponent_GetModifierContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamComponent, nullptr, "GetModifierContext", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVCamComponent_GetModifierContext_Statics::VCamComponent_eventGetModifierContext_Parms), Z_Construct_UFunction_UVCamComponent_GetModifierContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_GetModifierContext_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVCamComponent_GetModifierContext_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_GetModifierContext_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVCamComponent_GetModifierContext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVCamComponent_GetModifierContext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVCamComponent_GetModifiersByClass_Statics
	{
		struct VCamComponent_eventGetModifiersByClass_Parms
		{
			TSubclassOf<UVCamModifier>  ModifierClass;
			TArray<UVCamModifier*> FoundModifiers;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModifierClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ModifierClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FoundModifiers_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FoundModifiers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamComponent_GetModifiersByClass_Statics::NewProp_ModifierClass_MetaData[] = {
		{ "AllowAbstract", "false" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UVCamComponent_GetModifiersByClass_Statics::NewProp_ModifierClass = { "ModifierClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamComponent_eventGetModifiersByClass_Parms, ModifierClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UVCamModifier_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVCamComponent_GetModifiersByClass_Statics::NewProp_ModifierClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_GetModifiersByClass_Statics::NewProp_ModifierClass_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVCamComponent_GetModifiersByClass_Statics::NewProp_FoundModifiers_Inner = { "FoundModifiers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UVCamModifier_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVCamComponent_GetModifiersByClass_Statics::NewProp_FoundModifiers = { "FoundModifiers", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamComponent_eventGetModifiersByClass_Parms, FoundModifiers), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVCamComponent_GetModifiersByClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_GetModifiersByClass_Statics::NewProp_ModifierClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_GetModifiersByClass_Statics::NewProp_FoundModifiers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_GetModifiersByClass_Statics::NewProp_FoundModifiers,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamComponent_GetModifiersByClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera" },
		{ "Comment", "/** Given a specific Modifier class, returns a list of matching Modifiers */" },
		{ "DeterminesOutputType", "ModifierClass" },
		{ "DynamicOutputParam", "FoundModifiers" },
		{ "ModuleRelativePath", "Public/VCamComponent.h" },
		{ "ToolTip", "Given a specific Modifier class, returns a list of matching Modifiers" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVCamComponent_GetModifiersByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamComponent, nullptr, "GetModifiersByClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVCamComponent_GetModifiersByClass_Statics::VCamComponent_eventGetModifiersByClass_Parms), Z_Construct_UFunction_UVCamComponent_GetModifiersByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_GetModifiersByClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVCamComponent_GetModifiersByClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_GetModifiersByClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVCamComponent_GetModifiersByClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVCamComponent_GetModifiersByClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVCamComponent_GetModifiersByInterface_Statics
	{
		struct VCamComponent_eventGetModifiersByInterface_Parms
		{
			TSubclassOf<UInterface>  InterfaceClass;
			TArray<UVCamModifier*> FoundModifiers;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterfaceClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_InterfaceClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FoundModifiers_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FoundModifiers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamComponent_GetModifiersByInterface_Statics::NewProp_InterfaceClass_MetaData[] = {
		{ "AllowAbstract", "false" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UVCamComponent_GetModifiersByInterface_Statics::NewProp_InterfaceClass = { "InterfaceClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamComponent_eventGetModifiersByInterface_Parms, InterfaceClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UInterface, METADATA_PARAMS(Z_Construct_UFunction_UVCamComponent_GetModifiersByInterface_Statics::NewProp_InterfaceClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_GetModifiersByInterface_Statics::NewProp_InterfaceClass_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVCamComponent_GetModifiersByInterface_Statics::NewProp_FoundModifiers_Inner = { "FoundModifiers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UVCamModifier_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVCamComponent_GetModifiersByInterface_Statics::NewProp_FoundModifiers = { "FoundModifiers", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamComponent_eventGetModifiersByInterface_Parms, FoundModifiers), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVCamComponent_GetModifiersByInterface_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_GetModifiersByInterface_Statics::NewProp_InterfaceClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_GetModifiersByInterface_Statics::NewProp_FoundModifiers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_GetModifiersByInterface_Statics::NewProp_FoundModifiers,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamComponent_GetModifiersByInterface_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera" },
		{ "Comment", "/** Given a specific Interface class, returns a list of matching Modifiers */" },
		{ "ModuleRelativePath", "Public/VCamComponent.h" },
		{ "ToolTip", "Given a specific Interface class, returns a list of matching Modifiers" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVCamComponent_GetModifiersByInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamComponent, nullptr, "GetModifiersByInterface", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVCamComponent_GetModifiersByInterface_Statics::VCamComponent_eventGetModifiersByInterface_Parms), Z_Construct_UFunction_UVCamComponent_GetModifiersByInterface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_GetModifiersByInterface_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVCamComponent_GetModifiersByInterface_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_GetModifiersByInterface_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVCamComponent_GetModifiersByInterface()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVCamComponent_GetModifiersByInterface_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVCamComponent_GetNumberOfModifiers_Statics
	{
		struct VCamComponent_eventGetNumberOfModifiers_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVCamComponent_GetNumberOfModifiers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamComponent_eventGetNumberOfModifiers_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVCamComponent_GetNumberOfModifiers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_GetNumberOfModifiers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamComponent_GetNumberOfModifiers_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera" },
		{ "ModuleRelativePath", "Public/VCamComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVCamComponent_GetNumberOfModifiers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamComponent, nullptr, "GetNumberOfModifiers", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVCamComponent_GetNumberOfModifiers_Statics::VCamComponent_eventGetNumberOfModifiers_Parms), Z_Construct_UFunction_UVCamComponent_GetNumberOfModifiers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_GetNumberOfModifiers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVCamComponent_GetNumberOfModifiers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_GetNumberOfModifiers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVCamComponent_GetNumberOfModifiers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVCamComponent_GetNumberOfModifiers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVCamComponent_GetNumberOfOutputProviders_Statics
	{
		struct VCamComponent_eventGetNumberOfOutputProviders_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVCamComponent_GetNumberOfOutputProviders_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamComponent_eventGetNumberOfOutputProviders_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVCamComponent_GetNumberOfOutputProviders_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_GetNumberOfOutputProviders_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamComponent_GetNumberOfOutputProviders_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera" },
		{ "ModuleRelativePath", "Public/VCamComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVCamComponent_GetNumberOfOutputProviders_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamComponent, nullptr, "GetNumberOfOutputProviders", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVCamComponent_GetNumberOfOutputProviders_Statics::VCamComponent_eventGetNumberOfOutputProviders_Parms), Z_Construct_UFunction_UVCamComponent_GetNumberOfOutputProviders_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_GetNumberOfOutputProviders_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVCamComponent_GetNumberOfOutputProviders_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_GetNumberOfOutputProviders_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVCamComponent_GetNumberOfOutputProviders()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVCamComponent_GetNumberOfOutputProviders_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVCamComponent_GetOutputProviderByIndex_Statics
	{
		struct VCamComponent_eventGetOutputProviderByIndex_Parms
		{
			int32 ProviderIndex;
			UVCamOutputProviderBase* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProviderIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ProviderIndex;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamComponent_GetOutputProviderByIndex_Statics::NewProp_ProviderIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVCamComponent_GetOutputProviderByIndex_Statics::NewProp_ProviderIndex = { "ProviderIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamComponent_eventGetOutputProviderByIndex_Parms, ProviderIndex), METADATA_PARAMS(Z_Construct_UFunction_UVCamComponent_GetOutputProviderByIndex_Statics::NewProp_ProviderIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_GetOutputProviderByIndex_Statics::NewProp_ProviderIndex_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVCamComponent_GetOutputProviderByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamComponent_eventGetOutputProviderByIndex_Parms, ReturnValue), Z_Construct_UClass_UVCamOutputProviderBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVCamComponent_GetOutputProviderByIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_GetOutputProviderByIndex_Statics::NewProp_ProviderIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_GetOutputProviderByIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamComponent_GetOutputProviderByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera" },
		{ "ModuleRelativePath", "Public/VCamComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVCamComponent_GetOutputProviderByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamComponent, nullptr, "GetOutputProviderByIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVCamComponent_GetOutputProviderByIndex_Statics::VCamComponent_eventGetOutputProviderByIndex_Parms), Z_Construct_UFunction_UVCamComponent_GetOutputProviderByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_GetOutputProviderByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVCamComponent_GetOutputProviderByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_GetOutputProviderByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVCamComponent_GetOutputProviderByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVCamComponent_GetOutputProviderByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVCamComponent_GetOutputProvidersByClass_Statics
	{
		struct VCamComponent_eventGetOutputProvidersByClass_Parms
		{
			TSubclassOf<UVCamOutputProviderBase>  ProviderClass;
			TArray<UVCamOutputProviderBase*> FoundProviders;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProviderClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ProviderClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FoundProviders_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FoundProviders;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamComponent_GetOutputProvidersByClass_Statics::NewProp_ProviderClass_MetaData[] = {
		{ "AllowAbstract", "false" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UVCamComponent_GetOutputProvidersByClass_Statics::NewProp_ProviderClass = { "ProviderClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamComponent_eventGetOutputProvidersByClass_Parms, ProviderClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UVCamOutputProviderBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVCamComponent_GetOutputProvidersByClass_Statics::NewProp_ProviderClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_GetOutputProvidersByClass_Statics::NewProp_ProviderClass_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVCamComponent_GetOutputProvidersByClass_Statics::NewProp_FoundProviders_Inner = { "FoundProviders", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UVCamOutputProviderBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVCamComponent_GetOutputProvidersByClass_Statics::NewProp_FoundProviders = { "FoundProviders", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamComponent_eventGetOutputProvidersByClass_Parms, FoundProviders), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVCamComponent_GetOutputProvidersByClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_GetOutputProvidersByClass_Statics::NewProp_ProviderClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_GetOutputProvidersByClass_Statics::NewProp_FoundProviders_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_GetOutputProvidersByClass_Statics::NewProp_FoundProviders,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamComponent_GetOutputProvidersByClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera" },
		{ "DeterminesOutputType", "ProviderClass" },
		{ "DynamicOutputParam", "FoundProviders" },
		{ "ModuleRelativePath", "Public/VCamComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVCamComponent_GetOutputProvidersByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamComponent, nullptr, "GetOutputProvidersByClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVCamComponent_GetOutputProvidersByClass_Statics::VCamComponent_eventGetOutputProvidersByClass_Parms), Z_Construct_UFunction_UVCamComponent_GetOutputProvidersByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_GetOutputProvidersByClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVCamComponent_GetOutputProvidersByClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_GetOutputProvidersByClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVCamComponent_GetOutputProvidersByClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVCamComponent_GetOutputProvidersByClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVCamComponent_GetPlayerMappableKeys_Statics
	{
		struct VCamComponent_eventGetPlayerMappableKeys_Parms
		{
			TArray<FEnhancedActionKeyMapping> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVCamComponent_GetPlayerMappableKeys_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FEnhancedActionKeyMapping, METADATA_PARAMS(nullptr, 0) }; // 2762654059
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVCamComponent_GetPlayerMappableKeys_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamComponent_eventGetPlayerMappableKeys_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2762654059
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVCamComponent_GetPlayerMappableKeys_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_GetPlayerMappableKeys_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_GetPlayerMappableKeys_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamComponent_GetPlayerMappableKeys_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera" },
		{ "Comment", "/**\n\x09 * Returns a list of all player mappable keys that have been registered\n\x09 */" },
		{ "ModuleRelativePath", "Public/VCamComponent.h" },
		{ "ToolTip", "Returns a list of all player mappable keys that have been registered" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVCamComponent_GetPlayerMappableKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamComponent, nullptr, "GetPlayerMappableKeys", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVCamComponent_GetPlayerMappableKeys_Statics::VCamComponent_eventGetPlayerMappableKeys_Parms), Z_Construct_UFunction_UVCamComponent_GetPlayerMappableKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_GetPlayerMappableKeys_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVCamComponent_GetPlayerMappableKeys_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_GetPlayerMappableKeys_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVCamComponent_GetPlayerMappableKeys()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVCamComponent_GetPlayerMappableKeys_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVCamComponent_GetPlayerMappedKey_Statics
	{
		struct VCamComponent_eventGetPlayerMappedKey_Parms
		{
			FName MappingName;
			FKey ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MappingName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MappingName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamComponent_GetPlayerMappedKey_Statics::NewProp_MappingName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVCamComponent_GetPlayerMappedKey_Statics::NewProp_MappingName = { "MappingName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamComponent_eventGetPlayerMappedKey_Parms, MappingName), METADATA_PARAMS(Z_Construct_UFunction_UVCamComponent_GetPlayerMappedKey_Statics::NewProp_MappingName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_GetPlayerMappedKey_Statics::NewProp_MappingName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVCamComponent_GetPlayerMappedKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamComponent_eventGetPlayerMappedKey_Parms, ReturnValue), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) }; // 2101135134
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVCamComponent_GetPlayerMappedKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_GetPlayerMappedKey_Statics::NewProp_MappingName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_GetPlayerMappedKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamComponent_GetPlayerMappedKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "VCam Input" },
		{ "Comment", "// Searches the currently active input system for the current key mapped to a given input mapping\n// If there is not a player mapped key, then this will return EKeys::Invalid.\n" },
		{ "ModuleRelativePath", "Public/VCamComponent.h" },
		{ "ReturnDisplayName", "Key" },
		{ "ToolTip", "Searches the currently active input system for the current key mapped to a given input mapping\nIf there is not a player mapped key, then this will return EKeys::Invalid." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVCamComponent_GetPlayerMappedKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamComponent, nullptr, "GetPlayerMappedKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVCamComponent_GetPlayerMappedKey_Statics::VCamComponent_eventGetPlayerMappedKey_Parms), Z_Construct_UFunction_UVCamComponent_GetPlayerMappedKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_GetPlayerMappedKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVCamComponent_GetPlayerMappedKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_GetPlayerMappedKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVCamComponent_GetPlayerMappedKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVCamComponent_GetPlayerMappedKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVCamComponent_GetRole_Statics
	{
		struct VCamComponent_eventGetRole_Parms
		{
			FGameplayTag ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVCamComponent_GetRole_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamComponent_eventGetRole_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVCamComponent_GetRole_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_GetRole_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamComponent_GetRole_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera" },
		{ "Comment", "/******************** Blueprint Getters & Setters ********************/" },
		{ "ModuleRelativePath", "Public/VCamComponent.h" },
		{ "ToolTip", "***************** Blueprint Getters & Setters *******************" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVCamComponent_GetRole_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamComponent, nullptr, "GetRole", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVCamComponent_GetRole_Statics::VCamComponent_eventGetRole_Parms), Z_Construct_UFunction_UVCamComponent_GetRole_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_GetRole_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVCamComponent_GetRole_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_GetRole_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVCamComponent_GetRole()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVCamComponent_GetRole_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVCamComponent_GetSubsystemArray_Statics
	{
		struct VCamComponent_eventGetSubsystemArray_Parms
		{
			const TSubclassOf<UVCamSubsystem>  Class;
			TArray<UVCamSubsystem*> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamComponent_GetSubsystemArray_Statics::NewProp_Class_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UVCamComponent_GetSubsystemArray_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamComponent_eventGetSubsystemArray_Parms, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_UVCamSubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVCamComponent_GetSubsystemArray_Statics::NewProp_Class_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_GetSubsystemArray_Statics::NewProp_Class_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVCamComponent_GetSubsystemArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UVCamSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVCamComponent_GetSubsystemArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamComponent_eventGetSubsystemArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVCamComponent_GetSubsystemArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_GetSubsystemArray_Statics::NewProp_Class,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_GetSubsystemArray_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_GetSubsystemArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamComponent_GetSubsystemArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera" },
		{ "Comment", "/** Gets all subsystems implementing this interface */" },
		{ "ModuleRelativePath", "Public/VCamComponent.h" },
		{ "ToolTip", "Gets all subsystems implementing this interface" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVCamComponent_GetSubsystemArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamComponent, nullptr, "GetSubsystemArray", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVCamComponent_GetSubsystemArray_Statics::VCamComponent_eventGetSubsystemArray_Parms), Z_Construct_UFunction_UVCamComponent_GetSubsystemArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_GetSubsystemArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVCamComponent_GetSubsystemArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_GetSubsystemArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVCamComponent_GetSubsystemArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVCamComponent_GetSubsystemArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVCamComponent_GetTargetCamera_Statics
	{
		struct VCamComponent_eventGetTargetCamera_Parms
		{
			UCineCameraComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamComponent_GetTargetCamera_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVCamComponent_GetTargetCamera_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamComponent_eventGetTargetCamera_Parms, ReturnValue), Z_Construct_UClass_UCineCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVCamComponent_GetTargetCamera_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_GetTargetCamera_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVCamComponent_GetTargetCamera_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_GetTargetCamera_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamComponent_GetTargetCamera_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera" },
		{ "ModuleRelativePath", "Public/VCamComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVCamComponent_GetTargetCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamComponent, nullptr, "GetTargetCamera", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVCamComponent_GetTargetCamera_Statics::VCamComponent_eventGetTargetCamera_Parms), Z_Construct_UFunction_UVCamComponent_GetTargetCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_GetTargetCamera_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVCamComponent_GetTargetCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_GetTargetCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVCamComponent_GetTargetCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVCamComponent_GetTargetCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVCamComponent_HandleObjectReplaced_Statics
	{
		struct VCamComponent_eventHandleObjectReplaced_Parms
		{
			TMap<UObject*,UObject*> ReplacementMap;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReplacementMap_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReplacementMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplacementMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ReplacementMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVCamComponent_HandleObjectReplaced_Statics::NewProp_ReplacementMap_ValueProp = { "ReplacementMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVCamComponent_HandleObjectReplaced_Statics::NewProp_ReplacementMap_Key_KeyProp = { "ReplacementMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamComponent_HandleObjectReplaced_Statics::NewProp_ReplacementMap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVCamComponent_HandleObjectReplaced_Statics::NewProp_ReplacementMap = { "ReplacementMap", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamComponent_eventHandleObjectReplaced_Parms, ReplacementMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UVCamComponent_HandleObjectReplaced_Statics::NewProp_ReplacementMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_HandleObjectReplaced_Statics::NewProp_ReplacementMap_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVCamComponent_HandleObjectReplaced_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_HandleObjectReplaced_Statics::NewProp_ReplacementMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_HandleObjectReplaced_Statics::NewProp_ReplacementMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_HandleObjectReplaced_Statics::NewProp_ReplacementMap,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamComponent_HandleObjectReplaced_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VCamComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVCamComponent_HandleObjectReplaced_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamComponent, nullptr, "HandleObjectReplaced", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVCamComponent_HandleObjectReplaced_Statics::VCamComponent_eventHandleObjectReplaced_Parms), Z_Construct_UFunction_UVCamComponent_HandleObjectReplaced_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_HandleObjectReplaced_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVCamComponent_HandleObjectReplaced_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_HandleObjectReplaced_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVCamComponent_HandleObjectReplaced()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVCamComponent_HandleObjectReplaced_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVCamComponent_InjectInputForAction_Statics
	{
		struct VCamComponent_eventInjectInputForAction_Parms
		{
			const UInputAction* Action;
			FInputActionValue RawValue;
			TArray<UInputModifier*> Modifiers;
			TArray<UInputTrigger*> Triggers;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Action;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RawValue;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Modifiers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Modifiers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Modifiers;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Triggers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Triggers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Triggers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamComponent_InjectInputForAction_Statics::NewProp_Action_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVCamComponent_InjectInputForAction_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamComponent_eventInjectInputForAction_Parms, Action), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVCamComponent_InjectInputForAction_Statics::NewProp_Action_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_InjectInputForAction_Statics::NewProp_Action_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVCamComponent_InjectInputForAction_Statics::NewProp_RawValue = { "RawValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamComponent_eventInjectInputForAction_Parms, RawValue), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(nullptr, 0) }; // 2388133963
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVCamComponent_InjectInputForAction_Statics::NewProp_Modifiers_Inner = { "Modifiers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UInputModifier_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamComponent_InjectInputForAction_Statics::NewProp_Modifiers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVCamComponent_InjectInputForAction_Statics::NewProp_Modifiers = { "Modifiers", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamComponent_eventInjectInputForAction_Parms, Modifiers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UVCamComponent_InjectInputForAction_Statics::NewProp_Modifiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_InjectInputForAction_Statics::NewProp_Modifiers_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVCamComponent_InjectInputForAction_Statics::NewProp_Triggers_Inner = { "Triggers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UInputTrigger_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamComponent_InjectInputForAction_Statics::NewProp_Triggers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVCamComponent_InjectInputForAction_Statics::NewProp_Triggers = { "Triggers", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamComponent_eventInjectInputForAction_Parms, Triggers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UVCamComponent_InjectInputForAction_Statics::NewProp_Triggers_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_InjectInputForAction_Statics::NewProp_Triggers_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVCamComponent_InjectInputForAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_InjectInputForAction_Statics::NewProp_Action,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_InjectInputForAction_Statics::NewProp_RawValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_InjectInputForAction_Statics::NewProp_Modifiers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_InjectInputForAction_Statics::NewProp_Modifiers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_InjectInputForAction_Statics::NewProp_Triggers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_InjectInputForAction_Statics::NewProp_Triggers,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamComponent_InjectInputForAction_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Modifiers,Triggers" },
		{ "Category", "VirtualCamera" },
		{ "Comment", "/**\n\x09 * Injects an input action. \n\x09 */" },
		{ "ModuleRelativePath", "Public/VCamComponent.h" },
		{ "ToolTip", "Injects an input action." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVCamComponent_InjectInputForAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamComponent, nullptr, "InjectInputForAction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVCamComponent_InjectInputForAction_Statics::VCamComponent_eventInjectInputForAction_Parms), Z_Construct_UFunction_UVCamComponent_InjectInputForAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_InjectInputForAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVCamComponent_InjectInputForAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_InjectInputForAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVCamComponent_InjectInputForAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVCamComponent_InjectInputForAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVCamComponent_InjectInputVectorForAction_Statics
	{
		struct VCamComponent_eventInjectInputVectorForAction_Parms
		{
			const UInputAction* Action;
			FVector Value;
			TArray<UInputModifier*> Modifiers;
			TArray<UInputTrigger*> Triggers;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Action;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Modifiers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Modifiers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Modifiers;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Triggers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Triggers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Triggers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamComponent_InjectInputVectorForAction_Statics::NewProp_Action_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVCamComponent_InjectInputVectorForAction_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamComponent_eventInjectInputVectorForAction_Parms, Action), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVCamComponent_InjectInputVectorForAction_Statics::NewProp_Action_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_InjectInputVectorForAction_Statics::NewProp_Action_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVCamComponent_InjectInputVectorForAction_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamComponent_eventInjectInputVectorForAction_Parms, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVCamComponent_InjectInputVectorForAction_Statics::NewProp_Modifiers_Inner = { "Modifiers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UInputModifier_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamComponent_InjectInputVectorForAction_Statics::NewProp_Modifiers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVCamComponent_InjectInputVectorForAction_Statics::NewProp_Modifiers = { "Modifiers", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamComponent_eventInjectInputVectorForAction_Parms, Modifiers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UVCamComponent_InjectInputVectorForAction_Statics::NewProp_Modifiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_InjectInputVectorForAction_Statics::NewProp_Modifiers_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVCamComponent_InjectInputVectorForAction_Statics::NewProp_Triggers_Inner = { "Triggers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UInputTrigger_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamComponent_InjectInputVectorForAction_Statics::NewProp_Triggers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVCamComponent_InjectInputVectorForAction_Statics::NewProp_Triggers = { "Triggers", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamComponent_eventInjectInputVectorForAction_Parms, Triggers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UVCamComponent_InjectInputVectorForAction_Statics::NewProp_Triggers_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_InjectInputVectorForAction_Statics::NewProp_Triggers_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVCamComponent_InjectInputVectorForAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_InjectInputVectorForAction_Statics::NewProp_Action,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_InjectInputVectorForAction_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_InjectInputVectorForAction_Statics::NewProp_Modifiers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_InjectInputVectorForAction_Statics::NewProp_Modifiers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_InjectInputVectorForAction_Statics::NewProp_Triggers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_InjectInputVectorForAction_Statics::NewProp_Triggers,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamComponent_InjectInputVectorForAction_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Modifiers,Triggers" },
		{ "Category", "VirtualCamera" },
		{ "Comment", "/**\n\x09 * Injects an input vector for action.\n\x09 */" },
		{ "ModuleRelativePath", "Public/VCamComponent.h" },
		{ "ToolTip", "Injects an input vector for action." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVCamComponent_InjectInputVectorForAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamComponent, nullptr, "InjectInputVectorForAction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVCamComponent_InjectInputVectorForAction_Statics::VCamComponent_eventInjectInputVectorForAction_Parms), Z_Construct_UFunction_UVCamComponent_InjectInputVectorForAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_InjectInputVectorForAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVCamComponent_InjectInputVectorForAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_InjectInputVectorForAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVCamComponent_InjectInputVectorForAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVCamComponent_InjectInputVectorForAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVCamComponent_InsertModifier_Statics
	{
		struct VCamComponent_eventInsertModifier_Parms
		{
			FName Name;
			int32 Index;
			TSubclassOf<UVCamModifier>  ModifierClass;
			UVCamModifier* CreatedModifier;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModifierClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ModifierClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CreatedModifier;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamComponent_InsertModifier_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVCamComponent_InsertModifier_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamComponent_eventInsertModifier_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UVCamComponent_InsertModifier_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_InsertModifier_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVCamComponent_InsertModifier_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamComponent_eventInsertModifier_Parms, Index), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamComponent_InsertModifier_Statics::NewProp_ModifierClass_MetaData[] = {
		{ "AllowAbstract", "false" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UVCamComponent_InsertModifier_Statics::NewProp_ModifierClass = { "ModifierClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamComponent_eventInsertModifier_Parms, ModifierClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UVCamModifier_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVCamComponent_InsertModifier_Statics::NewProp_ModifierClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_InsertModifier_Statics::NewProp_ModifierClass_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVCamComponent_InsertModifier_Statics::NewProp_CreatedModifier = { "CreatedModifier", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamComponent_eventInsertModifier_Parms, CreatedModifier), Z_Construct_UClass_UVCamModifier_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVCamComponent_InsertModifier_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VCamComponent_eventInsertModifier_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVCamComponent_InsertModifier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VCamComponent_eventInsertModifier_Parms), &Z_Construct_UFunction_UVCamComponent_InsertModifier_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVCamComponent_InsertModifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_InsertModifier_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_InsertModifier_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_InsertModifier_Statics::NewProp_ModifierClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_InsertModifier_Statics::NewProp_CreatedModifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_InsertModifier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamComponent_InsertModifier_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera" },
		{ "Comment", "/**\n\x09 * Insert a modifier to the stack with a given name and index.\n\x09 * If that name is already in use then the modifier will not be added.\n\x09 * The index must be between zero and the number of existing modifiers inclusive\n\x09 * Returns the created modifier if the Add succeeded.\n\x09 */" },
		{ "DeterminesOutputType", "ModifierClass" },
		{ "DynamicOutputParam", "CreatedModifier" },
		{ "ModuleRelativePath", "Public/VCamComponent.h" },
		{ "ReturnDisplayName", "Success" },
		{ "ToolTip", "Insert a modifier to the stack with a given name and index.\nIf that name is already in use then the modifier will not be added.\nThe index must be between zero and the number of existing modifiers inclusive\nReturns the created modifier if the Add succeeded." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVCamComponent_InsertModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamComponent, nullptr, "InsertModifier", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVCamComponent_InsertModifier_Statics::VCamComponent_eventInsertModifier_Parms), Z_Construct_UFunction_UVCamComponent_InsertModifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_InsertModifier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVCamComponent_InsertModifier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_InsertModifier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVCamComponent_InsertModifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVCamComponent_InsertModifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVCamComponent_InsertOutputProvider_Statics
	{
		struct VCamComponent_eventInsertOutputProvider_Parms
		{
			int32 Index;
			TSubclassOf<UVCamOutputProviderBase>  ProviderClass;
			UVCamOutputProviderBase* CreatedProvider;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProviderClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ProviderClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CreatedProvider;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVCamComponent_InsertOutputProvider_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamComponent_eventInsertOutputProvider_Parms, Index), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamComponent_InsertOutputProvider_Statics::NewProp_ProviderClass_MetaData[] = {
		{ "AllowAbstract", "false" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UVCamComponent_InsertOutputProvider_Statics::NewProp_ProviderClass = { "ProviderClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamComponent_eventInsertOutputProvider_Parms, ProviderClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UVCamOutputProviderBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVCamComponent_InsertOutputProvider_Statics::NewProp_ProviderClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_InsertOutputProvider_Statics::NewProp_ProviderClass_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVCamComponent_InsertOutputProvider_Statics::NewProp_CreatedProvider = { "CreatedProvider", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamComponent_eventInsertOutputProvider_Parms, CreatedProvider), Z_Construct_UClass_UVCamOutputProviderBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVCamComponent_InsertOutputProvider_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VCamComponent_eventInsertOutputProvider_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVCamComponent_InsertOutputProvider_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VCamComponent_eventInsertOutputProvider_Parms), &Z_Construct_UFunction_UVCamComponent_InsertOutputProvider_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVCamComponent_InsertOutputProvider_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_InsertOutputProvider_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_InsertOutputProvider_Statics::NewProp_ProviderClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_InsertOutputProvider_Statics::NewProp_CreatedProvider,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_InsertOutputProvider_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamComponent_InsertOutputProvider_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera" },
		{ "DeterminesOutputType", "ProviderClass" },
		{ "DynamicOutputParam", "CreatedProvider" },
		{ "ModuleRelativePath", "Public/VCamComponent.h" },
		{ "ReturnDisplayName", "Success" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVCamComponent_InsertOutputProvider_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamComponent, nullptr, "InsertOutputProvider", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVCamComponent_InsertOutputProvider_Statics::VCamComponent_eventInsertOutputProvider_Parms), Z_Construct_UFunction_UVCamComponent_InsertOutputProvider_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_InsertOutputProvider_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVCamComponent_InsertOutputProvider_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_InsertOutputProvider_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVCamComponent_InsertOutputProvider()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVCamComponent_InsertOutputProvider_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVCamComponent_IsEnabled_Statics
	{
		struct VCamComponent_eventIsEnabled_Parms
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
	void Z_Construct_UFunction_UVCamComponent_IsEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VCamComponent_eventIsEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVCamComponent_IsEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VCamComponent_eventIsEnabled_Parms), &Z_Construct_UFunction_UVCamComponent_IsEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVCamComponent_IsEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_IsEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamComponent_IsEnabled_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Comment", "/** @return Whether the VCamComponent will update every frame */" },
		{ "ModuleRelativePath", "Public/VCamComponent.h" },
		{ "ToolTip", "@return Whether the VCamComponent will update every frame" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVCamComponent_IsEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamComponent, nullptr, "IsEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVCamComponent_IsEnabled_Statics::VCamComponent_eventIsEnabled_Parms), Z_Construct_UFunction_UVCamComponent_IsEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_IsEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVCamComponent_IsEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_IsEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVCamComponent_IsEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVCamComponent_IsEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVCamComponent_RegisterObjectForInput_Statics
	{
		struct VCamComponent_eventRegisterObjectForInput_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVCamComponent_RegisterObjectForInput_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamComponent_eventRegisterObjectForInput_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVCamComponent_RegisterObjectForInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_RegisterObjectForInput_Statics::NewProp_Object,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamComponent_RegisterObjectForInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera" },
		{ "Comment", "/**\n\x09 * Registers the given object with the VCamComponent's Input Component\n\x09 * This allows dynamic input bindings such as input events in blueprints to work correctly\n\x09 * Note: Ensure you call UnregisterObjectForInput when you are finished with the object\n\x09 * otherwise input events will still fire until GC actually destroys the object\n\x09 *\n\x09 * @param Object The object to register\n\x09 */" },
		{ "ModuleRelativePath", "Public/VCamComponent.h" },
		{ "ToolTip", "Registers the given object with the VCamComponent's Input Component\nThis allows dynamic input bindings such as input events in blueprints to work correctly\nNote: Ensure you call UnregisterObjectForInput when you are finished with the object\notherwise input events will still fire until GC actually destroys the object\n\n@param Object The object to register" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVCamComponent_RegisterObjectForInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamComponent, nullptr, "RegisterObjectForInput", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVCamComponent_RegisterObjectForInput_Statics::VCamComponent_eventRegisterObjectForInput_Parms), Z_Construct_UFunction_UVCamComponent_RegisterObjectForInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_RegisterObjectForInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVCamComponent_RegisterObjectForInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_RegisterObjectForInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVCamComponent_RegisterObjectForInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVCamComponent_RegisterObjectForInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVCamComponent_RemoveAllModifiers_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamComponent_RemoveAllModifiers_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera" },
		{ "Comment", "/** Remove all Modifiers from the Stack. */" },
		{ "ModuleRelativePath", "Public/VCamComponent.h" },
		{ "ToolTip", "Remove all Modifiers from the Stack." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVCamComponent_RemoveAllModifiers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamComponent, nullptr, "RemoveAllModifiers", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVCamComponent_RemoveAllModifiers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_RemoveAllModifiers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVCamComponent_RemoveAllModifiers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVCamComponent_RemoveAllModifiers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVCamComponent_RemoveAllOutputProviders_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamComponent_RemoveAllOutputProviders_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera" },
		{ "ModuleRelativePath", "Public/VCamComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVCamComponent_RemoveAllOutputProviders_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamComponent, nullptr, "RemoveAllOutputProviders", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVCamComponent_RemoveAllOutputProviders_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_RemoveAllOutputProviders_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVCamComponent_RemoveAllOutputProviders()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVCamComponent_RemoveAllOutputProviders_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVCamComponent_RemoveModifier_Statics
	{
		struct VCamComponent_eventRemoveModifier_Parms
		{
			const UVCamModifier* Modifier;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Modifier_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Modifier;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamComponent_RemoveModifier_Statics::NewProp_Modifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVCamComponent_RemoveModifier_Statics::NewProp_Modifier = { "Modifier", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamComponent_eventRemoveModifier_Parms, Modifier), Z_Construct_UClass_UVCamModifier_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVCamComponent_RemoveModifier_Statics::NewProp_Modifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_RemoveModifier_Statics::NewProp_Modifier_MetaData)) };
	void Z_Construct_UFunction_UVCamComponent_RemoveModifier_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VCamComponent_eventRemoveModifier_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVCamComponent_RemoveModifier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VCamComponent_eventRemoveModifier_Parms), &Z_Construct_UFunction_UVCamComponent_RemoveModifier_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVCamComponent_RemoveModifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_RemoveModifier_Statics::NewProp_Modifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_RemoveModifier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamComponent_RemoveModifier_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera" },
		{ "Comment", "/** @return Whether the modifier was removed successfully */" },
		{ "ModuleRelativePath", "Public/VCamComponent.h" },
		{ "ToolTip", "@return Whether the modifier was removed successfully" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVCamComponent_RemoveModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamComponent, nullptr, "RemoveModifier", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVCamComponent_RemoveModifier_Statics::VCamComponent_eventRemoveModifier_Parms), Z_Construct_UFunction_UVCamComponent_RemoveModifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_RemoveModifier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVCamComponent_RemoveModifier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_RemoveModifier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVCamComponent_RemoveModifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVCamComponent_RemoveModifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVCamComponent_RemoveModifierByIndex_Statics
	{
		struct VCamComponent_eventRemoveModifierByIndex_Parms
		{
			int32 ModifierIndex;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModifierIndex_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ModifierIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamComponent_RemoveModifierByIndex_Statics::NewProp_ModifierIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UVCamComponent_RemoveModifierByIndex_Statics::NewProp_ModifierIndex = { "ModifierIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamComponent_eventRemoveModifierByIndex_Parms, ModifierIndex), METADATA_PARAMS(Z_Construct_UFunction_UVCamComponent_RemoveModifierByIndex_Statics::NewProp_ModifierIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_RemoveModifierByIndex_Statics::NewProp_ModifierIndex_MetaData)) };
	void Z_Construct_UFunction_UVCamComponent_RemoveModifierByIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VCamComponent_eventRemoveModifierByIndex_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVCamComponent_RemoveModifierByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VCamComponent_eventRemoveModifierByIndex_Parms), &Z_Construct_UFunction_UVCamComponent_RemoveModifierByIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVCamComponent_RemoveModifierByIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_RemoveModifierByIndex_Statics::NewProp_ModifierIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_RemoveModifierByIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamComponent_RemoveModifierByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera" },
		{ "Comment", "/** @return Whether the modifier was removed successfully */" },
		{ "ModuleRelativePath", "Public/VCamComponent.h" },
		{ "ToolTip", "@return Whether the modifier was removed successfully" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVCamComponent_RemoveModifierByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamComponent, nullptr, "RemoveModifierByIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVCamComponent_RemoveModifierByIndex_Statics::VCamComponent_eventRemoveModifierByIndex_Parms), Z_Construct_UFunction_UVCamComponent_RemoveModifierByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_RemoveModifierByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVCamComponent_RemoveModifierByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_RemoveModifierByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVCamComponent_RemoveModifierByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVCamComponent_RemoveModifierByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVCamComponent_RemoveModifierByName_Statics
	{
		struct VCamComponent_eventRemoveModifierByName_Parms
		{
			FName Name;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamComponent_RemoveModifierByName_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVCamComponent_RemoveModifierByName_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamComponent_eventRemoveModifierByName_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UVCamComponent_RemoveModifierByName_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_RemoveModifierByName_Statics::NewProp_Name_MetaData)) };
	void Z_Construct_UFunction_UVCamComponent_RemoveModifierByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VCamComponent_eventRemoveModifierByName_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVCamComponent_RemoveModifierByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VCamComponent_eventRemoveModifierByName_Parms), &Z_Construct_UFunction_UVCamComponent_RemoveModifierByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVCamComponent_RemoveModifierByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_RemoveModifierByName_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_RemoveModifierByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamComponent_RemoveModifierByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera" },
		{ "Comment", "/** @return Whether the modifier was removed successfully. */" },
		{ "ModuleRelativePath", "Public/VCamComponent.h" },
		{ "ToolTip", "@return Whether the modifier was removed successfully." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVCamComponent_RemoveModifierByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamComponent, nullptr, "RemoveModifierByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVCamComponent_RemoveModifierByName_Statics::VCamComponent_eventRemoveModifierByName_Parms), Z_Construct_UFunction_UVCamComponent_RemoveModifierByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_RemoveModifierByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVCamComponent_RemoveModifierByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_RemoveModifierByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVCamComponent_RemoveModifierByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVCamComponent_RemoveModifierByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVCamComponent_RemoveOutputProvider_Statics
	{
		struct VCamComponent_eventRemoveOutputProvider_Parms
		{
			const UVCamOutputProviderBase* Provider;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Provider_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Provider;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamComponent_RemoveOutputProvider_Statics::NewProp_Provider_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVCamComponent_RemoveOutputProvider_Statics::NewProp_Provider = { "Provider", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamComponent_eventRemoveOutputProvider_Parms, Provider), Z_Construct_UClass_UVCamOutputProviderBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVCamComponent_RemoveOutputProvider_Statics::NewProp_Provider_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_RemoveOutputProvider_Statics::NewProp_Provider_MetaData)) };
	void Z_Construct_UFunction_UVCamComponent_RemoveOutputProvider_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VCamComponent_eventRemoveOutputProvider_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVCamComponent_RemoveOutputProvider_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VCamComponent_eventRemoveOutputProvider_Parms), &Z_Construct_UFunction_UVCamComponent_RemoveOutputProvider_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVCamComponent_RemoveOutputProvider_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_RemoveOutputProvider_Statics::NewProp_Provider,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_RemoveOutputProvider_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamComponent_RemoveOutputProvider_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera" },
		{ "ModuleRelativePath", "Public/VCamComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVCamComponent_RemoveOutputProvider_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamComponent, nullptr, "RemoveOutputProvider", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVCamComponent_RemoveOutputProvider_Statics::VCamComponent_eventRemoveOutputProvider_Parms), Z_Construct_UFunction_UVCamComponent_RemoveOutputProvider_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_RemoveOutputProvider_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVCamComponent_RemoveOutputProvider_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_RemoveOutputProvider_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVCamComponent_RemoveOutputProvider()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVCamComponent_RemoveOutputProvider_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVCamComponent_RemoveOutputProviderByIndex_Statics
	{
		struct VCamComponent_eventRemoveOutputProviderByIndex_Parms
		{
			int32 ProviderIndex;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProviderIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ProviderIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamComponent_RemoveOutputProviderByIndex_Statics::NewProp_ProviderIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVCamComponent_RemoveOutputProviderByIndex_Statics::NewProp_ProviderIndex = { "ProviderIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamComponent_eventRemoveOutputProviderByIndex_Parms, ProviderIndex), METADATA_PARAMS(Z_Construct_UFunction_UVCamComponent_RemoveOutputProviderByIndex_Statics::NewProp_ProviderIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_RemoveOutputProviderByIndex_Statics::NewProp_ProviderIndex_MetaData)) };
	void Z_Construct_UFunction_UVCamComponent_RemoveOutputProviderByIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VCamComponent_eventRemoveOutputProviderByIndex_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVCamComponent_RemoveOutputProviderByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VCamComponent_eventRemoveOutputProviderByIndex_Parms), &Z_Construct_UFunction_UVCamComponent_RemoveOutputProviderByIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVCamComponent_RemoveOutputProviderByIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_RemoveOutputProviderByIndex_Statics::NewProp_ProviderIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_RemoveOutputProviderByIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamComponent_RemoveOutputProviderByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera" },
		{ "ModuleRelativePath", "Public/VCamComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVCamComponent_RemoveOutputProviderByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamComponent, nullptr, "RemoveOutputProviderByIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVCamComponent_RemoveOutputProviderByIndex_Statics::VCamComponent_eventRemoveOutputProviderByIndex_Parms), Z_Construct_UFunction_UVCamComponent_RemoveOutputProviderByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_RemoveOutputProviderByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVCamComponent_RemoveOutputProviderByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_RemoveOutputProviderByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVCamComponent_RemoveOutputProviderByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVCamComponent_RemoveOutputProviderByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVCamComponent_SaveCurrentInputProfileToSettings_Statics
	{
		struct VCamComponent_eventSaveCurrentInputProfileToSettings_Parms
		{
			FName ProfileName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProfileName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ProfileName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamComponent_SaveCurrentInputProfileToSettings_Statics::NewProp_ProfileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVCamComponent_SaveCurrentInputProfileToSettings_Statics::NewProp_ProfileName = { "ProfileName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamComponent_eventSaveCurrentInputProfileToSettings_Parms, ProfileName), METADATA_PARAMS(Z_Construct_UFunction_UVCamComponent_SaveCurrentInputProfileToSettings_Statics::NewProp_ProfileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_SaveCurrentInputProfileToSettings_Statics::NewProp_ProfileName_MetaData)) };
	void Z_Construct_UFunction_UVCamComponent_SaveCurrentInputProfileToSettings_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VCamComponent_eventSaveCurrentInputProfileToSettings_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVCamComponent_SaveCurrentInputProfileToSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VCamComponent_eventSaveCurrentInputProfileToSettings_Parms), &Z_Construct_UFunction_UVCamComponent_SaveCurrentInputProfileToSettings_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVCamComponent_SaveCurrentInputProfileToSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_SaveCurrentInputProfileToSettings_Statics::NewProp_ProfileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_SaveCurrentInputProfileToSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamComponent_SaveCurrentInputProfileToSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "VCam Input" },
		{ "Comment", "// Saves the current input profile settings to the VCam Input Settings using the provided Profile Name\n" },
		{ "ModuleRelativePath", "Public/VCamComponent.h" },
		{ "ReturnDisplayName", "Success" },
		{ "ToolTip", "Saves the current input profile settings to the VCam Input Settings using the provided Profile Name" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVCamComponent_SaveCurrentInputProfileToSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamComponent, nullptr, "SaveCurrentInputProfileToSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVCamComponent_SaveCurrentInputProfileToSettings_Statics::VCamComponent_eventSaveCurrentInputProfileToSettings_Parms), Z_Construct_UFunction_UVCamComponent_SaveCurrentInputProfileToSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_SaveCurrentInputProfileToSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVCamComponent_SaveCurrentInputProfileToSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_SaveCurrentInputProfileToSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVCamComponent_SaveCurrentInputProfileToSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVCamComponent_SaveCurrentInputProfileToSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVCamComponent_SetDisableComponentWhenSpawnedBySequencer_Statics
	{
		struct VCamComponent_eventSetDisableComponentWhenSpawnedBySequencer_Parms
		{
			bool bValue;
		};
		static void NewProp_bValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVCamComponent_SetDisableComponentWhenSpawnedBySequencer_Statics::NewProp_bValue_SetBit(void* Obj)
	{
		((VCamComponent_eventSetDisableComponentWhenSpawnedBySequencer_Parms*)Obj)->bValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVCamComponent_SetDisableComponentWhenSpawnedBySequencer_Statics::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VCamComponent_eventSetDisableComponentWhenSpawnedBySequencer_Parms), &Z_Construct_UFunction_UVCamComponent_SetDisableComponentWhenSpawnedBySequencer_Statics::NewProp_bValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVCamComponent_SetDisableComponentWhenSpawnedBySequencer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_SetDisableComponentWhenSpawnedBySequencer_Statics::NewProp_bValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamComponent_SetDisableComponentWhenSpawnedBySequencer_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera" },
		{ "ModuleRelativePath", "Public/VCamComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVCamComponent_SetDisableComponentWhenSpawnedBySequencer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamComponent, nullptr, "SetDisableComponentWhenSpawnedBySequencer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVCamComponent_SetDisableComponentWhenSpawnedBySequencer_Statics::VCamComponent_eventSetDisableComponentWhenSpawnedBySequencer_Parms), Z_Construct_UFunction_UVCamComponent_SetDisableComponentWhenSpawnedBySequencer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_SetDisableComponentWhenSpawnedBySequencer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVCamComponent_SetDisableComponentWhenSpawnedBySequencer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_SetDisableComponentWhenSpawnedBySequencer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVCamComponent_SetDisableComponentWhenSpawnedBySequencer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVCamComponent_SetDisableComponentWhenSpawnedBySequencer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVCamComponent_SetDisableOutputOnMultiUserReceiver_Statics
	{
		struct VCamComponent_eventSetDisableOutputOnMultiUserReceiver_Parms
		{
			bool bValue;
		};
		static void NewProp_bValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVCamComponent_SetDisableOutputOnMultiUserReceiver_Statics::NewProp_bValue_SetBit(void* Obj)
	{
		((VCamComponent_eventSetDisableOutputOnMultiUserReceiver_Parms*)Obj)->bValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVCamComponent_SetDisableOutputOnMultiUserReceiver_Statics::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VCamComponent_eventSetDisableOutputOnMultiUserReceiver_Parms), &Z_Construct_UFunction_UVCamComponent_SetDisableOutputOnMultiUserReceiver_Statics::NewProp_bValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVCamComponent_SetDisableOutputOnMultiUserReceiver_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_SetDisableOutputOnMultiUserReceiver_Statics::NewProp_bValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamComponent_SetDisableOutputOnMultiUserReceiver_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera" },
		{ "ModuleRelativePath", "Public/VCamComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVCamComponent_SetDisableOutputOnMultiUserReceiver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamComponent, nullptr, "SetDisableOutputOnMultiUserReceiver", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVCamComponent_SetDisableOutputOnMultiUserReceiver_Statics::VCamComponent_eventSetDisableOutputOnMultiUserReceiver_Parms), Z_Construct_UFunction_UVCamComponent_SetDisableOutputOnMultiUserReceiver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_SetDisableOutputOnMultiUserReceiver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVCamComponent_SetDisableOutputOnMultiUserReceiver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_SetDisableOutputOnMultiUserReceiver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVCamComponent_SetDisableOutputOnMultiUserReceiver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVCamComponent_SetDisableOutputOnMultiUserReceiver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVCamComponent_SetEnabled_Statics
	{
		struct VCamComponent_eventSetEnabled_Parms
		{
			bool bNewEnabled;
		};
		static void NewProp_bNewEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVCamComponent_SetEnabled_Statics::NewProp_bNewEnabled_SetBit(void* Obj)
	{
		((VCamComponent_eventSetEnabled_Parms*)Obj)->bNewEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVCamComponent_SetEnabled_Statics::NewProp_bNewEnabled = { "bNewEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VCamComponent_eventSetEnabled_Parms), &Z_Construct_UFunction_UVCamComponent_SetEnabled_Statics::NewProp_bNewEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVCamComponent_SetEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_SetEnabled_Statics::NewProp_bNewEnabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamComponent_SetEnabled_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Comment", "/** Sets whether the VCamComponent will update every frame */" },
		{ "ModuleRelativePath", "Public/VCamComponent.h" },
		{ "ToolTip", "Sets whether the VCamComponent will update every frame" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVCamComponent_SetEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamComponent, nullptr, "SetEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVCamComponent_SetEnabled_Statics::VCamComponent_eventSetEnabled_Parms), Z_Construct_UFunction_UVCamComponent_SetEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_SetEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVCamComponent_SetEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_SetEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVCamComponent_SetEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVCamComponent_SetEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVCamComponent_SetInputDeviceSettings_Statics
	{
		struct VCamComponent_eventSetInputDeviceSettings_Parms
		{
			FVCamInputDeviceConfig NewInputProfile;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewInputProfile_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewInputProfile;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamComponent_SetInputDeviceSettings_Statics::NewProp_NewInputProfile_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVCamComponent_SetInputDeviceSettings_Statics::NewProp_NewInputProfile = { "NewInputProfile", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamComponent_eventSetInputDeviceSettings_Parms, NewInputProfile), Z_Construct_UScriptStruct_FVCamInputDeviceConfig, METADATA_PARAMS(Z_Construct_UFunction_UVCamComponent_SetInputDeviceSettings_Statics::NewProp_NewInputProfile_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_SetInputDeviceSettings_Statics::NewProp_NewInputProfile_MetaData)) }; // 855388532
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVCamComponent_SetInputDeviceSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_SetInputDeviceSettings_Statics::NewProp_NewInputProfile,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamComponent_SetInputDeviceSettings_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Category", "VirtualCamera" },
		{ "Comment", "/** Propagates devices settings all the way to the player input. Causes input to be filtered / consumed differently. */" },
		{ "ModuleRelativePath", "Public/VCamComponent.h" },
		{ "ToolTip", "Propagates devices settings all the way to the player input. Causes input to be filtered / consumed differently." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVCamComponent_SetInputDeviceSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamComponent, nullptr, "SetInputDeviceSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVCamComponent_SetInputDeviceSettings_Statics::VCamComponent_eventSetInputDeviceSettings_Parms), Z_Construct_UFunction_UVCamComponent_SetInputDeviceSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_SetInputDeviceSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVCamComponent_SetInputDeviceSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_SetInputDeviceSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVCamComponent_SetInputDeviceSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVCamComponent_SetInputDeviceSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVCamComponent_SetInputProfile_Statics
	{
		struct VCamComponent_eventSetInputProfile_Parms
		{
			FVCamInputProfile NewInputProfile;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewInputProfile_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewInputProfile;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamComponent_SetInputProfile_Statics::NewProp_NewInputProfile_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVCamComponent_SetInputProfile_Statics::NewProp_NewInputProfile = { "NewInputProfile", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamComponent_eventSetInputProfile_Parms, NewInputProfile), Z_Construct_UScriptStruct_FVCamInputProfile, METADATA_PARAMS(Z_Construct_UFunction_UVCamComponent_SetInputProfile_Statics::NewProp_NewInputProfile_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_SetInputProfile_Statics::NewProp_NewInputProfile_MetaData)) }; // 2324690633
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVCamComponent_SetInputProfile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_SetInputProfile_Statics::NewProp_NewInputProfile,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamComponent_SetInputProfile_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Category", "VirtualCamera" },
		{ "ModuleRelativePath", "Public/VCamComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVCamComponent_SetInputProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamComponent, nullptr, "SetInputProfile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVCamComponent_SetInputProfile_Statics::VCamComponent_eventSetInputProfile_Parms), Z_Construct_UFunction_UVCamComponent_SetInputProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_SetInputProfile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVCamComponent_SetInputProfile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_SetInputProfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVCamComponent_SetInputProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVCamComponent_SetInputProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVCamComponent_SetInputProfileFromName_Statics
	{
		struct VCamComponent_eventSetInputProfileFromName_Parms
		{
			FName ProfileName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProfileName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ProfileName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamComponent_SetInputProfileFromName_Statics::NewProp_ProfileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVCamComponent_SetInputProfileFromName_Statics::NewProp_ProfileName = { "ProfileName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamComponent_eventSetInputProfileFromName_Parms, ProfileName), METADATA_PARAMS(Z_Construct_UFunction_UVCamComponent_SetInputProfileFromName_Statics::NewProp_ProfileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_SetInputProfileFromName_Statics::NewProp_ProfileName_MetaData)) };
	void Z_Construct_UFunction_UVCamComponent_SetInputProfileFromName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VCamComponent_eventSetInputProfileFromName_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVCamComponent_SetInputProfileFromName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VCamComponent_eventSetInputProfileFromName_Parms), &Z_Construct_UFunction_UVCamComponent_SetInputProfileFromName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVCamComponent_SetInputProfileFromName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_SetInputProfileFromName_Statics::NewProp_ProfileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_SetInputProfileFromName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamComponent_SetInputProfileFromName_Statics::Function_MetaDataParams[] = {
		{ "Category", "VCam Input" },
		{ "Comment", "/**\n\x09 * Attempts to apply key mapping settings from an input profile defined in VCam Input Settings\n\x09 * Returns whether the profile was found and able to be applied\n\x09 */" },
		{ "ModuleRelativePath", "Public/VCamComponent.h" },
		{ "ToolTip", "Attempts to apply key mapping settings from an input profile defined in VCam Input Settings\nReturns whether the profile was found and able to be applied" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVCamComponent_SetInputProfileFromName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamComponent, nullptr, "SetInputProfileFromName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVCamComponent_SetInputProfileFromName_Statics::VCamComponent_eventSetInputProfileFromName_Parms), Z_Construct_UFunction_UVCamComponent_SetInputProfileFromName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_SetInputProfileFromName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVCamComponent_SetInputProfileFromName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_SetInputProfileFromName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVCamComponent_SetInputProfileFromName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVCamComponent_SetInputProfileFromName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVCamComponent_SetLiveLinkSubobject_Statics
	{
		struct VCamComponent_eventSetLiveLinkSubobject_Parms
		{
			FLiveLinkSubjectName Value;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVCamComponent_SetLiveLinkSubobject_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamComponent_eventSetLiveLinkSubobject_Parms, Value), Z_Construct_UScriptStruct_FLiveLinkSubjectName, METADATA_PARAMS(nullptr, 0) }; // 930695248
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVCamComponent_SetLiveLinkSubobject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_SetLiveLinkSubobject_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamComponent_SetLiveLinkSubobject_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera" },
		{ "ModuleRelativePath", "Public/VCamComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVCamComponent_SetLiveLinkSubobject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamComponent, nullptr, "SetLiveLinkSubobject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVCamComponent_SetLiveLinkSubobject_Statics::VCamComponent_eventSetLiveLinkSubobject_Parms), Z_Construct_UFunction_UVCamComponent_SetLiveLinkSubobject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_SetLiveLinkSubobject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVCamComponent_SetLiveLinkSubobject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_SetLiveLinkSubobject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVCamComponent_SetLiveLinkSubobject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVCamComponent_SetLiveLinkSubobject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVCamComponent_SetModifierContextClass_Statics
	{
		struct VCamComponent_eventSetModifierContextClass_Parms
		{
			TSubclassOf<UVCamModifierContext>  ContextClass;
			UVCamModifierContext* CreatedContext;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContextClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ContextClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CreatedContext;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamComponent_SetModifierContextClass_Statics::NewProp_ContextClass_MetaData[] = {
		{ "AllowAbstract", "false" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UVCamComponent_SetModifierContextClass_Statics::NewProp_ContextClass = { "ContextClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamComponent_eventSetModifierContextClass_Parms, ContextClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UVCamModifierContext_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVCamComponent_SetModifierContextClass_Statics::NewProp_ContextClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_SetModifierContextClass_Statics::NewProp_ContextClass_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVCamComponent_SetModifierContextClass_Statics::NewProp_CreatedContext = { "CreatedContext", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamComponent_eventSetModifierContextClass_Parms, CreatedContext), Z_Construct_UClass_UVCamModifierContext_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVCamComponent_SetModifierContextClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_SetModifierContextClass_Statics::NewProp_ContextClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_SetModifierContextClass_Statics::NewProp_CreatedContext,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamComponent_SetModifierContextClass_Statics::Function_MetaDataParams[] = {
		{ "AllowAbstract", "false" },
		{ "Category", "VirtualCamera" },
		{ "Comment", "/**\n\x09 * Sets the Modifier Context to a new instance of the provided class\n\x09 * @param ContextClass The Class to create the context from\n\x09 * @param CreatedContext The created Context, can be invalid if Context Class was None\n\x09 */" },
		{ "DeterminesOutputType", "ContextClass" },
		{ "DynamicOutputParam", "CreatedContext" },
		{ "ModuleRelativePath", "Public/VCamComponent.h" },
		{ "ToolTip", "Sets the Modifier Context to a new instance of the provided class\n@param ContextClass The Class to create the context from\n@param CreatedContext The created Context, can be invalid if Context Class was None" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVCamComponent_SetModifierContextClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamComponent, nullptr, "SetModifierContextClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVCamComponent_SetModifierContextClass_Statics::VCamComponent_eventSetModifierContextClass_Parms), Z_Construct_UFunction_UVCamComponent_SetModifierContextClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_SetModifierContextClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVCamComponent_SetModifierContextClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_SetModifierContextClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVCamComponent_SetModifierContextClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVCamComponent_SetModifierContextClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVCamComponent_SetModifierIndex_Statics
	{
		struct VCamComponent_eventSetModifierIndex_Parms
		{
			int32 OriginalIndex;
			int32 NewIndex;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_OriginalIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVCamComponent_SetModifierIndex_Statics::NewProp_OriginalIndex = { "OriginalIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamComponent_eventSetModifierIndex_Parms, OriginalIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVCamComponent_SetModifierIndex_Statics::NewProp_NewIndex = { "NewIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamComponent_eventSetModifierIndex_Parms, NewIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVCamComponent_SetModifierIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VCamComponent_eventSetModifierIndex_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVCamComponent_SetModifierIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VCamComponent_eventSetModifierIndex_Parms), &Z_Construct_UFunction_UVCamComponent_SetModifierIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVCamComponent_SetModifierIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_SetModifierIndex_Statics::NewProp_OriginalIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_SetModifierIndex_Statics::NewProp_NewIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_SetModifierIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamComponent_SetModifierIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera" },
		{ "Comment", "// Moves an existing modifier in the stack from its current index to a new index\n" },
		{ "ModuleRelativePath", "Public/VCamComponent.h" },
		{ "ReturnDisplayName", "Success" },
		{ "ToolTip", "Moves an existing modifier in the stack from its current index to a new index" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVCamComponent_SetModifierIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamComponent, nullptr, "SetModifierIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVCamComponent_SetModifierIndex_Statics::VCamComponent_eventSetModifierIndex_Parms), Z_Construct_UFunction_UVCamComponent_SetModifierIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_SetModifierIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVCamComponent_SetModifierIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_SetModifierIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVCamComponent_SetModifierIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVCamComponent_SetModifierIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVCamComponent_SetOutputProviderIndex_Statics
	{
		struct VCamComponent_eventSetOutputProviderIndex_Parms
		{
			int32 OriginalIndex;
			int32 NewIndex;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_OriginalIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVCamComponent_SetOutputProviderIndex_Statics::NewProp_OriginalIndex = { "OriginalIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamComponent_eventSetOutputProviderIndex_Parms, OriginalIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVCamComponent_SetOutputProviderIndex_Statics::NewProp_NewIndex = { "NewIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamComponent_eventSetOutputProviderIndex_Parms, NewIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVCamComponent_SetOutputProviderIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VCamComponent_eventSetOutputProviderIndex_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVCamComponent_SetOutputProviderIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VCamComponent_eventSetOutputProviderIndex_Parms), &Z_Construct_UFunction_UVCamComponent_SetOutputProviderIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVCamComponent_SetOutputProviderIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_SetOutputProviderIndex_Statics::NewProp_OriginalIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_SetOutputProviderIndex_Statics::NewProp_NewIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_SetOutputProviderIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamComponent_SetOutputProviderIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera" },
		{ "Comment", "// Moves an existing Output Provider in the stack from its current index to a new index\n" },
		{ "ModuleRelativePath", "Public/VCamComponent.h" },
		{ "ReturnDisplayName", "Success" },
		{ "ToolTip", "Moves an existing Output Provider in the stack from its current index to a new index" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVCamComponent_SetOutputProviderIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamComponent, nullptr, "SetOutputProviderIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVCamComponent_SetOutputProviderIndex_Statics::VCamComponent_eventSetOutputProviderIndex_Parms), Z_Construct_UFunction_UVCamComponent_SetOutputProviderIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_SetOutputProviderIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVCamComponent_SetOutputProviderIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_SetOutputProviderIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVCamComponent_SetOutputProviderIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVCamComponent_SetOutputProviderIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVCamComponent_SetRole_Statics
	{
		struct VCamComponent_eventSetRole_Parms
		{
			FGameplayTag Value;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVCamComponent_SetRole_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamComponent_eventSetRole_Parms, Value), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVCamComponent_SetRole_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_SetRole_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamComponent_SetRole_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera" },
		{ "ModuleRelativePath", "Public/VCamComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVCamComponent_SetRole_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamComponent, nullptr, "SetRole", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVCamComponent_SetRole_Statics::VCamComponent_eventSetRole_Parms), Z_Construct_UFunction_UVCamComponent_SetRole_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_SetRole_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVCamComponent_SetRole_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_SetRole_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVCamComponent_SetRole()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVCamComponent_SetRole_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVCamComponent_UnregisterObjectForInput_Statics
	{
		struct VCamComponent_eventUnregisterObjectForInput_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVCamComponent_UnregisterObjectForInput_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamComponent_eventUnregisterObjectForInput_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVCamComponent_UnregisterObjectForInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamComponent_UnregisterObjectForInput_Statics::NewProp_Object,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamComponent_UnregisterObjectForInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera" },
		{ "Comment", "/**\n\x09 * Unregisters the given object with the VCamComponent's Input Component\n\x09 *\n\x09 * @param Object The object to unregister\n\x09 */" },
		{ "ModuleRelativePath", "Public/VCamComponent.h" },
		{ "ToolTip", "Unregisters the given object with the VCamComponent's Input Component\n\n@param Object The object to unregister" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVCamComponent_UnregisterObjectForInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamComponent, nullptr, "UnregisterObjectForInput", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVCamComponent_UnregisterObjectForInput_Statics::VCamComponent_eventUnregisterObjectForInput_Parms), Z_Construct_UFunction_UVCamComponent_UnregisterObjectForInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_UnregisterObjectForInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVCamComponent_UnregisterObjectForInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamComponent_UnregisterObjectForInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVCamComponent_UnregisterObjectForInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVCamComponent_UnregisterObjectForInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVCamComponent);
	UClass* Z_Construct_UClass_UVCamComponent_NoRegister()
	{
		return UVCamComponent::StaticClass();
	}
	struct Z_Construct_UClass_UVCamComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnComponentReplaced_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnComponentReplaced;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Role_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Role;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LiveLinkSubject_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LiveLinkSubject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLockViewportToCamera_MetaData[];
#endif
		static void NewProp_bLockViewportToCamera_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLockViewportToCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewportLocker_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ViewportLocker;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisableComponentWhenSpawnedBySequencer_MetaData[];
#endif
		static void NewProp_bDisableComponentWhenSpawnedBySequencer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableComponentWhenSpawnedBySequencer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisableOutputOnMultiUserReceiver_MetaData[];
#endif
		static void NewProp_bDisableOutputOnMultiUserReceiver_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableOutputOnMultiUserReceiver;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpdateFrequencyMs_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UpdateFrequencyMs;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TargetViewport_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetViewport_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TargetViewport;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputProfile_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputProfile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputDeviceSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputDeviceSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputProviders_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OutputProviders_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputProviders_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutputProviders;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModifierContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ModifierContext;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ModifierStack_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModifierStack_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ModifierStack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InputComponent;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AppliedInputContexts_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AppliedInputContexts_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AppliedInputContexts;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVCamComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VCamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVCamComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVCamComponent_AddInputProfileWithCurrentlyActiveMappings, "AddInputProfileWithCurrentlyActiveMappings" }, // 1309256430
		{ &Z_Construct_UFunction_UVCamComponent_AddModifier, "AddModifier" }, // 1445195510
		{ &Z_Construct_UFunction_UVCamComponent_AddOutputProvider, "AddOutputProvider" }, // 1784489898
		{ &Z_Construct_UFunction_UVCamComponent_GetAllModifierNames, "GetAllModifierNames" }, // 3376135183
		{ &Z_Construct_UFunction_UVCamComponent_GetAllModifiers, "GetAllModifiers" }, // 1264268960
		{ &Z_Construct_UFunction_UVCamComponent_GetAllOutputProviders, "GetAllOutputProviders" }, // 3502536324
		{ &Z_Construct_UFunction_UVCamComponent_GetAllPlayerMappableActionKeyMappings, "GetAllPlayerMappableActionKeyMappings" }, // 811784053
		{ &Z_Construct_UFunction_UVCamComponent_GetDisableComponentWhenSpawnedBySequencer, "GetDisableComponentWhenSpawnedBySequencer" }, // 2526920951
		{ &Z_Construct_UFunction_UVCamComponent_GetDisableOutputOnMultiUserReceiver, "GetDisableOutputOnMultiUserReceiver" }, // 4141352150
		{ &Z_Construct_UFunction_UVCamComponent_GetInputDeviceSettings, "GetInputDeviceSettings" }, // 3925927298
		{ &Z_Construct_UFunction_UVCamComponent_GetInputProfile, "GetInputProfile" }, // 3514692011
		{ &Z_Construct_UFunction_UVCamComponent_GetInputVCamSubsystem, "GetInputVCamSubsystem" }, // 3404156273
		{ &Z_Construct_UFunction_UVCamComponent_GetLiveLinkDataForCurrentFrame, "GetLiveLinkDataForCurrentFrame" }, // 4031303311
		{ &Z_Construct_UFunction_UVCamComponent_GetLiveLinkSubobject, "GetLiveLinkSubobject" }, // 2476315767
		{ &Z_Construct_UFunction_UVCamComponent_GetModifierByIndex, "GetModifierByIndex" }, // 529087625
		{ &Z_Construct_UFunction_UVCamComponent_GetModifierByName, "GetModifierByName" }, // 461493560
		{ &Z_Construct_UFunction_UVCamComponent_GetModifierContext, "GetModifierContext" }, // 1000756718
		{ &Z_Construct_UFunction_UVCamComponent_GetModifiersByClass, "GetModifiersByClass" }, // 3528929685
		{ &Z_Construct_UFunction_UVCamComponent_GetModifiersByInterface, "GetModifiersByInterface" }, // 1396114155
		{ &Z_Construct_UFunction_UVCamComponent_GetNumberOfModifiers, "GetNumberOfModifiers" }, // 1441992101
		{ &Z_Construct_UFunction_UVCamComponent_GetNumberOfOutputProviders, "GetNumberOfOutputProviders" }, // 1930973893
		{ &Z_Construct_UFunction_UVCamComponent_GetOutputProviderByIndex, "GetOutputProviderByIndex" }, // 2873732744
		{ &Z_Construct_UFunction_UVCamComponent_GetOutputProvidersByClass, "GetOutputProvidersByClass" }, // 2208607594
		{ &Z_Construct_UFunction_UVCamComponent_GetPlayerMappableKeys, "GetPlayerMappableKeys" }, // 235254647
		{ &Z_Construct_UFunction_UVCamComponent_GetPlayerMappedKey, "GetPlayerMappedKey" }, // 1921616402
		{ &Z_Construct_UFunction_UVCamComponent_GetRole, "GetRole" }, // 2628731160
		{ &Z_Construct_UFunction_UVCamComponent_GetSubsystemArray, "GetSubsystemArray" }, // 2233927282
		{ &Z_Construct_UFunction_UVCamComponent_GetTargetCamera, "GetTargetCamera" }, // 545995121
		{ &Z_Construct_UFunction_UVCamComponent_HandleObjectReplaced, "HandleObjectReplaced" }, // 3522153470
		{ &Z_Construct_UFunction_UVCamComponent_InjectInputForAction, "InjectInputForAction" }, // 259026024
		{ &Z_Construct_UFunction_UVCamComponent_InjectInputVectorForAction, "InjectInputVectorForAction" }, // 502114328
		{ &Z_Construct_UFunction_UVCamComponent_InsertModifier, "InsertModifier" }, // 2156042235
		{ &Z_Construct_UFunction_UVCamComponent_InsertOutputProvider, "InsertOutputProvider" }, // 2980595464
		{ &Z_Construct_UFunction_UVCamComponent_IsEnabled, "IsEnabled" }, // 3719041672
		{ &Z_Construct_UFunction_UVCamComponent_RegisterObjectForInput, "RegisterObjectForInput" }, // 3501153318
		{ &Z_Construct_UFunction_UVCamComponent_RemoveAllModifiers, "RemoveAllModifiers" }, // 3743488749
		{ &Z_Construct_UFunction_UVCamComponent_RemoveAllOutputProviders, "RemoveAllOutputProviders" }, // 606798184
		{ &Z_Construct_UFunction_UVCamComponent_RemoveModifier, "RemoveModifier" }, // 1748758103
		{ &Z_Construct_UFunction_UVCamComponent_RemoveModifierByIndex, "RemoveModifierByIndex" }, // 3595340168
		{ &Z_Construct_UFunction_UVCamComponent_RemoveModifierByName, "RemoveModifierByName" }, // 799852904
		{ &Z_Construct_UFunction_UVCamComponent_RemoveOutputProvider, "RemoveOutputProvider" }, // 1481107568
		{ &Z_Construct_UFunction_UVCamComponent_RemoveOutputProviderByIndex, "RemoveOutputProviderByIndex" }, // 1559887828
		{ &Z_Construct_UFunction_UVCamComponent_SaveCurrentInputProfileToSettings, "SaveCurrentInputProfileToSettings" }, // 2563042897
		{ &Z_Construct_UFunction_UVCamComponent_SetDisableComponentWhenSpawnedBySequencer, "SetDisableComponentWhenSpawnedBySequencer" }, // 1233421705
		{ &Z_Construct_UFunction_UVCamComponent_SetDisableOutputOnMultiUserReceiver, "SetDisableOutputOnMultiUserReceiver" }, // 842771826
		{ &Z_Construct_UFunction_UVCamComponent_SetEnabled, "SetEnabled" }, // 226556629
		{ &Z_Construct_UFunction_UVCamComponent_SetInputDeviceSettings, "SetInputDeviceSettings" }, // 1230649926
		{ &Z_Construct_UFunction_UVCamComponent_SetInputProfile, "SetInputProfile" }, // 4216448366
		{ &Z_Construct_UFunction_UVCamComponent_SetInputProfileFromName, "SetInputProfileFromName" }, // 3927242858
		{ &Z_Construct_UFunction_UVCamComponent_SetLiveLinkSubobject, "SetLiveLinkSubobject" }, // 3263268057
		{ &Z_Construct_UFunction_UVCamComponent_SetModifierContextClass, "SetModifierContextClass" }, // 920389521
		{ &Z_Construct_UFunction_UVCamComponent_SetModifierIndex, "SetModifierIndex" }, // 128406091
		{ &Z_Construct_UFunction_UVCamComponent_SetOutputProviderIndex, "SetOutputProviderIndex" }, // 138019110
		{ &Z_Construct_UFunction_UVCamComponent_SetRole, "SetRole" }, // 538531594
		{ &Z_Construct_UFunction_UVCamComponent_UnregisterObjectForInput, "UnregisterObjectForInput" }, // 2222357385
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "VCam" },
		{ "Comment", "/**\n * Provides a modular system for editing a UCineCameraComponent using user widgets.\n * This component must be attached as a direct child of UCineCameraComponent.\n *\n * This component implements a Model-View-Controller architecture where modifiers are the model, output providers the view, and\n * this component the controller.\n *\n * There are three aspects to this component:\n * - Modifiers implement logic for changing properties on the UCineCameraComponent. Modifiers contain ConnectionPoints.\n *   ConnectionPoints can optionally expose UInputActions (Enhanced Input) that can be invoked by widgets.\n * - Output providers create and render widgets (possibly streaming them). Usually output providers create UVCamWidgets, which\n *   are special widgets that can connect to ConnectionPoints. Widgets interact with modifiers in two ways:\n *     - Simple: trigger input actions that modifiers are subscribed to and expose via connections.\n *     - Advanced: query whether modifiers implement certain custom defined interfaces.\n *       UVCamWidget Connections can be configured with required and optional interfaces.\n * - UVCamSubsystems exist for as long as a UVCamComponent is enabled (this is comparable to ULocalPlayerSubsystem).\n *   One notable such system is the UInputVCamSubsystem which allows UVCamComponents to bind to input devices similarly to how\n *   APlayerControllers do in shipped games.\n */" },
		{ "HideCategories", "Mobility Trigger PhysicsVolume" },
		{ "IncludePath", "VCamComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VCamComponent.h" },
		{ "ToolTip", "Provides a modular system for editing a UCineCameraComponent using user widgets.\nThis component must be attached as a direct child of UCineCameraComponent.\n\nThis component implements a Model-View-Controller architecture where modifiers are the model, output providers the view, and\nthis component the controller.\n\nThere are three aspects to this component:\n- Modifiers implement logic for changing properties on the UCineCameraComponent. Modifiers contain ConnectionPoints.\n  ConnectionPoints can optionally expose UInputActions (Enhanced Input) that can be invoked by widgets.\n- Output providers create and render widgets (possibly streaming them). Usually output providers create UVCamWidgets, which\n  are special widgets that can connect to ConnectionPoints. Widgets interact with modifiers in two ways:\n    - Simple: trigger input actions that modifiers are subscribed to and expose via connections.\n    - Advanced: query whether modifiers implement certain custom defined interfaces.\n      UVCamWidget Connections can be configured with required and optional interfaces.\n- UVCamSubsystems exist for as long as a UVCamComponent is enabled (this is comparable to ULocalPlayerSubsystem).\n  One notable such system is the UInputVCamSubsystem which allows UVCamComponents to bind to input devices similarly to how\n  APlayerControllers do in shipped games." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamComponent_Statics::NewProp_OnComponentReplaced_MetaData[] = {
		{ "Category", "VirtualCamera" },
		{ "Comment", "/**\n\x09 * There are situations in the editor where the component may be replaced by another component as part of the actor being reconstructed\n\x09 * This event will notify you of that change and give you a reference to the new component.\n\x09 * Bindings will be copied to the new component so you do not need to rebind this event\n\x09 * \n\x09 * Note: When the component is replaced you will need to get all properties on the component again such as Modifiers and Output Providers\n\x09 */" },
		{ "ModuleRelativePath", "Public/VCamComponent.h" },
		{ "ToolTip", "There are situations in the editor where the component may be replaced by another component as part of the actor being reconstructed\nThis event will notify you of that change and give you a reference to the new component.\nBindings will be copied to the new component so you do not need to rebind this event\n\nNote: When the component is replaced you will need to get all properties on the component again such as Modifiers and Output Providers" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVCamComponent_Statics::NewProp_OnComponentReplaced = { "OnComponentReplaced", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVCamComponent, OnComponentReplaced), Z_Construct_UDelegateFunction_VCamCore_OnComponentReplaced__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UVCamComponent_Statics::NewProp_OnComponentReplaced_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVCamComponent_Statics::NewProp_OnComponentReplaced_MetaData)) }; // 3150342928
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamComponent_Statics::NewProp_bEnabled_MetaData[] = {
		{ "BlueprintGetter", "IsEnabled" },
		{ "BlueprintSetter", "SetEnabled" },
		{ "Category", "VirtualCamera" },
		{ "Comment", "/** Whether the VCamComponent will update every frame */" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Public/VCamComponent.h" },
		{ "ToolTip", "Whether the VCamComponent will update every frame" },
	};
#endif
	void Z_Construct_UClass_UVCamComponent_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((UVCamComponent*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVCamComponent_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVCamComponent), &Z_Construct_UClass_UVCamComponent_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVCamComponent_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVCamComponent_Statics::NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamComponent_Statics::NewProp_Role_MetaData[] = {
		{ "BlueprintGetter", "GetRole" },
		{ "BlueprintSetter", "SetRole" },
		{ "Category", "VirtualCamera" },
		{ "Comment", "/**\n\x09 * The role of this virtual camera.  If this value is set and the corresponding tag set on the editor matches this value, then this\n\x09 * camera is the sender and the authority in the case when connected to a multi-user session.\n\x09 */" },
		{ "DisplayPriority", "2" },
		{ "ModuleRelativePath", "Public/VCamComponent.h" },
		{ "ToolTip", "The role of this virtual camera.  If this value is set and the corresponding tag set on the editor matches this value, then this\ncamera is the sender and the authority in the case when connected to a multi-user session." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVCamComponent_Statics::NewProp_Role = { "Role", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVCamComponent, Role), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_UVCamComponent_Statics::NewProp_Role_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVCamComponent_Statics::NewProp_Role_MetaData)) }; // 1225434376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamComponent_Statics::NewProp_LiveLinkSubject_MetaData[] = {
		{ "BlueprintGetter", "GetLiveLinkSubobject" },
		{ "BlueprintSetter", "SetLiveLinkSubobject" },
		{ "Category", "VirtualCamera" },
		{ "Comment", "/** LiveLink subject name for the incoming camera transform */" },
		{ "DisplayPriority", "3" },
		{ "ModuleRelativePath", "Public/VCamComponent.h" },
		{ "ToolTip", "LiveLink subject name for the incoming camera transform" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVCamComponent_Statics::NewProp_LiveLinkSubject = { "LiveLinkSubject", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVCamComponent, LiveLinkSubject), Z_Construct_UScriptStruct_FLiveLinkSubjectName, METADATA_PARAMS(Z_Construct_UClass_UVCamComponent_Statics::NewProp_LiveLinkSubject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVCamComponent_Statics::NewProp_LiveLinkSubject_MetaData)) }; // 930695248
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamComponent_Statics::NewProp_bLockViewportToCamera_MetaData[] = {
		{ "Comment", "/**\n\x09 * If true, render the viewport from the point of view of the parented CineCamera\n\x09 * \n\x09 * This was moved to UVCamOutputProvider::TargetViewport.\n\x09 * See FVCamCoreCustomVersion::MoveTargetViewportFromComponentToOutput.\n\x09 */" },
		{ "ModuleRelativePath", "Public/VCamComponent.h" },
		{ "ToolTip", "If true, render the viewport from the point of view of the parented CineCamera\n\nThis was moved to UVCamOutputProvider::TargetViewport.\nSee FVCamCoreCustomVersion::MoveTargetViewportFromComponentToOutput." },
	};
#endif
	void Z_Construct_UClass_UVCamComponent_Statics::NewProp_bLockViewportToCamera_SetBit(void* Obj)
	{
		((UVCamComponent*)Obj)->bLockViewportToCamera_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVCamComponent_Statics::NewProp_bLockViewportToCamera = { "bLockViewportToCamera", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVCamComponent), &Z_Construct_UClass_UVCamComponent_Statics::NewProp_bLockViewportToCamera_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVCamComponent_Statics::NewProp_bLockViewportToCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVCamComponent_Statics::NewProp_bLockViewportToCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamComponent_Statics::NewProp_ViewportLocker_MetaData[] = {
		{ "Category", "VirtualCamera" },
		{ "Comment", "/** Sync with output providers keeping track of which viewports are locked. */" },
		{ "DisplayPriority", "4" },
		{ "ModuleRelativePath", "Public/VCamComponent.h" },
		{ "ToolTip", "Sync with output providers keeping track of which viewports are locked." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVCamComponent_Statics::NewProp_ViewportLocker = { "ViewportLocker", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVCamComponent, ViewportLocker), Z_Construct_UScriptStruct_FVCamViewportLocker, METADATA_PARAMS(Z_Construct_UClass_UVCamComponent_Statics::NewProp_ViewportLocker_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVCamComponent_Statics::NewProp_ViewportLocker_MetaData)) }; // 2391681586
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamComponent_Statics::NewProp_bDisableComponentWhenSpawnedBySequencer_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "BlueprintGetter", "GetDisableComponentWhenSpawnedBySequencer" },
		{ "BlueprintSetter", "SetDisableComponentWhenSpawnedBySequencer" },
		{ "Category", "VirtualCamera" },
		{ "Comment", "/** If true, the component will force bEnabled to false when it is part of a spawnable in Sequencer */" },
		{ "DisplayPriority", "5" },
		{ "ModuleRelativePath", "Public/VCamComponent.h" },
		{ "ToolTip", "If true, the component will force bEnabled to false when it is part of a spawnable in Sequencer" },
	};
#endif
	void Z_Construct_UClass_UVCamComponent_Statics::NewProp_bDisableComponentWhenSpawnedBySequencer_SetBit(void* Obj)
	{
		((UVCamComponent*)Obj)->bDisableComponentWhenSpawnedBySequencer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVCamComponent_Statics::NewProp_bDisableComponentWhenSpawnedBySequencer = { "bDisableComponentWhenSpawnedBySequencer", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVCamComponent), &Z_Construct_UClass_UVCamComponent_Statics::NewProp_bDisableComponentWhenSpawnedBySequencer_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVCamComponent_Statics::NewProp_bDisableComponentWhenSpawnedBySequencer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVCamComponent_Statics::NewProp_bDisableComponentWhenSpawnedBySequencer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamComponent_Statics::NewProp_bDisableOutputOnMultiUserReceiver_MetaData[] = {
		{ "BlueprintGetter", "GetDisableOutputOnMultiUserReceiver" },
		{ "BlueprintSetter", "SetDisableOutputOnMultiUserReceiver" },
		{ "Category", "VirtualCamera" },
		{ "Comment", "/** Do we disable the output if the virtual camera is in a Multi-user session and the camera is a \"receiver\" from multi-user */" },
		{ "DisplayPriority", "6" },
		{ "ModuleRelativePath", "Public/VCamComponent.h" },
		{ "ToolTip", "Do we disable the output if the virtual camera is in a Multi-user session and the camera is a \"receiver\" from multi-user" },
	};
#endif
	void Z_Construct_UClass_UVCamComponent_Statics::NewProp_bDisableOutputOnMultiUserReceiver_SetBit(void* Obj)
	{
		((UVCamComponent*)Obj)->bDisableOutputOnMultiUserReceiver = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVCamComponent_Statics::NewProp_bDisableOutputOnMultiUserReceiver = { "bDisableOutputOnMultiUserReceiver", nullptr, (EPropertyFlags)0x0040040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVCamComponent), &Z_Construct_UClass_UVCamComponent_Statics::NewProp_bDisableOutputOnMultiUserReceiver_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVCamComponent_Statics::NewProp_bDisableOutputOnMultiUserReceiver_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVCamComponent_Statics::NewProp_bDisableOutputOnMultiUserReceiver_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamComponent_Statics::NewProp_UpdateFrequencyMs_MetaData[] = {
		{ "Category", "VirtualCamera" },
		{ "ClampMin", "11.0" },
		{ "Comment", "/**\n\x09 * Indicates the frequency which camera updates are sent when in Multi-user mode. This has a minimum value of\n\x09 * 11ms. Using values below 30ms is discouraged. When higher refresh rates are needed consider using LiveLink\n\x09 * rebroadcast to stream camera data.\n\x09 */" },
		{ "DisplayName", "Update Frequencey" },
		{ "ForceUnits", "ms" },
		{ "ModuleRelativePath", "Public/VCamComponent.h" },
		{ "ToolTip", "Indicates the frequency which camera updates are sent when in Multi-user mode. This has a minimum value of\n11ms. Using values below 30ms is discouraged. When higher refresh rates are needed consider using LiveLink\nrebroadcast to stream camera data." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVCamComponent_Statics::NewProp_UpdateFrequencyMs = { "UpdateFrequencyMs", nullptr, (EPropertyFlags)0x0040040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVCamComponent, UpdateFrequencyMs), METADATA_PARAMS(Z_Construct_UClass_UVCamComponent_Statics::NewProp_UpdateFrequencyMs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVCamComponent_Statics::NewProp_UpdateFrequencyMs_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVCamComponent_Statics::NewProp_TargetViewport_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamComponent_Statics::NewProp_TargetViewport_MetaData[] = {
		{ "Comment", "/**\n\x09 * Which viewport to use for this VCam.\n\x09 * \n\x09 * This was moved to UVCamOutputProvider::TargetViewport.\n\x09 * See FVCamCoreCustomVersion::MoveTargetViewportFromComponentToOutput.\n\x09 */" },
		{ "ModuleRelativePath", "Public/VCamComponent.h" },
		{ "ToolTip", "Which viewport to use for this VCam.\n\nThis was moved to UVCamOutputProvider::TargetViewport.\nSee FVCamCoreCustomVersion::MoveTargetViewportFromComponentToOutput." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVCamComponent_Statics::NewProp_TargetViewport = { "TargetViewport", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVCamComponent, TargetViewport_DEPRECATED), Z_Construct_UEnum_VCamCore_EVCamTargetViewportID, METADATA_PARAMS(Z_Construct_UClass_UVCamComponent_Statics::NewProp_TargetViewport_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVCamComponent_Statics::NewProp_TargetViewport_MetaData)) }; // 2513585238
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamComponent_Statics::NewProp_InputProfile_MetaData[] = {
		{ "BlueprintGetter", "GetInputProfile" },
		{ "BlueprintSetter", "SetInputProfile" },
		{ "Category", "VirtualCamera" },
		{ "ModuleRelativePath", "Public/VCamComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVCamComponent_Statics::NewProp_InputProfile = { "InputProfile", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVCamComponent, InputProfile), Z_Construct_UScriptStruct_FVCamInputProfile, METADATA_PARAMS(Z_Construct_UClass_UVCamComponent_Statics::NewProp_InputProfile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVCamComponent_Statics::NewProp_InputProfile_MetaData)) }; // 2324690633
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamComponent_Statics::NewProp_InputDeviceSettings_MetaData[] = {
		{ "BlueprintGetter", "GetInputDeviceSettings" },
		{ "BlueprintSetter", "SetInputDeviceSettings" },
		{ "Category", "VirtualCamera" },
		{ "ModuleRelativePath", "Public/VCamComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVCamComponent_Statics::NewProp_InputDeviceSettings = { "InputDeviceSettings", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVCamComponent, InputDeviceSettings), Z_Construct_UScriptStruct_FVCamInputDeviceConfig, METADATA_PARAMS(Z_Construct_UClass_UVCamComponent_Statics::NewProp_InputDeviceSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVCamComponent_Statics::NewProp_InputDeviceSettings_MetaData)) }; // 855388532
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamComponent_Statics::NewProp_OutputProviders_Inner_MetaData[] = {
		{ "Category", "VirtualCamera" },
		{ "Comment", "/** List of Output Providers (executed in order) */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VCamComponent.h" },
		{ "ToolTip", "List of Output Providers (executed in order)" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVCamComponent_Statics::NewProp_OutputProviders_Inner = { "OutputProviders", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UVCamOutputProviderBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVCamComponent_Statics::NewProp_OutputProviders_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVCamComponent_Statics::NewProp_OutputProviders_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamComponent_Statics::NewProp_OutputProviders_MetaData[] = {
		{ "Category", "VirtualCamera" },
		{ "Comment", "/** List of Output Providers (executed in order) */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VCamComponent.h" },
		{ "ToolTip", "List of Output Providers (executed in order)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVCamComponent_Statics::NewProp_OutputProviders = { "OutputProviders", nullptr, (EPropertyFlags)0x0044008000000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVCamComponent, OutputProviders), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVCamComponent_Statics::NewProp_OutputProviders_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVCamComponent_Statics::NewProp_OutputProviders_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamComponent_Statics::NewProp_ModifierContext_MetaData[] = {
		{ "Category", "VirtualCamera" },
		{ "Comment", "/** Modifier Context object that can be accessed by the Modifier Stack */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VCamComponent.h" },
		{ "ToolTip", "Modifier Context object that can be accessed by the Modifier Stack" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVCamComponent_Statics::NewProp_ModifierContext = { "ModifierContext", nullptr, (EPropertyFlags)0x0046000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVCamComponent, ModifierContext), Z_Construct_UClass_UVCamModifierContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVCamComponent_Statics::NewProp_ModifierContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVCamComponent_Statics::NewProp_ModifierContext_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVCamComponent_Statics::NewProp_ModifierStack_Inner = { "ModifierStack", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FModifierStackEntry, METADATA_PARAMS(nullptr, 0) }; // 2588913161
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamComponent_Statics::NewProp_ModifierStack_MetaData[] = {
		{ "Category", "VirtualCamera" },
		{ "Comment", "/** List of Modifiers (executed in order) */" },
		{ "ModuleRelativePath", "Public/VCamComponent.h" },
		{ "ToolTip", "List of Modifiers (executed in order)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVCamComponent_Statics::NewProp_ModifierStack = { "ModifierStack", nullptr, (EPropertyFlags)0x0040008000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVCamComponent, ModifierStack), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVCamComponent_Statics::NewProp_ModifierStack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVCamComponent_Statics::NewProp_ModifierStack_MetaData)) }; // 2588913161
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamComponent_Statics::NewProp_InputComponent_MetaData[] = {
		{ "Comment", "/**\n\x09 * From Ben H: Mark this as Transient/DuplicateTransient so that it is saved on the BP CDO and nowhere else and \n\x09 * handled correctly during duplication operations (copy/paste etc)\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VCamComponent.h" },
		{ "ToolTip", "From Ben H: Mark this as Transient/DuplicateTransient so that it is saved on the BP CDO and nowhere else and\nhandled correctly during duplication operations (copy/paste etc)" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVCamComponent_Statics::NewProp_InputComponent = { "InputComponent", nullptr, (EPropertyFlags)0x0044000000282008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVCamComponent, InputComponent), Z_Construct_UClass_UInputComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVCamComponent_Statics::NewProp_InputComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVCamComponent_Statics::NewProp_InputComponent_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVCamComponent_Statics::NewProp_AppliedInputContexts_Inner = { "AppliedInputContexts", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamComponent_Statics::NewProp_AppliedInputContexts_MetaData[] = {
		{ "Comment", "/** Store the Input Mapping Contexts that have been added via this component */" },
		{ "ModuleRelativePath", "Public/VCamComponent.h" },
		{ "ToolTip", "Store the Input Mapping Contexts that have been added via this component" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVCamComponent_Statics::NewProp_AppliedInputContexts = { "AppliedInputContexts", nullptr, (EPropertyFlags)0x0044000000202000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVCamComponent, AppliedInputContexts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVCamComponent_Statics::NewProp_AppliedInputContexts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVCamComponent_Statics::NewProp_AppliedInputContexts_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVCamComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVCamComponent_Statics::NewProp_OnComponentReplaced,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVCamComponent_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVCamComponent_Statics::NewProp_Role,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVCamComponent_Statics::NewProp_LiveLinkSubject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVCamComponent_Statics::NewProp_bLockViewportToCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVCamComponent_Statics::NewProp_ViewportLocker,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVCamComponent_Statics::NewProp_bDisableComponentWhenSpawnedBySequencer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVCamComponent_Statics::NewProp_bDisableOutputOnMultiUserReceiver,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVCamComponent_Statics::NewProp_UpdateFrequencyMs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVCamComponent_Statics::NewProp_TargetViewport_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVCamComponent_Statics::NewProp_TargetViewport,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVCamComponent_Statics::NewProp_InputProfile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVCamComponent_Statics::NewProp_InputDeviceSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVCamComponent_Statics::NewProp_OutputProviders_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVCamComponent_Statics::NewProp_OutputProviders,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVCamComponent_Statics::NewProp_ModifierContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVCamComponent_Statics::NewProp_ModifierStack_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVCamComponent_Statics::NewProp_ModifierStack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVCamComponent_Statics::NewProp_InputComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVCamComponent_Statics::NewProp_AppliedInputContexts_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVCamComponent_Statics::NewProp_AppliedInputContexts,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVCamComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVCamComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVCamComponent_Statics::ClassParams = {
		&UVCamComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVCamComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVCamComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVCamComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVCamComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVCamComponent()
	{
		if (!Z_Registration_Info_UClass_UVCamComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVCamComponent.OuterSingleton, Z_Construct_UClass_UVCamComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVCamComponent.OuterSingleton;
	}
	template<> VCAMCORE_API UClass* StaticClass<UVCamComponent>()
	{
		return UVCamComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVCamComponent);
	UVCamComponent::~UVCamComponent() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UVCamComponent)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_VCamComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_VCamComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVCamComponent, UVCamComponent::StaticClass, TEXT("UVCamComponent"), &Z_Registration_Info_UClass_UVCamComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVCamComponent), 1857471835U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_VCamComponent_h_2488954957(TEXT("/Script/VCamCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_VCamComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_VCamComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
