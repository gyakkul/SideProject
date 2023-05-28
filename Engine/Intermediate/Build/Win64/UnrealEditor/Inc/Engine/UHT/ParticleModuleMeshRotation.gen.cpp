// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Particles/Rotation/ParticleModuleMeshRotation.h"
#include "../../Source/Runtime/Engine/Classes/Distributions/DistributionVector.h"
#include "../../Source/Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleMeshRotation() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleMeshRotation();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleMeshRotation_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleRotationBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UParticleModuleMeshRotation::StaticRegisterNativesUParticleModuleMeshRotation()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleMeshRotation);
	UClass* Z_Construct_UClass_UParticleModuleMeshRotation_NoRegister()
	{
		return UParticleModuleMeshRotation::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleMeshRotation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInheritParent_MetaData[];
#endif
		static void NewProp_bInheritParent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInheritParent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleMeshRotation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleRotationBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleMeshRotation_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Init Mesh Rotation" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Rotation/ParticleModuleMeshRotation.h" },
		{ "ModuleRelativePath", "Classes/Particles/Rotation/ParticleModuleMeshRotation.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleMeshRotation_Statics::NewProp_StartRotation_MetaData[] = {
		{ "Category", "Rotation" },
		{ "Comment", "/**\n\x09 *\x09Initial rotation in ROTATIONS PER SECOND (1 = 360 degrees).\n\x09 *\x09The value is retrieved using the EmitterTime.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Rotation/ParticleModuleMeshRotation.h" },
		{ "ToolTip", "Initial rotation in ROTATIONS PER SECOND (1 = 360 degrees).\nThe value is retrieved using the EmitterTime." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleMeshRotation_Statics::NewProp_StartRotation = { "StartRotation", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleMeshRotation, StartRotation), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleMeshRotation_Statics::NewProp_StartRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleMeshRotation_Statics::NewProp_StartRotation_MetaData)) }; // 3056335262
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleMeshRotation_Statics::NewProp_bInheritParent_MetaData[] = {
		{ "Category", "Rotation" },
		{ "Comment", "/** If true, apply the parents rotation as well. */" },
		{ "ModuleRelativePath", "Classes/Particles/Rotation/ParticleModuleMeshRotation.h" },
		{ "ToolTip", "If true, apply the parents rotation as well." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleMeshRotation_Statics::NewProp_bInheritParent_SetBit(void* Obj)
	{
		((UParticleModuleMeshRotation*)Obj)->bInheritParent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleMeshRotation_Statics::NewProp_bInheritParent = { "bInheritParent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleMeshRotation), &Z_Construct_UClass_UParticleModuleMeshRotation_Statics::NewProp_bInheritParent_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleMeshRotation_Statics::NewProp_bInheritParent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleMeshRotation_Statics::NewProp_bInheritParent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleMeshRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleMeshRotation_Statics::NewProp_StartRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleMeshRotation_Statics::NewProp_bInheritParent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleMeshRotation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleMeshRotation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleMeshRotation_Statics::ClassParams = {
		&UParticleModuleMeshRotation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleMeshRotation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleMeshRotation_Statics::PropPointers),
		0,
		0x008810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleMeshRotation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleMeshRotation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleMeshRotation()
	{
		if (!Z_Registration_Info_UClass_UParticleModuleMeshRotation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleMeshRotation.OuterSingleton, Z_Construct_UClass_UParticleModuleMeshRotation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParticleModuleMeshRotation.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UParticleModuleMeshRotation>()
	{
		return UParticleModuleMeshRotation::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleMeshRotation);
	UParticleModuleMeshRotation::~UParticleModuleMeshRotation() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Rotation_ParticleModuleMeshRotation_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Rotation_ParticleModuleMeshRotation_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleMeshRotation, UParticleModuleMeshRotation::StaticClass, TEXT("UParticleModuleMeshRotation"), &Z_Registration_Info_UClass_UParticleModuleMeshRotation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleMeshRotation), 1292774642U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Rotation_ParticleModuleMeshRotation_h_443796043(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Rotation_ParticleModuleMeshRotation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Rotation_ParticleModuleMeshRotation_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
