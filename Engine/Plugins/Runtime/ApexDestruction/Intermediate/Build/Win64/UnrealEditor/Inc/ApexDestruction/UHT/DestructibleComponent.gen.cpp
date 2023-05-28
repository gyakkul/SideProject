// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DestructibleComponent.h"
#include "../../Source/Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDestructibleComponent() {}
// Cross Module References
	APEXDESTRUCTION_API UClass* Z_Construct_UClass_UDestructibleComponent();
	APEXDESTRUCTION_API UClass* Z_Construct_UClass_UDestructibleComponent_NoRegister();
	APEXDESTRUCTION_API UClass* Z_Construct_UClass_UDestructibleMesh_NoRegister();
	APEXDESTRUCTION_API UFunction* Z_Construct_UDelegateFunction_ApexDestruction_ComponentFractureSignature__DelegateSignature();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UDestructibleInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkinnedMeshComponent();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFractureEffect();
	UPackage* Z_Construct_UPackage__Script_ApexDestruction();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ApexDestruction_ComponentFractureSignature__DelegateSignature_Statics
	{
		struct _Script_ApexDestruction_eventComponentFractureSignature_Parms
		{
			FVector HitPoint;
			FVector HitDirection;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitDirection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ApexDestruction_ComponentFractureSignature__DelegateSignature_Statics::NewProp_HitPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ApexDestruction_ComponentFractureSignature__DelegateSignature_Statics::NewProp_HitPoint = { "HitPoint", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_ApexDestruction_eventComponentFractureSignature_Parms, HitPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UDelegateFunction_ApexDestruction_ComponentFractureSignature__DelegateSignature_Statics::NewProp_HitPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ApexDestruction_ComponentFractureSignature__DelegateSignature_Statics::NewProp_HitPoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ApexDestruction_ComponentFractureSignature__DelegateSignature_Statics::NewProp_HitDirection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ApexDestruction_ComponentFractureSignature__DelegateSignature_Statics::NewProp_HitDirection = { "HitDirection", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_ApexDestruction_eventComponentFractureSignature_Parms, HitDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UDelegateFunction_ApexDestruction_ComponentFractureSignature__DelegateSignature_Statics::NewProp_HitDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ApexDestruction_ComponentFractureSignature__DelegateSignature_Statics::NewProp_HitDirection_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ApexDestruction_ComponentFractureSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ApexDestruction_ComponentFractureSignature__DelegateSignature_Statics::NewProp_HitPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ApexDestruction_ComponentFractureSignature__DelegateSignature_Statics::NewProp_HitDirection,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ApexDestruction_ComponentFractureSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Delegate for notification when fracture occurs */" },
		{ "ModuleRelativePath", "Public/DestructibleComponent.h" },
		{ "ToolTip", "Delegate for notification when fracture occurs" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ApexDestruction_ComponentFractureSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ApexDestruction, nullptr, "ComponentFractureSignature__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_ApexDestruction_ComponentFractureSignature__DelegateSignature_Statics::_Script_ApexDestruction_eventComponentFractureSignature_Parms), Z_Construct_UDelegateFunction_ApexDestruction_ComponentFractureSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ApexDestruction_ComponentFractureSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ApexDestruction_ComponentFractureSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ApexDestruction_ComponentFractureSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ApexDestruction_ComponentFractureSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ApexDestruction_ComponentFractureSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FComponentFractureSignature_DelegateWrapper(const FMulticastScriptDelegate& ComponentFractureSignature, FVector const& HitPoint, FVector const& HitDirection)
{
	struct _Script_ApexDestruction_eventComponentFractureSignature_Parms
	{
		FVector HitPoint;
		FVector HitDirection;
	};
	_Script_ApexDestruction_eventComponentFractureSignature_Parms Parms;
	Parms.HitPoint=HitPoint;
	Parms.HitDirection=HitDirection;
	ComponentFractureSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UDestructibleComponent::execGetDestructibleMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDestructibleMesh**)Z_Param__Result=P_THIS->GetDestructibleMesh();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDestructibleComponent::execSetDestructibleMesh)
	{
		P_GET_OBJECT(UDestructibleMesh,Z_Param_NewMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDestructibleMesh(Z_Param_NewMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDestructibleComponent::execApplyRadiusDamage)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_BaseDamage);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_HurtOrigin);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DamageRadius);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ImpulseStrength);
		P_GET_UBOOL(Z_Param_bFullDamage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyRadiusDamage(Z_Param_BaseDamage,Z_Param_Out_HurtOrigin,Z_Param_DamageRadius,Z_Param_ImpulseStrength,Z_Param_bFullDamage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDestructibleComponent::execApplyDamage)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DamageAmount);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_HitLocation);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ImpulseDir);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ImpulseStrength);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyDamage(Z_Param_DamageAmount,Z_Param_Out_HitLocation,Z_Param_Out_ImpulseDir,Z_Param_ImpulseStrength);
		P_NATIVE_END;
	}
	void UDestructibleComponent::StaticRegisterNativesUDestructibleComponent()
	{
		UClass* Class = UDestructibleComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyDamage", &UDestructibleComponent::execApplyDamage },
			{ "ApplyRadiusDamage", &UDestructibleComponent::execApplyRadiusDamage },
			{ "GetDestructibleMesh", &UDestructibleComponent::execGetDestructibleMesh },
			{ "SetDestructibleMesh", &UDestructibleComponent::execSetDestructibleMesh },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDestructibleComponent_ApplyDamage_Statics
	{
		struct DestructibleComponent_eventApplyDamage_Parms
		{
			float DamageAmount;
			FVector HitLocation;
			FVector ImpulseDir;
			float ImpulseStrength;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImpulseDir_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ImpulseDir;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ImpulseStrength;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDestructibleComponent_ApplyDamage_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DestructibleComponent_eventApplyDamage_Parms, DamageAmount), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDestructibleComponent_ApplyDamage_Statics::NewProp_HitLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDestructibleComponent_ApplyDamage_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DestructibleComponent_eventApplyDamage_Parms, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UDestructibleComponent_ApplyDamage_Statics::NewProp_HitLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDestructibleComponent_ApplyDamage_Statics::NewProp_HitLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDestructibleComponent_ApplyDamage_Statics::NewProp_ImpulseDir_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDestructibleComponent_ApplyDamage_Statics::NewProp_ImpulseDir = { "ImpulseDir", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DestructibleComponent_eventApplyDamage_Parms, ImpulseDir), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UDestructibleComponent_ApplyDamage_Statics::NewProp_ImpulseDir_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDestructibleComponent_ApplyDamage_Statics::NewProp_ImpulseDir_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDestructibleComponent_ApplyDamage_Statics::NewProp_ImpulseStrength = { "ImpulseStrength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DestructibleComponent_eventApplyDamage_Parms, ImpulseStrength), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDestructibleComponent_ApplyDamage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDestructibleComponent_ApplyDamage_Statics::NewProp_DamageAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDestructibleComponent_ApplyDamage_Statics::NewProp_HitLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDestructibleComponent_ApplyDamage_Statics::NewProp_ImpulseDir,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDestructibleComponent_ApplyDamage_Statics::NewProp_ImpulseStrength,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDestructibleComponent_ApplyDamage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Destructible" },
		{ "Comment", "// Take damage\n" },
		{ "ModuleRelativePath", "Public/DestructibleComponent.h" },
		{ "ToolTip", "Take damage" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDestructibleComponent_ApplyDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDestructibleComponent, nullptr, "ApplyDamage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDestructibleComponent_ApplyDamage_Statics::DestructibleComponent_eventApplyDamage_Parms), Z_Construct_UFunction_UDestructibleComponent_ApplyDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDestructibleComponent_ApplyDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDestructibleComponent_ApplyDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDestructibleComponent_ApplyDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDestructibleComponent_ApplyDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDestructibleComponent_ApplyDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDestructibleComponent_ApplyRadiusDamage_Statics
	{
		struct DestructibleComponent_eventApplyRadiusDamage_Parms
		{
			float BaseDamage;
			FVector HurtOrigin;
			float DamageRadius;
			float ImpulseStrength;
			bool bFullDamage;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseDamage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HurtOrigin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HurtOrigin;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageRadius;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ImpulseStrength;
		static void NewProp_bFullDamage_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFullDamage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDestructibleComponent_ApplyRadiusDamage_Statics::NewProp_BaseDamage = { "BaseDamage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DestructibleComponent_eventApplyRadiusDamage_Parms, BaseDamage), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDestructibleComponent_ApplyRadiusDamage_Statics::NewProp_HurtOrigin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDestructibleComponent_ApplyRadiusDamage_Statics::NewProp_HurtOrigin = { "HurtOrigin", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DestructibleComponent_eventApplyRadiusDamage_Parms, HurtOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UDestructibleComponent_ApplyRadiusDamage_Statics::NewProp_HurtOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDestructibleComponent_ApplyRadiusDamage_Statics::NewProp_HurtOrigin_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDestructibleComponent_ApplyRadiusDamage_Statics::NewProp_DamageRadius = { "DamageRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DestructibleComponent_eventApplyRadiusDamage_Parms, DamageRadius), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDestructibleComponent_ApplyRadiusDamage_Statics::NewProp_ImpulseStrength = { "ImpulseStrength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DestructibleComponent_eventApplyRadiusDamage_Parms, ImpulseStrength), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDestructibleComponent_ApplyRadiusDamage_Statics::NewProp_bFullDamage_SetBit(void* Obj)
	{
		((DestructibleComponent_eventApplyRadiusDamage_Parms*)Obj)->bFullDamage = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDestructibleComponent_ApplyRadiusDamage_Statics::NewProp_bFullDamage = { "bFullDamage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DestructibleComponent_eventApplyRadiusDamage_Parms), &Z_Construct_UFunction_UDestructibleComponent_ApplyRadiusDamage_Statics::NewProp_bFullDamage_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDestructibleComponent_ApplyRadiusDamage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDestructibleComponent_ApplyRadiusDamage_Statics::NewProp_BaseDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDestructibleComponent_ApplyRadiusDamage_Statics::NewProp_HurtOrigin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDestructibleComponent_ApplyRadiusDamage_Statics::NewProp_DamageRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDestructibleComponent_ApplyRadiusDamage_Statics::NewProp_ImpulseStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDestructibleComponent_ApplyRadiusDamage_Statics::NewProp_bFullDamage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDestructibleComponent_ApplyRadiusDamage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Destructible" },
		{ "Comment", "// Take radius damage\n" },
		{ "ModuleRelativePath", "Public/DestructibleComponent.h" },
		{ "ToolTip", "Take radius damage" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDestructibleComponent_ApplyRadiusDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDestructibleComponent, nullptr, "ApplyRadiusDamage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDestructibleComponent_ApplyRadiusDamage_Statics::DestructibleComponent_eventApplyRadiusDamage_Parms), Z_Construct_UFunction_UDestructibleComponent_ApplyRadiusDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDestructibleComponent_ApplyRadiusDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDestructibleComponent_ApplyRadiusDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDestructibleComponent_ApplyRadiusDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDestructibleComponent_ApplyRadiusDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDestructibleComponent_ApplyRadiusDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDestructibleComponent_GetDestructibleMesh_Statics
	{
		struct DestructibleComponent_eventGetDestructibleMesh_Parms
		{
			UDestructibleMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDestructibleComponent_GetDestructibleMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DestructibleComponent_eventGetDestructibleMesh_Parms, ReturnValue), Z_Construct_UClass_UDestructibleMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDestructibleComponent_GetDestructibleMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDestructibleComponent_GetDestructibleMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDestructibleComponent_GetDestructibleMesh_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Components|Destructible" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Destructible mesh is now deprected, use UGeometryCollection instead" },
		{ "ModuleRelativePath", "Public/DestructibleComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDestructibleComponent_GetDestructibleMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDestructibleComponent, nullptr, "GetDestructibleMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDestructibleComponent_GetDestructibleMesh_Statics::DestructibleComponent_eventGetDestructibleMesh_Parms), Z_Construct_UFunction_UDestructibleComponent_GetDestructibleMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDestructibleComponent_GetDestructibleMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDestructibleComponent_GetDestructibleMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDestructibleComponent_GetDestructibleMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDestructibleComponent_GetDestructibleMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDestructibleComponent_GetDestructibleMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDestructibleComponent_SetDestructibleMesh_Statics
	{
		struct DestructibleComponent_eventSetDestructibleMesh_Parms
		{
			UDestructibleMesh* NewMesh;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDestructibleComponent_SetDestructibleMesh_Statics::NewProp_NewMesh = { "NewMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DestructibleComponent_eventSetDestructibleMesh_Parms, NewMesh), Z_Construct_UClass_UDestructibleMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDestructibleComponent_SetDestructibleMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDestructibleComponent_SetDestructibleMesh_Statics::NewProp_NewMesh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDestructibleComponent_SetDestructibleMesh_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Components|Destructible" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Destructible mesh is now deprected, use UGeometryCollection instead" },
		{ "ModuleRelativePath", "Public/DestructibleComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDestructibleComponent_SetDestructibleMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDestructibleComponent, nullptr, "SetDestructibleMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDestructibleComponent_SetDestructibleMesh_Statics::DestructibleComponent_eventSetDestructibleMesh_Parms), Z_Construct_UFunction_UDestructibleComponent_SetDestructibleMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDestructibleComponent_SetDestructibleMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDestructibleComponent_SetDestructibleMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDestructibleComponent_SetDestructibleMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDestructibleComponent_SetDestructibleMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDestructibleComponent_SetDestructibleMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDestructibleComponent);
	UClass* Z_Construct_UClass_UDestructibleComponent_NoRegister()
	{
		return UDestructibleComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDestructibleComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFractureEffectOverride_MetaData[];
#endif
		static void NewProp_bFractureEffectOverride_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFractureEffectOverride;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FractureEffects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FractureEffects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FractureEffects;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableHardSleeping_MetaData[];
#endif
		static void NewProp_bEnableHardSleeping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableHardSleeping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LargeChunkThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LargeChunkThreshold;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestructibleMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DestructibleMesh;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnComponentFracture_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnComponentFracture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDestructibleComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USkinnedMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ApexDestruction,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDestructibleComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDestructibleComponent_ApplyDamage, "ApplyDamage" }, // 2327560444
		{ &Z_Construct_UFunction_UDestructibleComponent_ApplyRadiusDamage, "ApplyRadiusDamage" }, // 3359599947
		{ &Z_Construct_UFunction_UDestructibleComponent_GetDestructibleMesh, "GetDestructibleMesh" }, // 3997401941
		{ &Z_Construct_UFunction_UDestructibleComponent_SetDestructibleMesh, "SetDestructibleMesh" }, // 2022184328
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDestructibleComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Physics" },
		{ "HideCategories", "Object Mesh Mesh|SkeletalAsset Components|SkinnedMesh Mirroring Activation Components|Activation Object Mobility Trigger" },
		{ "IncludePath", "DestructibleComponent.h" },
		{ "ModuleRelativePath", "Public/DestructibleComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDestructibleComponent_Statics::NewProp_bFractureEffectOverride_MetaData[] = {
		{ "Category", "DestructibleComponent" },
		{ "Comment", "/** If set, use this actor's fracture effects instead of the asset's fracture effects. */" },
		{ "ModuleRelativePath", "Public/DestructibleComponent.h" },
		{ "ToolTip", "If set, use this actor's fracture effects instead of the asset's fracture effects." },
	};
#endif
	void Z_Construct_UClass_UDestructibleComponent_Statics::NewProp_bFractureEffectOverride_SetBit(void* Obj)
	{
		((UDestructibleComponent*)Obj)->bFractureEffectOverride = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDestructibleComponent_Statics::NewProp_bFractureEffectOverride = { "bFractureEffectOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UDestructibleComponent), &Z_Construct_UClass_UDestructibleComponent_Statics::NewProp_bFractureEffectOverride_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDestructibleComponent_Statics::NewProp_bFractureEffectOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDestructibleComponent_Statics::NewProp_bFractureEffectOverride_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDestructibleComponent_Statics::NewProp_FractureEffects_Inner = { "FractureEffects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FFractureEffect, METADATA_PARAMS(nullptr, 0) }; // 291772774
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDestructibleComponent_Statics::NewProp_FractureEffects_MetaData[] = {
		{ "Category", "DestructibleComponent" },
		{ "Comment", "/** Fracture effects for each fracture level. Used only if Fracture Effect Override is set. */" },
		{ "ModuleRelativePath", "Public/DestructibleComponent.h" },
		{ "ToolTip", "Fracture effects for each fracture level. Used only if Fracture Effect Override is set." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDestructibleComponent_Statics::NewProp_FractureEffects = { "FractureEffects", nullptr, (EPropertyFlags)0x0010000000000055, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDestructibleComponent, FractureEffects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDestructibleComponent_Statics::NewProp_FractureEffects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDestructibleComponent_Statics::NewProp_FractureEffects_MetaData)) }; // 291772774
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDestructibleComponent_Statics::NewProp_bEnableHardSleeping_MetaData[] = {
		{ "Category", "DestructibleComponent" },
		{ "Comment", "/**\n\x09 *\x09""Enable \"hard sleeping\" for destruction-generated PxActors.  This means that they turn kinematic\n\x09 *\x09when they sleep, but can be made dynamic again by application of enough damage.\n\x09 */" },
		{ "ModuleRelativePath", "Public/DestructibleComponent.h" },
		{ "ToolTip", "Enable \"hard sleeping\" for destruction-generated PxActors.  This means that they turn kinematic\nwhen they sleep, but can be made dynamic again by application of enough damage." },
	};
#endif
	void Z_Construct_UClass_UDestructibleComponent_Statics::NewProp_bEnableHardSleeping_SetBit(void* Obj)
	{
		((UDestructibleComponent*)Obj)->bEnableHardSleeping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDestructibleComponent_Statics::NewProp_bEnableHardSleeping = { "bEnableHardSleeping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDestructibleComponent), &Z_Construct_UClass_UDestructibleComponent_Statics::NewProp_bEnableHardSleeping_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDestructibleComponent_Statics::NewProp_bEnableHardSleeping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDestructibleComponent_Statics::NewProp_bEnableHardSleeping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDestructibleComponent_Statics::NewProp_LargeChunkThreshold_MetaData[] = {
		{ "Category", "DestructibleComponent" },
		{ "Comment", "/**\n\x09 * The minimum size required to treat chunks as Large.\n\x09 */" },
		{ "ModuleRelativePath", "Public/DestructibleComponent.h" },
		{ "ToolTip", "The minimum size required to treat chunks as Large." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDestructibleComponent_Statics::NewProp_LargeChunkThreshold = { "LargeChunkThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDestructibleComponent, LargeChunkThreshold), METADATA_PARAMS(Z_Construct_UClass_UDestructibleComponent_Statics::NewProp_LargeChunkThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDestructibleComponent_Statics::NewProp_LargeChunkThreshold_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDestructibleComponent_Statics::NewProp_DestructibleMesh_MetaData[] = {
		{ "BlueprintGetter", "GetDestructibleMesh" },
		{ "BlueprintSetter", "SetDestructibleMesh" },
		{ "Category", "Components|Destructible" },
		{ "Comment", "/** Provide a blueprint interface for setting the destructible mesh */" },
		{ "DeprecatedMessage", "Destructible mesh is now deprected, use UGeometryCollection instead" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/DestructibleComponent.h" },
		{ "ToolTip", "Provide a blueprint interface for setting the destructible mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDestructibleComponent_Statics::NewProp_DestructibleMesh = { "DestructibleMesh", nullptr, (EPropertyFlags)0x0014000820002004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDestructibleComponent, DestructibleMesh_DEPRECATED), Z_Construct_UClass_UDestructibleMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDestructibleComponent_Statics::NewProp_DestructibleMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDestructibleComponent_Statics::NewProp_DestructibleMesh_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDestructibleComponent_Statics::NewProp_OnComponentFracture_MetaData[] = {
		{ "Category", "Components|Destructible" },
		{ "Comment", "/** Called when a component is touched */" },
		{ "ModuleRelativePath", "Public/DestructibleComponent.h" },
		{ "ToolTip", "Called when a component is touched" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDestructibleComponent_Statics::NewProp_OnComponentFracture = { "OnComponentFracture", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDestructibleComponent, OnComponentFracture), Z_Construct_UDelegateFunction_ApexDestruction_ComponentFractureSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDestructibleComponent_Statics::NewProp_OnComponentFracture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDestructibleComponent_Statics::NewProp_OnComponentFracture_MetaData)) }; // 133784517
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDestructibleComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDestructibleComponent_Statics::NewProp_bFractureEffectOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDestructibleComponent_Statics::NewProp_FractureEffects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDestructibleComponent_Statics::NewProp_FractureEffects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDestructibleComponent_Statics::NewProp_bEnableHardSleeping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDestructibleComponent_Statics::NewProp_LargeChunkThreshold,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDestructibleComponent_Statics::NewProp_DestructibleMesh,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDestructibleComponent_Statics::NewProp_OnComponentFracture,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UDestructibleComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UDestructibleInterface_NoRegister, (int32)VTABLE_OFFSET(UDestructibleComponent, IDestructibleInterface), false },  // 4143378890
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDestructibleComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDestructibleComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDestructibleComponent_Statics::ClassParams = {
		&UDestructibleComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDestructibleComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDestructibleComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDestructibleComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDestructibleComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDestructibleComponent()
	{
		if (!Z_Registration_Info_UClass_UDestructibleComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDestructibleComponent.OuterSingleton, Z_Construct_UClass_UDestructibleComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDestructibleComponent.OuterSingleton;
	}
	template<> APEXDESTRUCTION_API UClass* StaticClass<UDestructibleComponent>()
	{
		return UDestructibleComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDestructibleComponent);
	UDestructibleComponent::~UDestructibleComponent() {}
#if WITH_EDITORONLY_DATA
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UDestructibleComponent)
#endif
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDestructibleComponent, UDestructibleComponent::StaticClass, TEXT("UDestructibleComponent"), &Z_Registration_Info_UClass_UDestructibleComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDestructibleComponent), 2528440884U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleComponent_h_1166186045(TEXT("/Script/ApexDestruction"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
