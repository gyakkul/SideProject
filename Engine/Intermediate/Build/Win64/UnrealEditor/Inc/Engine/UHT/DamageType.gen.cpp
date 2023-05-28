// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/GameFramework/DamageType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDamageType() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UDamageType::StaticRegisterNativesUDamageType()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDamageType);
	UClass* Z_Construct_UClass_UDamageType_NoRegister()
	{
		return UDamageType::StaticClass();
	}
	struct Z_Construct_UClass_UDamageType_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCausedByWorld_MetaData[];
#endif
		static void NewProp_bCausedByWorld_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCausedByWorld;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bScaleMomentumByMass_MetaData[];
#endif
		static void NewProp_bScaleMomentumByMass_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bScaleMomentumByMass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRadialDamageVelChange_MetaData[];
#endif
		static void NewProp_bRadialDamageVelChange_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRadialDamageVelChange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageImpulse_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageImpulse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestructibleImpulse_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DestructibleImpulse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestructibleDamageSpreadScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DestructibleDamageSpreadScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageFalloff_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageFalloff;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDamageType_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDamageType_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A DamageType is intended to define and describe a particular form of damage and to provide an avenue \n * for customizing responses to damage from various sources.\n *\n * For example, a game could make a DamageType_Fire set it up to ignite the damaged actor.\n *\n * DamageTypes are never instanced and should be treated as immutable data holders with static code\n * functionality.  They should never be stateful.\n */" },
		{ "IncludePath", "GameFramework/DamageType.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/DamageType.h" },
		{ "ToolTip", "A DamageType is intended to define and describe a particular form of damage and to provide an avenue\nfor customizing responses to damage from various sources.\n\nFor example, a game could make a DamageType_Fire set it up to ignite the damaged actor.\n\nDamageTypes are never instanced and should be treated as immutable data holders with static code\nfunctionality.  They should never be stateful." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDamageType_Statics::NewProp_bCausedByWorld_MetaData[] = {
		{ "Category", "DamageType" },
		{ "Comment", "/** True if this damagetype is caused by the world (falling off level, into lava, etc). */" },
		{ "ModuleRelativePath", "Classes/GameFramework/DamageType.h" },
		{ "ToolTip", "True if this damagetype is caused by the world (falling off level, into lava, etc)." },
	};
#endif
	void Z_Construct_UClass_UDamageType_Statics::NewProp_bCausedByWorld_SetBit(void* Obj)
	{
		((UDamageType*)Obj)->bCausedByWorld = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDamageType_Statics::NewProp_bCausedByWorld = { "bCausedByWorld", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UDamageType), &Z_Construct_UClass_UDamageType_Statics::NewProp_bCausedByWorld_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDamageType_Statics::NewProp_bCausedByWorld_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDamageType_Statics::NewProp_bCausedByWorld_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDamageType_Statics::NewProp_bScaleMomentumByMass_MetaData[] = {
		{ "Category", "DamageType" },
		{ "Comment", "/** True to scale imparted momentum by the receiving pawn's mass for pawns using character movement */" },
		{ "ModuleRelativePath", "Classes/GameFramework/DamageType.h" },
		{ "ToolTip", "True to scale imparted momentum by the receiving pawn's mass for pawns using character movement" },
	};
#endif
	void Z_Construct_UClass_UDamageType_Statics::NewProp_bScaleMomentumByMass_SetBit(void* Obj)
	{
		((UDamageType*)Obj)->bScaleMomentumByMass = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDamageType_Statics::NewProp_bScaleMomentumByMass = { "bScaleMomentumByMass", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UDamageType), &Z_Construct_UClass_UDamageType_Statics::NewProp_bScaleMomentumByMass_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDamageType_Statics::NewProp_bScaleMomentumByMass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDamageType_Statics::NewProp_bScaleMomentumByMass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDamageType_Statics::NewProp_bRadialDamageVelChange_MetaData[] = {
		{ "Category", "RigidBody" },
		{ "Comment", "/** When applying radial impulses, whether to treat as impulse or velocity change. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/DamageType.h" },
		{ "ToolTip", "When applying radial impulses, whether to treat as impulse or velocity change." },
	};
#endif
	void Z_Construct_UClass_UDamageType_Statics::NewProp_bRadialDamageVelChange_SetBit(void* Obj)
	{
		((UDamageType*)Obj)->bRadialDamageVelChange = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDamageType_Statics::NewProp_bRadialDamageVelChange = { "bRadialDamageVelChange", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UDamageType), &Z_Construct_UClass_UDamageType_Statics::NewProp_bRadialDamageVelChange_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDamageType_Statics::NewProp_bRadialDamageVelChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDamageType_Statics::NewProp_bRadialDamageVelChange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDamageType_Statics::NewProp_DamageImpulse_MetaData[] = {
		{ "Category", "RigidBody" },
		{ "Comment", "/** The magnitude of impulse to apply to the Actors damaged by this type. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/DamageType.h" },
		{ "ToolTip", "The magnitude of impulse to apply to the Actors damaged by this type." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDamageType_Statics::NewProp_DamageImpulse = { "DamageImpulse", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDamageType, DamageImpulse), METADATA_PARAMS(Z_Construct_UClass_UDamageType_Statics::NewProp_DamageImpulse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDamageType_Statics::NewProp_DamageImpulse_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDamageType_Statics::NewProp_DestructibleImpulse_MetaData[] = {
		{ "Category", "Destruction" },
		{ "Comment", "/** How large the impulse should be applied to destructible meshes */" },
		{ "ModuleRelativePath", "Classes/GameFramework/DamageType.h" },
		{ "ToolTip", "How large the impulse should be applied to destructible meshes" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDamageType_Statics::NewProp_DestructibleImpulse = { "DestructibleImpulse", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDamageType, DestructibleImpulse), METADATA_PARAMS(Z_Construct_UClass_UDamageType_Statics::NewProp_DestructibleImpulse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDamageType_Statics::NewProp_DestructibleImpulse_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDamageType_Statics::NewProp_DestructibleDamageSpreadScale_MetaData[] = {
		{ "Category", "Destruction" },
		{ "Comment", "/** How much the damage spreads on a destructible mesh */" },
		{ "ModuleRelativePath", "Classes/GameFramework/DamageType.h" },
		{ "ToolTip", "How much the damage spreads on a destructible mesh" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDamageType_Statics::NewProp_DestructibleDamageSpreadScale = { "DestructibleDamageSpreadScale", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDamageType, DestructibleDamageSpreadScale), METADATA_PARAMS(Z_Construct_UClass_UDamageType_Statics::NewProp_DestructibleDamageSpreadScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDamageType_Statics::NewProp_DestructibleDamageSpreadScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDamageType_Statics::NewProp_DamageFalloff_MetaData[] = {
		{ "Category", "DamageType" },
		{ "Comment", "/** Damage fall-off for radius damage (exponent).  Default 1.0=linear, 2.0=square of distance, etc. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/DamageType.h" },
		{ "ToolTip", "Damage fall-off for radius damage (exponent).  Default 1.0=linear, 2.0=square of distance, etc." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDamageType_Statics::NewProp_DamageFalloff = { "DamageFalloff", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDamageType, DamageFalloff), METADATA_PARAMS(Z_Construct_UClass_UDamageType_Statics::NewProp_DamageFalloff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDamageType_Statics::NewProp_DamageFalloff_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDamageType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamageType_Statics::NewProp_bCausedByWorld,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamageType_Statics::NewProp_bScaleMomentumByMass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamageType_Statics::NewProp_bRadialDamageVelChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamageType_Statics::NewProp_DamageImpulse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamageType_Statics::NewProp_DestructibleImpulse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamageType_Statics::NewProp_DestructibleDamageSpreadScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamageType_Statics::NewProp_DamageFalloff,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDamageType_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDamageType>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDamageType_Statics::ClassParams = {
		&UDamageType::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDamageType_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDamageType_Statics::PropPointers),
		0,
		0x000900A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDamageType_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDamageType_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDamageType()
	{
		if (!Z_Registration_Info_UClass_UDamageType.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDamageType.OuterSingleton, Z_Construct_UClass_UDamageType_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDamageType.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UDamageType>()
	{
		return UDamageType::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDamageType);
	UDamageType::~UDamageType() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_DamageType_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_DamageType_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDamageType, UDamageType::StaticClass, TEXT("UDamageType"), &Z_Registration_Info_UClass_UDamageType, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDamageType), 1694956682U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_DamageType_h_3303501173(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_DamageType_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_DamageType_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
