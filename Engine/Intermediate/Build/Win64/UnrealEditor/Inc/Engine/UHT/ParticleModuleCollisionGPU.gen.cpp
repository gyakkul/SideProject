// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Particles/Collision/ParticleModuleCollisionGPU.h"
#include "../../Source/Runtime/Engine/Classes/Distributions/DistributionFloat.h"
#include "../../Source/Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleCollisionGPU() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleCollisionBase();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleCollisionGPU();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleCollisionGPU_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleCollisionMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleCollisionResponse();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EParticleCollisionResponse;
	static UEnum* EParticleCollisionResponse_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EParticleCollisionResponse.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EParticleCollisionResponse.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EParticleCollisionResponse, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EParticleCollisionResponse"));
		}
		return Z_Registration_Info_UEnum_EParticleCollisionResponse.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EParticleCollisionResponse::Type>()
	{
		return EParticleCollisionResponse_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EParticleCollisionResponse_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EParticleCollisionResponse_Statics::Enumerators[] = {
		{ "EParticleCollisionResponse::Bounce", (int64)EParticleCollisionResponse::Bounce },
		{ "EParticleCollisionResponse::Stop", (int64)EParticleCollisionResponse::Stop },
		{ "EParticleCollisionResponse::Kill", (int64)EParticleCollisionResponse::Kill },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EParticleCollisionResponse_Statics::Enum_MetaDataParams[] = {
		{ "Bounce.Comment", "/** The particle will bounce off of the surface. */" },
		{ "Bounce.Name", "EParticleCollisionResponse::Bounce" },
		{ "Bounce.ToolTip", "The particle will bounce off of the surface." },
		{ "Comment", "/**\n * How particles respond to collision events.\n */" },
		{ "Kill.Comment", "/** The particle will be killed. */" },
		{ "Kill.Name", "EParticleCollisionResponse::Kill" },
		{ "Kill.ToolTip", "The particle will be killed." },
		{ "ModuleRelativePath", "Classes/Particles/Collision/ParticleModuleCollisionGPU.h" },
		{ "Stop.Comment", "/** The particle will stop on the surface. */" },
		{ "Stop.Name", "EParticleCollisionResponse::Stop" },
		{ "Stop.ToolTip", "The particle will stop on the surface." },
		{ "ToolTip", "How particles respond to collision events." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EParticleCollisionResponse_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EParticleCollisionResponse",
		"EParticleCollisionResponse::Type",
		Z_Construct_UEnum_Engine_EParticleCollisionResponse_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EParticleCollisionResponse_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EParticleCollisionResponse_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EParticleCollisionResponse_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EParticleCollisionResponse()
	{
		if (!Z_Registration_Info_UEnum_EParticleCollisionResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EParticleCollisionResponse.InnerSingleton, Z_Construct_UEnum_Engine_EParticleCollisionResponse_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EParticleCollisionResponse.InnerSingleton;
	}
	void UParticleModuleCollisionGPU::StaticRegisterNativesUParticleModuleCollisionGPU()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleCollisionGPU);
	UClass* Z_Construct_UClass_UParticleModuleCollisionGPU_NoRegister()
	{
		return UParticleModuleCollisionGPU::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleCollisionGPU_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Resilience_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Resilience;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResilienceScaleOverLife_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ResilienceScaleOverLife;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Friction_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Friction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RandomSpread_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RandomSpread;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RandomDistribution_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RandomDistribution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RadiusScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RadiusScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RadiusBias_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RadiusBias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Response_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Response;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleCollisionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Collision" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Collision/ParticleModuleCollisionGPU.h" },
		{ "ModuleRelativePath", "Classes/Particles/Collision/ParticleModuleCollisionGPU.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::NewProp_Resilience_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Classes/Particles/Collision/ParticleModuleCollisionGPU.h" },
		{ "ToolTip", "The bounciness of the particle." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::NewProp_Resilience = { "Resilience", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleCollisionGPU, Resilience), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::NewProp_Resilience_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::NewProp_Resilience_MetaData)) }; // 2827880765
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::NewProp_ResilienceScaleOverLife_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Classes/Particles/Collision/ParticleModuleCollisionGPU.h" },
		{ "ToolTip", "Scales the bounciness of the particle over its life." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::NewProp_ResilienceScaleOverLife = { "ResilienceScaleOverLife", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleCollisionGPU, ResilienceScaleOverLife), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::NewProp_ResilienceScaleOverLife_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::NewProp_ResilienceScaleOverLife_MetaData)) }; // 2827880765
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::NewProp_Friction_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** \n\x09 * Friction applied to all particles during a collision or while moving\n\x09 * along a surface.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Collision/ParticleModuleCollisionGPU.h" },
		{ "ToolTip", "Friction applied to all particles during a collision or while moving\nalong a surface." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::NewProp_Friction = { "Friction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleCollisionGPU, Friction), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::NewProp_Friction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::NewProp_Friction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::NewProp_RandomSpread_MetaData[] = {
		{ "Category", "Collision" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** \n\x09 * Controls how wide the bouncing particles are distributed (0 = disabled).\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Collision/ParticleModuleCollisionGPU.h" },
		{ "ToolTip", "Controls how wide the bouncing particles are distributed (0 = disabled)." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::NewProp_RandomSpread = { "RandomSpread", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleCollisionGPU, RandomSpread), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::NewProp_RandomSpread_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::NewProp_RandomSpread_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::NewProp_RandomDistribution_MetaData[] = {
		{ "Category", "Collision" },
		{ "ClampMin", "1" },
		{ "Comment", "/** \n\x09 * Controls bouncing particles distribution (1 = uniform distribution; 2 = squared distribution).\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Collision/ParticleModuleCollisionGPU.h" },
		{ "ToolTip", "Controls bouncing particles distribution (1 = uniform distribution; 2 = squared distribution)." },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::NewProp_RandomDistribution = { "RandomDistribution", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleCollisionGPU, RandomDistribution), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::NewProp_RandomDistribution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::NewProp_RandomDistribution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::NewProp_RadiusScale_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/**\n\x09 * Scale applied to the size of the particle to obtain the collision radius.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Collision/ParticleModuleCollisionGPU.h" },
		{ "ToolTip", "Scale applied to the size of the particle to obtain the collision radius." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::NewProp_RadiusScale = { "RadiusScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleCollisionGPU, RadiusScale), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::NewProp_RadiusScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::NewProp_RadiusScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::NewProp_RadiusBias_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/**\n\x09 * Bias applied to the collision radius.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Collision/ParticleModuleCollisionGPU.h" },
		{ "ToolTip", "Bias applied to the collision radius." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::NewProp_RadiusBias = { "RadiusBias", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleCollisionGPU, RadiusBias), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::NewProp_RadiusBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::NewProp_RadiusBias_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::NewProp_Response_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/**\n\x09 * How particles respond to a collision event.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Collision/ParticleModuleCollisionGPU.h" },
		{ "ToolTip", "How particles respond to a collision event." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleCollisionGPU, Response), Z_Construct_UEnum_Engine_EParticleCollisionResponse, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::NewProp_Response_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::NewProp_Response_MetaData)) }; // 3013461940
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::NewProp_CollisionMode_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Classes/Particles/Collision/ParticleModuleCollisionGPU.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::NewProp_CollisionMode = { "CollisionMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleCollisionGPU, CollisionMode), Z_Construct_UEnum_Engine_EParticleCollisionMode, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::NewProp_CollisionMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::NewProp_CollisionMode_MetaData)) }; // 399463388
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::NewProp_Resilience,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::NewProp_ResilienceScaleOverLife,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::NewProp_Friction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::NewProp_RandomSpread,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::NewProp_RandomDistribution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::NewProp_RadiusScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::NewProp_RadiusBias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::NewProp_Response,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::NewProp_CollisionMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleCollisionGPU>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::ClassParams = {
		&UParticleModuleCollisionGPU::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::PropPointers),
		0,
		0x008810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleCollisionGPU()
	{
		if (!Z_Registration_Info_UClass_UParticleModuleCollisionGPU.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleCollisionGPU.OuterSingleton, Z_Construct_UClass_UParticleModuleCollisionGPU_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParticleModuleCollisionGPU.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UParticleModuleCollisionGPU>()
	{
		return UParticleModuleCollisionGPU::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleCollisionGPU);
	UParticleModuleCollisionGPU::~UParticleModuleCollisionGPU() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionGPU_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionGPU_h_Statics::EnumInfo[] = {
		{ EParticleCollisionResponse_StaticEnum, TEXT("EParticleCollisionResponse"), &Z_Registration_Info_UEnum_EParticleCollisionResponse, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3013461940U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionGPU_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleCollisionGPU, UParticleModuleCollisionGPU::StaticClass, TEXT("UParticleModuleCollisionGPU"), &Z_Registration_Info_UClass_UParticleModuleCollisionGPU, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleCollisionGPU), 4058529395U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionGPU_h_3508087378(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionGPU_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionGPU_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionGPU_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionGPU_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
