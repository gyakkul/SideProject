// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/PhysicsEngine/RadialForceComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRadialForceComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_URadialForceComponent();
	ENGINE_API UClass* Z_Construct_UClass_URadialForceComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
	PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_ERadialImpulseFalloff();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	DEFINE_FUNCTION(URadialForceComponent::execRemoveObjectTypeToAffect)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_ObjectType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveObjectTypeToAffect(EObjectTypeQuery(Z_Param_ObjectType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URadialForceComponent::execAddObjectTypeToAffect)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_ObjectType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddObjectTypeToAffect(EObjectTypeQuery(Z_Param_ObjectType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URadialForceComponent::execFireImpulse)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FireImpulse();
		P_NATIVE_END;
	}
	void URadialForceComponent::StaticRegisterNativesURadialForceComponent()
	{
		UClass* Class = URadialForceComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddObjectTypeToAffect", &URadialForceComponent::execAddObjectTypeToAffect },
			{ "FireImpulse", &URadialForceComponent::execFireImpulse },
			{ "RemoveObjectTypeToAffect", &URadialForceComponent::execRemoveObjectTypeToAffect },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URadialForceComponent_AddObjectTypeToAffect_Statics
	{
		struct RadialForceComponent_eventAddObjectTypeToAffect_Parms
		{
			TEnumAsByte<EObjectTypeQuery> ObjectType;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ObjectType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URadialForceComponent_AddObjectTypeToAffect_Statics::NewProp_ObjectType = { "ObjectType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RadialForceComponent_eventAddObjectTypeToAffect_Parms, ObjectType), Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(nullptr, 0) }; // 3629342158
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URadialForceComponent_AddObjectTypeToAffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadialForceComponent_AddObjectTypeToAffect_Statics::NewProp_ObjectType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URadialForceComponent_AddObjectTypeToAffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|RadialForce" },
		{ "Comment", "/** Add an object type for this radial force to affect */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/RadialForceComponent.h" },
		{ "ToolTip", "Add an object type for this radial force to affect" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URadialForceComponent_AddObjectTypeToAffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URadialForceComponent, nullptr, "AddObjectTypeToAffect", nullptr, nullptr, sizeof(Z_Construct_UFunction_URadialForceComponent_AddObjectTypeToAffect_Statics::RadialForceComponent_eventAddObjectTypeToAffect_Parms), Z_Construct_UFunction_URadialForceComponent_AddObjectTypeToAffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URadialForceComponent_AddObjectTypeToAffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URadialForceComponent_AddObjectTypeToAffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URadialForceComponent_AddObjectTypeToAffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URadialForceComponent_AddObjectTypeToAffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URadialForceComponent_AddObjectTypeToAffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URadialForceComponent_FireImpulse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URadialForceComponent_FireImpulse_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|RadialForce" },
		{ "Comment", "/** Fire a single impulse */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/RadialForceComponent.h" },
		{ "ToolTip", "Fire a single impulse" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URadialForceComponent_FireImpulse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URadialForceComponent, nullptr, "FireImpulse", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URadialForceComponent_FireImpulse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URadialForceComponent_FireImpulse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URadialForceComponent_FireImpulse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URadialForceComponent_FireImpulse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URadialForceComponent_RemoveObjectTypeToAffect_Statics
	{
		struct RadialForceComponent_eventRemoveObjectTypeToAffect_Parms
		{
			TEnumAsByte<EObjectTypeQuery> ObjectType;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ObjectType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URadialForceComponent_RemoveObjectTypeToAffect_Statics::NewProp_ObjectType = { "ObjectType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RadialForceComponent_eventRemoveObjectTypeToAffect_Parms, ObjectType), Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(nullptr, 0) }; // 3629342158
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URadialForceComponent_RemoveObjectTypeToAffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadialForceComponent_RemoveObjectTypeToAffect_Statics::NewProp_ObjectType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URadialForceComponent_RemoveObjectTypeToAffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|RadialForce" },
		{ "Comment", "/** Remove an object type that is affected by this radial force */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/RadialForceComponent.h" },
		{ "ToolTip", "Remove an object type that is affected by this radial force" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URadialForceComponent_RemoveObjectTypeToAffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URadialForceComponent, nullptr, "RemoveObjectTypeToAffect", nullptr, nullptr, sizeof(Z_Construct_UFunction_URadialForceComponent_RemoveObjectTypeToAffect_Statics::RadialForceComponent_eventRemoveObjectTypeToAffect_Parms), Z_Construct_UFunction_URadialForceComponent_RemoveObjectTypeToAffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URadialForceComponent_RemoveObjectTypeToAffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URadialForceComponent_RemoveObjectTypeToAffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URadialForceComponent_RemoveObjectTypeToAffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URadialForceComponent_RemoveObjectTypeToAffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URadialForceComponent_RemoveObjectTypeToAffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URadialForceComponent);
	UClass* Z_Construct_UClass_URadialForceComponent_NoRegister()
	{
		return URadialForceComponent::StaticClass();
	}
	struct Z_Construct_UClass_URadialForceComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Falloff_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Falloff;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImpulseStrength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ImpulseStrength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bImpulseVelChange_MetaData[];
#endif
		static void NewProp_bImpulseVelChange_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImpulseVelChange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreOwningActor_MetaData[];
#endif
		static void NewProp_bIgnoreOwningActor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreOwningActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForceStrength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ForceStrength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestructibleDamage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DestructibleDamage;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ObjectTypesToAffect_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectTypesToAffect_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ObjectTypesToAffect;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URadialForceComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URadialForceComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URadialForceComponent_AddObjectTypeToAffect, "AddObjectTypeToAffect" }, // 2904506276
		{ &Z_Construct_UFunction_URadialForceComponent_FireImpulse, "FireImpulse" }, // 1641812219
		{ &Z_Construct_UFunction_URadialForceComponent_RemoveObjectTypeToAffect, "RemoveObjectTypeToAffect" }, // 2151512801
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URadialForceComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Physics" },
		{ "Comment", "/**\n *\x09Used to emit a radial force or impulse that can affect physics objects and or destructible objects.\n */" },
		{ "HideCategories", "Object Mobility LOD Physics PhysicsVolume" },
		{ "IncludePath", "PhysicsEngine/RadialForceComponent.h" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/RadialForceComponent.h" },
		{ "ToolTip", "Used to emit a radial force or impulse that can affect physics objects and or destructible objects." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URadialForceComponent_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "RadialForceComponent" },
		{ "Comment", "/** The radius to apply the force or impulse in */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/RadialForceComponent.h" },
		{ "ToolTip", "The radius to apply the force or impulse in" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URadialForceComponent_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URadialForceComponent, Radius), METADATA_PARAMS(Z_Construct_UClass_URadialForceComponent_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URadialForceComponent_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URadialForceComponent_Statics::NewProp_Falloff_MetaData[] = {
		{ "Category", "RadialForceComponent" },
		{ "Comment", "/** How the force or impulse should fall off as object are further away from the center */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/RadialForceComponent.h" },
		{ "ToolTip", "How the force or impulse should fall off as object are further away from the center" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URadialForceComponent_Statics::NewProp_Falloff = { "Falloff", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URadialForceComponent, Falloff), Z_Construct_UEnum_PhysicsCore_ERadialImpulseFalloff, METADATA_PARAMS(Z_Construct_UClass_URadialForceComponent_Statics::NewProp_Falloff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URadialForceComponent_Statics::NewProp_Falloff_MetaData)) }; // 1879851562
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URadialForceComponent_Statics::NewProp_ImpulseStrength_MetaData[] = {
		{ "Category", "Impulse" },
		{ "Comment", "/** How strong the impulse should be */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/RadialForceComponent.h" },
		{ "ToolTip", "How strong the impulse should be" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URadialForceComponent_Statics::NewProp_ImpulseStrength = { "ImpulseStrength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URadialForceComponent, ImpulseStrength), METADATA_PARAMS(Z_Construct_UClass_URadialForceComponent_Statics::NewProp_ImpulseStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URadialForceComponent_Statics::NewProp_ImpulseStrength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URadialForceComponent_Statics::NewProp_bImpulseVelChange_MetaData[] = {
		{ "Category", "Impulse" },
		{ "Comment", "/** If true, the impulse will ignore mass of objects and will always result in a fixed velocity change */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/RadialForceComponent.h" },
		{ "ToolTip", "If true, the impulse will ignore mass of objects and will always result in a fixed velocity change" },
	};
#endif
	void Z_Construct_UClass_URadialForceComponent_Statics::NewProp_bImpulseVelChange_SetBit(void* Obj)
	{
		((URadialForceComponent*)Obj)->bImpulseVelChange = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URadialForceComponent_Statics::NewProp_bImpulseVelChange = { "bImpulseVelChange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(URadialForceComponent), &Z_Construct_UClass_URadialForceComponent_Statics::NewProp_bImpulseVelChange_SetBit, METADATA_PARAMS(Z_Construct_UClass_URadialForceComponent_Statics::NewProp_bImpulseVelChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URadialForceComponent_Statics::NewProp_bImpulseVelChange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URadialForceComponent_Statics::NewProp_bIgnoreOwningActor_MetaData[] = {
		{ "Category", "Impulse" },
		{ "Comment", "/** If true, do not apply force/impulse to any physics objects that are part of the Actor that owns this component. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/RadialForceComponent.h" },
		{ "ToolTip", "If true, do not apply force/impulse to any physics objects that are part of the Actor that owns this component." },
	};
#endif
	void Z_Construct_UClass_URadialForceComponent_Statics::NewProp_bIgnoreOwningActor_SetBit(void* Obj)
	{
		((URadialForceComponent*)Obj)->bIgnoreOwningActor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URadialForceComponent_Statics::NewProp_bIgnoreOwningActor = { "bIgnoreOwningActor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(URadialForceComponent), &Z_Construct_UClass_URadialForceComponent_Statics::NewProp_bIgnoreOwningActor_SetBit, METADATA_PARAMS(Z_Construct_UClass_URadialForceComponent_Statics::NewProp_bIgnoreOwningActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URadialForceComponent_Statics::NewProp_bIgnoreOwningActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URadialForceComponent_Statics::NewProp_ForceStrength_MetaData[] = {
		{ "Category", "Force" },
		{ "Comment", "/** How strong the force should be */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/RadialForceComponent.h" },
		{ "ToolTip", "How strong the force should be" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URadialForceComponent_Statics::NewProp_ForceStrength = { "ForceStrength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URadialForceComponent, ForceStrength), METADATA_PARAMS(Z_Construct_UClass_URadialForceComponent_Statics::NewProp_ForceStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URadialForceComponent_Statics::NewProp_ForceStrength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URadialForceComponent_Statics::NewProp_DestructibleDamage_MetaData[] = {
		{ "Category", "Destructible" },
		{ "Comment", "/** If > 0.f, will cause damage to destructible meshes as well  */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/RadialForceComponent.h" },
		{ "ToolTip", "If > 0.f, will cause damage to destructible meshes as well" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URadialForceComponent_Statics::NewProp_DestructibleDamage = { "DestructibleDamage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URadialForceComponent, DestructibleDamage), METADATA_PARAMS(Z_Construct_UClass_URadialForceComponent_Statics::NewProp_DestructibleDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URadialForceComponent_Statics::NewProp_DestructibleDamage_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URadialForceComponent_Statics::NewProp_ObjectTypesToAffect_Inner = { "ObjectTypesToAffect", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(nullptr, 0) }; // 3629342158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URadialForceComponent_Statics::NewProp_ObjectTypesToAffect_MetaData[] = {
		{ "Category", "RadialForceComponent" },
		{ "Comment", "/** The object types that are affected by this radial force */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/RadialForceComponent.h" },
		{ "ToolTip", "The object types that are affected by this radial force" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URadialForceComponent_Statics::NewProp_ObjectTypesToAffect = { "ObjectTypesToAffect", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URadialForceComponent, ObjectTypesToAffect), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URadialForceComponent_Statics::NewProp_ObjectTypesToAffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URadialForceComponent_Statics::NewProp_ObjectTypesToAffect_MetaData)) }; // 3629342158
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URadialForceComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadialForceComponent_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadialForceComponent_Statics::NewProp_Falloff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadialForceComponent_Statics::NewProp_ImpulseStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadialForceComponent_Statics::NewProp_bImpulseVelChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadialForceComponent_Statics::NewProp_bIgnoreOwningActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadialForceComponent_Statics::NewProp_ForceStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadialForceComponent_Statics::NewProp_DestructibleDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadialForceComponent_Statics::NewProp_ObjectTypesToAffect_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadialForceComponent_Statics::NewProp_ObjectTypesToAffect,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URadialForceComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URadialForceComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URadialForceComponent_Statics::ClassParams = {
		&URadialForceComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URadialForceComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URadialForceComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_URadialForceComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URadialForceComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URadialForceComponent()
	{
		if (!Z_Registration_Info_UClass_URadialForceComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URadialForceComponent.OuterSingleton, Z_Construct_UClass_URadialForceComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URadialForceComponent.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<URadialForceComponent>()
	{
		return URadialForceComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URadialForceComponent);
	URadialForceComponent::~URadialForceComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RadialForceComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RadialForceComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URadialForceComponent, URadialForceComponent::StaticClass, TEXT("URadialForceComponent"), &Z_Registration_Info_UClass_URadialForceComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URadialForceComponent), 2170078026U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RadialForceComponent_h_3495778549(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RadialForceComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RadialForceComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
