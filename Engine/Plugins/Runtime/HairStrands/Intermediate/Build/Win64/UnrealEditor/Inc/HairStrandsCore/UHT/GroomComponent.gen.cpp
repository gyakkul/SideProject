// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GroomComponent.h"
#include "GroomAssetPhysics.h"
#include "GroomDesc.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGroomComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ULODSyncInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_UMeshDeformer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMeshDeformerInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMeshDeformerInstanceSettings_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomAsset_NoRegister();
	HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomBindingAsset_NoRegister();
	HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomCache_NoRegister();
	HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomComponent();
	HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomComponent_NoRegister();
	HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FHairGroupDesc();
	HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FHairSimulationSettings();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraPhysicsAssetDICollectorInterface_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_HairStrandsCore();
// End Cross Module References
	DEFINE_FUNCTION(UGroomComponent::execGetIsHairLengthScaleEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsHairLengthScaleEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGroomComponent::execSetHairLengthScaleEnable)
	{
		P_GET_UBOOL(Z_Param_bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHairLengthScaleEnable(Z_Param_bEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGroomComponent::execSetHairLengthScale)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHairLengthScale(Z_Param_Scale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGroomComponent::execGetNiagaraComponent)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_GroupIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UNiagaraComponent**)Z_Param__Result=P_THIS->GetNiagaraComponent(Z_Param_GroupIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGroomComponent::execResetSimulation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetSimulation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGroomComponent::execSetEnableSimulation)
	{
		P_GET_UBOOL(Z_Param_bInEnableSimulation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnableSimulation(Z_Param_bInEnableSimulation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGroomComponent::execResetCollisionComponents)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetCollisionComponents();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGroomComponent::execAddCollisionComponent)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_SkeletalMeshComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddCollisionComponent(Z_Param_SkeletalMeshComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGroomComponent::execSetMeshDeformer)
	{
		P_GET_OBJECT(UMeshDeformer,Z_Param_InMeshDeformer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMeshDeformer(Z_Param_InMeshDeformer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGroomComponent::execSetPhysicsAsset)
	{
		P_GET_OBJECT(UPhysicsAsset,Z_Param_InPhysicsAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPhysicsAsset(Z_Param_InPhysicsAsset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGroomComponent::execSetBindingAsset)
	{
		P_GET_OBJECT(UGroomBindingAsset,Z_Param_InBinding);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBindingAsset(Z_Param_InBinding);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGroomComponent::execSetGroomAsset)
	{
		P_GET_OBJECT(UGroomAsset,Z_Param_Asset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGroomAsset(Z_Param_Asset);
		P_NATIVE_END;
	}
	void UGroomComponent::StaticRegisterNativesUGroomComponent()
	{
		UClass* Class = UGroomComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddCollisionComponent", &UGroomComponent::execAddCollisionComponent },
			{ "GetIsHairLengthScaleEnabled", &UGroomComponent::execGetIsHairLengthScaleEnabled },
			{ "GetNiagaraComponent", &UGroomComponent::execGetNiagaraComponent },
			{ "ResetCollisionComponents", &UGroomComponent::execResetCollisionComponents },
			{ "ResetSimulation", &UGroomComponent::execResetSimulation },
			{ "SetBindingAsset", &UGroomComponent::execSetBindingAsset },
			{ "SetEnableSimulation", &UGroomComponent::execSetEnableSimulation },
			{ "SetGroomAsset", &UGroomComponent::execSetGroomAsset },
			{ "SetHairLengthScale", &UGroomComponent::execSetHairLengthScale },
			{ "SetHairLengthScaleEnable", &UGroomComponent::execSetHairLengthScaleEnable },
			{ "SetMeshDeformer", &UGroomComponent::execSetMeshDeformer },
			{ "SetPhysicsAsset", &UGroomComponent::execSetPhysicsAsset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGroomComponent_AddCollisionComponent_Statics
	{
		struct GroomComponent_eventAddCollisionComponent_Parms
		{
			USkeletalMeshComponent* SkeletalMeshComponent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGroomComponent_AddCollisionComponent_Statics::NewProp_SkeletalMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGroomComponent_AddCollisionComponent_Statics::NewProp_SkeletalMeshComponent = { "SkeletalMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GroomComponent_eventAddCollisionComponent_Parms, SkeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGroomComponent_AddCollisionComponent_Statics::NewProp_SkeletalMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomComponent_AddCollisionComponent_Statics::NewProp_SkeletalMeshComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGroomComponent_AddCollisionComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomComponent_AddCollisionComponent_Statics::NewProp_SkeletalMeshComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGroomComponent_AddCollisionComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Simulation" },
		{ "Comment", "/* Add a skeletal mesh to the collision components */" },
		{ "ModuleRelativePath", "Public/GroomComponent.h" },
		{ "ToolTip", "Add a skeletal mesh to the collision components" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroomComponent_AddCollisionComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGroomComponent, nullptr, "AddCollisionComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGroomComponent_AddCollisionComponent_Statics::GroomComponent_eventAddCollisionComponent_Parms), Z_Construct_UFunction_UGroomComponent_AddCollisionComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomComponent_AddCollisionComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGroomComponent_AddCollisionComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomComponent_AddCollisionComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGroomComponent_AddCollisionComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGroomComponent_AddCollisionComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGroomComponent_GetIsHairLengthScaleEnabled_Statics
	{
		struct GroomComponent_eventGetIsHairLengthScaleEnabled_Parms
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
	void Z_Construct_UFunction_UGroomComponent_GetIsHairLengthScaleEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GroomComponent_eventGetIsHairLengthScaleEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGroomComponent_GetIsHairLengthScaleEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GroomComponent_eventGetIsHairLengthScaleEnabled_Parms), &Z_Construct_UFunction_UGroomComponent_GetIsHairLengthScaleEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGroomComponent_GetIsHairLengthScaleEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomComponent_GetIsHairLengthScaleEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGroomComponent_GetIsHairLengthScaleEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Groom" },
		{ "ModuleRelativePath", "Public/GroomComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroomComponent_GetIsHairLengthScaleEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGroomComponent, nullptr, "GetIsHairLengthScaleEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGroomComponent_GetIsHairLengthScaleEnabled_Statics::GroomComponent_eventGetIsHairLengthScaleEnabled_Parms), Z_Construct_UFunction_UGroomComponent_GetIsHairLengthScaleEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomComponent_GetIsHairLengthScaleEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGroomComponent_GetIsHairLengthScaleEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomComponent_GetIsHairLengthScaleEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGroomComponent_GetIsHairLengthScaleEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGroomComponent_GetIsHairLengthScaleEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGroomComponent_GetNiagaraComponent_Statics
	{
		struct GroomComponent_eventGetNiagaraComponent_Parms
		{
			int32 GroupIndex;
			UNiagaraComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GroupIndex;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGroomComponent_GetNiagaraComponent_Statics::NewProp_GroupIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGroomComponent_GetNiagaraComponent_Statics::NewProp_GroupIndex = { "GroupIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GroomComponent_eventGetNiagaraComponent_Parms, GroupIndex), METADATA_PARAMS(Z_Construct_UFunction_UGroomComponent_GetNiagaraComponent_Statics::NewProp_GroupIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomComponent_GetNiagaraComponent_Statics::NewProp_GroupIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGroomComponent_GetNiagaraComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGroomComponent_GetNiagaraComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GroomComponent_eventGetNiagaraComponent_Parms, ReturnValue), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGroomComponent_GetNiagaraComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomComponent_GetNiagaraComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGroomComponent_GetNiagaraComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomComponent_GetNiagaraComponent_Statics::NewProp_GroupIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomComponent_GetNiagaraComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGroomComponent_GetNiagaraComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Simulation" },
		{ "Comment", "/* Given the group index return the matching niagara component */" },
		{ "ModuleRelativePath", "Public/GroomComponent.h" },
		{ "ToolTip", "Given the group index return the matching niagara component" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroomComponent_GetNiagaraComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGroomComponent, nullptr, "GetNiagaraComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGroomComponent_GetNiagaraComponent_Statics::GroomComponent_eventGetNiagaraComponent_Parms), Z_Construct_UFunction_UGroomComponent_GetNiagaraComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomComponent_GetNiagaraComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGroomComponent_GetNiagaraComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomComponent_GetNiagaraComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGroomComponent_GetNiagaraComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGroomComponent_GetNiagaraComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGroomComponent_ResetCollisionComponents_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGroomComponent_ResetCollisionComponents_Statics::Function_MetaDataParams[] = {
		{ "Category", "Simulation" },
		{ "Comment", "/* Reset the collision components */" },
		{ "ModuleRelativePath", "Public/GroomComponent.h" },
		{ "ToolTip", "Reset the collision components" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroomComponent_ResetCollisionComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGroomComponent, nullptr, "ResetCollisionComponents", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGroomComponent_ResetCollisionComponents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomComponent_ResetCollisionComponents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGroomComponent_ResetCollisionComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGroomComponent_ResetCollisionComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGroomComponent_ResetSimulation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGroomComponent_ResetSimulation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Simulation" },
		{ "Comment", "/* Reset the simulation, if enabled */" },
		{ "ModuleRelativePath", "Public/GroomComponent.h" },
		{ "ToolTip", "Reset the simulation, if enabled" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroomComponent_ResetSimulation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGroomComponent, nullptr, "ResetSimulation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGroomComponent_ResetSimulation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomComponent_ResetSimulation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGroomComponent_ResetSimulation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGroomComponent_ResetSimulation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGroomComponent_SetBindingAsset_Statics
	{
		struct GroomComponent_eventSetBindingAsset_Parms
		{
			UGroomBindingAsset* InBinding;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InBinding;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGroomComponent_SetBindingAsset_Statics::NewProp_InBinding = { "InBinding", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GroomComponent_eventSetBindingAsset_Parms, InBinding), Z_Construct_UClass_UGroomBindingAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGroomComponent_SetBindingAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomComponent_SetBindingAsset_Statics::NewProp_InBinding,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGroomComponent_SetBindingAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Groom" },
		{ "Comment", "/* Accessor function for changing Groom binding asset from blueprint/sequencer */" },
		{ "ModuleRelativePath", "Public/GroomComponent.h" },
		{ "ToolTip", "Accessor function for changing Groom binding asset from blueprint/sequencer" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroomComponent_SetBindingAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGroomComponent, nullptr, "SetBindingAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGroomComponent_SetBindingAsset_Statics::GroomComponent_eventSetBindingAsset_Parms), Z_Construct_UFunction_UGroomComponent_SetBindingAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomComponent_SetBindingAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGroomComponent_SetBindingAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomComponent_SetBindingAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGroomComponent_SetBindingAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGroomComponent_SetBindingAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGroomComponent_SetEnableSimulation_Statics
	{
		struct GroomComponent_eventSetEnableSimulation_Parms
		{
			bool bInEnableSimulation;
		};
		static void NewProp_bInEnableSimulation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInEnableSimulation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGroomComponent_SetEnableSimulation_Statics::NewProp_bInEnableSimulation_SetBit(void* Obj)
	{
		((GroomComponent_eventSetEnableSimulation_Parms*)Obj)->bInEnableSimulation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGroomComponent_SetEnableSimulation_Statics::NewProp_bInEnableSimulation = { "bInEnableSimulation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GroomComponent_eventSetEnableSimulation_Parms), &Z_Construct_UFunction_UGroomComponent_SetEnableSimulation_Statics::NewProp_bInEnableSimulation_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGroomComponent_SetEnableSimulation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomComponent_SetEnableSimulation_Statics::NewProp_bInEnableSimulation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGroomComponent_SetEnableSimulation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Simulation" },
		{ "Comment", "/* Accessor function for changing the enable simulation flag from blueprint/sequencer */" },
		{ "ModuleRelativePath", "Public/GroomComponent.h" },
		{ "ToolTip", "Accessor function for changing the enable simulation flag from blueprint/sequencer" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroomComponent_SetEnableSimulation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGroomComponent, nullptr, "SetEnableSimulation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGroomComponent_SetEnableSimulation_Statics::GroomComponent_eventSetEnableSimulation_Parms), Z_Construct_UFunction_UGroomComponent_SetEnableSimulation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomComponent_SetEnableSimulation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGroomComponent_SetEnableSimulation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomComponent_SetEnableSimulation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGroomComponent_SetEnableSimulation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGroomComponent_SetEnableSimulation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGroomComponent_SetGroomAsset_Statics
	{
		struct GroomComponent_eventSetGroomAsset_Parms
		{
			UGroomAsset* Asset;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Asset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGroomComponent_SetGroomAsset_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GroomComponent_eventSetGroomAsset_Parms, Asset), Z_Construct_UClass_UGroomAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGroomComponent_SetGroomAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomComponent_SetGroomAsset_Statics::NewProp_Asset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGroomComponent_SetGroomAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Groom" },
		{ "Comment", "/* Accessor function for changing Groom asset from blueprint/sequencer */" },
		{ "ModuleRelativePath", "Public/GroomComponent.h" },
		{ "ToolTip", "Accessor function for changing Groom asset from blueprint/sequencer" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroomComponent_SetGroomAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGroomComponent, nullptr, "SetGroomAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGroomComponent_SetGroomAsset_Statics::GroomComponent_eventSetGroomAsset_Parms), Z_Construct_UFunction_UGroomComponent_SetGroomAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomComponent_SetGroomAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGroomComponent_SetGroomAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomComponent_SetGroomAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGroomComponent_SetGroomAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGroomComponent_SetGroomAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGroomComponent_SetHairLengthScale_Statics
	{
		struct GroomComponent_eventSetHairLengthScale_Parms
		{
			float Scale;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGroomComponent_SetHairLengthScale_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GroomComponent_eventSetHairLengthScale_Parms, Scale), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGroomComponent_SetHairLengthScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomComponent_SetHairLengthScale_Statics::NewProp_Scale,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGroomComponent_SetHairLengthScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Groom" },
		{ "Comment", "/* Accessor function for changing hair length scale from blueprint/sequencer */" },
		{ "ModuleRelativePath", "Public/GroomComponent.h" },
		{ "ToolTip", "Accessor function for changing hair length scale from blueprint/sequencer" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroomComponent_SetHairLengthScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGroomComponent, nullptr, "SetHairLengthScale", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGroomComponent_SetHairLengthScale_Statics::GroomComponent_eventSetHairLengthScale_Parms), Z_Construct_UFunction_UGroomComponent_SetHairLengthScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomComponent_SetHairLengthScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGroomComponent_SetHairLengthScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomComponent_SetHairLengthScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGroomComponent_SetHairLengthScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGroomComponent_SetHairLengthScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGroomComponent_SetHairLengthScaleEnable_Statics
	{
		struct GroomComponent_eventSetHairLengthScaleEnable_Parms
		{
			bool bEnable;
		};
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGroomComponent_SetHairLengthScaleEnable_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((GroomComponent_eventSetHairLengthScaleEnable_Parms*)Obj)->bEnable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGroomComponent_SetHairLengthScaleEnable_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GroomComponent_eventSetHairLengthScaleEnable_Parms), &Z_Construct_UFunction_UGroomComponent_SetHairLengthScaleEnable_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGroomComponent_SetHairLengthScaleEnable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomComponent_SetHairLengthScaleEnable_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGroomComponent_SetHairLengthScaleEnable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Groom" },
		{ "ModuleRelativePath", "Public/GroomComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroomComponent_SetHairLengthScaleEnable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGroomComponent, nullptr, "SetHairLengthScaleEnable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGroomComponent_SetHairLengthScaleEnable_Statics::GroomComponent_eventSetHairLengthScaleEnable_Parms), Z_Construct_UFunction_UGroomComponent_SetHairLengthScaleEnable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomComponent_SetHairLengthScaleEnable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGroomComponent_SetHairLengthScaleEnable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomComponent_SetHairLengthScaleEnable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGroomComponent_SetHairLengthScaleEnable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGroomComponent_SetHairLengthScaleEnable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGroomComponent_SetMeshDeformer_Statics
	{
		struct GroomComponent_eventSetMeshDeformer_Parms
		{
			UMeshDeformer* InMeshDeformer;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InMeshDeformer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGroomComponent_SetMeshDeformer_Statics::NewProp_InMeshDeformer = { "InMeshDeformer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GroomComponent_eventSetMeshDeformer_Parms, InMeshDeformer), Z_Construct_UClass_UMeshDeformer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGroomComponent_SetMeshDeformer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomComponent_SetMeshDeformer_Statics::NewProp_InMeshDeformer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGroomComponent_SetMeshDeformer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/* Change the MeshDeformer that is used for this Component. */" },
		{ "ModuleRelativePath", "Public/GroomComponent.h" },
		{ "ToolTip", "Change the MeshDeformer that is used for this Component." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroomComponent_SetMeshDeformer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGroomComponent, nullptr, "SetMeshDeformer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGroomComponent_SetMeshDeformer_Statics::GroomComponent_eventSetMeshDeformer_Parms), Z_Construct_UFunction_UGroomComponent_SetMeshDeformer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomComponent_SetMeshDeformer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGroomComponent_SetMeshDeformer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomComponent_SetMeshDeformer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGroomComponent_SetMeshDeformer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGroomComponent_SetMeshDeformer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGroomComponent_SetPhysicsAsset_Statics
	{
		struct GroomComponent_eventSetPhysicsAsset_Parms
		{
			UPhysicsAsset* InPhysicsAsset;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InPhysicsAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGroomComponent_SetPhysicsAsset_Statics::NewProp_InPhysicsAsset = { "InPhysicsAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GroomComponent_eventSetPhysicsAsset_Parms, InPhysicsAsset), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGroomComponent_SetPhysicsAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomComponent_SetPhysicsAsset_Statics::NewProp_InPhysicsAsset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGroomComponent_SetPhysicsAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Simulation" },
		{ "Comment", "/* Accessor function for changing Groom physics asset from blueprint/sequencer */" },
		{ "ModuleRelativePath", "Public/GroomComponent.h" },
		{ "ToolTip", "Accessor function for changing Groom physics asset from blueprint/sequencer" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroomComponent_SetPhysicsAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGroomComponent, nullptr, "SetPhysicsAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGroomComponent_SetPhysicsAsset_Statics::GroomComponent_eventSetPhysicsAsset_Parms), Z_Construct_UFunction_UGroomComponent_SetPhysicsAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomComponent_SetPhysicsAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGroomComponent_SetPhysicsAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomComponent_SetPhysicsAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGroomComponent_SetPhysicsAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGroomComponent_SetPhysicsAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGroomComponent);
	UClass* Z_Construct_UClass_UGroomComponent_NoRegister()
	{
		return UGroomComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGroomComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroomAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GroomAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroomCache_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GroomCache;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_NiagaraComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NiagaraComponents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceSkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SourceSkeletalMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BindingAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BindingAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PhysicsAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimulationSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SimulationSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshDeformer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MeshDeformer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshDeformerInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MeshDeformerInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshDeformerInstanceSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MeshDeformerInstanceSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Strands_DebugMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Strands_DebugMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Strands_DefaultMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Strands_DefaultMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Cards_DefaultMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Cards_DefaultMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Meshes_DefaultMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Meshes_DefaultMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularSpringsSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AngularSpringsSystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CosseratRodsSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CosseratRodsSystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachmentName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AttachmentName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GroomGroupsDesc_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroomGroupsDesc_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GroomGroupsDesc;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseCards_MetaData[];
#endif
		static void NewProp_bUseCards_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCards;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRunning_MetaData[];
#endif
		static void NewProp_bRunning_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRunning;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLooping_MetaData[];
#endif
		static void NewProp_bLooping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLooping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bManualTick_MetaData[];
#endif
		static void NewProp_bManualTick_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bManualTick;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElapsedTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ElapsedTime;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroomAssetBeingLoaded_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GroomAssetBeingLoaded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BindingAssetBeingLoaded_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BindingAssetBeingLoaded;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGroomComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGroomComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGroomComponent_AddCollisionComponent, "AddCollisionComponent" }, // 83167700
		{ &Z_Construct_UFunction_UGroomComponent_GetIsHairLengthScaleEnabled, "GetIsHairLengthScaleEnabled" }, // 2330021275
		{ &Z_Construct_UFunction_UGroomComponent_GetNiagaraComponent, "GetNiagaraComponent" }, // 1561196814
		{ &Z_Construct_UFunction_UGroomComponent_ResetCollisionComponents, "ResetCollisionComponents" }, // 2531485561
		{ &Z_Construct_UFunction_UGroomComponent_ResetSimulation, "ResetSimulation" }, // 328646895
		{ &Z_Construct_UFunction_UGroomComponent_SetBindingAsset, "SetBindingAsset" }, // 3489822561
		{ &Z_Construct_UFunction_UGroomComponent_SetEnableSimulation, "SetEnableSimulation" }, // 694569690
		{ &Z_Construct_UFunction_UGroomComponent_SetGroomAsset, "SetGroomAsset" }, // 618121278
		{ &Z_Construct_UFunction_UGroomComponent_SetHairLengthScale, "SetHairLengthScale" }, // 958595070
		{ &Z_Construct_UFunction_UGroomComponent_SetHairLengthScaleEnable, "SetHairLengthScaleEnable" }, // 2910477066
		{ &Z_Construct_UFunction_UGroomComponent_SetMeshDeformer, "SetMeshDeformer" }, // 2515475996
		{ &Z_Construct_UFunction_UGroomComponent_SetPhysicsAsset, "SetPhysicsAsset" }, // 1592657316
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Rendering" },
		{ "HideCategories", "Object Physics Activation Mobility Components|Activation Mobility Trigger" },
		{ "IncludePath", "GroomComponent.h" },
		{ "ModuleRelativePath", "Public/GroomComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomComponent_Statics::NewProp_GroomAsset_MetaData[] = {
		{ "Category", "Groom" },
		{ "Comment", "/** Groom asset . */" },
		{ "ModuleRelativePath", "Public/GroomComponent.h" },
		{ "ToolTip", "Groom asset ." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGroomComponent_Statics::NewProp_GroomAsset = { "GroomAsset", nullptr, (EPropertyFlags)0x0014000200000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroomComponent, GroomAsset), Z_Construct_UClass_UGroomAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGroomComponent_Statics::NewProp_GroomAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomComponent_Statics::NewProp_GroomAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomComponent_Statics::NewProp_GroomCache_MetaData[] = {
		{ "Category", "GroomCache" },
		{ "EditCondition", "BindingAsset == nullptr" },
		{ "ModuleRelativePath", "Public/GroomComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGroomComponent_Statics::NewProp_GroomCache = { "GroomCache", nullptr, (EPropertyFlags)0x0014000200000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroomComponent, GroomCache), Z_Construct_UClass_UGroomCache_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGroomComponent_Statics::NewProp_GroomCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomComponent_Statics::NewProp_GroomCache_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGroomComponent_Statics::NewProp_NiagaraComponents_Inner = { "NiagaraComponents", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomComponent_Statics::NewProp_NiagaraComponents_MetaData[] = {
		{ "Comment", "/** Niagara components that will be attached to the system*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GroomComponent.h" },
		{ "ToolTip", "Niagara components that will be attached to the system" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGroomComponent_Statics::NewProp_NiagaraComponents = { "NiagaraComponents", nullptr, (EPropertyFlags)0x0014008000002008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroomComponent, NiagaraComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGroomComponent_Statics::NewProp_NiagaraComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomComponent_Statics::NewProp_NiagaraComponents_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomComponent_Statics::NewProp_SourceSkeletalMesh_MetaData[] = {
		{ "Comment", "// Kept for debugging mesh transfer\n" },
		{ "ModuleRelativePath", "Public/GroomComponent.h" },
		{ "ToolTip", "Kept for debugging mesh transfer" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGroomComponent_Statics::NewProp_SourceSkeletalMesh = { "SourceSkeletalMesh", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroomComponent, SourceSkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGroomComponent_Statics::NewProp_SourceSkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomComponent_Statics::NewProp_SourceSkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomComponent_Statics::NewProp_BindingAsset_MetaData[] = {
		{ "Category", "Groom" },
		{ "Comment", "/** Optional binding asset for binding a groom onto a skeletal mesh. If the binding asset is not provided the projection is done at runtime, which implies a large GPU cost at startup time. */" },
		{ "EditCondition", "GroomCache == nullptr" },
		{ "ModuleRelativePath", "Public/GroomComponent.h" },
		{ "ToolTip", "Optional binding asset for binding a groom onto a skeletal mesh. If the binding asset is not provided the projection is done at runtime, which implies a large GPU cost at startup time." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGroomComponent_Statics::NewProp_BindingAsset = { "BindingAsset", nullptr, (EPropertyFlags)0x0014000200000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroomComponent, BindingAsset), Z_Construct_UClass_UGroomBindingAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGroomComponent_Statics::NewProp_BindingAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomComponent_Statics::NewProp_BindingAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomComponent_Statics::NewProp_PhysicsAsset_MetaData[] = {
		{ "Category", "Simulation" },
		{ "Comment", "/** Physics asset to be used for hair simulation */" },
		{ "ModuleRelativePath", "Public/GroomComponent.h" },
		{ "ToolTip", "Physics asset to be used for hair simulation" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGroomComponent_Statics::NewProp_PhysicsAsset = { "PhysicsAsset", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroomComponent, PhysicsAsset), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGroomComponent_Statics::NewProp_PhysicsAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomComponent_Statics::NewProp_PhysicsAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomComponent_Statics::NewProp_SimulationSettings_MetaData[] = {
		{ "Category", "Simulation" },
		{ "Comment", "/** Groom's simulation settings */" },
		{ "ModuleRelativePath", "Public/GroomComponent.h" },
		{ "ToolTip", "Groom's simulation settings" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGroomComponent_Statics::NewProp_SimulationSettings = { "SimulationSettings", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroomComponent, SimulationSettings), Z_Construct_UScriptStruct_FHairSimulationSettings, METADATA_PARAMS(Z_Construct_UClass_UGroomComponent_Statics::NewProp_SimulationSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomComponent_Statics::NewProp_SimulationSettings_MetaData)) }; // 2328935285
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomComponent_Statics::NewProp_MeshDeformer_MetaData[] = {
		{ "Category", "Deformer" },
		{ "Comment", "/** If set the MeshDeformer will be applied on groom instance for deformation. */" },
		{ "ModuleRelativePath", "Public/GroomComponent.h" },
		{ "ToolTip", "If set the MeshDeformer will be applied on groom instance for deformation." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGroomComponent_Statics::NewProp_MeshDeformer = { "MeshDeformer", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroomComponent, MeshDeformer), Z_Construct_UClass_UMeshDeformer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGroomComponent_Statics::NewProp_MeshDeformer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomComponent_Statics::NewProp_MeshDeformer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomComponent_Statics::NewProp_MeshDeformerInstance_MetaData[] = {
		{ "Category", "Deformer" },
		{ "Comment", "/** Object containing state for the bound MeshDeformer. */" },
		{ "ModuleRelativePath", "Public/GroomComponent.h" },
		{ "ToolTip", "Object containing state for the bound MeshDeformer." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGroomComponent_Statics::NewProp_MeshDeformerInstance = { "MeshDeformerInstance", nullptr, (EPropertyFlags)0x0014000000002014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroomComponent, MeshDeformerInstance), Z_Construct_UClass_UMeshDeformerInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGroomComponent_Statics::NewProp_MeshDeformerInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomComponent_Statics::NewProp_MeshDeformerInstance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomComponent_Statics::NewProp_MeshDeformerInstanceSettings_MetaData[] = {
		{ "Category", "Deformer" },
		{ "Comment", "/** Object containing instance settings for the bound MeshDeformer. */" },
		{ "DisplayName", "Deformer Settings" },
		{ "EditCondition", "MeshDeformerInstanceSettings!=nullptr" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GroomComponent.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Object containing instance settings for the bound MeshDeformer." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGroomComponent_Statics::NewProp_MeshDeformerInstanceSettings = { "MeshDeformerInstanceSettings", nullptr, (EPropertyFlags)0x00160000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroomComponent, MeshDeformerInstanceSettings), Z_Construct_UClass_UMeshDeformerInstanceSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGroomComponent_Statics::NewProp_MeshDeformerInstanceSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomComponent_Statics::NewProp_MeshDeformerInstanceSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomComponent_Statics::NewProp_Strands_DebugMaterial_MetaData[] = {
		{ "Comment", "/* Reference of the default/debug materials for each geometric representation */" },
		{ "ModuleRelativePath", "Public/GroomComponent.h" },
		{ "ToolTip", "Reference of the default/debug materials for each geometric representation" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGroomComponent_Statics::NewProp_Strands_DebugMaterial = { "Strands_DebugMaterial", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroomComponent, Strands_DebugMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGroomComponent_Statics::NewProp_Strands_DebugMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomComponent_Statics::NewProp_Strands_DebugMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomComponent_Statics::NewProp_Strands_DefaultMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/GroomComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGroomComponent_Statics::NewProp_Strands_DefaultMaterial = { "Strands_DefaultMaterial", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroomComponent, Strands_DefaultMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGroomComponent_Statics::NewProp_Strands_DefaultMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomComponent_Statics::NewProp_Strands_DefaultMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomComponent_Statics::NewProp_Cards_DefaultMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/GroomComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGroomComponent_Statics::NewProp_Cards_DefaultMaterial = { "Cards_DefaultMaterial", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroomComponent, Cards_DefaultMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGroomComponent_Statics::NewProp_Cards_DefaultMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomComponent_Statics::NewProp_Cards_DefaultMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomComponent_Statics::NewProp_Meshes_DefaultMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/GroomComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGroomComponent_Statics::NewProp_Meshes_DefaultMaterial = { "Meshes_DefaultMaterial", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroomComponent, Meshes_DefaultMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGroomComponent_Statics::NewProp_Meshes_DefaultMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomComponent_Statics::NewProp_Meshes_DefaultMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomComponent_Statics::NewProp_AngularSpringsSystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/GroomComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGroomComponent_Statics::NewProp_AngularSpringsSystem = { "AngularSpringsSystem", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroomComponent, AngularSpringsSystem), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGroomComponent_Statics::NewProp_AngularSpringsSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomComponent_Statics::NewProp_AngularSpringsSystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomComponent_Statics::NewProp_CosseratRodsSystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/GroomComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGroomComponent_Statics::NewProp_CosseratRodsSystem = { "CosseratRodsSystem", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroomComponent, CosseratRodsSystem), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGroomComponent_Statics::NewProp_CosseratRodsSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomComponent_Statics::NewProp_CosseratRodsSystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomComponent_Statics::NewProp_AttachmentName_MetaData[] = {
		{ "Category", "Groom" },
		{ "Comment", "/** Optional socket name, where the groom component should be attached at, when parented with a skeletal mesh */" },
		{ "ModuleRelativePath", "Public/GroomComponent.h" },
		{ "ToolTip", "Optional socket name, where the groom component should be attached at, when parented with a skeletal mesh" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGroomComponent_Statics::NewProp_AttachmentName = { "AttachmentName", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroomComponent, AttachmentName), METADATA_PARAMS(Z_Construct_UClass_UGroomComponent_Statics::NewProp_AttachmentName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomComponent_Statics::NewProp_AttachmentName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGroomComponent_Statics::NewProp_GroomGroupsDesc_Inner = { "GroomGroupsDesc", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FHairGroupDesc, METADATA_PARAMS(nullptr, 0) }; // 2334234430
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomComponent_Statics::NewProp_GroomGroupsDesc_MetaData[] = {
		{ "Category", "Groom" },
		{ "Comment", "/** Groom's groups info. */" },
		{ "ModuleRelativePath", "Public/GroomComponent.h" },
		{ "ToolTip", "Groom's groups info." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGroomComponent_Statics::NewProp_GroomGroupsDesc = { "GroomGroupsDesc", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroomComponent, GroomGroupsDesc), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGroomComponent_Statics::NewProp_GroomGroupsDesc_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomComponent_Statics::NewProp_GroomGroupsDesc_MetaData)) }; // 2334234430
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomComponent_Statics::NewProp_bUseCards_MetaData[] = {
		{ "Category", "Groom" },
		{ "Comment", "/** Force the groom to use cards/meshes geometry instead of strands. */" },
		{ "ModuleRelativePath", "Public/GroomComponent.h" },
		{ "ToolTip", "Force the groom to use cards/meshes geometry instead of strands." },
	};
#endif
	void Z_Construct_UClass_UGroomComponent_Statics::NewProp_bUseCards_SetBit(void* Obj)
	{
		((UGroomComponent*)Obj)->bUseCards = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGroomComponent_Statics::NewProp_bUseCards = { "bUseCards", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGroomComponent), &Z_Construct_UClass_UGroomComponent_Statics::NewProp_bUseCards_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGroomComponent_Statics::NewProp_bUseCards_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomComponent_Statics::NewProp_bUseCards_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomComponent_Statics::NewProp_bRunning_MetaData[] = {
		{ "Category", "GroomCache" },
		{ "ModuleRelativePath", "Public/GroomComponent.h" },
	};
#endif
	void Z_Construct_UClass_UGroomComponent_Statics::NewProp_bRunning_SetBit(void* Obj)
	{
		((UGroomComponent*)Obj)->bRunning = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGroomComponent_Statics::NewProp_bRunning = { "bRunning", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGroomComponent), &Z_Construct_UClass_UGroomComponent_Statics::NewProp_bRunning_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGroomComponent_Statics::NewProp_bRunning_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomComponent_Statics::NewProp_bRunning_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomComponent_Statics::NewProp_bLooping_MetaData[] = {
		{ "Category", "GroomCache" },
		{ "ModuleRelativePath", "Public/GroomComponent.h" },
	};
#endif
	void Z_Construct_UClass_UGroomComponent_Statics::NewProp_bLooping_SetBit(void* Obj)
	{
		((UGroomComponent*)Obj)->bLooping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGroomComponent_Statics::NewProp_bLooping = { "bLooping", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGroomComponent), &Z_Construct_UClass_UGroomComponent_Statics::NewProp_bLooping_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGroomComponent_Statics::NewProp_bLooping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomComponent_Statics::NewProp_bLooping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomComponent_Statics::NewProp_bManualTick_MetaData[] = {
		{ "Category", "GroomCache" },
		{ "ModuleRelativePath", "Public/GroomComponent.h" },
	};
#endif
	void Z_Construct_UClass_UGroomComponent_Statics::NewProp_bManualTick_SetBit(void* Obj)
	{
		((UGroomComponent*)Obj)->bManualTick = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGroomComponent_Statics::NewProp_bManualTick = { "bManualTick", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGroomComponent), &Z_Construct_UClass_UGroomComponent_Statics::NewProp_bManualTick_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGroomComponent_Statics::NewProp_bManualTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomComponent_Statics::NewProp_bManualTick_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomComponent_Statics::NewProp_ElapsedTime_MetaData[] = {
		{ "Category", "GroomCache" },
		{ "ModuleRelativePath", "Public/GroomComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGroomComponent_Statics::NewProp_ElapsedTime = { "ElapsedTime", nullptr, (EPropertyFlags)0x0040000000022001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroomComponent, ElapsedTime), METADATA_PARAMS(Z_Construct_UClass_UGroomComponent_Statics::NewProp_ElapsedTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomComponent_Statics::NewProp_ElapsedTime_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomComponent_Statics::NewProp_GroomAssetBeingLoaded_MetaData[] = {
		{ "ModuleRelativePath", "Public/GroomComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGroomComponent_Statics::NewProp_GroomAssetBeingLoaded = { "GroomAssetBeingLoaded", nullptr, (EPropertyFlags)0x0044000800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroomComponent, GroomAssetBeingLoaded), Z_Construct_UClass_UGroomAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGroomComponent_Statics::NewProp_GroomAssetBeingLoaded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomComponent_Statics::NewProp_GroomAssetBeingLoaded_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomComponent_Statics::NewProp_BindingAssetBeingLoaded_MetaData[] = {
		{ "ModuleRelativePath", "Public/GroomComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGroomComponent_Statics::NewProp_BindingAssetBeingLoaded = { "BindingAssetBeingLoaded", nullptr, (EPropertyFlags)0x0044000800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroomComponent, BindingAssetBeingLoaded), Z_Construct_UClass_UGroomBindingAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGroomComponent_Statics::NewProp_BindingAssetBeingLoaded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomComponent_Statics::NewProp_BindingAssetBeingLoaded_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGroomComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomComponent_Statics::NewProp_GroomAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomComponent_Statics::NewProp_GroomCache,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomComponent_Statics::NewProp_NiagaraComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomComponent_Statics::NewProp_NiagaraComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomComponent_Statics::NewProp_SourceSkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomComponent_Statics::NewProp_BindingAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomComponent_Statics::NewProp_PhysicsAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomComponent_Statics::NewProp_SimulationSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomComponent_Statics::NewProp_MeshDeformer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomComponent_Statics::NewProp_MeshDeformerInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomComponent_Statics::NewProp_MeshDeformerInstanceSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomComponent_Statics::NewProp_Strands_DebugMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomComponent_Statics::NewProp_Strands_DefaultMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomComponent_Statics::NewProp_Cards_DefaultMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomComponent_Statics::NewProp_Meshes_DefaultMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomComponent_Statics::NewProp_AngularSpringsSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomComponent_Statics::NewProp_CosseratRodsSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomComponent_Statics::NewProp_AttachmentName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomComponent_Statics::NewProp_GroomGroupsDesc_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomComponent_Statics::NewProp_GroomGroupsDesc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomComponent_Statics::NewProp_bUseCards,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomComponent_Statics::NewProp_bRunning,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomComponent_Statics::NewProp_bLooping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomComponent_Statics::NewProp_bManualTick,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomComponent_Statics::NewProp_ElapsedTime,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomComponent_Statics::NewProp_GroomAssetBeingLoaded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroomComponent_Statics::NewProp_BindingAssetBeingLoaded,
#endif // WITH_EDITORONLY_DATA
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UGroomComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_ULODSyncInterface_NoRegister, (int32)VTABLE_OFFSET(UGroomComponent, ILODSyncInterface), false },  // 2871425250
			{ Z_Construct_UClass_UNiagaraPhysicsAssetDICollectorInterface_NoRegister, (int32)VTABLE_OFFSET(UGroomComponent, INiagaraPhysicsAssetDICollectorInterface), false },  // 566731540
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGroomComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGroomComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGroomComponent_Statics::ClassParams = {
		&UGroomComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGroomComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGroomComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGroomComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGroomComponent()
	{
		if (!Z_Registration_Info_UClass_UGroomComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGroomComponent.OuterSingleton, Z_Construct_UClass_UGroomComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGroomComponent.OuterSingleton;
	}
	template<> HAIRSTRANDSCORE_API UClass* StaticClass<UGroomComponent>()
	{
		return UGroomComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGroomComponent);
	UGroomComponent::~UGroomComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGroomComponent, UGroomComponent::StaticClass, TEXT("UGroomComponent"), &Z_Registration_Info_UClass_UGroomComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGroomComponent), 2551638484U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomComponent_h_3166495969(TEXT("/Script/HairStrandsCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
