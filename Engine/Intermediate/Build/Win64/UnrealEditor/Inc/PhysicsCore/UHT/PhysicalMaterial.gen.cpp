// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PhysicalMaterials/PhysicalMaterial.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicalMaterial() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	PHYSICSCORE_API UClass* Z_Construct_UClass_UDEPRECATED_PhysicalMaterialPropertyBase_NoRegister();
	PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial();
	PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
	PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_EFrictionCombineMode();
	PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_EPhysicalSurface();
	UPackage* Z_Construct_UPackage__Script_PhysicsCore();
// End Cross Module References
	void UPhysicalMaterial::StaticRegisterNativesUPhysicalMaterial()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPhysicalMaterial);
	UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister()
	{
		return UPhysicalMaterial::StaticClass();
	}
	struct Z_Construct_UClass_UPhysicalMaterial_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Friction_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Friction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticFriction_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StaticFriction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrictionCombineMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_FrictionCombineMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideFrictionCombineMode_MetaData[];
#endif
		static void NewProp_bOverrideFrictionCombineMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideFrictionCombineMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Restitution_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Restitution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RestitutionCombineMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_RestitutionCombineMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideRestitutionCombineMode_MetaData[];
#endif
		static void NewProp_bOverrideRestitutionCombineMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideRestitutionCombineMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Density_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Density;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SleepLinearVelocityThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SleepLinearVelocityThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SleepAngularVelocityThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SleepAngularVelocityThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SleepCounterThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SleepCounterThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RaiseMassToPower_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RaiseMassToPower;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestructibleDamageThresholdScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DestructibleDamageThresholdScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysicalMaterialProperty_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PhysicalMaterialProperty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_SurfaceType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPhysicalMaterial_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PhysicsCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicalMaterial_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Physical materials are used to define the response of a physical object when interacting dynamically with the world.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "PhysicalMaterials/PhysicalMaterial.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PhysicalMaterials/PhysicalMaterial.h" },
		{ "ToolTip", "Physical materials are used to define the response of a physical object when interacting dynamically with the world." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_Friction_MetaData[] = {
		{ "Category", "PhysicalMaterial" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Friction value of surface, controls how easily things can slide on this surface (0 is frictionless, higher values increase the amount of friction) */" },
		{ "ModuleRelativePath", "Public/PhysicalMaterials/PhysicalMaterial.h" },
		{ "ToolTip", "Friction value of surface, controls how easily things can slide on this surface (0 is frictionless, higher values increase the amount of friction)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_Friction = { "Friction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicalMaterial, Friction), METADATA_PARAMS(Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_Friction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_Friction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_StaticFriction_MetaData[] = {
		{ "Category", "PhysicalMaterial" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Static Friction value of surface, controls how easily things can slide on this surface (0 is frictionless, higher values increase the amount of friction) */" },
		{ "ModuleRelativePath", "Public/PhysicalMaterials/PhysicalMaterial.h" },
		{ "ToolTip", "Static Friction value of surface, controls how easily things can slide on this surface (0 is frictionless, higher values increase the amount of friction)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_StaticFriction = { "StaticFriction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicalMaterial, StaticFriction), METADATA_PARAMS(Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_StaticFriction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_StaticFriction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_FrictionCombineMode_MetaData[] = {
		{ "Category", "PhysicalMaterial" },
		{ "Comment", "/** Friction combine mode, controls how friction is computed for multiple materials. */" },
		{ "editcondition", "bOverrideFrictionCombineMode" },
		{ "ModuleRelativePath", "Public/PhysicalMaterials/PhysicalMaterial.h" },
		{ "ToolTip", "Friction combine mode, controls how friction is computed for multiple materials." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_FrictionCombineMode = { "FrictionCombineMode", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicalMaterial, FrictionCombineMode), Z_Construct_UEnum_PhysicsCore_EFrictionCombineMode, METADATA_PARAMS(Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_FrictionCombineMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_FrictionCombineMode_MetaData)) }; // 18850244
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_bOverrideFrictionCombineMode_MetaData[] = {
		{ "Category", "PhysicalMaterial" },
		{ "Comment", "/** If set we will use the FrictionCombineMode of this material, instead of the FrictionCombineMode found in the project settings. */" },
		{ "ModuleRelativePath", "Public/PhysicalMaterials/PhysicalMaterial.h" },
		{ "ToolTip", "If set we will use the FrictionCombineMode of this material, instead of the FrictionCombineMode found in the project settings." },
	};
#endif
	void Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_bOverrideFrictionCombineMode_SetBit(void* Obj)
	{
		((UPhysicalMaterial*)Obj)->bOverrideFrictionCombineMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_bOverrideFrictionCombineMode = { "bOverrideFrictionCombineMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPhysicalMaterial), &Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_bOverrideFrictionCombineMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_bOverrideFrictionCombineMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_bOverrideFrictionCombineMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_Restitution_MetaData[] = {
		{ "Category", "PhysicalMaterial" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Restitution or 'bounciness' of this surface, between 0 (no bounce) and 1 (outgoing velocity is same as incoming). */" },
		{ "ModuleRelativePath", "Public/PhysicalMaterials/PhysicalMaterial.h" },
		{ "ToolTip", "Restitution or 'bounciness' of this surface, between 0 (no bounce) and 1 (outgoing velocity is same as incoming)." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_Restitution = { "Restitution", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicalMaterial, Restitution), METADATA_PARAMS(Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_Restitution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_Restitution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_RestitutionCombineMode_MetaData[] = {
		{ "Category", "PhysicalMaterial" },
		{ "Comment", "/** Restitution combine mode, controls how restitution is computed for multiple materials. */" },
		{ "editcondition", "bOverrideRestitutionCombineMode" },
		{ "ModuleRelativePath", "Public/PhysicalMaterials/PhysicalMaterial.h" },
		{ "ToolTip", "Restitution combine mode, controls how restitution is computed for multiple materials." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_RestitutionCombineMode = { "RestitutionCombineMode", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicalMaterial, RestitutionCombineMode), Z_Construct_UEnum_PhysicsCore_EFrictionCombineMode, METADATA_PARAMS(Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_RestitutionCombineMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_RestitutionCombineMode_MetaData)) }; // 18850244
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_bOverrideRestitutionCombineMode_MetaData[] = {
		{ "Category", "PhysicalMaterial" },
		{ "Comment", "/** If set we will use the RestitutionCombineMode of this material, instead of the RestitutionCombineMode found in the project settings. */" },
		{ "ModuleRelativePath", "Public/PhysicalMaterials/PhysicalMaterial.h" },
		{ "ToolTip", "If set we will use the RestitutionCombineMode of this material, instead of the RestitutionCombineMode found in the project settings." },
	};
#endif
	void Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_bOverrideRestitutionCombineMode_SetBit(void* Obj)
	{
		((UPhysicalMaterial*)Obj)->bOverrideRestitutionCombineMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_bOverrideRestitutionCombineMode = { "bOverrideRestitutionCombineMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPhysicalMaterial), &Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_bOverrideRestitutionCombineMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_bOverrideRestitutionCombineMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_bOverrideRestitutionCombineMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_Density_MetaData[] = {
		{ "Category", "PhysicalMaterial" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Used with the shape of the object to calculate its mass properties. The higher the number, the heavier the object. g per cubic cm. */" },
		{ "ModuleRelativePath", "Public/PhysicalMaterials/PhysicalMaterial.h" },
		{ "ToolTip", "Used with the shape of the object to calculate its mass properties. The higher the number, the heavier the object. g per cubic cm." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_Density = { "Density", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicalMaterial, Density), METADATA_PARAMS(Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_Density_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_Density_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_SleepLinearVelocityThreshold_MetaData[] = {
		{ "Category", "PhysicalMaterial" },
		{ "ClampMin", "0" },
		{ "Comment", "/**  How low the linear velocity can be before solver puts body to sleep. */" },
		{ "ModuleRelativePath", "Public/PhysicalMaterials/PhysicalMaterial.h" },
		{ "ToolTip", "How low the linear velocity can be before solver puts body to sleep." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_SleepLinearVelocityThreshold = { "SleepLinearVelocityThreshold", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicalMaterial, SleepLinearVelocityThreshold), METADATA_PARAMS(Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_SleepLinearVelocityThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_SleepLinearVelocityThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_SleepAngularVelocityThreshold_MetaData[] = {
		{ "Category", "PhysicalMaterial" },
		{ "ClampMin", "0" },
		{ "Comment", "/** How low the angular velocity can be before solver puts body to sleep. */" },
		{ "ModuleRelativePath", "Public/PhysicalMaterials/PhysicalMaterial.h" },
		{ "ToolTip", "How low the angular velocity can be before solver puts body to sleep." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_SleepAngularVelocityThreshold = { "SleepAngularVelocityThreshold", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicalMaterial, SleepAngularVelocityThreshold), METADATA_PARAMS(Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_SleepAngularVelocityThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_SleepAngularVelocityThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_SleepCounterThreshold_MetaData[] = {
		{ "Category", "PhysicalMaterial" },
		{ "ClampMin", "0" },
		{ "Comment", "/** How many ticks we can be under thresholds for before solver puts body to sleep. */" },
		{ "ModuleRelativePath", "Public/PhysicalMaterials/PhysicalMaterial.h" },
		{ "ToolTip", "How many ticks we can be under thresholds for before solver puts body to sleep." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_SleepCounterThreshold = { "SleepCounterThreshold", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicalMaterial, SleepCounterThreshold), METADATA_PARAMS(Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_SleepCounterThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_SleepCounterThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_RaiseMassToPower_MetaData[] = {
		{ "Category", "Advanced" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0.100000" },
		{ "Comment", "/** \n\x09 *\x09Used to adjust the way that mass increases as objects get larger. This is applied to the mass as calculated based on a 'solid' object. \n\x09 *\x09In actuality, larger objects do not tend to be solid, and become more like 'shells' (e.g. a car is not a solid piece of metal).\n\x09 *\x09Values are clamped to 1 or less.\n\x09 */" },
		{ "ModuleRelativePath", "Public/PhysicalMaterials/PhysicalMaterial.h" },
		{ "ToolTip", "Used to adjust the way that mass increases as objects get larger. This is applied to the mass as calculated based on a 'solid' object.\nIn actuality, larger objects do not tend to be solid, and become more like 'shells' (e.g. a car is not a solid piece of metal).\nValues are clamped to 1 or less." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_RaiseMassToPower = { "RaiseMassToPower", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicalMaterial, RaiseMassToPower), METADATA_PARAMS(Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_RaiseMassToPower_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_RaiseMassToPower_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_DestructibleDamageThresholdScale_MetaData[] = {
		{ "Category", "Destruction" },
		{ "Comment", "/** How much to scale the damage threshold by on any destructible we are applied to */" },
		{ "ModuleRelativePath", "Public/PhysicalMaterials/PhysicalMaterial.h" },
		{ "ToolTip", "How much to scale the damage threshold by on any destructible we are applied to" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_DestructibleDamageThresholdScale = { "DestructibleDamageThresholdScale", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicalMaterial, DestructibleDamageThresholdScale), METADATA_PARAMS(Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_DestructibleDamageThresholdScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_DestructibleDamageThresholdScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_PhysicalMaterialProperty_MetaData[] = {
		{ "ModuleRelativePath", "Public/PhysicalMaterials/PhysicalMaterial.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_PhysicalMaterialProperty = { "PhysicalMaterialProperty", nullptr, (EPropertyFlags)0x0014000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicalMaterial, PhysicalMaterialProperty_DEPRECATED), Z_Construct_UClass_UDEPRECATED_PhysicalMaterialPropertyBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_PhysicalMaterialProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_PhysicalMaterialProperty_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_SurfaceType_MetaData[] = {
		{ "Category", "PhysicalProperties" },
		{ "Comment", "/**\n\x09 * To edit surface type for your project, use ProjectSettings/Physics/PhysicalSurface section\n\x09*/" },
		{ "ModuleRelativePath", "Public/PhysicalMaterials/PhysicalMaterial.h" },
		{ "ToolTip", "To edit surface type for your project, use ProjectSettings/Physics/PhysicalSurface section" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_SurfaceType = { "SurfaceType", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicalMaterial, SurfaceType), Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_SurfaceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_SurfaceType_MetaData)) }; // 455643187
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPhysicalMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_Friction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_StaticFriction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_FrictionCombineMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_bOverrideFrictionCombineMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_Restitution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_RestitutionCombineMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_bOverrideRestitutionCombineMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_Density,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_SleepLinearVelocityThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_SleepAngularVelocityThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_SleepCounterThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_RaiseMassToPower,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_DestructibleDamageThresholdScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_PhysicalMaterialProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicalMaterial_Statics::NewProp_SurfaceType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPhysicalMaterial_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhysicalMaterial>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPhysicalMaterial_Statics::ClassParams = {
		&UPhysicalMaterial::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPhysicalMaterial_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicalMaterial_Statics::PropPointers),
		0,
		0x001020A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPhysicalMaterial_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicalMaterial_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPhysicalMaterial()
	{
		if (!Z_Registration_Info_UClass_UPhysicalMaterial.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPhysicalMaterial.OuterSingleton, Z_Construct_UClass_UPhysicalMaterial_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPhysicalMaterial.OuterSingleton;
	}
	template<> PHYSICSCORE_API UClass* StaticClass<UPhysicalMaterial>()
	{
		return UPhysicalMaterial::StaticClass();
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PhysicsCore_Public_PhysicalMaterials_PhysicalMaterial_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PhysicsCore_Public_PhysicalMaterials_PhysicalMaterial_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPhysicalMaterial, UPhysicalMaterial::StaticClass, TEXT("UPhysicalMaterial"), &Z_Registration_Info_UClass_UPhysicalMaterial, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPhysicalMaterial), 3195113282U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PhysicsCore_Public_PhysicalMaterials_PhysicalMaterial_h_2442878580(TEXT("/Script/PhysicsCore"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PhysicsCore_Public_PhysicalMaterials_PhysicalMaterial_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PhysicsCore_Public_PhysicalMaterials_PhysicalMaterial_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
