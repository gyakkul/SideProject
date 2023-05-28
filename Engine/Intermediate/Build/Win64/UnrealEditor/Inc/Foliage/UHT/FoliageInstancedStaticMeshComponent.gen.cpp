// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FoliageInstancedStaticMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFoliageInstancedStaticMeshComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent();
	FOLIAGE_API UClass* Z_Construct_UClass_UFoliageInstancedStaticMeshComponent();
	FOLIAGE_API UClass* Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_NoRegister();
	FOLIAGE_API UFunction* Z_Construct_UDelegateFunction_Foliage_InstancePointDamageSignature__DelegateSignature();
	FOLIAGE_API UFunction* Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Foliage();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Foliage_InstancePointDamageSignature__DelegateSignature_Statics
	{
		struct _Script_Foliage_eventInstancePointDamageSignature_Parms
		{
			int32 InstanceIndex;
			float Damage;
			AController* InstigatedBy;
			FVector HitLocation;
			FVector ShotFromDirection;
			const UDamageType* DamageType;
			AActor* DamageCauser;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InstanceIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy;
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitLocation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ShotFromDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Foliage_InstancePointDamageSignature__DelegateSignature_Statics::NewProp_InstanceIndex = { "InstanceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Foliage_eventInstancePointDamageSignature_Parms, InstanceIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Foliage_InstancePointDamageSignature__DelegateSignature_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Foliage_eventInstancePointDamageSignature_Parms, Damage), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Foliage_InstancePointDamageSignature__DelegateSignature_Statics::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Foliage_eventInstancePointDamageSignature_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Foliage_InstancePointDamageSignature__DelegateSignature_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Foliage_eventInstancePointDamageSignature_Parms, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Foliage_InstancePointDamageSignature__DelegateSignature_Statics::NewProp_ShotFromDirection = { "ShotFromDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Foliage_eventInstancePointDamageSignature_Parms, ShotFromDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Foliage_InstancePointDamageSignature__DelegateSignature_Statics::NewProp_DamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Foliage_InstancePointDamageSignature__DelegateSignature_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Foliage_eventInstancePointDamageSignature_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_Foliage_InstancePointDamageSignature__DelegateSignature_Statics::NewProp_DamageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Foliage_InstancePointDamageSignature__DelegateSignature_Statics::NewProp_DamageType_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Foliage_InstancePointDamageSignature__DelegateSignature_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Foliage_eventInstancePointDamageSignature_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Foliage_InstancePointDamageSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Foliage_InstancePointDamageSignature__DelegateSignature_Statics::NewProp_InstanceIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Foliage_InstancePointDamageSignature__DelegateSignature_Statics::NewProp_Damage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Foliage_InstancePointDamageSignature__DelegateSignature_Statics::NewProp_InstigatedBy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Foliage_InstancePointDamageSignature__DelegateSignature_Statics::NewProp_HitLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Foliage_InstancePointDamageSignature__DelegateSignature_Statics::NewProp_ShotFromDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Foliage_InstancePointDamageSignature__DelegateSignature_Statics::NewProp_DamageType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Foliage_InstancePointDamageSignature__DelegateSignature_Statics::NewProp_DamageCauser,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Foliage_InstancePointDamageSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n*/" },
		{ "ModuleRelativePath", "Public/FoliageInstancedStaticMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Foliage_InstancePointDamageSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Foliage, nullptr, "InstancePointDamageSignature__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Foliage_InstancePointDamageSignature__DelegateSignature_Statics::_Script_Foliage_eventInstancePointDamageSignature_Parms), Z_Construct_UDelegateFunction_Foliage_InstancePointDamageSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Foliage_InstancePointDamageSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Foliage_InstancePointDamageSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Foliage_InstancePointDamageSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Foliage_InstancePointDamageSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Foliage_InstancePointDamageSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FInstancePointDamageSignature_DelegateWrapper(const FMulticastScriptDelegate& InstancePointDamageSignature, int32 InstanceIndex, float Damage, AController* InstigatedBy, FVector HitLocation, FVector ShotFromDirection, const UDamageType* DamageType, AActor* DamageCauser)
{
	struct _Script_Foliage_eventInstancePointDamageSignature_Parms
	{
		int32 InstanceIndex;
		float Damage;
		AController* InstigatedBy;
		FVector HitLocation;
		FVector ShotFromDirection;
		const UDamageType* DamageType;
		AActor* DamageCauser;
	};
	_Script_Foliage_eventInstancePointDamageSignature_Parms Parms;
	Parms.InstanceIndex=InstanceIndex;
	Parms.Damage=Damage;
	Parms.InstigatedBy=InstigatedBy;
	Parms.HitLocation=HitLocation;
	Parms.ShotFromDirection=ShotFromDirection;
	Parms.DamageType=DamageType;
	Parms.DamageCauser=DamageCauser;
	InstancePointDamageSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics
	{
		struct _Script_Foliage_eventInstanceRadialDamageSignature_Parms
		{
			TArray<int32> Instances;
			TArray<float> Damages;
			AController* InstigatedBy;
			FVector Origin;
			float MaxRadius;
			const UDamageType* DamageType;
			AActor* DamageCauser;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Instances_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Instances_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Instances;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Damages_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Damages_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Damages;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics::NewProp_Instances_Inner = { "Instances", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics::NewProp_Instances_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics::NewProp_Instances = { "Instances", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Foliage_eventInstanceRadialDamageSignature_Parms, Instances), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics::NewProp_Instances_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics::NewProp_Instances_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics::NewProp_Damages_Inner = { "Damages", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics::NewProp_Damages_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics::NewProp_Damages = { "Damages", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Foliage_eventInstanceRadialDamageSignature_Parms, Damages), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics::NewProp_Damages_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics::NewProp_Damages_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Foliage_eventInstanceRadialDamageSignature_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Foliage_eventInstanceRadialDamageSignature_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics::NewProp_MaxRadius = { "MaxRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Foliage_eventInstanceRadialDamageSignature_Parms, MaxRadius), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics::NewProp_DamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Foliage_eventInstanceRadialDamageSignature_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics::NewProp_DamageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics::NewProp_DamageType_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Foliage_eventInstanceRadialDamageSignature_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics::NewProp_Instances_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics::NewProp_Instances,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics::NewProp_Damages_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics::NewProp_Damages,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics::NewProp_InstigatedBy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics::NewProp_Origin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics::NewProp_MaxRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics::NewProp_DamageType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics::NewProp_DamageCauser,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FoliageInstancedStaticMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Foliage, nullptr, "InstanceRadialDamageSignature__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics::_Script_Foliage_eventInstanceRadialDamageSignature_Parms), Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FInstanceRadialDamageSignature_DelegateWrapper(const FMulticastScriptDelegate& InstanceRadialDamageSignature, TArray<int32> const& Instances, TArray<float> const& Damages, AController* InstigatedBy, FVector Origin, float MaxRadius, const UDamageType* DamageType, AActor* DamageCauser)
{
	struct _Script_Foliage_eventInstanceRadialDamageSignature_Parms
	{
		TArray<int32> Instances;
		TArray<float> Damages;
		AController* InstigatedBy;
		FVector Origin;
		float MaxRadius;
		const UDamageType* DamageType;
		AActor* DamageCauser;
	};
	_Script_Foliage_eventInstanceRadialDamageSignature_Parms Parms;
	Parms.Instances=Instances;
	Parms.Damages=Damages;
	Parms.InstigatedBy=InstigatedBy;
	Parms.Origin=Origin;
	Parms.MaxRadius=MaxRadius;
	Parms.DamageType=DamageType;
	Parms.DamageCauser=DamageCauser;
	InstanceRadialDamageSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	void UFoliageInstancedStaticMeshComponent::StaticRegisterNativesUFoliageInstancedStaticMeshComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFoliageInstancedStaticMeshComponent);
	UClass* Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_NoRegister()
	{
		return UFoliageInstancedStaticMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnInstanceTakePointDamage_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInstanceTakePointDamage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnInstanceTakeRadialDamage_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInstanceTakeRadialDamage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDiscardOnLoad_MetaData[];
#endif
		static void NewProp_bEnableDiscardOnLoad_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDiscardOnLoad;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FoliageHiddenEditorViews_MetaData[];
#endif
		static const UECodeGen_Private::FFInt64PropertyParams NewProp_FoliageHiddenEditorViews;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GenerationGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GenerationGuid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Foliage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Foliage" },
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "FoliageInstancedStaticMeshComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FoliageInstancedStaticMeshComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_Statics::NewProp_OnInstanceTakePointDamage_MetaData[] = {
		{ "Category", "Game|Damage" },
		{ "ModuleRelativePath", "Public/FoliageInstancedStaticMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_Statics::NewProp_OnInstanceTakePointDamage = { "OnInstanceTakePointDamage", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFoliageInstancedStaticMeshComponent, OnInstanceTakePointDamage), Z_Construct_UDelegateFunction_Foliage_InstancePointDamageSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_Statics::NewProp_OnInstanceTakePointDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_Statics::NewProp_OnInstanceTakePointDamage_MetaData)) }; // 2712736897
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_Statics::NewProp_OnInstanceTakeRadialDamage_MetaData[] = {
		{ "Category", "Game|Damage" },
		{ "ModuleRelativePath", "Public/FoliageInstancedStaticMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_Statics::NewProp_OnInstanceTakeRadialDamage = { "OnInstanceTakeRadialDamage", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFoliageInstancedStaticMeshComponent, OnInstanceTakeRadialDamage), Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_Statics::NewProp_OnInstanceTakeRadialDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_Statics::NewProp_OnInstanceTakeRadialDamage_MetaData)) }; // 2988708489
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_Statics::NewProp_bEnableDiscardOnLoad_MetaData[] = {
		{ "ModuleRelativePath", "Public/FoliageInstancedStaticMeshComponent.h" },
	};
#endif
	void Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_Statics::NewProp_bEnableDiscardOnLoad_SetBit(void* Obj)
	{
		((UFoliageInstancedStaticMeshComponent*)Obj)->bEnableDiscardOnLoad = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_Statics::NewProp_bEnableDiscardOnLoad = { "bEnableDiscardOnLoad", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UFoliageInstancedStaticMeshComponent), &Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_Statics::NewProp_bEnableDiscardOnLoad_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_Statics::NewProp_bEnableDiscardOnLoad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_Statics::NewProp_bEnableDiscardOnLoad_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_Statics::NewProp_FoliageHiddenEditorViews_MetaData[] = {
		{ "ModuleRelativePath", "Public/FoliageInstancedStaticMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FFInt64PropertyParams Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_Statics::NewProp_FoliageHiddenEditorViews = { "FoliageHiddenEditorViews", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFoliageInstancedStaticMeshComponent, FoliageHiddenEditorViews), METADATA_PARAMS(Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_Statics::NewProp_FoliageHiddenEditorViews_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_Statics::NewProp_FoliageHiddenEditorViews_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_Statics::NewProp_GenerationGuid_MetaData[] = {
		{ "ModuleRelativePath", "Public/FoliageInstancedStaticMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_Statics::NewProp_GenerationGuid = { "GenerationGuid", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFoliageInstancedStaticMeshComponent, GenerationGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_Statics::NewProp_GenerationGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_Statics::NewProp_GenerationGuid_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_Statics::NewProp_OnInstanceTakePointDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_Statics::NewProp_OnInstanceTakeRadialDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_Statics::NewProp_bEnableDiscardOnLoad,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_Statics::NewProp_FoliageHiddenEditorViews,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_Statics::NewProp_GenerationGuid,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFoliageInstancedStaticMeshComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_Statics::ClassParams = {
		&UFoliageInstancedStaticMeshComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFoliageInstancedStaticMeshComponent()
	{
		if (!Z_Registration_Info_UClass_UFoliageInstancedStaticMeshComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFoliageInstancedStaticMeshComponent.OuterSingleton, Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFoliageInstancedStaticMeshComponent.OuterSingleton;
	}
	template<> FOLIAGE_API UClass* StaticClass<UFoliageInstancedStaticMeshComponent>()
	{
		return UFoliageInstancedStaticMeshComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFoliageInstancedStaticMeshComponent);
	UFoliageInstancedStaticMeshComponent::~UFoliageInstancedStaticMeshComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_FoliageInstancedStaticMeshComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_FoliageInstancedStaticMeshComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFoliageInstancedStaticMeshComponent, UFoliageInstancedStaticMeshComponent::StaticClass, TEXT("UFoliageInstancedStaticMeshComponent"), &Z_Registration_Info_UClass_UFoliageInstancedStaticMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFoliageInstancedStaticMeshComponent), 362794932U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_FoliageInstancedStaticMeshComponent_h_958255253(TEXT("/Script/Foliage"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_FoliageInstancedStaticMeshComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_FoliageInstancedStaticMeshComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
