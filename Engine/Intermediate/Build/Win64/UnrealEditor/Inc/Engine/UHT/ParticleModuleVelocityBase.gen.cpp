// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Particles/Velocity/ParticleModuleVelocityBase.h"
#include "../../Source/Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleVelocityBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModule();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVelocityBase();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVelocityBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UParticleModuleVelocityBase::StaticRegisterNativesUParticleModuleVelocityBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleVelocityBase);
	UClass* Z_Construct_UClass_UParticleModuleVelocityBase_NoRegister()
	{
		return UParticleModuleVelocityBase::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleVelocityBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInWorldSpace_MetaData[];
#endif
		static void NewProp_bInWorldSpace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInWorldSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyOwnerScale_MetaData[];
#endif
		static void NewProp_bApplyOwnerScale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyOwnerScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleVelocityBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModule,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleVelocityBase_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Velocity" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Particles/Velocity/ParticleModuleVelocityBase.h" },
		{ "ModuleRelativePath", "Classes/Particles/Velocity/ParticleModuleVelocityBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleVelocityBase_Statics::NewProp_bInWorldSpace_MetaData[] = {
		{ "Category", "Velocity" },
		{ "Comment", "/**\n\x09 *\x09If true, then treat the velocity as world-space defined.\n\x09 *\x09NOTE: LocalSpace emitters that are moving will see strange results...\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Velocity/ParticleModuleVelocityBase.h" },
		{ "ToolTip", "If true, then treat the velocity as world-space defined.\nNOTE: LocalSpace emitters that are moving will see strange results..." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleVelocityBase_Statics::NewProp_bInWorldSpace_SetBit(void* Obj)
	{
		((UParticleModuleVelocityBase*)Obj)->bInWorldSpace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleVelocityBase_Statics::NewProp_bInWorldSpace = { "bInWorldSpace", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleVelocityBase), &Z_Construct_UClass_UParticleModuleVelocityBase_Statics::NewProp_bInWorldSpace_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleVelocityBase_Statics::NewProp_bInWorldSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVelocityBase_Statics::NewProp_bInWorldSpace_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleVelocityBase_Statics::NewProp_bApplyOwnerScale_MetaData[] = {
		{ "Category", "Velocity" },
		{ "Comment", "/** If true, then apply the particle system components scale to the velocity value. */" },
		{ "ModuleRelativePath", "Classes/Particles/Velocity/ParticleModuleVelocityBase.h" },
		{ "ToolTip", "If true, then apply the particle system components scale to the velocity value." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleVelocityBase_Statics::NewProp_bApplyOwnerScale_SetBit(void* Obj)
	{
		((UParticleModuleVelocityBase*)Obj)->bApplyOwnerScale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleVelocityBase_Statics::NewProp_bApplyOwnerScale = { "bApplyOwnerScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleVelocityBase), &Z_Construct_UClass_UParticleModuleVelocityBase_Statics::NewProp_bApplyOwnerScale_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleVelocityBase_Statics::NewProp_bApplyOwnerScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVelocityBase_Statics::NewProp_bApplyOwnerScale_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleVelocityBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleVelocityBase_Statics::NewProp_bInWorldSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleVelocityBase_Statics::NewProp_bApplyOwnerScale,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleVelocityBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleVelocityBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleVelocityBase_Statics::ClassParams = {
		&UParticleModuleVelocityBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleVelocityBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVelocityBase_Statics::PropPointers),
		0,
		0x000010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleVelocityBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVelocityBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleVelocityBase()
	{
		if (!Z_Registration_Info_UClass_UParticleModuleVelocityBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleVelocityBase.OuterSingleton, Z_Construct_UClass_UParticleModuleVelocityBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParticleModuleVelocityBase.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UParticleModuleVelocityBase>()
	{
		return UParticleModuleVelocityBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleVelocityBase);
	UParticleModuleVelocityBase::~UParticleModuleVelocityBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Velocity_ParticleModuleVelocityBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Velocity_ParticleModuleVelocityBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleVelocityBase, UParticleModuleVelocityBase::StaticClass, TEXT("UParticleModuleVelocityBase"), &Z_Registration_Info_UClass_UParticleModuleVelocityBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleVelocityBase), 1669794807U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Velocity_ParticleModuleVelocityBase_h_3453910628(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Velocity_ParticleModuleVelocityBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Velocity_ParticleModuleVelocityBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
