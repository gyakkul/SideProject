// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Particles/Collision/ParticleModuleCollisionBase.h"
#include "../../Source/Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleCollisionBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModule();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleCollisionBase();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleCollisionBase_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleCollisionComplete();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EParticleCollisionComplete;
	static UEnum* EParticleCollisionComplete_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EParticleCollisionComplete.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EParticleCollisionComplete.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EParticleCollisionComplete, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EParticleCollisionComplete"));
		}
		return Z_Registration_Info_UEnum_EParticleCollisionComplete.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EParticleCollisionComplete>()
	{
		return EParticleCollisionComplete_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EParticleCollisionComplete_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EParticleCollisionComplete_Statics::Enumerators[] = {
		{ "EPCC_Kill", (int64)EPCC_Kill },
		{ "EPCC_Freeze", (int64)EPCC_Freeze },
		{ "EPCC_HaltCollisions", (int64)EPCC_HaltCollisions },
		{ "EPCC_FreezeTranslation", (int64)EPCC_FreezeTranslation },
		{ "EPCC_FreezeRotation", (int64)EPCC_FreezeRotation },
		{ "EPCC_FreezeMovement", (int64)EPCC_FreezeMovement },
		{ "EPCC_MAX", (int64)EPCC_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EParticleCollisionComplete_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09""Flags indicating what to do with the particle when MaxCollisions is reached\n */" },
		{ "EPCC_Freeze.Comment", "/**\x09""Freeze the particle in place\x09\x09\x09\x09\x09\x09*/" },
		{ "EPCC_Freeze.DisplayName", "Freeze" },
		{ "EPCC_Freeze.Name", "EPCC_Freeze" },
		{ "EPCC_Freeze.ToolTip", "Freeze the particle in place" },
		{ "EPCC_FreezeMovement.Comment", "/**\x09Stop all movement of the particle\x09\x09\x09\x09\x09*/" },
		{ "EPCC_FreezeMovement.DisplayName", "Freeze Movement" },
		{ "EPCC_FreezeMovement.Name", "EPCC_FreezeMovement" },
		{ "EPCC_FreezeMovement.ToolTip", "Stop all movement of the particle" },
		{ "EPCC_FreezeRotation.Comment", "/**\x09Stop rotations of the particle\x09\x09\x09\x09\x09\x09*/" },
		{ "EPCC_FreezeRotation.DisplayName", "Freeze Rotation" },
		{ "EPCC_FreezeRotation.Name", "EPCC_FreezeRotation" },
		{ "EPCC_FreezeRotation.ToolTip", "Stop rotations of the particle" },
		{ "EPCC_FreezeTranslation.Comment", "/**\x09Stop translations of the particle\x09\x09\x09\x09\x09*/" },
		{ "EPCC_FreezeTranslation.DisplayName", "Freeze Translation" },
		{ "EPCC_FreezeTranslation.Name", "EPCC_FreezeTranslation" },
		{ "EPCC_FreezeTranslation.ToolTip", "Stop translations of the particle" },
		{ "EPCC_HaltCollisions.Comment", "/**\x09Stop collision checks, but keep updating\x09\x09\x09*/" },
		{ "EPCC_HaltCollisions.DisplayName", "Halt Collisions" },
		{ "EPCC_HaltCollisions.Name", "EPCC_HaltCollisions" },
		{ "EPCC_HaltCollisions.ToolTip", "Stop collision checks, but keep updating" },
		{ "EPCC_Kill.Comment", "/**\x09Kill the particle when MaxCollisions is reached\x09\x09*/" },
		{ "EPCC_Kill.DisplayName", "Kill" },
		{ "EPCC_Kill.Name", "EPCC_Kill" },
		{ "EPCC_Kill.ToolTip", "Kill the particle when MaxCollisions is reached" },
		{ "EPCC_MAX.Name", "EPCC_MAX" },
		{ "ModuleRelativePath", "Classes/Particles/Collision/ParticleModuleCollisionBase.h" },
		{ "ToolTip", "Flags indicating what to do with the particle when MaxCollisions is reached" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EParticleCollisionComplete_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EParticleCollisionComplete",
		"EParticleCollisionComplete",
		Z_Construct_UEnum_Engine_EParticleCollisionComplete_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EParticleCollisionComplete_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EParticleCollisionComplete_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EParticleCollisionComplete_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EParticleCollisionComplete()
	{
		if (!Z_Registration_Info_UEnum_EParticleCollisionComplete.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EParticleCollisionComplete.InnerSingleton, Z_Construct_UEnum_Engine_EParticleCollisionComplete_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EParticleCollisionComplete.InnerSingleton;
	}
	void UParticleModuleCollisionBase::StaticRegisterNativesUParticleModuleCollisionBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleCollisionBase);
	UClass* Z_Construct_UClass_UParticleModuleCollisionBase_NoRegister()
	{
		return UParticleModuleCollisionBase::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleCollisionBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleCollisionBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModule,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleCollisionBase_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Collision" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Particles/Collision/ParticleModuleCollisionBase.h" },
		{ "ModuleRelativePath", "Classes/Particles/Collision/ParticleModuleCollisionBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleCollisionBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleCollisionBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleCollisionBase_Statics::ClassParams = {
		&UParticleModuleCollisionBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleCollisionBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleCollisionBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleCollisionBase()
	{
		if (!Z_Registration_Info_UClass_UParticleModuleCollisionBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleCollisionBase.OuterSingleton, Z_Construct_UClass_UParticleModuleCollisionBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParticleModuleCollisionBase.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UParticleModuleCollisionBase>()
	{
		return UParticleModuleCollisionBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleCollisionBase);
	UParticleModuleCollisionBase::~UParticleModuleCollisionBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionBase_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionBase_h_Statics::EnumInfo[] = {
		{ EParticleCollisionComplete_StaticEnum, TEXT("EParticleCollisionComplete"), &Z_Registration_Info_UEnum_EParticleCollisionComplete, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1620442959U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleCollisionBase, UParticleModuleCollisionBase::StaticClass, TEXT("UParticleModuleCollisionBase"), &Z_Registration_Info_UClass_UParticleModuleCollisionBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleCollisionBase), 2232106795U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionBase_h_3045043133(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionBase_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionBase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Collision_ParticleModuleCollisionBase_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
