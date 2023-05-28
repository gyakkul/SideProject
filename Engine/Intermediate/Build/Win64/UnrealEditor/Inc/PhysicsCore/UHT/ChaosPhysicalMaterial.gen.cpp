// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Chaos/ChaosPhysicalMaterial.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaosPhysicalMaterial() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	PHYSICSCORE_API UClass* Z_Construct_UClass_UChaosPhysicalMaterial();
	PHYSICSCORE_API UClass* Z_Construct_UClass_UChaosPhysicalMaterial_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PhysicsCore();
// End Cross Module References
	void UChaosPhysicalMaterial::StaticRegisterNativesUChaosPhysicalMaterial()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UChaosPhysicalMaterial);
	UClass* Z_Construct_UClass_UChaosPhysicalMaterial_NoRegister()
	{
		return UChaosPhysicalMaterial::StaticClass();
	}
	struct Z_Construct_UClass_UChaosPhysicalMaterial_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Restitution_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Restitution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinearEtherDrag_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LinearEtherDrag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularEtherDrag_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AngularEtherDrag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SleepingLinearVelocityThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SleepingLinearVelocityThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SleepingAngularVelocityThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SleepingAngularVelocityThreshold;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChaosPhysicalMaterial_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PhysicsCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosPhysicalMaterial_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Physical materials are used to define the response of a physical object when \n * interacting dynamically with the world.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Chaos/ChaosPhysicalMaterial.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosPhysicalMaterial.h" },
		{ "ToolTip", "Physical materials are used to define the response of a physical object when\ninteracting dynamically with the world." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosPhysicalMaterial_Statics::NewProp_Friction_MetaData[] = {
		{ "Category", "PhysicalMaterial" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Friction value of a surface in motion, controls how easily things can slide on this surface (0 is frictionless, higher values increase the amount of friction) */" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosPhysicalMaterial.h" },
		{ "ToolTip", "Friction value of a surface in motion, controls how easily things can slide on this surface (0 is frictionless, higher values increase the amount of friction)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosPhysicalMaterial_Statics::NewProp_Friction = { "Friction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChaosPhysicalMaterial, Friction), METADATA_PARAMS(Z_Construct_UClass_UChaosPhysicalMaterial_Statics::NewProp_Friction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosPhysicalMaterial_Statics::NewProp_Friction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosPhysicalMaterial_Statics::NewProp_StaticFriction_MetaData[] = {
		{ "Category", "PhysicalMaterial" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Friction value of surface at rest, controls how easily things can slide on this surface (0 is frictionless, higher values increase the amount of friction) */" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosPhysicalMaterial.h" },
		{ "ToolTip", "Friction value of surface at rest, controls how easily things can slide on this surface (0 is frictionless, higher values increase the amount of friction)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosPhysicalMaterial_Statics::NewProp_StaticFriction = { "StaticFriction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChaosPhysicalMaterial, StaticFriction), METADATA_PARAMS(Z_Construct_UClass_UChaosPhysicalMaterial_Statics::NewProp_StaticFriction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosPhysicalMaterial_Statics::NewProp_StaticFriction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosPhysicalMaterial_Statics::NewProp_Restitution_MetaData[] = {
		{ "Category", "PhysicalMaterial" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Restitution or 'bounciness' of this surface, between 0 (no bounce) and 1 (outgoing velocity is same as incoming). */" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosPhysicalMaterial.h" },
		{ "ToolTip", "Restitution or 'bounciness' of this surface, between 0 (no bounce) and 1 (outgoing velocity is same as incoming)." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosPhysicalMaterial_Statics::NewProp_Restitution = { "Restitution", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChaosPhysicalMaterial, Restitution), METADATA_PARAMS(Z_Construct_UClass_UChaosPhysicalMaterial_Statics::NewProp_Restitution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosPhysicalMaterial_Statics::NewProp_Restitution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosPhysicalMaterial_Statics::NewProp_LinearEtherDrag_MetaData[] = {
		{ "Category", "PhysicalMaterial" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Uniform linear ether drag, the resistance a body experiences to its translation. */" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosPhysicalMaterial.h" },
		{ "ToolTip", "Uniform linear ether drag, the resistance a body experiences to its translation." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosPhysicalMaterial_Statics::NewProp_LinearEtherDrag = { "LinearEtherDrag", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChaosPhysicalMaterial, LinearEtherDrag), METADATA_PARAMS(Z_Construct_UClass_UChaosPhysicalMaterial_Statics::NewProp_LinearEtherDrag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosPhysicalMaterial_Statics::NewProp_LinearEtherDrag_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosPhysicalMaterial_Statics::NewProp_AngularEtherDrag_MetaData[] = {
		{ "Category", "PhysicalMaterial" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Uniform angular ether drag, the resistance a body experiences to its rotation. */" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosPhysicalMaterial.h" },
		{ "ToolTip", "Uniform angular ether drag, the resistance a body experiences to its rotation." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosPhysicalMaterial_Statics::NewProp_AngularEtherDrag = { "AngularEtherDrag", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChaosPhysicalMaterial, AngularEtherDrag), METADATA_PARAMS(Z_Construct_UClass_UChaosPhysicalMaterial_Statics::NewProp_AngularEtherDrag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosPhysicalMaterial_Statics::NewProp_AngularEtherDrag_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosPhysicalMaterial_Statics::NewProp_SleepingLinearVelocityThreshold_MetaData[] = {
		{ "Category", "PhysicalMaterial" },
		{ "ClampMin", "0" },
		{ "Comment", "/** How much to scale the damage threshold by on any destructible we are applied to */" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosPhysicalMaterial.h" },
		{ "ToolTip", "How much to scale the damage threshold by on any destructible we are applied to" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosPhysicalMaterial_Statics::NewProp_SleepingLinearVelocityThreshold = { "SleepingLinearVelocityThreshold", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChaosPhysicalMaterial, SleepingLinearVelocityThreshold), METADATA_PARAMS(Z_Construct_UClass_UChaosPhysicalMaterial_Statics::NewProp_SleepingLinearVelocityThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosPhysicalMaterial_Statics::NewProp_SleepingLinearVelocityThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosPhysicalMaterial_Statics::NewProp_SleepingAngularVelocityThreshold_MetaData[] = {
		{ "Category", "PhysicalMaterial" },
		{ "ClampMin", "0" },
		{ "Comment", "/** How much to scale the damage threshold by on any destructible we are applied to */" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosPhysicalMaterial.h" },
		{ "ToolTip", "How much to scale the damage threshold by on any destructible we are applied to" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaosPhysicalMaterial_Statics::NewProp_SleepingAngularVelocityThreshold = { "SleepingAngularVelocityThreshold", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChaosPhysicalMaterial, SleepingAngularVelocityThreshold), METADATA_PARAMS(Z_Construct_UClass_UChaosPhysicalMaterial_Statics::NewProp_SleepingAngularVelocityThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosPhysicalMaterial_Statics::NewProp_SleepingAngularVelocityThreshold_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UChaosPhysicalMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosPhysicalMaterial_Statics::NewProp_Friction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosPhysicalMaterial_Statics::NewProp_StaticFriction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosPhysicalMaterial_Statics::NewProp_Restitution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosPhysicalMaterial_Statics::NewProp_LinearEtherDrag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosPhysicalMaterial_Statics::NewProp_AngularEtherDrag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosPhysicalMaterial_Statics::NewProp_SleepingLinearVelocityThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosPhysicalMaterial_Statics::NewProp_SleepingAngularVelocityThreshold,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChaosPhysicalMaterial_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChaosPhysicalMaterial>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UChaosPhysicalMaterial_Statics::ClassParams = {
		&UChaosPhysicalMaterial::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UChaosPhysicalMaterial_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UChaosPhysicalMaterial_Statics::PropPointers),
		0,
		0x001020A0u,
		METADATA_PARAMS(Z_Construct_UClass_UChaosPhysicalMaterial_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosPhysicalMaterial_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChaosPhysicalMaterial()
	{
		if (!Z_Registration_Info_UClass_UChaosPhysicalMaterial.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UChaosPhysicalMaterial.OuterSingleton, Z_Construct_UClass_UChaosPhysicalMaterial_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UChaosPhysicalMaterial.OuterSingleton;
	}
	template<> PHYSICSCORE_API UClass* StaticClass<UChaosPhysicalMaterial>()
	{
		return UChaosPhysicalMaterial::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChaosPhysicalMaterial);
	UChaosPhysicalMaterial::~UChaosPhysicalMaterial() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PhysicsCore_Public_Chaos_ChaosPhysicalMaterial_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PhysicsCore_Public_Chaos_ChaosPhysicalMaterial_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UChaosPhysicalMaterial, UChaosPhysicalMaterial::StaticClass, TEXT("UChaosPhysicalMaterial"), &Z_Registration_Info_UClass_UChaosPhysicalMaterial, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UChaosPhysicalMaterial), 1388553456U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PhysicsCore_Public_Chaos_ChaosPhysicalMaterial_h_1472371218(TEXT("/Script/PhysicsCore"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PhysicsCore_Public_Chaos_ChaosPhysicalMaterial_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PhysicsCore_Public_Chaos_ChaosPhysicalMaterial_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
