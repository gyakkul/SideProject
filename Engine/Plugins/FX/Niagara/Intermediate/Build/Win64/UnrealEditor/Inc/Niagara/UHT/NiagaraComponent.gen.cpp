// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/NiagaraComponent.h"
#include "../Public/NiagaraTypes.h"
#include "../Public/NiagaraUserRedirectionParameterStore.h"
#include "../Public/NiagaraVariant.h"
#include "Serialization/StructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraComponent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMatrix();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UFXSystemComponent();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAttachmentRule();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraCullProxyComponent_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSimCache_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraAgeUpdateMode();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraTickBehavior();
	NIAGARA_API UFunction* Z_Construct_UDelegateFunction_Niagara_OnNiagaraSystemFinished__DelegateSignature();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraUserRedirectionParameterStore();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariableBase();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariant();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Niagara_OnNiagaraSystemFinished__DelegateSignature_Statics
	{
		struct _Script_Niagara_eventOnNiagaraSystemFinished_Parms
		{
			UNiagaraComponent* PSystem;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PSystem;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Niagara_OnNiagaraSystemFinished__DelegateSignature_Statics::NewProp_PSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Niagara_OnNiagaraSystemFinished__DelegateSignature_Statics::NewProp_PSystem = { "PSystem", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Niagara_eventOnNiagaraSystemFinished_Parms, PSystem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_Niagara_OnNiagaraSystemFinished__DelegateSignature_Statics::NewProp_PSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Niagara_OnNiagaraSystemFinished__DelegateSignature_Statics::NewProp_PSystem_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Niagara_OnNiagaraSystemFinished__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Niagara_OnNiagaraSystemFinished__DelegateSignature_Statics::NewProp_PSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Niagara_OnNiagaraSystemFinished__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Called when the particle system is done\n" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Called when the particle system is done" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Niagara_OnNiagaraSystemFinished__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Niagara, nullptr, "OnNiagaraSystemFinished__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Niagara_OnNiagaraSystemFinished__DelegateSignature_Statics::_Script_Niagara_eventOnNiagaraSystemFinished_Parms), Z_Construct_UDelegateFunction_Niagara_OnNiagaraSystemFinished__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Niagara_OnNiagaraSystemFinished__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Niagara_OnNiagaraSystemFinished__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Niagara_OnNiagaraSystemFinished__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Niagara_OnNiagaraSystemFinished__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Niagara_OnNiagaraSystemFinished__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnNiagaraSystemFinished_DelegateWrapper(const FMulticastScriptDelegate& OnNiagaraSystemFinished, UNiagaraComponent* PSystem)
{
	struct _Script_Niagara_eventOnNiagaraSystemFinished_Parms
	{
		UNiagaraComponent* PSystem;
	};
	_Script_Niagara_eventOnNiagaraSystemFinished_Parms Parms;
	Parms.PSystem=PSystem;
	OnNiagaraSystemFinished.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UNiagaraComponent::execGetForceLocalPlayerEffect)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetForceLocalPlayerEffect();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execSetForceLocalPlayerEffect)
	{
		P_GET_UBOOL(Z_Param_bIsPlayerEffect);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetForceLocalPlayerEffect(Z_Param_bIsPlayerEffect);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execGetAllowScalability)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetAllowScalability();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execSetAllowScalability)
	{
		P_GET_UBOOL(Z_Param_bAllow);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAllowScalability(Z_Param_bAllow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execClearSimCache)
	{
		P_GET_UBOOL(Z_Param_bResetSystem);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearSimCache(Z_Param_bResetSystem);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execGetSimCache)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UNiagaraSimCache**)Z_Param__Result=P_THIS->GetSimCache();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execSetSimCache)
	{
		P_GET_OBJECT(UNiagaraSimCache,Z_Param_SimCache);
		P_GET_UBOOL(Z_Param_bResetSystem);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSimCache(Z_Param_SimCache,Z_Param_bResetSystem);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execInitForPerformanceBaseline)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitForPerformanceBaseline();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execGetPreviewLODDistance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPreviewLODDistance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execGetPreviewLODDistanceEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetPreviewLODDistanceEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execSetPreviewLODDistance)
	{
		P_GET_UBOOL(Z_Param_bEnablePreviewLODDistance);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PreviewLODDistance);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PreviewMaxDistance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPreviewLODDistance(Z_Param_bEnablePreviewLODDistance,Z_Param_PreviewLODDistance,Z_Param_PreviewMaxDistance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execGetDataInterface)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UNiagaraDataInterface**)Z_Param__Result=P_THIS->GetDataInterface(Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execIsPaused)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPaused();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execSetPaused)
	{
		P_GET_UBOOL(Z_Param_bInPaused);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPaused(Z_Param_bInPaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execAdvanceSimulationByTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_SimulateTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TickDeltaSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AdvanceSimulationByTime(Z_Param_SimulateTime,Z_Param_TickDeltaSeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execAdvanceSimulation)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_TickCount);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TickDeltaSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AdvanceSimulation(Z_Param_TickCount,Z_Param_TickDeltaSeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execSetRenderingEnabled)
	{
		P_GET_UBOOL(Z_Param_bInRenderingEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRenderingEnabled(Z_Param_bInRenderingEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execReinitializeSystem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReinitializeSystem();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execResetSystem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetSystem();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execGetNiagaraParticleValueVec3_DebugOnly)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InEmitterName);
		P_GET_PROPERTY(FStrProperty,Z_Param_InValueName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector>*)Z_Param__Result=P_THIS->GetNiagaraParticleValueVec3_DebugOnly(Z_Param_InEmitterName,Z_Param_InValueName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execGetNiagaraParticleValues_DebugOnly)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InEmitterName);
		P_GET_PROPERTY(FStrProperty,Z_Param_InValueName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<float>*)Z_Param__Result=P_THIS->GetNiagaraParticleValues_DebugOnly(Z_Param_InEmitterName,Z_Param_InValueName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execGetNiagaraParticlePositions_DebugOnly)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InEmitterName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector>*)Z_Param__Result=P_THIS->GetNiagaraParticlePositions_DebugOnly(Z_Param_InEmitterName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execSetVariableTextureRenderTarget)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InVariableName);
		P_GET_OBJECT(UTextureRenderTarget,Z_Param_TextureRenderTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVariableTextureRenderTarget(Z_Param_InVariableName,Z_Param_TextureRenderTarget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execSetVariableTexture)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InVariableName);
		P_GET_OBJECT(UTexture,Z_Param_Texture);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVariableTexture(Z_Param_InVariableName,Z_Param_Texture);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execSetVariableStaticMesh)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InVariableName);
		P_GET_OBJECT(UStaticMesh,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVariableStaticMesh(Z_Param_InVariableName,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execSetVariableMaterial)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InVariableName);
		P_GET_OBJECT(UMaterialInterface,Z_Param_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVariableMaterial(Z_Param_InVariableName,Z_Param_Object);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execSetVariableObject)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InVariableName);
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVariableObject(Z_Param_InVariableName,Z_Param_Object);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execSetNiagaraVariableObject)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InVariableName);
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNiagaraVariableObject(Z_Param_InVariableName,Z_Param_Object);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execSetVariableActor)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InVariableName);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVariableActor(Z_Param_InVariableName,Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execSetNiagaraVariableActor)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InVariableName);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNiagaraVariableActor(Z_Param_InVariableName,Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execSetVariableBool)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InVariableName);
		P_GET_UBOOL(Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVariableBool(Z_Param_InVariableName,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execSetNiagaraVariableBool)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InVariableName);
		P_GET_UBOOL(Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNiagaraVariableBool(Z_Param_InVariableName,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execSetVariableInt)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InVariableName);
		P_GET_PROPERTY(FIntProperty,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVariableInt(Z_Param_InVariableName,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execSetNiagaraVariableInt)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InVariableName);
		P_GET_PROPERTY(FIntProperty,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNiagaraVariableInt(Z_Param_InVariableName,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execSetVariableFloat)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InVariableName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVariableFloat(Z_Param_InVariableName,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execSetNiagaraVariableFloat)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InVariableName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNiagaraVariableFloat(Z_Param_InVariableName,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execSetVariableVec2)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InVariableName);
		P_GET_STRUCT(FVector2D,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVariableVec2(Z_Param_InVariableName,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execSetNiagaraVariableVec2)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InVariableName);
		P_GET_STRUCT(FVector2D,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNiagaraVariableVec2(Z_Param_InVariableName,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execSetVariablePosition)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InVariableName);
		P_GET_STRUCT(FVector,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVariablePosition(Z_Param_InVariableName,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execSetNiagaraVariablePosition)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InVariableName);
		P_GET_STRUCT(FVector,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNiagaraVariablePosition(Z_Param_InVariableName,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execSetVariableVec3)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InVariableName);
		P_GET_STRUCT(FVector,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVariableVec3(Z_Param_InVariableName,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execSetNiagaraVariableVec3)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InVariableName);
		P_GET_STRUCT(FVector,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNiagaraVariableVec3(Z_Param_InVariableName,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execSetVariableMatrix)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InVariableName);
		P_GET_STRUCT_REF(FMatrix,Z_Param_Out_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVariableMatrix(Z_Param_InVariableName,Z_Param_Out_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execSetNiagaraVariableMatrix)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InVariableName);
		P_GET_STRUCT_REF(FMatrix,Z_Param_Out_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNiagaraVariableMatrix(Z_Param_InVariableName,Z_Param_Out_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execSetVariableQuat)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InVariableName);
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVariableQuat(Z_Param_InVariableName,Z_Param_Out_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execSetNiagaraVariableQuat)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InVariableName);
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNiagaraVariableQuat(Z_Param_InVariableName,Z_Param_Out_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execSetVariableVec4)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InVariableName);
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVariableVec4(Z_Param_InVariableName,Z_Param_Out_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execSetNiagaraVariableVec4)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InVariableName);
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNiagaraVariableVec4(Z_Param_InVariableName,Z_Param_Out_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execSetVariableLinearColor)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InVariableName);
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVariableLinearColor(Z_Param_InVariableName,Z_Param_Out_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execSetNiagaraVariableLinearColor)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InVariableName);
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNiagaraVariableLinearColor(Z_Param_InVariableName,Z_Param_Out_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execGetRandomSeedOffset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetRandomSeedOffset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execSetRandomSeedOffset)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewRandomSeedOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRandomSeedOffset(Z_Param_NewRandomSeedOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execClearEmitterFixedBounds)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_EmitterName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearEmitterFixedBounds(Z_Param_EmitterName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execGetEmitterFixedBounds)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_EmitterName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FBox*)Z_Param__Result=P_THIS->GetEmitterFixedBounds(Z_Param_EmitterName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execSetEmitterFixedBounds)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_EmitterName);
		P_GET_STRUCT(FBox,Z_Param_LocalBounds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEmitterFixedBounds(Z_Param_EmitterName,Z_Param_LocalBounds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execClearSystemFixedBounds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearSystemFixedBounds();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execGetSystemFixedBounds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FBox*)Z_Param__Result=P_THIS->GetSystemFixedBounds();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execSetSystemFixedBounds)
	{
		P_GET_STRUCT(FBox,Z_Param_LocalBounds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSystemFixedBounds(Z_Param_LocalBounds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execGetTickBehavior)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ENiagaraTickBehavior*)Z_Param__Result=P_THIS->GetTickBehavior();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execSetTickBehavior)
	{
		P_GET_ENUM(ENiagaraTickBehavior,Z_Param_NewTickBehavior);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTickBehavior(ENiagaraTickBehavior(Z_Param_NewTickBehavior));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execSetAutoDestroy)
	{
		P_GET_UBOOL(Z_Param_bInAutoDestroy);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAutoDestroy(Z_Param_bInAutoDestroy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execSetMaxSimTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InMaxTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaxSimTime(Z_Param_InMaxTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execGetMaxSimTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxSimTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execSetLockDesiredAgeDeltaTimeToSeekDelta)
	{
		P_GET_UBOOL(Z_Param_bLock);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLockDesiredAgeDeltaTimeToSeekDelta(Z_Param_bLock);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execGetLockDesiredAgeDeltaTimeToSeekDelta)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetLockDesiredAgeDeltaTimeToSeekDelta();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execSetSeekDelta)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InSeekDelta);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSeekDelta(Z_Param_InSeekDelta);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execGetSeekDelta)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSeekDelta();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execSetCanRenderWhileSeeking)
	{
		P_GET_UBOOL(Z_Param_bInCanRenderWhileSeeking);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCanRenderWhileSeeking(Z_Param_bInCanRenderWhileSeeking);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execSeekToDesiredAge)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InDesiredAge);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SeekToDesiredAge(Z_Param_InDesiredAge);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execSetDesiredAge)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InDesiredAge);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDesiredAge(Z_Param_InDesiredAge);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execGetDesiredAge)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetDesiredAge();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execSetAgeUpdateMode)
	{
		P_GET_ENUM(ENiagaraAgeUpdateMode,Z_Param_InAgeUpdateMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAgeUpdateMode(ENiagaraAgeUpdateMode(Z_Param_InAgeUpdateMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execGetAgeUpdateMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ENiagaraAgeUpdateMode*)Z_Param__Result=P_THIS->GetAgeUpdateMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execGetCustomTimeDilation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCustomTimeDilation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execSetCustomTimeDilation)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Dilation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCustomTimeDilation(Z_Param_Dilation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execSetGpuComputeDebug)
	{
		P_GET_UBOOL(Z_Param_bEnableDebug);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGpuComputeDebug(Z_Param_bEnableDebug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execGetForceSolo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetForceSolo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execSetForceSolo)
	{
		P_GET_UBOOL(Z_Param_bInForceSolo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetForceSolo(Z_Param_bInForceSolo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execGetAsset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UNiagaraSystem**)Z_Param__Result=P_THIS->GetAsset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraComponent::execSetAsset)
	{
		P_GET_OBJECT(UNiagaraSystem,Z_Param_InAsset);
		P_GET_UBOOL(Z_Param_bResetExistingOverrideParameters);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAsset(Z_Param_InAsset,Z_Param_bResetExistingOverrideParameters);
		P_NATIVE_END;
	}
	void UNiagaraComponent::StaticRegisterNativesUNiagaraComponent()
	{
		UClass* Class = UNiagaraComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AdvanceSimulation", &UNiagaraComponent::execAdvanceSimulation },
			{ "AdvanceSimulationByTime", &UNiagaraComponent::execAdvanceSimulationByTime },
			{ "ClearEmitterFixedBounds", &UNiagaraComponent::execClearEmitterFixedBounds },
			{ "ClearSimCache", &UNiagaraComponent::execClearSimCache },
			{ "ClearSystemFixedBounds", &UNiagaraComponent::execClearSystemFixedBounds },
			{ "GetAgeUpdateMode", &UNiagaraComponent::execGetAgeUpdateMode },
			{ "GetAllowScalability", &UNiagaraComponent::execGetAllowScalability },
			{ "GetAsset", &UNiagaraComponent::execGetAsset },
			{ "GetCustomTimeDilation", &UNiagaraComponent::execGetCustomTimeDilation },
			{ "GetDataInterface", &UNiagaraComponent::execGetDataInterface },
			{ "GetDesiredAge", &UNiagaraComponent::execGetDesiredAge },
			{ "GetEmitterFixedBounds", &UNiagaraComponent::execGetEmitterFixedBounds },
			{ "GetForceLocalPlayerEffect", &UNiagaraComponent::execGetForceLocalPlayerEffect },
			{ "GetForceSolo", &UNiagaraComponent::execGetForceSolo },
			{ "GetLockDesiredAgeDeltaTimeToSeekDelta", &UNiagaraComponent::execGetLockDesiredAgeDeltaTimeToSeekDelta },
			{ "GetMaxSimTime", &UNiagaraComponent::execGetMaxSimTime },
			{ "GetNiagaraParticlePositions_DebugOnly", &UNiagaraComponent::execGetNiagaraParticlePositions_DebugOnly },
			{ "GetNiagaraParticleValues_DebugOnly", &UNiagaraComponent::execGetNiagaraParticleValues_DebugOnly },
			{ "GetNiagaraParticleValueVec3_DebugOnly", &UNiagaraComponent::execGetNiagaraParticleValueVec3_DebugOnly },
			{ "GetPreviewLODDistance", &UNiagaraComponent::execGetPreviewLODDistance },
			{ "GetPreviewLODDistanceEnabled", &UNiagaraComponent::execGetPreviewLODDistanceEnabled },
			{ "GetRandomSeedOffset", &UNiagaraComponent::execGetRandomSeedOffset },
			{ "GetSeekDelta", &UNiagaraComponent::execGetSeekDelta },
			{ "GetSimCache", &UNiagaraComponent::execGetSimCache },
			{ "GetSystemFixedBounds", &UNiagaraComponent::execGetSystemFixedBounds },
			{ "GetTickBehavior", &UNiagaraComponent::execGetTickBehavior },
			{ "InitForPerformanceBaseline", &UNiagaraComponent::execInitForPerformanceBaseline },
			{ "IsPaused", &UNiagaraComponent::execIsPaused },
			{ "ReinitializeSystem", &UNiagaraComponent::execReinitializeSystem },
			{ "ResetSystem", &UNiagaraComponent::execResetSystem },
			{ "SeekToDesiredAge", &UNiagaraComponent::execSeekToDesiredAge },
			{ "SetAgeUpdateMode", &UNiagaraComponent::execSetAgeUpdateMode },
			{ "SetAllowScalability", &UNiagaraComponent::execSetAllowScalability },
			{ "SetAsset", &UNiagaraComponent::execSetAsset },
			{ "SetAutoDestroy", &UNiagaraComponent::execSetAutoDestroy },
			{ "SetCanRenderWhileSeeking", &UNiagaraComponent::execSetCanRenderWhileSeeking },
			{ "SetCustomTimeDilation", &UNiagaraComponent::execSetCustomTimeDilation },
			{ "SetDesiredAge", &UNiagaraComponent::execSetDesiredAge },
			{ "SetEmitterFixedBounds", &UNiagaraComponent::execSetEmitterFixedBounds },
			{ "SetForceLocalPlayerEffect", &UNiagaraComponent::execSetForceLocalPlayerEffect },
			{ "SetForceSolo", &UNiagaraComponent::execSetForceSolo },
			{ "SetGpuComputeDebug", &UNiagaraComponent::execSetGpuComputeDebug },
			{ "SetLockDesiredAgeDeltaTimeToSeekDelta", &UNiagaraComponent::execSetLockDesiredAgeDeltaTimeToSeekDelta },
			{ "SetMaxSimTime", &UNiagaraComponent::execSetMaxSimTime },
			{ "SetNiagaraVariableActor", &UNiagaraComponent::execSetNiagaraVariableActor },
			{ "SetNiagaraVariableBool", &UNiagaraComponent::execSetNiagaraVariableBool },
			{ "SetNiagaraVariableFloat", &UNiagaraComponent::execSetNiagaraVariableFloat },
			{ "SetNiagaraVariableInt", &UNiagaraComponent::execSetNiagaraVariableInt },
			{ "SetNiagaraVariableLinearColor", &UNiagaraComponent::execSetNiagaraVariableLinearColor },
			{ "SetNiagaraVariableMatrix", &UNiagaraComponent::execSetNiagaraVariableMatrix },
			{ "SetNiagaraVariableObject", &UNiagaraComponent::execSetNiagaraVariableObject },
			{ "SetNiagaraVariablePosition", &UNiagaraComponent::execSetNiagaraVariablePosition },
			{ "SetNiagaraVariableQuat", &UNiagaraComponent::execSetNiagaraVariableQuat },
			{ "SetNiagaraVariableVec2", &UNiagaraComponent::execSetNiagaraVariableVec2 },
			{ "SetNiagaraVariableVec3", &UNiagaraComponent::execSetNiagaraVariableVec3 },
			{ "SetNiagaraVariableVec4", &UNiagaraComponent::execSetNiagaraVariableVec4 },
			{ "SetPaused", &UNiagaraComponent::execSetPaused },
			{ "SetPreviewLODDistance", &UNiagaraComponent::execSetPreviewLODDistance },
			{ "SetRandomSeedOffset", &UNiagaraComponent::execSetRandomSeedOffset },
			{ "SetRenderingEnabled", &UNiagaraComponent::execSetRenderingEnabled },
			{ "SetSeekDelta", &UNiagaraComponent::execSetSeekDelta },
			{ "SetSimCache", &UNiagaraComponent::execSetSimCache },
			{ "SetSystemFixedBounds", &UNiagaraComponent::execSetSystemFixedBounds },
			{ "SetTickBehavior", &UNiagaraComponent::execSetTickBehavior },
			{ "SetVariableActor", &UNiagaraComponent::execSetVariableActor },
			{ "SetVariableBool", &UNiagaraComponent::execSetVariableBool },
			{ "SetVariableFloat", &UNiagaraComponent::execSetVariableFloat },
			{ "SetVariableInt", &UNiagaraComponent::execSetVariableInt },
			{ "SetVariableLinearColor", &UNiagaraComponent::execSetVariableLinearColor },
			{ "SetVariableMaterial", &UNiagaraComponent::execSetVariableMaterial },
			{ "SetVariableMatrix", &UNiagaraComponent::execSetVariableMatrix },
			{ "SetVariableObject", &UNiagaraComponent::execSetVariableObject },
			{ "SetVariablePosition", &UNiagaraComponent::execSetVariablePosition },
			{ "SetVariableQuat", &UNiagaraComponent::execSetVariableQuat },
			{ "SetVariableStaticMesh", &UNiagaraComponent::execSetVariableStaticMesh },
			{ "SetVariableTexture", &UNiagaraComponent::execSetVariableTexture },
			{ "SetVariableTextureRenderTarget", &UNiagaraComponent::execSetVariableTextureRenderTarget },
			{ "SetVariableVec2", &UNiagaraComponent::execSetVariableVec2 },
			{ "SetVariableVec3", &UNiagaraComponent::execSetVariableVec3 },
			{ "SetVariableVec4", &UNiagaraComponent::execSetVariableVec4 },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNiagaraComponent_AdvanceSimulation_Statics
	{
		struct NiagaraComponent_eventAdvanceSimulation_Parms
		{
			int32 TickCount;
			float TickDeltaSeconds;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_TickCount;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TickDeltaSeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraComponent_AdvanceSimulation_Statics::NewProp_TickCount = { "TickCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraComponent_eventAdvanceSimulation_Parms, TickCount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNiagaraComponent_AdvanceSimulation_Statics::NewProp_TickDeltaSeconds = { "TickDeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraComponent_eventAdvanceSimulation_Parms, TickDeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_AdvanceSimulation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_AdvanceSimulation_Statics::NewProp_TickCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_AdvanceSimulation_Statics::NewProp_TickDeltaSeconds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_AdvanceSimulation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Advances this system's simulation by the specified number of ticks and delta time. */" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Advances this system's simulation by the specified number of ticks and delta time." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_AdvanceSimulation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "AdvanceSimulation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraComponent_AdvanceSimulation_Statics::NiagaraComponent_eventAdvanceSimulation_Parms), Z_Construct_UFunction_UNiagaraComponent_AdvanceSimulation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_AdvanceSimulation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_AdvanceSimulation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_AdvanceSimulation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_AdvanceSimulation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_AdvanceSimulation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_AdvanceSimulationByTime_Statics
	{
		struct NiagaraComponent_eventAdvanceSimulationByTime_Parms
		{
			float SimulateTime;
			float TickDeltaSeconds;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SimulateTime;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TickDeltaSeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNiagaraComponent_AdvanceSimulationByTime_Statics::NewProp_SimulateTime = { "SimulateTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraComponent_eventAdvanceSimulationByTime_Parms, SimulateTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNiagaraComponent_AdvanceSimulationByTime_Statics::NewProp_TickDeltaSeconds = { "TickDeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraComponent_eventAdvanceSimulationByTime_Parms, TickDeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_AdvanceSimulationByTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_AdvanceSimulationByTime_Statics::NewProp_SimulateTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_AdvanceSimulationByTime_Statics::NewProp_TickDeltaSeconds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_AdvanceSimulationByTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Advances this system's simulation by the specified time in seconds and delta time. Advancement is done in whole ticks of TickDeltaSeconds so actual simulated time will be the nearest lower multiple of TickDeltaSeconds. */" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Advances this system's simulation by the specified time in seconds and delta time. Advancement is done in whole ticks of TickDeltaSeconds so actual simulated time will be the nearest lower multiple of TickDeltaSeconds." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_AdvanceSimulationByTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "AdvanceSimulationByTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraComponent_AdvanceSimulationByTime_Statics::NiagaraComponent_eventAdvanceSimulationByTime_Parms), Z_Construct_UFunction_UNiagaraComponent_AdvanceSimulationByTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_AdvanceSimulationByTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_AdvanceSimulationByTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_AdvanceSimulationByTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_AdvanceSimulationByTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_AdvanceSimulationByTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_ClearEmitterFixedBounds_Statics
	{
		struct NiagaraComponent_eventClearEmitterFixedBounds_Parms
		{
			FName EmitterName;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_EmitterName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraComponent_ClearEmitterFixedBounds_Statics::NewProp_EmitterName = { "EmitterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraComponent_eventClearEmitterFixedBounds_Parms, EmitterName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_ClearEmitterFixedBounds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_ClearEmitterFixedBounds_Statics::NewProp_EmitterName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_ClearEmitterFixedBounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Clear any previously set fixed bounds for the emitter instance. */" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Clear any previously set fixed bounds for the emitter instance." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_ClearEmitterFixedBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "ClearEmitterFixedBounds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraComponent_ClearEmitterFixedBounds_Statics::NiagaraComponent_eventClearEmitterFixedBounds_Parms), Z_Construct_UFunction_UNiagaraComponent_ClearEmitterFixedBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_ClearEmitterFixedBounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_ClearEmitterFixedBounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_ClearEmitterFixedBounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_ClearEmitterFixedBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_ClearEmitterFixedBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_ClearSimCache_Statics
	{
		struct NiagaraComponent_eventClearSimCache_Parms
		{
			bool bResetSystem;
		};
		static void NewProp_bResetSystem_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetSystem;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UNiagaraComponent_ClearSimCache_Statics::NewProp_bResetSystem_SetBit(void* Obj)
	{
		((NiagaraComponent_eventClearSimCache_Parms*)Obj)->bResetSystem = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraComponent_ClearSimCache_Statics::NewProp_bResetSystem = { "bResetSystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NiagaraComponent_eventClearSimCache_Parms), &Z_Construct_UFunction_UNiagaraComponent_ClearSimCache_Statics::NewProp_bResetSystem_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_ClearSimCache_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_ClearSimCache_Statics::NewProp_bResetSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_ClearSimCache_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimCache" },
		{ "Comment", "/**\n\x09""Clear any active simulation cache.\n\x09When clearing a simulation cache that has been running you may wish to reset or continue, this option is only\n\x09valid when using a full simulation cache.  A renderer only cache will always reset as we can not continue the\n\x09simulation due to missing simulation data.\n\x09*/" },
		{ "CPP_Default_bResetSystem", "false" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Clear any active simulation cache.\nWhen clearing a simulation cache that has been running you may wish to reset or continue, this option is only\nvalid when using a full simulation cache.  A renderer only cache will always reset as we can not continue the\nsimulation due to missing simulation data." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_ClearSimCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "ClearSimCache", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraComponent_ClearSimCache_Statics::NiagaraComponent_eventClearSimCache_Parms), Z_Construct_UFunction_UNiagaraComponent_ClearSimCache_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_ClearSimCache_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_ClearSimCache_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_ClearSimCache_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_ClearSimCache()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_ClearSimCache_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_ClearSystemFixedBounds_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_ClearSystemFixedBounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Clear any previously set fixed bounds for the system instance. */" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Clear any previously set fixed bounds for the system instance." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_ClearSystemFixedBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "ClearSystemFixedBounds", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_ClearSystemFixedBounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_ClearSystemFixedBounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_ClearSystemFixedBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_ClearSystemFixedBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_GetAgeUpdateMode_Statics
	{
		struct NiagaraComponent_eventGetAgeUpdateMode_Parms
		{
			ENiagaraAgeUpdateMode ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNiagaraComponent_GetAgeUpdateMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UNiagaraComponent_GetAgeUpdateMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraComponent_eventGetAgeUpdateMode_Parms, ReturnValue), Z_Construct_UEnum_Niagara_ENiagaraAgeUpdateMode, METADATA_PARAMS(nullptr, 0) }; // 1189200022
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_GetAgeUpdateMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_GetAgeUpdateMode_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_GetAgeUpdateMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_GetAgeUpdateMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "DisplayName", "Get Age Update Mode" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_GetAgeUpdateMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "GetAgeUpdateMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraComponent_GetAgeUpdateMode_Statics::NiagaraComponent_eventGetAgeUpdateMode_Parms), Z_Construct_UFunction_UNiagaraComponent_GetAgeUpdateMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_GetAgeUpdateMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_GetAgeUpdateMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_GetAgeUpdateMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_GetAgeUpdateMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_GetAgeUpdateMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_GetAllowScalability_Statics
	{
		struct NiagaraComponent_eventGetAllowScalability_Parms
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
	void Z_Construct_UFunction_UNiagaraComponent_GetAllowScalability_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NiagaraComponent_eventGetAllowScalability_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraComponent_GetAllowScalability_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NiagaraComponent_eventGetAllowScalability_Parms), &Z_Construct_UFunction_UNiagaraComponent_GetAllowScalability_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_GetAllowScalability_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_GetAllowScalability_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_GetAllowScalability_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_GetAllowScalability_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "GetAllowScalability", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraComponent_GetAllowScalability_Statics::NiagaraComponent_eventGetAllowScalability_Parms), Z_Construct_UFunction_UNiagaraComponent_GetAllowScalability_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_GetAllowScalability_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_GetAllowScalability_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_GetAllowScalability_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_GetAllowScalability()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_GetAllowScalability_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_GetAsset_Statics
	{
		struct NiagaraComponent_eventGetAsset_Parms
		{
			UNiagaraSystem* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraComponent_GetAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraComponent_eventGetAsset_Parms, ReturnValue), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_GetAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_GetAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_GetAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "DisplayName", "Get Niagara System Asset" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_GetAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "GetAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraComponent_GetAsset_Statics::NiagaraComponent_eventGetAsset_Parms), Z_Construct_UFunction_UNiagaraComponent_GetAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_GetAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_GetAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_GetAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_GetAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_GetAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_GetCustomTimeDilation_Statics
	{
		struct NiagaraComponent_eventGetCustomTimeDilation_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNiagaraComponent_GetCustomTimeDilation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraComponent_eventGetCustomTimeDilation_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_GetCustomTimeDilation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_GetCustomTimeDilation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_GetCustomTimeDilation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_GetCustomTimeDilation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "GetCustomTimeDilation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraComponent_GetCustomTimeDilation_Statics::NiagaraComponent_eventGetCustomTimeDilation_Parms), Z_Construct_UFunction_UNiagaraComponent_GetCustomTimeDilation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_GetCustomTimeDilation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_GetCustomTimeDilation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_GetCustomTimeDilation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_GetCustomTimeDilation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_GetCustomTimeDilation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_GetDataInterface_Statics
	{
		struct NiagaraComponent_eventGetDataInterface_Parms
		{
			FString Name;
			UNiagaraDataInterface* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_GetDataInterface_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNiagaraComponent_GetDataInterface_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraComponent_eventGetDataInterface_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_GetDataInterface_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_GetDataInterface_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraComponent_GetDataInterface_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraComponent_eventGetDataInterface_Parms, ReturnValue), Z_Construct_UClass_UNiagaraDataInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_GetDataInterface_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_GetDataInterface_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_GetDataInterface_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_GetDataInterface_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_GetDataInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "GetDataInterface", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraComponent_GetDataInterface_Statics::NiagaraComponent_eventGetDataInterface_Parms), Z_Construct_UFunction_UNiagaraComponent_GetDataInterface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_GetDataInterface_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_GetDataInterface_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_GetDataInterface_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_GetDataInterface()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_GetDataInterface_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_GetDesiredAge_Statics
	{
		struct NiagaraComponent_eventGetDesiredAge_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNiagaraComponent_GetDesiredAge_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraComponent_eventGetDesiredAge_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_GetDesiredAge_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_GetDesiredAge_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_GetDesiredAge_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Gets the desired age of the System instance.  This is only relevant when using the DesiredAge age update mode. */" },
		{ "DisplayName", "Get Desired Age" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Gets the desired age of the System instance.  This is only relevant when using the DesiredAge age update mode." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_GetDesiredAge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "GetDesiredAge", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraComponent_GetDesiredAge_Statics::NiagaraComponent_eventGetDesiredAge_Parms), Z_Construct_UFunction_UNiagaraComponent_GetDesiredAge_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_GetDesiredAge_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_GetDesiredAge_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_GetDesiredAge_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_GetDesiredAge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_GetDesiredAge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_GetEmitterFixedBounds_Statics
	{
		struct NiagaraComponent_eventGetEmitterFixedBounds_Parms
		{
			FName EmitterName;
			FBox ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_EmitterName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraComponent_GetEmitterFixedBounds_Statics::NewProp_EmitterName = { "EmitterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraComponent_eventGetEmitterFixedBounds_Parms, EmitterName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraComponent_GetEmitterFixedBounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraComponent_eventGetEmitterFixedBounds_Parms, ReturnValue), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_GetEmitterFixedBounds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_GetEmitterFixedBounds_Statics::NewProp_EmitterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_GetEmitterFixedBounds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_GetEmitterFixedBounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/**\n\x09Gets the fixed bounds for an emitter instance.\n\x09This will return the user set fixed bounds if set, or the emitters fixed bounds if set.\n\x09Note: The returned box may be invalid if no fixed bounds exist\n\x09*/" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Gets the fixed bounds for an emitter instance.\nThis will return the user set fixed bounds if set, or the emitters fixed bounds if set.\nNote: The returned box may be invalid if no fixed bounds exist" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_GetEmitterFixedBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "GetEmitterFixedBounds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraComponent_GetEmitterFixedBounds_Statics::NiagaraComponent_eventGetEmitterFixedBounds_Parms), Z_Construct_UFunction_UNiagaraComponent_GetEmitterFixedBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_GetEmitterFixedBounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_GetEmitterFixedBounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_GetEmitterFixedBounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_GetEmitterFixedBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_GetEmitterFixedBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_GetForceLocalPlayerEffect_Statics
	{
		struct NiagaraComponent_eventGetForceLocalPlayerEffect_Parms
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
	void Z_Construct_UFunction_UNiagaraComponent_GetForceLocalPlayerEffect_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NiagaraComponent_eventGetForceLocalPlayerEffect_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraComponent_GetForceLocalPlayerEffect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NiagaraComponent_eventGetForceLocalPlayerEffect_Parms), &Z_Construct_UFunction_UNiagaraComponent_GetForceLocalPlayerEffect_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_GetForceLocalPlayerEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_GetForceLocalPlayerEffect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_GetForceLocalPlayerEffect_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_GetForceLocalPlayerEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "GetForceLocalPlayerEffect", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraComponent_GetForceLocalPlayerEffect_Statics::NiagaraComponent_eventGetForceLocalPlayerEffect_Parms), Z_Construct_UFunction_UNiagaraComponent_GetForceLocalPlayerEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_GetForceLocalPlayerEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_GetForceLocalPlayerEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_GetForceLocalPlayerEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_GetForceLocalPlayerEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_GetForceLocalPlayerEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_GetForceSolo_Statics
	{
		struct NiagaraComponent_eventGetForceSolo_Parms
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
	void Z_Construct_UFunction_UNiagaraComponent_GetForceSolo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NiagaraComponent_eventGetForceSolo_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraComponent_GetForceSolo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NiagaraComponent_eventGetForceSolo_Parms), &Z_Construct_UFunction_UNiagaraComponent_GetForceSolo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_GetForceSolo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_GetForceSolo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_GetForceSolo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "DisplayName", "Is In Forced Solo Mode" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_GetForceSolo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "GetForceSolo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraComponent_GetForceSolo_Statics::NiagaraComponent_eventGetForceSolo_Parms), Z_Construct_UFunction_UNiagaraComponent_GetForceSolo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_GetForceSolo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_GetForceSolo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_GetForceSolo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_GetForceSolo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_GetForceSolo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_GetLockDesiredAgeDeltaTimeToSeekDelta_Statics
	{
		struct NiagaraComponent_eventGetLockDesiredAgeDeltaTimeToSeekDelta_Parms
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
	void Z_Construct_UFunction_UNiagaraComponent_GetLockDesiredAgeDeltaTimeToSeekDelta_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NiagaraComponent_eventGetLockDesiredAgeDeltaTimeToSeekDelta_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraComponent_GetLockDesiredAgeDeltaTimeToSeekDelta_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NiagaraComponent_eventGetLockDesiredAgeDeltaTimeToSeekDelta_Parms), &Z_Construct_UFunction_UNiagaraComponent_GetLockDesiredAgeDeltaTimeToSeekDelta_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_GetLockDesiredAgeDeltaTimeToSeekDelta_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_GetLockDesiredAgeDeltaTimeToSeekDelta_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_GetLockDesiredAgeDeltaTimeToSeekDelta_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Gets whether or not the delta time used to tick the system instance when using desired age is locked to the seek delta.  When true, the system instance\n\x09will only be ticked when the desired age has changed by more than the seek delta.  When false the system instance will be ticked by the change in desired\n\x09""age when not seeking. */" },
		{ "DisplayName", "Get whether or not to lock the desired age delta time to the seek delta." },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Gets whether or not the delta time used to tick the system instance when using desired age is locked to the seek delta.  When true, the system instance\n      will only be ticked when the desired age has changed by more than the seek delta.  When false the system instance will be ticked by the change in desired\n      age when not seeking." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_GetLockDesiredAgeDeltaTimeToSeekDelta_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "GetLockDesiredAgeDeltaTimeToSeekDelta", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraComponent_GetLockDesiredAgeDeltaTimeToSeekDelta_Statics::NiagaraComponent_eventGetLockDesiredAgeDeltaTimeToSeekDelta_Parms), Z_Construct_UFunction_UNiagaraComponent_GetLockDesiredAgeDeltaTimeToSeekDelta_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_GetLockDesiredAgeDeltaTimeToSeekDelta_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_GetLockDesiredAgeDeltaTimeToSeekDelta_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_GetLockDesiredAgeDeltaTimeToSeekDelta_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_GetLockDesiredAgeDeltaTimeToSeekDelta()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_GetLockDesiredAgeDeltaTimeToSeekDelta_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_GetMaxSimTime_Statics
	{
		struct NiagaraComponent_eventGetMaxSimTime_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNiagaraComponent_GetMaxSimTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraComponent_eventGetMaxSimTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_GetMaxSimTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_GetMaxSimTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_GetMaxSimTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/**\n\x09Get the maximum CPU time in seconds we will simulate to the desired age, when we go beyond this limit ticks will be processed in the next frame.\n\x09This is only relevant when using the DesiredAge age update mode.\n\x09Note: The componet will not be visibile if we have ticks to process and SetCanRenderWhileSeeking is set to true\n\x09*/" },
		{ "DisplayName", "Get Max Desired Age Tick Delta" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Get the maximum CPU time in seconds we will simulate to the desired age, when we go beyond this limit ticks will be processed in the next frame.\nThis is only relevant when using the DesiredAge age update mode.\nNote: The componet will not be visibile if we have ticks to process and SetCanRenderWhileSeeking is set to true" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_GetMaxSimTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "GetMaxSimTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraComponent_GetMaxSimTime_Statics::NiagaraComponent_eventGetMaxSimTime_Parms), Z_Construct_UFunction_UNiagaraComponent_GetMaxSimTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_GetMaxSimTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_GetMaxSimTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_GetMaxSimTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_GetMaxSimTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_GetMaxSimTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticlePositions_DebugOnly_Statics
	{
		struct NiagaraComponent_eventGetNiagaraParticlePositions_DebugOnly_Parms
		{
			FString InEmitterName;
			TArray<FVector> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InEmitterName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InEmitterName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticlePositions_DebugOnly_Statics::NewProp_InEmitterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticlePositions_DebugOnly_Statics::NewProp_InEmitterName = { "InEmitterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraComponent_eventGetNiagaraParticlePositions_DebugOnly_Parms, InEmitterName), METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticlePositions_DebugOnly_Statics::NewProp_InEmitterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticlePositions_DebugOnly_Statics::NewProp_InEmitterName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticlePositions_DebugOnly_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticlePositions_DebugOnly_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraComponent_eventGetNiagaraParticlePositions_DebugOnly_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticlePositions_DebugOnly_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticlePositions_DebugOnly_Statics::NewProp_InEmitterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticlePositions_DebugOnly_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticlePositions_DebugOnly_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticlePositions_DebugOnly_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Debug accessors for getting positions in blueprints. */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Get Niagara Emitter Positions is deprecated, use the particle export DI inside your emitter instead." },
		{ "DisplayName", "Get Niagara Emitter Positions" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Debug accessors for getting positions in blueprints." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticlePositions_DebugOnly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "GetNiagaraParticlePositions_DebugOnly", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticlePositions_DebugOnly_Statics::NiagaraComponent_eventGetNiagaraParticlePositions_DebugOnly_Parms), Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticlePositions_DebugOnly_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticlePositions_DebugOnly_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticlePositions_DebugOnly_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticlePositions_DebugOnly_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticlePositions_DebugOnly()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticlePositions_DebugOnly_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValues_DebugOnly_Statics
	{
		struct NiagaraComponent_eventGetNiagaraParticleValues_DebugOnly_Parms
		{
			FString InEmitterName;
			FString InValueName;
			TArray<float> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InEmitterName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InEmitterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InValueName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InValueName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValues_DebugOnly_Statics::NewProp_InEmitterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValues_DebugOnly_Statics::NewProp_InEmitterName = { "InEmitterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraComponent_eventGetNiagaraParticleValues_DebugOnly_Parms, InEmitterName), METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValues_DebugOnly_Statics::NewProp_InEmitterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValues_DebugOnly_Statics::NewProp_InEmitterName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValues_DebugOnly_Statics::NewProp_InValueName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValues_DebugOnly_Statics::NewProp_InValueName = { "InValueName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraComponent_eventGetNiagaraParticleValues_DebugOnly_Parms, InValueName), METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValues_DebugOnly_Statics::NewProp_InValueName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValues_DebugOnly_Statics::NewProp_InValueName_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValues_DebugOnly_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValues_DebugOnly_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraComponent_eventGetNiagaraParticleValues_DebugOnly_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValues_DebugOnly_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValues_DebugOnly_Statics::NewProp_InEmitterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValues_DebugOnly_Statics::NewProp_InValueName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValues_DebugOnly_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValues_DebugOnly_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValues_DebugOnly_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Debug accessors for getting a float attribute array in blueprints.  The attribute name should be without namespaces. For example for \"Particles.Position\", send \"Position\". */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Get Niagara Emitter Float Attrib is deprecated, use the particle export DI inside your emitter instead." },
		{ "DisplayName", "Get Niagara Emitter Float Attrib" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Debug accessors for getting a float attribute array in blueprints.  The attribute name should be without namespaces. For example for \"Particles.Position\", send \"Position\"." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValues_DebugOnly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "GetNiagaraParticleValues_DebugOnly", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValues_DebugOnly_Statics::NiagaraComponent_eventGetNiagaraParticleValues_DebugOnly_Parms), Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValues_DebugOnly_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValues_DebugOnly_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValues_DebugOnly_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValues_DebugOnly_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValues_DebugOnly()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValues_DebugOnly_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValueVec3_DebugOnly_Statics
	{
		struct NiagaraComponent_eventGetNiagaraParticleValueVec3_DebugOnly_Parms
		{
			FString InEmitterName;
			FString InValueName;
			TArray<FVector> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InEmitterName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InEmitterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InValueName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InValueName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValueVec3_DebugOnly_Statics::NewProp_InEmitterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValueVec3_DebugOnly_Statics::NewProp_InEmitterName = { "InEmitterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraComponent_eventGetNiagaraParticleValueVec3_DebugOnly_Parms, InEmitterName), METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValueVec3_DebugOnly_Statics::NewProp_InEmitterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValueVec3_DebugOnly_Statics::NewProp_InEmitterName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValueVec3_DebugOnly_Statics::NewProp_InValueName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValueVec3_DebugOnly_Statics::NewProp_InValueName = { "InValueName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraComponent_eventGetNiagaraParticleValueVec3_DebugOnly_Parms, InValueName), METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValueVec3_DebugOnly_Statics::NewProp_InValueName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValueVec3_DebugOnly_Statics::NewProp_InValueName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValueVec3_DebugOnly_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValueVec3_DebugOnly_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraComponent_eventGetNiagaraParticleValueVec3_DebugOnly_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValueVec3_DebugOnly_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValueVec3_DebugOnly_Statics::NewProp_InEmitterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValueVec3_DebugOnly_Statics::NewProp_InValueName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValueVec3_DebugOnly_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValueVec3_DebugOnly_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValueVec3_DebugOnly_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Debug accessors for getting a FVector attribute array in blueprints. The attribute name should be without namespaces. For example for \"Particles.Position\", send \"Position\". */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Get Niagara Emitter Vec3 Attrib is deprecated, use the particle export DI inside your emitter instead." },
		{ "DisplayName", "Get Niagara Emitter Vec3 Attrib" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Debug accessors for getting a FVector attribute array in blueprints. The attribute name should be without namespaces. For example for \"Particles.Position\", send \"Position\"." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValueVec3_DebugOnly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "GetNiagaraParticleValueVec3_DebugOnly", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValueVec3_DebugOnly_Statics::NiagaraComponent_eventGetNiagaraParticleValueVec3_DebugOnly_Parms), Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValueVec3_DebugOnly_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValueVec3_DebugOnly_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValueVec3_DebugOnly_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValueVec3_DebugOnly_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValueVec3_DebugOnly()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValueVec3_DebugOnly_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_GetPreviewLODDistance_Statics
	{
		struct NiagaraComponent_eventGetPreviewLODDistance_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNiagaraComponent_GetPreviewLODDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraComponent_eventGetPreviewLODDistance_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_GetPreviewLODDistance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_GetPreviewLODDistance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_GetPreviewLODDistance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Preview" },
		{ "Keywords", "preview LOD Distance scalability" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_GetPreviewLODDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "GetPreviewLODDistance", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraComponent_GetPreviewLODDistance_Statics::NiagaraComponent_eventGetPreviewLODDistance_Parms), Z_Construct_UFunction_UNiagaraComponent_GetPreviewLODDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_GetPreviewLODDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_GetPreviewLODDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_GetPreviewLODDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_GetPreviewLODDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_GetPreviewLODDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_GetPreviewLODDistanceEnabled_Statics
	{
		struct NiagaraComponent_eventGetPreviewLODDistanceEnabled_Parms
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
	void Z_Construct_UFunction_UNiagaraComponent_GetPreviewLODDistanceEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NiagaraComponent_eventGetPreviewLODDistanceEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraComponent_GetPreviewLODDistanceEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NiagaraComponent_eventGetPreviewLODDistanceEnabled_Parms), &Z_Construct_UFunction_UNiagaraComponent_GetPreviewLODDistanceEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_GetPreviewLODDistanceEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_GetPreviewLODDistanceEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_GetPreviewLODDistanceEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Preview" },
		{ "Keywords", "preview LOD Distance scalability" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_GetPreviewLODDistanceEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "GetPreviewLODDistanceEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraComponent_GetPreviewLODDistanceEnabled_Statics::NiagaraComponent_eventGetPreviewLODDistanceEnabled_Parms), Z_Construct_UFunction_UNiagaraComponent_GetPreviewLODDistanceEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_GetPreviewLODDistanceEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_GetPreviewLODDistanceEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_GetPreviewLODDistanceEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_GetPreviewLODDistanceEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_GetPreviewLODDistanceEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_GetRandomSeedOffset_Statics
	{
		struct NiagaraComponent_eventGetRandomSeedOffset_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraComponent_GetRandomSeedOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraComponent_eventGetRandomSeedOffset_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_GetRandomSeedOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_GetRandomSeedOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_GetRandomSeedOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "DisplayName", "Get Random Seed Offset" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_GetRandomSeedOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "GetRandomSeedOffset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraComponent_GetRandomSeedOffset_Statics::NiagaraComponent_eventGetRandomSeedOffset_Parms), Z_Construct_UFunction_UNiagaraComponent_GetRandomSeedOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_GetRandomSeedOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_GetRandomSeedOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_GetRandomSeedOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_GetRandomSeedOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_GetRandomSeedOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_GetSeekDelta_Statics
	{
		struct NiagaraComponent_eventGetSeekDelta_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNiagaraComponent_GetSeekDelta_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraComponent_eventGetSeekDelta_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_GetSeekDelta_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_GetSeekDelta_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_GetSeekDelta_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Gets the delta value which is used when seeking from the current age, to the desired age.  This is only relevant\n\x09when using the DesiredAge age update mode. */" },
		{ "DisplayName", "Get Desired Age Seek Delta" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Gets the delta value which is used when seeking from the current age, to the desired age.  This is only relevant\n      when using the DesiredAge age update mode." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_GetSeekDelta_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "GetSeekDelta", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraComponent_GetSeekDelta_Statics::NiagaraComponent_eventGetSeekDelta_Parms), Z_Construct_UFunction_UNiagaraComponent_GetSeekDelta_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_GetSeekDelta_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_GetSeekDelta_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_GetSeekDelta_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_GetSeekDelta()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_GetSeekDelta_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_GetSimCache_Statics
	{
		struct NiagaraComponent_eventGetSimCache_Parms
		{
			UNiagaraSimCache* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraComponent_GetSimCache_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraComponent_eventGetSimCache_Parms, ReturnValue), Z_Construct_UClass_UNiagaraSimCache_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_GetSimCache_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_GetSimCache_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_GetSimCache_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimCache" },
		{ "Comment", "/**\n\x09Get the active simulation cache, will return null if we do not have an active one.\n\x09*/" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Get the active simulation cache, will return null if we do not have an active one." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_GetSimCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "GetSimCache", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraComponent_GetSimCache_Statics::NiagaraComponent_eventGetSimCache_Parms), Z_Construct_UFunction_UNiagaraComponent_GetSimCache_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_GetSimCache_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_GetSimCache_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_GetSimCache_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_GetSimCache()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_GetSimCache_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_GetSystemFixedBounds_Statics
	{
		struct NiagaraComponent_eventGetSystemFixedBounds_Parms
		{
			FBox ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraComponent_GetSystemFixedBounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraComponent_eventGetSystemFixedBounds_Parms, ReturnValue), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_GetSystemFixedBounds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_GetSystemFixedBounds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_GetSystemFixedBounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/**\n\x09Gets the fixed bounds for the system instance.\n\x09This will return the user set fixed bounds if set, or the systems fixed bounds if set.\n\x09Note: The returned box may be invalid if no fixed bounds exist\n\x09*/" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Gets the fixed bounds for the system instance.\nThis will return the user set fixed bounds if set, or the systems fixed bounds if set.\nNote: The returned box may be invalid if no fixed bounds exist" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_GetSystemFixedBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "GetSystemFixedBounds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraComponent_GetSystemFixedBounds_Statics::NiagaraComponent_eventGetSystemFixedBounds_Parms), Z_Construct_UFunction_UNiagaraComponent_GetSystemFixedBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_GetSystemFixedBounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_GetSystemFixedBounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_GetSystemFixedBounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_GetSystemFixedBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_GetSystemFixedBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_GetTickBehavior_Statics
	{
		struct NiagaraComponent_eventGetTickBehavior_Parms
		{
			ENiagaraTickBehavior ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNiagaraComponent_GetTickBehavior_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UNiagaraComponent_GetTickBehavior_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraComponent_eventGetTickBehavior_Parms, ReturnValue), Z_Construct_UEnum_Niagara_ENiagaraTickBehavior, METADATA_PARAMS(nullptr, 0) }; // 698800127
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_GetTickBehavior_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_GetTickBehavior_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_GetTickBehavior_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_GetTickBehavior_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "DisplayName", "Get Tick Behavior" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_GetTickBehavior_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "GetTickBehavior", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraComponent_GetTickBehavior_Statics::NiagaraComponent_eventGetTickBehavior_Parms), Z_Construct_UFunction_UNiagaraComponent_GetTickBehavior_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_GetTickBehavior_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_GetTickBehavior_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_GetTickBehavior_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_GetTickBehavior()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_GetTickBehavior_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_InitForPerformanceBaseline_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_InitForPerformanceBaseline_Statics::Function_MetaDataParams[] = {
		{ "Category", "Performance" },
		{ "Comment", "/**\n\x09Initializes this component for capturing a performance baseline.\n\x09This will do things such as disabling distance culling and setting a LODDistance of 0 to ensure the effect is at it's maximum cost.\n\x09*/" },
		{ "Keywords", "Niagara Performance" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Initializes this component for capturing a performance baseline.\nThis will do things such as disabling distance culling and setting a LODDistance of 0 to ensure the effect is at it's maximum cost." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_InitForPerformanceBaseline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "InitForPerformanceBaseline", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_InitForPerformanceBaseline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_InitForPerformanceBaseline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_InitForPerformanceBaseline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_InitForPerformanceBaseline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_IsPaused_Statics
	{
		struct NiagaraComponent_eventIsPaused_Parms
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
	void Z_Construct_UFunction_UNiagaraComponent_IsPaused_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NiagaraComponent_eventIsPaused_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraComponent_IsPaused_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NiagaraComponent_eventIsPaused_Parms), &Z_Construct_UFunction_UNiagaraComponent_IsPaused_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_IsPaused_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_IsPaused_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_IsPaused_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_IsPaused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "IsPaused", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraComponent_IsPaused_Statics::NiagaraComponent_eventIsPaused_Parms), Z_Construct_UFunction_UNiagaraComponent_IsPaused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_IsPaused_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_IsPaused_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_IsPaused_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_IsPaused()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_IsPaused_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_ReinitializeSystem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_ReinitializeSystem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Called on when an external object wishes to force this System to reinitialize itself from the System data.*/" },
		{ "DisplayName", "Reinitialize System" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Called on when an external object wishes to force this System to reinitialize itself from the System data." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_ReinitializeSystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "ReinitializeSystem", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_ReinitializeSystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_ReinitializeSystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_ReinitializeSystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_ReinitializeSystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_ResetSystem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_ResetSystem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Resets the System to it's initial pre-simulated state. */" },
		{ "DisplayName", "Reset System" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Resets the System to it's initial pre-simulated state." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_ResetSystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "ResetSystem", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_ResetSystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_ResetSystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_ResetSystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_ResetSystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_SeekToDesiredAge_Statics
	{
		struct NiagaraComponent_eventSeekToDesiredAge_Parms
		{
			float InDesiredAge;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InDesiredAge;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNiagaraComponent_SeekToDesiredAge_Statics::NewProp_InDesiredAge = { "InDesiredAge", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraComponent_eventSeekToDesiredAge_Parms, InDesiredAge), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_SeekToDesiredAge_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SeekToDesiredAge_Statics::NewProp_InDesiredAge,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SeekToDesiredAge_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Sets the desired age of the System instance and designates that this change is a seek.  When seeking to a desired age the\n\x09    The component can optionally prevent rendering. */" },
		{ "DisplayName", "Seek to Desired Age" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Sets the desired age of the System instance and designates that this change is a seek.  When seeking to a desired age the\n          The component can optionally prevent rendering." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_SeekToDesiredAge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "SeekToDesiredAge", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraComponent_SeekToDesiredAge_Statics::NiagaraComponent_eventSeekToDesiredAge_Parms), Z_Construct_UFunction_UNiagaraComponent_SeekToDesiredAge_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SeekToDesiredAge_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SeekToDesiredAge_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SeekToDesiredAge_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_SeekToDesiredAge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_SeekToDesiredAge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_SetAgeUpdateMode_Statics
	{
		struct NiagaraComponent_eventSetAgeUpdateMode_Parms
		{
			ENiagaraAgeUpdateMode InAgeUpdateMode;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InAgeUpdateMode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InAgeUpdateMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNiagaraComponent_SetAgeUpdateMode_Statics::NewProp_InAgeUpdateMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetAgeUpdateMode_Statics::NewProp_InAgeUpdateMode = { "InAgeUpdateMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraComponent_eventSetAgeUpdateMode_Parms, InAgeUpdateMode), Z_Construct_UEnum_Niagara_ENiagaraAgeUpdateMode, METADATA_PARAMS(nullptr, 0) }; // 1189200022
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_SetAgeUpdateMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetAgeUpdateMode_Statics::NewProp_InAgeUpdateMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetAgeUpdateMode_Statics::NewProp_InAgeUpdateMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetAgeUpdateMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Sets the age update mode for the System instance. */" },
		{ "DisplayName", "Set Age Update Mode" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Sets the age update mode for the System instance." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_SetAgeUpdateMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "SetAgeUpdateMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraComponent_SetAgeUpdateMode_Statics::NiagaraComponent_eventSetAgeUpdateMode_Parms), Z_Construct_UFunction_UNiagaraComponent_SetAgeUpdateMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetAgeUpdateMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetAgeUpdateMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetAgeUpdateMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_SetAgeUpdateMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_SetAgeUpdateMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_SetAllowScalability_Statics
	{
		struct NiagaraComponent_eventSetAllowScalability_Parms
		{
			bool bAllow;
		};
		static void NewProp_bAllow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllow;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UNiagaraComponent_SetAllowScalability_Statics::NewProp_bAllow_SetBit(void* Obj)
	{
		((NiagaraComponent_eventSetAllowScalability_Parms*)Obj)->bAllow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetAllowScalability_Statics::NewProp_bAllow = { "bAllow", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NiagaraComponent_eventSetAllowScalability_Parms), &Z_Construct_UFunction_UNiagaraComponent_SetAllowScalability_Statics::NewProp_bAllow_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_SetAllowScalability_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetAllowScalability_Statics::NewProp_bAllow,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetAllowScalability_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Scalability" },
		{ "Comment", "/** Set whether this component is allowed to perform scalability checks and potentially be culled etc. Occasionally it is useful to disable this for specific components. E.g. Effects on the local player. */" },
		{ "Keywords", "LOD scalability" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Set whether this component is allowed to perform scalability checks and potentially be culled etc. Occasionally it is useful to disable this for specific components. E.g. Effects on the local player." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_SetAllowScalability_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "SetAllowScalability", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraComponent_SetAllowScalability_Statics::NiagaraComponent_eventSetAllowScalability_Parms), Z_Construct_UFunction_UNiagaraComponent_SetAllowScalability_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetAllowScalability_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetAllowScalability_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetAllowScalability_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_SetAllowScalability()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_SetAllowScalability_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_SetAsset_Statics
	{
		struct NiagaraComponent_eventSetAsset_Parms
		{
			UNiagaraSystem* InAsset;
			bool bResetExistingOverrideParameters;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InAsset;
		static void NewProp_bResetExistingOverrideParameters_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetExistingOverrideParameters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetAsset_Statics::NewProp_InAsset = { "InAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraComponent_eventSetAsset_Parms, InAsset), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNiagaraComponent_SetAsset_Statics::NewProp_bResetExistingOverrideParameters_SetBit(void* Obj)
	{
		((NiagaraComponent_eventSetAsset_Parms*)Obj)->bResetExistingOverrideParameters = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetAsset_Statics::NewProp_bResetExistingOverrideParameters = { "bResetExistingOverrideParameters", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NiagaraComponent_eventSetAsset_Parms), &Z_Construct_UFunction_UNiagaraComponent_SetAsset_Statics::NewProp_bResetExistingOverrideParameters_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_SetAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetAsset_Statics::NewProp_InAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetAsset_Statics::NewProp_bResetExistingOverrideParameters,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/*\n\x09Switch which asset the component is using.\n\x09This requires Niagara to wait for concurrent execution and the override parameter store to be synchronized with the new asset.\n\x09""By default existing parameters are reset when we call SetAsset, modify bResetExistingOverrideParameters to leave existing parameter data as is.\n\x09*/" },
		{ "CPP_Default_bResetExistingOverrideParameters", "true" },
		{ "DisplayName", "Set Niagara System Asset" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Switch which asset the component is using.\nThis requires Niagara to wait for concurrent execution and the override parameter store to be synchronized with the new asset.\nBy default existing parameters are reset when we call SetAsset, modify bResetExistingOverrideParameters to leave existing parameter data as is." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_SetAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "SetAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraComponent_SetAsset_Statics::NiagaraComponent_eventSetAsset_Parms), Z_Construct_UFunction_UNiagaraComponent_SetAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_SetAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_SetAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_SetAutoDestroy_Statics
	{
		struct NiagaraComponent_eventSetAutoDestroy_Parms
		{
			bool bInAutoDestroy;
		};
		static void NewProp_bInAutoDestroy_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInAutoDestroy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UNiagaraComponent_SetAutoDestroy_Statics::NewProp_bInAutoDestroy_SetBit(void* Obj)
	{
		((NiagaraComponent_eventSetAutoDestroy_Parms*)Obj)->bInAutoDestroy = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetAutoDestroy_Statics::NewProp_bInAutoDestroy = { "bInAutoDestroy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NiagaraComponent_eventSetAutoDestroy_Parms), &Z_Construct_UFunction_UNiagaraComponent_SetAutoDestroy_Statics::NewProp_bInAutoDestroy_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_SetAutoDestroy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetAutoDestroy_Statics::NewProp_bInAutoDestroy,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetAutoDestroy_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "DisplayName", "Set Auto Destroy" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_SetAutoDestroy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "SetAutoDestroy", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraComponent_SetAutoDestroy_Statics::NiagaraComponent_eventSetAutoDestroy_Parms), Z_Construct_UFunction_UNiagaraComponent_SetAutoDestroy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetAutoDestroy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetAutoDestroy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetAutoDestroy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_SetAutoDestroy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_SetAutoDestroy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_SetCanRenderWhileSeeking_Statics
	{
		struct NiagaraComponent_eventSetCanRenderWhileSeeking_Parms
		{
			bool bInCanRenderWhileSeeking;
		};
		static void NewProp_bInCanRenderWhileSeeking_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInCanRenderWhileSeeking;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UNiagaraComponent_SetCanRenderWhileSeeking_Statics::NewProp_bInCanRenderWhileSeeking_SetBit(void* Obj)
	{
		((NiagaraComponent_eventSetCanRenderWhileSeeking_Parms*)Obj)->bInCanRenderWhileSeeking = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetCanRenderWhileSeeking_Statics::NewProp_bInCanRenderWhileSeeking = { "bInCanRenderWhileSeeking", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NiagaraComponent_eventSetCanRenderWhileSeeking_Parms), &Z_Construct_UFunction_UNiagaraComponent_SetCanRenderWhileSeeking_Statics::NewProp_bInCanRenderWhileSeeking_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_SetCanRenderWhileSeeking_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetCanRenderWhileSeeking_Statics::NewProp_bInCanRenderWhileSeeking,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetCanRenderWhileSeeking_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Sets whether or not the system can render while seeking. */" },
		{ "DisplayName", "Set Can Render While Seeking" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Sets whether or not the system can render while seeking." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_SetCanRenderWhileSeeking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "SetCanRenderWhileSeeking", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraComponent_SetCanRenderWhileSeeking_Statics::NiagaraComponent_eventSetCanRenderWhileSeeking_Parms), Z_Construct_UFunction_UNiagaraComponent_SetCanRenderWhileSeeking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetCanRenderWhileSeeking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetCanRenderWhileSeeking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetCanRenderWhileSeeking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_SetCanRenderWhileSeeking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_SetCanRenderWhileSeeking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_SetCustomTimeDilation_Statics
	{
		struct NiagaraComponent_eventSetCustomTimeDilation_Parms
		{
			float Dilation;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Dilation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetCustomTimeDilation_Statics::NewProp_Dilation = { "Dilation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraComponent_eventSetCustomTimeDilation_Parms, Dilation), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_SetCustomTimeDilation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetCustomTimeDilation_Statics::NewProp_Dilation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetCustomTimeDilation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/**\n\x09Sets the custom time dilation value for the component.\n\x09Note: This is only available on components that are in solo mode currently.\n\x09*/" },
		{ "CPP_Default_Dilation", "1.000000" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Sets the custom time dilation value for the component.\nNote: This is only available on components that are in solo mode currently." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_SetCustomTimeDilation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "SetCustomTimeDilation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraComponent_SetCustomTimeDilation_Statics::NiagaraComponent_eventSetCustomTimeDilation_Parms), Z_Construct_UFunction_UNiagaraComponent_SetCustomTimeDilation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetCustomTimeDilation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetCustomTimeDilation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetCustomTimeDilation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_SetCustomTimeDilation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_SetCustomTimeDilation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_SetDesiredAge_Statics
	{
		struct NiagaraComponent_eventSetDesiredAge_Parms
		{
			float InDesiredAge;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InDesiredAge;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetDesiredAge_Statics::NewProp_InDesiredAge = { "InDesiredAge", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraComponent_eventSetDesiredAge_Parms, InDesiredAge), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_SetDesiredAge_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetDesiredAge_Statics::NewProp_InDesiredAge,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetDesiredAge_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Sets the desired age of the System instance.  This is only relevant when using the DesiredAge age update mode. */" },
		{ "DisplayName", "Set Desired Age" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Sets the desired age of the System instance.  This is only relevant when using the DesiredAge age update mode." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_SetDesiredAge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "SetDesiredAge", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraComponent_SetDesiredAge_Statics::NiagaraComponent_eventSetDesiredAge_Parms), Z_Construct_UFunction_UNiagaraComponent_SetDesiredAge_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetDesiredAge_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetDesiredAge_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetDesiredAge_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_SetDesiredAge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_SetDesiredAge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_SetEmitterFixedBounds_Statics
	{
		struct NiagaraComponent_eventSetEmitterFixedBounds_Parms
		{
			FName EmitterName;
			FBox LocalBounds;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_EmitterName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalBounds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraComponent_SetEmitterFixedBounds_Statics::NewProp_EmitterName = { "EmitterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraComponent_eventSetEmitterFixedBounds_Parms, EmitterName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetEmitterFixedBounds_Statics::NewProp_LocalBounds = { "LocalBounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraComponent_eventSetEmitterFixedBounds_Parms, LocalBounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_SetEmitterFixedBounds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetEmitterFixedBounds_Statics::NewProp_EmitterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetEmitterFixedBounds_Statics::NewProp_LocalBounds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetEmitterFixedBounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/**\n\x09Sets the fixed bounds for an emitter instance, this overrides all other bounds.\n\x09The box is expected to be in local space not world space.\n\x09""A default uninitialized box will clear the fixed bounds and revert back to emitter fixed / dynamic bounds.\n\x09*/" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Sets the fixed bounds for an emitter instance, this overrides all other bounds.\nThe box is expected to be in local space not world space.\nA default uninitialized box will clear the fixed bounds and revert back to emitter fixed / dynamic bounds." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_SetEmitterFixedBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "SetEmitterFixedBounds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraComponent_SetEmitterFixedBounds_Statics::NiagaraComponent_eventSetEmitterFixedBounds_Parms), Z_Construct_UFunction_UNiagaraComponent_SetEmitterFixedBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetEmitterFixedBounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetEmitterFixedBounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetEmitterFixedBounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_SetEmitterFixedBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_SetEmitterFixedBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_SetForceLocalPlayerEffect_Statics
	{
		struct NiagaraComponent_eventSetForceLocalPlayerEffect_Parms
		{
			bool bIsPlayerEffect;
		};
		static void NewProp_bIsPlayerEffect_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPlayerEffect;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UNiagaraComponent_SetForceLocalPlayerEffect_Statics::NewProp_bIsPlayerEffect_SetBit(void* Obj)
	{
		((NiagaraComponent_eventSetForceLocalPlayerEffect_Parms*)Obj)->bIsPlayerEffect = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetForceLocalPlayerEffect_Statics::NewProp_bIsPlayerEffect = { "bIsPlayerEffect", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NiagaraComponent_eventSetForceLocalPlayerEffect_Parms), &Z_Construct_UFunction_UNiagaraComponent_SetForceLocalPlayerEffect_Statics::NewProp_bIsPlayerEffect_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_SetForceLocalPlayerEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetForceLocalPlayerEffect_Statics::NewProp_bIsPlayerEffect,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetForceLocalPlayerEffect_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Scalability" },
		{ "Keywords", "LOD scalability" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_SetForceLocalPlayerEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "SetForceLocalPlayerEffect", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraComponent_SetForceLocalPlayerEffect_Statics::NiagaraComponent_eventSetForceLocalPlayerEffect_Parms), Z_Construct_UFunction_UNiagaraComponent_SetForceLocalPlayerEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetForceLocalPlayerEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetForceLocalPlayerEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetForceLocalPlayerEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_SetForceLocalPlayerEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_SetForceLocalPlayerEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_SetForceSolo_Statics
	{
		struct NiagaraComponent_eventSetForceSolo_Parms
		{
			bool bInForceSolo;
		};
		static void NewProp_bInForceSolo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInForceSolo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UNiagaraComponent_SetForceSolo_Statics::NewProp_bInForceSolo_SetBit(void* Obj)
	{
		((NiagaraComponent_eventSetForceSolo_Parms*)Obj)->bInForceSolo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetForceSolo_Statics::NewProp_bInForceSolo = { "bInForceSolo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NiagaraComponent_eventSetForceSolo_Parms), &Z_Construct_UFunction_UNiagaraComponent_SetForceSolo_Statics::NewProp_bInForceSolo_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_SetForceSolo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetForceSolo_Statics::NewProp_bInForceSolo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetForceSolo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "DisplayName", "Set Forced Solo Mode" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_SetForceSolo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "SetForceSolo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraComponent_SetForceSolo_Statics::NiagaraComponent_eventSetForceSolo_Parms), Z_Construct_UFunction_UNiagaraComponent_SetForceSolo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetForceSolo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetForceSolo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetForceSolo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_SetForceSolo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_SetForceSolo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_SetGpuComputeDebug_Statics
	{
		struct NiagaraComponent_eventSetGpuComputeDebug_Parms
		{
			bool bEnableDebug;
		};
		static void NewProp_bEnableDebug_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDebug;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UNiagaraComponent_SetGpuComputeDebug_Statics::NewProp_bEnableDebug_SetBit(void* Obj)
	{
		((NiagaraComponent_eventSetGpuComputeDebug_Parms*)Obj)->bEnableDebug = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetGpuComputeDebug_Statics::NewProp_bEnableDebug = { "bEnableDebug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NiagaraComponent_eventSetGpuComputeDebug_Parms), &Z_Construct_UFunction_UNiagaraComponent_SetGpuComputeDebug_Statics::NewProp_bEnableDebug_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_SetGpuComputeDebug_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetGpuComputeDebug_Statics::NewProp_bEnableDebug,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetGpuComputeDebug_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_SetGpuComputeDebug_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "SetGpuComputeDebug", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraComponent_SetGpuComputeDebug_Statics::NiagaraComponent_eventSetGpuComputeDebug_Parms), Z_Construct_UFunction_UNiagaraComponent_SetGpuComputeDebug_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetGpuComputeDebug_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetGpuComputeDebug_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetGpuComputeDebug_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_SetGpuComputeDebug()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_SetGpuComputeDebug_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_SetLockDesiredAgeDeltaTimeToSeekDelta_Statics
	{
		struct NiagaraComponent_eventSetLockDesiredAgeDeltaTimeToSeekDelta_Parms
		{
			bool bLock;
		};
		static void NewProp_bLock_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLock;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UNiagaraComponent_SetLockDesiredAgeDeltaTimeToSeekDelta_Statics::NewProp_bLock_SetBit(void* Obj)
	{
		((NiagaraComponent_eventSetLockDesiredAgeDeltaTimeToSeekDelta_Parms*)Obj)->bLock = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetLockDesiredAgeDeltaTimeToSeekDelta_Statics::NewProp_bLock = { "bLock", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NiagaraComponent_eventSetLockDesiredAgeDeltaTimeToSeekDelta_Parms), &Z_Construct_UFunction_UNiagaraComponent_SetLockDesiredAgeDeltaTimeToSeekDelta_Statics::NewProp_bLock_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_SetLockDesiredAgeDeltaTimeToSeekDelta_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetLockDesiredAgeDeltaTimeToSeekDelta_Statics::NewProp_bLock,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetLockDesiredAgeDeltaTimeToSeekDelta_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Sets whether or not the delta time used to tick the system instance when using desired age is locked to the seek delta.  When true, the system instance\n\x09will only be ticked when the desired age has changed by more than the seek delta.  When false the system instance will be ticked by the change in desired\n\x09""age when not seeking. */" },
		{ "DisplayName", "Set whether or not to lock the desired age delta time to the seek delta." },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Sets whether or not the delta time used to tick the system instance when using desired age is locked to the seek delta.  When true, the system instance\n      will only be ticked when the desired age has changed by more than the seek delta.  When false the system instance will be ticked by the change in desired\n      age when not seeking." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_SetLockDesiredAgeDeltaTimeToSeekDelta_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "SetLockDesiredAgeDeltaTimeToSeekDelta", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraComponent_SetLockDesiredAgeDeltaTimeToSeekDelta_Statics::NiagaraComponent_eventSetLockDesiredAgeDeltaTimeToSeekDelta_Parms), Z_Construct_UFunction_UNiagaraComponent_SetLockDesiredAgeDeltaTimeToSeekDelta_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetLockDesiredAgeDeltaTimeToSeekDelta_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetLockDesiredAgeDeltaTimeToSeekDelta_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetLockDesiredAgeDeltaTimeToSeekDelta_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_SetLockDesiredAgeDeltaTimeToSeekDelta()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_SetLockDesiredAgeDeltaTimeToSeekDelta_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_SetMaxSimTime_Statics
	{
		struct NiagaraComponent_eventSetMaxSimTime_Parms
		{
			float InMaxTime;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InMaxTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetMaxSimTime_Statics::NewProp_InMaxTime = { "InMaxTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraComponent_eventSetMaxSimTime_Parms, InMaxTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_SetMaxSimTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetMaxSimTime_Statics::NewProp_InMaxTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetMaxSimTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/**\n\x09Sets the maximum CPU time in seconds we will simulate to the desired age, when we go beyond this limit ticks will be processed in the next frame.\n\x09This is only relevant when using the DesiredAge age update mode.\n\x09Note: The componet will not be visibile if we have ticks to process and SetCanRenderWhileSeeking is set to true\n\x09*/" },
		{ "DisplayName", "Set Max Desired Age Tick Delta" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Sets the maximum CPU time in seconds we will simulate to the desired age, when we go beyond this limit ticks will be processed in the next frame.\nThis is only relevant when using the DesiredAge age update mode.\nNote: The componet will not be visibile if we have ticks to process and SetCanRenderWhileSeeking is set to true" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_SetMaxSimTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "SetMaxSimTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraComponent_SetMaxSimTime_Statics::NiagaraComponent_eventSetMaxSimTime_Parms), Z_Construct_UFunction_UNiagaraComponent_SetMaxSimTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetMaxSimTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetMaxSimTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetMaxSimTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_SetMaxSimTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_SetMaxSimTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableActor_Statics
	{
		struct NiagaraComponent_eventSetNiagaraVariableActor_Parms
		{
			FString InVariableName;
			AActor* Actor;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InVariableName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InVariableName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableActor_Statics::NewProp_InVariableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableActor_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraComponent_eventSetNiagaraVariableActor_Parms, InVariableName), METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableActor_Statics::NewProp_InVariableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableActor_Statics::NewProp_InVariableName_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraComponent_eventSetNiagaraVariableActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableActor_Statics::NewProp_InVariableName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableActor_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "DisplayName", "Set Niagara Variable By String (Actor)" },
		{ "Keywords", "user parameter variable actor" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "SetNiagaraVariableActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableActor_Statics::NiagaraComponent_eventSetNiagaraVariableActor_Parms), Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableBool_Statics
	{
		struct NiagaraComponent_eventSetNiagaraVariableBool_Parms
		{
			FString InVariableName;
			bool InValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InVariableName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InVariableName;
		static void NewProp_InValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableBool_Statics::NewProp_InVariableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableBool_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraComponent_eventSetNiagaraVariableBool_Parms, InVariableName), METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableBool_Statics::NewProp_InVariableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableBool_Statics::NewProp_InVariableName_MetaData)) };
	void Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableBool_Statics::NewProp_InValue_SetBit(void* Obj)
	{
		((NiagaraComponent_eventSetNiagaraVariableBool_Parms*)Obj)->InValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableBool_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NiagaraComponent_eventSetNiagaraVariableBool_Parms), &Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableBool_Statics::NewProp_InValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableBool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableBool_Statics::NewProp_InVariableName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableBool_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Sets a Niagara bool parameter by name, overriding locally if necessary.*/" },
		{ "DisplayName", "Set Niagara Variable By String (Bool)" },
		{ "Keywords", "user parameter variable bool" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Sets a Niagara bool parameter by name, overriding locally if necessary." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "SetNiagaraVariableBool", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableBool_Statics::NiagaraComponent_eventSetNiagaraVariableBool_Parms), Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableFloat_Statics
	{
		struct NiagaraComponent_eventSetNiagaraVariableFloat_Parms
		{
			FString InVariableName;
			float InValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InVariableName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InVariableName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableFloat_Statics::NewProp_InVariableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableFloat_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraComponent_eventSetNiagaraVariableFloat_Parms, InVariableName), METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableFloat_Statics::NewProp_InVariableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableFloat_Statics::NewProp_InVariableName_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableFloat_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraComponent_eventSetNiagaraVariableFloat_Parms, InValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableFloat_Statics::NewProp_InVariableName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableFloat_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Sets a Niagara float parameter by name, overriding locally if necessary.*/" },
		{ "DisplayName", "Set Niagara Variable By String (Float)" },
		{ "Keywords", "user parameter variable float" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Sets a Niagara float parameter by name, overriding locally if necessary." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "SetNiagaraVariableFloat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableFloat_Statics::NiagaraComponent_eventSetNiagaraVariableFloat_Parms), Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableInt_Statics
	{
		struct NiagaraComponent_eventSetNiagaraVariableInt_Parms
		{
			FString InVariableName;
			int32 InValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InVariableName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InVariableName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableInt_Statics::NewProp_InVariableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableInt_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraComponent_eventSetNiagaraVariableInt_Parms, InVariableName), METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableInt_Statics::NewProp_InVariableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableInt_Statics::NewProp_InVariableName_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableInt_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraComponent_eventSetNiagaraVariableInt_Parms, InValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableInt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableInt_Statics::NewProp_InVariableName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableInt_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Sets a Niagara int parameter by name, overriding locally if necessary.*/" },
		{ "DisplayName", "Set Niagara Variable By String (Int32)" },
		{ "Keywords", "user parameter variable int" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Sets a Niagara int parameter by name, overriding locally if necessary." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "SetNiagaraVariableInt", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableInt_Statics::NiagaraComponent_eventSetNiagaraVariableInt_Parms), Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableLinearColor_Statics
	{
		struct NiagaraComponent_eventSetNiagaraVariableLinearColor_Parms
		{
			FString InVariableName;
			FLinearColor InValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InVariableName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InVariableName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableLinearColor_Statics::NewProp_InVariableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableLinearColor_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraComponent_eventSetNiagaraVariableLinearColor_Parms, InVariableName), METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableLinearColor_Statics::NewProp_InVariableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableLinearColor_Statics::NewProp_InVariableName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableLinearColor_Statics::NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableLinearColor_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraComponent_eventSetNiagaraVariableLinearColor_Parms, InValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableLinearColor_Statics::NewProp_InValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableLinearColor_Statics::NewProp_InValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableLinearColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableLinearColor_Statics::NewProp_InVariableName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableLinearColor_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableLinearColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Sets a Niagara FLinearColor parameter by name, overriding locally if necessary.*/" },
		{ "DisplayName", "Set Niagara Variable By String (LinearColor)" },
		{ "Keywords", "user parameter variable color" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Sets a Niagara FLinearColor parameter by name, overriding locally if necessary." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableLinearColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "SetNiagaraVariableLinearColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableLinearColor_Statics::NiagaraComponent_eventSetNiagaraVariableLinearColor_Parms), Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableLinearColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableLinearColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableLinearColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableLinearColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableLinearColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableLinearColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableMatrix_Statics
	{
		struct FMatrix
		{
			FPlane XPlane;
			FPlane YPlane;
			FPlane ZPlane;
			FPlane WPlane;
		};

		struct NiagaraComponent_eventSetNiagaraVariableMatrix_Parms
		{
			FString InVariableName;
			FMatrix InValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InVariableName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InVariableName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableMatrix_Statics::NewProp_InVariableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableMatrix_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraComponent_eventSetNiagaraVariableMatrix_Parms, InVariableName), METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableMatrix_Statics::NewProp_InVariableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableMatrix_Statics::NewProp_InVariableName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableMatrix_Statics::NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableMatrix_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraComponent_eventSetNiagaraVariableMatrix_Parms, InValue), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableMatrix_Statics::NewProp_InValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableMatrix_Statics::NewProp_InValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableMatrix_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableMatrix_Statics::NewProp_InVariableName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableMatrix_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableMatrix_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Sets a Niagara matrix parameter by name, overriding locally if necessary.*/" },
		{ "DisplayName", "Set Niagara Variable By String (Matrix)" },
		{ "Keywords", "user parameter variable matrix" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Sets a Niagara matrix parameter by name, overriding locally if necessary." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableMatrix_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "SetNiagaraVariableMatrix", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableMatrix_Statics::NiagaraComponent_eventSetNiagaraVariableMatrix_Parms), Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableMatrix_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableMatrix_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableMatrix_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableMatrix_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableMatrix()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableMatrix_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableObject_Statics
	{
		struct NiagaraComponent_eventSetNiagaraVariableObject_Parms
		{
			FString InVariableName;
			UObject* Object;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InVariableName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InVariableName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableObject_Statics::NewProp_InVariableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableObject_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraComponent_eventSetNiagaraVariableObject_Parms, InVariableName), METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableObject_Statics::NewProp_InVariableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableObject_Statics::NewProp_InVariableName_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableObject_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraComponent_eventSetNiagaraVariableObject_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableObject_Statics::NewProp_InVariableName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableObject_Statics::NewProp_Object,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "DisplayName", "Set Niagara Variable By String (Object)" },
		{ "Keywords", "user parameter variable object" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "SetNiagaraVariableObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableObject_Statics::NiagaraComponent_eventSetNiagaraVariableObject_Parms), Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariablePosition_Statics
	{
		struct NiagaraComponent_eventSetNiagaraVariablePosition_Parms
		{
			FString InVariableName;
			FVector InValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InVariableName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InVariableName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariablePosition_Statics::NewProp_InVariableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariablePosition_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraComponent_eventSetNiagaraVariablePosition_Parms, InVariableName), METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariablePosition_Statics::NewProp_InVariableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariablePosition_Statics::NewProp_InVariableName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariablePosition_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraComponent_eventSetNiagaraVariablePosition_Parms, InValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariablePosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariablePosition_Statics::NewProp_InVariableName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariablePosition_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariablePosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Sets a Niagara Position parameter by name, overriding locally if necessary.*/" },
		{ "DisplayName", "Set Niagara Variable By String (Position)" },
		{ "Keywords", "user parameter variable vector position lwc" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Sets a Niagara Position parameter by name, overriding locally if necessary." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariablePosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "SetNiagaraVariablePosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariablePosition_Statics::NiagaraComponent_eventSetNiagaraVariablePosition_Parms), Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariablePosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariablePosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariablePosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariablePosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariablePosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariablePosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableQuat_Statics
	{
		struct NiagaraComponent_eventSetNiagaraVariableQuat_Parms
		{
			FString InVariableName;
			FQuat InValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InVariableName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InVariableName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableQuat_Statics::NewProp_InVariableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableQuat_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraComponent_eventSetNiagaraVariableQuat_Parms, InVariableName), METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableQuat_Statics::NewProp_InVariableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableQuat_Statics::NewProp_InVariableName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableQuat_Statics::NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableQuat_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraComponent_eventSetNiagaraVariableQuat_Parms, InValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableQuat_Statics::NewProp_InValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableQuat_Statics::NewProp_InValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableQuat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableQuat_Statics::NewProp_InVariableName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableQuat_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableQuat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Sets a Niagara quaternion parameter by name, overriding locally if necessary.*/" },
		{ "DisplayName", "Set Niagara Variable By String (Quaternion)" },
		{ "Keywords", "user parameter variable quaternion rotation" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Sets a Niagara quaternion parameter by name, overriding locally if necessary." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableQuat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "SetNiagaraVariableQuat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableQuat_Statics::NiagaraComponent_eventSetNiagaraVariableQuat_Parms), Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableQuat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableQuat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableQuat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableQuat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableQuat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableQuat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec2_Statics
	{
		struct NiagaraComponent_eventSetNiagaraVariableVec2_Parms
		{
			FString InVariableName;
			FVector2D InValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InVariableName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InVariableName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec2_Statics::NewProp_InVariableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec2_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraComponent_eventSetNiagaraVariableVec2_Parms, InVariableName), METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec2_Statics::NewProp_InVariableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec2_Statics::NewProp_InVariableName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec2_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraComponent_eventSetNiagaraVariableVec2_Parms, InValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec2_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec2_Statics::NewProp_InVariableName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec2_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec2_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Sets a Niagara Vector2 parameter by name, overriding locally if necessary.*/" },
		{ "DisplayName", "Set Niagara Variable By String (Vector2)" },
		{ "Keywords", "user parameter variable vector" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Sets a Niagara Vector2 parameter by name, overriding locally if necessary." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "SetNiagaraVariableVec2", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec2_Statics::NiagaraComponent_eventSetNiagaraVariableVec2_Parms), Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec2_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec2_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec2_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec3_Statics
	{
		struct NiagaraComponent_eventSetNiagaraVariableVec3_Parms
		{
			FString InVariableName;
			FVector InValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InVariableName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InVariableName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec3_Statics::NewProp_InVariableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec3_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraComponent_eventSetNiagaraVariableVec3_Parms, InVariableName), METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec3_Statics::NewProp_InVariableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec3_Statics::NewProp_InVariableName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec3_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraComponent_eventSetNiagaraVariableVec3_Parms, InValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec3_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec3_Statics::NewProp_InVariableName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec3_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec3_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Sets a Niagara Vector3 parameter by name, overriding locally if necessary.*/" },
		{ "DisplayName", "Set Niagara Variable By String (Vector3)" },
		{ "Keywords", "user parameter variable vector" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Sets a Niagara Vector3 parameter by name, overriding locally if necessary." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec3_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "SetNiagaraVariableVec3", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec3_Statics::NiagaraComponent_eventSetNiagaraVariableVec3_Parms), Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec3_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec3_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec3_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec3_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec3()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec3_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec4_Statics
	{
		struct NiagaraComponent_eventSetNiagaraVariableVec4_Parms
		{
			FString InVariableName;
			FVector4 InValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InVariableName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InVariableName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec4_Statics::NewProp_InVariableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec4_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraComponent_eventSetNiagaraVariableVec4_Parms, InVariableName), METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec4_Statics::NewProp_InVariableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec4_Statics::NewProp_InVariableName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec4_Statics::NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec4_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraComponent_eventSetNiagaraVariableVec4_Parms, InValue), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec4_Statics::NewProp_InValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec4_Statics::NewProp_InValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec4_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec4_Statics::NewProp_InVariableName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec4_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec4_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Sets a Niagara Vector4 parameter by name, overriding locally if necessary.*/" },
		{ "DisplayName", "Set Niagara Variable By String (Vector4)" },
		{ "Keywords", "user parameter variable vector" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Sets a Niagara Vector4 parameter by name, overriding locally if necessary." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec4_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "SetNiagaraVariableVec4", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec4_Statics::NiagaraComponent_eventSetNiagaraVariableVec4_Parms), Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec4_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec4_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec4_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec4_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec4()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec4_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_SetPaused_Statics
	{
		struct NiagaraComponent_eventSetPaused_Parms
		{
			bool bInPaused;
		};
		static void NewProp_bInPaused_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInPaused;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UNiagaraComponent_SetPaused_Statics::NewProp_bInPaused_SetBit(void* Obj)
	{
		((NiagaraComponent_eventSetPaused_Parms*)Obj)->bInPaused = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetPaused_Statics::NewProp_bInPaused = { "bInPaused", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NiagaraComponent_eventSetPaused_Parms), &Z_Construct_UFunction_UNiagaraComponent_SetPaused_Statics::NewProp_bInPaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_SetPaused_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetPaused_Statics::NewProp_bInPaused,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetPaused_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_SetPaused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "SetPaused", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraComponent_SetPaused_Statics::NiagaraComponent_eventSetPaused_Parms), Z_Construct_UFunction_UNiagaraComponent_SetPaused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetPaused_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetPaused_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetPaused_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_SetPaused()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_SetPaused_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_SetPreviewLODDistance_Statics
	{
		struct NiagaraComponent_eventSetPreviewLODDistance_Parms
		{
			bool bEnablePreviewLODDistance;
			float PreviewLODDistance;
			float PreviewMaxDistance;
		};
		static void NewProp_bEnablePreviewLODDistance_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnablePreviewLODDistance;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PreviewLODDistance;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PreviewMaxDistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UNiagaraComponent_SetPreviewLODDistance_Statics::NewProp_bEnablePreviewLODDistance_SetBit(void* Obj)
	{
		((NiagaraComponent_eventSetPreviewLODDistance_Parms*)Obj)->bEnablePreviewLODDistance = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetPreviewLODDistance_Statics::NewProp_bEnablePreviewLODDistance = { "bEnablePreviewLODDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NiagaraComponent_eventSetPreviewLODDistance_Parms), &Z_Construct_UFunction_UNiagaraComponent_SetPreviewLODDistance_Statics::NewProp_bEnablePreviewLODDistance_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetPreviewLODDistance_Statics::NewProp_PreviewLODDistance = { "PreviewLODDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraComponent_eventSetPreviewLODDistance_Parms, PreviewLODDistance), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetPreviewLODDistance_Statics::NewProp_PreviewMaxDistance = { "PreviewMaxDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraComponent_eventSetPreviewLODDistance_Parms, PreviewMaxDistance), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_SetPreviewLODDistance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetPreviewLODDistance_Statics::NewProp_bEnablePreviewLODDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetPreviewLODDistance_Statics::NewProp_PreviewLODDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetPreviewLODDistance_Statics::NewProp_PreviewMaxDistance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetPreviewLODDistance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Preview" },
		{ "Comment", "//~ End UObject Interface\n" },
		{ "Keywords", "preview LOD Distance scalability" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_SetPreviewLODDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "SetPreviewLODDistance", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraComponent_SetPreviewLODDistance_Statics::NiagaraComponent_eventSetPreviewLODDistance_Parms), Z_Construct_UFunction_UNiagaraComponent_SetPreviewLODDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetPreviewLODDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetPreviewLODDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetPreviewLODDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_SetPreviewLODDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_SetPreviewLODDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_SetRandomSeedOffset_Statics
	{
		struct NiagaraComponent_eventSetRandomSeedOffset_Parms
		{
			int32 NewRandomSeedOffset;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewRandomSeedOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetRandomSeedOffset_Statics::NewProp_NewRandomSeedOffset = { "NewRandomSeedOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraComponent_eventSetRandomSeedOffset_Parms, NewRandomSeedOffset), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_SetRandomSeedOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetRandomSeedOffset_Statics::NewProp_NewRandomSeedOffset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetRandomSeedOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "DisplayName", "Set Random Seed Offset" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_SetRandomSeedOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "SetRandomSeedOffset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraComponent_SetRandomSeedOffset_Statics::NiagaraComponent_eventSetRandomSeedOffset_Parms), Z_Construct_UFunction_UNiagaraComponent_SetRandomSeedOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetRandomSeedOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetRandomSeedOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetRandomSeedOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_SetRandomSeedOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_SetRandomSeedOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_SetRenderingEnabled_Statics
	{
		struct NiagaraComponent_eventSetRenderingEnabled_Parms
		{
			bool bInRenderingEnabled;
		};
		static void NewProp_bInRenderingEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInRenderingEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UNiagaraComponent_SetRenderingEnabled_Statics::NewProp_bInRenderingEnabled_SetBit(void* Obj)
	{
		((NiagaraComponent_eventSetRenderingEnabled_Parms*)Obj)->bInRenderingEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetRenderingEnabled_Statics::NewProp_bInRenderingEnabled = { "bInRenderingEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NiagaraComponent_eventSetRenderingEnabled_Parms), &Z_Construct_UFunction_UNiagaraComponent_SetRenderingEnabled_Statics::NewProp_bInRenderingEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_SetRenderingEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetRenderingEnabled_Statics::NewProp_bInRenderingEnabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetRenderingEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Sets whether or not rendering is enabled for this component. */" },
		{ "DisplayName", "Set Rendering Enabled" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Sets whether or not rendering is enabled for this component." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_SetRenderingEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "SetRenderingEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraComponent_SetRenderingEnabled_Statics::NiagaraComponent_eventSetRenderingEnabled_Parms), Z_Construct_UFunction_UNiagaraComponent_SetRenderingEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetRenderingEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetRenderingEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetRenderingEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_SetRenderingEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_SetRenderingEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_SetSeekDelta_Statics
	{
		struct NiagaraComponent_eventSetSeekDelta_Parms
		{
			float InSeekDelta;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InSeekDelta;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetSeekDelta_Statics::NewProp_InSeekDelta = { "InSeekDelta", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraComponent_eventSetSeekDelta_Parms, InSeekDelta), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_SetSeekDelta_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetSeekDelta_Statics::NewProp_InSeekDelta,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetSeekDelta_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Sets the delta value which is used when seeking from the current age, to the desired age.  This is only relevant\n\x09when using the DesiredAge age update mode. */" },
		{ "DisplayName", "Set Desired Age Seek Delta" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Sets the delta value which is used when seeking from the current age, to the desired age.  This is only relevant\n      when using the DesiredAge age update mode." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_SetSeekDelta_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "SetSeekDelta", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraComponent_SetSeekDelta_Statics::NiagaraComponent_eventSetSeekDelta_Parms), Z_Construct_UFunction_UNiagaraComponent_SetSeekDelta_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetSeekDelta_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetSeekDelta_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetSeekDelta_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_SetSeekDelta()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_SetSeekDelta_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_SetSimCache_Statics
	{
		struct NiagaraComponent_eventSetSimCache_Parms
		{
			UNiagaraSimCache* SimCache;
			bool bResetSystem;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SimCache;
		static void NewProp_bResetSystem_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetSystem;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetSimCache_Statics::NewProp_SimCache = { "SimCache", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraComponent_eventSetSimCache_Parms, SimCache), Z_Construct_UClass_UNiagaraSimCache_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNiagaraComponent_SetSimCache_Statics::NewProp_bResetSystem_SetBit(void* Obj)
	{
		((NiagaraComponent_eventSetSimCache_Parms*)Obj)->bResetSystem = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetSimCache_Statics::NewProp_bResetSystem = { "bResetSystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NiagaraComponent_eventSetSimCache_Parms), &Z_Construct_UFunction_UNiagaraComponent_SetSimCache_Statics::NewProp_bResetSystem_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_SetSimCache_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetSimCache_Statics::NewProp_SimCache,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetSimCache_Statics::NewProp_bResetSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetSimCache_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimCache" },
		{ "Comment", "/**\n\x09Sets the simulation cache to use for the component.\n\x09""A null SimCache parameter will clear the active simulation cache.\n\x09When clearing a simulation cache that has been running you may wish to reset or continue, this option is only\n\x09valid when using a full simulation cache.  A renderer only cache will always reset as we can not continue the\n\x09simulation due to missing simulation data.\n\x09*/" },
		{ "CPP_Default_bResetSystem", "false" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Sets the simulation cache to use for the component.\nA null SimCache parameter will clear the active simulation cache.\nWhen clearing a simulation cache that has been running you may wish to reset or continue, this option is only\nvalid when using a full simulation cache.  A renderer only cache will always reset as we can not continue the\nsimulation due to missing simulation data." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_SetSimCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "SetSimCache", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraComponent_SetSimCache_Statics::NiagaraComponent_eventSetSimCache_Parms), Z_Construct_UFunction_UNiagaraComponent_SetSimCache_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetSimCache_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetSimCache_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetSimCache_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_SetSimCache()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_SetSimCache_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_SetSystemFixedBounds_Statics
	{
		struct NiagaraComponent_eventSetSystemFixedBounds_Parms
		{
			FBox LocalBounds;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalBounds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetSystemFixedBounds_Statics::NewProp_LocalBounds = { "LocalBounds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraComponent_eventSetSystemFixedBounds_Parms, LocalBounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_SetSystemFixedBounds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetSystemFixedBounds_Statics::NewProp_LocalBounds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetSystemFixedBounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/**\n\x09Sets the fixed bounds for the system instance, this overrides all other bounds.\n\x09The box is expected to be in local space not world space.\n\x09""A default uninitialized box will clear the fixed bounds and revert back to system fixed / dynamic bounds.\n\x09*/" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Sets the fixed bounds for the system instance, this overrides all other bounds.\nThe box is expected to be in local space not world space.\nA default uninitialized box will clear the fixed bounds and revert back to system fixed / dynamic bounds." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_SetSystemFixedBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "SetSystemFixedBounds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraComponent_SetSystemFixedBounds_Statics::NiagaraComponent_eventSetSystemFixedBounds_Parms), Z_Construct_UFunction_UNiagaraComponent_SetSystemFixedBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetSystemFixedBounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetSystemFixedBounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetSystemFixedBounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_SetSystemFixedBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_SetSystemFixedBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_SetTickBehavior_Statics
	{
		struct NiagaraComponent_eventSetTickBehavior_Parms
		{
			ENiagaraTickBehavior NewTickBehavior;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewTickBehavior_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewTickBehavior;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNiagaraComponent_SetTickBehavior_Statics::NewProp_NewTickBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetTickBehavior_Statics::NewProp_NewTickBehavior = { "NewTickBehavior", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraComponent_eventSetTickBehavior_Parms, NewTickBehavior), Z_Construct_UEnum_Niagara_ENiagaraTickBehavior, METADATA_PARAMS(nullptr, 0) }; // 698800127
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_SetTickBehavior_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetTickBehavior_Statics::NewProp_NewTickBehavior_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetTickBehavior_Statics::NewProp_NewTickBehavior,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetTickBehavior_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "DisplayName", "Set Tick Behavior" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_SetTickBehavior_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "SetTickBehavior", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraComponent_SetTickBehavior_Statics::NiagaraComponent_eventSetTickBehavior_Parms), Z_Construct_UFunction_UNiagaraComponent_SetTickBehavior_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetTickBehavior_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetTickBehavior_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetTickBehavior_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_SetTickBehavior()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_SetTickBehavior_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_SetVariableActor_Statics
	{
		struct NiagaraComponent_eventSetVariableActor_Parms
		{
			FName InVariableName;
			AActor* Actor;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InVariableName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraComponent_SetVariableActor_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraComponent_eventSetVariableActor_Parms, InVariableName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetVariableActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraComponent_eventSetVariableActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_SetVariableActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetVariableActor_Statics::NewProp_InVariableName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetVariableActor_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetVariableActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "DisplayName", "Set Niagara Variable (Actor)" },
		{ "Keywords", "user parameter variable actor" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_SetVariableActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "SetVariableActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraComponent_SetVariableActor_Statics::NiagaraComponent_eventSetVariableActor_Parms), Z_Construct_UFunction_UNiagaraComponent_SetVariableActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetVariableActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetVariableActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetVariableActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_SetVariableActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_SetVariableActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_SetVariableBool_Statics
	{
		struct NiagaraComponent_eventSetVariableBool_Parms
		{
			FName InVariableName;
			bool InValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InVariableName;
		static void NewProp_InValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraComponent_SetVariableBool_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraComponent_eventSetVariableBool_Parms, InVariableName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNiagaraComponent_SetVariableBool_Statics::NewProp_InValue_SetBit(void* Obj)
	{
		((NiagaraComponent_eventSetVariableBool_Parms*)Obj)->InValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetVariableBool_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NiagaraComponent_eventSetVariableBool_Parms), &Z_Construct_UFunction_UNiagaraComponent_SetVariableBool_Statics::NewProp_InValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_SetVariableBool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetVariableBool_Statics::NewProp_InVariableName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetVariableBool_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetVariableBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Sets a Niagara bool parameter by name, overriding locally if necessary.*/" },
		{ "DisplayName", "Set Niagara Variable (Bool)" },
		{ "Keywords", "user parameter variable bool" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Sets a Niagara bool parameter by name, overriding locally if necessary." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_SetVariableBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "SetVariableBool", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraComponent_SetVariableBool_Statics::NiagaraComponent_eventSetVariableBool_Parms), Z_Construct_UFunction_UNiagaraComponent_SetVariableBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetVariableBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetVariableBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetVariableBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_SetVariableBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_SetVariableBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_SetVariableFloat_Statics
	{
		struct NiagaraComponent_eventSetVariableFloat_Parms
		{
			FName InVariableName;
			float InValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InVariableName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraComponent_SetVariableFloat_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraComponent_eventSetVariableFloat_Parms, InVariableName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetVariableFloat_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraComponent_eventSetVariableFloat_Parms, InValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_SetVariableFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetVariableFloat_Statics::NewProp_InVariableName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetVariableFloat_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetVariableFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Sets a Niagara float parameter by name, overriding locally if necessary.*/" },
		{ "DisplayName", "Set Niagara Variable (Float)" },
		{ "Keywords", "user parameter variable float" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Sets a Niagara float parameter by name, overriding locally if necessary." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_SetVariableFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "SetVariableFloat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraComponent_SetVariableFloat_Statics::NiagaraComponent_eventSetVariableFloat_Parms), Z_Construct_UFunction_UNiagaraComponent_SetVariableFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetVariableFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetVariableFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetVariableFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_SetVariableFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_SetVariableFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_SetVariableInt_Statics
	{
		struct NiagaraComponent_eventSetVariableInt_Parms
		{
			FName InVariableName;
			int32 InValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InVariableName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraComponent_SetVariableInt_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraComponent_eventSetVariableInt_Parms, InVariableName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetVariableInt_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraComponent_eventSetVariableInt_Parms, InValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_SetVariableInt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetVariableInt_Statics::NewProp_InVariableName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetVariableInt_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetVariableInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Sets a Niagara int parameter by name, overriding locally if necessary.*/" },
		{ "DisplayName", "Set Niagara Variable (Int32)" },
		{ "Keywords", "user parameter variable int" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Sets a Niagara int parameter by name, overriding locally if necessary." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_SetVariableInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "SetVariableInt", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraComponent_SetVariableInt_Statics::NiagaraComponent_eventSetVariableInt_Parms), Z_Construct_UFunction_UNiagaraComponent_SetVariableInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetVariableInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetVariableInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetVariableInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_SetVariableInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_SetVariableInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_SetVariableLinearColor_Statics
	{
		struct NiagaraComponent_eventSetVariableLinearColor_Parms
		{
			FName InVariableName;
			FLinearColor InValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InVariableName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraComponent_SetVariableLinearColor_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraComponent_eventSetVariableLinearColor_Parms, InVariableName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetVariableLinearColor_Statics::NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetVariableLinearColor_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraComponent_eventSetVariableLinearColor_Parms, InValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetVariableLinearColor_Statics::NewProp_InValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetVariableLinearColor_Statics::NewProp_InValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_SetVariableLinearColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetVariableLinearColor_Statics::NewProp_InVariableName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetVariableLinearColor_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetVariableLinearColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Sets a Niagara FLinearColor parameter by name, overriding locally if necessary.*/" },
		{ "DisplayName", "Set Niagara Variable (LinearColor)" },
		{ "Keywords", "user parameter variable color" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Sets a Niagara FLinearColor parameter by name, overriding locally if necessary." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_SetVariableLinearColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "SetVariableLinearColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraComponent_SetVariableLinearColor_Statics::NiagaraComponent_eventSetVariableLinearColor_Parms), Z_Construct_UFunction_UNiagaraComponent_SetVariableLinearColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetVariableLinearColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetVariableLinearColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetVariableLinearColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_SetVariableLinearColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_SetVariableLinearColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_SetVariableMaterial_Statics
	{
		struct NiagaraComponent_eventSetVariableMaterial_Parms
		{
			FName InVariableName;
			UMaterialInterface* Object;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InVariableName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraComponent_SetVariableMaterial_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraComponent_eventSetVariableMaterial_Parms, InVariableName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetVariableMaterial_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraComponent_eventSetVariableMaterial_Parms, Object), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_SetVariableMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetVariableMaterial_Statics::NewProp_InVariableName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetVariableMaterial_Statics::NewProp_Object,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetVariableMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "DisplayName", "Set Niagara Variable (Material)" },
		{ "Keywords", "user parameter variable material" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_SetVariableMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "SetVariableMaterial", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraComponent_SetVariableMaterial_Statics::NiagaraComponent_eventSetVariableMaterial_Parms), Z_Construct_UFunction_UNiagaraComponent_SetVariableMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetVariableMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetVariableMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetVariableMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_SetVariableMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_SetVariableMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_SetVariableMatrix_Statics
	{
		struct FMatrix
		{
			FPlane XPlane;
			FPlane YPlane;
			FPlane ZPlane;
			FPlane WPlane;
		};

		struct NiagaraComponent_eventSetVariableMatrix_Parms
		{
			FName InVariableName;
			FMatrix InValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InVariableName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraComponent_SetVariableMatrix_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraComponent_eventSetVariableMatrix_Parms, InVariableName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetVariableMatrix_Statics::NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetVariableMatrix_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraComponent_eventSetVariableMatrix_Parms, InValue), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetVariableMatrix_Statics::NewProp_InValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetVariableMatrix_Statics::NewProp_InValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_SetVariableMatrix_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetVariableMatrix_Statics::NewProp_InVariableName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetVariableMatrix_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetVariableMatrix_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Sets a Niagara matrix parameter by name, overriding locally if necessary.*/" },
		{ "DisplayName", "Set Niagara Variable (Matrix)" },
		{ "Keywords", "user parameter variable matrix" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Sets a Niagara matrix parameter by name, overriding locally if necessary." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_SetVariableMatrix_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "SetVariableMatrix", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraComponent_SetVariableMatrix_Statics::NiagaraComponent_eventSetVariableMatrix_Parms), Z_Construct_UFunction_UNiagaraComponent_SetVariableMatrix_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetVariableMatrix_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetVariableMatrix_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetVariableMatrix_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_SetVariableMatrix()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_SetVariableMatrix_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_SetVariableObject_Statics
	{
		struct NiagaraComponent_eventSetVariableObject_Parms
		{
			FName InVariableName;
			UObject* Object;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InVariableName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraComponent_SetVariableObject_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraComponent_eventSetVariableObject_Parms, InVariableName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetVariableObject_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraComponent_eventSetVariableObject_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_SetVariableObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetVariableObject_Statics::NewProp_InVariableName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetVariableObject_Statics::NewProp_Object,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetVariableObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "DisplayName", "Set Niagara Variable (Object)" },
		{ "Keywords", "user parameter variable object" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_SetVariableObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "SetVariableObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraComponent_SetVariableObject_Statics::NiagaraComponent_eventSetVariableObject_Parms), Z_Construct_UFunction_UNiagaraComponent_SetVariableObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetVariableObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetVariableObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetVariableObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_SetVariableObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_SetVariableObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_SetVariablePosition_Statics
	{
		struct NiagaraComponent_eventSetVariablePosition_Parms
		{
			FName InVariableName;
			FVector InValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InVariableName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraComponent_SetVariablePosition_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraComponent_eventSetVariablePosition_Parms, InVariableName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetVariablePosition_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraComponent_eventSetVariablePosition_Parms, InValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_SetVariablePosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetVariablePosition_Statics::NewProp_InVariableName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetVariablePosition_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetVariablePosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Sets a Niagara Position parameter by name, overriding locally if necessary.*/" },
		{ "DisplayName", "Set Niagara Variable (Position)" },
		{ "Keywords", "user parameter variable vector position lwc" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Sets a Niagara Position parameter by name, overriding locally if necessary." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_SetVariablePosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "SetVariablePosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraComponent_SetVariablePosition_Statics::NiagaraComponent_eventSetVariablePosition_Parms), Z_Construct_UFunction_UNiagaraComponent_SetVariablePosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetVariablePosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetVariablePosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetVariablePosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_SetVariablePosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_SetVariablePosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_SetVariableQuat_Statics
	{
		struct NiagaraComponent_eventSetVariableQuat_Parms
		{
			FName InVariableName;
			FQuat InValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InVariableName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraComponent_SetVariableQuat_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraComponent_eventSetVariableQuat_Parms, InVariableName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetVariableQuat_Statics::NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetVariableQuat_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraComponent_eventSetVariableQuat_Parms, InValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetVariableQuat_Statics::NewProp_InValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetVariableQuat_Statics::NewProp_InValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_SetVariableQuat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetVariableQuat_Statics::NewProp_InVariableName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetVariableQuat_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetVariableQuat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Sets a Niagara quaternion parameter by name, overriding locally if necessary.*/" },
		{ "DisplayName", "Set Niagara Variable (Quaternion)" },
		{ "Keywords", "user parameter variable quaternion rotation" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Sets a Niagara quaternion parameter by name, overriding locally if necessary." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_SetVariableQuat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "SetVariableQuat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraComponent_SetVariableQuat_Statics::NiagaraComponent_eventSetVariableQuat_Parms), Z_Construct_UFunction_UNiagaraComponent_SetVariableQuat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetVariableQuat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetVariableQuat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetVariableQuat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_SetVariableQuat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_SetVariableQuat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_SetVariableStaticMesh_Statics
	{
		struct NiagaraComponent_eventSetVariableStaticMesh_Parms
		{
			FName InVariableName;
			UStaticMesh* InValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InVariableName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraComponent_SetVariableStaticMesh_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraComponent_eventSetVariableStaticMesh_Parms, InVariableName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetVariableStaticMesh_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraComponent_eventSetVariableStaticMesh_Parms, InValue), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_SetVariableStaticMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetVariableStaticMesh_Statics::NewProp_InVariableName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetVariableStaticMesh_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetVariableStaticMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "DisplayName", "Set Niagara Variable (Static Mesh)" },
		{ "Keywords", "user parameter variable mesh" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_SetVariableStaticMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "SetVariableStaticMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraComponent_SetVariableStaticMesh_Statics::NiagaraComponent_eventSetVariableStaticMesh_Parms), Z_Construct_UFunction_UNiagaraComponent_SetVariableStaticMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetVariableStaticMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetVariableStaticMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetVariableStaticMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_SetVariableStaticMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_SetVariableStaticMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_SetVariableTexture_Statics
	{
		struct NiagaraComponent_eventSetVariableTexture_Parms
		{
			FName InVariableName;
			UTexture* Texture;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InVariableName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraComponent_SetVariableTexture_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraComponent_eventSetVariableTexture_Parms, InVariableName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetVariableTexture_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraComponent_eventSetVariableTexture_Parms, Texture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_SetVariableTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetVariableTexture_Statics::NewProp_InVariableName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetVariableTexture_Statics::NewProp_Texture,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetVariableTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "DisplayName", "Set Niagara Variable (Texture)" },
		{ "Keywords", "user parameter variable texture" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_SetVariableTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "SetVariableTexture", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraComponent_SetVariableTexture_Statics::NiagaraComponent_eventSetVariableTexture_Parms), Z_Construct_UFunction_UNiagaraComponent_SetVariableTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetVariableTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetVariableTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetVariableTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_SetVariableTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_SetVariableTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_SetVariableTextureRenderTarget_Statics
	{
		struct NiagaraComponent_eventSetVariableTextureRenderTarget_Parms
		{
			FName InVariableName;
			UTextureRenderTarget* TextureRenderTarget;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InVariableName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TextureRenderTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraComponent_SetVariableTextureRenderTarget_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraComponent_eventSetVariableTextureRenderTarget_Parms, InVariableName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetVariableTextureRenderTarget_Statics::NewProp_TextureRenderTarget = { "TextureRenderTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraComponent_eventSetVariableTextureRenderTarget_Parms, TextureRenderTarget), Z_Construct_UClass_UTextureRenderTarget_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_SetVariableTextureRenderTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetVariableTextureRenderTarget_Statics::NewProp_InVariableName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetVariableTextureRenderTarget_Statics::NewProp_TextureRenderTarget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetVariableTextureRenderTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "DisplayName", "Set Niagara Variable (TextureRenderTarget)" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_SetVariableTextureRenderTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "SetVariableTextureRenderTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraComponent_SetVariableTextureRenderTarget_Statics::NiagaraComponent_eventSetVariableTextureRenderTarget_Parms), Z_Construct_UFunction_UNiagaraComponent_SetVariableTextureRenderTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetVariableTextureRenderTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetVariableTextureRenderTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetVariableTextureRenderTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_SetVariableTextureRenderTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_SetVariableTextureRenderTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_SetVariableVec2_Statics
	{
		struct NiagaraComponent_eventSetVariableVec2_Parms
		{
			FName InVariableName;
			FVector2D InValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InVariableName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraComponent_SetVariableVec2_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraComponent_eventSetVariableVec2_Parms, InVariableName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetVariableVec2_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraComponent_eventSetVariableVec2_Parms, InValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_SetVariableVec2_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetVariableVec2_Statics::NewProp_InVariableName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetVariableVec2_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetVariableVec2_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Sets a Niagara Vector2 parameter by name, overriding locally if necessary.*/" },
		{ "DisplayName", "Set Niagara Variable (Vector2)" },
		{ "Keywords", "user parameter variable vector" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Sets a Niagara Vector2 parameter by name, overriding locally if necessary." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_SetVariableVec2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "SetVariableVec2", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraComponent_SetVariableVec2_Statics::NiagaraComponent_eventSetVariableVec2_Parms), Z_Construct_UFunction_UNiagaraComponent_SetVariableVec2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetVariableVec2_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetVariableVec2_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetVariableVec2_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_SetVariableVec2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_SetVariableVec2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_SetVariableVec3_Statics
	{
		struct NiagaraComponent_eventSetVariableVec3_Parms
		{
			FName InVariableName;
			FVector InValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InVariableName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraComponent_SetVariableVec3_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraComponent_eventSetVariableVec3_Parms, InVariableName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetVariableVec3_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraComponent_eventSetVariableVec3_Parms, InValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_SetVariableVec3_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetVariableVec3_Statics::NewProp_InVariableName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetVariableVec3_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetVariableVec3_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Sets a Niagara Vector3 parameter by name, overriding locally if necessary.*/" },
		{ "DisplayName", "Set Niagara Variable (Vector3)" },
		{ "Keywords", "user parameter variable vector" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Sets a Niagara Vector3 parameter by name, overriding locally if necessary." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_SetVariableVec3_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "SetVariableVec3", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraComponent_SetVariableVec3_Statics::NiagaraComponent_eventSetVariableVec3_Parms), Z_Construct_UFunction_UNiagaraComponent_SetVariableVec3_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetVariableVec3_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetVariableVec3_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetVariableVec3_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_SetVariableVec3()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_SetVariableVec3_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraComponent_SetVariableVec4_Statics
	{
		struct NiagaraComponent_eventSetVariableVec4_Parms
		{
			FName InVariableName;
			FVector4 InValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InVariableName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraComponent_SetVariableVec4_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraComponent_eventSetVariableVec4_Parms, InVariableName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetVariableVec4_Statics::NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraComponent_SetVariableVec4_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraComponent_eventSetVariableVec4_Parms, InValue), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetVariableVec4_Statics::NewProp_InValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetVariableVec4_Statics::NewProp_InValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraComponent_SetVariableVec4_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetVariableVec4_Statics::NewProp_InVariableName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraComponent_SetVariableVec4_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraComponent_SetVariableVec4_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Sets a Niagara Vector4 parameter by name, overriding locally if necessary.*/" },
		{ "DisplayName", "Set Niagara Variable (Vector4)" },
		{ "Keywords", "user parameter variable vector" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Sets a Niagara Vector4 parameter by name, overriding locally if necessary." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraComponent_SetVariableVec4_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraComponent, nullptr, "SetVariableVec4", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraComponent_SetVariableVec4_Statics::NiagaraComponent_eventSetVariableVec4_Parms), Z_Construct_UFunction_UNiagaraComponent_SetVariableVec4_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetVariableVec4_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraComponent_SetVariableVec4_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraComponent_SetVariableVec4_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraComponent_SetVariableVec4()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraComponent_SetVariableVec4_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraComponent);
	UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister()
	{
		return UNiagaraComponent::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Asset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Asset;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TickBehavior_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TickBehavior_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TickBehavior;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RandomSeedOffset_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RandomSeedOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideParameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OverrideParameters;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FBoolPropertyParams NewProp_EditorOverridesValue_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_EditorOverridesValue_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorOverridesValue_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_EditorOverridesValue;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TemplateParameterOverrides_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TemplateParameterOverrides_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TemplateParameterOverrides_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_TemplateParameterOverrides;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InstanceParameterOverrides_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InstanceParameterOverrides_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstanceParameterOverrides_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_InstanceParameterOverrides;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForceSolo_MetaData[];
#endif
		static void NewProp_bForceSolo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceSolo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableGpuComputeDebug_MetaData[];
#endif
		static void NewProp_bEnableGpuComputeDebug_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableGpuComputeDebug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideWarmupSettings_MetaData[];
#endif
		static void NewProp_bOverrideWarmupSettings_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideWarmupSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WarmupTickCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_WarmupTickCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WarmupTickDelta_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WarmupTickDelta;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoDestroy_MetaData[];
#endif
		static void NewProp_bAutoDestroy_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoDestroy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRenderingEnabled_MetaData[];
#endif
		static void NewProp_bRenderingEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRenderingEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoManageAttachment_MetaData[];
#endif
		static void NewProp_bAutoManageAttachment_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoManageAttachment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoAttachWeldSimulatedBodies_MetaData[];
#endif
		static void NewProp_bAutoAttachWeldSimulatedBodies_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoAttachWeldSimulatedBodies;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxTimeBeforeForceUpdateTransform_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxTimeBeforeForceUpdateTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSystemFinished_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSystemFinished;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoAttachParent_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_AutoAttachParent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoAttachSocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AutoAttachSocketName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AutoAttachLocationRule_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoAttachLocationRule_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AutoAttachLocationRule;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AutoAttachRotationRule_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoAttachRotationRule_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AutoAttachRotationRule;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AutoAttachScaleRule_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoAttachScaleRule_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AutoAttachScaleRule;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWaitForCompilationOnActivate_MetaData[];
#endif
		static void NewProp_bWaitForCompilationOnActivate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWaitForCompilationOnActivate;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowScalability_MetaData[];
#endif
		static void NewProp_bAllowScalability_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowScalability;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimCache_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SimCache;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CullProxy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CullProxy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFXSystemComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNiagaraComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNiagaraComponent_AdvanceSimulation, "AdvanceSimulation" }, // 505911858
		{ &Z_Construct_UFunction_UNiagaraComponent_AdvanceSimulationByTime, "AdvanceSimulationByTime" }, // 2193087072
		{ &Z_Construct_UFunction_UNiagaraComponent_ClearEmitterFixedBounds, "ClearEmitterFixedBounds" }, // 266373267
		{ &Z_Construct_UFunction_UNiagaraComponent_ClearSimCache, "ClearSimCache" }, // 2007373625
		{ &Z_Construct_UFunction_UNiagaraComponent_ClearSystemFixedBounds, "ClearSystemFixedBounds" }, // 1520557457
		{ &Z_Construct_UFunction_UNiagaraComponent_GetAgeUpdateMode, "GetAgeUpdateMode" }, // 1266433562
		{ &Z_Construct_UFunction_UNiagaraComponent_GetAllowScalability, "GetAllowScalability" }, // 1045261891
		{ &Z_Construct_UFunction_UNiagaraComponent_GetAsset, "GetAsset" }, // 1793885023
		{ &Z_Construct_UFunction_UNiagaraComponent_GetCustomTimeDilation, "GetCustomTimeDilation" }, // 3382254795
		{ &Z_Construct_UFunction_UNiagaraComponent_GetDataInterface, "GetDataInterface" }, // 2308609191
		{ &Z_Construct_UFunction_UNiagaraComponent_GetDesiredAge, "GetDesiredAge" }, // 2237551037
		{ &Z_Construct_UFunction_UNiagaraComponent_GetEmitterFixedBounds, "GetEmitterFixedBounds" }, // 4000331687
		{ &Z_Construct_UFunction_UNiagaraComponent_GetForceLocalPlayerEffect, "GetForceLocalPlayerEffect" }, // 841382858
		{ &Z_Construct_UFunction_UNiagaraComponent_GetForceSolo, "GetForceSolo" }, // 46503789
		{ &Z_Construct_UFunction_UNiagaraComponent_GetLockDesiredAgeDeltaTimeToSeekDelta, "GetLockDesiredAgeDeltaTimeToSeekDelta" }, // 196548977
		{ &Z_Construct_UFunction_UNiagaraComponent_GetMaxSimTime, "GetMaxSimTime" }, // 2173412673
		{ &Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticlePositions_DebugOnly, "GetNiagaraParticlePositions_DebugOnly" }, // 1579447601
		{ &Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValues_DebugOnly, "GetNiagaraParticleValues_DebugOnly" }, // 2208239251
		{ &Z_Construct_UFunction_UNiagaraComponent_GetNiagaraParticleValueVec3_DebugOnly, "GetNiagaraParticleValueVec3_DebugOnly" }, // 312072794
		{ &Z_Construct_UFunction_UNiagaraComponent_GetPreviewLODDistance, "GetPreviewLODDistance" }, // 1445058412
		{ &Z_Construct_UFunction_UNiagaraComponent_GetPreviewLODDistanceEnabled, "GetPreviewLODDistanceEnabled" }, // 1664608861
		{ &Z_Construct_UFunction_UNiagaraComponent_GetRandomSeedOffset, "GetRandomSeedOffset" }, // 1532745493
		{ &Z_Construct_UFunction_UNiagaraComponent_GetSeekDelta, "GetSeekDelta" }, // 1253140150
		{ &Z_Construct_UFunction_UNiagaraComponent_GetSimCache, "GetSimCache" }, // 2927634374
		{ &Z_Construct_UFunction_UNiagaraComponent_GetSystemFixedBounds, "GetSystemFixedBounds" }, // 2466643478
		{ &Z_Construct_UFunction_UNiagaraComponent_GetTickBehavior, "GetTickBehavior" }, // 2064582944
		{ &Z_Construct_UFunction_UNiagaraComponent_InitForPerformanceBaseline, "InitForPerformanceBaseline" }, // 3581760878
		{ &Z_Construct_UFunction_UNiagaraComponent_IsPaused, "IsPaused" }, // 485651111
		{ &Z_Construct_UFunction_UNiagaraComponent_ReinitializeSystem, "ReinitializeSystem" }, // 2035786977
		{ &Z_Construct_UFunction_UNiagaraComponent_ResetSystem, "ResetSystem" }, // 1288028112
		{ &Z_Construct_UFunction_UNiagaraComponent_SeekToDesiredAge, "SeekToDesiredAge" }, // 3439809078
		{ &Z_Construct_UFunction_UNiagaraComponent_SetAgeUpdateMode, "SetAgeUpdateMode" }, // 2476397905
		{ &Z_Construct_UFunction_UNiagaraComponent_SetAllowScalability, "SetAllowScalability" }, // 314489149
		{ &Z_Construct_UFunction_UNiagaraComponent_SetAsset, "SetAsset" }, // 3422713144
		{ &Z_Construct_UFunction_UNiagaraComponent_SetAutoDestroy, "SetAutoDestroy" }, // 408075746
		{ &Z_Construct_UFunction_UNiagaraComponent_SetCanRenderWhileSeeking, "SetCanRenderWhileSeeking" }, // 1444023082
		{ &Z_Construct_UFunction_UNiagaraComponent_SetCustomTimeDilation, "SetCustomTimeDilation" }, // 3954249189
		{ &Z_Construct_UFunction_UNiagaraComponent_SetDesiredAge, "SetDesiredAge" }, // 2106558582
		{ &Z_Construct_UFunction_UNiagaraComponent_SetEmitterFixedBounds, "SetEmitterFixedBounds" }, // 1208426507
		{ &Z_Construct_UFunction_UNiagaraComponent_SetForceLocalPlayerEffect, "SetForceLocalPlayerEffect" }, // 3369172209
		{ &Z_Construct_UFunction_UNiagaraComponent_SetForceSolo, "SetForceSolo" }, // 1788864174
		{ &Z_Construct_UFunction_UNiagaraComponent_SetGpuComputeDebug, "SetGpuComputeDebug" }, // 525281636
		{ &Z_Construct_UFunction_UNiagaraComponent_SetLockDesiredAgeDeltaTimeToSeekDelta, "SetLockDesiredAgeDeltaTimeToSeekDelta" }, // 251033628
		{ &Z_Construct_UFunction_UNiagaraComponent_SetMaxSimTime, "SetMaxSimTime" }, // 1543026425
		{ &Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableActor, "SetNiagaraVariableActor" }, // 1550793050
		{ &Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableBool, "SetNiagaraVariableBool" }, // 1018694701
		{ &Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableFloat, "SetNiagaraVariableFloat" }, // 940271052
		{ &Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableInt, "SetNiagaraVariableInt" }, // 690783644
		{ &Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableLinearColor, "SetNiagaraVariableLinearColor" }, // 513097893
		{ &Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableMatrix, "SetNiagaraVariableMatrix" }, // 444765401
		{ &Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableObject, "SetNiagaraVariableObject" }, // 3574197369
		{ &Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariablePosition, "SetNiagaraVariablePosition" }, // 1210367275
		{ &Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableQuat, "SetNiagaraVariableQuat" }, // 2578565983
		{ &Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec2, "SetNiagaraVariableVec2" }, // 4030118252
		{ &Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec3, "SetNiagaraVariableVec3" }, // 1475803674
		{ &Z_Construct_UFunction_UNiagaraComponent_SetNiagaraVariableVec4, "SetNiagaraVariableVec4" }, // 856309304
		{ &Z_Construct_UFunction_UNiagaraComponent_SetPaused, "SetPaused" }, // 2131319996
		{ &Z_Construct_UFunction_UNiagaraComponent_SetPreviewLODDistance, "SetPreviewLODDistance" }, // 4030100065
		{ &Z_Construct_UFunction_UNiagaraComponent_SetRandomSeedOffset, "SetRandomSeedOffset" }, // 2624165071
		{ &Z_Construct_UFunction_UNiagaraComponent_SetRenderingEnabled, "SetRenderingEnabled" }, // 878363199
		{ &Z_Construct_UFunction_UNiagaraComponent_SetSeekDelta, "SetSeekDelta" }, // 534186591
		{ &Z_Construct_UFunction_UNiagaraComponent_SetSimCache, "SetSimCache" }, // 3922607699
		{ &Z_Construct_UFunction_UNiagaraComponent_SetSystemFixedBounds, "SetSystemFixedBounds" }, // 2219783560
		{ &Z_Construct_UFunction_UNiagaraComponent_SetTickBehavior, "SetTickBehavior" }, // 3671173980
		{ &Z_Construct_UFunction_UNiagaraComponent_SetVariableActor, "SetVariableActor" }, // 2969403347
		{ &Z_Construct_UFunction_UNiagaraComponent_SetVariableBool, "SetVariableBool" }, // 4127242936
		{ &Z_Construct_UFunction_UNiagaraComponent_SetVariableFloat, "SetVariableFloat" }, // 4285014350
		{ &Z_Construct_UFunction_UNiagaraComponent_SetVariableInt, "SetVariableInt" }, // 1526289350
		{ &Z_Construct_UFunction_UNiagaraComponent_SetVariableLinearColor, "SetVariableLinearColor" }, // 1214309930
		{ &Z_Construct_UFunction_UNiagaraComponent_SetVariableMaterial, "SetVariableMaterial" }, // 2220964902
		{ &Z_Construct_UFunction_UNiagaraComponent_SetVariableMatrix, "SetVariableMatrix" }, // 2074884446
		{ &Z_Construct_UFunction_UNiagaraComponent_SetVariableObject, "SetVariableObject" }, // 1428417370
		{ &Z_Construct_UFunction_UNiagaraComponent_SetVariablePosition, "SetVariablePosition" }, // 443054586
		{ &Z_Construct_UFunction_UNiagaraComponent_SetVariableQuat, "SetVariableQuat" }, // 639376452
		{ &Z_Construct_UFunction_UNiagaraComponent_SetVariableStaticMesh, "SetVariableStaticMesh" }, // 1659007010
		{ &Z_Construct_UFunction_UNiagaraComponent_SetVariableTexture, "SetVariableTexture" }, // 322107083
		{ &Z_Construct_UFunction_UNiagaraComponent_SetVariableTextureRenderTarget, "SetVariableTextureRenderTarget" }, // 4224142199
		{ &Z_Construct_UFunction_UNiagaraComponent_SetVariableVec2, "SetVariableVec2" }, // 292124927
		{ &Z_Construct_UFunction_UNiagaraComponent_SetVariableVec3, "SetVariableVec3" }, // 599683629
		{ &Z_Construct_UFunction_UNiagaraComponent_SetVariableVec4, "SetVariableVec4" }, // 1522799942
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Rendering Common" },
		{ "Comment", "/**\n* UNiagaraComponent is the primitive component for a Niagara System.\n* @see ANiagaraActor\n* @see UNiagaraSystem\n*/" },
		{ "DisplayName", "Niagara Particle System Component" },
		{ "HideCategories", "Object Physics Collision Mobility VirtualTexture" },
		{ "IncludePath", "NiagaraComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "UNiagaraComponent is the primitive component for a Niagara System.\n@see ANiagaraActor\n@see UNiagaraSystem" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_Asset_MetaData[] = {
		{ "Category", "Niagara" },
		{ "DisplayName", "Niagara System Asset" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraComponent, Asset), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_Asset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_Asset_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_TickBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_TickBehavior_MetaData[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Allows you to control how Niagara selects the tick group, changing this while an instance is active will result in not change as it is cached. */" },
		{ "DisplayName", "Niagara Tick Behavior" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Allows you to control how Niagara selects the tick group, changing this while an instance is active will result in not change as it is cached." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_TickBehavior = { "TickBehavior", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraComponent, TickBehavior), Z_Construct_UEnum_Niagara_ENiagaraTickBehavior, METADATA_PARAMS(Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_TickBehavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_TickBehavior_MetaData)) }; // 698800127
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_RandomSeedOffset_MetaData[] = {
		{ "Category", "Randomness" },
		{ "Comment", "/**\n\x09 * Offsets the deterministic random seed of all emitters. Used to achieve variety between components, while still achieving determinism.\n\x09 * WARNINGS:\n\x09 * - If this value is set in a non-deterministic way, it has the potential to break determinism of the entire system.\n\x09 * - This value is applied when emitters are activated/reset, and changing them while the emitter is active has no effect.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Offsets the deterministic random seed of all emitters. Used to achieve variety between components, while still achieving determinism.\nWARNINGS:\n- If this value is set in a non-deterministic way, it has the potential to break determinism of the entire system.\n- This value is applied when emitters are activated/reset, and changing them while the emitter is active has no effect." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_RandomSeedOffset = { "RandomSeedOffset", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraComponent, RandomSeedOffset), METADATA_PARAMS(Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_RandomSeedOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_RandomSeedOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_OverrideParameters_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_OverrideParameters = { "OverrideParameters", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraComponent, OverrideParameters), Z_Construct_UScriptStruct_FNiagaraUserRedirectionParameterStore, METADATA_PARAMS(Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_OverrideParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_OverrideParameters_MetaData)) }; // 2566035836
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_EditorOverridesValue_ValueProp = { "EditorOverridesValue", nullptr, (EPropertyFlags)0x0000000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_EditorOverridesValue_Key_KeyProp = { "EditorOverridesValue_Key", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_EditorOverridesValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_EditorOverridesValue = { "EditorOverridesValue", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraComponent, EditorOverridesValue_DEPRECATED), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_EditorOverridesValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_EditorOverridesValue_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_TemplateParameterOverrides_ValueProp = { "TemplateParameterOverrides", nullptr, (EPropertyFlags)0x0000008800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FNiagaraVariant, METADATA_PARAMS(nullptr, 0) }; // 1290635328
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_TemplateParameterOverrides_Key_KeyProp = { "TemplateParameterOverrides_Key", nullptr, (EPropertyFlags)0x0000008800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraVariableBase, METADATA_PARAMS(nullptr, 0) }; // 1114376608
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_TemplateParameterOverrides_MetaData[] = {
		{ "Category", "Niagara" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_TemplateParameterOverrides = { "TemplateParameterOverrides", nullptr, (EPropertyFlags)0x0040008800000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraComponent, TemplateParameterOverrides), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_TemplateParameterOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_TemplateParameterOverrides_MetaData)) }; // 1114376608 1290635328
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_InstanceParameterOverrides_ValueProp = { "InstanceParameterOverrides", nullptr, (EPropertyFlags)0x0000008800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FNiagaraVariant, METADATA_PARAMS(nullptr, 0) }; // 1290635328
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_InstanceParameterOverrides_Key_KeyProp = { "InstanceParameterOverrides_Key", nullptr, (EPropertyFlags)0x0000008800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraVariableBase, METADATA_PARAMS(nullptr, 0) }; // 1114376608
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_InstanceParameterOverrides_MetaData[] = {
		{ "Category", "Niagara" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_InstanceParameterOverrides = { "InstanceParameterOverrides", nullptr, (EPropertyFlags)0x0040008800000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraComponent, InstanceParameterOverrides), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_InstanceParameterOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_InstanceParameterOverrides_MetaData)) }; // 1114376608 1290635328
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bForceSolo_MetaData[] = {
		{ "Category", "Parameters" },
		{ "Comment", "/**\n\x09When true, this component's system will be force to update via a slower \"solo\" path rather than the more optimal batched path with other instances of the same system.\n\x09*/" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "When true, this component's system will be force to update via a slower \"solo\" path rather than the more optimal batched path with other instances of the same system." },
	};
#endif
	void Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bForceSolo_SetBit(void* Obj)
	{
		((UNiagaraComponent*)Obj)->bForceSolo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bForceSolo = { "bForceSolo", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNiagaraComponent), &Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bForceSolo_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bForceSolo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bForceSolo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bEnableGpuComputeDebug_MetaData[] = {
		{ "Category", "Parameters" },
		{ "Comment", "/** When true the GPU simulation debug display will enabled, allowing information used during simulation to be visualized. */" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "When true the GPU simulation debug display will enabled, allowing information used during simulation to be visualized." },
	};
#endif
	void Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bEnableGpuComputeDebug_SetBit(void* Obj)
	{
		((UNiagaraComponent*)Obj)->bEnableGpuComputeDebug = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bEnableGpuComputeDebug = { "bEnableGpuComputeDebug", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNiagaraComponent), &Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bEnableGpuComputeDebug_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bEnableGpuComputeDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bEnableGpuComputeDebug_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bOverrideWarmupSettings_MetaData[] = {
		{ "Category", "Warmup" },
		{ "Comment", "/** When true then this instance will override the system's warmup settings. */" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "When true then this instance will override the system's warmup settings." },
	};
#endif
	void Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bOverrideWarmupSettings_SetBit(void* Obj)
	{
		((UNiagaraComponent*)Obj)->bOverrideWarmupSettings = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bOverrideWarmupSettings = { "bOverrideWarmupSettings", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNiagaraComponent), &Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bOverrideWarmupSettings_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bOverrideWarmupSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bOverrideWarmupSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_WarmupTickCount_MetaData[] = {
		{ "Category", "Warmup" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Number of ticks to process for warmup of the system. Total warmup time is WarmupTickCount * WarmupTickDelta. */" },
		{ "EditCondition", "bOverrideWarmupSettings" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Number of ticks to process for warmup of the system. Total warmup time is WarmupTickCount * WarmupTickDelta." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_WarmupTickCount = { "WarmupTickCount", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraComponent, WarmupTickCount), METADATA_PARAMS(Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_WarmupTickCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_WarmupTickCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_WarmupTickDelta_MetaData[] = {
		{ "Category", "Warmup" },
		{ "Comment", "/** Delta time used when ticking the system in warmup mode. */" },
		{ "EditCondition", "bOverrideWarmupSettings" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Delta time used when ticking the system in warmup mode." },
		{ "UIMax", "1" },
		{ "UIMin", "0.01" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_WarmupTickDelta = { "WarmupTickDelta", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraComponent, WarmupTickDelta), METADATA_PARAMS(Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_WarmupTickDelta_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_WarmupTickDelta_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bAutoDestroy_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
	};
#endif
	void Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bAutoDestroy_SetBit(void* Obj)
	{
		((UNiagaraComponent*)Obj)->bAutoDestroy = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bAutoDestroy = { "bAutoDestroy", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNiagaraComponent), &Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bAutoDestroy_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bAutoDestroy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bAutoDestroy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bRenderingEnabled_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
	};
#endif
	void Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bRenderingEnabled_SetBit(void* Obj)
	{
		((UNiagaraComponent*)Obj)->bRenderingEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bRenderingEnabled = { "bRenderingEnabled", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNiagaraComponent), &Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bRenderingEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bRenderingEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bRenderingEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bAutoManageAttachment_MetaData[] = {
		{ "Category", "Attachment" },
		{ "Comment", "/**\n\x09* True if we should automatically attach to AutoAttachParent when activated, and detach from our parent when completed.\n\x09* This overrides any current attachment that may be present at the time of activation (deferring initial attachment until activation, if AutoAttachParent is null).\n\x09* When enabled, detachment occurs regardless of whether AutoAttachParent is assigned, and the relative transform from the time of activation is restored.\n\x09* This also disables attachment on dedicated servers, where we don't actually activate even if bAutoActivate is true.\n\x09* @see AutoAttachParent, AutoAttachSocketName, AutoAttachLocationType\n\x09*/" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "True if we should automatically attach to AutoAttachParent when activated, and detach from our parent when completed.\nThis overrides any current attachment that may be present at the time of activation (deferring initial attachment until activation, if AutoAttachParent is null).\nWhen enabled, detachment occurs regardless of whether AutoAttachParent is assigned, and the relative transform from the time of activation is restored.\nThis also disables attachment on dedicated servers, where we don't actually activate even if bAutoActivate is true.\n@see AutoAttachParent, AutoAttachSocketName, AutoAttachLocationType" },
	};
#endif
	void Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bAutoManageAttachment_SetBit(void* Obj)
	{
		((UNiagaraComponent*)Obj)->bAutoManageAttachment = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bAutoManageAttachment = { "bAutoManageAttachment", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNiagaraComponent), &Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bAutoManageAttachment_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bAutoManageAttachment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bAutoManageAttachment_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bAutoAttachWeldSimulatedBodies_MetaData[] = {
		{ "Category", "Attachment" },
		{ "Comment", "/**\n\x09 * Option for how we handle bWeldSimulatedBodies when we attach to the AutoAttachParent, if bAutoManageAttachment is true.\n\x09 * @see bAutoManageAttachment\n\x09 */" },
		{ "EditCondition", "bAutoManageAttachment" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Option for how we handle bWeldSimulatedBodies when we attach to the AutoAttachParent, if bAutoManageAttachment is true.\n@see bAutoManageAttachment" },
	};
#endif
	void Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bAutoAttachWeldSimulatedBodies_SetBit(void* Obj)
	{
		((UNiagaraComponent*)Obj)->bAutoAttachWeldSimulatedBodies = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bAutoAttachWeldSimulatedBodies = { "bAutoAttachWeldSimulatedBodies", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNiagaraComponent), &Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bAutoAttachWeldSimulatedBodies_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bAutoAttachWeldSimulatedBodies_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bAutoAttachWeldSimulatedBodies_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_MaxTimeBeforeForceUpdateTransform_MetaData[] = {
		{ "Comment", "/**\n\x09 * Time between forced UpdateTransforms for systems that use dynamically calculated bounds,\n\x09 * Which is effectively how often the bounds are shrunk.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Time between forced UpdateTransforms for systems that use dynamically calculated bounds,\nWhich is effectively how often the bounds are shrunk." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_MaxTimeBeforeForceUpdateTransform = { "MaxTimeBeforeForceUpdateTransform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraComponent, MaxTimeBeforeForceUpdateTransform), METADATA_PARAMS(Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_MaxTimeBeforeForceUpdateTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_MaxTimeBeforeForceUpdateTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_OnSystemFinished_MetaData[] = {
		{ "Comment", "// Called when the particle system is done\n" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Called when the particle system is done" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_OnSystemFinished = { "OnSystemFinished", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraComponent, OnSystemFinished), Z_Construct_UDelegateFunction_Niagara_OnNiagaraSystemFinished__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_OnSystemFinished_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_OnSystemFinished_MetaData)) }; // 770866218
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_AutoAttachParent_MetaData[] = {
		{ "Category", "Attachment" },
		{ "Comment", "/**\n\x09 * Component we automatically attach to when activated, if bAutoManageAttachment is true.\n\x09 * If null during registration, we assign the existing AttachParent and defer attachment until we activate.\n\x09 * @see bAutoManageAttachment\n\x09 */" },
		{ "EditCondition", "bAutoManageAttachment" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Component we automatically attach to when activated, if bAutoManageAttachment is true.\nIf null during registration, we assign the existing AttachParent and defer attachment until we activate.\n@see bAutoManageAttachment" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_AutoAttachParent = { "AutoAttachParent", nullptr, (EPropertyFlags)0x00140000000a080d, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraComponent, AutoAttachParent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_AutoAttachParent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_AutoAttachParent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_AutoAttachSocketName_MetaData[] = {
		{ "Category", "Attachment" },
		{ "Comment", "/**\n\x09 * Socket we automatically attach to on the AutoAttachParent, if bAutoManageAttachment is true.\n\x09 * @see bAutoManageAttachment\n\x09 */" },
		{ "EditCondition", "bAutoManageAttachment" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Socket we automatically attach to on the AutoAttachParent, if bAutoManageAttachment is true.\n@see bAutoManageAttachment" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_AutoAttachSocketName = { "AutoAttachSocketName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraComponent, AutoAttachSocketName), METADATA_PARAMS(Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_AutoAttachSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_AutoAttachSocketName_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_AutoAttachLocationRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_AutoAttachLocationRule_MetaData[] = {
		{ "Category", "Attachment" },
		{ "Comment", "/**\n\x09 * Options for how we handle our location when we attach to the AutoAttachParent, if bAutoManageAttachment is true.\n\x09 * @see bAutoManageAttachment, EAttachmentRule\n\x09 */" },
		{ "EditCondition", "bAutoManageAttachment" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Options for how we handle our location when we attach to the AutoAttachParent, if bAutoManageAttachment is true.\n@see bAutoManageAttachment, EAttachmentRule" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_AutoAttachLocationRule = { "AutoAttachLocationRule", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraComponent, AutoAttachLocationRule), Z_Construct_UEnum_Engine_EAttachmentRule, METADATA_PARAMS(Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_AutoAttachLocationRule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_AutoAttachLocationRule_MetaData)) }; // 1532071077
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_AutoAttachRotationRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_AutoAttachRotationRule_MetaData[] = {
		{ "Category", "Attachment" },
		{ "Comment", "/**\n\x09 * Options for how we handle our rotation when we attach to the AutoAttachParent, if bAutoManageAttachment is true.\n\x09 * @see bAutoManageAttachment, EAttachmentRule\n\x09 */" },
		{ "EditCondition", "bAutoManageAttachment" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Options for how we handle our rotation when we attach to the AutoAttachParent, if bAutoManageAttachment is true.\n@see bAutoManageAttachment, EAttachmentRule" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_AutoAttachRotationRule = { "AutoAttachRotationRule", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraComponent, AutoAttachRotationRule), Z_Construct_UEnum_Engine_EAttachmentRule, METADATA_PARAMS(Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_AutoAttachRotationRule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_AutoAttachRotationRule_MetaData)) }; // 1532071077
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_AutoAttachScaleRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_AutoAttachScaleRule_MetaData[] = {
		{ "Category", "Attachment" },
		{ "Comment", "/**\n\x09 * Options for how we handle our scale when we attach to the AutoAttachParent, if bAutoManageAttachment is true.\n\x09 * @see bAutoManageAttachment, EAttachmentRule\n\x09 */" },
		{ "EditCondition", "bAutoManageAttachment" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Options for how we handle our scale when we attach to the AutoAttachParent, if bAutoManageAttachment is true.\n@see bAutoManageAttachment, EAttachmentRule" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_AutoAttachScaleRule = { "AutoAttachScaleRule", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraComponent, AutoAttachScaleRule), Z_Construct_UEnum_Engine_EAttachmentRule, METADATA_PARAMS(Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_AutoAttachScaleRule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_AutoAttachScaleRule_MetaData)) }; // 1532071077
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bWaitForCompilationOnActivate_MetaData[] = {
		{ "Category", "Compilation" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
	};
#endif
	void Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bWaitForCompilationOnActivate_SetBit(void* Obj)
	{
		((UNiagaraComponent*)Obj)->bWaitForCompilationOnActivate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bWaitForCompilationOnActivate = { "bWaitForCompilationOnActivate", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNiagaraComponent), &Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bWaitForCompilationOnActivate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bWaitForCompilationOnActivate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bWaitForCompilationOnActivate_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bAllowScalability_MetaData[] = {
		{ "BlueprintGetter", "GetAllowScalability" },
		{ "BlueprintSetter", "SetAllowScalability" },
		{ "Category", "Niagara" },
		{ "Comment", "/** Controls whether we allow scalability culling for this component. If enabled, this component's FX may be culled due to things such as distance, visibility, instance counts and performance. */" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
		{ "ToolTip", "Controls whether we allow scalability culling for this component. If enabled, this component's FX may be culled due to things such as distance, visibility, instance counts and performance." },
	};
#endif
	void Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bAllowScalability_SetBit(void* Obj)
	{
		((UNiagaraComponent*)Obj)->bAllowScalability = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bAllowScalability = { "bAllowScalability", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNiagaraComponent), &Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bAllowScalability_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bAllowScalability_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bAllowScalability_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_SimCache_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_SimCache = { "SimCache", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraComponent, SimCache), Z_Construct_UClass_UNiagaraSimCache_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_SimCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_SimCache_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_CullProxy_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NiagaraComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_CullProxy = { "CullProxy", nullptr, (EPropertyFlags)0x0044000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraComponent, CullProxy), Z_Construct_UClass_UNiagaraCullProxyComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_CullProxy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_CullProxy_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_Asset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_TickBehavior_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_TickBehavior,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_RandomSeedOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_OverrideParameters,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_EditorOverridesValue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_EditorOverridesValue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_EditorOverridesValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_TemplateParameterOverrides_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_TemplateParameterOverrides_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_TemplateParameterOverrides,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_InstanceParameterOverrides_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_InstanceParameterOverrides_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_InstanceParameterOverrides,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bForceSolo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bEnableGpuComputeDebug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bOverrideWarmupSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_WarmupTickCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_WarmupTickDelta,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bAutoDestroy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bRenderingEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bAutoManageAttachment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bAutoAttachWeldSimulatedBodies,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_MaxTimeBeforeForceUpdateTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_OnSystemFinished,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_AutoAttachParent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_AutoAttachSocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_AutoAttachLocationRule_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_AutoAttachLocationRule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_AutoAttachRotationRule_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_AutoAttachRotationRule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_AutoAttachScaleRule_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_AutoAttachScaleRule,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bWaitForCompilationOnActivate,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_bAllowScalability,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_SimCache,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponent_Statics::NewProp_CullProxy,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraComponent_Statics::ClassParams = {
		&UNiagaraComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UNiagaraComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraComponent()
	{
		if (!Z_Registration_Info_UClass_UNiagaraComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraComponent.OuterSingleton, Z_Construct_UClass_UNiagaraComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraComponent.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraComponent>()
	{
		return UNiagaraComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraComponent);
	UNiagaraComponent::~UNiagaraComponent() {}
	IMPLEMENT_FARCHIVE_SERIALIZER(UNiagaraComponent)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraComponent, UNiagaraComponent::StaticClass, TEXT("UNiagaraComponent"), &Z_Registration_Info_UClass_UNiagaraComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraComponent), 342162880U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponent_h_4069535129(TEXT("/Script/Niagara"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
